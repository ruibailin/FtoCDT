// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1953(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1953\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64808:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_142))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64819:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_142))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:64822: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 64822, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64830:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64841:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:64844: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 64844, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64852:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64863:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:64866: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 64866, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64874:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_155))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64885:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_155))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:64888: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 64888, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64896:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_mask)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64907:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_mask)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:64910: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 64910, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64918:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_142))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64929:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_142))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:64932: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 64932, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64940:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64951:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:64954: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 64954, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64962:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64973:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_size)) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:64976: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 64976, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64984:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_155))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:64995:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_155))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:64998: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 64998, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65006:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65017:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65020: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65020, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65028:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_mask)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65039:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_bits_mask)))) 
                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65042: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65042, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65050:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_317))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65061:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_317))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65064: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65064, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65072:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_155))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65083:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_155))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65086: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65086, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65094:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_331))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65105:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_331))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65108: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65108, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65116:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_399))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65127:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_399))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65130: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65130, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65138:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_155))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65149:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_155))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65152: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65152, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65160:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_331))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65171:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_331))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65174: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65174, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65182:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_399))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65193:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_399))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65196: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65196, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65204:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_155))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65215:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_155))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65218: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65218, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65226:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_493))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65237:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_493))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65240: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65240, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65248:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_557))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65259:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_557))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65262: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65262, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65270:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_155))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65281:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_155))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65284: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65284, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65292:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_331))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65303:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_331))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65306: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65306, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65314:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_557))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65325:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_557))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65328: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65328, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65336:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_155))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65347:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_155))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65350: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65350, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65358:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_331))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65369:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_331))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65372: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65372, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65380:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_713))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65391:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_713))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65394: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65394, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65402:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_155))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65413:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_155))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65416: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65416, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65424:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_331))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65435:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_331))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65438: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65438, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65446:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65457:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65460: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65460, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65468:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65479:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65482: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65482, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65490:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65501:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65504: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65504, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65512:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65523:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65526: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65526, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65534:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65545:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65548: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65548, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65556:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65567:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65570: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65570, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65578:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65589:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65592: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65592, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65600:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65611:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65614: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65614, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65622:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65633:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65636: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65636, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65644:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65655:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65658: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65658, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65666:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65677:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65680: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65680, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65688:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65699:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65702: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65702, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65710:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65721:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65724: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65724, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65732:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65743:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65746: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65746, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65754:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65765:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65768: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65768, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65776:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_810))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65787:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_810))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65790: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65790, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65798:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65809:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65812: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65812, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65820:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65831:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65834: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65834, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65842:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65853:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65856: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65856, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65864:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65875:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65878: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65878, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65886:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65897:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65900: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65900, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65908:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_810))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65919:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_810))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65922: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65922, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65930:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65941:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65944: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65944, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65952:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65963:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65966: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65966, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65974:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65985:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:65988: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 65988, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:65996:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_893))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_913))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66007:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_893))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_913))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:66010: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 66010, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66018:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_893))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_921))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66029:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_893))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_921))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:66032: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 66032, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66040:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_893))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_929))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66051:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_893))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_929))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:66054: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 66054, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66062:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_941))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_962))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66073:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_941))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_962))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:66076: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 66076, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66084:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_941))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_966))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66095:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_941))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_966))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:66098: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 66098, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66106:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_941))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_970))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66117:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_941))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_970))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:66120: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 66120, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66128:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_941))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_974))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66139:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_941))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_974))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:66142: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 66142, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66150:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_941))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_978))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66161:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_941))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_978))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:66164: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 66164, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66172:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_941))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_982))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66183:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_941))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_982))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:66186: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 66186, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66194:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1042) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT__inflight)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66205:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1042) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT__inflight)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:66208: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 66208, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66216:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1078) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1091))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66227:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1078) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1091))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:66230: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 66230, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66238:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1078) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1102) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66249:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1078) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1102) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:66252: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 66252, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66260:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1078) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1111))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66271:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1078) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1111))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:66274: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 66274, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66282:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1078) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_995))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1123))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66293:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1078) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_995))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__m_auto_out_a_valid)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1123))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:66296: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 66296, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66304:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1130))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 4 (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66315:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1130))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:66318: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 66318, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66326:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1149))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at CrossingHelper.scala:30:80)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:66337:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__TLMonitor__DOT___T_1149))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:66340: Assertion failed in %NTestHarness.dut.system.subsystem_fbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 66340, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1954(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1954\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_denied__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1955(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1955\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1956(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1956\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_index__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_extra_tlrr_extra_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_xcpt_ae_inst__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_xcpt_pf_inst__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__SimDRAM__DOT_____05Fw_ready_reg 
        = vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fw_ready_reg;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1957(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1957\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue_1__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__Queue__DOT__ram_source__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1958(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1958\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied__v0 = 0U;
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240751:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_226))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240762:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_226))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:240765: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 240765, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240773:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_244))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240784:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_244))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:240787: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 240787, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240795:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240806:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:240809: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 240809, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240817:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                               >> 0x14U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240828:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                               >> 0x14U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:240831: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 240831, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240839:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_254))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240850:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_254))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:240853: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 240853, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240861:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240872:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:240875: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 240875, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240883:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((0U == (0xffffU & (~ 
                                                  ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240894:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((0U == (0xffffU & (~ 
                                                  ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:240897: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 240897, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240905:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240916:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:240919: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 240919, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240927:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_226))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240938:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_226))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:240941: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 240941, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240949:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_244))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240960:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_244))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:240963: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 240963, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240971:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240982:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:240985: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 240985, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:240993:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                               >> 0x14U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241004:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                               >> 0x14U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241007: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241007, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241015:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_254))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241026:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_254))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241029: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241029, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241037:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241048:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241051: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241051, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241059:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241070:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241073: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241073, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241081:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((0U == (0xffffU & (~ 
                                                  ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241092:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((0U == (0xffffU & (~ 
                                                  ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241095: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241095, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241103:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241114:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241117: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241117, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241125:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_431))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241136:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_431))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241139: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241139, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241147:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241158:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241161: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241161, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241169:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_254))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241180:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_254))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241183: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241183, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241191:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241202:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241205: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241205, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241213:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_445))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241224:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_445))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241227: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241227, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241235:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241246:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241249: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241249, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241257:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_513))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241268:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_513))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241271: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241271, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241279:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241290:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241293: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241293, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241301:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_254))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241312:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_254))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241315: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241315, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241323:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241334:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241337: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241337, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241345:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_445))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241356:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_445))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241359: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241359, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241367:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_513))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241378:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_513))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241381: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241381, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241389:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241400:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241403: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241403, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241411:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_254))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241422:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_254))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241425: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241425, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241433:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241444:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241447: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241447, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241455:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_607))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241466:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_607))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241469: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241469, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241477:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_671))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241488:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_671))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241491: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241491, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241499:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241510:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241513: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241513, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241521:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_254))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241532:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_254))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241535: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241535, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241543:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241554:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241557: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241557, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241565:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_445))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241576:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_445))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241579: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241579, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241587:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_671))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241598:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_671))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241601: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241601, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241609:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241620:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241623: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241623, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241631:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_254))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241642:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_254))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241645: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241645, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241653:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241664:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241667: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241667, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241675:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_445))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241686:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_445))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241689: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241689, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241697:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_827))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241708:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_827))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241711: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241711, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241719:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241730:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241733: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241733, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241741:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_254))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241752:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_254))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241755: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241755, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241763:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241774:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                             >> 0x18U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241777: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241777, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241785:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_445))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241796:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_445))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241799: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241799, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241807:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241818:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                          >> 0x1bU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241821: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241821, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241829:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241840:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241843: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241843, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241851:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_865))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241862:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_865))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241865: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241865, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241873:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241884:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241887: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241887, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241895:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241906:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241909: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241909, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241917:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241928:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241931: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241931, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241939:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241950:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241953: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241953, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241961:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_865))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241972:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_865))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241975: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241975, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241983:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:241994:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:241997: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 241997, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242005:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242016:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242019: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242019, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242027:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242038:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242041: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242041, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242049:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242060:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242063: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242063, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242071:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_865))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242082:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_865))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242085: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242085, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242093:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242104:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242107: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242107, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242115:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242126:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242129: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242129, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242137:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242148:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242151: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242151, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242159:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_933))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242170:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_933))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242173: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242173, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242181:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_865))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242192:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_865))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242195: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242195, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242203:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242214:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242217: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242217, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242225:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242236:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242239: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242239, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242247:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_865))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242258:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_865))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242261: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242261, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242269:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242280:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242283: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242283, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242291:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_933))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242302:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_933))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242305: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242305, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242313:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_865))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242324:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_865))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242327: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242327, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242335:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242346:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242349: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242349, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242357:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242368:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242371: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242371, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242379:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel has invalid opcode (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242390:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242393: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242393, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242401:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1232))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries Probe type unsupported by client (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242412:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1232))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242415: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242415, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242423:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1235))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries unmanaged address (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242434:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1235))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242437: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242437, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242445:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1238))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries source that is not first source (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242456:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1238))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242459: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242459, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242467:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1241))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242478:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1241))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242481: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242481, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242489:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries invalid cap param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242500:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242503: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242503, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242511:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1249))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe contains invalid mask (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242522:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1249))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242525: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242525, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242533:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe is corrupt (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242544:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242547: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242547, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242555:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries Get type unsupported by client (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242566:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242569: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242569, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242577:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1235))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Get carries unmanaged address (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242588:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1235))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242591: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242591, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242599:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1238))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Get carries source that is not first source (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242610:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1238))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242613: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242613, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242621:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1241))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Get address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242632:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1241))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242635: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242635, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242643:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Get carries invalid param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242654:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242657: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242657, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242665:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1249))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Get contains invalid mask (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242676:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1249))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242679: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242679, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242687:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Get is corrupt (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242698:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242701: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242701, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242709:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries PutFull type unsupported by client (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242720:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242723: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242723, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242731:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1235))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutFull carries unmanaged address (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242742:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1235))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242745: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242745, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242753:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1238))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutFull carries source that is not first source (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242764:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1238))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242767: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242767, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242775:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1241))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutFull address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242786:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1241))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242789: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242789, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242797:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutFull carries invalid param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242808:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242811: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242811, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242819:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1249))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutFull contains invalid mask (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242830:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1249))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242833: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242833, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242841:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries PutPartial type unsupported by client (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242852:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242855: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242855, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242863:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1235))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutPartial carries unmanaged address (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242874:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1235))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242877: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242877, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242885:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1238))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutPartial carries source that is not first source (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242896:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1238))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242899: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242899, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242907:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1241))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutPartial address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242918:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1241))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242921: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242921, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242929:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutPartial carries invalid param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242940:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242943: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242943, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242951:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1322))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutPartial contains invalid mask (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242962:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1322))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242965: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242965, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242973:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries Arithmetic type unsupported by client (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242984:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:242987: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 242987, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:242995:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1235))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Arithmetic carries unmanaged address (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243006:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1235))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243009: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243009, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243017:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1238))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Arithmetic carries source that is not first source (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243028:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1238))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243031: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243031, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243039:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1241))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Arithmetic address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243050:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1241))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243053: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243053, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243061:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1249))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Arithmetic contains invalid mask (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243072:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1249))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243075: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243075, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243083:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries Logical type unsupported by client (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243094:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243097: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243097, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243105:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1235))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Logical carries unmanaged address (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243116:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1235))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243119: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243119, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243127:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1238))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Logical carries source that is not first source (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243138:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1238))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243141: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243141, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243149:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1241))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Logical address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243160:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1241))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243163: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243163, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243171:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1249))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Logical contains invalid mask (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243182:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1249))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243185: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243185, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243193:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries Hint type unsupported by client (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243204:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243207: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243207, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243215:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1235))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Hint carries unmanaged address (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243226:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1235))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243229: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243229, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243237:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1238))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Hint carries source that is not first source (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243248:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1238))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243251: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243251, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243259:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1241))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Hint address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243270:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1241))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243273: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243273, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243281:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1249))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Hint contains invalid mask (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243292:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1249))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243295: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243295, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243303:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Hint is corrupt (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243314:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T_1]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243317: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243317, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243325:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1485))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243336:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1485))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243339: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243339, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243347:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1488))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243358:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1488))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243361: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243361, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243369:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243380:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243383: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243383, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243391:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1495))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243402:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1495))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243405: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243405, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243413:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((5U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                             >> 8U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243424:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((5U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                             >> 8U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243427: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243427, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243435:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck is corrupt (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243446:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243449: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243449, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243457:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1485))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243468:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1485))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243471: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243471, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243479:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1488))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243490:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1488))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243493: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243493, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243501:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243512:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243515: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243515, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243523:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1495))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243534:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1495))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243537: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243537, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243545:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((5U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                             >> 8U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243556:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((5U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                             >> 8U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243559: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243559, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243567:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1578))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243578:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1578))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243581: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243581, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243589:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1596))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243600:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1596))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243603: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243603, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243611:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1488))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243622:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1488))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243625: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243625, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243633:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243644:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243647: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243647, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243655:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1495))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243666:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1495))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243669: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243669, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243677:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                             >> 8U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid shrink param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243688:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                             >> 8U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243691: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243691, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243699:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release is corrupt (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243710:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243713: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243713, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243721:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1578))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243732:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1578))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243735: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243735, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243743:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1596))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243754:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1596))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243757: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243757, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243765:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1488))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243776:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1488))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243779: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243779, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243787:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243798:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                               >> 4U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243801: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243801, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243809:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1495))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243820:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1495))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243823: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243823, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243831:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                             >> 8U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid shrink param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243842:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                             >> 8U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243845: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243845, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243853:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1485))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243864:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1485))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243867: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243867, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243875:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1488))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243886:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1488))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243889: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243889, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243897:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1495))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243908:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1495))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243911: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243911, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243919:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                             >> 8U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243930:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                             >> 8U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243933: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243933, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243941:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck is corrupt (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243952:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243955: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243955, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243963:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1485))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243974:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1485))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243977: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243977, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243985:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1488))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:243996:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1488))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:243999: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 243999, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244007:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1495))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244018:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1495))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244021: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244021, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244029:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                             >> 8U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244040:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                             >> 8U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244043: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244043, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244051:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1485))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244062:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1485))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244065: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244065, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244073:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1488))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244084:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1488))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244087: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244087, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244095:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1495))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244106:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1495))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244109: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244109, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244117:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                             >> 8U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244128:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                             >> 8U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244131: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244131, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244139:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck is corrupt (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244150:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                                          >> 0xbU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244153: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244153, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244161:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1768))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1788))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244172:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1768))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1788))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244175: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244175, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244183:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1768))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1792))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244194:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1768))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1792))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244197: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244197, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244205:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1768))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1796))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244216:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1768))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1796))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244219: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244219, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244227:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1768))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1800))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244238:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1768))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1800))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244241: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244241, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244249:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1768))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1804))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244260:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1768))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1804))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244263: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244263, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244271:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1816))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1837))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244282:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1816))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1837))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244285: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244285, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244293:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1816))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1841))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244304:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1816))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1841))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244307: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244307, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244315:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1816))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1845))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244326:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1816))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1845))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244329: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244329, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244337:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1816))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1849))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244348:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1816))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1849))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244351: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244351, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244359:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1816))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1853))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244370:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1816))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1853))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244373: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244373, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244381:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1816))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1857))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244392:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1816))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1857))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244395: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244395, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244403:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1870))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1890))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel opcode changed within multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244414:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1870))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1890))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244417: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244417, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244425:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1870))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1894))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel param changed within multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244436:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1870))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1894))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244439: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244439, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244447:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1870))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1898))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel size changed within multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244458:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1870))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1898))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244461: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244461, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244469:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1870))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1902))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel source changed within multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244480:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1870))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1902))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244483: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244483, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244491:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1870))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1906))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel addresss changed with multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244502:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1870))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1906))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244505: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244505, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244513:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1918))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1938))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244524:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1918))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1938))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244527: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244527, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244535:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1918))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1942))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244546:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1918))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1942))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244549: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244549, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244557:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1918))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1946))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244568:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1918))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1946))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244571: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244571, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244579:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1918))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1950))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244590:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1918))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1950))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244593: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244593, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244601:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1918))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1954))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244612:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1918))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1954))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244615: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244615, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244623:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2014) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2029))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244634:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2014) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2029))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244637: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244637, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244645:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2050) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2063))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244656:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2050) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2063))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244659: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244659, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244667:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2050) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2074) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244678:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2050) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2074) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244681: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244681, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244689:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2050) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2083))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244700:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2050) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2083))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244703: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244703, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244711:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2050) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1967))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2056)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2095))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244722:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2050) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1967))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2056)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2095))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244725: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244725, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244733:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2102))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 4 (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244744:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2102))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244747: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244747, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244755:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2121))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244766:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2121))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244769: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244769, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244777:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1808) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2137))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
                              >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
                                           >> 1U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2161))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at tile.scala:138:21)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244788:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1808) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2137))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
                              >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
                                           >> 1U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2161))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244791: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244791, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244799:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT__full)) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_finish_valid)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2172))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at tile.scala:138:21)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:244810:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT__full)) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_finish_valid)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2172))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:244813: Assertion failed in %NTestHarness.dut.system.boom_tile.tlMasterXbar.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 244813, "");
        }
    }
}
