// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1988(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1988\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84180:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84191:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84194: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84194, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84202:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_204))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84213:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_204))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84216: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84216, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84224:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_207))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84235:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_207))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84238: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84238, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84246:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                               >> 0xdU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84257:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                               >> 0xdU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84260: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84260, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84268:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84279:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84282: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84282, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84290:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84301:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84304: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84304, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84312:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84323:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84326: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84326, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84334:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84345:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84348: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84348, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84356:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84367:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84370: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84370, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84378:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_204))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84389:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_204))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84392: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84392, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84400:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_207))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84411:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_207))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84414: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84414, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84422:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                               >> 0xdU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84433:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                               >> 0xdU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84436: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84436, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84444:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84455:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84458: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84458, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84466:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84477:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84480: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84480, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84488:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84499:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84502: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84502, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84510:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84521:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (0xffU & (~ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84524: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84524, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84532:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84543:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84546: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84546, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84554:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_382))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84565:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_382))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84568: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84568, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84576:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_207))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84587:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_207))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84590: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84590, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84598:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84609:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84612: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84612, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84620:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84631:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84634: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84634, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84642:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_396))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84653:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_396))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84656: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84656, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84664:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84675:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84678: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84678, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84686:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_458))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84697:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_458))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84700: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84700, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84708:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_207))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84719:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_207))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84722: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84722, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84730:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84741:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84744: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84744, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84752:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84763:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84766: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84766, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84774:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_396))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84785:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_396))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84788: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84788, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84796:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_458))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84807:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_458))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84810: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84810, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84818:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_207))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84829:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_207))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84832: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84832, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84840:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84851:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84854: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84854, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84862:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84873:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84876: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84876, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84884:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_546))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84895:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_546))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84898: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84898, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84906:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_599))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84917:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_599))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84920: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84920, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84928:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_207))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84939:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_207))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84942: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84942, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84950:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84961:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84964: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84964, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84972:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84983:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:84986: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 84986, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:84994:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_396))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85005:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_396))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85008: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85008, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85016:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_599))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85027:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_599))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85030: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85030, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85038:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_207))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85049:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_207))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85052: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85052, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85060:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85071:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85074: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85074, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85082:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85093:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85096: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85096, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85104:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_396))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85115:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_396))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85118: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85118, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85126:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_338) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85137:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_338) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85140: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85140, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85148:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_207))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85159:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_207))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85162: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85162, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85170:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85181:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85184: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85184, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85192:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85203:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                             >> 0x11U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85206: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85206, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85214:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_396))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85225:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_396))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85228: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85228, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85236:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85247:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85250: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85250, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85258:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85269:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85272: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85272, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85280:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_775))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85291:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_775))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85294: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85294, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85302:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85313:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85316: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85316, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85324:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85335:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85338: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85338, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85346:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85357:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85360: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85360, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85368:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85379:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85382: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85382, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85390:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_775))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85401:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_775))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85404: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85404, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85412:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85423:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85426: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85426, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85434:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85445:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85448: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85448, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85456:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85467:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85470: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85470, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85478:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85489:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85492: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85492, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85500:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85511:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85514: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85514, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85522:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_775))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85533:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_775))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85536: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85536, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85544:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85555:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85558: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85558, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85566:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85577:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85580: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85580, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85588:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85599:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85602: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85602, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85610:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85621:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85624: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85624, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85632:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_843))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85643:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_843))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85646: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85646, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85654:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_775))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85665:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_775))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85668: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85668, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85676:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85687:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85690: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85690, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85698:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85709:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85712: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85712, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85720:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_775))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85731:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_775))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85734: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85734, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85742:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85753:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85756: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85756, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85764:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_843))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85775:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_843))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85778: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85778, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85786:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_775))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85797:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_775))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85800: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85800, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85808:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85819:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85822: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85822, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85830:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85841:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85844: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85844, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85852:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_926))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_946))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85863:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_926))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_946))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85866: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85866, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85874:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_926))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_950))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85885:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_926))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_950))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85888: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85888, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85896:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_926))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_954))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85907:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_926))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_954))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85910: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85910, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85918:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_926))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_958))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85929:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_926))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_958))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85932: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85932, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85940:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_926))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_962))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85951:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_926))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_962))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85954: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85954, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85962:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_974))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_995))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85973:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_974))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_995))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85976: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85976, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85984:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_974))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_999))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:85995:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_974))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_999))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:85998: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 85998, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86006:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_974))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1003))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86017:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_974))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1003))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:86020: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 86020, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86028:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_974))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1007))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86039:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_974))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1007))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:86042: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 86042, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86050:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_974))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1011))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86061:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_974))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1011))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:86064: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 86064, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86072:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_974))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1015))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86083:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_974))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1015))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:86086: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 86086, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86094:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1075) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1090))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86105:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1075) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1090))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:86108: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 86108, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86116:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1111) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86127:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1111) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:86130: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 86130, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86138:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1111) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1135) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86149:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1111) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1135) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:86152: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 86152, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86160:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1111) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1144))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86171:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1111) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1144))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:86174: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 86174, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86182:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1111) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1028))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1117)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1156))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86193:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1111) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1028))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1117)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1156))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:86196: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 86196, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86204:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1163))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86215:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1163))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:86218: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 86218, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86226:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1182))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:86237:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1182))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:86240: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 86240, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1989(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1989\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_xcpt_ae_if__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_xcpt_pf_if__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_offset__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_cfi_idx_valid__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1998(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1998\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_tag__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2000(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2000\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2001(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2001\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_control__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT__ram_address__v0 = 0U;
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:191858:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_114))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:191869:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_114))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:191872: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 191872, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:191880:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:191891:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:191894: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 191894, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:191902:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:191913:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:191916: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 191916, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:191924:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:191935:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:191938: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 191938, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:191946:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_128))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:191957:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_128))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:191960: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 191960, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:191968:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:191979:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:191982: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 191982, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:191990:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192001:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192004: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192004, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192012:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192023:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192026: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192026, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192034:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_114))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192045:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_114))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192048: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192048, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192056:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192067:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192070: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192070, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192078:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192089:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192092: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192092, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192100:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192111:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192114: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192114, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192122:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_128))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192133:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_128))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192136: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192136, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192144:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192155:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192158: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192158, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192166:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192177:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192180: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192180, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192188:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192199:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192202: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192202, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192210:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192221:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192224: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192224, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192232:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_114))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192243:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_114))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192246: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192246, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192254:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192265:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192268: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192268, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192276:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_128))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192287:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_128))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192290: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192290, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192298:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192309:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192312: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192312, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192320:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_216))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192331:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_216))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192334: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192334, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192342:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192353:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192356: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192356, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192364:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_114))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192375:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_114))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192378: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192378, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192386:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192397:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192400: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192400, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192408:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_128))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192419:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_128))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192422: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192422, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192430:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192441:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192444: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192444, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192452:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_216))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192463:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_216))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192466: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192466, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192474:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_114))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192485:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_114))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192488: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192488, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192496:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192507:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192510: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192510, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192518:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_128))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192529:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_128))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192532: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192532, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192540:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192551:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192554: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192554, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192562:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_280))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192573:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_280))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192576: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192576, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192584:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192595:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192598: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192598, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192606:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192617:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192620: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192620, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192628:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_128))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192639:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_128))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192642: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192642, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192650:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192661:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192664: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192664, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192672:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_216))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192683:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_216))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192686: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192686, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192694:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192705:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192708: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192708, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192716:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192727:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192730: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192730, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192738:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_128))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192749:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_128))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192752: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192752, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192760:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192771:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192774: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192774, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192782:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_216))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192793:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_216))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192796: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192796, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192804:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192815:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192818: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192818, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192826:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192837:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_source___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192840: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192840, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192848:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_128))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192859:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_128))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192862: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192862, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192870:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192881:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192884: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192884, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192892:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_216))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192903:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_216))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192906: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192906, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192914:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192925:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192928: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192928, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192936:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                         & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192947:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                         & (~ ((6U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xeU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192950: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192950, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192958:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                               >> 5U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192969:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                               >> 5U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192972: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192972, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192980:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:192991:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:192994: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 192994, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193002:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193013:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193016: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193016, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193024:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193035:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193038: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193038, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193046:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                   >> 1U)) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193057:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                   >> 1U)) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193060: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193060, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193068:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                               >> 5U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193079:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                               >> 5U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193082: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193082, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193090:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193101:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193104: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193104, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193112:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193123:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193126: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193126, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193134:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193145:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193148: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193148, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193156:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193167:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193170: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193170, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193178:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                               >> 5U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193189:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                               >> 5U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193192: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193192, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193200:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193211:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((3U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 9U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193214: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193214, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193222:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193233:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((2U >= (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193236: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193236, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193244:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193255:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((2U != (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193258: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193258, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193266:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_448))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193277:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_448))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193280: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193280, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193288:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                               >> 5U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193299:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                               >> 5U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193302: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193302, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193310:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193321:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193324: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193324, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193332:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193343:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193346: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193346, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193354:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                               >> 5U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193365:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                               >> 5U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193368: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193368, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193376:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193387:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193390: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193390, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193398:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_448))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193409:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_448))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193412: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193412, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193420:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                               >> 5U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193431:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((9U >= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                               >> 5U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193434: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193434, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193442:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193453:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                             >> 0xcU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193456: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193456, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193464:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193475:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193478: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193478, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193486:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((0ULL == (0x1f0000000ULL 
                                         & (QData)((IData)(
                                                           (0x80000000U 
                                                            ^ 
                                                            (0x80000000U 
                                                             | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data)))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193497:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((0ULL == (0x1f0000000ULL 
                                         & (QData)((IData)(
                                                           (0x80000000U 
                                                            ^ 
                                                            (0x80000000U 
                                                             | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data)))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193500: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193500, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193508:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_source___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193519:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_source___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193522: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193522, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193530:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193541:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193544: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193544, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193552:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_828))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193563:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_828))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193566: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193566, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193574:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_param___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193585:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_param___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193588: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193588, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193596:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193607:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193610: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193610, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193618:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((0ULL == (0x1f0000000ULL 
                                         & (QData)((IData)(
                                                           (0x80000000U 
                                                            ^ 
                                                            (0x80000000U 
                                                             | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data)))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193629:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((0ULL == (0x1f0000000ULL 
                                         & (QData)((IData)(
                                                           (0x80000000U 
                                                            ^ 
                                                            (0x80000000U 
                                                             | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data)))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193632: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193632, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193640:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_source___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193651:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_source___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193654: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193654, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193662:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193673:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193676: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193676, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193684:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_828))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193695:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_828))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193698: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193698, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193706:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_param___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193717:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_param___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193720: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193720, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193728:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_869))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193739:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_869))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193742: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193742, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193750:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193761:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193764: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193764, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193772:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_source___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193783:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_source___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193786: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193786, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193794:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193805:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193808: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193808, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193816:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_828))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193827:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_828))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193830: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193830, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193838:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_param___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid shrink param (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193849:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_param___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193852: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193852, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193860:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193871:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193874: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193874, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193882:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_869))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193893:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_869))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193896: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193896, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193904:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193915:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193918: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193918, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193926:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_source___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193937:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_source___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193940: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193940, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193948:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193959:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_size___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193962: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193962, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193970:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_828))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193981:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_828))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:193984: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 193984, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:193992:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_param___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid shrink param (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194003:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_param___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194006: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194006, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194014:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((0ULL == (0x1f0000000ULL 
                                         & (QData)((IData)(
                                                           (0x80000000U 
                                                            ^ 
                                                            (0x80000000U 
                                                             | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data)))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194025:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((0ULL == (0x1f0000000ULL 
                                         & (QData)((IData)(
                                                           (0x80000000U 
                                                            ^ 
                                                            (0x80000000U 
                                                             | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data)))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194028: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194028, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194036:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_source___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194047:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_source___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194050: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194050, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194058:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_828))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194069:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_828))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194072: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194072, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194080:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_param___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194091:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_param___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194094: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194094, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194102:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194113:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194116: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194116, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194124:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((0ULL == (0x1f0000000ULL 
                                         & (QData)((IData)(
                                                           (0x80000000U 
                                                            ^ 
                                                            (0x80000000U 
                                                             | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data)))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194135:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((0ULL == (0x1f0000000ULL 
                                         & (QData)((IData)(
                                                           (0x80000000U 
                                                            ^ 
                                                            (0x80000000U 
                                                             | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data)))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194138: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194138, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194146:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_source___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194157:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_source___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194160: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194160, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194168:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_828))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194179:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_828))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194182: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194182, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194190:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_param___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194201:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_param___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194204: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194204, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194212:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((0ULL == (0x1f0000000ULL 
                                         & (QData)((IData)(
                                                           (0x80000000U 
                                                            ^ 
                                                            (0x80000000U 
                                                             | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data)))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194223:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((0ULL == (0x1f0000000ULL 
                                         & (QData)((IData)(
                                                           (0x80000000U 
                                                            ^ 
                                                            (0x80000000U 
                                                             | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data)))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194226: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194226, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194234:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_source___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194245:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((9U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_source___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194248: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194248, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194256:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_828))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194267:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_828))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194270: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194270, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194278:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_param___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194289:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_param___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194292: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194292, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194300:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck is corrupt (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194311:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode___05FT_11_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt___05FT_11_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194314: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194314, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194322:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_989))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1009))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194333:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_989))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1009))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194336: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194336, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194344:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_989))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1013))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194355:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_989))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1013))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194358: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194358, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194366:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_989))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1017))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194377:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_989))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1017))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194380: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194380, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194388:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_989))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1021))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194399:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_989))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1021))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194402: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194402, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194410:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_989))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1025))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194421:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_989))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1025))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194424: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194424, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194432:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1037))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1058))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194443:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1037))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1058))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194446: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194446, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194454:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1037))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1062))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194465:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1037))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1062))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194468: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194468, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194476:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1037))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1066))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194487:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1037))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1066))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194490: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194490, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194498:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1037))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1070))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194509:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1037))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1070))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194512: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194512, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194520:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1037))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1074))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194531:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1037))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1074))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194534: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194534, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194542:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1037))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1078))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194553:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1037))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1078))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194556: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194556, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194564:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1139))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1159))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194575:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1139))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1159))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194578: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194578, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194586:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1139))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1163))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194597:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1139))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1163))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194600: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194600, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194608:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1139))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1167))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194619:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1139))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1167))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194622: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194622, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194630:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1139))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1171))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194641:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1139))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1171))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194644: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194644, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194652:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1139))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1175))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194663:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1139))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1175))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194666: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194666, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194674:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1235) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1250))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194685:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1235) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1250))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194688: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194688, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194696:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1271) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1284))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194707:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1271) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1284))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194710: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194710, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194718:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1271) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1295) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194729:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1271) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1295) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194732: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194732, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194740:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1271) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1304))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194751:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1271) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1304))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194754: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194754, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194762:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1271) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1188))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty))) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1277)) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1316))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194773:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1271) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1188))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__empty))) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1277)) 
                          & (6U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                          >> 0xeU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1316))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194776: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194776, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194784:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1323))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194795:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1323))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194798: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194798, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194806:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1342))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194817:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1342))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194820: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194820, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194828:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1029) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1358))) 
                          & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                              >> 0x10U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                              >> 0xfU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1382))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at Configs.scala:117:34)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194839:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1029) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1358))) 
                          & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                              >> 0x10U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_391[2U] 
                                              >> 0xfU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1382))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194842: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194842, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194850:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1393)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at Configs.scala:117:34)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:194861:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceE__DOT__Queue__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1393)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:194864: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 194864, "");
        }
    }
}
