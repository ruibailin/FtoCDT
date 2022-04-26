// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1980(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1980\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_br_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 = 0U;
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212329:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212340:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212343: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212343, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212351:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212362:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212365: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212365, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212373:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212384:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212387: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212387, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212395:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212406:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212409: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212409, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212417:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212428:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212431: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212431, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212439:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212450:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212453: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212453, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212461:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212472:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212475: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212475, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212483:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_137))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212494:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_137))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212497: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212497, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212505:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212516:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212519: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212519, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212527:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212538:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212541: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212541, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212549:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212560:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212563: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212563, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212571:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212582:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212585: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212585, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212593:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212604:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212607: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212607, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212615:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212626:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212629: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212629, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212637:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212648:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212651: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212651, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212659:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212670:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212673: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212673, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212681:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_137))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212692:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_137))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212695: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212695, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212703:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x7ff0000U & 
                                       (0x2000000U 
                                        ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212714:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x7ff0000U & 
                                       (0x2000000U 
                                        ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212717: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212717, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212725:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212736:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212739: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212739, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212747:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212758:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212761: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212761, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212769:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212780:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212783: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212783, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212791:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212802:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212805: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212805, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212813:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_137))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212824:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_137))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212827: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212827, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212835:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x7ff0000U & 
                                       (0x2000000U 
                                        ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212846:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x7ff0000U & 
                                       (0x2000000U 
                                        ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212849: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212849, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212857:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212868:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212871: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212871, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212879:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212890:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212893: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212893, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212901:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212912:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212915: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212915, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212923:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212934:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212937: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212937, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212945:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x7ff0000U & 
                                       (0x2000000U 
                                        ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212956:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x7ff0000U & 
                                       (0x2000000U 
                                        ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212959: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212959, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212967:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212978:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:212981: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 212981, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:212989:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213000:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213003: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213003, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213011:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213022:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213025: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213025, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213033:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_272))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213044:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_272))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213047: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213047, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213055:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213066:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213069: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213069, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213077:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213088:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213091: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213091, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213099:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213110:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213113: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213113, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213121:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213132:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213135: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213135, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213143:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213154:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213157: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213157, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213165:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213176:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213179: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213179, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213187:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213198:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213201: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213201, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213209:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213220:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213223: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213223, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213231:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213242:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213245: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213245, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213253:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213264:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213267: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213267, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213275:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213286:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213289: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213289, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213297:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213308:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213311: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213311, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213319:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213330:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213333: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213333, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213341:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213352:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213355: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213355, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213363:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213374:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213377: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213377, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213385:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_137))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213396:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_137))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213399: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213399, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213605:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at CLINT.scala:111:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213616:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213619: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213619, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213627:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at CLINT.scala:111:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213638:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213641: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213641, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213671:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_543))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213682:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_543))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213685: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213685, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213693:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_547))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213704:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_547))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213707: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213707, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213715:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_551))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213726:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_551))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213729: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213729, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213737:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_555))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213748:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_555))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213751: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213751, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213759:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_559))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213770:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_559))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213773: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213773, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213781:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_592))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at CLINT.scala:111:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213792:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_592))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213795: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213795, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213803:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_600))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at CLINT.scala:111:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213814:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_600))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213817: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213817, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213825:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_604))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at CLINT.scala:111:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213836:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_604))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213839: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213839, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213847:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_687))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213858:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_687))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213861: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213861, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213869:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_643))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_721))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CLINT.scala:111:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213880:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_643))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_721))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213883: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213883, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213891:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_643))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_732) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at CLINT.scala:111:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213902:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_643))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_732) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213905: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213905, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213913:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_643))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_741))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CLINT.scala:111:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213924:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_643))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_741))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213927: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213927, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213935:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_643))) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_625))) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_753))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213946:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_643))) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_625))) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_753))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213949: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213949, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213957:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_772))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at CLINT.scala:111:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:213968:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_772))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:213971: Assertion failed in %NTestHarness.dut.system.clint.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 213971, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1981(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1981\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:195896:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_115))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at CacheCork.scala:100 assert (!in.c.valid || in.c.bits.opcode === Release || in.c.bits.opcode === ReleaseData)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:195907:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_115))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:195910: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 195910, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:195918:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_230))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:69 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:195929:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_230))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:195932: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 195932, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:195940:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_237))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:71 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:195951:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_237))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:195954: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 195954, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:195962:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_330))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:69 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:195973:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_330))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:195976: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 195976, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:195984:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_339))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:71 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:195995:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_339))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:195998: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 195998, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1982(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1982\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_put__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_2__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_param__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1983(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1983\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1987(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1987\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__head__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__head__v1 = 0U;
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18602:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18613:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18616: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18616, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18624:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18635:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18638: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18638, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18646:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_266))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18657:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_266))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18660: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18660, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18668:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                               >> 0x16U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18679:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                               >> 0x16U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18682: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18682, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18690:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_273))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18701:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_273))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18704: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18704, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18712:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18723:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18726: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18726, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18734:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (0xffffU & (~ 
                                                  ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[4U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18745:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (0xffffU & (~ 
                                                  ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[4U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18748: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18748, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18756:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18767:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18770: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18770, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18778:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18789:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18792: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18792, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18800:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18811:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18814: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18814, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18822:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_266))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18833:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_266))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18836: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18836, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18844:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                               >> 0x16U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18855:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                               >> 0x16U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18858: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18858, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18866:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_273))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18877:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_273))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18880: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18880, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18888:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18899:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18902: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18902, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18910:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18921:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18924: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18924, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18932:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (0xffffU & (~ 
                                                  ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[4U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18943:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (0xffffU & (~ 
                                                  ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[4U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18946: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18946, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18954:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18965:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18968: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18968, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18976:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_441))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18987:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_441))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:18990: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 18990, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:18998:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_266))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19009:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_266))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19012: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19012, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19020:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_273))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19031:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_273))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19034: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19034, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19042:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19053:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19056: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19056, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19064:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_455))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19075:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_455))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19078: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19078, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19086:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19097:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19100: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19100, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19108:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_517))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19119:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_517))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19122: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19122, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19130:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_266))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19141:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_266))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19144: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19144, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19152:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_273))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19163:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_273))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19166: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19166, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19174:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19185:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19188: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19188, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19196:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_455))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19207:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_455))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19210: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19210, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19218:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_517))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19229:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_517))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19232: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19232, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19240:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_266))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19251:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_266))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19254: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19254, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19262:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_273))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19273:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_273))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19276: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19276, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19284:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19295:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19298: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19298, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19306:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_605))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19317:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_605))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19320: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19320, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19328:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_658))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19339:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_658))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19342: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19342, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19350:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_266))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19361:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_266))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19364: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19364, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19372:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_273))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19383:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_273))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19386: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19386, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19394:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19405:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19408: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19408, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19416:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_455))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19427:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_455))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19430: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19430, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19438:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_658))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19449:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_658))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19452: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19452, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19460:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_266))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19471:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_266))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19474: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19474, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19482:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_273))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19493:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_273))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19496: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19496, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19504:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19515:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19518: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19518, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19526:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_455))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19537:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_455))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19540: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19540, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19548:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_397) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19559:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_397) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19562: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19562, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19570:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_266))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19581:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_266))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19584: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19584, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19592:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_273))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19603:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_273))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19606: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19606, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19614:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19625:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19628: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19628, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19636:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_455))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19647:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_455))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19650: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19650, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19658:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19669:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_361[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19672: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19672, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19680:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19691:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19694: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19694, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19702:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_834))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19713:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_834))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19716: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19716, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19724:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19735:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19738: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19738, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19746:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19757:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19760: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19760, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19768:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19779:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19782: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19782, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19790:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19801:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19804: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19804, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19812:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_834))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19823:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_834))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19826: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19826, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19834:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19845:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19848: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19848, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19856:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19867:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19870: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19870, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19878:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19889:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19892: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19892, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19900:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19911:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19914: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19914, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19922:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19933:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19936: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19936, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19944:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_834))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19955:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_834))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19958: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19958, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19966:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19977:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:19980: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 19980, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19988:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:19999:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20002: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20002, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20010:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20021:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20024: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20024, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20032:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20043:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20046: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20046, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20054:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_902))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20065:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_902))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20068: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20068, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20076:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_834))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20087:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_834))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20090: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20090, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20098:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20109:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20112: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20112, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20120:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20131:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20134: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20134, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20142:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_834))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20153:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_834))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20156: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20156, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20164:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20175:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20178: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20178, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20186:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_902))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20197:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_902))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20200: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20200, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20208:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_834))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20219:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_834))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20222: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20222, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20230:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20241:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20244: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20244, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20252:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20263:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20266: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20266, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20274:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1005))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20285:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1005))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20288: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20288, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1009))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1009))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20310: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20310, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20318:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1013))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20329:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1013))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20332: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20332, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20340:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1017))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20351:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1017))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20354: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20354, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20362:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1021))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20373:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1021))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20376: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20376, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20384:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1054))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20395:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1054))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20398: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20398, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20406:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1058))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20417:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1058))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20420: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20420, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20428:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1062))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20439:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1062))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20442: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20442, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20450:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1066))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20461:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1066))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20464: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20464, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20472:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1070))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20483:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1070))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20486: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20486, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20494:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1074))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20505:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1074))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20508: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20508, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20516:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1134) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1149))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20527:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1134) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1149))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20530: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20530, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20538:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1170) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1183))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20549:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1170) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1183))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20552: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20552, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20560:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1170) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1194) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20571:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1170) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1194) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20574: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20574, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20582:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1170) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1203))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20593:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1170) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1203))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20596: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20596, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20604:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1170) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1087))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1176)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1215))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20615:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1170) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1087))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1176)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1215))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20618: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20618, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20626:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1222))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20637:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1222))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20640: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20640, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20648:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1241))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:20659:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1241))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:20662: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 20662, "");
        }
    }
}
