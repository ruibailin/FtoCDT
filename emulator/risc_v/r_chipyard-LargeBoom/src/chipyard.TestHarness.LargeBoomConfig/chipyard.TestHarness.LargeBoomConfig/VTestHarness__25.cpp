// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2061(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2061\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167027:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:102 assert (!meta.clients.orR)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167038:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167041: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167041, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167049:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:103 assert (!meta.dirty)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167060:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167063: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167063, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167071:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:106 assert (!meta.dirty)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167082:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167085: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167085, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167093:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:109 assert (meta.clients.orR)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167104:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167107: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167107, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167115:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_25))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:110 assert ((meta.clients & (meta.clients - UInt(1))) === UInt(0)) // at most one\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167126:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_25))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167129: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167129, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167137:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_59))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:176 assert (!io.status.bits.nestB || !io.status.bits.blockB)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167148:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_59))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167151: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167151, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167159:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_65))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:177 assert (!io.status.bits.nestC || !io.status.bits.blockC)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167170:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_65))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167173: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167173, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167181:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__bad_grant) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_hit)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_170))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:251 assert (!meta_valid || meta.state === BRANCH)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167192:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__bad_grant) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_hit)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_170))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167195: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167195, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167203:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__evict)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:343 assert(!(evict === from.code), s\"State transition from ${from} to evicted should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167214:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__evict)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167217: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167217, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167225:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__before_)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:348 assert(!(before === from.code), s\"State transition from ${from} to flushed should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167236:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__before_)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167239: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167239, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167247:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__evict)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:343 assert(!(evict === from.code), s\"State transition from ${from} to evicted should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167258:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__evict)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167261: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167261, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167269:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__before_)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:348 assert(!(before === from.code), s\"State transition from ${from} to flushed should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167280:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__before_)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167283: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167283, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167291:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_293))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167302:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_293))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167305: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167305, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167313:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_300))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167324:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_300))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167327: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167327, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167335:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_310))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167346:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_310))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167349: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167349, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167357:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_317))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167368:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_317))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167371: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167371, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167379:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_330))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167390:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_330))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167393: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167393, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167401:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_337))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167412:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_337))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167415: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167415, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167423:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_344))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167434:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_344))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167437: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167437, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167445:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_351))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167456:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_351))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167459: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167459, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167467:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_358))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167478:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_358))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167481: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167481, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167489:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_365))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167500:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_365))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167503: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167503, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167511:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_372))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167522:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_372))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167525: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167525, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167533:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_379))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167544:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_379))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167547: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167547, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167555:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_386))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167566:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_386))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167569: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167569, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167577:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_393))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167588:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_393))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167591: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167591, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167599:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_400))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167610:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_400))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167613: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167613, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167621:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_407))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167632:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_407))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167635: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167635, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167643:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_414))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167654:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_414))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167657: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167657, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167665:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_421))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167676:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_421))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167679: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167679, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167687:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_428))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167698:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_428))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167701: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167701, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167709:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_435))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167720:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_435))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167723: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167723, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167731:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_442))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167742:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_442))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167745: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167745, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167753:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_449))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167764:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_449))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167767: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167767, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167775:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_456))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167786:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_456))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167789: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167789, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167797:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167808:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167811: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167811, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167819:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_470))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167830:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_470))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167833: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167833, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167841:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_480))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167852:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_480))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167855: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167855, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167863:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_490))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167874:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_490))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167877: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167877, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167885:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_497))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167896:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_497))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167899: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167899, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167907:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_504))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167918:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_504))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167921: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167921, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167929:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_511))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167940:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_511))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167943: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167943, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167951:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_524))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167962:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_524))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167965: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167965, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167973:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_534))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167984:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_534))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167987: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167987, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167995:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_541))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168006:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_541))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168009: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168009, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168017:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_548))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168028:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_548))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168031: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168031, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168039:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_555))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168050:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_555))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168053: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168053, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168061:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_562))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168072:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_562))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168075: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168075, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168083:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_569))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168094:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_569))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168097: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168097, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168105:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_576))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168116:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_576))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168119: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168119, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168127:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_583))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168138:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_583))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168141: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168141, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168149:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_593))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168160:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_593))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168163: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168163, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168171:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_600))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168182:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_600))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168185: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168185, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168193:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_607))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168204:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_607))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168207: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168207, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168215:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_614))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168226:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_614))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168229: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168229, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168237:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_621))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168248:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_621))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168251: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168251, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168259:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_631))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168270:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_631))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168273: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168273, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168281:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_641))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168292:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_641))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168295: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168295, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168303:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_648))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168314:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_648))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168317: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168317, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168325:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_655))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168336:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_655))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168339: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168339, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168347:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_677))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168358:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_677))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168361: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168361, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168369:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_684))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168380:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_684))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168383: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168383, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168391:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_691))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168402:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_691))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168405: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168405, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168413:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_698))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168424:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_698))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168427: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168427, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168435:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_705))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168446:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_705))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168449: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168449, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168457:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_718))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168468:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xaU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_718))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168471: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168471, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168479:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_774) 
                         & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State bypass from S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:513 assert(!(prior === from.code), s\"State bypass from ${from} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168490:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_774) 
                         & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168493: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168493, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168501:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_774) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State bypass from S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:513 assert(!(prior === from.code), s\"State bypass from ${from} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168512:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_774) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168515: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168515, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168523:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_832))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:530 assert (!request_valid || (no_wait && io.schedule.fire()))\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168534:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_832))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168537: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168537, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168545:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_835) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__new_request_prio_2)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__new_meta_hit) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:582 assert (new_meta.hit)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168556:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_835) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__new_request_prio_2)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__new_meta_hit) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168559: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168559, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2062(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2062\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167027:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:102 assert (!meta.clients.orR)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167038:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167041: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167041, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167049:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:103 assert (!meta.dirty)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167060:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167063: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167063, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167071:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:106 assert (!meta.dirty)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167082:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167085: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167085, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167093:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:109 assert (meta.clients.orR)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167104:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167107: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167107, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167115:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_25))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:110 assert ((meta.clients & (meta.clients - UInt(1))) === UInt(0)) // at most one\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167126:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_25))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167129: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167129, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167137:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_59))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:176 assert (!io.status.bits.nestB || !io.status.bits.blockB)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167148:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_59))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167151: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167151, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167159:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_65))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:177 assert (!io.status.bits.nestC || !io.status.bits.blockC)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167170:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_65))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167173: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167173, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167181:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__bad_grant) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_hit)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_170))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:251 assert (!meta_valid || meta.state === BRANCH)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167192:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__bad_grant) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_hit)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_170))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167195: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167195, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167203:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__evict)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:343 assert(!(evict === from.code), s\"State transition from ${from} to evicted should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167214:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__evict)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167217: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167217, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167225:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__before_)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:348 assert(!(before === from.code), s\"State transition from ${from} to flushed should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167236:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__before_)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167239: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167239, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167247:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__evict)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:343 assert(!(evict === from.code), s\"State transition from ${from} to evicted should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167258:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__evict)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167261: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167261, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167269:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__before_)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:348 assert(!(before === from.code), s\"State transition from ${from} to flushed should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167280:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_77) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__before_)) 
                                             | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167283: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167283, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167291:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_293))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167302:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_293))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167305: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167305, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167313:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_300))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167324:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_300))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167327: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167327, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167335:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_310))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167346:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_310))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167349: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167349, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167357:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_317))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167368:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_317))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167371: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167371, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167379:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_330))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_INVALID to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167390:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_330))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167393: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167393, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167401:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_337))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167412:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_337))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167415: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167415, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167423:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_344))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167434:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_344))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167437: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167437, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167445:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_351))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167456:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_351))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167459: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167459, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167467:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_358))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167478:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_358))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167481: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167481, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167489:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_365))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167500:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_365))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167503: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167503, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167511:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_372))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167522:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_372))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167525: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167525, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167533:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_379))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167544:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_379))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167547: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167547, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167555:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_386))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167566:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_386))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167569: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167569, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167577:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_393))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167588:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_393))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167591: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167591, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167599:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_400))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167610:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_400))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167613: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167613, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167621:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_407))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167632:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_407))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167635: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167635, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167643:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_414))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167654:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_414))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167657: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167657, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167665:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_421))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167676:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_421))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167679: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167679, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167687:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_428))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167698:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_428))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167701: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167701, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167709:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_435))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167720:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_435))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167723: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167723, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167731:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_442))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_BRANCH_C to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167742:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_442))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167745: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167745, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167753:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_449))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167764:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_449))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167767: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167767, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167775:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_456))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167786:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_456))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167789: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167789, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167797:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_463))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167808:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_463))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167811: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167811, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167819:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_470))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167830:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_470))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167833: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167833, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167841:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_480))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167852:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_480))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167855: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167855, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167863:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_490))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167874:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_490))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167877: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167877, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167885:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_497))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167896:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_497))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167899: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167899, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167907:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_504))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167918:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_504))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167921: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167921, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167929:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_511))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167940:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_511))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167943: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167943, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167951:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_524))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167962:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_524))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167965: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167965, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167973:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_534))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_C to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167984:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_534))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:167987: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 167987, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:167995:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_541))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168006:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_541))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168009: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168009, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168017:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_548))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168028:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_548))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168031: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168031, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168039:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_555))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168050:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_555))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168053: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168053, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168061:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_562))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168072:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_562))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168075: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168075, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168083:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_569))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168094:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_569))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168097: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168097, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168105:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_576))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168116:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_576))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168119: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168119, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168127:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_583))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_D to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168138:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_583))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168141: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168141, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168149:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_593))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168160:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_593))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168163: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168163, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168171:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_600))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168182:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_600))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168185: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168185, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168193:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_607))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168204:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_607))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168207: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168207, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168215:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_614))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168226:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_614))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168229: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168229, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168237:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_621))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168248:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_621))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168251: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168251, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168259:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_631))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TIP_CD to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168270:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_631))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168273: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168273, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168281:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_641))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168292:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_641))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168295: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168295, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168303:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_648))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168314:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_648))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168317: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168317, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168325:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_655))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_C to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168336:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_655))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168339: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168339, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168347:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_677))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168358:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_677))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168361: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168361, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168369:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_684))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168380:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_684))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168383: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168383, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168391:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_691))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168402:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_691))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168405: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168405, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168413:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_698))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168424:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_698))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168427: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168427, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168435:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_705))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168446:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_705))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168449: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168449, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168457:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_718))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State transition from S_TRUNK_CD to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:356 assert(!(before === from.code && after === to.code), s\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168468:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_91) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                             >> 0xbU)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_718))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168471: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168471, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168479:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_774) 
                         & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State bypass from S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:513 assert(!(prior === from.code), s\"State bypass from ${from} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168490:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_774) 
                         & (~ ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168493: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168493, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168501:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_774) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: State bypass from S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:513 assert(!(prior === from.code), s\"State bypass from ${from} should be impossible ${cfg}\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168512:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_774) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__after)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168515: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168515, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168523:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_832))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:530 assert (!request_valid || (no_wait && io.schedule.fire()))\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168534:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_832))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168537: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168537, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168545:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_835) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__new_request_prio_2)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__new_meta_hit) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MSHR.scala:582 assert (new_meta.hit)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:168556:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_835) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__new_request_prio_2)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__new_meta_hit) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:168559: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.c_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 168559, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2063(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2063\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_opcode__v0 = 0U;
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:156488:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_19))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at SourceC.scala:63 assert (room === queue.io.count <= UInt(1))\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:156499:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_19))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:156502: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.sourceC\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 156502, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:156510:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_131))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at SourceC.scala:115 assert(!c.valid || c.ready)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:156521:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_131))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:156524: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.sourceC\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 156524, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2064(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2064\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_cfi_type__v0 = 0U;
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:295297:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_update_arbiter_io_out_valid) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_update_arbiter_io_out_bits_cfi_is_br) 
                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_update_arbiter_io_out_bits_cfi_idx_valid))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_209))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at predictor.scala:468 assert(io.update.bits.br_mask(io.update.bits.cfi_idx.bits))\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:295308:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_update_arbiter_io_out_valid) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_update_arbiter_io_out_bits_cfi_is_br) 
                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_update_arbiter_io_out_bits_cfi_idx_valid))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_209))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:295311: Assertion failed in %NTestHarness.dut.system.boom_tile.frontend.bpd\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 295311, "");
        }
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_sfbs_1__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2065(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2065\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:159190:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_64))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at SourceD.scala:122 assert (!queue.io.enq.valid || queue.io.enq.ready)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:159201:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_64))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:159204: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.sourceD\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 159204, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:159212:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_128))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at SourceD.scala:231 assert (!s3_full || !s3_need_r || queue.io.deq.valid)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:159223:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_128))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:159226: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.sourceD\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 159226, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:159234:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_178))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Data poisoning unsupported\n    at SourceD.scala:275 assert (!(s4_full && s4_need_pb && s4_pdata.corrupt), \"Data poisoning unsupported\")\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:159245:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_178))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:159248: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.l2.mods_0.sourceD\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 159248, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2066(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2066\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_meta_1__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_meta_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_0_predicted_pc_valid__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_4_predicted_pc_valid__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_7_predicted_pc_valid__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_2_predicted_pc_valid__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_1_predicted_pc_valid__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_3_predicted_pc_valid__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_5_predicted_pc_valid__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_6_predicted_pc_valid__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_0_predicted_pc_bits__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_4_predicted_pc_bits__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_7_predicted_pc_bits__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_2_predicted_pc_bits__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_1_predicted_pc_bits__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_3_predicted_pc_bits__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_5_predicted_pc_bits__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_6_predicted_pc_bits__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_7_taken__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_6_taken__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_5_taken__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_4_taken__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_3_taken__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_2_taken__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2067(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2067\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_1_taken__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_address__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_0_taken__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_pc__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2068(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2068\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_edge_inst_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_edge_inst_1__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s1_vpc 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s1_vpc;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_mask__v0 = 0U;
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826653:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826664:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:826667: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 826667, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826675:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826686:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:826689: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 826689, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826697:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826708:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:826711: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 826711, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826719:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826730:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:826733: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 826733, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826741:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826752:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:826755: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 826755, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826763:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826774:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:826777: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 826777, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826785:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826796:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:826799: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 826799, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826807:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_137))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826818:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_137))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:826821: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 826821, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826829:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826840:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:826843: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 826843, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826851:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826862:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:826865: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 826865, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826873:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826884:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:826887: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 826887, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826895:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826906:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:826909: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 826909, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826917:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826928:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:826931: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 826931, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826939:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826950:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:826953: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 826953, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826961:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826972:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:826975: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 826975, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826983:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:826994:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:826997: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 826997, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827005:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_137))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827016:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_137))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827019: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827019, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827027:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x30000U & (0x10000U 
                                                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827038:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x30000U & (0x10000U 
                                                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827041: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827041, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827049:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827060:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827063: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827063, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827071:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827082:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827085: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827085, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827093:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827104:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827107: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827107, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827115:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827126:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827129: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827129, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827137:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_137))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827148:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_137))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827151: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827151, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827159:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827170:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827173: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827173, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827181:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827192:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827195: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827195, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827203:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827214:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827217: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827217, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827225:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827236:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827239: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827239, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827247:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827258:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827261: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827261, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827269:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827280:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827283: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827283, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827291:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827302:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827305: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827305, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827313:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827324:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827327: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827327, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827335:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827346:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827349: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827349, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827357:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_266))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827368:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_266))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827371: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827371, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827379:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827390:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827393: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827393, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827401:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827412:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827415: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827415, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827423:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827434:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827437: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827437, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827445:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827456:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827459: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827459, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827467:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827478:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827481: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827481, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827489:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827500:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827503: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827503, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827511:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827522:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827525: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827525, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827533:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827544:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827547: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827547, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827555:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827566:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827569: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827569, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827577:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827588:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827591: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827591, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827599:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827610:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827613: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827613, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827621:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827632:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827635: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827635, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827643:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827654:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827657: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827657, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827665:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827676:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827679: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827679, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827687:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827698:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827701: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827701, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827709:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_137))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827720:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_137))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827723: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827723, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827731:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827742:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                         & (~ ((0x10fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827745: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827745, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827753:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_537))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827764:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_537))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827767: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827767, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827775:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_541))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827786:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_541))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827789: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827789, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827797:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_545))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827808:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_545))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827811: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827811, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827819:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_549))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827830:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_549))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827833: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827833, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827841:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_553))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827852:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_553))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827855: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827855, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827863:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_565)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_594))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BootROM.scala:74:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827874:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_565)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_594))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827877: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827877, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827885:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_565)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_598))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BootROM.scala:74:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827896:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_565)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_598))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827899: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827899, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827907:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_666) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_681))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827918:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_666) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_681))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827921: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827921, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827929:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_715))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BootROM.scala:74:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827940:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_715))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827943: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827943, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827951:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_728))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BootROM.scala:74:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827962:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_728))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827965: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827965, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827973:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_735))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BootROM.scala:74:16)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827984:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_735))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:827987: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 827987, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:827995:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637))) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_619))) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_747))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:828006:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637))) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_619))) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_747))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:828009: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 828009, "");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:828017:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_766))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BootROM.scala:74:16)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v:828028:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_766))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomConfig.top.v:828031: Assertion failed in %NTestHarness.dut.system.bootrom.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.top.v", 828031, "");
        }
    }
}
