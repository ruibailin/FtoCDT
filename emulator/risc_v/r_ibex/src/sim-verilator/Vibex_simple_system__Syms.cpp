// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vibex_simple_system__Syms.h"
#include "Vibex_simple_system.h"



// FUNCTIONS
Vibex_simple_system__Syms::~Vibex_simple_system__Syms()
{
}

Vibex_simple_system__Syms::Vibex_simple_system__Syms(Vibex_simple_system* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scopes
    __Vscope_ibex_simple_system.configure(this, name(), "ibex_simple_system", "ibex_simple_system", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ibex_u_core_u_ibex_tracer.configure(this, name(), "ibex_simple_system.u_core.u_ibex_tracer", "u_ibex_tracer", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ibex_u_core_u_ibex_tracer__unnamedblk1.configure(this, name(), "ibex_simple_system.u_core.u_ibex_tracer.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ibex_simple_system__u_ram__u_ram__gen_generic__u_impl_generic.configure(this, name(), "ibex_simple_system.u_ram.u_ram.gen_generic.u_impl_generic", "u_impl_generic", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_ibex_simple_system.exportInsert(__Vfinal, "mhpmcounter_get", (void*)(&Vibex_simple_system::__Vdpiexp_ibex_simple_system__mhpmcounter_get_TOP));
        __Vscope_ibex_simple_system__u_ram__u_ram__gen_generic__u_impl_generic.exportInsert(__Vfinal, "simutil_get_mem", (void*)(&Vibex_simple_system::__Vdpiexp_ibex_ram_gen_generic_impl_simutil_get_mem_TOP));
        __Vscope_ibex_simple_system__u_ram__u_ram__gen_generic__u_impl_generic.exportInsert(__Vfinal, "simutil_memload", (void*)(&Vibex_simple_system::__Vdpiexp_ibex_ram_gen_generic_impl_simutil_memload_TOP));
        __Vscope_ibex_simple_system__u_ram__u_ram__gen_generic__u_impl_generic.exportInsert(__Vfinal, "simutil_set_mem", (void*)(&Vibex_simple_system::__Vdpiexp_ibex_ram_gen_generic_impl_simutil_set_mem_TOP));
    }
}
