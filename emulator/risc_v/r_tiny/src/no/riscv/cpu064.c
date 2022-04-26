
/*------------------------------------
 * cpu64.c
 * Create:  2021-03-04
 * Author:  Steve Rui
 *------------------------------------
 * Record:
 *
 *
 *
 *
 *------------------------------------
 */

#include "0ctr.h"
/*================================================================*/
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <inttypes.h>
#include <assert.h>
#include <fcntl.h>
#undef	MAX_XLEN
#define MAX_XLEN 			64

#include "cutils.h"
#include "iomem.h"
#include "cpu.h"

#ifndef MAX_XLEN
#error MAX_XLEN must be defined
#endif
#ifndef CONFIG_RISCV_MAX_XLEN
#error CONFIG_RISCV_MAX_XLEN must be defined
#endif

//#define DUMP_INVALID_MEM_ACCESS
//#define DUMP_MMU_EXCEPTIONS
//#define DUMP_INTERRUPTS
//#define DUMP_INVALID_CSR
//#define DUMP_EXCEPTIONS
//#define DUMP_CSR
//#define CONFIG_LOGFILE

#include "cpu_priv.h"

#if FLEN > 0
#include "softfp.h"
#endif

#ifdef USE_GLOBAL_STATE
static RISCVCPUState riscv_cpu_global_state;
#endif
#ifdef USE_GLOBAL_VARIABLES
#define code_ptr s->__code_ptr
#define code_end s->__code_end
#define code_to_pc_addend s->__code_to_pc_addend
#endif

#ifdef CONFIG_LOGFILE
static FILE *log_file;

static void log_vprintf(const char *fmt, va_list ap)
{
    if (!log_file)
        log_file = fopen("/tmp/riscemu.log", "wb");
    vfprintf(log_file, fmt, ap);
}
#else
static void log_vprintf(const char *fmt, va_list ap)
{
    vprintf(fmt, ap);
}
#endif

static void __attribute__((format(printf, 1, 2), unused)) log_printf(const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    log_vprintf(fmt, ap);
    va_end(ap);
}

#if MAX_XLEN == 128
static void fprint_target_ulong(FILE *f, target_ulong a)
{
    fprintf(f, "%016" PRIx64 "%016" PRIx64, (uint64_t)(a >> 64), (uint64_t)a);
}
#else
static void fprint_target_ulong(FILE *f, target_ulong a)
{
    fprintf(f, "%" PR_target_ulong, a);
}
#endif

static void print_target_ulong(target_ulong a)
{
    fprint_target_ulong(stdout, a);
}

static char *reg_name[32] = {
"zero", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
"s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
"a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
"s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

static void dump_regs(RISCVCPUState *s)
{
    int i, cols;
    const char priv_str[4] = "USHM";
    cols = 256 / MAX_XLEN;
    printf("pc =");
    print_target_ulong(s->pc);
    printf(" ");
    for(i = 1; i < 32; i++) {
        printf("%-3s=", reg_name[i]);
        print_target_ulong(s->reg[i]);
        if ((i & (cols - 1)) == (cols - 1))
            printf("\n");
        else
            printf(" ");
    }
    printf("priv=%c", priv_str[s->priv]);
    printf(" mstatus=");
    print_target_ulong(s->mstatus);
    printf(" cycles=%" PRId64, s->insn_counter);
    printf("\n");
#if 1
    printf(" mideleg=");
    print_target_ulong(s->mideleg);
    printf(" mie=");
    print_target_ulong(s->mie);
    printf(" mip=");
    print_target_ulong(s->mip);
    printf("\n");
#endif
}

static __attribute__((unused)) void cpu_abort(RISCVCPUState *s)
{
    dump_regs(s);
    abort();
}

/* addr must be aligned. Only RAM accesses are supported */
#define PHYS_MEM_READ_WRITE(size, uint_type) \
static __maybe_unused inline void phys_write_u ## size(RISCVCPUState *s, target_ulong addr,\
                                        uint_type val)                   \
{\
    PhysMemoryRange *pr = get_phys_mem_range(s->mem_map, addr);\
    if (!pr || !pr->is_ram)\
        return;\
    *(uint_type *)(pr->phys_mem + \
                 (uintptr_t)(addr - pr->addr)) = val;\
}\
\
static __maybe_unused inline uint_type phys_read_u ## size(RISCVCPUState *s, target_ulong addr) \
{\
    PhysMemoryRange *pr = get_phys_mem_range(s->mem_map, addr);\
    if (!pr || !pr->is_ram)\
        return 0;\
    return *(uint_type *)(pr->phys_mem + \
                          (uintptr_t)(addr - pr->addr));     \
}

PHYS_MEM_READ_WRITE(8, uint8_t)
PHYS_MEM_READ_WRITE(32, uint32_t)
PHYS_MEM_READ_WRITE(64, uint64_t)

#define PTE_V_MASK (1 << 0)
#define PTE_U_MASK (1 << 4)
#define PTE_A_MASK (1 << 6)
#define PTE_D_MASK (1 << 7)

#define ACCESS_READ  0
#define ACCESS_WRITE 1
#define ACCESS_CODE  2

/* access = 0: read, 1 = write, 2 = code. Set the exception_pending
   field if necessary. return 0 if OK, -1 if translation error */
static int get_phys_addr(RISCVCPUState *s,
                         target_ulong *ppaddr, target_ulong vaddr,
                         int access)
{
    int mode, levels, pte_bits, pte_idx, pte_mask, pte_size_log2, xwr, priv;
    int need_write, vaddr_shift, i, pte_addr_bits;
    target_ulong pte_addr, pte, vaddr_mask, paddr;

    if ((s->mstatus & MSTATUS_MPRV) && access != ACCESS_CODE) {
        /* use previous priviledge */
        priv = (s->mstatus >> MSTATUS_MPP_SHIFT) & 3;
    } else {
        priv = s->priv;
    }

    if (priv == PRV_M) {
        if (s->cur_xlen < MAX_XLEN) {
            /* truncate virtual address */
            *ppaddr = vaddr & (((target_ulong)1 << s->cur_xlen) - 1);
        } else {
            *ppaddr = vaddr;
        }
        return 0;
    }
#if MAX_XLEN == 32
    /* 32 bits */
    mode = s->satp >> 31;
    if (mode == 0) {
        /* bare: no translation */
        *ppaddr = vaddr;
        return 0;
    } else {
        /* sv32 */
        levels = 2;
        pte_size_log2 = 2;
        pte_addr_bits = 22;
    }
#else
    mode = (s->satp >> 60) & 0xf;
    if (mode == 0) {
        /* bare: no translation */
        *ppaddr = vaddr;
        return 0;
    } else {
        /* sv39/sv48 */
        levels = mode - 8 + 3;
        pte_size_log2 = 3;
        vaddr_shift = MAX_XLEN - (PG_SHIFT + levels * 9);
        if ((((target_long)vaddr << vaddr_shift) >> vaddr_shift) != vaddr)
            return -1;
        pte_addr_bits = 44;
    }
#endif
    pte_addr = (s->satp & (((target_ulong)1 << pte_addr_bits) - 1)) << PG_SHIFT;
    pte_bits = 12 - pte_size_log2;
    pte_mask = (1 << pte_bits) - 1;
    for(i = 0; i < levels; i++) {
        vaddr_shift = PG_SHIFT + pte_bits * (levels - 1 - i);
        pte_idx = (vaddr >> vaddr_shift) & pte_mask;
        pte_addr += pte_idx << pte_size_log2;
        if (pte_size_log2 == 2)
            pte = phys_read_u32(s, pte_addr);
        else
            pte = phys_read_u64(s, pte_addr);
        //printf("pte=0x%08" PRIx64 "\n", pte);
        if (!(pte & PTE_V_MASK))
            return -1; /* invalid PTE */
        paddr = (pte >> 10) << PG_SHIFT;
        xwr = (pte >> 1) & 7;
        if (xwr != 0) {
            if (xwr == 2 || xwr == 6)
                return -1;
            /* priviledge check */
            if (priv == PRV_S) {
                if ((pte & PTE_U_MASK) && !(s->mstatus & MSTATUS_SUM))
                    return -1;
            } else {
                if (!(pte & PTE_U_MASK))
                    return -1;
            }
            /* protection check */
            /* MXR allows read access to execute-only pages */
            if (s->mstatus & MSTATUS_MXR)
                xwr |= (xwr >> 2);

            if (((xwr >> access) & 1) == 0)
                return -1;
            need_write = !(pte & PTE_A_MASK) ||
                (!(pte & PTE_D_MASK) && access == ACCESS_WRITE);
            pte |= PTE_A_MASK;
            if (access == ACCESS_WRITE)
                pte |= PTE_D_MASK;
            if (need_write) {
                if (pte_size_log2 == 2)
                    phys_write_u32(s, pte_addr, pte);
                else
                    phys_write_u64(s, pte_addr, pte);
            }
            vaddr_mask = ((target_ulong)1 << vaddr_shift) - 1;
            *ppaddr = (vaddr & vaddr_mask) | (paddr  & ~vaddr_mask);
            return 0;
        } else {
            pte_addr = paddr;
        }
    }
    return -1;
}

/* return 0 if OK, != 0 if exception */
int target_read_slow(RISCVCPUState *s, mem_uint_t *pval,
                     target_ulong addr, int size_log2)
{
    int size, tlb_idx, err, al;
    target_ulong paddr, offset;
    uint8_t *ptr;
    PhysMemoryRange *pr;
    mem_uint_t ret;

    /* first handle unaligned accesses */
    size = 1 << size_log2;
    al = addr & (size - 1);
    if (al != 0) {
        switch(size_log2) {
        case 1:
            {
                uint8_t v0, v1;
                err = target_read_u8(s, &v0, addr);
                if (err)
                    return err;
                err = target_read_u8(s, &v1, addr + 1);
                if (err)
                    return err;
                ret = v0 | (v1 << 8);
            }
            break;
        case 2:
            {
                uint32_t v0, v1;
                addr -= al;
                err = target_read_u32(s, &v0, addr);
                if (err)
                    return err;
                err = target_read_u32(s, &v1, addr + 4);
                if (err)
                    return err;
                ret = (v0 >> (al * 8)) | (v1 << (32 - al * 8));
            }
            break;
#if MLEN >= 64
        case 3:
            {
                uint64_t v0, v1;
                addr -= al;
                err = target_read_u64(s, &v0, addr);
                if (err)
                    return err;
                err = target_read_u64(s, &v1, addr + 8);
                if (err)
                    return err;
                ret = (v0 >> (al * 8)) | (v1 << (64 - al * 8));
            }
            break;
#endif
#if MLEN >= 128
        case 4:
            {
                uint128_t v0, v1;
                addr -= al;
                err = target_read_u128(s, &v0, addr);
                if (err)
                    return err;
                err = target_read_u128(s, &v1, addr + 16);
                if (err)
                    return err;
                ret = (v0 >> (al * 8)) | (v1 << (128 - al * 8));
            }
            break;
#endif
        default:
            abort();
        }
    } else {
        if (get_phys_addr(s, &paddr, addr, ACCESS_READ)) {
            s->pending_tval = addr;
            s->pending_exception = CAUSE_LOAD_PAGE_FAULT;
            return -1;
        }
        pr = get_phys_mem_range(s->mem_map, paddr);
        if (!pr) {
#ifdef DUMP_INVALID_MEM_ACCESS
            printf("target_read_slow: invalid physical address 0x");
            print_target_ulong(paddr);
            printf("\n");
#endif
            return 0;
        } else if (pr->is_ram) {
            tlb_idx = (addr >> PG_SHIFT) & (TLB_SIZE - 1);
            ptr = pr->phys_mem + (uintptr_t)(paddr - pr->addr);
            s->tlb_read[tlb_idx].vaddr = addr & ~PG_MASK;
            s->tlb_read[tlb_idx].mem_addend = (uintptr_t)ptr - addr;
            switch(size_log2) {
            case 0:
                ret = *(uint8_t *)ptr;
                break;
            case 1:
                ret = *(uint16_t *)ptr;
                break;
            case 2:
                ret = *(uint32_t *)ptr;
                break;
#if MLEN >= 64
            case 3:
                ret = *(uint64_t *)ptr;
                break;
#endif
#if MLEN >= 128
            case 4:
                ret = *(uint128_t *)ptr;
                break;
#endif
            default:
                abort();
            }
        } else {
            offset = paddr - pr->addr;
            if (((pr->devio_flags >> size_log2) & 1) != 0) {
                ret = pr->read_func(pr->opaque, offset, size_log2);
            }
#if MLEN >= 64
            else if ((pr->devio_flags & DEVIO_SIZE32) && size_log2 == 3) {
                /* emulate 64 bit access */
                ret = pr->read_func(pr->opaque, offset, 2);
                ret |= (uint64_t)pr->read_func(pr->opaque, offset + 4, 2) << 32;

            }
#endif
            else {
#ifdef DUMP_INVALID_MEM_ACCESS
                printf("unsupported device read access: addr=0x");
                print_target_ulong(paddr);
                printf(" width=%d bits\n", 1 << (3 + size_log2));
#endif
                ret = 0;
            }
        }
    }
    *pval = ret;
    return 0;
}

/* return 0 if OK, != 0 if exception */
int target_write_slow(RISCVCPUState *s, target_ulong addr,
                      mem_uint_t val, int size_log2)
{
    int size, i, tlb_idx, err;
    target_ulong paddr, offset;
    uint8_t *ptr;
    PhysMemoryRange *pr;

    /* first handle unaligned accesses */
    size = 1 << size_log2;
    if ((addr & (size - 1)) != 0) {
        /* XXX: should avoid modifying the memory in case of exception */
        for(i = 0; i < size; i++) {
            err = target_write_u8(s, addr + i, (val >> (8 * i)) & 0xff);
            if (err)
                return err;
        }
    } else {
        if (get_phys_addr(s, &paddr, addr, ACCESS_WRITE)) {
            s->pending_tval = addr;
            s->pending_exception = CAUSE_STORE_PAGE_FAULT;
            return -1;
        }
        pr = get_phys_mem_range(s->mem_map, paddr);
        if (!pr) {
#ifdef DUMP_INVALID_MEM_ACCESS
            printf("target_write_slow: invalid physical address 0x");
            print_target_ulong(paddr);
            printf("\n");
#endif
        } else if (pr->is_ram) {
            phys_mem_set_dirty_bit(pr, paddr - pr->addr);
            tlb_idx = (addr >> PG_SHIFT) & (TLB_SIZE - 1);
            ptr = pr->phys_mem + (uintptr_t)(paddr - pr->addr);
            s->tlb_write[tlb_idx].vaddr = addr & ~PG_MASK;
            s->tlb_write[tlb_idx].mem_addend = (uintptr_t)ptr - addr;
            switch(size_log2) {
            case 0:
                *(uint8_t *)ptr = val;
                break;
            case 1:
                *(uint16_t *)ptr = val;
                break;
            case 2:
                *(uint32_t *)ptr = val;
                break;
#if MLEN >= 64
            case 3:
                *(uint64_t *)ptr = val;
                break;
#endif
#if MLEN >= 128
            case 4:
                *(uint128_t *)ptr = val;
                break;
#endif
            default:
                abort();
            }
        } else {
            offset = paddr - pr->addr;
            if (((pr->devio_flags >> size_log2) & 1) != 0) {
                pr->write_func(pr->opaque, offset, val, size_log2);
            }
#if MLEN >= 64
            else if ((pr->devio_flags & DEVIO_SIZE32) && size_log2 == 3) {
                /* emulate 64 bit access */
                pr->write_func(pr->opaque, offset,
                               val & 0xffffffff, 2);
                pr->write_func(pr->opaque, offset + 4,
                               (val >> 32) & 0xffffffff, 2);
            }
#endif
            else {
#ifdef DUMP_INVALID_MEM_ACCESS
                printf("unsupported device write access: addr=0x");
                print_target_ulong(paddr);
                printf(" width=%d bits\n", 1 << (3 + size_log2));
#endif
            }
        }
    }
    return 0;
}

struct __attribute__((packed)) unaligned_u32 {
    uint32_t u32;
};

/* unaligned access at an address known to be a multiple of 2 */
static uint32_t get_insn32(uint8_t *ptr)
{
#if defined(EMSCRIPTEN)
    return ((uint16_t *)ptr)[0] | (((uint16_t *)ptr)[1] << 16);
#else
    return ((struct unaligned_u32 *)ptr)->u32;
#endif
}

/* return 0 if OK, != 0 if exception */
static no_inline __exception int target_read_insn_slow(RISCVCPUState *s,
                                                       uint8_t **pptr,
                                                       target_ulong addr)
{
    int tlb_idx;
    target_ulong paddr;
    uint8_t *ptr;
    PhysMemoryRange *pr;

    if (get_phys_addr(s, &paddr, addr, ACCESS_CODE)) {
        s->pending_tval = addr;
        s->pending_exception = CAUSE_FETCH_PAGE_FAULT;
        return -1;
    }
    pr = get_phys_mem_range(s->mem_map, paddr);
    if (!pr || !pr->is_ram) {
        /* XXX: we only access to execute code from RAM */
        s->pending_tval = addr;
        s->pending_exception = CAUSE_FAULT_FETCH;
        return -1;
    }
    tlb_idx = (addr >> PG_SHIFT) & (TLB_SIZE - 1);
    ptr = pr->phys_mem + (uintptr_t)(paddr - pr->addr);
    s->tlb_code[tlb_idx].vaddr = addr & ~PG_MASK;
    s->tlb_code[tlb_idx].mem_addend = (uintptr_t)ptr - addr;
    *pptr = ptr;
    return 0;
}

/* addr must be aligned */
static inline __exception int target_read_insn_u16(RISCVCPUState *s, uint16_t *pinsn,
                                                   target_ulong addr)
{
    uint32_t tlb_idx;
    uint8_t *ptr;

    tlb_idx = (addr >> PG_SHIFT) & (TLB_SIZE - 1);
    if (likely(s->tlb_code[tlb_idx].vaddr == (addr & ~PG_MASK))) {
        ptr = (uint8_t *)(s->tlb_code[tlb_idx].mem_addend +
                          (uintptr_t)addr);
    } else {
        if (target_read_insn_slow(s, &ptr, addr))
            return -1;
    }
    *pinsn = *(uint16_t *)ptr;
    return 0;
}

static void tlb_init(RISCVCPUState *s)
{
    int i;

    for(i = 0; i < TLB_SIZE; i++) {
        s->tlb_read[i].vaddr = -1;
        s->tlb_write[i].vaddr = -1;
        s->tlb_code[i].vaddr = -1;
    }
}

static void tlb_flush_all(RISCVCPUState *s)
{
    tlb_init(s);
}

static void tlb_flush_vaddr(RISCVCPUState *s, target_ulong vaddr)
{
    tlb_flush_all(s);
}

/* XXX: inefficient but not critical as long as it is seldom used */
static void glue(riscv_cpu_flush_tlb_write_range_ram,
                 MAX_XLEN)(RISCVCPUState *s,
                           uint8_t *ram_ptr, size_t ram_size)
{
    uint8_t *ptr, *ram_end;
    int i;

    ram_end = ram_ptr + ram_size;
    for(i = 0; i < TLB_SIZE; i++) {
        if (s->tlb_write[i].vaddr != -1) {
            ptr = (uint8_t *)(s->tlb_write[i].mem_addend +
                              (uintptr_t)s->tlb_write[i].vaddr);
            if (ptr >= ram_ptr && ptr < ram_end) {
                s->tlb_write[i].vaddr = -1;
            }
        }
    }
}


#define SSTATUS_MASK0 (MSTATUS_UIE | MSTATUS_SIE |       \
                      MSTATUS_UPIE | MSTATUS_SPIE |     \
                      MSTATUS_SPP | \
                      MSTATUS_FS | MSTATUS_XS | \
                      MSTATUS_SUM | MSTATUS_MXR)
#if MAX_XLEN >= 64
#define SSTATUS_MASK (SSTATUS_MASK0 | MSTATUS_UXL_MASK)
#else
#define SSTATUS_MASK SSTATUS_MASK0
#endif


#define MSTATUS_MASK (MSTATUS_UIE | MSTATUS_SIE | MSTATUS_MIE |      \
                      MSTATUS_UPIE | MSTATUS_SPIE | MSTATUS_MPIE |    \
                      MSTATUS_SPP | MSTATUS_MPP | \
                      MSTATUS_FS | \
                      MSTATUS_MPRV | MSTATUS_SUM | MSTATUS_MXR)

/* cycle and insn counters */
#define COUNTEREN_MASK ((1 << 0) | (1 << 2))

/* return the complete mstatus with the SD bit */
static target_ulong get_mstatus(RISCVCPUState *s, target_ulong mask)
{
    target_ulong val;
    BOOL sd;
    val = s->mstatus | (s->fs << MSTATUS_FS_SHIFT);
    val &= mask;
    sd = ((val & MSTATUS_FS) == MSTATUS_FS) |
        ((val & MSTATUS_XS) == MSTATUS_XS);
    if (sd)
        val |= (target_ulong)1 << (s->cur_xlen - 1);
    return val;
}

static int get_base_from_xlen(int xlen)
{
    if (xlen == 32)
        return 1;
    else if (xlen == 64)
        return 2;
    else
        return 3;
}

static void set_mstatus(RISCVCPUState *s, target_ulong val)
{
    target_ulong mod, mask;

    /* flush the TLBs if change of MMU config */
    mod = s->mstatus ^ val;
    if ((mod & (MSTATUS_MPRV | MSTATUS_SUM | MSTATUS_MXR)) != 0 ||
        ((s->mstatus & MSTATUS_MPRV) && (mod & MSTATUS_MPP) != 0)) {
        tlb_flush_all(s);
    }
    s->fs = (val >> MSTATUS_FS_SHIFT) & 3;

    mask = MSTATUS_MASK & ~MSTATUS_FS;
#if MAX_XLEN >= 64
    {
        int uxl, sxl;
        uxl = (val >> MSTATUS_UXL_SHIFT) & 3;
        if (uxl >= 1 && uxl <= get_base_from_xlen(MAX_XLEN))
            mask |= MSTATUS_UXL_MASK;
        sxl = (val >> MSTATUS_UXL_SHIFT) & 3;
        if (sxl >= 1 && sxl <= get_base_from_xlen(MAX_XLEN))
            mask |= MSTATUS_SXL_MASK;
    }
#endif
    s->mstatus = (s->mstatus & ~mask) | (val & mask);
}

/* return -1 if invalid CSR. 0 if OK. 'will_write' indicate that the
   csr will be written after (used for CSR access check) */
static int csr_read(RISCVCPUState *s, target_ulong *pval, uint32_t csr,
                     BOOL will_write)
{
    target_ulong val;

    if (((csr & 0xc00) == 0xc00) && will_write)
        return -1; /* read-only CSR */
    if (s->priv < ((csr >> 8) & 3))
        return -1; /* not enough priviledge */

    switch(csr) {
#if FLEN > 0
    case 0x001: /* fflags */
        if (s->fs == 0)
            return -1;
        val = s->fflags;
        break;
    case 0x002: /* frm */
        if (s->fs == 0)
            return -1;
        val = s->frm;
        break;
    case 0x003:
        if (s->fs == 0)
            return -1;
        val = s->fflags | (s->frm << 5);
        break;
#endif
    case 0xc00: /* ucycle */
    case 0xc02: /* uinstret */
        {
            uint32_t counteren;
            if (s->priv < PRV_M) {
                if (s->priv < PRV_S)
                    counteren = s->scounteren;
                else
                    counteren = s->mcounteren;
                if (((counteren >> (csr & 0x1f)) & 1) == 0)
                    goto invalid_csr;
            }
        }
        val = (int64_t)s->insn_counter;
        break;
    case 0xc80: /* mcycleh */
    case 0xc82: /* minstreth */
        if (s->cur_xlen != 32)
            goto invalid_csr;
        {
            uint32_t counteren;
            if (s->priv < PRV_M) {
                if (s->priv < PRV_S)
                    counteren = s->scounteren;
                else
                    counteren = s->mcounteren;
                if (((counteren >> (csr & 0x1f)) & 1) == 0)
                    goto invalid_csr;
            }
        }
        val = s->insn_counter >> 32;
        break;

    case 0x100:
        val = get_mstatus(s, SSTATUS_MASK);
        break;
    case 0x104: /* sie */
        val = s->mie & s->mideleg;
        break;
    case 0x105:
        val = s->stvec;
        break;
    case 0x106:
        val = s->scounteren;
        break;
    case 0x140:
        val = s->sscratch;
        break;
    case 0x141:
        val = s->sepc;
        break;
    case 0x142:
        val = s->scause;
        break;
    case 0x143:
        val = s->stval;
        break;
    case 0x144: /* sip */
        val = s->mip & s->mideleg;
        break;
    case 0x180:
        val = s->satp;
        break;
    case 0x300:
        val = get_mstatus(s, (target_ulong)-1);
        break;
    case 0x301:
        val = s->misa;
        val |= (target_ulong)s->mxl << (s->cur_xlen - 2);
        break;
    case 0x302:
        val = s->medeleg;
        break;
    case 0x303:
        val = s->mideleg;
        break;
    case 0x304:
        val = s->mie;
        break;
    case 0x305:
        val = s->mtvec;
        break;
    case 0x306:
        val = s->mcounteren;
        break;
    case 0x340:
        val = s->mscratch;
        break;
    case 0x341:
        val = s->mepc;
        break;
    case 0x342:
        val = s->mcause;
        break;
    case 0x343:
        val = s->mtval;
        break;
    case 0x344:
        val = s->mip;
        break;
    case 0xb00: /* mcycle */
    case 0xb02: /* minstret */
        val = (int64_t)s->insn_counter;
        break;
    case 0xb80: /* mcycleh */
    case 0xb82: /* minstreth */
        if (s->cur_xlen != 32)
            goto invalid_csr;
        val = s->insn_counter >> 32;
        break;
    case 0xf14:
        val = s->mhartid;
        break;
    default:
    invalid_csr:
#ifdef DUMP_INVALID_CSR
        /* the 'time' counter is usually emulated */
        if (csr != 0xc01 && csr != 0xc81) {
            printf("csr_read: invalid CSR=0x%x\n", csr);
        }
#endif
        *pval = 0;
        return -1;
    }
    *pval = val;
    return 0;
}

#if FLEN > 0
static void set_frm(RISCVCPUState *s, unsigned int val)
{
    if (val >= 5)
        val = 0;
    s->frm = val;
}

/* return -1 if invalid roundind mode */
static int get_insn_rm(RISCVCPUState *s, unsigned int rm)
{
    if (rm == 7)
        return s->frm;
    if (rm >= 5)
        return -1;
    else
        return rm;
}
#endif

/* return -1 if invalid CSR, 0 if OK, 1 if the interpreter loop must be
   exited (e.g. XLEN was modified), 2 if TLBs have been flushed. */
static int csr_write(RISCVCPUState *s, uint32_t csr, target_ulong val)
{
    target_ulong mask;

#if defined(DUMP_CSR)
    printf("csr_write: csr=0x%03x val=0x", csr);
    print_target_ulong(val);
    printf("\n");
#endif
    switch(csr) {
#if FLEN > 0
    case 0x001: /* fflags */
        s->fflags = val & 0x1f;
        s->fs = 3;
        break;
    case 0x002: /* frm */
        set_frm(s, val & 7);
        s->fs = 3;
        break;
    case 0x003: /* fcsr */
        set_frm(s, (val >> 5) & 7);
        s->fflags = val & 0x1f;
        s->fs = 3;
        break;
#endif
    case 0x100: /* sstatus */
        set_mstatus(s, (s->mstatus & ~SSTATUS_MASK) | (val & SSTATUS_MASK));
        break;
    case 0x104: /* sie */
        mask = s->mideleg;
        s->mie = (s->mie & ~mask) | (val & mask);
        break;
    case 0x105:
        s->stvec = val & ~3;
        break;
    case 0x106:
        s->scounteren = val & COUNTEREN_MASK;
        break;
    case 0x140:
        s->sscratch = val;
        break;
    case 0x141:
        s->sepc = val & ~1;
        break;
    case 0x142:
        s->scause = val;
        break;
    case 0x143:
        s->stval = val;
        break;
    case 0x144: /* sip */
        mask = s->mideleg;
        s->mip = (s->mip & ~mask) | (val & mask);
        break;
    case 0x180:
        /* no ASID implemented */
#if MAX_XLEN == 32
        {
            int new_mode;
            new_mode = (val >> 31) & 1;
            s->satp = (val & (((target_ulong)1 << 22) - 1)) |
                (new_mode << 31);
        }
#else
        {
            int mode, new_mode;
            mode = s->satp >> 60;
            new_mode = (val >> 60) & 0xf;
            if (new_mode == 0 || (new_mode >= 8 && new_mode <= 9))
                mode = new_mode;
            s->satp = (val & (((uint64_t)1 << 44) - 1)) |
                ((uint64_t)mode << 60);
        }
#endif
        tlb_flush_all(s);
        return 2;

    case 0x300:
        set_mstatus(s, val);
        break;
    case 0x301: /* misa */
#if MAX_XLEN >= 64
        {
            int new_mxl;
            new_mxl = (val >> (s->cur_xlen - 2)) & 3;
            if (new_mxl >= 1 && new_mxl <= get_base_from_xlen(MAX_XLEN)) {
                /* Note: misa is only modified in M level, so cur_xlen
                   = 2^(mxl + 4) */
                if (s->mxl != new_mxl) {
                    s->mxl = new_mxl;
                    s->cur_xlen = 1 << (new_mxl + 4);
                    return 1;
                }
            }
        }
#endif
        break;
    case 0x302:
        mask = (1 << (CAUSE_STORE_PAGE_FAULT + 1)) - 1;
        s->medeleg = (s->medeleg & ~mask) | (val & mask);
        break;
    case 0x303:
        mask = MIP_SSIP | MIP_STIP | MIP_SEIP;
        s->mideleg = (s->mideleg & ~mask) | (val & mask);
        break;
    case 0x304:
        mask = MIP_MSIP | MIP_MTIP | MIP_SSIP | MIP_STIP | MIP_SEIP;
        s->mie = (s->mie & ~mask) | (val & mask);
        break;
    case 0x305:
        s->mtvec = val & ~3;
        break;
    case 0x306:
        s->mcounteren = val & COUNTEREN_MASK;
        break;
    case 0x340:
        s->mscratch = val;
        break;
    case 0x341:
        s->mepc = val & ~1;
        break;
    case 0x342:
        s->mcause = val;
        break;
    case 0x343:
        s->mtval = val;
        break;
    case 0x344:
        mask = MIP_SSIP | MIP_STIP;
        s->mip = (s->mip & ~mask) | (val & mask);
        break;
    default:
#ifdef DUMP_INVALID_CSR
        printf("csr_write: invalid CSR=0x%x\n", csr);
#endif
        return -1;
    }
    return 0;
}

static void set_priv(RISCVCPUState *s, int priv)
{
    if (s->priv != priv) {
        tlb_flush_all(s);
#if MAX_XLEN >= 64
        /* change the current xlen */
        {
            int mxl;
            if (priv == PRV_S)
                mxl = (s->mstatus >> MSTATUS_SXL_SHIFT) & 3;
            else if (priv == PRV_U)
                mxl = (s->mstatus >> MSTATUS_UXL_SHIFT) & 3;
            else
                mxl = s->mxl;
            s->cur_xlen = 1 << (4 + mxl);
        }
#endif
        s->priv = priv;
    }
}

static void raise_exception2(RISCVCPUState *s, uint32_t cause,
                             target_ulong tval)
{
    BOOL deleg;
    target_ulong causel;

#if defined(DUMP_EXCEPTIONS) || defined(DUMP_MMU_EXCEPTIONS) || defined(DUMP_INTERRUPTS)
    {
        int flag;
        flag = 0;
#ifdef DUMP_MMU_EXCEPTIONS
        if (cause == CAUSE_FAULT_FETCH ||
            cause == CAUSE_FAULT_LOAD ||
            cause == CAUSE_FAULT_STORE ||
            cause == CAUSE_FETCH_PAGE_FAULT ||
            cause == CAUSE_LOAD_PAGE_FAULT ||
            cause == CAUSE_STORE_PAGE_FAULT)
            flag = 1;
#endif
#ifdef DUMP_INTERRUPTS
        flag |= (cause & CAUSE_INTERRUPT) != 0;
#endif
#ifdef DUMP_EXCEPTIONS
        flag = 1;
        flag = (cause & CAUSE_INTERRUPT) == 0;
        if (cause == CAUSE_SUPERVISOR_ECALL || cause == CAUSE_ILLEGAL_INSTRUCTION)
            flag = 0;
#endif
        if (flag) {
            log_printf("raise_exception: cause=0x%08x tval=0x", cause);
#ifdef CONFIG_LOGFILE
            fprint_target_ulong(log_file, tval);
#else
            print_target_ulong(tval);
#endif
            log_printf("\n");
            dump_regs(s);
        }
    }
#endif

    if (s->priv <= PRV_S) {
        /* delegate the exception to the supervisor priviledge */
        if (cause & CAUSE_INTERRUPT)
            deleg = (s->mideleg >> (cause & (MAX_XLEN - 1))) & 1;
        else
            deleg = (s->medeleg >> cause) & 1;
    } else {
        deleg = 0;
    }

    causel = cause & 0x7fffffff;
    if (cause & CAUSE_INTERRUPT)
        causel |= (target_ulong)1 << (s->cur_xlen - 1);

    if (deleg) {
        s->scause = causel;
        s->sepc = s->pc;
        s->stval = tval;
        s->mstatus = (s->mstatus & ~MSTATUS_SPIE) |
            (((s->mstatus >> s->priv) & 1) << MSTATUS_SPIE_SHIFT);
        s->mstatus = (s->mstatus & ~MSTATUS_SPP) |
            (s->priv << MSTATUS_SPP_SHIFT);
        s->mstatus &= ~MSTATUS_SIE;
        set_priv(s, PRV_S);
        s->pc = s->stvec;
    } else {
        s->mcause = causel;
        s->mepc = s->pc;
        s->mtval = tval;
        s->mstatus = (s->mstatus & ~MSTATUS_MPIE) |
            (((s->mstatus >> s->priv) & 1) << MSTATUS_MPIE_SHIFT);
        s->mstatus = (s->mstatus & ~MSTATUS_MPP) |
            (s->priv << MSTATUS_MPP_SHIFT);
        s->mstatus &= ~MSTATUS_MIE;
        set_priv(s, PRV_M);
        s->pc = s->mtvec;
    }
}

static void raise_exception(RISCVCPUState *s, uint32_t cause)
{
    raise_exception2(s, cause, 0);
}

static void handle_sret(RISCVCPUState *s)
{
    int spp, spie;
    spp = (s->mstatus >> MSTATUS_SPP_SHIFT) & 1;
    /* set the IE state to previous IE state */
    spie = (s->mstatus >> MSTATUS_SPIE_SHIFT) & 1;
    s->mstatus = (s->mstatus & ~(1 << spp)) |
        (spie << spp);
    /* set SPIE to 1 */
    s->mstatus |= MSTATUS_SPIE;
    /* set SPP to U */
    s->mstatus &= ~MSTATUS_SPP;
    set_priv(s, spp);
    s->pc = s->sepc;
}

static void handle_mret(RISCVCPUState *s)
{
    int mpp, mpie;
    mpp = (s->mstatus >> MSTATUS_MPP_SHIFT) & 3;
    /* set the IE state to previous IE state */
    mpie = (s->mstatus >> MSTATUS_MPIE_SHIFT) & 1;
    s->mstatus = (s->mstatus & ~(1 << mpp)) |
        (mpie << mpp);
    /* set MPIE to 1 */
    s->mstatus |= MSTATUS_MPIE;
    /* set MPP to U */
    s->mstatus &= ~MSTATUS_MPP;
    set_priv(s, mpp);
    s->pc = s->mepc;
}

static inline uint32_t get_pending_irq_mask(RISCVCPUState *s)
{
    uint32_t pending_ints, enabled_ints;

    pending_ints = s->mip & s->mie;
    if (pending_ints == 0)
        return 0;

    enabled_ints = 0;
    switch(s->priv) {
    case PRV_M:
        if (s->mstatus & MSTATUS_MIE)
            enabled_ints = ~s->mideleg;
        break;
    case PRV_S:
        enabled_ints = ~s->mideleg;
        if (s->mstatus & MSTATUS_SIE)
            enabled_ints |= s->mideleg;
        break;
    default:
    case PRV_U:
        enabled_ints = -1;
        break;
    }
    return pending_ints & enabled_ints;
}

static __exception int raise_interrupt(RISCVCPUState *s)
{
    uint32_t mask;
    int irq_num;

    mask = get_pending_irq_mask(s);
    if (mask == 0)
        return 0;
    irq_num = ctz32(mask);
    raise_exception(s, irq_num | CAUSE_INTERRUPT);
    return -1;
}

static inline int32_t sext(int32_t val, int n)
{
    return (val << (32 - n)) >> (32 - n);
}

static inline uint32_t get_field1(uint32_t val, int src_pos,
                                  int dst_pos, int dst_pos_max)
{
    int mask;
    assert(dst_pos_max >= dst_pos);
    mask = ((1 << (dst_pos_max - dst_pos + 1)) - 1) << dst_pos;
    if (dst_pos >= src_pos)
        return (val << (dst_pos - src_pos)) & mask;
    else
        return (val >> (src_pos - dst_pos)) & mask;
}

#define XLEN 32
/*================================================================*/

#if XLEN == 32
#define uintx_t uint32_t
#define intx_t int32_t
#elif XLEN == 64
#define uintx_t uint64_t
#define intx_t int64_t
#elif XLEN == 128
#define uintx_t uint128_t
#define intx_t int128_t
#else
#error unsupported XLEN
#endif

static inline intx_t glue(div, XLEN)(intx_t a, intx_t b)
{
    if (b == 0) {
        return -1;
    } else if (a == ((intx_t)1 << (XLEN - 1)) && b == -1) {
        return a;
    } else {
        return a / b;
    }
}

static inline uintx_t glue(divu, XLEN)(uintx_t a, uintx_t b)
{
    if (b == 0) {
        return -1;
    } else {
        return a / b;
    }
}

static inline intx_t glue(rem, XLEN)(intx_t a, intx_t b)
{
    if (b == 0) {
        return a;
    } else if (a == ((intx_t)1 << (XLEN - 1)) && b == -1) {
        return 0;
    } else {
        return a % b;
    }
}

static inline uintx_t glue(remu, XLEN)(uintx_t a, uintx_t b)
{
    if (b == 0) {
        return a;
    } else {
        return a % b;
    }
}

#if XLEN == 32

static inline uint32_t mulh32(int32_t a, int32_t b)
{
    return ((int64_t)a * (int64_t)b) >> 32;
}

static inline uint32_t mulhsu32(int32_t a, uint32_t b)
{
    return ((int64_t)a * (int64_t)b) >> 32;
}

static inline uint32_t mulhu32(uint32_t a, uint32_t b)
{
    return ((int64_t)a * (int64_t)b) >> 32;
}

#elif XLEN == 64 && defined(HAVE_INT128)

static inline uint64_t mulh64(int64_t a, int64_t b)
{
    return ((int128_t)a * (int128_t)b) >> 64;
}

static inline uint64_t mulhsu64(int64_t a, uint64_t b)
{
    return ((int128_t)a * (int128_t)b) >> 64;
}

static inline uint64_t mulhu64(uint64_t a, uint64_t b)
{
    return ((int128_t)a * (int128_t)b) >> 64;
}

#else

#if XLEN == 64
#define UHALF uint32_t
#define UHALF_LEN 32
#elif XLEN == 128
#define UHALF uint64_t
#define UHALF_LEN 64
#else
#error unsupported XLEN
#endif

static uintx_t glue(mulhu, XLEN)(uintx_t a, uintx_t b)
{
    UHALF a0, a1, b0, b1, r2, r3;
    uintx_t r00, r01, r10, r11, c;
    a0 = a;
    a1 = a >> UHALF_LEN;
    b0 = b;
    b1 = b >> UHALF_LEN;

    r00 = (uintx_t)a0 * (uintx_t)b0;
    r01 = (uintx_t)a0 * (uintx_t)b1;
    r10 = (uintx_t)a1 * (uintx_t)b0;
    r11 = (uintx_t)a1 * (uintx_t)b1;

    //    r0 = r00;
    c = (r00 >> UHALF_LEN) + (UHALF)r01 + (UHALF)r10;
    //    r1 = c;
    c = (c >> UHALF_LEN) + (r01 >> UHALF_LEN) + (r10 >> UHALF_LEN) + (UHALF)r11;
    r2 = c;
    r3 = (c >> UHALF_LEN) + (r11 >> UHALF_LEN);

    //    *plow = ((uintx_t)r1 << UHALF_LEN) | r0;
    return ((uintx_t)r3 << UHALF_LEN) | r2;
}

#undef UHALF

static inline uintx_t glue(mulh, XLEN)(intx_t a, intx_t b)
{
    uintx_t r1;
    r1 = glue(mulhu, XLEN)(a, b);
    if (a < 0)
        r1 -= a;
    if (b < 0)
        r1 -= b;
    return r1;
}

static inline uintx_t glue(mulhsu, XLEN)(intx_t a, uintx_t b)
{
    uintx_t r1;
    r1 = glue(mulhu, XLEN)(a, b);
    if (a < 0)
        r1 -= a;
    return r1;
}

#endif

#define DUP2(F, n) F(n) F(n+1)
#define DUP4(F, n) DUP2(F, n) DUP2(F, n + 2)
#define DUP8(F, n) DUP4(F, n) DUP4(F, n + 4)
#define DUP16(F, n) DUP8(F, n) DUP8(F, n + 8)
#define DUP32(F, n) DUP16(F, n) DUP16(F, n + 16)

#define C_QUADRANT(n) \
    case n+(0 << 2): case n+(1 << 2): case n+(2 << 2): case n+(3 << 2): \
    case n+(4 << 2): case n+(5 << 2): case n+(6 << 2): case n+(7 << 2): \
    case n+(8 << 2): case n+(9 << 2): case n+(10 << 2): case n+(11 << 2): \
    case n+(12 << 2): case n+(13 << 2): case n+(14 << 2): case n+(15 << 2): \
    case n+(16 << 2): case n+(17 << 2): case n+(18 << 2): case n+(19 << 2): \
    case n+(20 << 2): case n+(21 << 2): case n+(22 << 2): case n+(23 << 2): \
    case n+(24 << 2): case n+(25 << 2): case n+(26 << 2): case n+(27 << 2): \
    case n+(28 << 2): case n+(29 << 2): case n+(30 << 2): case n+(31 << 2):

#define GET_PC() (target_ulong)((uintptr_t)code_ptr + code_to_pc_addend)
#define GET_INSN_COUNTER() (insn_counter_addend - n_cycles)

#define C_NEXT_INSN code_ptr += 2; break
#define NEXT_INSN code_ptr += 4; break
#define JUMP_INSN do {   \
        code_ptr = NULL;           \
        code_end = NULL;           \
        code_to_pc_addend = s->pc; \
        goto jump_insn;            \
    } while (0)

static void no_inline glue(riscv_cpu_interp_x, XLEN)(RISCVCPUState *s,
                                                   int n_cycles)
{
    uint32_t opcode, insn, rd, rs1, rs2, funct3;
    int32_t imm, cond, err;
    target_ulong addr, val, val2;
#ifndef USE_GLOBAL_VARIABLES
    uint8_t *code_ptr, *code_end;
    target_ulong code_to_pc_addend;
#endif
    uint64_t insn_counter_addend;
#if FLEN > 0
    uint32_t rs3;
    int32_t rm;
#endif

    if (n_cycles == 0)
        return;
    insn_counter_addend = s->insn_counter + n_cycles;

    /* check pending interrupts */
    if (unlikely((s->mip & s->mie) != 0)) {
        if (raise_interrupt(s))
            goto done_interp;
    }

    s->pending_exception = -1;
    n_cycles++;
    /* Note: we assume NULL is represented as a zero number */
    code_ptr = NULL;
    code_end = NULL;
    code_to_pc_addend = s->pc;

    /* we use a single execution loop to keep a simple control flow
       for emscripten */
    for(;;) {
        --n_cycles;
        if (unlikely(code_ptr >= code_end)) {
            uint32_t tlb_idx;
            uint16_t insn_high;
            target_ulong addr;
            uint8_t *ptr;

            s->pc = GET_PC();
            /* we test n_cycles only between blocks so that timer
               interrupts only happen between the blocks. It is
               important to reduce the translated code size. */
            if (unlikely(n_cycles <= 0))
                goto the_end;

            /* check pending interrupts */
            if (unlikely((s->mip & s->mie) != 0)) {
                if (raise_interrupt(s)) {
                    goto the_end;
                }
            }

            addr = s->pc;
            tlb_idx = (addr >> PG_SHIFT) & (TLB_SIZE - 1);
            if (likely(s->tlb_code[tlb_idx].vaddr == (addr & ~PG_MASK))) {
                /* TLB match */
                ptr = (uint8_t *)(s->tlb_code[tlb_idx].mem_addend +
                                  (uintptr_t)addr);
            } else {
                if (unlikely(target_read_insn_slow(s, &ptr, addr)))
                    goto mmu_exception;
            }
            code_ptr = ptr;
            code_end = ptr + (PG_MASK - 1 - (addr & PG_MASK));
            code_to_pc_addend = addr - (uintptr_t)code_ptr;
            if (unlikely(code_ptr >= code_end)) {
                /* instruction is potentially half way between two
                   pages ? */
                insn = *(uint16_t *)code_ptr;
                if ((insn & 3) == 3) {
                    /* instruction is half way between two pages */
                    if (unlikely(target_read_insn_u16(s, &insn_high, addr + 2)))
                        goto mmu_exception;
                    insn |= insn_high << 16;
                }
            } else {
                insn = get_insn32(code_ptr);
            }
        } else {
            /* fast path */
            insn = get_insn32(code_ptr);
        }
#if 0
        if (1) {
#ifdef CONFIG_LOGFILE
            log_printf("pc=0x"); fprint_target_ulong(log_file, GET_PC()); log_printf(" insn=%08x\n", insn);
            fflush(log_file);
#else
            printf("pc=0x"); print_target_ulong(GET_PC()); printf(" insn=%08x\n", insn);
            //            dump_regs(s);
#endif
        }
#endif
        opcode = insn & 0x7f;
        rd = (insn >> 7) & 0x1f;
        rs1 = (insn >> 15) & 0x1f;
        rs2 = (insn >> 20) & 0x1f;
        switch(opcode) {
#ifdef CONFIG_EXT_C
        C_QUADRANT(0)
            funct3 = (insn >> 13) & 7;
            rd = ((insn >> 2) & 7) | 8;
            switch(funct3) {
            case 0: /* c.addi4spn */
                imm = get_field1(insn, 11, 4, 5) |
                    get_field1(insn, 7, 6, 9) |
                    get_field1(insn, 6, 2, 2) |
                    get_field1(insn, 5, 3, 3);
                if (imm == 0)
                    goto illegal_insn;
                s->reg[rd] = (intx_t)(s->reg[2] + imm);
                break;
#if XLEN >= 128
            case 1: /* c.lq */
                imm = get_field1(insn, 11, 4, 5) |
                    get_field1(insn, 10, 8, 8) |
                    get_field1(insn, 5, 6, 7);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                if (target_read_u128(s, &val, addr))
                    goto mmu_exception;
                s->reg[rd] = val;
                break;
#elif FLEN >= 64
            case 1: /* c.fld */
                {
                    uint64_t rval;
                    if (s->fs == 0)
                        goto illegal_insn;
                    imm = get_field1(insn, 10, 3, 5) |
                        get_field1(insn, 5, 6, 7);
                    rs1 = ((insn >> 7) & 7) | 8;
                    addr = (intx_t)(s->reg[rs1] + imm);
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F64_HIGH;
                    s->fs = 3;
                }
                break;
#endif
            case 2: /* c.lw */
                {
                    uint32_t rval;
                    imm = get_field1(insn, 10, 3, 5) |
                        get_field1(insn, 6, 2, 2) |
                        get_field1(insn, 5, 6, 6);
                    rs1 = ((insn >> 7) & 7) | 8;
                    addr = (intx_t)(s->reg[rs1] + imm);
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    s->reg[rd] = (int32_t)rval;
                }
                break;
#if XLEN >= 64
            case 3: /* c.ld */
                {
                    uint64_t rval;
                    imm = get_field1(insn, 10, 3, 5) |
                        get_field1(insn, 5, 6, 7);
                    rs1 = ((insn >> 7) & 7) | 8;
                    addr = (intx_t)(s->reg[rs1] + imm);
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    s->reg[rd] = (int64_t)rval;
                }
                break;
#elif FLEN >= 32
            case 3: /* c.flw */
                {
                    uint32_t rval;
                    if (s->fs == 0)
                        goto illegal_insn;
                    imm = get_field1(insn, 10, 3, 5) |
                        get_field1(insn, 6, 2, 2) |
                        get_field1(insn, 5, 6, 6);
                    rs1 = ((insn >> 7) & 7) | 8;
                    addr = (intx_t)(s->reg[rs1] + imm);
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F32_HIGH;
                    s->fs = 3;
                }
                break;
#endif
#if XLEN >= 128
            case 5: /* c.sq */
                imm = get_field1(insn, 11, 4, 5) |
                    get_field1(insn, 10, 8, 8) |
                    get_field1(insn, 5, 6, 7);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                val = s->reg[rd];
                if (target_write_u128(s, addr, val))
                    goto mmu_exception;
                break;
#elif FLEN >= 64
            case 5: /* c.fsd */
                if (s->fs == 0)
                    goto illegal_insn;
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 5, 6, 7);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                if (target_write_u64(s, addr, s->fp_reg[rd]))
                    goto mmu_exception;
                break;
#endif
            case 6: /* c.sw */
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 6, 2, 2) |
                    get_field1(insn, 5, 6, 6);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                val = s->reg[rd];
                if (target_write_u32(s, addr, val))
                    goto mmu_exception;
                break;
#if XLEN >= 64
            case 7: /* c.sd */
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 5, 6, 7);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                val = s->reg[rd];
                if (target_write_u64(s, addr, val))
                    goto mmu_exception;
                break;
#elif FLEN >= 32
            case 7: /* c.fsw */
                if (s->fs == 0)
                    goto illegal_insn;
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 6, 2, 2) |
                    get_field1(insn, 5, 6, 6);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                if (target_write_u32(s, addr, s->fp_reg[rd]))
                    goto mmu_exception;
                break;
#endif
            default:
                goto illegal_insn;
            }
            C_NEXT_INSN;
        C_QUADRANT(1)
            funct3 = (insn >> 13) & 7;
            switch(funct3) {
            case 0: /* c.addi/c.nop */
                if (rd != 0) {
                    imm = sext(get_field1(insn, 12, 5, 5) |
                               get_field1(insn, 2, 0, 4), 6);
                    s->reg[rd] = (intx_t)(s->reg[rd] + imm);
                }
                break;
#if XLEN == 32
            case 1: /* c.jal */
                imm = sext(get_field1(insn, 12, 11, 11) |
                           get_field1(insn, 11, 4, 4) |
                           get_field1(insn, 9, 8, 9) |
                           get_field1(insn, 8, 10, 10) |
                           get_field1(insn, 7, 6, 6) |
                           get_field1(insn, 6, 7, 7) |
                           get_field1(insn, 3, 1, 3) |
                           get_field1(insn, 2, 5, 5), 12);
                s->reg[1] = GET_PC() + 2;
                s->pc = (intx_t)(GET_PC() + imm);
                JUMP_INSN;
#else
            case 1: /* c.addiw */
                if (rd != 0) {
                    imm = sext(get_field1(insn, 12, 5, 5) |
                               get_field1(insn, 2, 0, 4), 6);
                    s->reg[rd] = (int32_t)(s->reg[rd] + imm);
                }
                break;
#endif
            case 2: /* c.li */
                if (rd != 0) {
                    imm = sext(get_field1(insn, 12, 5, 5) |
                               get_field1(insn, 2, 0, 4), 6);
                    s->reg[rd] = imm;
                }
                break;
            case 3:
                if (rd == 2) {
                    /* c.addi16sp */
                    imm = sext(get_field1(insn, 12, 9, 9) |
                               get_field1(insn, 6, 4, 4) |
                               get_field1(insn, 5, 6, 6) |
                               get_field1(insn, 3, 7, 8) |
                               get_field1(insn, 2, 5, 5), 10);
                    if (imm == 0)
                        goto illegal_insn;
                    s->reg[2] = (intx_t)(s->reg[2] + imm);
                } else if (rd != 0) {
                    /* c.lui */
                    imm = sext(get_field1(insn, 12, 17, 17) |
                               get_field1(insn, 2, 12, 16), 18);
                    s->reg[rd] = imm;
                }
                break;
            case 4:
                funct3 = (insn >> 10) & 3;
                rd = ((insn >> 7) & 7) | 8;
                switch(funct3) {
                case 0: /* c.srli */
                case 1: /* c.srai */
                    imm = get_field1(insn, 12, 5, 5) |
                        get_field1(insn, 2, 0, 4);
#if XLEN == 32
                    if (imm & 0x20)
                        goto illegal_insn;
#elif XLEN == 128
                    if (imm == 0)
                        imm = 64;
                    else if (imm >= 32)
                        imm = 128 - imm;
#endif
                    if (funct3 == 0)
                        s->reg[rd] = (intx_t)((uintx_t)s->reg[rd] >> imm);
                    else
                        s->reg[rd] = (intx_t)s->reg[rd] >> imm;

                    break;
                case 2: /* c.andi */
                    imm = sext(get_field1(insn, 12, 5, 5) |
                               get_field1(insn, 2, 0, 4), 6);
                    s->reg[rd] &= imm;
                    break;
                case 3:
                    rs2 = ((insn >> 2) & 7) | 8;
                    funct3 = ((insn >> 5) & 3) | ((insn >> (12 - 2)) & 4);
                    switch(funct3) {
                    case 0: /* c.sub */
                        s->reg[rd] = (intx_t)(s->reg[rd] - s->reg[rs2]);
                        break;
                    case 1: /* c.xor */
                        s->reg[rd] = s->reg[rd] ^ s->reg[rs2];
                        break;
                    case 2: /* c.or */
                        s->reg[rd] = s->reg[rd] | s->reg[rs2];
                        break;
                    case 3: /* c.and */
                        s->reg[rd] = s->reg[rd] & s->reg[rs2];
                        break;
#if XLEN >= 64
                    case 4: /* c.subw */
                        s->reg[rd] = (int32_t)(s->reg[rd] - s->reg[rs2]);
                        break;
                    case 5: /* c.addw */
                        s->reg[rd] = (int32_t)(s->reg[rd] + s->reg[rs2]);
                        break;
#endif
                    default:
                        goto illegal_insn;
                    }
                    break;
                }
                break;
            case 5: /* c.j */
                imm = sext(get_field1(insn, 12, 11, 11) |
                           get_field1(insn, 11, 4, 4) |
                           get_field1(insn, 9, 8, 9) |
                           get_field1(insn, 8, 10, 10) |
                           get_field1(insn, 7, 6, 6) |
                           get_field1(insn, 6, 7, 7) |
                           get_field1(insn, 3, 1, 3) |
                           get_field1(insn, 2, 5, 5), 12);
                s->pc = (intx_t)(GET_PC() + imm);
                JUMP_INSN;
            case 6: /* c.beqz */
                rs1 = ((insn >> 7) & 7) | 8;
                imm = sext(get_field1(insn, 12, 8, 8) |
                           get_field1(insn, 10, 3, 4) |
                           get_field1(insn, 5, 6, 7) |
                           get_field1(insn, 3, 1, 2) |
                           get_field1(insn, 2, 5, 5), 9);
                if (s->reg[rs1] == 0) {
                    s->pc = (intx_t)(GET_PC() + imm);
                    JUMP_INSN;
                }
                break;
            case 7: /* c.bnez */
                rs1 = ((insn >> 7) & 7) | 8;
                imm = sext(get_field1(insn, 12, 8, 8) |
                           get_field1(insn, 10, 3, 4) |
                           get_field1(insn, 5, 6, 7) |
                           get_field1(insn, 3, 1, 2) |
                           get_field1(insn, 2, 5, 5), 9);
                if (s->reg[rs1] != 0) {
                    s->pc = (intx_t)(GET_PC() + imm);
                    JUMP_INSN;
                }
                break;
            default:
                goto illegal_insn;
            }
            C_NEXT_INSN;
        C_QUADRANT(2)
            funct3 = (insn >> 13) & 7;
            rs2 = (insn >> 2) & 0x1f;
            switch(funct3) {
            case 0: /* c.slli */
                imm = get_field1(insn, 12, 5, 5) | rs2;
#if XLEN == 32
                if (imm & 0x20)
                    goto illegal_insn;
#elif XLEN == 128
                if (imm == 0)
                    imm = 64;
#endif
                if (rd != 0)
                    s->reg[rd] = (intx_t)(s->reg[rd] << imm);
                break;
#if XLEN == 128
            case 1: /* c.lqsp */
                imm = get_field1(insn, 12, 5, 5) |
                    (rs2 & (1 << 4)) |
                    get_field1(insn, 2, 6, 9);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_read_u128(s, &val, addr))
                    goto mmu_exception;
                if (rd != 0)
                    s->reg[rd] = val;
                break;
#elif FLEN >= 64
            case 1: /* c.fldsp */
                {
                    uint64_t rval;
                    if (s->fs == 0)
                        goto illegal_insn;
                    imm = get_field1(insn, 12, 5, 5) |
                        (rs2 & (3 << 3)) |
                        get_field1(insn, 2, 6, 8);
                    addr = (intx_t)(s->reg[2] + imm);
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F64_HIGH;
                    s->fs = 3;
                }
                break;
#endif
            case 2: /* c.lwsp */
                {
                    uint32_t rval;
                    imm = get_field1(insn, 12, 5, 5) |
                        (rs2 & (7 << 2)) |
                        get_field1(insn, 2, 6, 7);
                    addr = (intx_t)(s->reg[2] + imm);
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    if (rd != 0)
                        s->reg[rd] = (int32_t)rval;
                }
                break;
#if XLEN >= 64
            case 3: /* c.ldsp */
                {
                    uint64_t rval;
                    imm = get_field1(insn, 12, 5, 5) |
                        (rs2 & (3 << 3)) |
                        get_field1(insn, 2, 6, 8);
                    addr = (intx_t)(s->reg[2] + imm);
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    if (rd != 0)
                        s->reg[rd] = (int64_t)rval;
                }
                break;
#elif FLEN >= 32
            case 3: /* c.flwsp */
                {
                    uint32_t rval;
                    if (s->fs == 0)
                        goto illegal_insn;
                    imm = get_field1(insn, 12, 5, 5) |
                        (rs2 & (7 << 2)) |
                        get_field1(insn, 2, 6, 7);
                    addr = (intx_t)(s->reg[2] + imm);
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F32_HIGH;
                    s->fs = 3;
                }
                break;
#endif
            case 4:
                if (((insn >> 12) & 1) == 0) {
                    if (rs2 == 0) {
                        /* c.jr */
                        if (rd == 0)
                            goto illegal_insn;
                        s->pc = s->reg[rd] & ~1;
                        JUMP_INSN;
                    } else {
                        /* c.mv */
                        if (rd != 0)
                            s->reg[rd] = s->reg[rs2];
                    }
                } else {
                    if (rs2 == 0) {
                        if (rd == 0) {
                            /* c.ebreak */
                            s->pending_exception = CAUSE_BREAKPOINT;
                            goto exception;
                        } else {
                            /* c.jalr */
                            val = GET_PC() + 2;
                            s->pc = s->reg[rd] & ~1;
                            s->reg[1] = val;
                            JUMP_INSN;
                        }
                    } else {
                        if (rd != 0) {
                            s->reg[rd] = (intx_t)(s->reg[rd] + s->reg[rs2]);
                        }
                    }
                }
                break;
#if XLEN == 128
            case 5: /* c.sqsp */
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 7, 6, 8);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_write_u128(s, addr, s->reg[rs2]))
                    goto mmu_exception;
                break;
#elif FLEN >= 64
            case 5: /* c.fsdsp */
                if (s->fs == 0)
                    goto illegal_insn;
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 7, 6, 8);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_write_u64(s, addr, s->fp_reg[rs2]))
                    goto mmu_exception;
                break;
#endif
            case 6: /* c.swsp */
                imm = get_field1(insn, 9, 2, 5) |
                    get_field1(insn, 7, 6, 7);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_write_u32(s, addr, s->reg[rs2]))
                    goto mmu_exception;
                break;
#if XLEN >= 64
            case 7: /* c.sdsp */
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 7, 6, 8);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_write_u64(s, addr, s->reg[rs2]))
                    goto mmu_exception;
                break;
#elif FLEN >= 32
            case 7: /* c.swsp */
                if (s->fs == 0)
                    goto illegal_insn;
                imm = get_field1(insn, 9, 2, 5) |
                    get_field1(insn, 7, 6, 7);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_write_u32(s, addr, s->fp_reg[rs2]))
                    goto mmu_exception;
                break;
#endif
            default:
                goto illegal_insn;
            }
            C_NEXT_INSN;
#endif /* CONFIG_EXT_C */

        case 0x37: /* lui */
            if (rd != 0)
                s->reg[rd] = (int32_t)(insn & 0xfffff000);
            NEXT_INSN;
        case 0x17: /* auipc */
            if (rd != 0)
                s->reg[rd] = (intx_t)(GET_PC() + (int32_t)(insn & 0xfffff000));
            NEXT_INSN;
        case 0x6f: /* jal */
            imm = ((insn >> (31 - 20)) & (1 << 20)) |
                ((insn >> (21 - 1)) & 0x7fe) |
                ((insn >> (20 - 11)) & (1 << 11)) |
                (insn & 0xff000);
            imm = (imm << 11) >> 11;
            if (rd != 0)
                s->reg[rd] = GET_PC() + 4;
            s->pc = (intx_t)(GET_PC() + imm);
            JUMP_INSN;
        case 0x67: /* jalr */
            imm = (int32_t)insn >> 20;
            val = GET_PC() + 4;
            s->pc = (intx_t)(s->reg[rs1] + imm) & ~1;
            if (rd != 0)
                s->reg[rd] = val;
            JUMP_INSN;
        case 0x63:
            funct3 = (insn >> 12) & 7;
            switch(funct3 >> 1) {
            case 0: /* beq/bne */
                cond = (s->reg[rs1] == s->reg[rs2]);
                break;
            case 2: /* blt/bge */
                cond = ((target_long)s->reg[rs1] < (target_long)s->reg[rs2]);
                break;
            case 3: /* bltu/bgeu */
                cond = (s->reg[rs1] < s->reg[rs2]);
                break;
            default:
                goto illegal_insn;
            }
            cond ^= (funct3 & 1);
            if (cond) {
                imm = ((insn >> (31 - 12)) & (1 << 12)) |
                    ((insn >> (25 - 5)) & 0x7e0) |
                    ((insn >> (8 - 1)) & 0x1e) |
                    ((insn << (11 - 7)) & (1 << 11));
                imm = (imm << 19) >> 19;
                s->pc = (intx_t)(GET_PC() + imm);
                JUMP_INSN;
            }
            NEXT_INSN;
        case 0x03: /* load */
            funct3 = (insn >> 12) & 7;
            imm = (int32_t)insn >> 20;
            addr = s->reg[rs1] + imm;
            switch(funct3) {
            case 0: /* lb */
                {
                    uint8_t rval;
                    if (target_read_u8(s, &rval, addr))
                        goto mmu_exception;
                    val = (int8_t)rval;
                }
                break;
            case 1: /* lh */
                {
                    uint16_t rval;
                    if (target_read_u16(s, &rval, addr))
                        goto mmu_exception;
                    val = (int16_t)rval;
                }
                break;
            case 2: /* lw */
                {
                    uint32_t rval;
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    val = (int32_t)rval;
                }
                break;
            case 4: /* lbu */
                {
                    uint8_t rval;
                    if (target_read_u8(s, &rval, addr))
                        goto mmu_exception;
                    val = rval;
                }
                break;
            case 5: /* lhu */
                {
                    uint16_t rval;
                    if (target_read_u16(s, &rval, addr))
                        goto mmu_exception;
                    val = rval;
                }
                break;
#if XLEN >= 64
            case 3: /* ld */
                {
                    uint64_t rval;
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    val = (int64_t)rval;
                }
                break;
            case 6: /* lwu */
                {
                    uint32_t rval;
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    val = rval;
                }
                break;
#endif
#if XLEN >= 128
            case 7: /* ldu */
                {
                    uint64_t rval;
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    val = rval;
                }
                break;
#endif
            default:
                goto illegal_insn;
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
        case 0x23: /* store */
            funct3 = (insn >> 12) & 7;
            imm = rd | ((insn >> (25 - 5)) & 0xfe0);
            imm = (imm << 20) >> 20;
            addr = s->reg[rs1] + imm;
            val = s->reg[rs2];
            switch(funct3) {
            case 0: /* sb */
                if (target_write_u8(s, addr, val))
                    goto mmu_exception;
                break;
            case 1: /* sh */
                if (target_write_u16(s, addr, val))
                    goto mmu_exception;
                break;
            case 2: /* sw */
                if (target_write_u32(s, addr, val))
                    goto mmu_exception;
                break;
#if XLEN >= 64
            case 3: /* sd */
                if (target_write_u64(s, addr, val))
                    goto mmu_exception;
                break;
#endif
#if XLEN >= 128
            case 4: /* sq */
                if (target_write_u128(s, addr, val))
                    goto mmu_exception;
                break;
#endif
            default:
                goto illegal_insn;
            }
            NEXT_INSN;
        case 0x13:
            funct3 = (insn >> 12) & 7;
            imm = (int32_t)insn >> 20;
            switch(funct3) {
            case 0: /* addi */
                val = (intx_t)(s->reg[rs1] + imm);
                break;
            case 1: /* slli */
                if ((imm & ~(XLEN - 1)) != 0)
                    goto illegal_insn;
                val = (intx_t)(s->reg[rs1] << (imm & (XLEN - 1)));
                break;
            case 2: /* slti */
                val = (target_long)s->reg[rs1] < (target_long)imm;
                break;
            case 3: /* sltiu */
                val = s->reg[rs1] < (target_ulong)imm;
                break;
            case 4: /* xori */
                val = s->reg[rs1] ^ imm;
                break;
            case 5: /* srli/srai */
                if ((imm & ~((XLEN - 1) | 0x400)) != 0)
                    goto illegal_insn;
                if (imm & 0x400)
                    val = (intx_t)s->reg[rs1] >> (imm & (XLEN - 1));
                else
                    val = (intx_t)((uintx_t)s->reg[rs1] >> (imm & (XLEN - 1)));
                break;
            case 6: /* ori */
                val = s->reg[rs1] | imm;
                break;
            default:
            case 7: /* andi */
                val = s->reg[rs1] & imm;
                break;
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#if XLEN >= 64
        case 0x1b:/* OP-IMM-32 */
            funct3 = (insn >> 12) & 7;
            imm = (int32_t)insn >> 20;
            val = s->reg[rs1];
            switch(funct3) {
            case 0: /* addiw */
                val = (int32_t)(val + imm);
                break;
            case 1: /* slliw */
                if ((imm & ~31) != 0)
                    goto illegal_insn;
                val = (int32_t)(val << (imm & 31));
                break;
            case 5: /* srliw/sraiw */
                if ((imm & ~(31 | 0x400)) != 0)
                    goto illegal_insn;
                if (imm & 0x400)
                    val = (int32_t)val >> (imm & 31);
                else
                    val = (int32_t)((uint32_t)val >> (imm & 31));
                break;
            default:
                goto illegal_insn;
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#endif
#if XLEN >= 128
        case 0x5b: /* OP-IMM-64 */
            funct3 = (insn >> 12) & 7;
            imm = (int32_t)insn >> 20;
            val = s->reg[rs1];
            switch(funct3) {
            case 0: /* addid */
                val = (int64_t)(val + imm);
                break;
            case 1: /* sllid */
                if ((imm & ~63) != 0)
                    goto illegal_insn;
                val = (int64_t)(val << (imm & 63));
                break;
            case 5: /* srlid/sraid */
                if ((imm & ~(63 | 0x400)) != 0)
                    goto illegal_insn;
                if (imm & 0x400)
                    val = (int64_t)val >> (imm & 63);
                else
                    val = (int64_t)((uint64_t)val >> (imm & 63));
                break;
            default:
                goto illegal_insn;
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#endif
        case 0x33:
            imm = insn >> 25;
            val = s->reg[rs1];
            val2 = s->reg[rs2];
            if (imm == 1) {
                funct3 = (insn >> 12) & 7;
                switch(funct3) {
                case 0: /* mul */
                    val = (intx_t)((intx_t)val * (intx_t)val2);
                    break;
                case 1: /* mulh */
                    val = (intx_t)glue(mulh, XLEN)(val, val2);
                    break;
                case 2:/* mulhsu */
                    val = (intx_t)glue(mulhsu, XLEN)(val, val2);
                    break;
                case 3:/* mulhu */
                    val = (intx_t)glue(mulhu, XLEN)(val, val2);
                    break;
                case 4:/* div */
                    val = glue(div, XLEN)(val, val2);
                    break;
                case 5:/* divu */
                    val = (intx_t)glue(divu, XLEN)(val, val2);
                    break;
                case 6:/* rem */
                    val = glue(rem, XLEN)(val, val2);
                    break;
                case 7:/* remu */
                    val = (intx_t)glue(remu, XLEN)(val, val2);
                    break;
                default:
                    goto illegal_insn;
                }
            } else {
                if (imm & ~0x20)
                    goto illegal_insn;
                funct3 = ((insn >> 12) & 7) | ((insn >> (30 - 3)) & (1 << 3));
                switch(funct3) {
                case 0: /* add */
                    val = (intx_t)(val + val2);
                    break;
                case 0 | 8: /* sub */
                    val = (intx_t)(val - val2);
                    break;
                case 1: /* sll */
                    val = (intx_t)(val << (val2 & (XLEN - 1)));
                    break;
                case 2: /* slt */
                    val = (target_long)val < (target_long)val2;
                    break;
                case 3: /* sltu */
                    val = val < val2;
                    break;
                case 4: /* xor */
                    val = val ^ val2;
                    break;
                case 5: /* srl */
                    val = (intx_t)((uintx_t)val >> (val2 & (XLEN - 1)));
                    break;
                case 5 | 8: /* sra */
                    val = (intx_t)val >> (val2 & (XLEN - 1));
                    break;
                case 6: /* or */
                    val = val | val2;
                    break;
                case 7: /* and */
                    val = val & val2;
                    break;
                default:
                    goto illegal_insn;
                }
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#if XLEN >= 64
        case 0x3b: /* OP-32 */
            imm = insn >> 25;
            val = s->reg[rs1];
            val2 = s->reg[rs2];
            if (imm == 1) {
                funct3 = (insn >> 12) & 7;
                switch(funct3) {
                case 0: /* mulw */
                    val = (int32_t)((int32_t)val * (int32_t)val2);
                    break;
                case 4:/* divw */
                    val = div32(val, val2);
                    break;
                case 5:/* divuw */
                    val = (int32_t)divu32(val, val2);
                    break;
                case 6:/* remw */
                    val = rem32(val, val2);
                    break;
                case 7:/* remuw */
                    val = (int32_t)remu32(val, val2);
                    break;
                default:
                    goto illegal_insn;
                }
            } else {
                if (imm & ~0x20)
                    goto illegal_insn;
                funct3 = ((insn >> 12) & 7) | ((insn >> (30 - 3)) & (1 << 3));
                switch(funct3) {
                case 0: /* addw */
                    val = (int32_t)(val + val2);
                    break;
                case 0 | 8: /* subw */
                    val = (int32_t)(val - val2);
                    break;
                case 1: /* sllw */
                    val = (int32_t)((uint32_t)val << (val2 & 31));
                    break;
                case 5: /* srlw */
                    val = (int32_t)((uint32_t)val >> (val2 & 31));
                    break;
                case 5 | 8: /* sraw */
                    val = (int32_t)val >> (val2 & 31);
                    break;
                default:
                    goto illegal_insn;
                }
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#endif
#if XLEN >= 128
        case 0x7b: /* OP-64 */
            imm = insn >> 25;
            val = s->reg[rs1];
            val2 = s->reg[rs2];
            if (imm == 1) {
                funct3 = (insn >> 12) & 7;
                switch(funct3) {
                case 0: /* muld */
                    val = (int64_t)((int64_t)val * (int64_t)val2);
                    break;
                case 4:/* divd */
                    val = div64(val, val2);
                    break;
                case 5:/* divud */
                    val = (int64_t)divu64(val, val2);
                    break;
                case 6:/* remd */
                    val = rem64(val, val2);
                    break;
                case 7:/* remud */
                    val = (int64_t)remu64(val, val2);
                    break;
                default:
                    goto illegal_insn;
                }
            } else {
                if (imm & ~0x20)
                    goto illegal_insn;
                funct3 = ((insn >> 12) & 7) | ((insn >> (30 - 3)) & (1 << 3));
                switch(funct3) {
                case 0: /* addd */
                    val = (int64_t)(val + val2);
                    break;
                case 0 | 8: /* subd */
                    val = (int64_t)(val - val2);
                    break;
                case 1: /* slld */
                    val = (int64_t)((uint64_t)val << (val2 & 63));
                    break;
                case 5: /* srld */
                    val = (int64_t)((uint64_t)val >> (val2 & 63));
                    break;
                case 5 | 8: /* srad */
                    val = (int64_t)val >> (val2 & 63);
                    break;
                default:
                    goto illegal_insn;
                }
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#endif
        case 0x73:
            funct3 = (insn >> 12) & 7;
            imm = insn >> 20;
            if (funct3 & 4)
                val = rs1;
            else
                val = s->reg[rs1];
            funct3 &= 3;
            switch(funct3) {
            case 1: /* csrrw */
                s->insn_counter = GET_INSN_COUNTER();
                if (csr_read(s, &val2, imm, TRUE))
                    goto illegal_insn;
                val2 = (intx_t)val2;
                err = csr_write(s, imm, val);
                if (err < 0)
                    goto illegal_insn;
                if (rd != 0)
                    s->reg[rd] = val2;
                if (err > 0) {
                    s->pc = GET_PC() + 4;
                    if (err == 2)
                        JUMP_INSN;
                    else
                        goto done_interp;
                }
                break;
            case 2: /* csrrs */
            case 3: /* csrrc */
                s->insn_counter = GET_INSN_COUNTER();
                if (csr_read(s, &val2, imm, (rs1 != 0)))
                    goto illegal_insn;
                val2 = (intx_t)val2;
                if (rs1 != 0) {
                    if (funct3 == 2)
                        val = val2 | val;
                    else
                        val = val2 & ~val;
                    err = csr_write(s, imm, val);
                    if (err < 0)
                        goto illegal_insn;
                } else {
                    err = 0;
                }
                if (rd != 0)
                    s->reg[rd] = val2;
                if (err > 0) {
                    s->pc = GET_PC() + 4;
                    if (err == 2)
                        JUMP_INSN;
                    else
                        goto done_interp;
                }
                break;
            case 0:
                switch(imm) {
                case 0x000: /* ecall */
                    if (insn & 0x000fff80)
                        goto illegal_insn;
                    s->pending_exception = CAUSE_USER_ECALL + s->priv;
                    goto exception;
                case 0x001: /* ebreak */
                    if (insn & 0x000fff80)
                        goto illegal_insn;
                    s->pending_exception = CAUSE_BREAKPOINT;
                    goto exception;
                case 0x102: /* sret */
                    {
                        if (insn & 0x000fff80)
                            goto illegal_insn;
                        if (s->priv < PRV_S)
                            goto illegal_insn;
                        s->pc = GET_PC();
                        handle_sret(s);
                        goto done_interp;
                    }
                    break;
                case 0x302: /* mret */
                    {
                        if (insn & 0x000fff80)
                            goto illegal_insn;
                        if (s->priv < PRV_M)
                            goto illegal_insn;
                        s->pc = GET_PC();
                        handle_mret(s);
                        goto done_interp;
                    }
                    break;
                case 0x105: /* wfi */
                    if (insn & 0x00007f80)
                        goto illegal_insn;
                    if (s->priv == PRV_U)
                        goto illegal_insn;
                    /* go to power down if no enabled interrupts are
                       pending */
                    if ((s->mip & s->mie) == 0) {
                        s->power_down_flag = TRUE;
                        s->pc = GET_PC() + 4;
                        goto done_interp;
                    }
                    break;
                default:
                    if ((imm >> 5) == 0x09) {
                        /* sfence.vma */
                        if (insn & 0x00007f80)
                            goto illegal_insn;
                        if (s->priv == PRV_U)
                            goto illegal_insn;
                        if (rs1 == 0) {
                            tlb_flush_all(s);
                        } else {
                            tlb_flush_vaddr(s, s->reg[rs1]);
                        }
                        /* the current code TLB may have been flushed */
                        s->pc = GET_PC() + 4;
                        JUMP_INSN;
                    } else {
                        goto illegal_insn;
                    }
                    break;
                }
                break;
            default:
                goto illegal_insn;
            }
            NEXT_INSN;
        case 0x0f: /* misc-mem */
            funct3 = (insn >> 12) & 7;
            switch(funct3) {
            case 0: /* fence */
                if (insn & 0xf00fff80)
                    goto illegal_insn;
                break;
            case 1: /* fence.i */
                if (insn != 0x0000100f)
                    goto illegal_insn;
                break;
#if XLEN >= 128
            case 2: /* lq */
                imm = (int32_t)insn >> 20;
                addr = s->reg[rs1] + imm;
                if (target_read_u128(s, &val, addr))
                    goto mmu_exception;
                if (rd != 0)
                    s->reg[rd] = val;
                break;
#endif
            default:
                goto illegal_insn;
            }
            NEXT_INSN;
        case 0x2f:
            funct3 = (insn >> 12) & 7;
#define OP_A(size)                                                      \
            {                                                           \
                uint ## size ##_t rval;                                 \
                                                                        \
                addr = s->reg[rs1];                                     \
                funct3 = insn >> 27;                                    \
                switch(funct3) {                                        \
                case 2: /* lr.w */                                      \
                    if (rs2 != 0)                                       \
                        goto illegal_insn;                              \
                    if (target_read_u ## size(s, &rval, addr))          \
                        goto mmu_exception;                             \
                    val = (int## size ## _t)rval;                       \
                    s->load_res = addr;                                 \
                    break;                                              \
                case 3: /* sc.w */                                      \
                    if (s->load_res == addr) {                          \
                        if (target_write_u ## size(s, addr, s->reg[rs2])) \
                            goto mmu_exception;                         \
                        val = 0;                                        \
                    } else {                                            \
                        val = 1;                                        \
                    }                                                   \
                    break;                                              \
                case 1: /* amiswap.w */                                 \
                case 0: /* amoadd.w */                                  \
                case 4: /* amoxor.w */                                  \
                case 0xc: /* amoand.w */                                \
                case 0x8: /* amoor.w */                                 \
                case 0x10: /* amomin.w */                               \
                case 0x14: /* amomax.w */                               \
                case 0x18: /* amominu.w */                              \
                case 0x1c: /* amomaxu.w */                              \
                    if (target_read_u ## size(s, &rval, addr))          \
                        goto mmu_exception;                             \
                    val = (int## size ## _t)rval;                       \
                    val2 = s->reg[rs2];                                 \
                    switch(funct3) {                                    \
                    case 1: /* amiswap.w */                             \
                        break;                                          \
                    case 0: /* amoadd.w */                              \
                        val2 = (int## size ## _t)(val + val2);          \
                        break;                                          \
                    case 4: /* amoxor.w */                              \
                        val2 = (int## size ## _t)(val ^ val2);          \
                        break;                                          \
                    case 0xc: /* amoand.w */                            \
                        val2 = (int## size ## _t)(val & val2);          \
                        break;                                          \
                    case 0x8: /* amoor.w */                             \
                        val2 = (int## size ## _t)(val | val2);          \
                        break;                                          \
                    case 0x10: /* amomin.w */                           \
                        if ((int## size ## _t)val < (int## size ## _t)val2) \
                            val2 = (int## size ## _t)val;               \
                        break;                                          \
                    case 0x14: /* amomax.w */                           \
                        if ((int## size ## _t)val > (int## size ## _t)val2) \
                            val2 = (int## size ## _t)val;               \
                        break;                                          \
                    case 0x18: /* amominu.w */                          \
                        if ((uint## size ## _t)val < (uint## size ## _t)val2) \
                            val2 = (int## size ## _t)val;               \
                        break;                                          \
                    case 0x1c: /* amomaxu.w */                          \
                        if ((uint## size ## _t)val > (uint## size ## _t)val2) \
                            val2 = (int## size ## _t)val;               \
                        break;                                          \
                    default:                                            \
                        goto illegal_insn;                              \
                    }                                                   \
                    if (target_write_u ## size(s, addr, val2))          \
                        goto mmu_exception;                             \
                    break;                                              \
                default:                                                \
                    goto illegal_insn;                                  \
                }                                                       \
            }

            switch(funct3) {
            case 2:
                OP_A(32);
                break;
#if XLEN >= 64
            case 3:
                OP_A(64);
                break;
#endif
#if XLEN >= 128
            case 4:
                OP_A(128);
                break;
#endif
            default:
                goto illegal_insn;
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#if FLEN > 0
            /* FPU */
        case 0x07: /* fp load */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 12) & 7;
            imm = (int32_t)insn >> 20;
            addr = s->reg[rs1] + imm;
            switch(funct3) {
            case 2: /* flw */
                {
                    uint32_t rval;
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F32_HIGH;
                }
                break;
#if FLEN >= 64
            case 3: /* fld */
                {
                    uint64_t rval;
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F64_HIGH;
                }
                break;
#endif
#if FLEN >= 128
            case 4: /* flq */
                {
                    uint128_t rval;
                    if (target_read_u128(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval;
                }
                break;
#endif
            default:
                goto illegal_insn;
            }
            s->fs = 3;
            NEXT_INSN;
        case 0x27: /* fp store */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 12) & 7;
            imm = rd | ((insn >> (25 - 5)) & 0xfe0);
            imm = (imm << 20) >> 20;
            addr = s->reg[rs1] + imm;
            switch(funct3) {
            case 2: /* fsw */
                if (target_write_u32(s, addr, s->fp_reg[rs2]))
                    goto mmu_exception;
                break;
#if FLEN >= 64
            case 3: /* fsd */
                if (target_write_u64(s, addr, s->fp_reg[rs2]))
                    goto mmu_exception;
                break;
#endif
#if FLEN >= 128
            case 4: /* fsq */
                if (target_write_u128(s, addr, s->fp_reg[rs2]))
                    goto mmu_exception;
                break;
#endif
            default:
                goto illegal_insn;
            }
            NEXT_INSN;
        case 0x43: /* fmadd */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 25) & 3;
            rs3 = insn >> 27;
            rm = get_insn_rm(s, (insn >> 12) & 7);
            if (rm < 0)
                goto illegal_insn;
            switch(funct3) {
            case 0:
                s->fp_reg[rd] = fma_sf32(s->fp_reg[rs1], s->fp_reg[rs2],
                                         s->fp_reg[rs3], rm, &s->fflags) | F32_HIGH;
                break;
#if FLEN >= 64
            case 1:
                s->fp_reg[rd] = fma_sf64(s->fp_reg[rs1], s->fp_reg[rs2],
                                         s->fp_reg[rs3], rm, &s->fflags) | F64_HIGH;
                break;
#endif
#if FLEN >= 128
            case 3:
                s->fp_reg[rd] = fma_sf128(s->fp_reg[rs1], s->fp_reg[rs2],
                                          s->fp_reg[rs3], rm, &s->fflags);
                break;
#endif
            default:
                goto illegal_insn;
            }
            s->fs = 3;
            NEXT_INSN;
        case 0x47: /* fmsub */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 25) & 3;
            rs3 = insn >> 27;
            rm = get_insn_rm(s, (insn >> 12) & 7);
            if (rm < 0)
                goto illegal_insn;
            switch(funct3) {
            case 0:
                s->fp_reg[rd] = fma_sf32(s->fp_reg[rs1],
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3] ^ FSIGN_MASK32,
                                         rm, &s->fflags) | F32_HIGH;
                break;
#if FLEN >= 64
            case 1:
                s->fp_reg[rd] = fma_sf64(s->fp_reg[rs1],
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3] ^ FSIGN_MASK64,
                                         rm, &s->fflags) | F64_HIGH;
                break;
#endif
#if FLEN >= 128
            case 3:
                s->fp_reg[rd] = fma_sf128(s->fp_reg[rs1],
                                          s->fp_reg[rs2],
                                          s->fp_reg[rs3] ^ FSIGN_MASK128,
                                          rm, &s->fflags);
                break;
#endif
            default:
                goto illegal_insn;
            }
            s->fs = 3;
            NEXT_INSN;
        case 0x4b: /* fnmsub */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 25) & 3;
            rs3 = insn >> 27;
            rm = get_insn_rm(s, (insn >> 12) & 7);
            if (rm < 0)
                goto illegal_insn;
            switch(funct3) {
            case 0:
                s->fp_reg[rd] = fma_sf32(s->fp_reg[rs1] ^ FSIGN_MASK32,
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3],
                                         rm, &s->fflags) | F32_HIGH;
                break;
#if FLEN >= 64
            case 1:
                s->fp_reg[rd] = fma_sf64(s->fp_reg[rs1] ^ FSIGN_MASK64,
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3],
                                         rm, &s->fflags) | F64_HIGH;
                break;
#endif
#if FLEN >= 128
            case 3:
                s->fp_reg[rd] = fma_sf128(s->fp_reg[rs1] ^ FSIGN_MASK128,
                                          s->fp_reg[rs2],
                                          s->fp_reg[rs3],
                                          rm, &s->fflags);
                break;
#endif
            default:
                goto illegal_insn;
            }
            s->fs = 3;
            NEXT_INSN;
        case 0x4f: /* fnmadd */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 25) & 3;
            rs3 = insn >> 27;
            rm = get_insn_rm(s, (insn >> 12) & 7);
            if (rm < 0)
                goto illegal_insn;
            switch(funct3) {
            case 0:
                s->fp_reg[rd] = fma_sf32(s->fp_reg[rs1] ^ FSIGN_MASK32,
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3] ^ FSIGN_MASK32,
                                         rm, &s->fflags) | F32_HIGH;
                break;
#if FLEN >= 64
            case 1:
                s->fp_reg[rd] = fma_sf64(s->fp_reg[rs1] ^ FSIGN_MASK64,
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3] ^ FSIGN_MASK64,
                                         rm, &s->fflags) | F64_HIGH;
                break;
#endif
#if FLEN >= 128
            case 3:
                s->fp_reg[rd] = fma_sf128(s->fp_reg[rs1] ^ FSIGN_MASK128,
                                          s->fp_reg[rs2],
                                          s->fp_reg[rs3] ^ FSIGN_MASK128,
                                          rm, &s->fflags);
                break;
#endif
            default:
                goto illegal_insn;
            }
            s->fs = 3;
            NEXT_INSN;
        case 0x53:
            if (s->fs == 0)
                goto illegal_insn;
            imm = insn >> 25;
            rm = (insn >> 12) & 7;
            switch(imm) {

#define F_SIZE 32
#if F_SIZE == 32
#define OPID 0
#define F_HIGH F32_HIGH
#elif F_SIZE == 64
#define OPID 1
#define F_HIGH F64_HIGH
#elif F_SIZE == 128
#define OPID 3
#define F_HIGH 0
#else
#error unsupported F_SIZE
#endif

#define FSIGN_MASK glue(FSIGN_MASK, F_SIZE)

            case (0x00 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(add_sf, F_SIZE)(s->fp_reg[rs1],
                                         s->fp_reg[rs2],
                                         rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x01 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sub_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x02 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(mul_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x03 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(div_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x0b << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0 || rs2 != 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sqrt_sf, F_SIZE)(s->fp_reg[rs1],
                                                rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x04 << 2) | OPID:
                switch(rm) {
                case 0: /* fsgnj */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                case 1: /* fsgnjn */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        ((s->fp_reg[rs2] & FSIGN_MASK) ^ FSIGN_MASK);
                    break;
                case 2: /* fsgnjx */
                    s->fp_reg[rd] = s->fp_reg[rs1] ^
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x05 << 2) | OPID:
                switch(rm) {
                case 0: /* fmin */
                    s->fp_reg[rd] = glue(min_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                case 1: /* fmax */
                    s->fp_reg[rd] = glue(max_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x18 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.w.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _i32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 1: /* fcvt.wu.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _u32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#if XLEN >= 64
                case 2: /* fcvt.l.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _i64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 3: /* fcvt.lu.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _u64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.t.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _i128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 5: /* fcvt.tu.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _u128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x14 << 2) | OPID:
                switch(rm) {
                case 0: /* fle */
                    val = glue(le_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 1: /* flt */
                    val = glue(lt_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 2: /* feq */
                    val = glue(eq_quiet_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                           &s->fflags);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x1a << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.[sdq].w */
                    s->fp_reg[rd] = glue(cvt_i32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 1: /* fcvt.[sdq].wu */
                    s->fp_reg[rd] = glue(cvt_u32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
#if XLEN >= 64
                case 2: /* fcvt.[sdq].l */
                    s->fp_reg[rd] = glue(cvt_i64_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 3: /* fcvt.[sdq].lu */
                    s->fp_reg[rd] = glue(cvt_u64_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.[sdq].t */
                    s->fp_reg[rd] = glue(cvt_i128_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 5: /* fcvt.[sdq].tu */
                    s->fp_reg[rd] = glue(cvt_u128_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x08 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
#if F_SIZE == 32 && FLEN >= 64
                case 1: /* cvt.s.d */
                    s->fp_reg[rd] = cvt_sf64_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#if FLEN >= 128
                case 3: /* cvt.s.q */
                    s->fp_reg[rd] = cvt_sf128_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#endif
#endif /* F_SIZE == 32 */
#if F_SIZE == 64
                case 0: /* cvt.d.s */
                    s->fp_reg[rd] = cvt_sf32_sf64(s->fp_reg[rs1], &s->fflags) | F64_HIGH;
                    break;
#if FLEN >= 128
                case 1: /* cvt.d.q */
                    s->fp_reg[rd] = cvt_sf128_sf64(s->fp_reg[rs1], rm, &s->fflags) | F64_HIGH;
                    break;
#endif
#endif /* F_SIZE == 64 */
#if F_SIZE == 128
                case 0: /* cvt.q.s */
                    s->fp_reg[rd] = cvt_sf32_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
                case 1: /* cvt.q.d */
                    s->fp_reg[rd] = cvt_sf64_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
#endif /* F_SIZE == 128 */

                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x1c << 2) | OPID:
                if (rs2 != 0)
                    goto illegal_insn;
                switch(rm) {
#if F_SIZE <= XLEN
                case 0: /* fmv.x.s */
#if F_SIZE == 32
                    val = (int32_t)s->fp_reg[rs1];
#elif F_SIZE == 64
                    val = (int64_t)s->fp_reg[rs1];
#else
                    val = (int128_t)s->fp_reg[rs1];
#endif
                    break;
#endif /* F_SIZE <= XLEN */
                case 1: /* fclass */
                    val = glue(fclass_sf, F_SIZE)(s->fp_reg[rs1]);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;

#if F_SIZE <= XLEN
            case (0x1e << 2) | OPID: /* fmv.s.x */
                if (rs2 != 0 || rm != 0)
                    goto illegal_insn;
#if F_SIZE == 32
                s->fp_reg[rd] = (int32_t)s->reg[rs1];
#elif F_SIZE == 64
                s->fp_reg[rd] = (int64_t)s->reg[rs1];
#else
                s->fp_reg[rd] = (int128_t)s->reg[rs1];
#endif
                s->fs = 3;
                break;
#endif /* F_SIZE <= XLEN */

#undef F_SIZE
#undef F_HIGH
#undef OPID
#undef FSIGN_MASK

#if FLEN >= 64
#define F_SIZE 64

#if F_SIZE == 32
#define OPID 0
#define F_HIGH F32_HIGH
#elif F_SIZE == 64
#define OPID 1
#define F_HIGH F64_HIGH
#elif F_SIZE == 128
#define OPID 3
#define F_HIGH 0
#else
#error unsupported F_SIZE
#endif

#define FSIGN_MASK glue(FSIGN_MASK, F_SIZE)

            case (0x00 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(add_sf, F_SIZE)(s->fp_reg[rs1],
                                         s->fp_reg[rs2],
                                         rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x01 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sub_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x02 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(mul_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x03 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(div_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x0b << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0 || rs2 != 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sqrt_sf, F_SIZE)(s->fp_reg[rs1],
                                                rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x04 << 2) | OPID:
                switch(rm) {
                case 0: /* fsgnj */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                case 1: /* fsgnjn */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        ((s->fp_reg[rs2] & FSIGN_MASK) ^ FSIGN_MASK);
                    break;
                case 2: /* fsgnjx */
                    s->fp_reg[rd] = s->fp_reg[rs1] ^
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x05 << 2) | OPID:
                switch(rm) {
                case 0: /* fmin */
                    s->fp_reg[rd] = glue(min_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                case 1: /* fmax */
                    s->fp_reg[rd] = glue(max_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x18 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.w.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _i32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 1: /* fcvt.wu.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _u32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#if XLEN >= 64
                case 2: /* fcvt.l.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _i64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 3: /* fcvt.lu.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _u64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.t.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _i128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 5: /* fcvt.tu.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _u128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x14 << 2) | OPID:
                switch(rm) {
                case 0: /* fle */
                    val = glue(le_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 1: /* flt */
                    val = glue(lt_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 2: /* feq */
                    val = glue(eq_quiet_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                           &s->fflags);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x1a << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.[sdq].w */
                    s->fp_reg[rd] = glue(cvt_i32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 1: /* fcvt.[sdq].wu */
                    s->fp_reg[rd] = glue(cvt_u32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
#if XLEN >= 64
                case 2: /* fcvt.[sdq].l */
                    s->fp_reg[rd] = glue(cvt_i64_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 3: /* fcvt.[sdq].lu */
                    s->fp_reg[rd] = glue(cvt_u64_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.[sdq].t */
                    s->fp_reg[rd] = glue(cvt_i128_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 5: /* fcvt.[sdq].tu */
                    s->fp_reg[rd] = glue(cvt_u128_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x08 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
#if F_SIZE == 32 && FLEN >= 64
                case 1: /* cvt.s.d */
                    s->fp_reg[rd] = cvt_sf64_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#if FLEN >= 128
                case 3: /* cvt.s.q */
                    s->fp_reg[rd] = cvt_sf128_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#endif
#endif /* F_SIZE == 32 */
#if F_SIZE == 64
                case 0: /* cvt.d.s */
                    s->fp_reg[rd] = cvt_sf32_sf64(s->fp_reg[rs1], &s->fflags) | F64_HIGH;
                    break;
#if FLEN >= 128
                case 1: /* cvt.d.q */
                    s->fp_reg[rd] = cvt_sf128_sf64(s->fp_reg[rs1], rm, &s->fflags) | F64_HIGH;
                    break;
#endif
#endif /* F_SIZE == 64 */
#if F_SIZE == 128
                case 0: /* cvt.q.s */
                    s->fp_reg[rd] = cvt_sf32_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
                case 1: /* cvt.q.d */
                    s->fp_reg[rd] = cvt_sf64_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
#endif /* F_SIZE == 128 */

                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x1c << 2) | OPID:
                if (rs2 != 0)
                    goto illegal_insn;
                switch(rm) {
#if F_SIZE <= XLEN
                case 0: /* fmv.x.s */
#if F_SIZE == 32
                    val = (int32_t)s->fp_reg[rs1];
#elif F_SIZE == 64
                    val = (int64_t)s->fp_reg[rs1];
#else
                    val = (int128_t)s->fp_reg[rs1];
#endif
                    break;
#endif /* F_SIZE <= XLEN */
                case 1: /* fclass */
                    val = glue(fclass_sf, F_SIZE)(s->fp_reg[rs1]);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;

#if F_SIZE <= XLEN
            case (0x1e << 2) | OPID: /* fmv.s.x */
                if (rs2 != 0 || rm != 0)
                    goto illegal_insn;
#if F_SIZE == 32
                s->fp_reg[rd] = (int32_t)s->reg[rs1];
#elif F_SIZE == 64
                s->fp_reg[rd] = (int64_t)s->reg[rs1];
#else
                s->fp_reg[rd] = (int128_t)s->reg[rs1];
#endif
                s->fs = 3;
                break;
#endif /* F_SIZE <= XLEN */

#undef F_SIZE
#undef F_HIGH
#undef OPID
#undef FSIGN_MASK
#endif

#if FLEN >= 128
#define F_SIZE 128
#if F_SIZE == 32
#define OPID 0
#define F_HIGH F32_HIGH
#elif F_SIZE == 64
#define OPID 1
#define F_HIGH F64_HIGH
#elif F_SIZE == 128
#define OPID 3
#define F_HIGH 0
#else
#error unsupported F_SIZE
#endif

#define FSIGN_MASK glue(FSIGN_MASK, F_SIZE)

            case (0x00 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(add_sf, F_SIZE)(s->fp_reg[rs1],
                                         s->fp_reg[rs2],
                                         rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x01 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sub_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x02 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(mul_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x03 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(div_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x0b << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0 || rs2 != 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sqrt_sf, F_SIZE)(s->fp_reg[rs1],
                                                rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x04 << 2) | OPID:
                switch(rm) {
                case 0: /* fsgnj */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                case 1: /* fsgnjn */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        ((s->fp_reg[rs2] & FSIGN_MASK) ^ FSIGN_MASK);
                    break;
                case 2: /* fsgnjx */
                    s->fp_reg[rd] = s->fp_reg[rs1] ^
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x05 << 2) | OPID:
                switch(rm) {
                case 0: /* fmin */
                    s->fp_reg[rd] = glue(min_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                case 1: /* fmax */
                    s->fp_reg[rd] = glue(max_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x18 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.w.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _i32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 1: /* fcvt.wu.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _u32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#if XLEN >= 64
                case 2: /* fcvt.l.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _i64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 3: /* fcvt.lu.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _u64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.t.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _i128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 5: /* fcvt.tu.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _u128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x14 << 2) | OPID:
                switch(rm) {
                case 0: /* fle */
                    val = glue(le_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 1: /* flt */
                    val = glue(lt_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 2: /* feq */
                    val = glue(eq_quiet_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                           &s->fflags);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x1a << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.[sdq].w */
                    s->fp_reg[rd] = glue(cvt_i32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 1: /* fcvt.[sdq].wu */
                    s->fp_reg[rd] = glue(cvt_u32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
#if XLEN >= 64
                case 2: /* fcvt.[sdq].l */
                    s->fp_reg[rd] = glue(cvt_i64_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 3: /* fcvt.[sdq].lu */
                    s->fp_reg[rd] = glue(cvt_u64_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.[sdq].t */
                    s->fp_reg[rd] = glue(cvt_i128_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 5: /* fcvt.[sdq].tu */
                    s->fp_reg[rd] = glue(cvt_u128_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x08 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
#if F_SIZE == 32 && FLEN >= 64
                case 1: /* cvt.s.d */
                    s->fp_reg[rd] = cvt_sf64_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#if FLEN >= 128
                case 3: /* cvt.s.q */
                    s->fp_reg[rd] = cvt_sf128_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#endif
#endif /* F_SIZE == 32 */
#if F_SIZE == 64
                case 0: /* cvt.d.s */
                    s->fp_reg[rd] = cvt_sf32_sf64(s->fp_reg[rs1], &s->fflags) | F64_HIGH;
                    break;
#if FLEN >= 128
                case 1: /* cvt.d.q */
                    s->fp_reg[rd] = cvt_sf128_sf64(s->fp_reg[rs1], rm, &s->fflags) | F64_HIGH;
                    break;
#endif
#endif /* F_SIZE == 64 */
#if F_SIZE == 128
                case 0: /* cvt.q.s */
                    s->fp_reg[rd] = cvt_sf32_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
                case 1: /* cvt.q.d */
                    s->fp_reg[rd] = cvt_sf64_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
#endif /* F_SIZE == 128 */

                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x1c << 2) | OPID:
                if (rs2 != 0)
                    goto illegal_insn;
                switch(rm) {
#if F_SIZE <= XLEN
                case 0: /* fmv.x.s */
#if F_SIZE == 32
                    val = (int32_t)s->fp_reg[rs1];
#elif F_SIZE == 64
                    val = (int64_t)s->fp_reg[rs1];
#else
                    val = (int128_t)s->fp_reg[rs1];
#endif
                    break;
#endif /* F_SIZE <= XLEN */
                case 1: /* fclass */
                    val = glue(fclass_sf, F_SIZE)(s->fp_reg[rs1]);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;

#if F_SIZE <= XLEN
            case (0x1e << 2) | OPID: /* fmv.s.x */
                if (rs2 != 0 || rm != 0)
                    goto illegal_insn;
#if F_SIZE == 32
                s->fp_reg[rd] = (int32_t)s->reg[rs1];
#elif F_SIZE == 64
                s->fp_reg[rd] = (int64_t)s->reg[rs1];
#else
                s->fp_reg[rd] = (int128_t)s->reg[rs1];
#endif
                s->fs = 3;
                break;
#endif /* F_SIZE <= XLEN */

#undef F_SIZE
#undef F_HIGH
#undef OPID
#undef FSIGN_MASK

#endif

            default:
                goto illegal_insn;
            }
            NEXT_INSN;
#endif
        default:
            goto illegal_insn;
        }
        /* update PC for next instruction */
    jump_insn: ;
    } /* end of main loop */
 illegal_insn:
    s->pending_exception = CAUSE_ILLEGAL_INSTRUCTION;
    s->pending_tval = insn;
 mmu_exception:
 exception:
    s->pc = GET_PC();
    if (s->pending_exception >= 0) {
        raise_exception2(s, s->pending_exception, s->pending_tval);
    }
    /* we exit because XLEN may have changed */
 done_interp:
    n_cycles--;
the_end:
    s->insn_counter = GET_INSN_COUNTER();
#if 0
    printf("done interp %lx int=%x mstatus=%lx prv=%d\n",
           (uint64_t)s->insn_counter, s->mip & s->mie, (uint64_t)s->mstatus,
           s->priv);
#endif
}

#undef uintx_t
#undef intx_t
#undef XLEN
#undef OP_A

/*================================================================*/

#if MAX_XLEN >= 64
#define XLEN 64
/*================================================================*/

#if XLEN == 32
#define uintx_t uint32_t
#define intx_t int32_t
#elif XLEN == 64
#define uintx_t uint64_t
#define intx_t int64_t
#elif XLEN == 128
#define uintx_t uint128_t
#define intx_t int128_t
#else
#error unsupported XLEN
#endif

static inline intx_t glue(div, XLEN)(intx_t a, intx_t b)
{
    if (b == 0) {
        return -1;
    } else if (a == ((intx_t)1 << (XLEN - 1)) && b == -1) {
        return a;
    } else {
        return a / b;
    }
}

static inline uintx_t glue(divu, XLEN)(uintx_t a, uintx_t b)
{
    if (b == 0) {
        return -1;
    } else {
        return a / b;
    }
}

static inline intx_t glue(rem, XLEN)(intx_t a, intx_t b)
{
    if (b == 0) {
        return a;
    } else if (a == ((intx_t)1 << (XLEN - 1)) && b == -1) {
        return 0;
    } else {
        return a % b;
    }
}

static inline uintx_t glue(remu, XLEN)(uintx_t a, uintx_t b)
{
    if (b == 0) {
        return a;
    } else {
        return a % b;
    }
}

#if XLEN == 32

static inline uint32_t mulh32(int32_t a, int32_t b)
{
    return ((int64_t)a * (int64_t)b) >> 32;
}

static inline uint32_t mulhsu32(int32_t a, uint32_t b)
{
    return ((int64_t)a * (int64_t)b) >> 32;
}

static inline uint32_t mulhu32(uint32_t a, uint32_t b)
{
    return ((int64_t)a * (int64_t)b) >> 32;
}

#elif XLEN == 64 && defined(HAVE_INT128)

static inline uint64_t mulh64(int64_t a, int64_t b)
{
    return ((int128_t)a * (int128_t)b) >> 64;
}

static inline uint64_t mulhsu64(int64_t a, uint64_t b)
{
    return ((int128_t)a * (int128_t)b) >> 64;
}

static inline uint64_t mulhu64(uint64_t a, uint64_t b)
{
    return ((int128_t)a * (int128_t)b) >> 64;
}

#else

#if XLEN == 64
#define UHALF uint32_t
#define UHALF_LEN 32
#elif XLEN == 128
#define UHALF uint64_t
#define UHALF_LEN 64
#else
#error unsupported XLEN
#endif

static uintx_t glue(mulhu, XLEN)(uintx_t a, uintx_t b)
{
    UHALF a0, a1, b0, b1, r2, r3;
    uintx_t r00, r01, r10, r11, c;
    a0 = a;
    a1 = a >> UHALF_LEN;
    b0 = b;
    b1 = b >> UHALF_LEN;

    r00 = (uintx_t)a0 * (uintx_t)b0;
    r01 = (uintx_t)a0 * (uintx_t)b1;
    r10 = (uintx_t)a1 * (uintx_t)b0;
    r11 = (uintx_t)a1 * (uintx_t)b1;

    //    r0 = r00;
    c = (r00 >> UHALF_LEN) + (UHALF)r01 + (UHALF)r10;
    //    r1 = c;
    c = (c >> UHALF_LEN) + (r01 >> UHALF_LEN) + (r10 >> UHALF_LEN) + (UHALF)r11;
    r2 = c;
    r3 = (c >> UHALF_LEN) + (r11 >> UHALF_LEN);

    //    *plow = ((uintx_t)r1 << UHALF_LEN) | r0;
    return ((uintx_t)r3 << UHALF_LEN) | r2;
}

#undef UHALF

static inline uintx_t glue(mulh, XLEN)(intx_t a, intx_t b)
{
    uintx_t r1;
    r1 = glue(mulhu, XLEN)(a, b);
    if (a < 0)
        r1 -= a;
    if (b < 0)
        r1 -= b;
    return r1;
}

static inline uintx_t glue(mulhsu, XLEN)(intx_t a, uintx_t b)
{
    uintx_t r1;
    r1 = glue(mulhu, XLEN)(a, b);
    if (a < 0)
        r1 -= a;
    return r1;
}

#endif

#define DUP2(F, n) F(n) F(n+1)
#define DUP4(F, n) DUP2(F, n) DUP2(F, n + 2)
#define DUP8(F, n) DUP4(F, n) DUP4(F, n + 4)
#define DUP16(F, n) DUP8(F, n) DUP8(F, n + 8)
#define DUP32(F, n) DUP16(F, n) DUP16(F, n + 16)

#define C_QUADRANT(n) \
    case n+(0 << 2): case n+(1 << 2): case n+(2 << 2): case n+(3 << 2): \
    case n+(4 << 2): case n+(5 << 2): case n+(6 << 2): case n+(7 << 2): \
    case n+(8 << 2): case n+(9 << 2): case n+(10 << 2): case n+(11 << 2): \
    case n+(12 << 2): case n+(13 << 2): case n+(14 << 2): case n+(15 << 2): \
    case n+(16 << 2): case n+(17 << 2): case n+(18 << 2): case n+(19 << 2): \
    case n+(20 << 2): case n+(21 << 2): case n+(22 << 2): case n+(23 << 2): \
    case n+(24 << 2): case n+(25 << 2): case n+(26 << 2): case n+(27 << 2): \
    case n+(28 << 2): case n+(29 << 2): case n+(30 << 2): case n+(31 << 2):

#define GET_PC() (target_ulong)((uintptr_t)code_ptr + code_to_pc_addend)
#define GET_INSN_COUNTER() (insn_counter_addend - n_cycles)

#define C_NEXT_INSN code_ptr += 2; break
#define NEXT_INSN code_ptr += 4; break
#define JUMP_INSN do {   \
        code_ptr = NULL;           \
        code_end = NULL;           \
        code_to_pc_addend = s->pc; \
        goto jump_insn;            \
    } while (0)

static void no_inline glue(riscv_cpu_interp_x, XLEN)(RISCVCPUState *s,
                                                   int n_cycles)
{
    uint32_t opcode, insn, rd, rs1, rs2, funct3;
    int32_t imm, cond, err;
    target_ulong addr, val, val2;
#ifndef USE_GLOBAL_VARIABLES
    uint8_t *code_ptr, *code_end;
    target_ulong code_to_pc_addend;
#endif
    uint64_t insn_counter_addend;
#if FLEN > 0
    uint32_t rs3;
    int32_t rm;
#endif

    if (n_cycles == 0)
        return;
    insn_counter_addend = s->insn_counter + n_cycles;

    /* check pending interrupts */
    if (unlikely((s->mip & s->mie) != 0)) {
        if (raise_interrupt(s))
            goto done_interp;
    }

    s->pending_exception = -1;
    n_cycles++;
    /* Note: we assume NULL is represented as a zero number */
    code_ptr = NULL;
    code_end = NULL;
    code_to_pc_addend = s->pc;

    /* we use a single execution loop to keep a simple control flow
       for emscripten */
    for(;;) {
        --n_cycles;
        if (unlikely(code_ptr >= code_end)) {
            uint32_t tlb_idx;
            uint16_t insn_high;
            target_ulong addr;
            uint8_t *ptr;

            s->pc = GET_PC();
            /* we test n_cycles only between blocks so that timer
               interrupts only happen between the blocks. It is
               important to reduce the translated code size. */
            if (unlikely(n_cycles <= 0))
                goto the_end;

            /* check pending interrupts */
            if (unlikely((s->mip & s->mie) != 0)) {
                if (raise_interrupt(s)) {
                    goto the_end;
                }
            }

            addr = s->pc;
            tlb_idx = (addr >> PG_SHIFT) & (TLB_SIZE - 1);
            if (likely(s->tlb_code[tlb_idx].vaddr == (addr & ~PG_MASK))) {
                /* TLB match */
                ptr = (uint8_t *)(s->tlb_code[tlb_idx].mem_addend +
                                  (uintptr_t)addr);
            } else {
                if (unlikely(target_read_insn_slow(s, &ptr, addr)))
                    goto mmu_exception;
            }
            code_ptr = ptr;
            code_end = ptr + (PG_MASK - 1 - (addr & PG_MASK));
            code_to_pc_addend = addr - (uintptr_t)code_ptr;
            if (unlikely(code_ptr >= code_end)) {
                /* instruction is potentially half way between two
                   pages ? */
                insn = *(uint16_t *)code_ptr;
                if ((insn & 3) == 3) {
                    /* instruction is half way between two pages */
                    if (unlikely(target_read_insn_u16(s, &insn_high, addr + 2)))
                        goto mmu_exception;
                    insn |= insn_high << 16;
                }
            } else {
                insn = get_insn32(code_ptr);
            }
        } else {
            /* fast path */
            insn = get_insn32(code_ptr);
        }
#if 0
        if (1) {
#ifdef CONFIG_LOGFILE
            log_printf("pc=0x"); fprint_target_ulong(log_file, GET_PC()); log_printf(" insn=%08x\n", insn);
            fflush(log_file);
#else
            printf("pc=0x"); print_target_ulong(GET_PC()); printf(" insn=%08x\n", insn);
            //            dump_regs(s);
#endif
        }
#endif
        opcode = insn & 0x7f;
        rd = (insn >> 7) & 0x1f;
        rs1 = (insn >> 15) & 0x1f;
        rs2 = (insn >> 20) & 0x1f;
        switch(opcode) {
#ifdef CONFIG_EXT_C
        C_QUADRANT(0)
            funct3 = (insn >> 13) & 7;
            rd = ((insn >> 2) & 7) | 8;
            switch(funct3) {
            case 0: /* c.addi4spn */
                imm = get_field1(insn, 11, 4, 5) |
                    get_field1(insn, 7, 6, 9) |
                    get_field1(insn, 6, 2, 2) |
                    get_field1(insn, 5, 3, 3);
                if (imm == 0)
                    goto illegal_insn;
                s->reg[rd] = (intx_t)(s->reg[2] + imm);
                break;
#if XLEN >= 128
            case 1: /* c.lq */
                imm = get_field1(insn, 11, 4, 5) |
                    get_field1(insn, 10, 8, 8) |
                    get_field1(insn, 5, 6, 7);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                if (target_read_u128(s, &val, addr))
                    goto mmu_exception;
                s->reg[rd] = val;
                break;
#elif FLEN >= 64
            case 1: /* c.fld */
                {
                    uint64_t rval;
                    if (s->fs == 0)
                        goto illegal_insn;
                    imm = get_field1(insn, 10, 3, 5) |
                        get_field1(insn, 5, 6, 7);
                    rs1 = ((insn >> 7) & 7) | 8;
                    addr = (intx_t)(s->reg[rs1] + imm);
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F64_HIGH;
                    s->fs = 3;
                }
                break;
#endif
            case 2: /* c.lw */
                {
                    uint32_t rval;
                    imm = get_field1(insn, 10, 3, 5) |
                        get_field1(insn, 6, 2, 2) |
                        get_field1(insn, 5, 6, 6);
                    rs1 = ((insn >> 7) & 7) | 8;
                    addr = (intx_t)(s->reg[rs1] + imm);
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    s->reg[rd] = (int32_t)rval;
                }
                break;
#if XLEN >= 64
            case 3: /* c.ld */
                {
                    uint64_t rval;
                    imm = get_field1(insn, 10, 3, 5) |
                        get_field1(insn, 5, 6, 7);
                    rs1 = ((insn >> 7) & 7) | 8;
                    addr = (intx_t)(s->reg[rs1] + imm);
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    s->reg[rd] = (int64_t)rval;
                }
                break;
#elif FLEN >= 32
            case 3: /* c.flw */
                {
                    uint32_t rval;
                    if (s->fs == 0)
                        goto illegal_insn;
                    imm = get_field1(insn, 10, 3, 5) |
                        get_field1(insn, 6, 2, 2) |
                        get_field1(insn, 5, 6, 6);
                    rs1 = ((insn >> 7) & 7) | 8;
                    addr = (intx_t)(s->reg[rs1] + imm);
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F32_HIGH;
                    s->fs = 3;
                }
                break;
#endif
#if XLEN >= 128
            case 5: /* c.sq */
                imm = get_field1(insn, 11, 4, 5) |
                    get_field1(insn, 10, 8, 8) |
                    get_field1(insn, 5, 6, 7);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                val = s->reg[rd];
                if (target_write_u128(s, addr, val))
                    goto mmu_exception;
                break;
#elif FLEN >= 64
            case 5: /* c.fsd */
                if (s->fs == 0)
                    goto illegal_insn;
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 5, 6, 7);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                if (target_write_u64(s, addr, s->fp_reg[rd]))
                    goto mmu_exception;
                break;
#endif
            case 6: /* c.sw */
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 6, 2, 2) |
                    get_field1(insn, 5, 6, 6);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                val = s->reg[rd];
                if (target_write_u32(s, addr, val))
                    goto mmu_exception;
                break;
#if XLEN >= 64
            case 7: /* c.sd */
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 5, 6, 7);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                val = s->reg[rd];
                if (target_write_u64(s, addr, val))
                    goto mmu_exception;
                break;
#elif FLEN >= 32
            case 7: /* c.fsw */
                if (s->fs == 0)
                    goto illegal_insn;
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 6, 2, 2) |
                    get_field1(insn, 5, 6, 6);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                if (target_write_u32(s, addr, s->fp_reg[rd]))
                    goto mmu_exception;
                break;
#endif
            default:
                goto illegal_insn;
            }
            C_NEXT_INSN;
        C_QUADRANT(1)
            funct3 = (insn >> 13) & 7;
            switch(funct3) {
            case 0: /* c.addi/c.nop */
                if (rd != 0) {
                    imm = sext(get_field1(insn, 12, 5, 5) |
                               get_field1(insn, 2, 0, 4), 6);
                    s->reg[rd] = (intx_t)(s->reg[rd] + imm);
                }
                break;
#if XLEN == 32
            case 1: /* c.jal */
                imm = sext(get_field1(insn, 12, 11, 11) |
                           get_field1(insn, 11, 4, 4) |
                           get_field1(insn, 9, 8, 9) |
                           get_field1(insn, 8, 10, 10) |
                           get_field1(insn, 7, 6, 6) |
                           get_field1(insn, 6, 7, 7) |
                           get_field1(insn, 3, 1, 3) |
                           get_field1(insn, 2, 5, 5), 12);
                s->reg[1] = GET_PC() + 2;
                s->pc = (intx_t)(GET_PC() + imm);
                JUMP_INSN;
#else
            case 1: /* c.addiw */
                if (rd != 0) {
                    imm = sext(get_field1(insn, 12, 5, 5) |
                               get_field1(insn, 2, 0, 4), 6);
                    s->reg[rd] = (int32_t)(s->reg[rd] + imm);
                }
                break;
#endif
            case 2: /* c.li */
                if (rd != 0) {
                    imm = sext(get_field1(insn, 12, 5, 5) |
                               get_field1(insn, 2, 0, 4), 6);
                    s->reg[rd] = imm;
                }
                break;
            case 3:
                if (rd == 2) {
                    /* c.addi16sp */
                    imm = sext(get_field1(insn, 12, 9, 9) |
                               get_field1(insn, 6, 4, 4) |
                               get_field1(insn, 5, 6, 6) |
                               get_field1(insn, 3, 7, 8) |
                               get_field1(insn, 2, 5, 5), 10);
                    if (imm == 0)
                        goto illegal_insn;
                    s->reg[2] = (intx_t)(s->reg[2] + imm);
                } else if (rd != 0) {
                    /* c.lui */
                    imm = sext(get_field1(insn, 12, 17, 17) |
                               get_field1(insn, 2, 12, 16), 18);
                    s->reg[rd] = imm;
                }
                break;
            case 4:
                funct3 = (insn >> 10) & 3;
                rd = ((insn >> 7) & 7) | 8;
                switch(funct3) {
                case 0: /* c.srli */
                case 1: /* c.srai */
                    imm = get_field1(insn, 12, 5, 5) |
                        get_field1(insn, 2, 0, 4);
#if XLEN == 32
                    if (imm & 0x20)
                        goto illegal_insn;
#elif XLEN == 128
                    if (imm == 0)
                        imm = 64;
                    else if (imm >= 32)
                        imm = 128 - imm;
#endif
                    if (funct3 == 0)
                        s->reg[rd] = (intx_t)((uintx_t)s->reg[rd] >> imm);
                    else
                        s->reg[rd] = (intx_t)s->reg[rd] >> imm;

                    break;
                case 2: /* c.andi */
                    imm = sext(get_field1(insn, 12, 5, 5) |
                               get_field1(insn, 2, 0, 4), 6);
                    s->reg[rd] &= imm;
                    break;
                case 3:
                    rs2 = ((insn >> 2) & 7) | 8;
                    funct3 = ((insn >> 5) & 3) | ((insn >> (12 - 2)) & 4);
                    switch(funct3) {
                    case 0: /* c.sub */
                        s->reg[rd] = (intx_t)(s->reg[rd] - s->reg[rs2]);
                        break;
                    case 1: /* c.xor */
                        s->reg[rd] = s->reg[rd] ^ s->reg[rs2];
                        break;
                    case 2: /* c.or */
                        s->reg[rd] = s->reg[rd] | s->reg[rs2];
                        break;
                    case 3: /* c.and */
                        s->reg[rd] = s->reg[rd] & s->reg[rs2];
                        break;
#if XLEN >= 64
                    case 4: /* c.subw */
                        s->reg[rd] = (int32_t)(s->reg[rd] - s->reg[rs2]);
                        break;
                    case 5: /* c.addw */
                        s->reg[rd] = (int32_t)(s->reg[rd] + s->reg[rs2]);
                        break;
#endif
                    default:
                        goto illegal_insn;
                    }
                    break;
                }
                break;
            case 5: /* c.j */
                imm = sext(get_field1(insn, 12, 11, 11) |
                           get_field1(insn, 11, 4, 4) |
                           get_field1(insn, 9, 8, 9) |
                           get_field1(insn, 8, 10, 10) |
                           get_field1(insn, 7, 6, 6) |
                           get_field1(insn, 6, 7, 7) |
                           get_field1(insn, 3, 1, 3) |
                           get_field1(insn, 2, 5, 5), 12);
                s->pc = (intx_t)(GET_PC() + imm);
                JUMP_INSN;
            case 6: /* c.beqz */
                rs1 = ((insn >> 7) & 7) | 8;
                imm = sext(get_field1(insn, 12, 8, 8) |
                           get_field1(insn, 10, 3, 4) |
                           get_field1(insn, 5, 6, 7) |
                           get_field1(insn, 3, 1, 2) |
                           get_field1(insn, 2, 5, 5), 9);
                if (s->reg[rs1] == 0) {
                    s->pc = (intx_t)(GET_PC() + imm);
                    JUMP_INSN;
                }
                break;
            case 7: /* c.bnez */
                rs1 = ((insn >> 7) & 7) | 8;
                imm = sext(get_field1(insn, 12, 8, 8) |
                           get_field1(insn, 10, 3, 4) |
                           get_field1(insn, 5, 6, 7) |
                           get_field1(insn, 3, 1, 2) |
                           get_field1(insn, 2, 5, 5), 9);
                if (s->reg[rs1] != 0) {
                    s->pc = (intx_t)(GET_PC() + imm);
                    JUMP_INSN;
                }
                break;
            default:
                goto illegal_insn;
            }
            C_NEXT_INSN;
        C_QUADRANT(2)
            funct3 = (insn >> 13) & 7;
            rs2 = (insn >> 2) & 0x1f;
            switch(funct3) {
            case 0: /* c.slli */
                imm = get_field1(insn, 12, 5, 5) | rs2;
#if XLEN == 32
                if (imm & 0x20)
                    goto illegal_insn;
#elif XLEN == 128
                if (imm == 0)
                    imm = 64;
#endif
                if (rd != 0)
                    s->reg[rd] = (intx_t)(s->reg[rd] << imm);
                break;
#if XLEN == 128
            case 1: /* c.lqsp */
                imm = get_field1(insn, 12, 5, 5) |
                    (rs2 & (1 << 4)) |
                    get_field1(insn, 2, 6, 9);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_read_u128(s, &val, addr))
                    goto mmu_exception;
                if (rd != 0)
                    s->reg[rd] = val;
                break;
#elif FLEN >= 64
            case 1: /* c.fldsp */
                {
                    uint64_t rval;
                    if (s->fs == 0)
                        goto illegal_insn;
                    imm = get_field1(insn, 12, 5, 5) |
                        (rs2 & (3 << 3)) |
                        get_field1(insn, 2, 6, 8);
                    addr = (intx_t)(s->reg[2] + imm);
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F64_HIGH;
                    s->fs = 3;
                }
                break;
#endif
            case 2: /* c.lwsp */
                {
                    uint32_t rval;
                    imm = get_field1(insn, 12, 5, 5) |
                        (rs2 & (7 << 2)) |
                        get_field1(insn, 2, 6, 7);
                    addr = (intx_t)(s->reg[2] + imm);
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    if (rd != 0)
                        s->reg[rd] = (int32_t)rval;
                }
                break;
#if XLEN >= 64
            case 3: /* c.ldsp */
                {
                    uint64_t rval;
                    imm = get_field1(insn, 12, 5, 5) |
                        (rs2 & (3 << 3)) |
                        get_field1(insn, 2, 6, 8);
                    addr = (intx_t)(s->reg[2] + imm);
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    if (rd != 0)
                        s->reg[rd] = (int64_t)rval;
                }
                break;
#elif FLEN >= 32
            case 3: /* c.flwsp */
                {
                    uint32_t rval;
                    if (s->fs == 0)
                        goto illegal_insn;
                    imm = get_field1(insn, 12, 5, 5) |
                        (rs2 & (7 << 2)) |
                        get_field1(insn, 2, 6, 7);
                    addr = (intx_t)(s->reg[2] + imm);
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F32_HIGH;
                    s->fs = 3;
                }
                break;
#endif
            case 4:
                if (((insn >> 12) & 1) == 0) {
                    if (rs2 == 0) {
                        /* c.jr */
                        if (rd == 0)
                            goto illegal_insn;
                        s->pc = s->reg[rd] & ~1;
                        JUMP_INSN;
                    } else {
                        /* c.mv */
                        if (rd != 0)
                            s->reg[rd] = s->reg[rs2];
                    }
                } else {
                    if (rs2 == 0) {
                        if (rd == 0) {
                            /* c.ebreak */
                            s->pending_exception = CAUSE_BREAKPOINT;
                            goto exception;
                        } else {
                            /* c.jalr */
                            val = GET_PC() + 2;
                            s->pc = s->reg[rd] & ~1;
                            s->reg[1] = val;
                            JUMP_INSN;
                        }
                    } else {
                        if (rd != 0) {
                            s->reg[rd] = (intx_t)(s->reg[rd] + s->reg[rs2]);
                        }
                    }
                }
                break;
#if XLEN == 128
            case 5: /* c.sqsp */
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 7, 6, 8);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_write_u128(s, addr, s->reg[rs2]))
                    goto mmu_exception;
                break;
#elif FLEN >= 64
            case 5: /* c.fsdsp */
                if (s->fs == 0)
                    goto illegal_insn;
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 7, 6, 8);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_write_u64(s, addr, s->fp_reg[rs2]))
                    goto mmu_exception;
                break;
#endif
            case 6: /* c.swsp */
                imm = get_field1(insn, 9, 2, 5) |
                    get_field1(insn, 7, 6, 7);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_write_u32(s, addr, s->reg[rs2]))
                    goto mmu_exception;
                break;
#if XLEN >= 64
            case 7: /* c.sdsp */
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 7, 6, 8);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_write_u64(s, addr, s->reg[rs2]))
                    goto mmu_exception;
                break;
#elif FLEN >= 32
            case 7: /* c.swsp */
                if (s->fs == 0)
                    goto illegal_insn;
                imm = get_field1(insn, 9, 2, 5) |
                    get_field1(insn, 7, 6, 7);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_write_u32(s, addr, s->fp_reg[rs2]))
                    goto mmu_exception;
                break;
#endif
            default:
                goto illegal_insn;
            }
            C_NEXT_INSN;
#endif /* CONFIG_EXT_C */

        case 0x37: /* lui */
            if (rd != 0)
                s->reg[rd] = (int32_t)(insn & 0xfffff000);
            NEXT_INSN;
        case 0x17: /* auipc */
            if (rd != 0)
                s->reg[rd] = (intx_t)(GET_PC() + (int32_t)(insn & 0xfffff000));
            NEXT_INSN;
        case 0x6f: /* jal */
            imm = ((insn >> (31 - 20)) & (1 << 20)) |
                ((insn >> (21 - 1)) & 0x7fe) |
                ((insn >> (20 - 11)) & (1 << 11)) |
                (insn & 0xff000);
            imm = (imm << 11) >> 11;
            if (rd != 0)
                s->reg[rd] = GET_PC() + 4;
            s->pc = (intx_t)(GET_PC() + imm);
            JUMP_INSN;
        case 0x67: /* jalr */
            imm = (int32_t)insn >> 20;
            val = GET_PC() + 4;
            s->pc = (intx_t)(s->reg[rs1] + imm) & ~1;
            if (rd != 0)
                s->reg[rd] = val;
            JUMP_INSN;
        case 0x63:
            funct3 = (insn >> 12) & 7;
            switch(funct3 >> 1) {
            case 0: /* beq/bne */
                cond = (s->reg[rs1] == s->reg[rs2]);
                break;
            case 2: /* blt/bge */
                cond = ((target_long)s->reg[rs1] < (target_long)s->reg[rs2]);
                break;
            case 3: /* bltu/bgeu */
                cond = (s->reg[rs1] < s->reg[rs2]);
                break;
            default:
                goto illegal_insn;
            }
            cond ^= (funct3 & 1);
            if (cond) {
                imm = ((insn >> (31 - 12)) & (1 << 12)) |
                    ((insn >> (25 - 5)) & 0x7e0) |
                    ((insn >> (8 - 1)) & 0x1e) |
                    ((insn << (11 - 7)) & (1 << 11));
                imm = (imm << 19) >> 19;
                s->pc = (intx_t)(GET_PC() + imm);
                JUMP_INSN;
            }
            NEXT_INSN;
        case 0x03: /* load */
            funct3 = (insn >> 12) & 7;
            imm = (int32_t)insn >> 20;
            addr = s->reg[rs1] + imm;
            switch(funct3) {
            case 0: /* lb */
                {
                    uint8_t rval;
                    if (target_read_u8(s, &rval, addr))
                        goto mmu_exception;
                    val = (int8_t)rval;
                }
                break;
            case 1: /* lh */
                {
                    uint16_t rval;
                    if (target_read_u16(s, &rval, addr))
                        goto mmu_exception;
                    val = (int16_t)rval;
                }
                break;
            case 2: /* lw */
                {
                    uint32_t rval;
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    val = (int32_t)rval;
                }
                break;
            case 4: /* lbu */
                {
                    uint8_t rval;
                    if (target_read_u8(s, &rval, addr))
                        goto mmu_exception;
                    val = rval;
                }
                break;
            case 5: /* lhu */
                {
                    uint16_t rval;
                    if (target_read_u16(s, &rval, addr))
                        goto mmu_exception;
                    val = rval;
                }
                break;
#if XLEN >= 64
            case 3: /* ld */
                {
                    uint64_t rval;
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    val = (int64_t)rval;
                }
                break;
            case 6: /* lwu */
                {
                    uint32_t rval;
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    val = rval;
                }
                break;
#endif
#if XLEN >= 128
            case 7: /* ldu */
                {
                    uint64_t rval;
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    val = rval;
                }
                break;
#endif
            default:
                goto illegal_insn;
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
        case 0x23: /* store */
            funct3 = (insn >> 12) & 7;
            imm = rd | ((insn >> (25 - 5)) & 0xfe0);
            imm = (imm << 20) >> 20;
            addr = s->reg[rs1] + imm;
            val = s->reg[rs2];
            switch(funct3) {
            case 0: /* sb */
                if (target_write_u8(s, addr, val))
                    goto mmu_exception;
                break;
            case 1: /* sh */
                if (target_write_u16(s, addr, val))
                    goto mmu_exception;
                break;
            case 2: /* sw */
                if (target_write_u32(s, addr, val))
                    goto mmu_exception;
                break;
#if XLEN >= 64
            case 3: /* sd */
                if (target_write_u64(s, addr, val))
                    goto mmu_exception;
                break;
#endif
#if XLEN >= 128
            case 4: /* sq */
                if (target_write_u128(s, addr, val))
                    goto mmu_exception;
                break;
#endif
            default:
                goto illegal_insn;
            }
            NEXT_INSN;
        case 0x13:
            funct3 = (insn >> 12) & 7;
            imm = (int32_t)insn >> 20;
            switch(funct3) {
            case 0: /* addi */
                val = (intx_t)(s->reg[rs1] + imm);
                break;
            case 1: /* slli */
                if ((imm & ~(XLEN - 1)) != 0)
                    goto illegal_insn;
                val = (intx_t)(s->reg[rs1] << (imm & (XLEN - 1)));
                break;
            case 2: /* slti */
                val = (target_long)s->reg[rs1] < (target_long)imm;
                break;
            case 3: /* sltiu */
                val = s->reg[rs1] < (target_ulong)imm;
                break;
            case 4: /* xori */
                val = s->reg[rs1] ^ imm;
                break;
            case 5: /* srli/srai */
                if ((imm & ~((XLEN - 1) | 0x400)) != 0)
                    goto illegal_insn;
                if (imm & 0x400)
                    val = (intx_t)s->reg[rs1] >> (imm & (XLEN - 1));
                else
                    val = (intx_t)((uintx_t)s->reg[rs1] >> (imm & (XLEN - 1)));
                break;
            case 6: /* ori */
                val = s->reg[rs1] | imm;
                break;
            default:
            case 7: /* andi */
                val = s->reg[rs1] & imm;
                break;
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#if XLEN >= 64
        case 0x1b:/* OP-IMM-32 */
            funct3 = (insn >> 12) & 7;
            imm = (int32_t)insn >> 20;
            val = s->reg[rs1];
            switch(funct3) {
            case 0: /* addiw */
                val = (int32_t)(val + imm);
                break;
            case 1: /* slliw */
                if ((imm & ~31) != 0)
                    goto illegal_insn;
                val = (int32_t)(val << (imm & 31));
                break;
            case 5: /* srliw/sraiw */
                if ((imm & ~(31 | 0x400)) != 0)
                    goto illegal_insn;
                if (imm & 0x400)
                    val = (int32_t)val >> (imm & 31);
                else
                    val = (int32_t)((uint32_t)val >> (imm & 31));
                break;
            default:
                goto illegal_insn;
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#endif
#if XLEN >= 128
        case 0x5b: /* OP-IMM-64 */
            funct3 = (insn >> 12) & 7;
            imm = (int32_t)insn >> 20;
            val = s->reg[rs1];
            switch(funct3) {
            case 0: /* addid */
                val = (int64_t)(val + imm);
                break;
            case 1: /* sllid */
                if ((imm & ~63) != 0)
                    goto illegal_insn;
                val = (int64_t)(val << (imm & 63));
                break;
            case 5: /* srlid/sraid */
                if ((imm & ~(63 | 0x400)) != 0)
                    goto illegal_insn;
                if (imm & 0x400)
                    val = (int64_t)val >> (imm & 63);
                else
                    val = (int64_t)((uint64_t)val >> (imm & 63));
                break;
            default:
                goto illegal_insn;
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#endif
        case 0x33:
            imm = insn >> 25;
            val = s->reg[rs1];
            val2 = s->reg[rs2];
            if (imm == 1) {
                funct3 = (insn >> 12) & 7;
                switch(funct3) {
                case 0: /* mul */
                    val = (intx_t)((intx_t)val * (intx_t)val2);
                    break;
                case 1: /* mulh */
                    val = (intx_t)glue(mulh, XLEN)(val, val2);
                    break;
                case 2:/* mulhsu */
                    val = (intx_t)glue(mulhsu, XLEN)(val, val2);
                    break;
                case 3:/* mulhu */
                    val = (intx_t)glue(mulhu, XLEN)(val, val2);
                    break;
                case 4:/* div */
                    val = glue(div, XLEN)(val, val2);
                    break;
                case 5:/* divu */
                    val = (intx_t)glue(divu, XLEN)(val, val2);
                    break;
                case 6:/* rem */
                    val = glue(rem, XLEN)(val, val2);
                    break;
                case 7:/* remu */
                    val = (intx_t)glue(remu, XLEN)(val, val2);
                    break;
                default:
                    goto illegal_insn;
                }
            } else {
                if (imm & ~0x20)
                    goto illegal_insn;
                funct3 = ((insn >> 12) & 7) | ((insn >> (30 - 3)) & (1 << 3));
                switch(funct3) {
                case 0: /* add */
                    val = (intx_t)(val + val2);
                    break;
                case 0 | 8: /* sub */
                    val = (intx_t)(val - val2);
                    break;
                case 1: /* sll */
                    val = (intx_t)(val << (val2 & (XLEN - 1)));
                    break;
                case 2: /* slt */
                    val = (target_long)val < (target_long)val2;
                    break;
                case 3: /* sltu */
                    val = val < val2;
                    break;
                case 4: /* xor */
                    val = val ^ val2;
                    break;
                case 5: /* srl */
                    val = (intx_t)((uintx_t)val >> (val2 & (XLEN - 1)));
                    break;
                case 5 | 8: /* sra */
                    val = (intx_t)val >> (val2 & (XLEN - 1));
                    break;
                case 6: /* or */
                    val = val | val2;
                    break;
                case 7: /* and */
                    val = val & val2;
                    break;
                default:
                    goto illegal_insn;
                }
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#if XLEN >= 64
        case 0x3b: /* OP-32 */
            imm = insn >> 25;
            val = s->reg[rs1];
            val2 = s->reg[rs2];
            if (imm == 1) {
                funct3 = (insn >> 12) & 7;
                switch(funct3) {
                case 0: /* mulw */
                    val = (int32_t)((int32_t)val * (int32_t)val2);
                    break;
                case 4:/* divw */
                    val = div32(val, val2);
                    break;
                case 5:/* divuw */
                    val = (int32_t)divu32(val, val2);
                    break;
                case 6:/* remw */
                    val = rem32(val, val2);
                    break;
                case 7:/* remuw */
                    val = (int32_t)remu32(val, val2);
                    break;
                default:
                    goto illegal_insn;
                }
            } else {
                if (imm & ~0x20)
                    goto illegal_insn;
                funct3 = ((insn >> 12) & 7) | ((insn >> (30 - 3)) & (1 << 3));
                switch(funct3) {
                case 0: /* addw */
                    val = (int32_t)(val + val2);
                    break;
                case 0 | 8: /* subw */
                    val = (int32_t)(val - val2);
                    break;
                case 1: /* sllw */
                    val = (int32_t)((uint32_t)val << (val2 & 31));
                    break;
                case 5: /* srlw */
                    val = (int32_t)((uint32_t)val >> (val2 & 31));
                    break;
                case 5 | 8: /* sraw */
                    val = (int32_t)val >> (val2 & 31);
                    break;
                default:
                    goto illegal_insn;
                }
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#endif
#if XLEN >= 128
        case 0x7b: /* OP-64 */
            imm = insn >> 25;
            val = s->reg[rs1];
            val2 = s->reg[rs2];
            if (imm == 1) {
                funct3 = (insn >> 12) & 7;
                switch(funct3) {
                case 0: /* muld */
                    val = (int64_t)((int64_t)val * (int64_t)val2);
                    break;
                case 4:/* divd */
                    val = div64(val, val2);
                    break;
                case 5:/* divud */
                    val = (int64_t)divu64(val, val2);
                    break;
                case 6:/* remd */
                    val = rem64(val, val2);
                    break;
                case 7:/* remud */
                    val = (int64_t)remu64(val, val2);
                    break;
                default:
                    goto illegal_insn;
                }
            } else {
                if (imm & ~0x20)
                    goto illegal_insn;
                funct3 = ((insn >> 12) & 7) | ((insn >> (30 - 3)) & (1 << 3));
                switch(funct3) {
                case 0: /* addd */
                    val = (int64_t)(val + val2);
                    break;
                case 0 | 8: /* subd */
                    val = (int64_t)(val - val2);
                    break;
                case 1: /* slld */
                    val = (int64_t)((uint64_t)val << (val2 & 63));
                    break;
                case 5: /* srld */
                    val = (int64_t)((uint64_t)val >> (val2 & 63));
                    break;
                case 5 | 8: /* srad */
                    val = (int64_t)val >> (val2 & 63);
                    break;
                default:
                    goto illegal_insn;
                }
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#endif
        case 0x73:
            funct3 = (insn >> 12) & 7;
            imm = insn >> 20;
            if (funct3 & 4)
                val = rs1;
            else
                val = s->reg[rs1];
            funct3 &= 3;
            switch(funct3) {
            case 1: /* csrrw */
                s->insn_counter = GET_INSN_COUNTER();
                if (csr_read(s, &val2, imm, TRUE))
                    goto illegal_insn;
                val2 = (intx_t)val2;
                err = csr_write(s, imm, val);
                if (err < 0)
                    goto illegal_insn;
                if (rd != 0)
                    s->reg[rd] = val2;
                if (err > 0) {
                    s->pc = GET_PC() + 4;
                    if (err == 2)
                        JUMP_INSN;
                    else
                        goto done_interp;
                }
                break;
            case 2: /* csrrs */
            case 3: /* csrrc */
                s->insn_counter = GET_INSN_COUNTER();
                if (csr_read(s, &val2, imm, (rs1 != 0)))
                    goto illegal_insn;
                val2 = (intx_t)val2;
                if (rs1 != 0) {
                    if (funct3 == 2)
                        val = val2 | val;
                    else
                        val = val2 & ~val;
                    err = csr_write(s, imm, val);
                    if (err < 0)
                        goto illegal_insn;
                } else {
                    err = 0;
                }
                if (rd != 0)
                    s->reg[rd] = val2;
                if (err > 0) {
                    s->pc = GET_PC() + 4;
                    if (err == 2)
                        JUMP_INSN;
                    else
                        goto done_interp;
                }
                break;
            case 0:
                switch(imm) {
                case 0x000: /* ecall */
                    if (insn & 0x000fff80)
                        goto illegal_insn;
                    s->pending_exception = CAUSE_USER_ECALL + s->priv;
                    goto exception;
                case 0x001: /* ebreak */
                    if (insn & 0x000fff80)
                        goto illegal_insn;
                    s->pending_exception = CAUSE_BREAKPOINT;
                    goto exception;
                case 0x102: /* sret */
                    {
                        if (insn & 0x000fff80)
                            goto illegal_insn;
                        if (s->priv < PRV_S)
                            goto illegal_insn;
                        s->pc = GET_PC();
                        handle_sret(s);
                        goto done_interp;
                    }
                    break;
                case 0x302: /* mret */
                    {
                        if (insn & 0x000fff80)
                            goto illegal_insn;
                        if (s->priv < PRV_M)
                            goto illegal_insn;
                        s->pc = GET_PC();
                        handle_mret(s);
                        goto done_interp;
                    }
                    break;
                case 0x105: /* wfi */
                    if (insn & 0x00007f80)
                        goto illegal_insn;
                    if (s->priv == PRV_U)
                        goto illegal_insn;
                    /* go to power down if no enabled interrupts are
                       pending */
                    if ((s->mip & s->mie) == 0) {
                        s->power_down_flag = TRUE;
                        s->pc = GET_PC() + 4;
                        goto done_interp;
                    }
                    break;
                default:
                    if ((imm >> 5) == 0x09) {
                        /* sfence.vma */
                        if (insn & 0x00007f80)
                            goto illegal_insn;
                        if (s->priv == PRV_U)
                            goto illegal_insn;
                        if (rs1 == 0) {
                            tlb_flush_all(s);
                        } else {
                            tlb_flush_vaddr(s, s->reg[rs1]);
                        }
                        /* the current code TLB may have been flushed */
                        s->pc = GET_PC() + 4;
                        JUMP_INSN;
                    } else {
                        goto illegal_insn;
                    }
                    break;
                }
                break;
            default:
                goto illegal_insn;
            }
            NEXT_INSN;
        case 0x0f: /* misc-mem */
            funct3 = (insn >> 12) & 7;
            switch(funct3) {
            case 0: /* fence */
                if (insn & 0xf00fff80)
                    goto illegal_insn;
                break;
            case 1: /* fence.i */
                if (insn != 0x0000100f)
                    goto illegal_insn;
                break;
#if XLEN >= 128
            case 2: /* lq */
                imm = (int32_t)insn >> 20;
                addr = s->reg[rs1] + imm;
                if (target_read_u128(s, &val, addr))
                    goto mmu_exception;
                if (rd != 0)
                    s->reg[rd] = val;
                break;
#endif
            default:
                goto illegal_insn;
            }
            NEXT_INSN;
        case 0x2f:
            funct3 = (insn >> 12) & 7;
#define OP_A(size)                                                      \
            {                                                           \
                uint ## size ##_t rval;                                 \
                                                                        \
                addr = s->reg[rs1];                                     \
                funct3 = insn >> 27;                                    \
                switch(funct3) {                                        \
                case 2: /* lr.w */                                      \
                    if (rs2 != 0)                                       \
                        goto illegal_insn;                              \
                    if (target_read_u ## size(s, &rval, addr))          \
                        goto mmu_exception;                             \
                    val = (int## size ## _t)rval;                       \
                    s->load_res = addr;                                 \
                    break;                                              \
                case 3: /* sc.w */                                      \
                    if (s->load_res == addr) {                          \
                        if (target_write_u ## size(s, addr, s->reg[rs2])) \
                            goto mmu_exception;                         \
                        val = 0;                                        \
                    } else {                                            \
                        val = 1;                                        \
                    }                                                   \
                    break;                                              \
                case 1: /* amiswap.w */                                 \
                case 0: /* amoadd.w */                                  \
                case 4: /* amoxor.w */                                  \
                case 0xc: /* amoand.w */                                \
                case 0x8: /* amoor.w */                                 \
                case 0x10: /* amomin.w */                               \
                case 0x14: /* amomax.w */                               \
                case 0x18: /* amominu.w */                              \
                case 0x1c: /* amomaxu.w */                              \
                    if (target_read_u ## size(s, &rval, addr))          \
                        goto mmu_exception;                             \
                    val = (int## size ## _t)rval;                       \
                    val2 = s->reg[rs2];                                 \
                    switch(funct3) {                                    \
                    case 1: /* amiswap.w */                             \
                        break;                                          \
                    case 0: /* amoadd.w */                              \
                        val2 = (int## size ## _t)(val + val2);          \
                        break;                                          \
                    case 4: /* amoxor.w */                              \
                        val2 = (int## size ## _t)(val ^ val2);          \
                        break;                                          \
                    case 0xc: /* amoand.w */                            \
                        val2 = (int## size ## _t)(val & val2);          \
                        break;                                          \
                    case 0x8: /* amoor.w */                             \
                        val2 = (int## size ## _t)(val | val2);          \
                        break;                                          \
                    case 0x10: /* amomin.w */                           \
                        if ((int## size ## _t)val < (int## size ## _t)val2) \
                            val2 = (int## size ## _t)val;               \
                        break;                                          \
                    case 0x14: /* amomax.w */                           \
                        if ((int## size ## _t)val > (int## size ## _t)val2) \
                            val2 = (int## size ## _t)val;               \
                        break;                                          \
                    case 0x18: /* amominu.w */                          \
                        if ((uint## size ## _t)val < (uint## size ## _t)val2) \
                            val2 = (int## size ## _t)val;               \
                        break;                                          \
                    case 0x1c: /* amomaxu.w */                          \
                        if ((uint## size ## _t)val > (uint## size ## _t)val2) \
                            val2 = (int## size ## _t)val;               \
                        break;                                          \
                    default:                                            \
                        goto illegal_insn;                              \
                    }                                                   \
                    if (target_write_u ## size(s, addr, val2))          \
                        goto mmu_exception;                             \
                    break;                                              \
                default:                                                \
                    goto illegal_insn;                                  \
                }                                                       \
            }

            switch(funct3) {
            case 2:
                OP_A(32);
                break;
#if XLEN >= 64
            case 3:
                OP_A(64);
                break;
#endif
#if XLEN >= 128
            case 4:
                OP_A(128);
                break;
#endif
            default:
                goto illegal_insn;
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#if FLEN > 0
            /* FPU */
        case 0x07: /* fp load */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 12) & 7;
            imm = (int32_t)insn >> 20;
            addr = s->reg[rs1] + imm;
            switch(funct3) {
            case 2: /* flw */
                {
                    uint32_t rval;
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F32_HIGH;
                }
                break;
#if FLEN >= 64
            case 3: /* fld */
                {
                    uint64_t rval;
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F64_HIGH;
                }
                break;
#endif
#if FLEN >= 128
            case 4: /* flq */
                {
                    uint128_t rval;
                    if (target_read_u128(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval;
                }
                break;
#endif
            default:
                goto illegal_insn;
            }
            s->fs = 3;
            NEXT_INSN;
        case 0x27: /* fp store */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 12) & 7;
            imm = rd | ((insn >> (25 - 5)) & 0xfe0);
            imm = (imm << 20) >> 20;
            addr = s->reg[rs1] + imm;
            switch(funct3) {
            case 2: /* fsw */
                if (target_write_u32(s, addr, s->fp_reg[rs2]))
                    goto mmu_exception;
                break;
#if FLEN >= 64
            case 3: /* fsd */
                if (target_write_u64(s, addr, s->fp_reg[rs2]))
                    goto mmu_exception;
                break;
#endif
#if FLEN >= 128
            case 4: /* fsq */
                if (target_write_u128(s, addr, s->fp_reg[rs2]))
                    goto mmu_exception;
                break;
#endif
            default:
                goto illegal_insn;
            }
            NEXT_INSN;
        case 0x43: /* fmadd */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 25) & 3;
            rs3 = insn >> 27;
            rm = get_insn_rm(s, (insn >> 12) & 7);
            if (rm < 0)
                goto illegal_insn;
            switch(funct3) {
            case 0:
                s->fp_reg[rd] = fma_sf32(s->fp_reg[rs1], s->fp_reg[rs2],
                                         s->fp_reg[rs3], rm, &s->fflags) | F32_HIGH;
                break;
#if FLEN >= 64
            case 1:
                s->fp_reg[rd] = fma_sf64(s->fp_reg[rs1], s->fp_reg[rs2],
                                         s->fp_reg[rs3], rm, &s->fflags) | F64_HIGH;
                break;
#endif
#if FLEN >= 128
            case 3:
                s->fp_reg[rd] = fma_sf128(s->fp_reg[rs1], s->fp_reg[rs2],
                                          s->fp_reg[rs3], rm, &s->fflags);
                break;
#endif
            default:
                goto illegal_insn;
            }
            s->fs = 3;
            NEXT_INSN;
        case 0x47: /* fmsub */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 25) & 3;
            rs3 = insn >> 27;
            rm = get_insn_rm(s, (insn >> 12) & 7);
            if (rm < 0)
                goto illegal_insn;
            switch(funct3) {
            case 0:
                s->fp_reg[rd] = fma_sf32(s->fp_reg[rs1],
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3] ^ FSIGN_MASK32,
                                         rm, &s->fflags) | F32_HIGH;
                break;
#if FLEN >= 64
            case 1:
                s->fp_reg[rd] = fma_sf64(s->fp_reg[rs1],
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3] ^ FSIGN_MASK64,
                                         rm, &s->fflags) | F64_HIGH;
                break;
#endif
#if FLEN >= 128
            case 3:
                s->fp_reg[rd] = fma_sf128(s->fp_reg[rs1],
                                          s->fp_reg[rs2],
                                          s->fp_reg[rs3] ^ FSIGN_MASK128,
                                          rm, &s->fflags);
                break;
#endif
            default:
                goto illegal_insn;
            }
            s->fs = 3;
            NEXT_INSN;
        case 0x4b: /* fnmsub */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 25) & 3;
            rs3 = insn >> 27;
            rm = get_insn_rm(s, (insn >> 12) & 7);
            if (rm < 0)
                goto illegal_insn;
            switch(funct3) {
            case 0:
                s->fp_reg[rd] = fma_sf32(s->fp_reg[rs1] ^ FSIGN_MASK32,
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3],
                                         rm, &s->fflags) | F32_HIGH;
                break;
#if FLEN >= 64
            case 1:
                s->fp_reg[rd] = fma_sf64(s->fp_reg[rs1] ^ FSIGN_MASK64,
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3],
                                         rm, &s->fflags) | F64_HIGH;
                break;
#endif
#if FLEN >= 128
            case 3:
                s->fp_reg[rd] = fma_sf128(s->fp_reg[rs1] ^ FSIGN_MASK128,
                                          s->fp_reg[rs2],
                                          s->fp_reg[rs3],
                                          rm, &s->fflags);
                break;
#endif
            default:
                goto illegal_insn;
            }
            s->fs = 3;
            NEXT_INSN;
        case 0x4f: /* fnmadd */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 25) & 3;
            rs3 = insn >> 27;
            rm = get_insn_rm(s, (insn >> 12) & 7);
            if (rm < 0)
                goto illegal_insn;
            switch(funct3) {
            case 0:
                s->fp_reg[rd] = fma_sf32(s->fp_reg[rs1] ^ FSIGN_MASK32,
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3] ^ FSIGN_MASK32,
                                         rm, &s->fflags) | F32_HIGH;
                break;
#if FLEN >= 64
            case 1:
                s->fp_reg[rd] = fma_sf64(s->fp_reg[rs1] ^ FSIGN_MASK64,
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3] ^ FSIGN_MASK64,
                                         rm, &s->fflags) | F64_HIGH;
                break;
#endif
#if FLEN >= 128
            case 3:
                s->fp_reg[rd] = fma_sf128(s->fp_reg[rs1] ^ FSIGN_MASK128,
                                          s->fp_reg[rs2],
                                          s->fp_reg[rs3] ^ FSIGN_MASK128,
                                          rm, &s->fflags);
                break;
#endif
            default:
                goto illegal_insn;
            }
            s->fs = 3;
            NEXT_INSN;
        case 0x53:
            if (s->fs == 0)
                goto illegal_insn;
            imm = insn >> 25;
            rm = (insn >> 12) & 7;
            switch(imm) {

#define F_SIZE 32
#if F_SIZE == 32
#define OPID 0
#define F_HIGH F32_HIGH
#elif F_SIZE == 64
#define OPID 1
#define F_HIGH F64_HIGH
#elif F_SIZE == 128
#define OPID 3
#define F_HIGH 0
#else
#error unsupported F_SIZE
#endif

#define FSIGN_MASK glue(FSIGN_MASK, F_SIZE)

            case (0x00 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(add_sf, F_SIZE)(s->fp_reg[rs1],
                                         s->fp_reg[rs2],
                                         rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x01 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sub_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x02 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(mul_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x03 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(div_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x0b << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0 || rs2 != 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sqrt_sf, F_SIZE)(s->fp_reg[rs1],
                                                rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x04 << 2) | OPID:
                switch(rm) {
                case 0: /* fsgnj */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                case 1: /* fsgnjn */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        ((s->fp_reg[rs2] & FSIGN_MASK) ^ FSIGN_MASK);
                    break;
                case 2: /* fsgnjx */
                    s->fp_reg[rd] = s->fp_reg[rs1] ^
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x05 << 2) | OPID:
                switch(rm) {
                case 0: /* fmin */
                    s->fp_reg[rd] = glue(min_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                case 1: /* fmax */
                    s->fp_reg[rd] = glue(max_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x18 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.w.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _i32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 1: /* fcvt.wu.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _u32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#if XLEN >= 64
                case 2: /* fcvt.l.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _i64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 3: /* fcvt.lu.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _u64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.t.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _i128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 5: /* fcvt.tu.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _u128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x14 << 2) | OPID:
                switch(rm) {
                case 0: /* fle */
                    val = glue(le_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 1: /* flt */
                    val = glue(lt_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 2: /* feq */
                    val = glue(eq_quiet_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                           &s->fflags);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x1a << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.[sdq].w */
                    s->fp_reg[rd] = glue(cvt_i32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 1: /* fcvt.[sdq].wu */
                    s->fp_reg[rd] = glue(cvt_u32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
#if XLEN >= 64
                case 2: /* fcvt.[sdq].l */
                    s->fp_reg[rd] = glue(cvt_i64_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 3: /* fcvt.[sdq].lu */
                    s->fp_reg[rd] = glue(cvt_u64_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.[sdq].t */
                    s->fp_reg[rd] = glue(cvt_i128_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 5: /* fcvt.[sdq].tu */
                    s->fp_reg[rd] = glue(cvt_u128_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x08 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
#if F_SIZE == 32 && FLEN >= 64
                case 1: /* cvt.s.d */
                    s->fp_reg[rd] = cvt_sf64_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#if FLEN >= 128
                case 3: /* cvt.s.q */
                    s->fp_reg[rd] = cvt_sf128_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#endif
#endif /* F_SIZE == 32 */
#if F_SIZE == 64
                case 0: /* cvt.d.s */
                    s->fp_reg[rd] = cvt_sf32_sf64(s->fp_reg[rs1], &s->fflags) | F64_HIGH;
                    break;
#if FLEN >= 128
                case 1: /* cvt.d.q */
                    s->fp_reg[rd] = cvt_sf128_sf64(s->fp_reg[rs1], rm, &s->fflags) | F64_HIGH;
                    break;
#endif
#endif /* F_SIZE == 64 */
#if F_SIZE == 128
                case 0: /* cvt.q.s */
                    s->fp_reg[rd] = cvt_sf32_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
                case 1: /* cvt.q.d */
                    s->fp_reg[rd] = cvt_sf64_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
#endif /* F_SIZE == 128 */

                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x1c << 2) | OPID:
                if (rs2 != 0)
                    goto illegal_insn;
                switch(rm) {
#if F_SIZE <= XLEN
                case 0: /* fmv.x.s */
#if F_SIZE == 32
                    val = (int32_t)s->fp_reg[rs1];
#elif F_SIZE == 64
                    val = (int64_t)s->fp_reg[rs1];
#else
                    val = (int128_t)s->fp_reg[rs1];
#endif
                    break;
#endif /* F_SIZE <= XLEN */
                case 1: /* fclass */
                    val = glue(fclass_sf, F_SIZE)(s->fp_reg[rs1]);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;

#if F_SIZE <= XLEN
            case (0x1e << 2) | OPID: /* fmv.s.x */
                if (rs2 != 0 || rm != 0)
                    goto illegal_insn;
#if F_SIZE == 32
                s->fp_reg[rd] = (int32_t)s->reg[rs1];
#elif F_SIZE == 64
                s->fp_reg[rd] = (int64_t)s->reg[rs1];
#else
                s->fp_reg[rd] = (int128_t)s->reg[rs1];
#endif
                s->fs = 3;
                break;
#endif /* F_SIZE <= XLEN */

#undef F_SIZE
#undef F_HIGH
#undef OPID
#undef FSIGN_MASK

#if FLEN >= 64
#define F_SIZE 64

#if F_SIZE == 32
#define OPID 0
#define F_HIGH F32_HIGH
#elif F_SIZE == 64
#define OPID 1
#define F_HIGH F64_HIGH
#elif F_SIZE == 128
#define OPID 3
#define F_HIGH 0
#else
#error unsupported F_SIZE
#endif

#define FSIGN_MASK glue(FSIGN_MASK, F_SIZE)

            case (0x00 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(add_sf, F_SIZE)(s->fp_reg[rs1],
                                         s->fp_reg[rs2],
                                         rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x01 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sub_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x02 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(mul_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x03 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(div_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x0b << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0 || rs2 != 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sqrt_sf, F_SIZE)(s->fp_reg[rs1],
                                                rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x04 << 2) | OPID:
                switch(rm) {
                case 0: /* fsgnj */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                case 1: /* fsgnjn */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        ((s->fp_reg[rs2] & FSIGN_MASK) ^ FSIGN_MASK);
                    break;
                case 2: /* fsgnjx */
                    s->fp_reg[rd] = s->fp_reg[rs1] ^
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x05 << 2) | OPID:
                switch(rm) {
                case 0: /* fmin */
                    s->fp_reg[rd] = glue(min_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                case 1: /* fmax */
                    s->fp_reg[rd] = glue(max_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x18 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.w.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _i32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 1: /* fcvt.wu.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _u32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#if XLEN >= 64
                case 2: /* fcvt.l.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _i64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 3: /* fcvt.lu.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _u64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.t.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _i128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 5: /* fcvt.tu.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _u128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x14 << 2) | OPID:
                switch(rm) {
                case 0: /* fle */
                    val = glue(le_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 1: /* flt */
                    val = glue(lt_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 2: /* feq */
                    val = glue(eq_quiet_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                           &s->fflags);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x1a << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.[sdq].w */
                    s->fp_reg[rd] = glue(cvt_i32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 1: /* fcvt.[sdq].wu */
                    s->fp_reg[rd] = glue(cvt_u32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
#if XLEN >= 64
                case 2: /* fcvt.[sdq].l */
                    s->fp_reg[rd] = glue(cvt_i64_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 3: /* fcvt.[sdq].lu */
                    s->fp_reg[rd] = glue(cvt_u64_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.[sdq].t */
                    s->fp_reg[rd] = glue(cvt_i128_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 5: /* fcvt.[sdq].tu */
                    s->fp_reg[rd] = glue(cvt_u128_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x08 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
#if F_SIZE == 32 && FLEN >= 64
                case 1: /* cvt.s.d */
                    s->fp_reg[rd] = cvt_sf64_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#if FLEN >= 128
                case 3: /* cvt.s.q */
                    s->fp_reg[rd] = cvt_sf128_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#endif
#endif /* F_SIZE == 32 */
#if F_SIZE == 64
                case 0: /* cvt.d.s */
                    s->fp_reg[rd] = cvt_sf32_sf64(s->fp_reg[rs1], &s->fflags) | F64_HIGH;
                    break;
#if FLEN >= 128
                case 1: /* cvt.d.q */
                    s->fp_reg[rd] = cvt_sf128_sf64(s->fp_reg[rs1], rm, &s->fflags) | F64_HIGH;
                    break;
#endif
#endif /* F_SIZE == 64 */
#if F_SIZE == 128
                case 0: /* cvt.q.s */
                    s->fp_reg[rd] = cvt_sf32_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
                case 1: /* cvt.q.d */
                    s->fp_reg[rd] = cvt_sf64_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
#endif /* F_SIZE == 128 */

                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x1c << 2) | OPID:
                if (rs2 != 0)
                    goto illegal_insn;
                switch(rm) {
#if F_SIZE <= XLEN
                case 0: /* fmv.x.s */
#if F_SIZE == 32
                    val = (int32_t)s->fp_reg[rs1];
#elif F_SIZE == 64
                    val = (int64_t)s->fp_reg[rs1];
#else
                    val = (int128_t)s->fp_reg[rs1];
#endif
                    break;
#endif /* F_SIZE <= XLEN */
                case 1: /* fclass */
                    val = glue(fclass_sf, F_SIZE)(s->fp_reg[rs1]);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;

#if F_SIZE <= XLEN
            case (0x1e << 2) | OPID: /* fmv.s.x */
                if (rs2 != 0 || rm != 0)
                    goto illegal_insn;
#if F_SIZE == 32
                s->fp_reg[rd] = (int32_t)s->reg[rs1];
#elif F_SIZE == 64
                s->fp_reg[rd] = (int64_t)s->reg[rs1];
#else
                s->fp_reg[rd] = (int128_t)s->reg[rs1];
#endif
                s->fs = 3;
                break;
#endif /* F_SIZE <= XLEN */

#undef F_SIZE
#undef F_HIGH
#undef OPID
#undef FSIGN_MASK
#endif

#if FLEN >= 128
#define F_SIZE 128
#if F_SIZE == 32
#define OPID 0
#define F_HIGH F32_HIGH
#elif F_SIZE == 64
#define OPID 1
#define F_HIGH F64_HIGH
#elif F_SIZE == 128
#define OPID 3
#define F_HIGH 0
#else
#error unsupported F_SIZE
#endif

#define FSIGN_MASK glue(FSIGN_MASK, F_SIZE)

            case (0x00 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(add_sf, F_SIZE)(s->fp_reg[rs1],
                                         s->fp_reg[rs2],
                                         rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x01 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sub_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x02 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(mul_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x03 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(div_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x0b << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0 || rs2 != 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sqrt_sf, F_SIZE)(s->fp_reg[rs1],
                                                rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x04 << 2) | OPID:
                switch(rm) {
                case 0: /* fsgnj */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                case 1: /* fsgnjn */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        ((s->fp_reg[rs2] & FSIGN_MASK) ^ FSIGN_MASK);
                    break;
                case 2: /* fsgnjx */
                    s->fp_reg[rd] = s->fp_reg[rs1] ^
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x05 << 2) | OPID:
                switch(rm) {
                case 0: /* fmin */
                    s->fp_reg[rd] = glue(min_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                case 1: /* fmax */
                    s->fp_reg[rd] = glue(max_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x18 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.w.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _i32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 1: /* fcvt.wu.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _u32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#if XLEN >= 64
                case 2: /* fcvt.l.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _i64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 3: /* fcvt.lu.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _u64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.t.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _i128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 5: /* fcvt.tu.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _u128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x14 << 2) | OPID:
                switch(rm) {
                case 0: /* fle */
                    val = glue(le_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 1: /* flt */
                    val = glue(lt_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 2: /* feq */
                    val = glue(eq_quiet_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                           &s->fflags);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x1a << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.[sdq].w */
                    s->fp_reg[rd] = glue(cvt_i32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 1: /* fcvt.[sdq].wu */
                    s->fp_reg[rd] = glue(cvt_u32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
#if XLEN >= 64
                case 2: /* fcvt.[sdq].l */
                    s->fp_reg[rd] = glue(cvt_i64_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 3: /* fcvt.[sdq].lu */
                    s->fp_reg[rd] = glue(cvt_u64_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.[sdq].t */
                    s->fp_reg[rd] = glue(cvt_i128_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 5: /* fcvt.[sdq].tu */
                    s->fp_reg[rd] = glue(cvt_u128_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x08 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
#if F_SIZE == 32 && FLEN >= 64
                case 1: /* cvt.s.d */
                    s->fp_reg[rd] = cvt_sf64_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#if FLEN >= 128
                case 3: /* cvt.s.q */
                    s->fp_reg[rd] = cvt_sf128_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#endif
#endif /* F_SIZE == 32 */
#if F_SIZE == 64
                case 0: /* cvt.d.s */
                    s->fp_reg[rd] = cvt_sf32_sf64(s->fp_reg[rs1], &s->fflags) | F64_HIGH;
                    break;
#if FLEN >= 128
                case 1: /* cvt.d.q */
                    s->fp_reg[rd] = cvt_sf128_sf64(s->fp_reg[rs1], rm, &s->fflags) | F64_HIGH;
                    break;
#endif
#endif /* F_SIZE == 64 */
#if F_SIZE == 128
                case 0: /* cvt.q.s */
                    s->fp_reg[rd] = cvt_sf32_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
                case 1: /* cvt.q.d */
                    s->fp_reg[rd] = cvt_sf64_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
#endif /* F_SIZE == 128 */

                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x1c << 2) | OPID:
                if (rs2 != 0)
                    goto illegal_insn;
                switch(rm) {
#if F_SIZE <= XLEN
                case 0: /* fmv.x.s */
#if F_SIZE == 32
                    val = (int32_t)s->fp_reg[rs1];
#elif F_SIZE == 64
                    val = (int64_t)s->fp_reg[rs1];
#else
                    val = (int128_t)s->fp_reg[rs1];
#endif
                    break;
#endif /* F_SIZE <= XLEN */
                case 1: /* fclass */
                    val = glue(fclass_sf, F_SIZE)(s->fp_reg[rs1]);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;

#if F_SIZE <= XLEN
            case (0x1e << 2) | OPID: /* fmv.s.x */
                if (rs2 != 0 || rm != 0)
                    goto illegal_insn;
#if F_SIZE == 32
                s->fp_reg[rd] = (int32_t)s->reg[rs1];
#elif F_SIZE == 64
                s->fp_reg[rd] = (int64_t)s->reg[rs1];
#else
                s->fp_reg[rd] = (int128_t)s->reg[rs1];
#endif
                s->fs = 3;
                break;
#endif /* F_SIZE <= XLEN */

#undef F_SIZE
#undef F_HIGH
#undef OPID
#undef FSIGN_MASK

#endif

            default:
                goto illegal_insn;
            }
            NEXT_INSN;
#endif
        default:
            goto illegal_insn;
        }
        /* update PC for next instruction */
    jump_insn: ;
    } /* end of main loop */
 illegal_insn:
    s->pending_exception = CAUSE_ILLEGAL_INSTRUCTION;
    s->pending_tval = insn;
 mmu_exception:
 exception:
    s->pc = GET_PC();
    if (s->pending_exception >= 0) {
        raise_exception2(s, s->pending_exception, s->pending_tval);
    }
    /* we exit because XLEN may have changed */
 done_interp:
    n_cycles--;
the_end:
    s->insn_counter = GET_INSN_COUNTER();
#if 0
    printf("done interp %lx int=%x mstatus=%lx prv=%d\n",
           (uint64_t)s->insn_counter, s->mip & s->mie, (uint64_t)s->mstatus,
           s->priv);
#endif
}

#undef uintx_t
#undef intx_t
#undef XLEN
#undef OP_A

/*================================================================*/
#endif

#if MAX_XLEN >= 128
#define XLEN 128
/*================================================================*/

#if XLEN == 32
#define uintx_t uint32_t
#define intx_t int32_t
#elif XLEN == 64
#define uintx_t uint64_t
#define intx_t int64_t
#elif XLEN == 128
#define uintx_t uint128_t
#define intx_t int128_t
#else
#error unsupported XLEN
#endif

static inline intx_t glue(div, XLEN)(intx_t a, intx_t b)
{
    if (b == 0) {
        return -1;
    } else if (a == ((intx_t)1 << (XLEN - 1)) && b == -1) {
        return a;
    } else {
        return a / b;
    }
}

static inline uintx_t glue(divu, XLEN)(uintx_t a, uintx_t b)
{
    if (b == 0) {
        return -1;
    } else {
        return a / b;
    }
}

static inline intx_t glue(rem, XLEN)(intx_t a, intx_t b)
{
    if (b == 0) {
        return a;
    } else if (a == ((intx_t)1 << (XLEN - 1)) && b == -1) {
        return 0;
    } else {
        return a % b;
    }
}

static inline uintx_t glue(remu, XLEN)(uintx_t a, uintx_t b)
{
    if (b == 0) {
        return a;
    } else {
        return a % b;
    }
}

#if XLEN == 32

static inline uint32_t mulh32(int32_t a, int32_t b)
{
    return ((int64_t)a * (int64_t)b) >> 32;
}

static inline uint32_t mulhsu32(int32_t a, uint32_t b)
{
    return ((int64_t)a * (int64_t)b) >> 32;
}

static inline uint32_t mulhu32(uint32_t a, uint32_t b)
{
    return ((int64_t)a * (int64_t)b) >> 32;
}

#elif XLEN == 64 && defined(HAVE_INT128)

static inline uint64_t mulh64(int64_t a, int64_t b)
{
    return ((int128_t)a * (int128_t)b) >> 64;
}

static inline uint64_t mulhsu64(int64_t a, uint64_t b)
{
    return ((int128_t)a * (int128_t)b) >> 64;
}

static inline uint64_t mulhu64(uint64_t a, uint64_t b)
{
    return ((int128_t)a * (int128_t)b) >> 64;
}

#else

#if XLEN == 64
#define UHALF uint32_t
#define UHALF_LEN 32
#elif XLEN == 128
#define UHALF uint64_t
#define UHALF_LEN 64
#else
#error unsupported XLEN
#endif

static uintx_t glue(mulhu, XLEN)(uintx_t a, uintx_t b)
{
    UHALF a0, a1, b0, b1, r2, r3;
    uintx_t r00, r01, r10, r11, c;
    a0 = a;
    a1 = a >> UHALF_LEN;
    b0 = b;
    b1 = b >> UHALF_LEN;

    r00 = (uintx_t)a0 * (uintx_t)b0;
    r01 = (uintx_t)a0 * (uintx_t)b1;
    r10 = (uintx_t)a1 * (uintx_t)b0;
    r11 = (uintx_t)a1 * (uintx_t)b1;

    //    r0 = r00;
    c = (r00 >> UHALF_LEN) + (UHALF)r01 + (UHALF)r10;
    //    r1 = c;
    c = (c >> UHALF_LEN) + (r01 >> UHALF_LEN) + (r10 >> UHALF_LEN) + (UHALF)r11;
    r2 = c;
    r3 = (c >> UHALF_LEN) + (r11 >> UHALF_LEN);

    //    *plow = ((uintx_t)r1 << UHALF_LEN) | r0;
    return ((uintx_t)r3 << UHALF_LEN) | r2;
}

#undef UHALF

static inline uintx_t glue(mulh, XLEN)(intx_t a, intx_t b)
{
    uintx_t r1;
    r1 = glue(mulhu, XLEN)(a, b);
    if (a < 0)
        r1 -= a;
    if (b < 0)
        r1 -= b;
    return r1;
}

static inline uintx_t glue(mulhsu, XLEN)(intx_t a, uintx_t b)
{
    uintx_t r1;
    r1 = glue(mulhu, XLEN)(a, b);
    if (a < 0)
        r1 -= a;
    return r1;
}

#endif

#define DUP2(F, n) F(n) F(n+1)
#define DUP4(F, n) DUP2(F, n) DUP2(F, n + 2)
#define DUP8(F, n) DUP4(F, n) DUP4(F, n + 4)
#define DUP16(F, n) DUP8(F, n) DUP8(F, n + 8)
#define DUP32(F, n) DUP16(F, n) DUP16(F, n + 16)

#define C_QUADRANT(n) \
    case n+(0 << 2): case n+(1 << 2): case n+(2 << 2): case n+(3 << 2): \
    case n+(4 << 2): case n+(5 << 2): case n+(6 << 2): case n+(7 << 2): \
    case n+(8 << 2): case n+(9 << 2): case n+(10 << 2): case n+(11 << 2): \
    case n+(12 << 2): case n+(13 << 2): case n+(14 << 2): case n+(15 << 2): \
    case n+(16 << 2): case n+(17 << 2): case n+(18 << 2): case n+(19 << 2): \
    case n+(20 << 2): case n+(21 << 2): case n+(22 << 2): case n+(23 << 2): \
    case n+(24 << 2): case n+(25 << 2): case n+(26 << 2): case n+(27 << 2): \
    case n+(28 << 2): case n+(29 << 2): case n+(30 << 2): case n+(31 << 2):

#define GET_PC() (target_ulong)((uintptr_t)code_ptr + code_to_pc_addend)
#define GET_INSN_COUNTER() (insn_counter_addend - n_cycles)

#define C_NEXT_INSN code_ptr += 2; break
#define NEXT_INSN code_ptr += 4; break
#define JUMP_INSN do {   \
        code_ptr = NULL;           \
        code_end = NULL;           \
        code_to_pc_addend = s->pc; \
        goto jump_insn;            \
    } while (0)

static void no_inline glue(riscv_cpu_interp_x, XLEN)(RISCVCPUState *s,
                                                   int n_cycles)
{
    uint32_t opcode, insn, rd, rs1, rs2, funct3;
    int32_t imm, cond, err;
    target_ulong addr, val, val2;
#ifndef USE_GLOBAL_VARIABLES
    uint8_t *code_ptr, *code_end;
    target_ulong code_to_pc_addend;
#endif
    uint64_t insn_counter_addend;
#if FLEN > 0
    uint32_t rs3;
    int32_t rm;
#endif

    if (n_cycles == 0)
        return;
    insn_counter_addend = s->insn_counter + n_cycles;

    /* check pending interrupts */
    if (unlikely((s->mip & s->mie) != 0)) {
        if (raise_interrupt(s))
            goto done_interp;
    }

    s->pending_exception = -1;
    n_cycles++;
    /* Note: we assume NULL is represented as a zero number */
    code_ptr = NULL;
    code_end = NULL;
    code_to_pc_addend = s->pc;

    /* we use a single execution loop to keep a simple control flow
       for emscripten */
    for(;;) {
        --n_cycles;
        if (unlikely(code_ptr >= code_end)) {
            uint32_t tlb_idx;
            uint16_t insn_high;
            target_ulong addr;
            uint8_t *ptr;

            s->pc = GET_PC();
            /* we test n_cycles only between blocks so that timer
               interrupts only happen between the blocks. It is
               important to reduce the translated code size. */
            if (unlikely(n_cycles <= 0))
                goto the_end;

            /* check pending interrupts */
            if (unlikely((s->mip & s->mie) != 0)) {
                if (raise_interrupt(s)) {
                    goto the_end;
                }
            }

            addr = s->pc;
            tlb_idx = (addr >> PG_SHIFT) & (TLB_SIZE - 1);
            if (likely(s->tlb_code[tlb_idx].vaddr == (addr & ~PG_MASK))) {
                /* TLB match */
                ptr = (uint8_t *)(s->tlb_code[tlb_idx].mem_addend +
                                  (uintptr_t)addr);
            } else {
                if (unlikely(target_read_insn_slow(s, &ptr, addr)))
                    goto mmu_exception;
            }
            code_ptr = ptr;
            code_end = ptr + (PG_MASK - 1 - (addr & PG_MASK));
            code_to_pc_addend = addr - (uintptr_t)code_ptr;
            if (unlikely(code_ptr >= code_end)) {
                /* instruction is potentially half way between two
                   pages ? */
                insn = *(uint16_t *)code_ptr;
                if ((insn & 3) == 3) {
                    /* instruction is half way between two pages */
                    if (unlikely(target_read_insn_u16(s, &insn_high, addr + 2)))
                        goto mmu_exception;
                    insn |= insn_high << 16;
                }
            } else {
                insn = get_insn32(code_ptr);
            }
        } else {
            /* fast path */
            insn = get_insn32(code_ptr);
        }
#if 0
        if (1) {
#ifdef CONFIG_LOGFILE
            log_printf("pc=0x"); fprint_target_ulong(log_file, GET_PC()); log_printf(" insn=%08x\n", insn);
            fflush(log_file);
#else
            printf("pc=0x"); print_target_ulong(GET_PC()); printf(" insn=%08x\n", insn);
            //            dump_regs(s);
#endif
        }
#endif
        opcode = insn & 0x7f;
        rd = (insn >> 7) & 0x1f;
        rs1 = (insn >> 15) & 0x1f;
        rs2 = (insn >> 20) & 0x1f;
        switch(opcode) {
#ifdef CONFIG_EXT_C
        C_QUADRANT(0)
            funct3 = (insn >> 13) & 7;
            rd = ((insn >> 2) & 7) | 8;
            switch(funct3) {
            case 0: /* c.addi4spn */
                imm = get_field1(insn, 11, 4, 5) |
                    get_field1(insn, 7, 6, 9) |
                    get_field1(insn, 6, 2, 2) |
                    get_field1(insn, 5, 3, 3);
                if (imm == 0)
                    goto illegal_insn;
                s->reg[rd] = (intx_t)(s->reg[2] + imm);
                break;
#if XLEN >= 128
            case 1: /* c.lq */
                imm = get_field1(insn, 11, 4, 5) |
                    get_field1(insn, 10, 8, 8) |
                    get_field1(insn, 5, 6, 7);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                if (target_read_u128(s, &val, addr))
                    goto mmu_exception;
                s->reg[rd] = val;
                break;
#elif FLEN >= 64
            case 1: /* c.fld */
                {
                    uint64_t rval;
                    if (s->fs == 0)
                        goto illegal_insn;
                    imm = get_field1(insn, 10, 3, 5) |
                        get_field1(insn, 5, 6, 7);
                    rs1 = ((insn >> 7) & 7) | 8;
                    addr = (intx_t)(s->reg[rs1] + imm);
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F64_HIGH;
                    s->fs = 3;
                }
                break;
#endif
            case 2: /* c.lw */
                {
                    uint32_t rval;
                    imm = get_field1(insn, 10, 3, 5) |
                        get_field1(insn, 6, 2, 2) |
                        get_field1(insn, 5, 6, 6);
                    rs1 = ((insn >> 7) & 7) | 8;
                    addr = (intx_t)(s->reg[rs1] + imm);
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    s->reg[rd] = (int32_t)rval;
                }
                break;
#if XLEN >= 64
            case 3: /* c.ld */
                {
                    uint64_t rval;
                    imm = get_field1(insn, 10, 3, 5) |
                        get_field1(insn, 5, 6, 7);
                    rs1 = ((insn >> 7) & 7) | 8;
                    addr = (intx_t)(s->reg[rs1] + imm);
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    s->reg[rd] = (int64_t)rval;
                }
                break;
#elif FLEN >= 32
            case 3: /* c.flw */
                {
                    uint32_t rval;
                    if (s->fs == 0)
                        goto illegal_insn;
                    imm = get_field1(insn, 10, 3, 5) |
                        get_field1(insn, 6, 2, 2) |
                        get_field1(insn, 5, 6, 6);
                    rs1 = ((insn >> 7) & 7) | 8;
                    addr = (intx_t)(s->reg[rs1] + imm);
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F32_HIGH;
                    s->fs = 3;
                }
                break;
#endif
#if XLEN >= 128
            case 5: /* c.sq */
                imm = get_field1(insn, 11, 4, 5) |
                    get_field1(insn, 10, 8, 8) |
                    get_field1(insn, 5, 6, 7);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                val = s->reg[rd];
                if (target_write_u128(s, addr, val))
                    goto mmu_exception;
                break;
#elif FLEN >= 64
            case 5: /* c.fsd */
                if (s->fs == 0)
                    goto illegal_insn;
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 5, 6, 7);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                if (target_write_u64(s, addr, s->fp_reg[rd]))
                    goto mmu_exception;
                break;
#endif
            case 6: /* c.sw */
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 6, 2, 2) |
                    get_field1(insn, 5, 6, 6);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                val = s->reg[rd];
                if (target_write_u32(s, addr, val))
                    goto mmu_exception;
                break;
#if XLEN >= 64
            case 7: /* c.sd */
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 5, 6, 7);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                val = s->reg[rd];
                if (target_write_u64(s, addr, val))
                    goto mmu_exception;
                break;
#elif FLEN >= 32
            case 7: /* c.fsw */
                if (s->fs == 0)
                    goto illegal_insn;
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 6, 2, 2) |
                    get_field1(insn, 5, 6, 6);
                rs1 = ((insn >> 7) & 7) | 8;
                addr = (intx_t)(s->reg[rs1] + imm);
                if (target_write_u32(s, addr, s->fp_reg[rd]))
                    goto mmu_exception;
                break;
#endif
            default:
                goto illegal_insn;
            }
            C_NEXT_INSN;
        C_QUADRANT(1)
            funct3 = (insn >> 13) & 7;
            switch(funct3) {
            case 0: /* c.addi/c.nop */
                if (rd != 0) {
                    imm = sext(get_field1(insn, 12, 5, 5) |
                               get_field1(insn, 2, 0, 4), 6);
                    s->reg[rd] = (intx_t)(s->reg[rd] + imm);
                }
                break;
#if XLEN == 32
            case 1: /* c.jal */
                imm = sext(get_field1(insn, 12, 11, 11) |
                           get_field1(insn, 11, 4, 4) |
                           get_field1(insn, 9, 8, 9) |
                           get_field1(insn, 8, 10, 10) |
                           get_field1(insn, 7, 6, 6) |
                           get_field1(insn, 6, 7, 7) |
                           get_field1(insn, 3, 1, 3) |
                           get_field1(insn, 2, 5, 5), 12);
                s->reg[1] = GET_PC() + 2;
                s->pc = (intx_t)(GET_PC() + imm);
                JUMP_INSN;
#else
            case 1: /* c.addiw */
                if (rd != 0) {
                    imm = sext(get_field1(insn, 12, 5, 5) |
                               get_field1(insn, 2, 0, 4), 6);
                    s->reg[rd] = (int32_t)(s->reg[rd] + imm);
                }
                break;
#endif
            case 2: /* c.li */
                if (rd != 0) {
                    imm = sext(get_field1(insn, 12, 5, 5) |
                               get_field1(insn, 2, 0, 4), 6);
                    s->reg[rd] = imm;
                }
                break;
            case 3:
                if (rd == 2) {
                    /* c.addi16sp */
                    imm = sext(get_field1(insn, 12, 9, 9) |
                               get_field1(insn, 6, 4, 4) |
                               get_field1(insn, 5, 6, 6) |
                               get_field1(insn, 3, 7, 8) |
                               get_field1(insn, 2, 5, 5), 10);
                    if (imm == 0)
                        goto illegal_insn;
                    s->reg[2] = (intx_t)(s->reg[2] + imm);
                } else if (rd != 0) {
                    /* c.lui */
                    imm = sext(get_field1(insn, 12, 17, 17) |
                               get_field1(insn, 2, 12, 16), 18);
                    s->reg[rd] = imm;
                }
                break;
            case 4:
                funct3 = (insn >> 10) & 3;
                rd = ((insn >> 7) & 7) | 8;
                switch(funct3) {
                case 0: /* c.srli */
                case 1: /* c.srai */
                    imm = get_field1(insn, 12, 5, 5) |
                        get_field1(insn, 2, 0, 4);
#if XLEN == 32
                    if (imm & 0x20)
                        goto illegal_insn;
#elif XLEN == 128
                    if (imm == 0)
                        imm = 64;
                    else if (imm >= 32)
                        imm = 128 - imm;
#endif
                    if (funct3 == 0)
                        s->reg[rd] = (intx_t)((uintx_t)s->reg[rd] >> imm);
                    else
                        s->reg[rd] = (intx_t)s->reg[rd] >> imm;

                    break;
                case 2: /* c.andi */
                    imm = sext(get_field1(insn, 12, 5, 5) |
                               get_field1(insn, 2, 0, 4), 6);
                    s->reg[rd] &= imm;
                    break;
                case 3:
                    rs2 = ((insn >> 2) & 7) | 8;
                    funct3 = ((insn >> 5) & 3) | ((insn >> (12 - 2)) & 4);
                    switch(funct3) {
                    case 0: /* c.sub */
                        s->reg[rd] = (intx_t)(s->reg[rd] - s->reg[rs2]);
                        break;
                    case 1: /* c.xor */
                        s->reg[rd] = s->reg[rd] ^ s->reg[rs2];
                        break;
                    case 2: /* c.or */
                        s->reg[rd] = s->reg[rd] | s->reg[rs2];
                        break;
                    case 3: /* c.and */
                        s->reg[rd] = s->reg[rd] & s->reg[rs2];
                        break;
#if XLEN >= 64
                    case 4: /* c.subw */
                        s->reg[rd] = (int32_t)(s->reg[rd] - s->reg[rs2]);
                        break;
                    case 5: /* c.addw */
                        s->reg[rd] = (int32_t)(s->reg[rd] + s->reg[rs2]);
                        break;
#endif
                    default:
                        goto illegal_insn;
                    }
                    break;
                }
                break;
            case 5: /* c.j */
                imm = sext(get_field1(insn, 12, 11, 11) |
                           get_field1(insn, 11, 4, 4) |
                           get_field1(insn, 9, 8, 9) |
                           get_field1(insn, 8, 10, 10) |
                           get_field1(insn, 7, 6, 6) |
                           get_field1(insn, 6, 7, 7) |
                           get_field1(insn, 3, 1, 3) |
                           get_field1(insn, 2, 5, 5), 12);
                s->pc = (intx_t)(GET_PC() + imm);
                JUMP_INSN;
            case 6: /* c.beqz */
                rs1 = ((insn >> 7) & 7) | 8;
                imm = sext(get_field1(insn, 12, 8, 8) |
                           get_field1(insn, 10, 3, 4) |
                           get_field1(insn, 5, 6, 7) |
                           get_field1(insn, 3, 1, 2) |
                           get_field1(insn, 2, 5, 5), 9);
                if (s->reg[rs1] == 0) {
                    s->pc = (intx_t)(GET_PC() + imm);
                    JUMP_INSN;
                }
                break;
            case 7: /* c.bnez */
                rs1 = ((insn >> 7) & 7) | 8;
                imm = sext(get_field1(insn, 12, 8, 8) |
                           get_field1(insn, 10, 3, 4) |
                           get_field1(insn, 5, 6, 7) |
                           get_field1(insn, 3, 1, 2) |
                           get_field1(insn, 2, 5, 5), 9);
                if (s->reg[rs1] != 0) {
                    s->pc = (intx_t)(GET_PC() + imm);
                    JUMP_INSN;
                }
                break;
            default:
                goto illegal_insn;
            }
            C_NEXT_INSN;
        C_QUADRANT(2)
            funct3 = (insn >> 13) & 7;
            rs2 = (insn >> 2) & 0x1f;
            switch(funct3) {
            case 0: /* c.slli */
                imm = get_field1(insn, 12, 5, 5) | rs2;
#if XLEN == 32
                if (imm & 0x20)
                    goto illegal_insn;
#elif XLEN == 128
                if (imm == 0)
                    imm = 64;
#endif
                if (rd != 0)
                    s->reg[rd] = (intx_t)(s->reg[rd] << imm);
                break;
#if XLEN == 128
            case 1: /* c.lqsp */
                imm = get_field1(insn, 12, 5, 5) |
                    (rs2 & (1 << 4)) |
                    get_field1(insn, 2, 6, 9);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_read_u128(s, &val, addr))
                    goto mmu_exception;
                if (rd != 0)
                    s->reg[rd] = val;
                break;
#elif FLEN >= 64
            case 1: /* c.fldsp */
                {
                    uint64_t rval;
                    if (s->fs == 0)
                        goto illegal_insn;
                    imm = get_field1(insn, 12, 5, 5) |
                        (rs2 & (3 << 3)) |
                        get_field1(insn, 2, 6, 8);
                    addr = (intx_t)(s->reg[2] + imm);
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F64_HIGH;
                    s->fs = 3;
                }
                break;
#endif
            case 2: /* c.lwsp */
                {
                    uint32_t rval;
                    imm = get_field1(insn, 12, 5, 5) |
                        (rs2 & (7 << 2)) |
                        get_field1(insn, 2, 6, 7);
                    addr = (intx_t)(s->reg[2] + imm);
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    if (rd != 0)
                        s->reg[rd] = (int32_t)rval;
                }
                break;
#if XLEN >= 64
            case 3: /* c.ldsp */
                {
                    uint64_t rval;
                    imm = get_field1(insn, 12, 5, 5) |
                        (rs2 & (3 << 3)) |
                        get_field1(insn, 2, 6, 8);
                    addr = (intx_t)(s->reg[2] + imm);
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    if (rd != 0)
                        s->reg[rd] = (int64_t)rval;
                }
                break;
#elif FLEN >= 32
            case 3: /* c.flwsp */
                {
                    uint32_t rval;
                    if (s->fs == 0)
                        goto illegal_insn;
                    imm = get_field1(insn, 12, 5, 5) |
                        (rs2 & (7 << 2)) |
                        get_field1(insn, 2, 6, 7);
                    addr = (intx_t)(s->reg[2] + imm);
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F32_HIGH;
                    s->fs = 3;
                }
                break;
#endif
            case 4:
                if (((insn >> 12) & 1) == 0) {
                    if (rs2 == 0) {
                        /* c.jr */
                        if (rd == 0)
                            goto illegal_insn;
                        s->pc = s->reg[rd] & ~1;
                        JUMP_INSN;
                    } else {
                        /* c.mv */
                        if (rd != 0)
                            s->reg[rd] = s->reg[rs2];
                    }
                } else {
                    if (rs2 == 0) {
                        if (rd == 0) {
                            /* c.ebreak */
                            s->pending_exception = CAUSE_BREAKPOINT;
                            goto exception;
                        } else {
                            /* c.jalr */
                            val = GET_PC() + 2;
                            s->pc = s->reg[rd] & ~1;
                            s->reg[1] = val;
                            JUMP_INSN;
                        }
                    } else {
                        if (rd != 0) {
                            s->reg[rd] = (intx_t)(s->reg[rd] + s->reg[rs2]);
                        }
                    }
                }
                break;
#if XLEN == 128
            case 5: /* c.sqsp */
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 7, 6, 8);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_write_u128(s, addr, s->reg[rs2]))
                    goto mmu_exception;
                break;
#elif FLEN >= 64
            case 5: /* c.fsdsp */
                if (s->fs == 0)
                    goto illegal_insn;
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 7, 6, 8);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_write_u64(s, addr, s->fp_reg[rs2]))
                    goto mmu_exception;
                break;
#endif
            case 6: /* c.swsp */
                imm = get_field1(insn, 9, 2, 5) |
                    get_field1(insn, 7, 6, 7);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_write_u32(s, addr, s->reg[rs2]))
                    goto mmu_exception;
                break;
#if XLEN >= 64
            case 7: /* c.sdsp */
                imm = get_field1(insn, 10, 3, 5) |
                    get_field1(insn, 7, 6, 8);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_write_u64(s, addr, s->reg[rs2]))
                    goto mmu_exception;
                break;
#elif FLEN >= 32
            case 7: /* c.swsp */
                if (s->fs == 0)
                    goto illegal_insn;
                imm = get_field1(insn, 9, 2, 5) |
                    get_field1(insn, 7, 6, 7);
                addr = (intx_t)(s->reg[2] + imm);
                if (target_write_u32(s, addr, s->fp_reg[rs2]))
                    goto mmu_exception;
                break;
#endif
            default:
                goto illegal_insn;
            }
            C_NEXT_INSN;
#endif /* CONFIG_EXT_C */

        case 0x37: /* lui */
            if (rd != 0)
                s->reg[rd] = (int32_t)(insn & 0xfffff000);
            NEXT_INSN;
        case 0x17: /* auipc */
            if (rd != 0)
                s->reg[rd] = (intx_t)(GET_PC() + (int32_t)(insn & 0xfffff000));
            NEXT_INSN;
        case 0x6f: /* jal */
            imm = ((insn >> (31 - 20)) & (1 << 20)) |
                ((insn >> (21 - 1)) & 0x7fe) |
                ((insn >> (20 - 11)) & (1 << 11)) |
                (insn & 0xff000);
            imm = (imm << 11) >> 11;
            if (rd != 0)
                s->reg[rd] = GET_PC() + 4;
            s->pc = (intx_t)(GET_PC() + imm);
            JUMP_INSN;
        case 0x67: /* jalr */
            imm = (int32_t)insn >> 20;
            val = GET_PC() + 4;
            s->pc = (intx_t)(s->reg[rs1] + imm) & ~1;
            if (rd != 0)
                s->reg[rd] = val;
            JUMP_INSN;
        case 0x63:
            funct3 = (insn >> 12) & 7;
            switch(funct3 >> 1) {
            case 0: /* beq/bne */
                cond = (s->reg[rs1] == s->reg[rs2]);
                break;
            case 2: /* blt/bge */
                cond = ((target_long)s->reg[rs1] < (target_long)s->reg[rs2]);
                break;
            case 3: /* bltu/bgeu */
                cond = (s->reg[rs1] < s->reg[rs2]);
                break;
            default:
                goto illegal_insn;
            }
            cond ^= (funct3 & 1);
            if (cond) {
                imm = ((insn >> (31 - 12)) & (1 << 12)) |
                    ((insn >> (25 - 5)) & 0x7e0) |
                    ((insn >> (8 - 1)) & 0x1e) |
                    ((insn << (11 - 7)) & (1 << 11));
                imm = (imm << 19) >> 19;
                s->pc = (intx_t)(GET_PC() + imm);
                JUMP_INSN;
            }
            NEXT_INSN;
        case 0x03: /* load */
            funct3 = (insn >> 12) & 7;
            imm = (int32_t)insn >> 20;
            addr = s->reg[rs1] + imm;
            switch(funct3) {
            case 0: /* lb */
                {
                    uint8_t rval;
                    if (target_read_u8(s, &rval, addr))
                        goto mmu_exception;
                    val = (int8_t)rval;
                }
                break;
            case 1: /* lh */
                {
                    uint16_t rval;
                    if (target_read_u16(s, &rval, addr))
                        goto mmu_exception;
                    val = (int16_t)rval;
                }
                break;
            case 2: /* lw */
                {
                    uint32_t rval;
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    val = (int32_t)rval;
                }
                break;
            case 4: /* lbu */
                {
                    uint8_t rval;
                    if (target_read_u8(s, &rval, addr))
                        goto mmu_exception;
                    val = rval;
                }
                break;
            case 5: /* lhu */
                {
                    uint16_t rval;
                    if (target_read_u16(s, &rval, addr))
                        goto mmu_exception;
                    val = rval;
                }
                break;
#if XLEN >= 64
            case 3: /* ld */
                {
                    uint64_t rval;
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    val = (int64_t)rval;
                }
                break;
            case 6: /* lwu */
                {
                    uint32_t rval;
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    val = rval;
                }
                break;
#endif
#if XLEN >= 128
            case 7: /* ldu */
                {
                    uint64_t rval;
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    val = rval;
                }
                break;
#endif
            default:
                goto illegal_insn;
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
        case 0x23: /* store */
            funct3 = (insn >> 12) & 7;
            imm = rd | ((insn >> (25 - 5)) & 0xfe0);
            imm = (imm << 20) >> 20;
            addr = s->reg[rs1] + imm;
            val = s->reg[rs2];
            switch(funct3) {
            case 0: /* sb */
                if (target_write_u8(s, addr, val))
                    goto mmu_exception;
                break;
            case 1: /* sh */
                if (target_write_u16(s, addr, val))
                    goto mmu_exception;
                break;
            case 2: /* sw */
                if (target_write_u32(s, addr, val))
                    goto mmu_exception;
                break;
#if XLEN >= 64
            case 3: /* sd */
                if (target_write_u64(s, addr, val))
                    goto mmu_exception;
                break;
#endif
#if XLEN >= 128
            case 4: /* sq */
                if (target_write_u128(s, addr, val))
                    goto mmu_exception;
                break;
#endif
            default:
                goto illegal_insn;
            }
            NEXT_INSN;
        case 0x13:
            funct3 = (insn >> 12) & 7;
            imm = (int32_t)insn >> 20;
            switch(funct3) {
            case 0: /* addi */
                val = (intx_t)(s->reg[rs1] + imm);
                break;
            case 1: /* slli */
                if ((imm & ~(XLEN - 1)) != 0)
                    goto illegal_insn;
                val = (intx_t)(s->reg[rs1] << (imm & (XLEN - 1)));
                break;
            case 2: /* slti */
                val = (target_long)s->reg[rs1] < (target_long)imm;
                break;
            case 3: /* sltiu */
                val = s->reg[rs1] < (target_ulong)imm;
                break;
            case 4: /* xori */
                val = s->reg[rs1] ^ imm;
                break;
            case 5: /* srli/srai */
                if ((imm & ~((XLEN - 1) | 0x400)) != 0)
                    goto illegal_insn;
                if (imm & 0x400)
                    val = (intx_t)s->reg[rs1] >> (imm & (XLEN - 1));
                else
                    val = (intx_t)((uintx_t)s->reg[rs1] >> (imm & (XLEN - 1)));
                break;
            case 6: /* ori */
                val = s->reg[rs1] | imm;
                break;
            default:
            case 7: /* andi */
                val = s->reg[rs1] & imm;
                break;
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#if XLEN >= 64
        case 0x1b:/* OP-IMM-32 */
            funct3 = (insn >> 12) & 7;
            imm = (int32_t)insn >> 20;
            val = s->reg[rs1];
            switch(funct3) {
            case 0: /* addiw */
                val = (int32_t)(val + imm);
                break;
            case 1: /* slliw */
                if ((imm & ~31) != 0)
                    goto illegal_insn;
                val = (int32_t)(val << (imm & 31));
                break;
            case 5: /* srliw/sraiw */
                if ((imm & ~(31 | 0x400)) != 0)
                    goto illegal_insn;
                if (imm & 0x400)
                    val = (int32_t)val >> (imm & 31);
                else
                    val = (int32_t)((uint32_t)val >> (imm & 31));
                break;
            default:
                goto illegal_insn;
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#endif
#if XLEN >= 128
        case 0x5b: /* OP-IMM-64 */
            funct3 = (insn >> 12) & 7;
            imm = (int32_t)insn >> 20;
            val = s->reg[rs1];
            switch(funct3) {
            case 0: /* addid */
                val = (int64_t)(val + imm);
                break;
            case 1: /* sllid */
                if ((imm & ~63) != 0)
                    goto illegal_insn;
                val = (int64_t)(val << (imm & 63));
                break;
            case 5: /* srlid/sraid */
                if ((imm & ~(63 | 0x400)) != 0)
                    goto illegal_insn;
                if (imm & 0x400)
                    val = (int64_t)val >> (imm & 63);
                else
                    val = (int64_t)((uint64_t)val >> (imm & 63));
                break;
            default:
                goto illegal_insn;
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#endif
        case 0x33:
            imm = insn >> 25;
            val = s->reg[rs1];
            val2 = s->reg[rs2];
            if (imm == 1) {
                funct3 = (insn >> 12) & 7;
                switch(funct3) {
                case 0: /* mul */
                    val = (intx_t)((intx_t)val * (intx_t)val2);
                    break;
                case 1: /* mulh */
                    val = (intx_t)glue(mulh, XLEN)(val, val2);
                    break;
                case 2:/* mulhsu */
                    val = (intx_t)glue(mulhsu, XLEN)(val, val2);
                    break;
                case 3:/* mulhu */
                    val = (intx_t)glue(mulhu, XLEN)(val, val2);
                    break;
                case 4:/* div */
                    val = glue(div, XLEN)(val, val2);
                    break;
                case 5:/* divu */
                    val = (intx_t)glue(divu, XLEN)(val, val2);
                    break;
                case 6:/* rem */
                    val = glue(rem, XLEN)(val, val2);
                    break;
                case 7:/* remu */
                    val = (intx_t)glue(remu, XLEN)(val, val2);
                    break;
                default:
                    goto illegal_insn;
                }
            } else {
                if (imm & ~0x20)
                    goto illegal_insn;
                funct3 = ((insn >> 12) & 7) | ((insn >> (30 - 3)) & (1 << 3));
                switch(funct3) {
                case 0: /* add */
                    val = (intx_t)(val + val2);
                    break;
                case 0 | 8: /* sub */
                    val = (intx_t)(val - val2);
                    break;
                case 1: /* sll */
                    val = (intx_t)(val << (val2 & (XLEN - 1)));
                    break;
                case 2: /* slt */
                    val = (target_long)val < (target_long)val2;
                    break;
                case 3: /* sltu */
                    val = val < val2;
                    break;
                case 4: /* xor */
                    val = val ^ val2;
                    break;
                case 5: /* srl */
                    val = (intx_t)((uintx_t)val >> (val2 & (XLEN - 1)));
                    break;
                case 5 | 8: /* sra */
                    val = (intx_t)val >> (val2 & (XLEN - 1));
                    break;
                case 6: /* or */
                    val = val | val2;
                    break;
                case 7: /* and */
                    val = val & val2;
                    break;
                default:
                    goto illegal_insn;
                }
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#if XLEN >= 64
        case 0x3b: /* OP-32 */
            imm = insn >> 25;
            val = s->reg[rs1];
            val2 = s->reg[rs2];
            if (imm == 1) {
                funct3 = (insn >> 12) & 7;
                switch(funct3) {
                case 0: /* mulw */
                    val = (int32_t)((int32_t)val * (int32_t)val2);
                    break;
                case 4:/* divw */
                    val = div32(val, val2);
                    break;
                case 5:/* divuw */
                    val = (int32_t)divu32(val, val2);
                    break;
                case 6:/* remw */
                    val = rem32(val, val2);
                    break;
                case 7:/* remuw */
                    val = (int32_t)remu32(val, val2);
                    break;
                default:
                    goto illegal_insn;
                }
            } else {
                if (imm & ~0x20)
                    goto illegal_insn;
                funct3 = ((insn >> 12) & 7) | ((insn >> (30 - 3)) & (1 << 3));
                switch(funct3) {
                case 0: /* addw */
                    val = (int32_t)(val + val2);
                    break;
                case 0 | 8: /* subw */
                    val = (int32_t)(val - val2);
                    break;
                case 1: /* sllw */
                    val = (int32_t)((uint32_t)val << (val2 & 31));
                    break;
                case 5: /* srlw */
                    val = (int32_t)((uint32_t)val >> (val2 & 31));
                    break;
                case 5 | 8: /* sraw */
                    val = (int32_t)val >> (val2 & 31);
                    break;
                default:
                    goto illegal_insn;
                }
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#endif
#if XLEN >= 128
        case 0x7b: /* OP-64 */
            imm = insn >> 25;
            val = s->reg[rs1];
            val2 = s->reg[rs2];
            if (imm == 1) {
                funct3 = (insn >> 12) & 7;
                switch(funct3) {
                case 0: /* muld */
                    val = (int64_t)((int64_t)val * (int64_t)val2);
                    break;
                case 4:/* divd */
                    val = div64(val, val2);
                    break;
                case 5:/* divud */
                    val = (int64_t)divu64(val, val2);
                    break;
                case 6:/* remd */
                    val = rem64(val, val2);
                    break;
                case 7:/* remud */
                    val = (int64_t)remu64(val, val2);
                    break;
                default:
                    goto illegal_insn;
                }
            } else {
                if (imm & ~0x20)
                    goto illegal_insn;
                funct3 = ((insn >> 12) & 7) | ((insn >> (30 - 3)) & (1 << 3));
                switch(funct3) {
                case 0: /* addd */
                    val = (int64_t)(val + val2);
                    break;
                case 0 | 8: /* subd */
                    val = (int64_t)(val - val2);
                    break;
                case 1: /* slld */
                    val = (int64_t)((uint64_t)val << (val2 & 63));
                    break;
                case 5: /* srld */
                    val = (int64_t)((uint64_t)val >> (val2 & 63));
                    break;
                case 5 | 8: /* srad */
                    val = (int64_t)val >> (val2 & 63);
                    break;
                default:
                    goto illegal_insn;
                }
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#endif
        case 0x73:
            funct3 = (insn >> 12) & 7;
            imm = insn >> 20;
            if (funct3 & 4)
                val = rs1;
            else
                val = s->reg[rs1];
            funct3 &= 3;
            switch(funct3) {
            case 1: /* csrrw */
                s->insn_counter = GET_INSN_COUNTER();
                if (csr_read(s, &val2, imm, TRUE))
                    goto illegal_insn;
                val2 = (intx_t)val2;
                err = csr_write(s, imm, val);
                if (err < 0)
                    goto illegal_insn;
                if (rd != 0)
                    s->reg[rd] = val2;
                if (err > 0) {
                    s->pc = GET_PC() + 4;
                    if (err == 2)
                        JUMP_INSN;
                    else
                        goto done_interp;
                }
                break;
            case 2: /* csrrs */
            case 3: /* csrrc */
                s->insn_counter = GET_INSN_COUNTER();
                if (csr_read(s, &val2, imm, (rs1 != 0)))
                    goto illegal_insn;
                val2 = (intx_t)val2;
                if (rs1 != 0) {
                    if (funct3 == 2)
                        val = val2 | val;
                    else
                        val = val2 & ~val;
                    err = csr_write(s, imm, val);
                    if (err < 0)
                        goto illegal_insn;
                } else {
                    err = 0;
                }
                if (rd != 0)
                    s->reg[rd] = val2;
                if (err > 0) {
                    s->pc = GET_PC() + 4;
                    if (err == 2)
                        JUMP_INSN;
                    else
                        goto done_interp;
                }
                break;
            case 0:
                switch(imm) {
                case 0x000: /* ecall */
                    if (insn & 0x000fff80)
                        goto illegal_insn;
                    s->pending_exception = CAUSE_USER_ECALL + s->priv;
                    goto exception;
                case 0x001: /* ebreak */
                    if (insn & 0x000fff80)
                        goto illegal_insn;
                    s->pending_exception = CAUSE_BREAKPOINT;
                    goto exception;
                case 0x102: /* sret */
                    {
                        if (insn & 0x000fff80)
                            goto illegal_insn;
                        if (s->priv < PRV_S)
                            goto illegal_insn;
                        s->pc = GET_PC();
                        handle_sret(s);
                        goto done_interp;
                    }
                    break;
                case 0x302: /* mret */
                    {
                        if (insn & 0x000fff80)
                            goto illegal_insn;
                        if (s->priv < PRV_M)
                            goto illegal_insn;
                        s->pc = GET_PC();
                        handle_mret(s);
                        goto done_interp;
                    }
                    break;
                case 0x105: /* wfi */
                    if (insn & 0x00007f80)
                        goto illegal_insn;
                    if (s->priv == PRV_U)
                        goto illegal_insn;
                    /* go to power down if no enabled interrupts are
                       pending */
                    if ((s->mip & s->mie) == 0) {
                        s->power_down_flag = TRUE;
                        s->pc = GET_PC() + 4;
                        goto done_interp;
                    }
                    break;
                default:
                    if ((imm >> 5) == 0x09) {
                        /* sfence.vma */
                        if (insn & 0x00007f80)
                            goto illegal_insn;
                        if (s->priv == PRV_U)
                            goto illegal_insn;
                        if (rs1 == 0) {
                            tlb_flush_all(s);
                        } else {
                            tlb_flush_vaddr(s, s->reg[rs1]);
                        }
                        /* the current code TLB may have been flushed */
                        s->pc = GET_PC() + 4;
                        JUMP_INSN;
                    } else {
                        goto illegal_insn;
                    }
                    break;
                }
                break;
            default:
                goto illegal_insn;
            }
            NEXT_INSN;
        case 0x0f: /* misc-mem */
            funct3 = (insn >> 12) & 7;
            switch(funct3) {
            case 0: /* fence */
                if (insn & 0xf00fff80)
                    goto illegal_insn;
                break;
            case 1: /* fence.i */
                if (insn != 0x0000100f)
                    goto illegal_insn;
                break;
#if XLEN >= 128
            case 2: /* lq */
                imm = (int32_t)insn >> 20;
                addr = s->reg[rs1] + imm;
                if (target_read_u128(s, &val, addr))
                    goto mmu_exception;
                if (rd != 0)
                    s->reg[rd] = val;
                break;
#endif
            default:
                goto illegal_insn;
            }
            NEXT_INSN;
        case 0x2f:
            funct3 = (insn >> 12) & 7;
#define OP_A(size)                                                      \
            {                                                           \
                uint ## size ##_t rval;                                 \
                                                                        \
                addr = s->reg[rs1];                                     \
                funct3 = insn >> 27;                                    \
                switch(funct3) {                                        \
                case 2: /* lr.w */                                      \
                    if (rs2 != 0)                                       \
                        goto illegal_insn;                              \
                    if (target_read_u ## size(s, &rval, addr))          \
                        goto mmu_exception;                             \
                    val = (int## size ## _t)rval;                       \
                    s->load_res = addr;                                 \
                    break;                                              \
                case 3: /* sc.w */                                      \
                    if (s->load_res == addr) {                          \
                        if (target_write_u ## size(s, addr, s->reg[rs2])) \
                            goto mmu_exception;                         \
                        val = 0;                                        \
                    } else {                                            \
                        val = 1;                                        \
                    }                                                   \
                    break;                                              \
                case 1: /* amiswap.w */                                 \
                case 0: /* amoadd.w */                                  \
                case 4: /* amoxor.w */                                  \
                case 0xc: /* amoand.w */                                \
                case 0x8: /* amoor.w */                                 \
                case 0x10: /* amomin.w */                               \
                case 0x14: /* amomax.w */                               \
                case 0x18: /* amominu.w */                              \
                case 0x1c: /* amomaxu.w */                              \
                    if (target_read_u ## size(s, &rval, addr))          \
                        goto mmu_exception;                             \
                    val = (int## size ## _t)rval;                       \
                    val2 = s->reg[rs2];                                 \
                    switch(funct3) {                                    \
                    case 1: /* amiswap.w */                             \
                        break;                                          \
                    case 0: /* amoadd.w */                              \
                        val2 = (int## size ## _t)(val + val2);          \
                        break;                                          \
                    case 4: /* amoxor.w */                              \
                        val2 = (int## size ## _t)(val ^ val2);          \
                        break;                                          \
                    case 0xc: /* amoand.w */                            \
                        val2 = (int## size ## _t)(val & val2);          \
                        break;                                          \
                    case 0x8: /* amoor.w */                             \
                        val2 = (int## size ## _t)(val | val2);          \
                        break;                                          \
                    case 0x10: /* amomin.w */                           \
                        if ((int## size ## _t)val < (int## size ## _t)val2) \
                            val2 = (int## size ## _t)val;               \
                        break;                                          \
                    case 0x14: /* amomax.w */                           \
                        if ((int## size ## _t)val > (int## size ## _t)val2) \
                            val2 = (int## size ## _t)val;               \
                        break;                                          \
                    case 0x18: /* amominu.w */                          \
                        if ((uint## size ## _t)val < (uint## size ## _t)val2) \
                            val2 = (int## size ## _t)val;               \
                        break;                                          \
                    case 0x1c: /* amomaxu.w */                          \
                        if ((uint## size ## _t)val > (uint## size ## _t)val2) \
                            val2 = (int## size ## _t)val;               \
                        break;                                          \
                    default:                                            \
                        goto illegal_insn;                              \
                    }                                                   \
                    if (target_write_u ## size(s, addr, val2))          \
                        goto mmu_exception;                             \
                    break;                                              \
                default:                                                \
                    goto illegal_insn;                                  \
                }                                                       \
            }

            switch(funct3) {
            case 2:
                OP_A(32);
                break;
#if XLEN >= 64
            case 3:
                OP_A(64);
                break;
#endif
#if XLEN >= 128
            case 4:
                OP_A(128);
                break;
#endif
            default:
                goto illegal_insn;
            }
            if (rd != 0)
                s->reg[rd] = val;
            NEXT_INSN;
#if FLEN > 0
            /* FPU */
        case 0x07: /* fp load */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 12) & 7;
            imm = (int32_t)insn >> 20;
            addr = s->reg[rs1] + imm;
            switch(funct3) {
            case 2: /* flw */
                {
                    uint32_t rval;
                    if (target_read_u32(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F32_HIGH;
                }
                break;
#if FLEN >= 64
            case 3: /* fld */
                {
                    uint64_t rval;
                    if (target_read_u64(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval | F64_HIGH;
                }
                break;
#endif
#if FLEN >= 128
            case 4: /* flq */
                {
                    uint128_t rval;
                    if (target_read_u128(s, &rval, addr))
                        goto mmu_exception;
                    s->fp_reg[rd] = rval;
                }
                break;
#endif
            default:
                goto illegal_insn;
            }
            s->fs = 3;
            NEXT_INSN;
        case 0x27: /* fp store */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 12) & 7;
            imm = rd | ((insn >> (25 - 5)) & 0xfe0);
            imm = (imm << 20) >> 20;
            addr = s->reg[rs1] + imm;
            switch(funct3) {
            case 2: /* fsw */
                if (target_write_u32(s, addr, s->fp_reg[rs2]))
                    goto mmu_exception;
                break;
#if FLEN >= 64
            case 3: /* fsd */
                if (target_write_u64(s, addr, s->fp_reg[rs2]))
                    goto mmu_exception;
                break;
#endif
#if FLEN >= 128
            case 4: /* fsq */
                if (target_write_u128(s, addr, s->fp_reg[rs2]))
                    goto mmu_exception;
                break;
#endif
            default:
                goto illegal_insn;
            }
            NEXT_INSN;
        case 0x43: /* fmadd */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 25) & 3;
            rs3 = insn >> 27;
            rm = get_insn_rm(s, (insn >> 12) & 7);
            if (rm < 0)
                goto illegal_insn;
            switch(funct3) {
            case 0:
                s->fp_reg[rd] = fma_sf32(s->fp_reg[rs1], s->fp_reg[rs2],
                                         s->fp_reg[rs3], rm, &s->fflags) | F32_HIGH;
                break;
#if FLEN >= 64
            case 1:
                s->fp_reg[rd] = fma_sf64(s->fp_reg[rs1], s->fp_reg[rs2],
                                         s->fp_reg[rs3], rm, &s->fflags) | F64_HIGH;
                break;
#endif
#if FLEN >= 128
            case 3:
                s->fp_reg[rd] = fma_sf128(s->fp_reg[rs1], s->fp_reg[rs2],
                                          s->fp_reg[rs3], rm, &s->fflags);
                break;
#endif
            default:
                goto illegal_insn;
            }
            s->fs = 3;
            NEXT_INSN;
        case 0x47: /* fmsub */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 25) & 3;
            rs3 = insn >> 27;
            rm = get_insn_rm(s, (insn >> 12) & 7);
            if (rm < 0)
                goto illegal_insn;
            switch(funct3) {
            case 0:
                s->fp_reg[rd] = fma_sf32(s->fp_reg[rs1],
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3] ^ FSIGN_MASK32,
                                         rm, &s->fflags) | F32_HIGH;
                break;
#if FLEN >= 64
            case 1:
                s->fp_reg[rd] = fma_sf64(s->fp_reg[rs1],
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3] ^ FSIGN_MASK64,
                                         rm, &s->fflags) | F64_HIGH;
                break;
#endif
#if FLEN >= 128
            case 3:
                s->fp_reg[rd] = fma_sf128(s->fp_reg[rs1],
                                          s->fp_reg[rs2],
                                          s->fp_reg[rs3] ^ FSIGN_MASK128,
                                          rm, &s->fflags);
                break;
#endif
            default:
                goto illegal_insn;
            }
            s->fs = 3;
            NEXT_INSN;
        case 0x4b: /* fnmsub */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 25) & 3;
            rs3 = insn >> 27;
            rm = get_insn_rm(s, (insn >> 12) & 7);
            if (rm < 0)
                goto illegal_insn;
            switch(funct3) {
            case 0:
                s->fp_reg[rd] = fma_sf32(s->fp_reg[rs1] ^ FSIGN_MASK32,
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3],
                                         rm, &s->fflags) | F32_HIGH;
                break;
#if FLEN >= 64
            case 1:
                s->fp_reg[rd] = fma_sf64(s->fp_reg[rs1] ^ FSIGN_MASK64,
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3],
                                         rm, &s->fflags) | F64_HIGH;
                break;
#endif
#if FLEN >= 128
            case 3:
                s->fp_reg[rd] = fma_sf128(s->fp_reg[rs1] ^ FSIGN_MASK128,
                                          s->fp_reg[rs2],
                                          s->fp_reg[rs3],
                                          rm, &s->fflags);
                break;
#endif
            default:
                goto illegal_insn;
            }
            s->fs = 3;
            NEXT_INSN;
        case 0x4f: /* fnmadd */
            if (s->fs == 0)
                goto illegal_insn;
            funct3 = (insn >> 25) & 3;
            rs3 = insn >> 27;
            rm = get_insn_rm(s, (insn >> 12) & 7);
            if (rm < 0)
                goto illegal_insn;
            switch(funct3) {
            case 0:
                s->fp_reg[rd] = fma_sf32(s->fp_reg[rs1] ^ FSIGN_MASK32,
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3] ^ FSIGN_MASK32,
                                         rm, &s->fflags) | F32_HIGH;
                break;
#if FLEN >= 64
            case 1:
                s->fp_reg[rd] = fma_sf64(s->fp_reg[rs1] ^ FSIGN_MASK64,
                                         s->fp_reg[rs2],
                                         s->fp_reg[rs3] ^ FSIGN_MASK64,
                                         rm, &s->fflags) | F64_HIGH;
                break;
#endif
#if FLEN >= 128
            case 3:
                s->fp_reg[rd] = fma_sf128(s->fp_reg[rs1] ^ FSIGN_MASK128,
                                          s->fp_reg[rs2],
                                          s->fp_reg[rs3] ^ FSIGN_MASK128,
                                          rm, &s->fflags);
                break;
#endif
            default:
                goto illegal_insn;
            }
            s->fs = 3;
            NEXT_INSN;
        case 0x53:
            if (s->fs == 0)
                goto illegal_insn;
            imm = insn >> 25;
            rm = (insn >> 12) & 7;
            switch(imm) {

#define F_SIZE 32
#if F_SIZE == 32
#define OPID 0
#define F_HIGH F32_HIGH
#elif F_SIZE == 64
#define OPID 1
#define F_HIGH F64_HIGH
#elif F_SIZE == 128
#define OPID 3
#define F_HIGH 0
#else
#error unsupported F_SIZE
#endif

#define FSIGN_MASK glue(FSIGN_MASK, F_SIZE)

            case (0x00 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(add_sf, F_SIZE)(s->fp_reg[rs1],
                                         s->fp_reg[rs2],
                                         rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x01 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sub_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x02 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(mul_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x03 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(div_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x0b << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0 || rs2 != 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sqrt_sf, F_SIZE)(s->fp_reg[rs1],
                                                rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x04 << 2) | OPID:
                switch(rm) {
                case 0: /* fsgnj */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                case 1: /* fsgnjn */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        ((s->fp_reg[rs2] & FSIGN_MASK) ^ FSIGN_MASK);
                    break;
                case 2: /* fsgnjx */
                    s->fp_reg[rd] = s->fp_reg[rs1] ^
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x05 << 2) | OPID:
                switch(rm) {
                case 0: /* fmin */
                    s->fp_reg[rd] = glue(min_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                case 1: /* fmax */
                    s->fp_reg[rd] = glue(max_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x18 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.w.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _i32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 1: /* fcvt.wu.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _u32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#if XLEN >= 64
                case 2: /* fcvt.l.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _i64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 3: /* fcvt.lu.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _u64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.t.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _i128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 5: /* fcvt.tu.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _u128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x14 << 2) | OPID:
                switch(rm) {
                case 0: /* fle */
                    val = glue(le_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 1: /* flt */
                    val = glue(lt_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 2: /* feq */
                    val = glue(eq_quiet_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                           &s->fflags);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x1a << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.[sdq].w */
                    s->fp_reg[rd] = glue(cvt_i32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 1: /* fcvt.[sdq].wu */
                    s->fp_reg[rd] = glue(cvt_u32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
#if XLEN >= 64
                case 2: /* fcvt.[sdq].l */
                    s->fp_reg[rd] = glue(cvt_i64_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 3: /* fcvt.[sdq].lu */
                    s->fp_reg[rd] = glue(cvt_u64_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.[sdq].t */
                    s->fp_reg[rd] = glue(cvt_i128_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 5: /* fcvt.[sdq].tu */
                    s->fp_reg[rd] = glue(cvt_u128_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x08 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
#if F_SIZE == 32 && FLEN >= 64
                case 1: /* cvt.s.d */
                    s->fp_reg[rd] = cvt_sf64_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#if FLEN >= 128
                case 3: /* cvt.s.q */
                    s->fp_reg[rd] = cvt_sf128_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#endif
#endif /* F_SIZE == 32 */
#if F_SIZE == 64
                case 0: /* cvt.d.s */
                    s->fp_reg[rd] = cvt_sf32_sf64(s->fp_reg[rs1], &s->fflags) | F64_HIGH;
                    break;
#if FLEN >= 128
                case 1: /* cvt.d.q */
                    s->fp_reg[rd] = cvt_sf128_sf64(s->fp_reg[rs1], rm, &s->fflags) | F64_HIGH;
                    break;
#endif
#endif /* F_SIZE == 64 */
#if F_SIZE == 128
                case 0: /* cvt.q.s */
                    s->fp_reg[rd] = cvt_sf32_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
                case 1: /* cvt.q.d */
                    s->fp_reg[rd] = cvt_sf64_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
#endif /* F_SIZE == 128 */

                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x1c << 2) | OPID:
                if (rs2 != 0)
                    goto illegal_insn;
                switch(rm) {
#if F_SIZE <= XLEN
                case 0: /* fmv.x.s */
#if F_SIZE == 32
                    val = (int32_t)s->fp_reg[rs1];
#elif F_SIZE == 64
                    val = (int64_t)s->fp_reg[rs1];
#else
                    val = (int128_t)s->fp_reg[rs1];
#endif
                    break;
#endif /* F_SIZE <= XLEN */
                case 1: /* fclass */
                    val = glue(fclass_sf, F_SIZE)(s->fp_reg[rs1]);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;

#if F_SIZE <= XLEN
            case (0x1e << 2) | OPID: /* fmv.s.x */
                if (rs2 != 0 || rm != 0)
                    goto illegal_insn;
#if F_SIZE == 32
                s->fp_reg[rd] = (int32_t)s->reg[rs1];
#elif F_SIZE == 64
                s->fp_reg[rd] = (int64_t)s->reg[rs1];
#else
                s->fp_reg[rd] = (int128_t)s->reg[rs1];
#endif
                s->fs = 3;
                break;
#endif /* F_SIZE <= XLEN */

#undef F_SIZE
#undef F_HIGH
#undef OPID
#undef FSIGN_MASK

#if FLEN >= 64
#define F_SIZE 64

#if F_SIZE == 32
#define OPID 0
#define F_HIGH F32_HIGH
#elif F_SIZE == 64
#define OPID 1
#define F_HIGH F64_HIGH
#elif F_SIZE == 128
#define OPID 3
#define F_HIGH 0
#else
#error unsupported F_SIZE
#endif

#define FSIGN_MASK glue(FSIGN_MASK, F_SIZE)

            case (0x00 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(add_sf, F_SIZE)(s->fp_reg[rs1],
                                         s->fp_reg[rs2],
                                         rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x01 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sub_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x02 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(mul_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x03 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(div_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x0b << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0 || rs2 != 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sqrt_sf, F_SIZE)(s->fp_reg[rs1],
                                                rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x04 << 2) | OPID:
                switch(rm) {
                case 0: /* fsgnj */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                case 1: /* fsgnjn */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        ((s->fp_reg[rs2] & FSIGN_MASK) ^ FSIGN_MASK);
                    break;
                case 2: /* fsgnjx */
                    s->fp_reg[rd] = s->fp_reg[rs1] ^
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x05 << 2) | OPID:
                switch(rm) {
                case 0: /* fmin */
                    s->fp_reg[rd] = glue(min_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                case 1: /* fmax */
                    s->fp_reg[rd] = glue(max_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x18 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.w.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _i32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 1: /* fcvt.wu.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _u32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#if XLEN >= 64
                case 2: /* fcvt.l.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _i64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 3: /* fcvt.lu.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _u64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.t.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _i128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 5: /* fcvt.tu.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _u128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x14 << 2) | OPID:
                switch(rm) {
                case 0: /* fle */
                    val = glue(le_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 1: /* flt */
                    val = glue(lt_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 2: /* feq */
                    val = glue(eq_quiet_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                           &s->fflags);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x1a << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.[sdq].w */
                    s->fp_reg[rd] = glue(cvt_i32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 1: /* fcvt.[sdq].wu */
                    s->fp_reg[rd] = glue(cvt_u32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
#if XLEN >= 64
                case 2: /* fcvt.[sdq].l */
                    s->fp_reg[rd] = glue(cvt_i64_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 3: /* fcvt.[sdq].lu */
                    s->fp_reg[rd] = glue(cvt_u64_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.[sdq].t */
                    s->fp_reg[rd] = glue(cvt_i128_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 5: /* fcvt.[sdq].tu */
                    s->fp_reg[rd] = glue(cvt_u128_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x08 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
#if F_SIZE == 32 && FLEN >= 64
                case 1: /* cvt.s.d */
                    s->fp_reg[rd] = cvt_sf64_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#if FLEN >= 128
                case 3: /* cvt.s.q */
                    s->fp_reg[rd] = cvt_sf128_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#endif
#endif /* F_SIZE == 32 */
#if F_SIZE == 64
                case 0: /* cvt.d.s */
                    s->fp_reg[rd] = cvt_sf32_sf64(s->fp_reg[rs1], &s->fflags) | F64_HIGH;
                    break;
#if FLEN >= 128
                case 1: /* cvt.d.q */
                    s->fp_reg[rd] = cvt_sf128_sf64(s->fp_reg[rs1], rm, &s->fflags) | F64_HIGH;
                    break;
#endif
#endif /* F_SIZE == 64 */
#if F_SIZE == 128
                case 0: /* cvt.q.s */
                    s->fp_reg[rd] = cvt_sf32_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
                case 1: /* cvt.q.d */
                    s->fp_reg[rd] = cvt_sf64_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
#endif /* F_SIZE == 128 */

                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x1c << 2) | OPID:
                if (rs2 != 0)
                    goto illegal_insn;
                switch(rm) {
#if F_SIZE <= XLEN
                case 0: /* fmv.x.s */
#if F_SIZE == 32
                    val = (int32_t)s->fp_reg[rs1];
#elif F_SIZE == 64
                    val = (int64_t)s->fp_reg[rs1];
#else
                    val = (int128_t)s->fp_reg[rs1];
#endif
                    break;
#endif /* F_SIZE <= XLEN */
                case 1: /* fclass */
                    val = glue(fclass_sf, F_SIZE)(s->fp_reg[rs1]);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;

#if F_SIZE <= XLEN
            case (0x1e << 2) | OPID: /* fmv.s.x */
                if (rs2 != 0 || rm != 0)
                    goto illegal_insn;
#if F_SIZE == 32
                s->fp_reg[rd] = (int32_t)s->reg[rs1];
#elif F_SIZE == 64
                s->fp_reg[rd] = (int64_t)s->reg[rs1];
#else
                s->fp_reg[rd] = (int128_t)s->reg[rs1];
#endif
                s->fs = 3;
                break;
#endif /* F_SIZE <= XLEN */

#undef F_SIZE
#undef F_HIGH
#undef OPID
#undef FSIGN_MASK
#endif

#if FLEN >= 128
#define F_SIZE 128
#if F_SIZE == 32
#define OPID 0
#define F_HIGH F32_HIGH
#elif F_SIZE == 64
#define OPID 1
#define F_HIGH F64_HIGH
#elif F_SIZE == 128
#define OPID 3
#define F_HIGH 0
#else
#error unsupported F_SIZE
#endif

#define FSIGN_MASK glue(FSIGN_MASK, F_SIZE)

            case (0x00 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(add_sf, F_SIZE)(s->fp_reg[rs1],
                                         s->fp_reg[rs2],
                                         rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x01 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sub_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x02 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(mul_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x03 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(div_sf, F_SIZE)(s->fp_reg[rs1],
                                               s->fp_reg[rs2],
                                               rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x0b << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0 || rs2 != 0)
                    goto illegal_insn;
                s->fp_reg[rd] = glue(sqrt_sf, F_SIZE)(s->fp_reg[rs1],
                                                rm, &s->fflags) | F_HIGH;
                s->fs = 3;
                break;
            case (0x04 << 2) | OPID:
                switch(rm) {
                case 0: /* fsgnj */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                case 1: /* fsgnjn */
                    s->fp_reg[rd] = (s->fp_reg[rs1] & ~FSIGN_MASK) |
                        ((s->fp_reg[rs2] & FSIGN_MASK) ^ FSIGN_MASK);
                    break;
                case 2: /* fsgnjx */
                    s->fp_reg[rd] = s->fp_reg[rs1] ^
                        (s->fp_reg[rs2] & FSIGN_MASK);
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x05 << 2) | OPID:
                switch(rm) {
                case 0: /* fmin */
                    s->fp_reg[rd] = glue(min_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                case 1: /* fmax */
                    s->fp_reg[rd] = glue(max_sf, F_SIZE)(s->fp_reg[rs1],
                                                   s->fp_reg[rs2],
                                                   &s->fflags) | F_HIGH;
                    break;
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;
            case (0x18 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.w.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _i32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 1: /* fcvt.wu.[sdq] */
                    val = (int32_t)glue(glue(cvt_sf, F_SIZE), _u32)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#if XLEN >= 64
                case 2: /* fcvt.l.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _i64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 3: /* fcvt.lu.[sdq] */
                    val = (int64_t)glue(glue(cvt_sf, F_SIZE), _u64)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.t.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _i128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
                case 5: /* fcvt.tu.[sdq] */
                    val = glue(glue(cvt_sf, F_SIZE), _u128)(s->fp_reg[rs1], rm,
                                                          &s->fflags);
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x14 << 2) | OPID:
                switch(rm) {
                case 0: /* fle */
                    val = glue(le_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 1: /* flt */
                    val = glue(lt_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                     &s->fflags);
                    break;
                case 2: /* feq */
                    val = glue(eq_quiet_sf, F_SIZE)(s->fp_reg[rs1], s->fp_reg[rs2],
                                           &s->fflags);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;
            case (0x1a << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
                case 0: /* fcvt.[sdq].w */
                    s->fp_reg[rd] = glue(cvt_i32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 1: /* fcvt.[sdq].wu */
                    s->fp_reg[rd] = glue(cvt_u32_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
#if XLEN >= 64
                case 2: /* fcvt.[sdq].l */
                    s->fp_reg[rd] = glue(cvt_i64_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 3: /* fcvt.[sdq].lu */
                    s->fp_reg[rd] = glue(cvt_u64_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
#if XLEN >= 128
                /* XXX: the index is not defined in the spec */
                case 4: /* fcvt.[sdq].t */
                    s->fp_reg[rd] = glue(cvt_i128_sf, F_SIZE)(s->reg[rs1], rm,
                                                       &s->fflags) | F_HIGH;
                    break;
                case 5: /* fcvt.[sdq].tu */
                    s->fp_reg[rd] = glue(cvt_u128_sf, F_SIZE)(s->reg[rs1], rm,
                                                            &s->fflags) | F_HIGH;
                    break;
#endif
                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x08 << 2) | OPID:
                rm = get_insn_rm(s, rm);
                if (rm < 0)
                    goto illegal_insn;
                switch(rs2) {
#if F_SIZE == 32 && FLEN >= 64
                case 1: /* cvt.s.d */
                    s->fp_reg[rd] = cvt_sf64_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#if FLEN >= 128
                case 3: /* cvt.s.q */
                    s->fp_reg[rd] = cvt_sf128_sf32(s->fp_reg[rs1], rm, &s->fflags) | F32_HIGH;
                    break;
#endif
#endif /* F_SIZE == 32 */
#if F_SIZE == 64
                case 0: /* cvt.d.s */
                    s->fp_reg[rd] = cvt_sf32_sf64(s->fp_reg[rs1], &s->fflags) | F64_HIGH;
                    break;
#if FLEN >= 128
                case 1: /* cvt.d.q */
                    s->fp_reg[rd] = cvt_sf128_sf64(s->fp_reg[rs1], rm, &s->fflags) | F64_HIGH;
                    break;
#endif
#endif /* F_SIZE == 64 */
#if F_SIZE == 128
                case 0: /* cvt.q.s */
                    s->fp_reg[rd] = cvt_sf32_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
                case 1: /* cvt.q.d */
                    s->fp_reg[rd] = cvt_sf64_sf128(s->fp_reg[rs1], &s->fflags);
                    break;
#endif /* F_SIZE == 128 */

                default:
                    goto illegal_insn;
                }
                s->fs = 3;
                break;

            case (0x1c << 2) | OPID:
                if (rs2 != 0)
                    goto illegal_insn;
                switch(rm) {
#if F_SIZE <= XLEN
                case 0: /* fmv.x.s */
#if F_SIZE == 32
                    val = (int32_t)s->fp_reg[rs1];
#elif F_SIZE == 64
                    val = (int64_t)s->fp_reg[rs1];
#else
                    val = (int128_t)s->fp_reg[rs1];
#endif
                    break;
#endif /* F_SIZE <= XLEN */
                case 1: /* fclass */
                    val = glue(fclass_sf, F_SIZE)(s->fp_reg[rs1]);
                    break;
                default:
                    goto illegal_insn;
                }
                if (rd != 0)
                    s->reg[rd] = val;
                break;

#if F_SIZE <= XLEN
            case (0x1e << 2) | OPID: /* fmv.s.x */
                if (rs2 != 0 || rm != 0)
                    goto illegal_insn;
#if F_SIZE == 32
                s->fp_reg[rd] = (int32_t)s->reg[rs1];
#elif F_SIZE == 64
                s->fp_reg[rd] = (int64_t)s->reg[rs1];
#else
                s->fp_reg[rd] = (int128_t)s->reg[rs1];
#endif
                s->fs = 3;
                break;
#endif /* F_SIZE <= XLEN */

#undef F_SIZE
#undef F_HIGH
#undef OPID
#undef FSIGN_MASK

#endif

            default:
                goto illegal_insn;
            }
            NEXT_INSN;
#endif
        default:
            goto illegal_insn;
        }
        /* update PC for next instruction */
    jump_insn: ;
    } /* end of main loop */
 illegal_insn:
    s->pending_exception = CAUSE_ILLEGAL_INSTRUCTION;
    s->pending_tval = insn;
 mmu_exception:
 exception:
    s->pc = GET_PC();
    if (s->pending_exception >= 0) {
        raise_exception2(s, s->pending_exception, s->pending_tval);
    }
    /* we exit because XLEN may have changed */
 done_interp:
    n_cycles--;
the_end:
    s->insn_counter = GET_INSN_COUNTER();
#if 0
    printf("done interp %lx int=%x mstatus=%lx prv=%d\n",
           (uint64_t)s->insn_counter, s->mip & s->mie, (uint64_t)s->mstatus,
           s->priv);
#endif
}

#undef uintx_t
#undef intx_t
#undef XLEN
#undef OP_A

/*================================================================*/
#endif

static void glue(riscv_cpu_interp, MAX_XLEN)(RISCVCPUState *s, int n_cycles)
{
#ifdef USE_GLOBAL_STATE
    s = &riscv_cpu_global_state;
#endif
    uint64_t timeout;

    timeout = s->insn_counter + n_cycles;
    while (!s->power_down_flag &&
           (int)(timeout - s->insn_counter) > 0) {
        n_cycles = timeout - s->insn_counter;
        switch(s->cur_xlen) {
        case 32:
            riscv_cpu_interp_x32(s, n_cycles);
            break;
#if MAX_XLEN >= 64
        case 64:
            riscv_cpu_interp_x64(s, n_cycles);
            break;
#endif
#if MAX_XLEN >= 128
        case 128:
            riscv_cpu_interp_x128(s, n_cycles);
            break;
#endif
        default:
            abort();
        }
    }
}

/* Note: the value is not accurate when called in riscv_cpu_interp() */
static uint64_t glue(riscv_cpu_get_cycles, MAX_XLEN)(RISCVCPUState *s)
{
    return s->insn_counter;
}

static void glue(riscv_cpu_set_mip, MAX_XLEN)(RISCVCPUState *s, uint32_t mask)
{
    s->mip |= mask;
    /* exit from power down if an interrupt is pending */
    if (s->power_down_flag && (s->mip & s->mie) != 0)
        s->power_down_flag = FALSE;
}

static void glue(riscv_cpu_reset_mip, MAX_XLEN)(RISCVCPUState *s, uint32_t mask)
{
    s->mip &= ~mask;
}

static uint32_t glue(riscv_cpu_get_mip, MAX_XLEN)(RISCVCPUState *s)
{
    return s->mip;
}

static BOOL glue(riscv_cpu_get_power_down, MAX_XLEN)(RISCVCPUState *s)
{
    return s->power_down_flag;
}

static RISCVCPUState *glue(riscv_cpu_init, MAX_XLEN)(PhysMemoryMap *mem_map)
{
    RISCVCPUState *s;

#ifdef USE_GLOBAL_STATE
    s = &riscv_cpu_global_state;
#else
    s = mallocz(sizeof(*s));
#endif
    s->common.class_ptr = &glue(riscv_cpu_class, MAX_XLEN);
    s->mem_map = mem_map;
    s->pc = 0x1000;
    s->priv = PRV_M;
    s->cur_xlen = MAX_XLEN;
    s->mxl = get_base_from_xlen(MAX_XLEN);
    s->mstatus = ((uint64_t)s->mxl << MSTATUS_UXL_SHIFT) |
        ((uint64_t)s->mxl << MSTATUS_SXL_SHIFT);
    s->misa |= MCPUID_SUPER | MCPUID_USER | MCPUID_I | MCPUID_M | MCPUID_A;
#if FLEN >= 32
    s->misa |= MCPUID_F;
#endif
#if FLEN >= 64
    s->misa |= MCPUID_D;
#endif
#if FLEN >= 128
    s->misa |= MCPUID_Q;
#endif
#ifdef CONFIG_EXT_C
    s->misa |= MCPUID_C;
#endif
    tlb_init(s);
    return s;
}

static void glue(riscv_cpu_end, MAX_XLEN)(RISCVCPUState *s)
{
#ifdef USE_GLOBAL_STATE
    free(s);
#endif
}

static uint32_t glue(riscv_cpu_get_misa, MAX_XLEN)(RISCVCPUState *s)
{
    return s->misa;
}

const RISCVCPUClass glue(riscv_cpu_class, MAX_XLEN) = {
    glue(riscv_cpu_init, MAX_XLEN),
    glue(riscv_cpu_end, MAX_XLEN),
    glue(riscv_cpu_interp, MAX_XLEN),
    glue(riscv_cpu_get_cycles, MAX_XLEN),
    glue(riscv_cpu_set_mip, MAX_XLEN),
    glue(riscv_cpu_reset_mip, MAX_XLEN),
    glue(riscv_cpu_get_mip, MAX_XLEN),
    glue(riscv_cpu_get_power_down, MAX_XLEN),
    glue(riscv_cpu_get_misa, MAX_XLEN),
    glue(riscv_cpu_flush_tlb_write_range_ram, MAX_XLEN),
};

#if CONFIG_RISCV_MAX_XLEN == MAX_XLEN
RISCVCPUState *riscv_cpu_init(PhysMemoryMap *mem_map, int max_xlen)
{
    const RISCVCPUClass *c;
    switch(max_xlen) {
        /* with emscripten we compile a single CPU */
#if defined(EMSCRIPTEN)
    case MAX_XLEN:
        c = &glue(riscv_cpu_class, MAX_XLEN);
        break;
#else
    case 32:
        c = &riscv_cpu_class32;
        break;
    case 64:
        c = &riscv_cpu_class64;
        break;
#if CONFIG_RISCV_MAX_XLEN == 128
    case 128:
        c = &riscv_cpu_class128;
        break;
#endif
#endif /* !EMSCRIPTEN */
    default:
        return NULL;
    }
    return c->riscv_cpu_init(mem_map);
}
#endif /* CONFIG_RISCV_MAX_XLEN == MAX_XLEN */
/*================================================================*/
/* end of cpu64.c */
