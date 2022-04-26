// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_simple_system.h for the primary calling header

#include "Vibex_simple_system.h"
#include "Vibex_simple_system__Syms.h"

#include "verilated_dpi.h"

void Vibex_simple_system::_eval(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system::_eval\n"); );
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    if ((((~ (IData)(vlTOPp->IO_RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__IO_RST_N)) 
         | ((IData)(vlTOPp->ibex_simple_system__clk_sys) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__ibex_simple_system__clk_sys))))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlTOPp->ibex_simple_system__clk_sys) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__ibex_simple_system__clk_sys)))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    if (((IData)(vlTOPp->ibex_core_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__ibex_core_clk)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity[4U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->IO_RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__IO_RST_N)) 
         | ((IData)(vlTOPp->ibex_core_clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__ibex_core_clk))))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->__Vm_traceActivity[5U] = 1U;
        vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->ibex_core_clk)) 
         & (IData)(vlTOPp->__Vclklast__TOP__ibex_core_clk))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->IO_RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__IO_RST_N)) 
         | ((IData)(vlTOPp->ibex_simple_system__clk_sys) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__ibex_simple_system__clk_sys))))) {
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->__Vm_traceActivity[6U] = 1U;
    }
    if (((IData)(vlTOPp->ibex_simple_system__clk_sys) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__ibex_simple_system__clk_sys)))) {
        vlTOPp->_sequent__TOP__13(vlSymsp);
    }
    if (((IData)(vlTOPp->ibex_core_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__ibex_core_clk)))) {
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->__Vm_traceActivity[7U] = 1U;
    }
    if (((((~ (IData)(vlTOPp->IO_RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__IO_RST_N)) 
          | ((IData)(vlTOPp->ibex_simple_system__clk_sys) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__ibex_simple_system__clk_sys)))) 
         | ((IData)(vlTOPp->ibex_core_clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__ibex_core_clk))))) {
        vlTOPp->_multiclk__TOP__15(vlSymsp);
        vlTOPp->__Vm_traceActivity[8U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->IO_RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__IO_RST_N)) 
         | ((IData)(vlTOPp->ibex_core_clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__ibex_core_clk))))) {
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->__Vm_traceActivity[9U] = 1U;
    }
    vlTOPp->_combo__TOP__17(vlSymsp);
    if (((((~ (IData)(vlTOPp->IO_RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__IO_RST_N)) 
          | ((IData)(vlTOPp->ibex_simple_system__clk_sys) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__ibex_simple_system__clk_sys)))) 
         | ((IData)(vlTOPp->ibex_core_clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__ibex_core_clk))))) {
        vlTOPp->_multiclk__TOP__18(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xaU] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__IO_RST_N = vlTOPp->IO_RST_N;
    vlTOPp->__Vclklast__TOP__ibex_simple_system__clk_sys 
        = vlTOPp->ibex_simple_system__clk_sys;
    vlTOPp->__Vclklast__TOP__ibex_core_clk 
        = vlTOPp->ibex_core_clk;
}

VL_INLINE_OPT QData Vibex_simple_system::_change_request(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system::_change_request\n"); );
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vibex_simple_system::_change_request_1(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system::_change_request_1\n"); );
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vibex_simple_system::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((IO_CLK & 0xfeU))) {
        Verilated::overWidthError("IO_CLK");}
    if (VL_UNLIKELY((IO_RST_N & 0xfeU))) {
        Verilated::overWidthError("IO_RST_N");}
}
#endif  // VL_DEBUG
