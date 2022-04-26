// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1564(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1564\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*319:0*/ __Vtemp1152[10];
    WData/*319:0*/ __Vtemp1153[10];
    WData/*319:0*/ __Vtemp1158[10];
    WData/*319:0*/ __Vtemp1159[10];
    WData/*319:0*/ __Vtemp1164[10];
    WData/*319:0*/ __Vtemp1165[10];
    WData/*319:0*/ __Vtemp1170[10];
    WData/*319:0*/ __Vtemp1171[10];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_701))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_730)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_753));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_707 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_704) 
           | (2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_704) 
                    << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_617 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_569) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_578)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_727 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_569) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_680)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_614 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_566) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_575)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_724 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_566) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_677)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_614 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_566) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_575)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_724 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_566) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_677)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT___GEN_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT___T_5) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT__full));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_608 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_560) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_569)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_718 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_560) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_671)));
    __Vtemp1152[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_654[0U] 
                             >> 1U));
    __Vtemp1152[1U] = 0U;
    __Vtemp1152[2U] = 0U;
    __Vtemp1152[3U] = 0U;
    __Vtemp1152[4U] = 0U;
    __Vtemp1152[5U] = 0U;
    __Vtemp1152[6U] = 0U;
    __Vtemp1152[7U] = 0U;
    __Vtemp1152[8U] = 0U;
    __Vtemp1152[9U] = 0U;
    VL_EXTEND_WW(320,319, __Vtemp1153, __Vtemp1152);
    __Vtemp1158[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_654[0U] 
                             >> 1U));
    __Vtemp1158[1U] = 0U;
    __Vtemp1158[2U] = 0U;
    __Vtemp1158[3U] = 0U;
    __Vtemp1158[4U] = 0U;
    __Vtemp1158[5U] = 0U;
    __Vtemp1158[6U] = 0U;
    __Vtemp1158[7U] = 0U;
    __Vtemp1158[8U] = 0U;
    __Vtemp1158[9U] = 0U;
    VL_EXTEND_WW(320,319, __Vtemp1159, __Vtemp1158);
    __Vtemp1164[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_654[0U] 
                             >> 1U));
    __Vtemp1164[1U] = 0U;
    __Vtemp1164[2U] = 0U;
    __Vtemp1164[3U] = 0U;
    __Vtemp1164[4U] = 0U;
    __Vtemp1164[5U] = 0U;
    __Vtemp1164[6U] = 0U;
    __Vtemp1164[7U] = 0U;
    __Vtemp1164[8U] = 0U;
    __Vtemp1164[9U] = 0U;
    VL_EXTEND_WW(320,319, __Vtemp1165, __Vtemp1164);
    __Vtemp1170[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_654[0U] 
                             >> 1U));
    __Vtemp1170[1U] = 0U;
    __Vtemp1170[2U] = 0U;
    __Vtemp1170[3U] = 0U;
    __Vtemp1170[4U] = 0U;
    __Vtemp1170[5U] = 0U;
    __Vtemp1170[6U] = 0U;
    __Vtemp1170[7U] = 0U;
    __Vtemp1170[8U] = 0U;
    __Vtemp1170[9U] = 0U;
    VL_EXTEND_WW(320,319, __Vtemp1171, __Vtemp1170);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_732 
        = (((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_read
             [0U] == ((7U == (7U & __Vtemp1153[0U]))
                       ? 4U : ((6U == (7U & __Vtemp1159[0U]))
                                ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_28)))) 
            | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_read
               [0U] == ((7U == (7U & __Vtemp1165[0U]))
                         ? 4U : ((6U == (7U & __Vtemp1171[0U]))
                                  ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_28))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
              & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_read
                  [0U] == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
                            ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
                                     ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_44)))) 
                 | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_read
                    [0U] == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
                              ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
                                       ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_44)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1565(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1565\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_514 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT___GEN_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT___T_5) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_608 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_560) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_569)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_718 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_560) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_671)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_514 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_55)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_55)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_55)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_55)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_82 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_48) 
             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_46) 
                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_48) 
                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_46) 
                           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_45) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_43) 
                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_45) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_43) 
                                                 & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_42) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_40) 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_42) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_40) 
                                                       & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_39) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_37) 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_39) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_37) 
                                                           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1566(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1566\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*319:0*/ __Vtemp1176[10];
    WData/*319:0*/ __Vtemp1177[10];
    WData/*319:0*/ __Vtemp1182[10];
    WData/*319:0*/ __Vtemp1183[10];
    WData/*319:0*/ __Vtemp1188[10];
    WData/*319:0*/ __Vtemp1189[10];
    WData/*319:0*/ __Vtemp1194[10];
    WData/*319:0*/ __Vtemp1195[10];
    // Body
    __Vtemp1176[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_654[0U] 
                             >> 1U));
    __Vtemp1176[1U] = 0U;
    __Vtemp1176[2U] = 0U;
    __Vtemp1176[3U] = 0U;
    __Vtemp1176[4U] = 0U;
    __Vtemp1176[5U] = 0U;
    __Vtemp1176[6U] = 0U;
    __Vtemp1176[7U] = 0U;
    __Vtemp1176[8U] = 0U;
    __Vtemp1176[9U] = 0U;
    VL_EXTEND_WW(320,319, __Vtemp1177, __Vtemp1176);
    __Vtemp1182[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_654[0U] 
                             >> 1U));
    __Vtemp1182[1U] = 0U;
    __Vtemp1182[2U] = 0U;
    __Vtemp1182[3U] = 0U;
    __Vtemp1182[4U] = 0U;
    __Vtemp1182[5U] = 0U;
    __Vtemp1182[6U] = 0U;
    __Vtemp1182[7U] = 0U;
    __Vtemp1182[8U] = 0U;
    __Vtemp1182[9U] = 0U;
    VL_EXTEND_WW(320,319, __Vtemp1183, __Vtemp1182);
    __Vtemp1188[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_654[0U] 
                             >> 1U));
    __Vtemp1188[1U] = 0U;
    __Vtemp1188[2U] = 0U;
    __Vtemp1188[3U] = 0U;
    __Vtemp1188[4U] = 0U;
    __Vtemp1188[5U] = 0U;
    __Vtemp1188[6U] = 0U;
    __Vtemp1188[7U] = 0U;
    __Vtemp1188[8U] = 0U;
    __Vtemp1188[9U] = 0U;
    VL_EXTEND_WW(320,319, __Vtemp1189, __Vtemp1188);
    __Vtemp1194[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_654[0U] 
                             >> 1U));
    __Vtemp1194[1U] = 0U;
    __Vtemp1194[2U] = 0U;
    __Vtemp1194[3U] = 0U;
    __Vtemp1194[4U] = 0U;
    __Vtemp1194[5U] = 0U;
    __Vtemp1194[6U] = 0U;
    __Vtemp1194[7U] = 0U;
    __Vtemp1194[8U] = 0U;
    __Vtemp1194[9U] = 0U;
    VL_EXTEND_WW(320,319, __Vtemp1195, __Vtemp1194);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_732 
        = ((((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
             == ((7U == (7U & __Vtemp1177[0U])) ? 4U
                  : ((6U == (7U & __Vtemp1183[0U]))
                      ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_28)))) 
            | ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
               == ((7U == (7U & __Vtemp1189[0U])) ? 4U
                    : ((6U == (7U & __Vtemp1195[0U]))
                        ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_28))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
              & (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
                  == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
                       ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
                                ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_44)))) 
                 | ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
                    == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
                         ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))
                                  ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_44)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1567(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1567\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_778 
        = ((((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
             == ((7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_700 
                               >> 1U))) ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_700 
                                                     >> 1U)))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_28)))) 
            | ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
               == ((7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_700 
                                 >> 1U))) ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_700 
                                                       >> 1U)))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_28))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_4_a_valid) 
              & (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
                  == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                       ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_44)))) 
                 | ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
                    == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                         ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                  ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_44)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1568(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1568\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_39 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_35) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_35)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_778 
        = ((((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
             == ((7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_700 
                               >> 1U))) ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_700 
                                                     >> 1U)))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_28)))) 
            | ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
               == ((7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_700 
                                 >> 1U))) ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_700 
                                                       >> 1U)))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_28))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_5_a_valid) 
              & (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
                  == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                       ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_44)))) 
                 | ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)) 
                    == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                         ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                  ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_44)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1569(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1569\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_39 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_35) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_35)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1814 
        = ((0x27U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) ? 0ULL : ((0x26U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 3U)))
                                                   ? 0ULL
                                                   : 
                                                  ((0x25U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 3U)))
                                                    ? 0ULL
                                                    : 
                                                   ((0x24U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U)))
                                                     ? 0ULL
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 3U)))
                                                      ? 0ULL
                                                      : 
                                                     ((0x22U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 3U)))
                                                       ? 0ULL
                                                       : 
                                                      ((0x21U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 3U)))
                                                        ? 0ULL
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 3U)))
                                                         ? 0ULL
                                                         : 
                                                        ((0x1fU 
                                                          == 
                                                          (0xffU 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                              >> 3U)))
                                                          ? 0ULL
                                                          : 
                                                         ((0x1eU 
                                                           == 
                                                           (0xffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 3U)))
                                                           ? 0ULL
                                                           : 
                                                          ((0x1dU 
                                                            == 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                >> 3U)))
                                                            ? 0ULL
                                                            : 
                                                           ((0x1cU 
                                                             == 
                                                             (0xffU 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                 >> 3U)))
                                                             ? 0ULL
                                                             : 
                                                            ((0x1bU 
                                                              == 
                                                              (0xffU 
                                                               & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                  >> 3U)))
                                                              ? 0ULL
                                                              : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1801)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1570(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1570\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1553 
        = ((0x22U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) | ((0x21U == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U)))
                                            ? (0U == 
                                               (0x100U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                                            : ((0x20U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U)))
                                                ? (0U 
                                                   == 
                                                   (0x100U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 3U)))
                                                : (
                                                   (0x1fU 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 3U))) 
                                                   | ((0x1eU 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 3U))) 
                                                      | ((0x1dU 
                                                          == 
                                                          (0xffU 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                              >> 3U))) 
                                                         | ((0x1cU 
                                                             == 
                                                             (0xffU 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                 >> 3U))) 
                                                            | ((0x1bU 
                                                                == 
                                                                (0xffU 
                                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                    >> 3U))) 
                                                               | ((0x1aU 
                                                                   == 
                                                                   (0xffU 
                                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                       >> 3U))) 
                                                                  | ((0x19U 
                                                                      == 
                                                                      (0xffU 
                                                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                          >> 3U))) 
                                                                     | ((0x18U 
                                                                         == 
                                                                         (0xffU 
                                                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                             >> 3U))) 
                                                                        | ((0x17U 
                                                                            == 
                                                                            (0xffU 
                                                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                           | ((0x16U 
                                                                               == 
                                                                               (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1540))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1571(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1571\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_39 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_35) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_35)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_82 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_48) 
             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_46) 
                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_48) 
                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_46) 
                           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_45) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_43) 
                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_45) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_43) 
                                                 & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_42) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_40) 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_42) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_40) 
                                                       & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_39) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_37) 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_39) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_37) 
                                                           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT___GEN_39 
        = ((0x27U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? 0x7069686365657266ULL
            : ((0x26U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? 0x260000001d000000ULL
                : ((0x25U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? 0x300000000000000ULL
                    : ((0x24U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? 0x7665642d6e776f6eULL : (
                                                   (0x23U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? 0x6b6e752d70696863ULL
                                                    : 
                                                   ((0x22U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? 0x74656b636f722c73ULL
                                                     : 
                                                    ((0x21U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? 0x7069686365657266ULL
                                                      : 
                                                     ((0x20U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                           >> 3U)))
                                                       ? 0x1b00000021000000ULL
                                                       : 
                                                      ((0x1fU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                            >> 3U)))
                                                        ? 0x300000001000000ULL
                                                        : 
                                                       ((0x1eU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                             >> 3U)))
                                                         ? 0xf00000004000000ULL
                                                         : 
                                                        ((0x1dU 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                              >> 3U)))
                                                          ? 0x300000001000000ULL
                                                          : 
                                                         ((0x1cU 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                               >> 3U)))
                                                           ? 0x4000000ULL
                                                           : 
                                                          ((0x1bU 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                                >> 3U)))
                                                            ? 0x300000000000000ULL
                                                            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT___GEN_26)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1572(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1572\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txSlackWrap 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_13) 
           & (3U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txSlackCount)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo_io_enq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_1) 
           & (7U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txDataIdx)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_32 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full))) 
           & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__prescaler_next 
        = (0x1fffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__restore)
                        ? (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__div) 
                                     >> 4U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__prescaler)) 
                      - (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__restore) 
                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__sample_count) 
                                     < (0xfU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__div))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_82 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_48) 
             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_46) 
                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_48) 
                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_46) 
                           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_45) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_43) 
                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_45) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_43) 
                                                 & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_42) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_40) 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_42) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_40) 
                                                       & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_39) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_37) 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_39) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_37) 
                                                           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_address))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1573(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1573\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1197[4];
    WData/*127:0*/ __Vtemp1198[4];
    WData/*95:0*/ __Vtemp1200[3];
    // Body
    VL_EXTEND_WQ(115,52, __Vtemp1197, (0xfffffffffffffULL 
                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_3));
    VL_SHIFTL_WWI(115,115,6, __Vtemp1198, __Vtemp1197, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_111));
    __Vtemp1200[0U] = (IData)((((QData)((IData)((7U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_121)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_120) 
                                                      >> 9U)) 
                                                    | ((3U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_120) 
                                                            >> 0xaU))) 
                                                       & (0ULL 
                                                          != 
                                                          (0xfffffffffffffULL 
                                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_3))))))) 
                                << 0x3dU) | (((QData)((IData)(
                                                              (0x1ffU 
                                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_120)))) 
                                              << 0x34U) 
                                             | (0xfffffffffffffULL 
                                                & ((0U 
                                                    == 
                                                    (0x7ffU 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_3 
                                                                >> 0x34U))))
                                                    ? 
                                                   (0xffffffffffffeULL 
                                                    & (((QData)((IData)(
                                                                        __Vtemp1198[1U])) 
                                                        << 0x21U) 
                                                       | ((QData)((IData)(
                                                                          __Vtemp1198[0U])) 
                                                          << 1U)))
                                                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_3)))));
    __Vtemp1200[1U] = (IData)(((((QData)((IData)((7U 
                                                  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_121)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_120) 
                                                       >> 9U)) 
                                                     | ((3U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_120) 
                                                             >> 0xaU))) 
                                                        & (0ULL 
                                                           != 
                                                           (0xfffffffffffffULL 
                                                            & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_3))))))) 
                                 << 0x3dU) | (((QData)((IData)(
                                                               (0x1ffU 
                                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_120)))) 
                                               << 0x34U) 
                                              | (0xfffffffffffffULL 
                                                 & ((0U 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_3 
                                                                 >> 0x34U))))
                                                     ? 
                                                    (0xffffffffffffeULL 
                                                     & (((QData)((IData)(
                                                                         __Vtemp1198[1U])) 
                                                         << 0x21U) 
                                                        | ((QData)((IData)(
                                                                           __Vtemp1198[0U])) 
                                                           << 1U)))
                                                     : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_3)))) 
                               >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[0U] 
        = __Vtemp1200[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U] 
        = __Vtemp1200[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[2U] 
        = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_3 
                         >> 0x3fU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_98 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
           & (1U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89 
                    << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_95 
        = ((~ (1U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89 
                     << 1U))) & (3U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89 
                                       << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_46 
        = (((IData)((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_35) 
                                  >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_39) 
                                     >> 2U)))) << 1U) 
              | (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_39) 
                        >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_39) 
                                  >> 1U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1574(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1574\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_661 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_609) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_617)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_740 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_609) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_689)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_661 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_609) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_617)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_740 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_609) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_689)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_661 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_609) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_617)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_740 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_609) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_689)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_562 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_514) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_523)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_672 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_514) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_625)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_562 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_514) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_523)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_672 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_514) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_625)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_615 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_563) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_571)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_691 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_563) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_643)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_615 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_563) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_571)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_691 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_563) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_643)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___T_537 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___T_510) 
           & (4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__empty)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1575(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1575\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1201[4];
    WData/*127:0*/ __Vtemp1202[4];
    WData/*127:0*/ __Vtemp1203[4];
    WData/*127:0*/ __Vtemp1204[4];
    WData/*127:0*/ __Vtemp1205[4];
    WData/*127:0*/ __Vtemp1206[4];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater__DOT___T_5 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__empty))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_repeat));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_560 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_560 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_560 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_enq_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__empty)));
    VL_EXTEND_WQ(128,64, __Vtemp1201, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp1202, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp1203, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_4);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_133 
        = ((0x80000000U & __Vtemp1201[1U]) ? 0U : (
                                                   (0x40000000U 
                                                    & __Vtemp1202[1U])
                                                    ? 1U
                                                    : 
                                                   ((0x20000000U 
                                                     & __Vtemp1203[1U])
                                                     ? 2U
                                                     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_130))));
    VL_EXTEND_WQ(128,64, __Vtemp1204, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp1205, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    VL_EXTEND_WQ(128,64, __Vtemp1206, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_4);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_133 
        = ((0x80000000U & __Vtemp1204[1U]) ? 0U : (
                                                   (0x40000000U 
                                                    & __Vtemp1205[1U])
                                                    ? 1U
                                                    : 
                                                   ((0x20000000U 
                                                     & __Vtemp1206[1U])
                                                     ? 2U
                                                     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_130))));
    if ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[2U] 
                       << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[1U] 
                                 >> 0x1dU))))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wdata[0U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_246[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wdata[1U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_246[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wdata[2U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_246[2U];
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wdata[0U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wdata[1U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__wdata[2U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_151[2U];
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_53 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_48) 
                  ^ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_fmaCmd) 
                     >> 1U)) ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist 
        = (0x3fffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_50) 
                       - (IData)(0x7c8U)) - (0xfffU 
                                             & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[2U] 
                                                 << 0xcU) 
                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                   >> 0x14U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1576(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1576\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_359 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                          >> 0x11U))) ? 0x25U : ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 0x10U)))
                                                  ? 0x26U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0xfU)))
                                                   ? 0x27U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 0xeU)))
                                                    ? 0x28U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 0xdU)))
                                                     ? 0x29U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                 >> 0xcU)))
                                                      ? 0x2aU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                  >> 0xbU)))
                                                       ? 0x2bU
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 0xaU)))
                                                        ? 0x2cU
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                    >> 9U)))
                                                         ? 0x2dU
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                     >> 8U)))
                                                          ? 0x2eU
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                      >> 7U)))
                                                           ? 0x2fU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                       >> 6U)))
                                                            ? 0x30U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                        >> 5U)))
                                                             ? 0x31U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                         >> 4U)))
                                                              ? 0x32U
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                          >> 3U)))
                                                               ? 0x33U
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                           >> 2U)))
                                                                ? 0x34U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                            >> 1U)))
                                                                 ? 0x35U
                                                                 : 0x36U)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1577(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1577\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1209[3];
    WData/*95:0*/ __Vtemp1214[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_320 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
           | ((0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
                                   << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
                                             >> 0x1cU))))
               ? 0ULL : 0xe0400000ULL));
    __Vtemp1209[0U] = (IData)((((QData)((IData)((0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                  >> 0x1dU)))) 
                                                     | (6U 
                                                        <= 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                    >> 0x1dU)))))
                                                     ? 
                                                    ((0xe00U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                  >> 0x1dU)) 
                                                         << 9U)) 
                                                     | (0x1ffU 
                                                        & ((IData)(0x100U) 
                                                           + (IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                      >> 0x17U)))))
                                                     : 
                                                    ((IData)(0x700U) 
                                                     + 
                                                     (0x1ffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                 >> 0x17U)))))))) 
                                << 0x34U) | ((QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296)))) 
                                             << 0x1dU)));
    __Vtemp1209[1U] = (IData)(((((QData)((IData)((0xfffU 
                                                  & (((0U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                   >> 0x1dU)))) 
                                                      | (6U 
                                                         <= 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                     >> 0x1dU)))))
                                                      ? 
                                                     ((0xe00U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                   >> 0x1dU)) 
                                                          << 9U)) 
                                                      | (0x1ffU 
                                                         & ((IData)(0x100U) 
                                                            + (IData)(
                                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                       >> 0x17U)))))
                                                      : 
                                                     ((IData)(0x700U) 
                                                      + 
                                                      (0x1ffU 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                                                  >> 0x17U)))))))) 
                                 << 0x34U) | ((QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296)))) 
                                              << 0x1dU)) 
                               >> 0x20U));
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)) 
               | (0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
                                      << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
                                                >> 0x1cU))))))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[0U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)
                ? __Vtemp1209[0U] : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[0U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[1U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)
                ? __Vtemp1209[1U] : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[2U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)
                ? (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_296 
                                 >> 0x20U))) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U]);
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[0U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[1U] = 0xe0080000U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[2U] = 0U;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_349 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
           | ((0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U] 
                                   << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
                                             >> 0x1cU))))
               ? 0ULL : 0xe0400000ULL));
    __Vtemp1214[0U] = (IData)((((QData)((IData)((0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                  >> 0x1dU)))) 
                                                     | (6U 
                                                        <= 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                    >> 0x1dU)))))
                                                     ? 
                                                    ((0xe00U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                  >> 0x1dU)) 
                                                         << 9U)) 
                                                     | (0x1ffU 
                                                        & ((IData)(0x100U) 
                                                           + (IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                      >> 0x17U)))))
                                                     : 
                                                    ((IData)(0x700U) 
                                                     + 
                                                     (0x1ffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                 >> 0x17U)))))))) 
                                << 0x34U) | ((QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325)))) 
                                             << 0x1dU)));
    __Vtemp1214[1U] = (IData)(((((QData)((IData)((0xfffU 
                                                  & (((0U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                   >> 0x1dU)))) 
                                                      | (6U 
                                                         <= 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                     >> 0x1dU)))))
                                                      ? 
                                                     ((0xe00U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                   >> 0x1dU)) 
                                                          << 9U)) 
                                                      | (0x1ffU 
                                                         & ((IData)(0x100U) 
                                                            + (IData)(
                                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                       >> 0x17U)))))
                                                      : 
                                                     ((IData)(0x700U) 
                                                      + 
                                                      (0x1ffU 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                                                  >> 0x17U)))))))) 
                                 << 0x34U) | ((QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325)))) 
                                              << 0x1dU)) 
                               >> 0x20U));
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)) 
               | (0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U] 
                                      << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
                                                >> 0x1cU))))))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[0U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)
                ? __Vtemp1214[0U] : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[0U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[1U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)
                ? __Vtemp1214[1U] : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[2U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleIn)
                ? (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT___T_325 
                                 >> 0x20U))) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U]);
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[0U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[1U] = 0xe0080000U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[2U] = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1578(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1578\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1220[3];
    WData/*95:0*/ __Vtemp1221[3];
    WData/*95:0*/ __Vtemp1226[3];
    WData/*95:0*/ __Vtemp1227[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
        = (((0x800U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sExp))
             ? 0ULL : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_152) 
           | (QData)((IData)((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_23_sig 
                                            >> 0x37U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem 
        = (0xfffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
                         - vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialTerm));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem 
        = (0x1ffffffffffffffULL & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
                                   - vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialTerm));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_52 
        = (1U & ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_52 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum)) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_20 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_746)
            ? (0xffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)))
            : 0U);
    __Vtemp1220[0U] = 0xfU;
    __Vtemp1220[1U] = 0U;
    __Vtemp1220[2U] = 0U;
    VL_SHIFTL_WWI(79,79,6, __Vtemp1221, __Vtemp1220, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                   << 2U));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_746) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[0U] 
            = __Vtemp1221[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[1U] 
            = __Vtemp1221[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[2U] 
            = (0x7fffU & __Vtemp1221[2U]);
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[0U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[1U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___GEN_21[2U] = 0U;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_20 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_746)
            ? (0xffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)))
            : 0U);
    __Vtemp1226[0U] = 0xfU;
    __Vtemp1226[1U] = 0U;
    __Vtemp1226[2U] = 0U;
    VL_SHIFTL_WWI(79,79,6, __Vtemp1227, __Vtemp1226, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                   << 2U));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_746) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[0U] 
            = __Vtemp1227[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[1U] 
            = __Vtemp1227[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[2U] 
            = (0x7fffU & __Vtemp1227[2U]);
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[0U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[1U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___GEN_21[2U] = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1579(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1579\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1231[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97 
        = ((0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93) 
           | (0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_95));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
        = ((0x7fffffeU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[1U] 
                           << 7U) | (0x7eU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[0U] 
                                              >> 0x19U)))) 
           | ((0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[1U] 
                             << 9U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[0U] 
                                       >> 0x17U)))) 
              | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_247))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_61 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
           | (0x18U >= (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0x4aU > (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0x7fU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist))
                     : 0x4aU));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97 
        = ((0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93) 
           | (0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_95));
    VL_EXTEND_WQ(95,64, __Vtemp1231, (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__len 
                                      - 1ULL));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_450) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_43[0U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_455)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_31[0U]
                : __Vtemp1231[0U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_43[1U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_455)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_31[1U]
                : __Vtemp1231[1U]);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_43[2U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_455)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_31[2U]
                : __Vtemp1231[2U]);
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_43[0U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_31[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_43[1U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_31[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_43[2U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___GEN_31[2U];
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_28 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1014) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1014) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1014) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1014) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1580(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1580\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_1068 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_1003)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1068 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1003)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1068 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_1003)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1068 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_1003)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_463 
        = ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_435 
        = ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__subsystem_fbus_xbar__DOT__TLMonitor__DOT___T_923 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__buffer__DOT__TLMonitor__DOT___T_923 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serialadapter__DOT__fixer__DOT__TLMonitor__DOT___T_923 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_923 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_476 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_474)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__full)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__rsize 
        = ((0U == (((4U ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U]) 
                    | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U]) 
                   | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[2U]))
            ? 2U : ((0U == (((2U ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U]) 
                             | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U]) 
                            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[2U]))
                     ? 1U : ((0U == (((1U ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U]) 
                                      | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U]) 
                                     | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[2U]))
                              ? 0U : 3U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1581(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1581\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_119 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U]) 
                                           + (1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                               >> 1U)))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                               >> 2U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 3U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                               >> 4U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 5U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 6U)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 7U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                               >> 8U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 9U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 0xaU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 0xbU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 0xcU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 0xdU)))) 
                                        + (3U & ((1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 0xeU)) 
                                                 + 
                                                 (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 0xfU))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1582(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1582\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_151 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                  >> 0x10U)) 
                                           + (1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                               >> 0x11U)))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                               >> 0x12U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 0x13U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                               >> 0x14U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 0x15U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 0x16U)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 0x17U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                               >> 0x18U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 0x19U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 0x1aU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 0x1bU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                   >> 0x1cU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 0x1dU)))) 
                                        + (3U & ((1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                     >> 0x1eU)) 
                                                 + 
                                                 ((1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[0U] 
                                                      >> 0x1fU)) 
                                                  + 
                                                  (1U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U]))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1583(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1583\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_183 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                  >> 1U)) 
                                           + (1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                               >> 2U)))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                               >> 3U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 4U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                               >> 5U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 6U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 7U)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 8U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                               >> 9U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0xaU)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0xbU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 0xcU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0xdU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 0xeU)))) 
                                        + (3U & ((1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 0xfU)) 
                                                 + 
                                                 (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 0x10U))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1584(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1584\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT___T_215 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                  >> 0x11U)) 
                                           + (1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                               >> 0x12U)))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                               >> 0x13U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0x14U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                               >> 0x15U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0x16U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0x17U)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 0x18U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                               >> 0x19U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0x1aU)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0x1bU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 0x1cU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                   >> 0x1dU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 0x1eU)))) 
                                        + (3U & ((1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[1U] 
                                                     >> 0x1fU)) 
                                                 + 
                                                 ((1U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[2U]) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__raw_size[2U] 
                                                      >> 1U)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1585(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1585\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_34 
        = (0xffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_30 
                       >> 0x10U) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT___T_30));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3537 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 4U)) & (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                  >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3542 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 5U)) & (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                  >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3672 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1fU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3667 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1eU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3647 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1aU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1586(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1586\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3652 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1bU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3657 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1cU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3662 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1dU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3632 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x17U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3637 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x18U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3642 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x19U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1587(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1587\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3617 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x14U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3622 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x15U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3627 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x16U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3597 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x10U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3602 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x11U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3607 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x12U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1588(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1588\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3612 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3514) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x13U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnMaybe 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
             & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
                >> 6U)) & (0x10U == (0x50U & (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                      >> 0x27U))))) 
           & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_484 
                           >> 8U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEnMaybe 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
             & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
                >> 7U)) & (0x10U == (0x50U & (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                      >> 0x27U))))) 
           & (0xffffffffU == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_484));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3723 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 8U)) & (0x10U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3703 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 4U)) & (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                  >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1589(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1589\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3708 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 5U)) & (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                  >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3838 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1fU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3833 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1eU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3828 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1dU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3813 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1aU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3818 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1bU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1590(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1590\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3823 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x1cU)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3798 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x17U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3803 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x18U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3808 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x19U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3793 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x16U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3783 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x14U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1591(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1591\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3788 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x15U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3778 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x13U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3763 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x10U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3768 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x11U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3773 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680) 
            & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3104)) 
               >> 0x12U)) & (0U == (0x50U & (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x27U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_46 
        = (((IData)((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_35) 
                                  >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_39) 
                                     >> 2U)))) << 1U) 
              | (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_39) 
                        >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_39) 
                                  >> 1U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1592(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1592\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1237[3];
    WData/*95:0*/ __Vtemp1243[3];
    // Body
    __Vtemp1237[0U] = ((0xfffffffeU & ((IData)(((1U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_opcode))
                                                 ? 
                                                (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_511)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_480)))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param))
                                                  ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_676
                                                  : 
                                                 (((1U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param)) 
                                                   == 
                                                   (1U 
                                                    & (((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_670 
                                                                    >> 0x3fU))) 
                                                        == 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_672 
                                                                    >> 0x3fU))))
                                                        ? 
                                                       (~ (IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_676 
                                                                   >> 0x3fU)))
                                                        : 
                                                       ((1U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param) 
                                                            >> 1U)) 
                                                        == 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_670 
                                                                    >> 0x3fU)))))))
                                                   ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data
                                                   : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data)))) 
                                       << 1U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_corrupt) 
                                                  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_corrupt)));
    __Vtemp1237[1U] = ((1U & ((IData)(((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_opcode))
                                        ? (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_511)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_480)))
                                        : ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param))
                                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_676
                                            : (((1U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param)) 
                                                == 
                                                (1U 
                                                 & (((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_670 
                                                                 >> 0x3fU))) 
                                                     == 
                                                     (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_672 
                                                                 >> 0x3fU))))
                                                     ? 
                                                    (~ (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_676 
                                                                >> 0x3fU)))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_670 
                                                                 >> 0x3fU)))))))
                                                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data
                                                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data)))) 
                              >> 0x1fU)) | (0xfffffffeU 
                                            & ((IData)(
                                                       (((1U 
                                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_opcode))
                                                          ? 
                                                         (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_511)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_480)))
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param))
                                                           ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_676
                                                           : 
                                                          (((1U 
                                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param)) 
                                                            == 
                                                            (1U 
                                                             & (((1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_670 
                                                                             >> 0x3fU))) 
                                                                 == 
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_672 
                                                                             >> 0x3fU))))
                                                                 ? 
                                                                (~ (IData)(
                                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_676 
                                                                            >> 0x3fU)))
                                                                 : 
                                                                ((1U 
                                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param) 
                                                                     >> 1U)) 
                                                                 == 
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_670 
                                                                             >> 0x3fU)))))))
                                                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data
                                                            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data))) 
                                                        >> 0x20U)) 
                                               << 1U)));
    __Vtemp1237[2U] = (1U & ((IData)((((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_opcode))
                                        ? (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_511)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_480)))
                                        : ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param))
                                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_676
                                            : (((1U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param)) 
                                                == 
                                                (1U 
                                                 & (((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_670 
                                                                 >> 0x3fU))) 
                                                     == 
                                                     (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_672 
                                                                 >> 0x3fU))))
                                                     ? 
                                                    (~ (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_676 
                                                                >> 0x3fU)))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_param) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_670 
                                                                 >> 0x3fU)))))))
                                                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data
                                                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data))) 
                                      >> 0x20U)) >> 0x1fU));
    __Vtemp1243[2U] = ((0xffffffc0U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_774) 
                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_772) 
                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address)) 
                                       << 6U)) | ((0xffffffe0U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_774) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_772) 
                                                          & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address))) 
                                                      << 5U)) 
                                                  | ((0xfffffff0U 
                                                      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_771) 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_769) 
                                                             & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address)) 
                                                         << 4U)) 
                                                     | ((0xfffffff8U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_771) 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_769) 
                                                                & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address))) 
                                                            << 3U)) 
                                                        | ((0xfffffffcU 
                                                            & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_768) 
                                                                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_766) 
                                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address)) 
                                                               << 2U)) 
                                                           | ((0xfffffffeU 
                                                               & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_768) 
                                                                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_766) 
                                                                      & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address))) 
                                                                  << 1U)) 
                                                              | __Vtemp1237[2U]))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_877[0U] 
        = __Vtemp1237[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_877[1U] 
        = __Vtemp1237[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_877[2U] 
        = ((0xffffff00U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address 
                            << 9U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_777) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_775) 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address)) 
                                      << 8U))) | ((0xffffff80U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_777) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_775) 
                                                          & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address))) 
                                                      << 7U)) 
                                                  | __Vtemp1243[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_877[3U] 
        = (0xffU & ((0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address 
                              >> 0x17U)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_777) 
                                             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_775) 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_address)) 
                                            >> 0x18U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1593(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1593\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1246[3];
    WData/*95:0*/ __Vtemp1248[3];
    WData/*95:0*/ __Vtemp1249[3];
    // Body
    __Vtemp1246[0U] = (IData)((((QData)((IData)((1U 
                                                 & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U]))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0xff800000U 
                                                              & ((((0U 
                                                                    == 
                                                                    (7U 
                                                                     & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                         << 3U) 
                                                                        | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                           >> 0x1dU)))) 
                                                                   | (6U 
                                                                      <= 
                                                                      (7U 
                                                                       & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                           << 3U) 
                                                                          | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                             >> 0x1dU)))))
                                                                   ? 
                                                                  ((0x1c0U 
                                                                    & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                        << 9U) 
                                                                       | (0x1c0U 
                                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                             >> 0x17U)))) 
                                                                   | (0x3fU 
                                                                      & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                          << 0xcU) 
                                                                         | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                            >> 0x14U))))
                                                                   : 
                                                                  ((IData)(0x100U) 
                                                                   + 
                                                                   ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                     << 0xcU) 
                                                                    | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                       >> 0x14U)))) 
                                                                 << 0x17U)) 
                                                             | (0x7fffffU 
                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                    << 3U) 
                                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[0U] 
                                                                      >> 0x1dU))))))));
    __Vtemp1246[1U] = ((0xfffffffeU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U]) 
                       | (IData)(((((QData)((IData)(
                                                    (1U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xff800000U 
                                                                  & ((((0U 
                                                                        == 
                                                                        (7U 
                                                                         & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                             << 3U) 
                                                                            | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                               >> 0x1dU)))) 
                                                                       | (6U 
                                                                          <= 
                                                                          (7U 
                                                                           & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                               << 3U) 
                                                                              | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                                >> 0x1dU)))))
                                                                       ? 
                                                                      ((0x1c0U 
                                                                        & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                            << 9U) 
                                                                           | (0x1c0U 
                                                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                                >> 0x17U)))) 
                                                                       | (0x3fU 
                                                                          & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                              << 0xcU) 
                                                                             | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                                >> 0x14U))))
                                                                       : 
                                                                      ((IData)(0x100U) 
                                                                       + 
                                                                       ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                         << 0xcU) 
                                                                        | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                           >> 0x14U)))) 
                                                                     << 0x17U)) 
                                                                 | (0x7fffffU 
                                                                    & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                        << 3U) 
                                                                       | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[0U] 
                                                                          >> 0x1dU))))))) 
                                  >> 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[0U] 
        = __Vtemp1246[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[1U] 
        = __Vtemp1246[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[2U] 
        = (1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_594 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_588 
           + ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_param))
               ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_590
               : (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_590)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_20 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_740)
            ? (0xffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)))
            : 0U);
    __Vtemp1248[0U] = 0xfU;
    __Vtemp1248[1U] = 0U;
    __Vtemp1248[2U] = 0U;
    VL_SHIFTL_WWI(79,79,6, __Vtemp1249, __Vtemp1248, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                   << 2U));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_740) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0U] 
            = __Vtemp1249[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[1U] 
            = __Vtemp1249[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[2U] 
            = (0x7fffU & __Vtemp1249[2U]);
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[1U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[2U] = 0U;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_313 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_302) 
                     >> 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_312 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_302)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT__empty))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1594(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1594\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_46 
        = (((IData)((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_35) 
                                  >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_39) 
                                     >> 2U)))) << 1U) 
              | (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_39) 
                        >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_39) 
                                  >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_535 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_474) 
                     - ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__full)) 
                        & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_474))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_523)
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_546)))));
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_474))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_io_in_d_valid 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_523;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_valid 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_523;
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_io_in_d_valid 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_546;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_valid 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_546;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_486 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_477) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_483))) 
            << 2U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_245) 
                       << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_236)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_637 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_576) 
                     - ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__full)) 
                        & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_576))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_625)
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_648)))));
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_576))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_625;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_625;
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_d_valid 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_648;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_648;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_588 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_579) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_585))) 
            << 2U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_247) 
                       << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_238)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1595(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1595\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3054 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
            ? 0U : (0xffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr))
                              ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3048 
                                         >> 8U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3048))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_77 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_43) 
             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_41) 
                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_43) 
                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_41) 
                           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_40) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_38) 
                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_40) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_38) 
                                                 & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_37) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_35) 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_37) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_35) 
                                                       & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_34) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_32) 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_34) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_32) 
                                                           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_address))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1745 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1698) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1706)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1596(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1596\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1796 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1749) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1757)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__releaseDone 
        = (((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_2895)) 
            | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_2894))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_2887));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__releaseDataBeat 
        = (0x3ffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_2894) 
                      & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_2895) 
                            - (IData)(1U)))) + ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__releaseRejected)
                                                 ? 0U
                                                 : 
                                                (3U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_release_data_valid) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_release_data_valid))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1766 
        = (((0x1000U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
                                 >> 8U)) << 0xcU)) 
            | ((0x800U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0 
                                   >> 8U)) << 0xbU)) 
               | ((0x400U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0 
                                      >> 8U)) << 0xaU)) 
                  | ((0x200U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0 
                                         >> 8U)) << 9U)) 
                     | ((0x100U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0 
                                            >> 8U)) 
                                   << 8U)) | ((0x80U 
                                               & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_63 
                                                           >> 8U)) 
                                                  << 7U)) 
                                              | ((0x40U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_59 
                                                              >> 8U)) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_55 
                                                                 >> 8U)) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & ((IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_51 
                                                                    >> 8U)) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & ((IData)(
                                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_47 
                                                                       >> 8U)) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & ((IData)(
                                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_43 
                                                                          >> 8U)) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & ((IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_39 
                                                                             >> 8U)) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_35 
                                                                              >> 8U))))))))))))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr)
               ? ((0x1000U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
                                       >> 9U)) << 0xcU)) 
                  | ((0x800U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0 
                                         >> 9U)) << 0xbU)) 
                     | ((0x400U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0 
                                            >> 9U)) 
                                   << 0xaU)) | ((0x200U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                             >> 9U)) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                                >> 9U)) 
                                                       << 8U)) 
                                                   | ((0x80U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_63 
                                                                   >> 9U)) 
                                                          << 7U)) 
                                                      | ((0x40U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_59 
                                                                      >> 9U)) 
                                                             << 6U)) 
                                                         | ((0x20U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_55 
                                                                         >> 9U)) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & ((IData)(
                                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_51 
                                                                            >> 9U)) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & ((IData)(
                                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_47 
                                                                               >> 9U)) 
                                                                      << 3U)) 
                                                                  | ((4U 
                                                                      & ((IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_43 
                                                                                >> 9U)) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & ((IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_39 
                                                                                >> 9U)) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_35 
                                                                                >> 9U)))))))))))))))
               : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1597(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1597\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1700 
        = ((0x1000U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
                                >> 0xdU)) << 0xcU)) 
           | ((0x800U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0 
                                  >> 0xdU)) << 0xbU)) 
              | ((0x400U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0 
                                     >> 0xdU)) << 0xaU)) 
                 | ((0x200U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0 
                                        >> 0xdU)) << 9U)) 
                    | ((0x100U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0 
                                           >> 0xdU)) 
                                  << 8U)) | ((0x80U 
                                              & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_63 
                                                          >> 0xdU)) 
                                                 << 7U)) 
                                             | ((0x40U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_59 
                                                             >> 0xdU)) 
                                                    << 6U)) 
                                                | ((0x20U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_55 
                                                                >> 0xdU)) 
                                                       << 5U)) 
                                                   | ((0x10U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_51 
                                                                   >> 0xdU)) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_47 
                                                                      >> 0xdU)) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_43 
                                                                         >> 0xdU)) 
                                                                << 2U)) 
                                                            | ((2U 
                                                                & ((IData)(
                                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_39 
                                                                            >> 0xdU)) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_35 
                                                                             >> 0xdU)))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__ptw_ae_array 
        = ((0x1000U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
                                >> 0xbU)) << 0xcU)) 
           | ((0x800U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0 
                                  >> 0xbU)) << 0xbU)) 
              | ((0x400U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0 
                                     >> 0xbU)) << 0xaU)) 
                 | ((0x200U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0 
                                        >> 0xbU)) << 9U)) 
                    | ((0x100U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0 
                                           >> 0xbU)) 
                                  << 8U)) | ((0x80U 
                                              & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_63 
                                                          >> 0xbU)) 
                                                 << 7U)) 
                                             | ((0x40U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_59 
                                                             >> 0xbU)) 
                                                    << 6U)) 
                                                | ((0x20U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_55 
                                                                >> 0xbU)) 
                                                       << 5U)) 
                                                   | ((0x10U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_51 
                                                                   >> 0xbU)) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_47 
                                                                      >> 0xbU)) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_43 
                                                                         >> 0xbU)) 
                                                                << 2U)) 
                                                            | ((2U 
                                                                & ((IData)(
                                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_39 
                                                                            >> 0xbU)) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_35 
                                                                             >> 0xbU)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1598(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1598\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_12 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_656));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_9 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_10 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_11 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2077 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_3) 
            << 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_2) 
                       << 2U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_1) 
                                  << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_8 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_hits_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sector_hits_6 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_422) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_423 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_6 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_6_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_423 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sector_hits_7 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_428) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_429 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_7 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_7_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_429 
                                      >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1599(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1599\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sector_hits_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_386) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_387 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_387 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sector_hits_1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_392) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_393 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_1_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_393 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sector_hits_2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_398) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_399 
                                   >> 2U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1600(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1600\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_2_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_399 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sector_hits_3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_404) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_405 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_3_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_405 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sector_hits_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_410) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_411 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_4_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_411 
                                      >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1601(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1601\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sector_hits_5 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_416) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_417 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_5 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__sectored_entries_5_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_417 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT__do_enq) 
           != (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full)) 
                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___T_364)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_562 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_514) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_523)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_672 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_514) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor_1__DOT___T_625)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren2 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__roundIncr 
        = (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
              & ((1U & (((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                       << 1U)) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                  >> 0x1fU)) 
                        & ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__alignedSig 
                                                 >> 1U)))) 
                           | (3U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__alignedSig)))))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__magJustBelowOne) 
                    & (0U != (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__alignedSig)))))) 
             | ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                & ((1U & (((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                         << 1U)) | 
                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                            >> 0x1fU)) & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__alignedSig 
                                                  >> 1U)))) 
                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__magJustBelowOne)))) 
            | (((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                | (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm))) 
               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__common_inexact)))) 
           | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
              & ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__common_inexact))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1602(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1602\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__roundIncr 
        = (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
              & ((1U & (((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                       << 1U)) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                  >> 0x1fU)) 
                        & ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[0U] 
                                            >> 1U)))) 
                           | (3U == (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[0U]))))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__magJustBelowOne) 
                    & (0U != (3U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[0U]))))) 
             | ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                & ((1U & (((0x1ffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                         << 1U)) | 
                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                            >> 0x1fU)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[0U] 
                                          >> 1U))) 
                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__magJustBelowOne)))) 
            | (((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                | (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm))) 
               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__common_inexact)))) 
           | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
              & ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__common_inexact))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__fpu_kill_mem 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_valid) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_ctrl_fp)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt_io_nack_mem));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_fp 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_fp;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_xcpt 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_xcpt));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1603(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1603\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1033 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_xcpt_interrupt) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_xcpt));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_xcpt_interrupt 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_714) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr_io_interrupt));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_610 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_ctrl_wxd));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_wxd 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_wxd;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_212 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_singleOut)
            ? ((((7U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_118 
                                       >> 0x1dU)))) 
                 & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_118 
                            >> 0x16U))) << 9U) | ((
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_118 
                                                                 >> 0x1dU)))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_118 
                                                                  >> 0x16U)))) 
                                                   << 8U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_137) 
                                                       & (~ (IData)(
                                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_118 
                                                                     >> 0x20U)))) 
                                                      << 7U) 
                                                     | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_133) 
                                                          & (~ (IData)(
                                                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_118 
                                                                        >> 0x20U)))) 
                                                         << 6U) 
                                                        | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_128) 
                                                             & (~ (IData)(
                                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_118 
                                                                           >> 0x20U)))) 
                                                            << 5U) 
                                                           | ((((0U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_118 
                                                                             >> 0x1dU)))) 
                                                                & (~ (IData)(
                                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_118 
                                                                              >> 0x20U)))) 
                                                               << 4U) 
                                                              | ((((0U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_118 
                                                                                >> 0x1dU)))) 
                                                                   & (IData)(
                                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_118 
                                                                              >> 0x20U))) 
                                                                  << 3U) 
                                                                 | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_128) 
                                                                      & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_118 
                                                                                >> 0x20U))) 
                                                                     << 2U) 
                                                                    | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_133) 
                                                                         & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_118 
                                                                                >> 0x20U))) 
                                                                        << 1U) 
                                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_137) 
                                                                          & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_118 
                                                                                >> 0x20U))))))))))))
            : ((((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                          >> 0x1dU)))) 
                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                    >> 0x13U)) << 9U) | ((((7U == (7U 
                                                   & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                       << 3U) 
                                                      | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                         >> 0x1dU)))) 
                                           & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                 >> 0x13U))) 
                                          << 8U) | 
                                         ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_183) 
                                            & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])) 
                                           << 7U) | 
                                          ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_179) 
                                             & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])) 
                                            << 6U) 
                                           | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_174) 
                                                & (~ 
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])) 
                                               << 5U) 
                                              | ((((0U 
                                                    == 
                                                    (7U 
                                                     & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                         << 3U) 
                                                        | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                           >> 0x1dU)))) 
                                                   & (~ 
                                                      vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])) 
                                                  << 4U) 
                                                 | ((((0U 
                                                       == 
                                                       (7U 
                                                        & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                            << 3U) 
                                                           | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                              >> 0x1dU)))) 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                                                     << 3U) 
                                                    | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_174) 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                                                        << 2U) 
                                                       | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_179) 
                                                            & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                                                           << 1U) 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_183) 
                                                             & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1604(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1604\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_singleOut 
            = (((((0U == (0x42001000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                  | (0U == (0x22000004U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                 | (0U == (0x12002000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                | (0U == (0x1040U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
               | (0x40U == (0x2000050U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags 
            = ((((0U == (0x20000004U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                 | (0x40U == (0x50U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                | (0x8000000U == (0x8002000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
               | (0x80000000U == (0xc0000004U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1398 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_ctrl_jal) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_ctrl_jalr));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_jalr 
            = (0x24U == (0x203cU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_3890 
        = ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_3872 
                    >> 0x3bU)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_alu_dw 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_xcpt) 
               | ((0U == (0x10U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                  | (0U == (8U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1605(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1605\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__bpu__DOT___T_37 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch))
                  ? (((0x7fffffffffULL & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_wdata) 
                      >= vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address) 
                     ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch))
                  : ((0x7fffffffffULL & ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_wdata) 
                                         | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__bpu__DOT___T_22)))) 
                     == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__bpu__DOT___T_35)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_634 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_resp_bits_data_word_bypass
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_wdata
                : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_wdata
                    : 0ULL)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_627 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_resp_bits_data_word_bypass
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_wdata
                : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_wdata
                    : 0ULL)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__freeOH 
        = (0xffffffffffULL & ((~ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_15 
                                   << 1U) | ((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_15)))) 
                                             << 0x21U))) 
                              & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__used)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_24 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_20) 
                     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_20)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__freeOH 
        = (0x1ffffffffULL & ((~ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_15 
                                  << 1U) | ((QData)((IData)(
                                                            (1U 
                                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_15)))) 
                                            << 0x21U))) 
                             & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__used)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1606(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1606\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_2927 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_victim_dirty) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_flush_line) 
                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_size) 
                    >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__metaArb_io_in_2_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc_and_waw) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_805)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_947 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc_and_waw) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_write));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_872 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc_and_waw) 
             & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__cached_grant_wait))) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_cached_miss));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_want_victimize 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_cached_miss) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_flush_line)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_flush_valid_pre_tag_ecc));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_2591 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_cached_miss) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__release_ack_wait))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_victim_dirty)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT__do_enq) 
           != (0xfU & ((0xfU >> (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_2))) 
                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_176) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_139))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_142)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_190 
        = (0xfffffffU & ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_163))
                          ? (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_181) 
                                | (0xffU & ((IData)(1U) 
                                            << (4U 
                                                | (3U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_163) 
                                                      >> 3U)))))))
                          : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_181 
                             | (0xffU & ((IData)(1U) 
                                         << (4U | (3U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_163) 
                                                      >> 3U))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1607(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1607\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_288 
        = ((7U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_282) 
                   >> 1U) | (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_282) 
                                   >> 2U)))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_279) 
                                                << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1107 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1107 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1056 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1107 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_390 
        = ((7U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_384) 
                   >> 1U) | (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_384) 
                                   >> 2U)))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_381) 
                                                << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_d_bits_data 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_bypass)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_228)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics_io_data_out
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_237)
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue_io_deq_bits_data);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_xcpt_ae_inst 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache_io_resp_valid) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tl_error)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_ae_inst));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1608(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1608\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_0)
               ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_dout_0
               : 0U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_1)
                         ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_dout_1
                         : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_2)
                                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_dout_2
                                    : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_3)
                                               ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_dout_3
                                               : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_218 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_209)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_14));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___T_819 
        = (0x1fU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT__inflight) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___GEN_15)) 
                    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__TLMonitor__DOT___GEN_20))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_560 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1609(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1609\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_749 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__full)) 
                 & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_701))
                     ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_707))
                     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_745_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_716 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_707)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_613));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___GEN_15 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_727)
            ? (0xffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data)))
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_15 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_724)
            ? (0xffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data)))
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___GEN_15 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_724)
            ? (0xffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data)))
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_718)
            ? (0xffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data)))
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_562 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_514) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_523)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_514) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_625)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_15 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_718)
            ? (0xffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data)))
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__do_enq) 
           != (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__Queue__DOT__maybe_full)) 
                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___T_363)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_562 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_514) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_523)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_514) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_625)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_754 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor_io_in_d_valid) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_689)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1610(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1610\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_722 
        = ((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_0) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty))) 
                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_1) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_in_d_valid))) 
               | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_2) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)))) 
              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_3) 
                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid))) 
             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_4) 
                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid))) 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_5) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_6) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_664 
        = (1U & (((((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_in_d_valid)) 
                     | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty))) 
                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid)) 
                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid)) 
                  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid)) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_568 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
            << 6U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid) 
                       << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid) 
                                  << 4U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid) 
                                             << 3U) 
                                            | ((4U 
                                                & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                                                   << 2U)) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_in_d_valid) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_46 
        = (((IData)((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_35) 
                                  >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_39) 
                                     >> 2U)))) << 1U) 
              | (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_39) 
                        >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_39) 
                                  >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_46 
        = (((IData)((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_35) 
                                  >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_39) 
                                     >> 2U)))) << 1U) 
              | (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_39) 
                        >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_39) 
                                  >> 1U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1611(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1611\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1827 
        = ((0x34U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) ? 0ULL : ((0x33U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 3U)))
                                                   ? 0ULL
                                                   : 
                                                  ((0x32U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 3U)))
                                                    ? 0ULL
                                                    : 
                                                   ((0x31U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U)))
                                                     ? 0ULL
                                                     : 
                                                    ((0x30U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 3U)))
                                                      ? 0ULL
                                                      : 
                                                     ((0x2fU 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 3U)))
                                                       ? 0ULL
                                                       : 
                                                      ((0x2eU 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 3U)))
                                                        ? 0ULL
                                                        : 
                                                       ((0x2dU 
                                                         == 
                                                         (0xffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 3U)))
                                                         ? 0ULL
                                                         : 
                                                        ((0x2cU 
                                                          == 
                                                          (0xffU 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                              >> 3U)))
                                                          ? 0ULL
                                                          : 
                                                         ((0x2bU 
                                                           == 
                                                           (0xffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 3U)))
                                                           ? 0ULL
                                                           : 
                                                          ((0x2aU 
                                                            == 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                >> 3U)))
                                                            ? 0ULL
                                                            : 
                                                           ((0x29U 
                                                             == 
                                                             (0xffU 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                 >> 3U)))
                                                             ? 0ULL
                                                             : 
                                                            ((0x28U 
                                                              == 
                                                              (0xffU 
                                                               & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                  >> 3U)))
                                                              ? 0ULL
                                                              : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1814)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1612(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1612\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1568 
        = ((0x31U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) | ((0x30U == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U))) 
                                           | ((0x2fU 
                                               == (0xffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))) 
                                              | ((0x2eU 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))) 
                                                 | ((0x2dU 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U))) 
                                                    | ((0x2cU 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 3U))) 
                                                       | ((0x2bU 
                                                           == 
                                                           (0xffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 3U))) 
                                                          | ((0x2aU 
                                                              == 
                                                              (0xffU 
                                                               & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                  >> 3U))) 
                                                             | ((0x29U 
                                                                 == 
                                                                 (0xffU 
                                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                     >> 3U))) 
                                                                | ((0x28U 
                                                                    == 
                                                                    (0xffU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                        >> 3U))) 
                                                                   | ((0x27U 
                                                                       == 
                                                                       (0xffU 
                                                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                           >> 3U))) 
                                                                      | ((0x26U 
                                                                          == 
                                                                          (0xffU 
                                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                              >> 3U))) 
                                                                         | ((0x25U 
                                                                             == 
                                                                             (0xffU 
                                                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                            | ((0x24U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                               | ((0x23U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1553))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1613(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1613\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_46 
        = (((IData)((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_35) 
                                  >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_39) 
                                     >> 2U)))) << 1U) 
              | (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_39) 
                        >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_39) 
                                  >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT___GEN_52 
        = ((0x34U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? 0x100000000000000ULL
            : ((0x33U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? 0x400000003000000ULL
                : ((0x32U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? 0x73757063ULL
                    : ((0x31U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? 0x100000002000000ULL : ((0x30U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                       >> 3U)))
                                                   ? 0x30303030ULL
                                                   : 
                                                  ((0x2fU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? 0x30303435406c6169ULL
                                                    : 
                                                   ((0x2eU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? 0x7265732f636f732fULL
                                                     : 
                                                    ((0x2dU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? 0x2c00000015000000ULL
                                                      : 
                                                     ((0x2cU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                           >> 3U)))
                                                       ? 0x300000000736573ULL
                                                       : 
                                                      ((0x2bU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                            >> 3U)))
                                                        ? 0x61696c6101000000ULL
                                                        : 
                                                       ((0x2aU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                             >> 3U)))
                                                         ? 0x6e776f6eULL
                                                         : 
                                                        ((0x29U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                              >> 3U)))
                                                          ? 0x6b6e752d70696863ULL
                                                          : 
                                                         ((0x28U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                               >> 3U)))
                                                           ? 0x74656b636f722c73ULL
                                                           : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT___GEN_39)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1614(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1614\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1254[3];
    WData/*95:0*/ __Vtemp1255[3];
    WData/*95:0*/ __Vtemp1260[3];
    WData/*95:0*/ __Vtemp1261[3];
    WData/*95:0*/ __Vtemp1266[3];
    WData/*95:0*/ __Vtemp1267[3];
    // Body
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo_io_enq_valid));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataWrap 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_32) 
           & (7U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataIdx)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_10 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_10 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_9;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_10 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_10 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_9;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__intsink__DOT__SynchronizerShiftReg_w1_d3__DOT__NonSyncResetSynchronizerPrimitiveShiftReg_d3__DOT__sync_2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hrDebugInt_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_96 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_95);
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_2))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_46;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_in_d_bits_size 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_46;
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor_io_in_d_bits_size 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_3;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_in_d_bits_size 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_3;
    }
    __Vtemp1254[0U] = 0xfU;
    __Vtemp1254[1U] = 0U;
    __Vtemp1254[2U] = 0U;
    VL_SHIFTL_WWI(79,79,6, __Vtemp1255, __Vtemp1254, 
                  (0x1cU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source) 
                            >> 2U)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_740) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_21[0U] 
            = __Vtemp1255[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_21[1U] 
            = __Vtemp1255[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_21[2U] 
            = (0x7fffU & __Vtemp1255[2U]);
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_21[0U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_21[1U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_21[2U] = 0U;
    }
    __Vtemp1260[0U] = 0xfU;
    __Vtemp1260[1U] = 0U;
    __Vtemp1260[2U] = 0U;
    VL_SHIFTL_WWI(79,79,6, __Vtemp1261, __Vtemp1260, 
                  (0x1cU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source) 
                            >> 2U)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_740) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___GEN_21[0U] 
            = __Vtemp1261[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___GEN_21[1U] 
            = __Vtemp1261[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___GEN_21[2U] 
            = (0x7fffU & __Vtemp1261[2U]);
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___GEN_21[0U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___GEN_21[1U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___GEN_21[2U] = 0U;
    }
    __Vtemp1266[0U] = 0xfU;
    __Vtemp1266[1U] = 0U;
    __Vtemp1266[2U] = 0U;
    VL_SHIFTL_WWI(79,79,6, __Vtemp1267, __Vtemp1266, 
                  (0x1cU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source) 
                            >> 2U)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_740) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___GEN_21[0U] 
            = __Vtemp1267[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___GEN_21[1U] 
            = __Vtemp1267[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___GEN_21[2U] 
            = (0x7fffU & __Vtemp1267[2U]);
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___GEN_21[0U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___GEN_21[1U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___GEN_21[2U] = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1615(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1615\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1272[4];
    WData/*127:0*/ __Vtemp1273[4];
    WData/*127:0*/ __Vtemp1278[4];
    WData/*127:0*/ __Vtemp1279[4];
    WData/*1055:0*/ __Vtemp1287[33];
    WData/*1055:0*/ __Vtemp1288[33];
    WData/*127:0*/ __Vtemp1293[4];
    WData/*127:0*/ __Vtemp1294[4];
    WData/*127:0*/ __Vtemp1299[4];
    WData/*127:0*/ __Vtemp1300[4];
    WData/*1055:0*/ __Vtemp1308[33];
    WData/*1055:0*/ __Vtemp1309[33];
    // Body
    __Vtemp1272[0U] = 1U;
    __Vtemp1272[1U] = 0U;
    __Vtemp1272[2U] = 0U;
    __Vtemp1272[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp1273, __Vtemp1272, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source));
    __Vtemp1278[0U] = 1U;
    __Vtemp1278[1U] = 0U;
    __Vtemp1278[2U] = 0U;
    __Vtemp1278[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp1279, __Vtemp1278, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_757[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT__inflight[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp1273[0U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_691)
                                                ? __Vtemp1279[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_757[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT__inflight[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp1273[1U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_691)
                                                ? __Vtemp1279[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_757[2U] 
        = (0xffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT__inflight[2U] 
                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                           ? __Vtemp1273[2U] : 0U)) 
                      & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_691)
                             ? __Vtemp1279[2U] : 0U))));
    __Vtemp1287[0U] = 0xfU;
    __Vtemp1287[1U] = 0U;
    __Vtemp1287[2U] = 0U;
    __Vtemp1287[3U] = 0U;
    __Vtemp1287[4U] = 0U;
    __Vtemp1287[5U] = 0U;
    __Vtemp1287[6U] = 0U;
    __Vtemp1287[7U] = 0U;
    __Vtemp1287[8U] = 0U;
    __Vtemp1287[9U] = 0U;
    __Vtemp1287[0xaU] = 0U;
    __Vtemp1287[0xbU] = 0U;
    __Vtemp1287[0xcU] = 0U;
    __Vtemp1287[0xdU] = 0U;
    __Vtemp1287[0xeU] = 0U;
    __Vtemp1287[0xfU] = 0U;
    __Vtemp1287[0x10U] = 0U;
    __Vtemp1287[0x11U] = 0U;
    __Vtemp1287[0x12U] = 0U;
    __Vtemp1287[0x13U] = 0U;
    __Vtemp1287[0x14U] = 0U;
    __Vtemp1287[0x15U] = 0U;
    __Vtemp1287[0x16U] = 0U;
    __Vtemp1287[0x17U] = 0U;
    __Vtemp1287[0x18U] = 0U;
    __Vtemp1287[0x19U] = 0U;
    __Vtemp1287[0x1aU] = 0U;
    __Vtemp1287[0x1bU] = 0U;
    __Vtemp1287[0x1cU] = 0U;
    __Vtemp1287[0x1dU] = 0U;
    __Vtemp1287[0x1eU] = 0U;
    __Vtemp1287[0x1fU] = 0U;
    __Vtemp1287[0x20U] = 0U;
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp1288, __Vtemp1287, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___T_691) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0U] 
            = __Vtemp1288[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[1U] 
            = __Vtemp1288[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[2U] 
            = __Vtemp1288[2U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[3U] 
            = __Vtemp1288[3U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[4U] 
            = __Vtemp1288[4U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[5U] 
            = __Vtemp1288[5U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[6U] 
            = __Vtemp1288[6U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[7U] 
            = __Vtemp1288[7U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[8U] 
            = __Vtemp1288[8U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[9U] 
            = __Vtemp1288[9U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xaU] 
            = __Vtemp1288[0xaU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xbU] 
            = __Vtemp1288[0xbU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xcU] 
            = __Vtemp1288[0xcU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xdU] 
            = __Vtemp1288[0xdU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xeU] 
            = __Vtemp1288[0xeU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xfU] 
            = __Vtemp1288[0xfU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x10U] 
            = __Vtemp1288[0x10U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x11U] 
            = __Vtemp1288[0x11U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x12U] 
            = __Vtemp1288[0x12U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x13U] 
            = __Vtemp1288[0x13U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x14U] 
            = __Vtemp1288[0x14U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x15U] 
            = __Vtemp1288[0x15U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x16U] 
            = __Vtemp1288[0x16U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x17U] 
            = __Vtemp1288[0x17U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x18U] 
            = __Vtemp1288[0x18U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x19U] 
            = __Vtemp1288[0x19U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1aU] 
            = __Vtemp1288[0x1aU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1bU] 
            = __Vtemp1288[0x1bU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1cU] 
            = __Vtemp1288[0x1cU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1dU] 
            = __Vtemp1288[0x1dU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1eU] 
            = __Vtemp1288[0x1eU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1fU] 
            = __Vtemp1288[0x1fU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x20U] 
            = (0x7fffU & __Vtemp1288[0x20U]);
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[1U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[2U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[3U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[4U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[5U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[6U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[7U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[8U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[9U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xaU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xbU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xcU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xdU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xeU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xfU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x10U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x11U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x12U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x13U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x14U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x15U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x16U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x17U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x18U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x19U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1aU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1bU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1cU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1dU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1eU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1fU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x20U] = 0U;
    }
    __Vtemp1293[0U] = 1U;
    __Vtemp1293[1U] = 0U;
    __Vtemp1293[2U] = 0U;
    __Vtemp1293[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp1294, __Vtemp1293, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source));
    __Vtemp1299[0U] = 1U;
    __Vtemp1299[1U] = 0U;
    __Vtemp1299[2U] = 0U;
    __Vtemp1299[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp1300, __Vtemp1299, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_757[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT__inflight[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp1294[0U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_691)
                                                ? __Vtemp1300[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_757[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT__inflight[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp1294[1U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_691)
                                                ? __Vtemp1300[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_757[2U] 
        = (0xffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT__inflight[2U] 
                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_672)
                           ? __Vtemp1294[2U] : 0U)) 
                      & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_691)
                             ? __Vtemp1300[2U] : 0U))));
    __Vtemp1308[0U] = 0xfU;
    __Vtemp1308[1U] = 0U;
    __Vtemp1308[2U] = 0U;
    __Vtemp1308[3U] = 0U;
    __Vtemp1308[4U] = 0U;
    __Vtemp1308[5U] = 0U;
    __Vtemp1308[6U] = 0U;
    __Vtemp1308[7U] = 0U;
    __Vtemp1308[8U] = 0U;
    __Vtemp1308[9U] = 0U;
    __Vtemp1308[0xaU] = 0U;
    __Vtemp1308[0xbU] = 0U;
    __Vtemp1308[0xcU] = 0U;
    __Vtemp1308[0xdU] = 0U;
    __Vtemp1308[0xeU] = 0U;
    __Vtemp1308[0xfU] = 0U;
    __Vtemp1308[0x10U] = 0U;
    __Vtemp1308[0x11U] = 0U;
    __Vtemp1308[0x12U] = 0U;
    __Vtemp1308[0x13U] = 0U;
    __Vtemp1308[0x14U] = 0U;
    __Vtemp1308[0x15U] = 0U;
    __Vtemp1308[0x16U] = 0U;
    __Vtemp1308[0x17U] = 0U;
    __Vtemp1308[0x18U] = 0U;
    __Vtemp1308[0x19U] = 0U;
    __Vtemp1308[0x1aU] = 0U;
    __Vtemp1308[0x1bU] = 0U;
    __Vtemp1308[0x1cU] = 0U;
    __Vtemp1308[0x1dU] = 0U;
    __Vtemp1308[0x1eU] = 0U;
    __Vtemp1308[0x1fU] = 0U;
    __Vtemp1308[0x20U] = 0U;
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp1309, __Vtemp1308, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___T_691) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0U] 
            = __Vtemp1309[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[1U] 
            = __Vtemp1309[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[2U] 
            = __Vtemp1309[2U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[3U] 
            = __Vtemp1309[3U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[4U] 
            = __Vtemp1309[4U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[5U] 
            = __Vtemp1309[5U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[6U] 
            = __Vtemp1309[6U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[7U] 
            = __Vtemp1309[7U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[8U] 
            = __Vtemp1309[8U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[9U] 
            = __Vtemp1309[9U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0xaU] 
            = __Vtemp1309[0xaU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0xbU] 
            = __Vtemp1309[0xbU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0xcU] 
            = __Vtemp1309[0xcU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0xdU] 
            = __Vtemp1309[0xdU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0xeU] 
            = __Vtemp1309[0xeU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0xfU] 
            = __Vtemp1309[0xfU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x10U] 
            = __Vtemp1309[0x10U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x11U] 
            = __Vtemp1309[0x11U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x12U] 
            = __Vtemp1309[0x12U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x13U] 
            = __Vtemp1309[0x13U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x14U] 
            = __Vtemp1309[0x14U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x15U] 
            = __Vtemp1309[0x15U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x16U] 
            = __Vtemp1309[0x16U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x17U] 
            = __Vtemp1309[0x17U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x18U] 
            = __Vtemp1309[0x18U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x19U] 
            = __Vtemp1309[0x19U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x1aU] 
            = __Vtemp1309[0x1aU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x1bU] 
            = __Vtemp1309[0x1bU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x1cU] 
            = __Vtemp1309[0x1cU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x1dU] 
            = __Vtemp1309[0x1dU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x1eU] 
            = __Vtemp1309[0x1eU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x1fU] 
            = __Vtemp1309[0x1fU];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x20U] 
            = (0x7fffU & __Vtemp1309[0x20U]);
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[1U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[2U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[3U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[4U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[5U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[6U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[7U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[8U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[9U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0xaU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0xbU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0xcU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0xdU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0xeU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0xfU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x10U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x11U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x12U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x13U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x14U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x15U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x16U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x17U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x18U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x19U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x1aU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x1bU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x1cU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x1dU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x1eU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x1fU] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__TLMonitor__DOT___GEN_21[0x20U] = 0U;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___T_545 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___T_537) 
                  & (((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U))) 
                     >> 1U)) & (0U == (0x1fcU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___T_540 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___T_537) 
                    & ((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address 
                                             >> 3U)))) 
                   & (0U == (0x1fcU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_address 
                                       >> 3U)))));
}
