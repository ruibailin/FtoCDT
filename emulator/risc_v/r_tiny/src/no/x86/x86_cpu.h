
/*------------------------------------
 * x86_cpu.h
 * Create:  2021-03-05
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
#ifndef NO_X86_X86_CPU_H_
#define NO_X86_X86_CPU_H_
/*================================================================*/
#include "../util/iomem.h"

typedef struct X86CPUState X86CPUState;

/* get_reg/set_reg additional constants */
#define X86_CPU_REG_EIP 8
#define X86_CPU_REG_CR0 9
#define X86_CPU_REG_CR2 10

#define X86_CPU_SEG_ES 0
#define X86_CPU_SEG_CS 1
#define X86_CPU_SEG_SS 2
#define X86_CPU_SEG_DS 3
#define X86_CPU_SEG_FS 4
#define X86_CPU_SEG_GS 5
#define X86_CPU_SEG_LDT 6
#define X86_CPU_SEG_TR 7
#define X86_CPU_SEG_GDT 8
#define X86_CPU_SEG_IDT 9

typedef struct {
    uint16_t sel;
    uint16_t flags;
    uint32_t base;
    uint32_t limit;
} X86CPUSeg;

X86CPUState *x86_cpu_init(PhysMemoryMap *mem_map);
void x86_cpu_end(X86CPUState *s);
void x86_cpu_interp(X86CPUState *s, int max_cycles1);
void x86_cpu_set_irq(X86CPUState *s, BOOL set);
void x86_cpu_set_reg(X86CPUState *s, int reg, uint32_t val);
uint32_t x86_cpu_get_reg(X86CPUState *s, int reg);
void x86_cpu_set_seg(X86CPUState *s, int seg, const X86CPUSeg *sd);
void x86_cpu_set_get_hard_intno(X86CPUState *s,
                                int (*get_hard_intno)(void *opaque),
                                void *opaque);
void x86_cpu_set_get_tsc(X86CPUState *s,
                         uint64_t (*get_tsc)(void *opaque),
                         void *opaque);
void x86_cpu_set_port_io(X86CPUState *s,
                         DeviceReadFunc *port_read, DeviceWriteFunc *port_write,
                         void *opaque);
int64_t x86_cpu_get_cycles(X86CPUState *s);
BOOL x86_cpu_get_power_down(X86CPUState *s);
void x86_cpu_flush_tlb_write_range_ram(X86CPUState *s,
                                       uint8_t *ram_ptr, size_t ram_size);


/*================================================================*/
#endif 
/* end of x86_cpu.h */
