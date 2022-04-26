// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3903(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3903\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp693[7];
    WData/*255:0*/ __Vtemp694[8];
    WData/*159:0*/ __Vtemp697[5];
    WData/*159:0*/ __Vtemp698[5];
    WData/*95:0*/ __Vtemp706[3];
    WData/*127:0*/ __Vtemp707[4];
    WData/*159:0*/ __Vtemp709[5];
    WData/*159:0*/ __Vtemp716[5];
    WData/*159:0*/ __Vtemp717[5];
    WData/*223:0*/ __Vtemp720[7];
    WData/*831:0*/ __Vtemp726[26];
    WData/*831:0*/ __Vtemp727[26];
    WData/*831:0*/ __Vtemp729[26];
    WData/*863:0*/ __Vtemp730[27];
    // Body
    __Vtemp693[0U] = 0U;
    __Vtemp693[1U] = 0U;
    __Vtemp693[2U] = 0U;
    __Vtemp693[3U] = 0U;
    __Vtemp693[4U] = 0U;
    __Vtemp693[5U] = ((0xfffc0000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_ftq_idx) 
                                       << 0x19U) | 
                                      (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_edge_inst) 
                                        << 0x18U) | 
                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_pc_lob) 
                                        << 0x12U)))) 
                      | (0xfffe0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_taken) 
                                        << 0x11U)));
    __Vtemp693[6U] = ((0xfffc0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_is_sfb) 
                                      << 0x12U)) | 
                      (0x3ffffU & ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_ftq_idx) 
                                                >> 7U)) 
                                   | ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_edge_inst) 
                                                   >> 8U)) 
                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_pc_lob) 
                                         >> 0xeU)))));
    VL_EXTEND_WW(254,220, __Vtemp694, __Vtemp693);
    __Vtemp697[0U] = (0xfe000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_pc) 
                                     << 0x19U));
    __Vtemp697[1U] = ((0x1ffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_pc) 
                                     >> 7U)) | (0xfe000000U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_pc 
                                                            >> 0x20U)) 
                                                   << 0x19U)));
    __Vtemp697[2U] = ((0xfffffffcU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_inst)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_inst)))) 
                                      << 2U)) | ((0xfffffffeU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_is_rvc) 
                                                     << 1U)) 
                                                 | (0x1ffffffU 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_pc 
                                                                >> 0x20U)) 
                                                       >> 7U))));
    __Vtemp697[3U] = ((3U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_inst)))) 
                             >> 0x1eU)) | (0xfffffffcU 
                                           & ((IData)(
                                                      ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_inst)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_inst))) 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp697[4U] = (3U & ((IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_inst))) 
                                     >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WW(139,130, __Vtemp698, __Vtemp697);
    __Vtemp706[0U] = 0U;
    __Vtemp706[1U] = 0U;
    __Vtemp706[2U] = ((0xff800000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_ftq_idx) 
                                      << 0x17U)) | 
                      ((0xffc00000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_edge_inst) 
                                       << 0x16U)) | 
                       ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_pc_lob) 
                                        << 0x10U)) 
                        | (0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_taken) 
                                          << 0xfU)))));
    VL_EXTEND_WW(112,92, __Vtemp707, __Vtemp706);
    VL_EXTEND_WI(134,1, __Vtemp709, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_xcpt_pf_if));
    __Vtemp716[0U] = 0U;
    __Vtemp716[1U] = (0xffffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_debug_pc) 
                                     << 8U));
    __Vtemp716[2U] = ((0xfffe0000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_debug_inst 
                                      << 0x11U)) | 
                      ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_is_rvc) 
                                       << 0x10U)) | 
                       ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_debug_pc) 
                                  >> 0x18U)) | (0xffffff00U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_debug_pc 
                                                            >> 0x20U)) 
                                                   << 8U)))));
    __Vtemp716[3U] = ((0xfffe0000U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_inst))) 
                                      << 0x11U)) | 
                      (0x1ffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_debug_inst 
                                   >> 0xfU)));
    __Vtemp716[4U] = ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_bp_debug_if) 
                                      << 0x1dU)) | 
                      ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_bp_xcpt_if) 
                                       << 0x1cU)) | 
                       ((0xfc000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_debug_fsrc) 
                                        << 0x1aU)) 
                        | ((0x1ffffU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_inst))) 
                                        >> 0xfU)) | 
                           (0xfffe0000U & ((IData)(
                                                   ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_inst)) 
                                                    >> 0x20U)) 
                                           << 0x11U))))));
    VL_EXTEND_WW(159,158, __Vtemp717, __Vtemp716);
    VL_EXTEND_WQ(221,55, __Vtemp720, (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_xcpt_pf_if)) 
                                       << 8U) | (QData)((IData)(
                                                                (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_xcpt_ae_if) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_bp_debug_if) 
                                                                     << 5U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_bp_xcpt_if) 
                                                                        << 4U) 
                                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_debug_fsrc) 
                                                                          << 2U))))))));
    __Vtemp726[0U] = __Vtemp720[0U];
    __Vtemp726[1U] = __Vtemp720[1U];
    __Vtemp726[2U] = __Vtemp720[2U];
    __Vtemp726[3U] = __Vtemp720[3U];
    __Vtemp726[4U] = __Vtemp720[4U];
    __Vtemp726[5U] = __Vtemp720[5U];
    __Vtemp726[6U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_pc_lob) 
                                      << 0x1eU)) | 
                      ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_taken) 
                                       << 0x1dU)) | 
                       __Vtemp720[6U]));
    __Vtemp726[7U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_is_sfb) 
                                      << 0x1eU)) | 
                      (0x3fffffffU & ((0x3fffffe0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_ftq_idx) 
                                          << 5U)) | 
                                      ((0x3ffffff0U 
                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_edge_inst) 
                                           << 4U)) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_pc_lob) 
                                          >> 2U)))));
    __Vtemp726[8U] = ((0xfffffffcU & (__Vtemp717[0U] 
                                      << 2U)) | (0x3fffffffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_12_is_sfb) 
                                                    >> 2U)));
    __Vtemp726[9U] = ((3U & (__Vtemp717[0U] >> 0x1eU)) 
                      | (0xfffffffcU & (__Vtemp717[1U] 
                                        << 2U)));
    __Vtemp726[0xaU] = ((3U & (__Vtemp717[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp717[2U] 
                                          << 2U)));
    __Vtemp726[0xbU] = ((3U & (__Vtemp717[2U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp717[3U] 
                                          << 2U)));
    __Vtemp726[0xcU] = ((3U & (__Vtemp717[3U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp717[4U] 
                                          << 2U)));
    __Vtemp726[0xdU] = ((3U & ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_xcpt_ae_if) 
                                      << 1U)) | (__Vtemp717[4U] 
                                                 >> 0x1eU))) 
                        | (0xfffffffcU & (__Vtemp709[0U] 
                                          << 2U)));
    __Vtemp726[0xeU] = ((3U & (__Vtemp709[0U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp709[1U] 
                                          << 2U)));
    __Vtemp726[0xfU] = ((3U & (__Vtemp709[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp709[2U] 
                                          << 2U)));
    __Vtemp726[0x10U] = ((3U & (__Vtemp709[2U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp709[3U] 
                                           << 2U)));
    __Vtemp726[0x11U] = ((0xffffff00U & (__Vtemp707[0U] 
                                         << 8U)) | 
                         ((3U & (__Vtemp709[3U] >> 0x1eU)) 
                          | (0xfffffffcU & (__Vtemp709[4U] 
                                            << 2U))));
    __Vtemp726[0x12U] = ((0xffU & (__Vtemp707[0U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp707[1U] 
                                           << 8U)));
    __Vtemp726[0x13U] = ((0xffU & (__Vtemp707[1U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp707[2U] 
                                           << 8U)));
    __Vtemp726[0x14U] = ((0xffU & (__Vtemp707[2U] >> 0x18U)) 
                         | (0xffffff00U & ((0xff000000U 
                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_is_sfb) 
                                               << 0x18U)) 
                                           | (__Vtemp707[3U] 
                                              << 8U))));
    __Vtemp726[0x15U] = ((0xfffff800U & (__Vtemp698[0U] 
                                         << 0xbU)) 
                         | ((0xffU & ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_is_sfb) 
                                                >> 8U)) 
                                      | (__Vtemp707[3U] 
                                         >> 0x18U))) 
                            | (0xffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_13_is_sfb) 
                                            >> 8U))));
    __Vtemp726[0x16U] = ((0x7ffU & (__Vtemp698[0U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp698[1U] 
                                                     << 0xbU)));
    __Vtemp726[0x17U] = ((0x7ffU & (__Vtemp698[1U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp698[2U] 
                                                     << 0xbU)));
    __Vtemp726[0x18U] = ((0x7ffU & (__Vtemp698[2U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp698[3U] 
                                                     << 0xbU)));
    __Vtemp726[0x19U] = ((0x7ffU & (__Vtemp698[3U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & ((0xfe000000U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_bp_debug_if) 
                                                         << 0x19U)) 
                                                     | ((0xff000000U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_bp_xcpt_if) 
                                                            << 0x18U)) 
                                                        | ((0xffc00000U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_debug_fsrc) 
                                                               << 0x16U)) 
                                                           | (__Vtemp698[4U] 
                                                              << 0xbU))))));
    VL_EXTEND_WW(827,826, __Vtemp727, __Vtemp726);
    __Vtemp729[0U] = __Vtemp727[0U];
    __Vtemp729[1U] = __Vtemp727[1U];
    __Vtemp729[2U] = __Vtemp727[2U];
    __Vtemp729[3U] = __Vtemp727[3U];
    __Vtemp729[4U] = __Vtemp727[4U];
    __Vtemp729[5U] = __Vtemp727[5U];
    __Vtemp729[6U] = __Vtemp727[6U];
    __Vtemp729[7U] = __Vtemp727[7U];
    __Vtemp729[8U] = __Vtemp727[8U];
    __Vtemp729[9U] = __Vtemp727[9U];
    __Vtemp729[0xaU] = __Vtemp727[0xaU];
    __Vtemp729[0xbU] = __Vtemp727[0xbU];
    __Vtemp729[0xcU] = __Vtemp727[0xcU];
    __Vtemp729[0xdU] = __Vtemp727[0xdU];
    __Vtemp729[0xeU] = __Vtemp727[0xeU];
    __Vtemp729[0xfU] = __Vtemp727[0xfU];
    __Vtemp729[0x10U] = __Vtemp727[0x10U];
    __Vtemp729[0x11U] = __Vtemp727[0x11U];
    __Vtemp729[0x12U] = __Vtemp727[0x12U];
    __Vtemp729[0x13U] = __Vtemp727[0x13U];
    __Vtemp729[0x14U] = __Vtemp727[0x14U];
    __Vtemp729[0x15U] = __Vtemp727[0x15U];
    __Vtemp729[0x16U] = __Vtemp727[0x16U];
    __Vtemp729[0x17U] = __Vtemp727[0x17U];
    __Vtemp729[0x18U] = __Vtemp727[0x18U];
    __Vtemp729[0x19U] = ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_xcpt_pf_if) 
                                         << 0x1cU)) 
                         | ((0xf8000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_xcpt_ae_if) 
                                            << 0x1bU)) 
                            | __Vtemp727[0x19U]));
    VL_EXTEND_WW(864,829, __Vtemp730, __Vtemp729);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0U] 
        = __Vtemp730[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[1U] 
        = __Vtemp730[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[2U] 
        = __Vtemp730[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[3U] 
        = __Vtemp730[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[4U] 
        = __Vtemp730[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[5U] 
        = __Vtemp730[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[6U] 
        = __Vtemp730[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[7U] 
        = __Vtemp730[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[8U] 
        = __Vtemp730[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[9U] 
        = __Vtemp730[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0xaU] 
        = __Vtemp730[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0xbU] 
        = __Vtemp730[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0xcU] 
        = __Vtemp730[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0xdU] 
        = __Vtemp730[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0xeU] 
        = __Vtemp730[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0xfU] 
        = __Vtemp730[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x10U] 
        = __Vtemp730[0x10U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x11U] 
        = __Vtemp730[0x11U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x12U] 
        = __Vtemp730[0x12U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x13U] 
        = __Vtemp730[0x13U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x14U] 
        = __Vtemp730[0x14U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x15U] 
        = __Vtemp730[0x15U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x16U] 
        = __Vtemp730[0x16U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x17U] 
        = __Vtemp730[0x17U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x18U] 
        = __Vtemp730[0x18U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x19U] 
        = __Vtemp730[0x19U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x1aU] 
        = __Vtemp730[0x1aU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x1bU] 
        = __Vtemp694[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x1cU] 
        = __Vtemp694[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x1dU] 
        = __Vtemp694[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x1eU] 
        = __Vtemp694[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x1fU] 
        = __Vtemp694[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x20U] 
        = __Vtemp694[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x21U] 
        = __Vtemp694[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x22U] 
        = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_debug_pc) 
                           << 0x1eU)) | __Vtemp694[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x23U] 
        = ((0x3fffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_debug_pc) 
                           >> 2U)) | (0xc0000000U & 
                                      ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_debug_pc 
                                                >> 0x20U)) 
                                       << 0x1eU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x24U] 
        = ((0xffffff80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_debug_inst 
                           << 7U)) | ((0xffffffc0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_is_rvc) 
                                          << 6U)) | 
                                      (0x3fffffffU 
                                       & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_debug_pc 
                                                   >> 0x20U)) 
                                          >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x25U] 
        = ((0xffffff80U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_inst))) 
                           << 7U)) | (0x7fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_debug_inst 
                                               >> 0x19U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2355[0x26U] 
        = ((0x7fU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_inst))) 
                     >> 0x19U)) | (0xffffff80U & ((IData)(
                                                          ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_14_inst)) 
                                                           >> 0x20U)) 
                                                  << 7U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3904(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3904\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp739[7];
    WData/*255:0*/ __Vtemp740[8];
    WData/*159:0*/ __Vtemp743[5];
    WData/*159:0*/ __Vtemp744[5];
    WData/*95:0*/ __Vtemp752[3];
    WData/*127:0*/ __Vtemp753[4];
    WData/*159:0*/ __Vtemp755[5];
    WData/*159:0*/ __Vtemp762[5];
    WData/*159:0*/ __Vtemp763[5];
    WData/*223:0*/ __Vtemp766[7];
    WData/*831:0*/ __Vtemp772[26];
    WData/*831:0*/ __Vtemp773[26];
    WData/*831:0*/ __Vtemp775[26];
    WData/*863:0*/ __Vtemp776[27];
    // Body
    __Vtemp739[0U] = 0U;
    __Vtemp739[1U] = 0U;
    __Vtemp739[2U] = 0U;
    __Vtemp739[3U] = 0U;
    __Vtemp739[4U] = 0U;
    __Vtemp739[5U] = ((0xfffc0000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_ftq_idx) 
                                       << 0x19U) | 
                                      (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_edge_inst) 
                                        << 0x18U) | 
                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_pc_lob) 
                                        << 0x12U)))) 
                      | (0xfffe0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_taken) 
                                        << 0x11U)));
    __Vtemp739[6U] = ((0xfffc0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_is_sfb) 
                                      << 0x12U)) | 
                      (0x3ffffU & ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_ftq_idx) 
                                                >> 7U)) 
                                   | ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_edge_inst) 
                                                   >> 8U)) 
                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_pc_lob) 
                                         >> 0xeU)))));
    VL_EXTEND_WW(254,220, __Vtemp740, __Vtemp739);
    __Vtemp743[0U] = (0xfe000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_pc) 
                                     << 0x19U));
    __Vtemp743[1U] = ((0x1ffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_pc) 
                                     >> 7U)) | (0xfe000000U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_pc 
                                                            >> 0x20U)) 
                                                   << 0x19U)));
    __Vtemp743[2U] = ((0xfffffffcU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_inst)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_inst)))) 
                                      << 2U)) | ((0xfffffffeU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_is_rvc) 
                                                     << 1U)) 
                                                 | (0x1ffffffU 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_pc 
                                                                >> 0x20U)) 
                                                       >> 7U))));
    __Vtemp743[3U] = ((3U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_inst)))) 
                             >> 0x1eU)) | (0xfffffffcU 
                                           & ((IData)(
                                                      ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_inst)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_inst))) 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp743[4U] = (3U & ((IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_inst))) 
                                     >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WW(139,130, __Vtemp744, __Vtemp743);
    __Vtemp752[0U] = 0U;
    __Vtemp752[1U] = 0U;
    __Vtemp752[2U] = ((0xff800000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_ftq_idx) 
                                      << 0x17U)) | 
                      ((0xffc00000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_edge_inst) 
                                       << 0x16U)) | 
                       ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_pc_lob) 
                                        << 0x10U)) 
                        | (0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_taken) 
                                          << 0xfU)))));
    VL_EXTEND_WW(112,92, __Vtemp753, __Vtemp752);
    VL_EXTEND_WI(134,1, __Vtemp755, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_xcpt_pf_if));
    __Vtemp762[0U] = 0U;
    __Vtemp762[1U] = (0xffffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_debug_pc) 
                                     << 8U));
    __Vtemp762[2U] = ((0xfffe0000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_debug_inst 
                                      << 0x11U)) | 
                      ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_is_rvc) 
                                       << 0x10U)) | 
                       ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_debug_pc) 
                                  >> 0x18U)) | (0xffffff00U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_debug_pc 
                                                            >> 0x20U)) 
                                                   << 8U)))));
    __Vtemp762[3U] = ((0xfffe0000U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_inst))) 
                                      << 0x11U)) | 
                      (0x1ffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_debug_inst 
                                   >> 0xfU)));
    __Vtemp762[4U] = ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_bp_debug_if) 
                                      << 0x1dU)) | 
                      ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_bp_xcpt_if) 
                                       << 0x1cU)) | 
                       ((0xfc000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_debug_fsrc) 
                                        << 0x1aU)) 
                        | ((0x1ffffU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_inst))) 
                                        >> 0xfU)) | 
                           (0xfffe0000U & ((IData)(
                                                   ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_inst)) 
                                                    >> 0x20U)) 
                                           << 0x11U))))));
    VL_EXTEND_WW(159,158, __Vtemp763, __Vtemp762);
    VL_EXTEND_WQ(221,55, __Vtemp766, (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_xcpt_pf_if)) 
                                       << 8U) | (QData)((IData)(
                                                                (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_xcpt_ae_if) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_bp_debug_if) 
                                                                     << 5U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_bp_xcpt_if) 
                                                                        << 4U) 
                                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_debug_fsrc) 
                                                                          << 2U))))))));
    __Vtemp772[0U] = __Vtemp766[0U];
    __Vtemp772[1U] = __Vtemp766[1U];
    __Vtemp772[2U] = __Vtemp766[2U];
    __Vtemp772[3U] = __Vtemp766[3U];
    __Vtemp772[4U] = __Vtemp766[4U];
    __Vtemp772[5U] = __Vtemp766[5U];
    __Vtemp772[6U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_pc_lob) 
                                      << 0x1eU)) | 
                      ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_taken) 
                                       << 0x1dU)) | 
                       __Vtemp766[6U]));
    __Vtemp772[7U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_is_sfb) 
                                      << 0x1eU)) | 
                      (0x3fffffffU & ((0x3fffffe0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_ftq_idx) 
                                          << 5U)) | 
                                      ((0x3ffffff0U 
                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_edge_inst) 
                                           << 4U)) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_pc_lob) 
                                          >> 2U)))));
    __Vtemp772[8U] = ((0xfffffffcU & (__Vtemp763[0U] 
                                      << 2U)) | (0x3fffffffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_3_is_sfb) 
                                                    >> 2U)));
    __Vtemp772[9U] = ((3U & (__Vtemp763[0U] >> 0x1eU)) 
                      | (0xfffffffcU & (__Vtemp763[1U] 
                                        << 2U)));
    __Vtemp772[0xaU] = ((3U & (__Vtemp763[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp763[2U] 
                                          << 2U)));
    __Vtemp772[0xbU] = ((3U & (__Vtemp763[2U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp763[3U] 
                                          << 2U)));
    __Vtemp772[0xcU] = ((3U & (__Vtemp763[3U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp763[4U] 
                                          << 2U)));
    __Vtemp772[0xdU] = ((3U & ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_xcpt_ae_if) 
                                      << 1U)) | (__Vtemp763[4U] 
                                                 >> 0x1eU))) 
                        | (0xfffffffcU & (__Vtemp755[0U] 
                                          << 2U)));
    __Vtemp772[0xeU] = ((3U & (__Vtemp755[0U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp755[1U] 
                                          << 2U)));
    __Vtemp772[0xfU] = ((3U & (__Vtemp755[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp755[2U] 
                                          << 2U)));
    __Vtemp772[0x10U] = ((3U & (__Vtemp755[2U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp755[3U] 
                                           << 2U)));
    __Vtemp772[0x11U] = ((0xffffff00U & (__Vtemp753[0U] 
                                         << 8U)) | 
                         ((3U & (__Vtemp755[3U] >> 0x1eU)) 
                          | (0xfffffffcU & (__Vtemp755[4U] 
                                            << 2U))));
    __Vtemp772[0x12U] = ((0xffU & (__Vtemp753[0U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp753[1U] 
                                           << 8U)));
    __Vtemp772[0x13U] = ((0xffU & (__Vtemp753[1U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp753[2U] 
                                           << 8U)));
    __Vtemp772[0x14U] = ((0xffU & (__Vtemp753[2U] >> 0x18U)) 
                         | (0xffffff00U & ((0xff000000U 
                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_is_sfb) 
                                               << 0x18U)) 
                                           | (__Vtemp753[3U] 
                                              << 8U))));
    __Vtemp772[0x15U] = ((0xfffff800U & (__Vtemp744[0U] 
                                         << 0xbU)) 
                         | ((0xffU & ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_is_sfb) 
                                                >> 8U)) 
                                      | (__Vtemp753[3U] 
                                         >> 0x18U))) 
                            | (0xffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_4_is_sfb) 
                                            >> 8U))));
    __Vtemp772[0x16U] = ((0x7ffU & (__Vtemp744[0U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp744[1U] 
                                                     << 0xbU)));
    __Vtemp772[0x17U] = ((0x7ffU & (__Vtemp744[1U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp744[2U] 
                                                     << 0xbU)));
    __Vtemp772[0x18U] = ((0x7ffU & (__Vtemp744[2U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp744[3U] 
                                                     << 0xbU)));
    __Vtemp772[0x19U] = ((0x7ffU & (__Vtemp744[3U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & ((0xfe000000U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_bp_debug_if) 
                                                         << 0x19U)) 
                                                     | ((0xff000000U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_bp_xcpt_if) 
                                                            << 0x18U)) 
                                                        | ((0xffc00000U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_debug_fsrc) 
                                                               << 0x16U)) 
                                                           | (__Vtemp744[4U] 
                                                              << 0xbU))))));
    VL_EXTEND_WW(827,826, __Vtemp773, __Vtemp772);
    __Vtemp775[0U] = __Vtemp773[0U];
    __Vtemp775[1U] = __Vtemp773[1U];
    __Vtemp775[2U] = __Vtemp773[2U];
    __Vtemp775[3U] = __Vtemp773[3U];
    __Vtemp775[4U] = __Vtemp773[4U];
    __Vtemp775[5U] = __Vtemp773[5U];
    __Vtemp775[6U] = __Vtemp773[6U];
    __Vtemp775[7U] = __Vtemp773[7U];
    __Vtemp775[8U] = __Vtemp773[8U];
    __Vtemp775[9U] = __Vtemp773[9U];
    __Vtemp775[0xaU] = __Vtemp773[0xaU];
    __Vtemp775[0xbU] = __Vtemp773[0xbU];
    __Vtemp775[0xcU] = __Vtemp773[0xcU];
    __Vtemp775[0xdU] = __Vtemp773[0xdU];
    __Vtemp775[0xeU] = __Vtemp773[0xeU];
    __Vtemp775[0xfU] = __Vtemp773[0xfU];
    __Vtemp775[0x10U] = __Vtemp773[0x10U];
    __Vtemp775[0x11U] = __Vtemp773[0x11U];
    __Vtemp775[0x12U] = __Vtemp773[0x12U];
    __Vtemp775[0x13U] = __Vtemp773[0x13U];
    __Vtemp775[0x14U] = __Vtemp773[0x14U];
    __Vtemp775[0x15U] = __Vtemp773[0x15U];
    __Vtemp775[0x16U] = __Vtemp773[0x16U];
    __Vtemp775[0x17U] = __Vtemp773[0x17U];
    __Vtemp775[0x18U] = __Vtemp773[0x18U];
    __Vtemp775[0x19U] = ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_xcpt_pf_if) 
                                         << 0x1cU)) 
                         | ((0xf8000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_xcpt_ae_if) 
                                            << 0x1bU)) 
                            | __Vtemp773[0x19U]));
    VL_EXTEND_WW(864,829, __Vtemp776, __Vtemp775);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0U] 
        = __Vtemp776[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[1U] 
        = __Vtemp776[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[2U] 
        = __Vtemp776[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[3U] 
        = __Vtemp776[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[4U] 
        = __Vtemp776[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[5U] 
        = __Vtemp776[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[6U] 
        = __Vtemp776[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[7U] 
        = __Vtemp776[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[8U] 
        = __Vtemp776[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[9U] 
        = __Vtemp776[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0xaU] 
        = __Vtemp776[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0xbU] 
        = __Vtemp776[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0xcU] 
        = __Vtemp776[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0xdU] 
        = __Vtemp776[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0xeU] 
        = __Vtemp776[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0xfU] 
        = __Vtemp776[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x10U] 
        = __Vtemp776[0x10U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x11U] 
        = __Vtemp776[0x11U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x12U] 
        = __Vtemp776[0x12U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x13U] 
        = __Vtemp776[0x13U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x14U] 
        = __Vtemp776[0x14U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x15U] 
        = __Vtemp776[0x15U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x16U] 
        = __Vtemp776[0x16U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x17U] 
        = __Vtemp776[0x17U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x18U] 
        = __Vtemp776[0x18U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x19U] 
        = __Vtemp776[0x19U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x1aU] 
        = __Vtemp776[0x1aU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x1bU] 
        = __Vtemp740[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x1cU] 
        = __Vtemp740[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x1dU] 
        = __Vtemp740[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x1eU] 
        = __Vtemp740[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x1fU] 
        = __Vtemp740[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x20U] 
        = __Vtemp740[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x21U] 
        = __Vtemp740[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x22U] 
        = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_debug_pc) 
                           << 0x1eU)) | __Vtemp740[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x23U] 
        = ((0x3fffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_debug_pc) 
                           >> 2U)) | (0xc0000000U & 
                                      ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_debug_pc 
                                                >> 0x20U)) 
                                       << 0x1eU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x24U] 
        = ((0xffffff80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_debug_inst 
                           << 7U)) | ((0xffffffc0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_is_rvc) 
                                          << 6U)) | 
                                      (0x3fffffffU 
                                       & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_debug_pc 
                                                   >> 0x20U)) 
                                          >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x25U] 
        = ((0xffffff80U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_inst))) 
                           << 7U)) | (0x7fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_debug_inst 
                                               >> 0x19U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1644[0x26U] 
        = ((0x7fU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_inst))) 
                     >> 0x19U)) | (0xffffff80U & ((IData)(
                                                          ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_5_inst)) 
                                                           >> 0x20U)) 
                                                  << 7U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3905(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3905\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp785[7];
    WData/*255:0*/ __Vtemp786[8];
    WData/*159:0*/ __Vtemp789[5];
    WData/*159:0*/ __Vtemp790[5];
    WData/*95:0*/ __Vtemp798[3];
    WData/*127:0*/ __Vtemp799[4];
    WData/*159:0*/ __Vtemp801[5];
    WData/*159:0*/ __Vtemp808[5];
    WData/*159:0*/ __Vtemp809[5];
    WData/*223:0*/ __Vtemp812[7];
    WData/*831:0*/ __Vtemp818[26];
    WData/*831:0*/ __Vtemp819[26];
    WData/*831:0*/ __Vtemp821[26];
    WData/*863:0*/ __Vtemp822[27];
    // Body
    __Vtemp785[0U] = 0U;
    __Vtemp785[1U] = 0U;
    __Vtemp785[2U] = 0U;
    __Vtemp785[3U] = 0U;
    __Vtemp785[4U] = 0U;
    __Vtemp785[5U] = ((0xfffc0000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_ftq_idx) 
                                       << 0x19U) | 
                                      (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_edge_inst) 
                                        << 0x18U) | 
                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_pc_lob) 
                                        << 0x12U)))) 
                      | (0xfffe0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_taken) 
                                        << 0x11U)));
    __Vtemp785[6U] = ((0xfffc0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_is_sfb) 
                                      << 0x12U)) | 
                      (0x3ffffU & ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_ftq_idx) 
                                                >> 7U)) 
                                   | ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_edge_inst) 
                                                   >> 8U)) 
                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_pc_lob) 
                                         >> 0xeU)))));
    VL_EXTEND_WW(254,220, __Vtemp786, __Vtemp785);
    __Vtemp789[0U] = (0xfe000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_pc) 
                                     << 0x19U));
    __Vtemp789[1U] = ((0x1ffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_pc) 
                                     >> 7U)) | (0xfe000000U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_pc 
                                                            >> 0x20U)) 
                                                   << 0x19U)));
    __Vtemp789[2U] = ((0xfffffffcU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_inst)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_inst)))) 
                                      << 2U)) | ((0xfffffffeU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_is_rvc) 
                                                     << 1U)) 
                                                 | (0x1ffffffU 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_pc 
                                                                >> 0x20U)) 
                                                       >> 7U))));
    __Vtemp789[3U] = ((3U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_inst)))) 
                             >> 0x1eU)) | (0xfffffffcU 
                                           & ((IData)(
                                                      ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_inst)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_inst))) 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp789[4U] = (3U & ((IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_inst))) 
                                     >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WW(139,130, __Vtemp790, __Vtemp789);
    __Vtemp798[0U] = 0U;
    __Vtemp798[1U] = 0U;
    __Vtemp798[2U] = ((0xff800000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_ftq_idx) 
                                      << 0x17U)) | 
                      ((0xffc00000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_edge_inst) 
                                       << 0x16U)) | 
                       ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_pc_lob) 
                                        << 0x10U)) 
                        | (0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_taken) 
                                          << 0xfU)))));
    VL_EXTEND_WW(112,92, __Vtemp799, __Vtemp798);
    VL_EXTEND_WI(134,1, __Vtemp801, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_xcpt_pf_if));
    __Vtemp808[0U] = 0U;
    __Vtemp808[1U] = (0xffffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_debug_pc) 
                                     << 8U));
    __Vtemp808[2U] = ((0xfffe0000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_debug_inst 
                                      << 0x11U)) | 
                      ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_is_rvc) 
                                       << 0x10U)) | 
                       ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_debug_pc) 
                                  >> 0x18U)) | (0xffffff00U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_debug_pc 
                                                            >> 0x20U)) 
                                                   << 8U)))));
    __Vtemp808[3U] = ((0xfffe0000U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_inst))) 
                                      << 0x11U)) | 
                      (0x1ffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_debug_inst 
                                   >> 0xfU)));
    __Vtemp808[4U] = ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_bp_debug_if) 
                                      << 0x1dU)) | 
                      ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_bp_xcpt_if) 
                                       << 0x1cU)) | 
                       ((0xfc000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_debug_fsrc) 
                                        << 0x1aU)) 
                        | ((0x1ffffU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_inst))) 
                                        >> 0xfU)) | 
                           (0xfffe0000U & ((IData)(
                                                   ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_inst)) 
                                                    >> 0x20U)) 
                                           << 0x11U))))));
    VL_EXTEND_WW(159,158, __Vtemp809, __Vtemp808);
    VL_EXTEND_WQ(221,55, __Vtemp812, (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_xcpt_pf_if)) 
                                       << 8U) | (QData)((IData)(
                                                                (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_xcpt_ae_if) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_bp_debug_if) 
                                                                     << 5U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_bp_xcpt_if) 
                                                                        << 4U) 
                                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_debug_fsrc) 
                                                                          << 2U))))))));
    __Vtemp818[0U] = __Vtemp812[0U];
    __Vtemp818[1U] = __Vtemp812[1U];
    __Vtemp818[2U] = __Vtemp812[2U];
    __Vtemp818[3U] = __Vtemp812[3U];
    __Vtemp818[4U] = __Vtemp812[4U];
    __Vtemp818[5U] = __Vtemp812[5U];
    __Vtemp818[6U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_pc_lob) 
                                      << 0x1eU)) | 
                      ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_taken) 
                                       << 0x1dU)) | 
                       __Vtemp812[6U]));
    __Vtemp818[7U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_is_sfb) 
                                      << 0x1eU)) | 
                      (0x3fffffffU & ((0x3fffffe0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_ftq_idx) 
                                          << 5U)) | 
                                      ((0x3ffffff0U 
                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_edge_inst) 
                                           << 4U)) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_pc_lob) 
                                          >> 2U)))));
    __Vtemp818[8U] = ((0xfffffffcU & (__Vtemp809[0U] 
                                      << 2U)) | (0x3fffffffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_0_is_sfb) 
                                                    >> 2U)));
    __Vtemp818[9U] = ((3U & (__Vtemp809[0U] >> 0x1eU)) 
                      | (0xfffffffcU & (__Vtemp809[1U] 
                                        << 2U)));
    __Vtemp818[0xaU] = ((3U & (__Vtemp809[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp809[2U] 
                                          << 2U)));
    __Vtemp818[0xbU] = ((3U & (__Vtemp809[2U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp809[3U] 
                                          << 2U)));
    __Vtemp818[0xcU] = ((3U & (__Vtemp809[3U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp809[4U] 
                                          << 2U)));
    __Vtemp818[0xdU] = ((3U & ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_xcpt_ae_if) 
                                      << 1U)) | (__Vtemp809[4U] 
                                                 >> 0x1eU))) 
                        | (0xfffffffcU & (__Vtemp801[0U] 
                                          << 2U)));
    __Vtemp818[0xeU] = ((3U & (__Vtemp801[0U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp801[1U] 
                                          << 2U)));
    __Vtemp818[0xfU] = ((3U & (__Vtemp801[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp801[2U] 
                                          << 2U)));
    __Vtemp818[0x10U] = ((3U & (__Vtemp801[2U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp801[3U] 
                                           << 2U)));
    __Vtemp818[0x11U] = ((0xffffff00U & (__Vtemp799[0U] 
                                         << 8U)) | 
                         ((3U & (__Vtemp801[3U] >> 0x1eU)) 
                          | (0xfffffffcU & (__Vtemp801[4U] 
                                            << 2U))));
    __Vtemp818[0x12U] = ((0xffU & (__Vtemp799[0U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp799[1U] 
                                           << 8U)));
    __Vtemp818[0x13U] = ((0xffU & (__Vtemp799[1U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp799[2U] 
                                           << 8U)));
    __Vtemp818[0x14U] = ((0xffU & (__Vtemp799[2U] >> 0x18U)) 
                         | (0xffffff00U & ((0xff000000U 
                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_is_sfb) 
                                               << 0x18U)) 
                                           | (__Vtemp799[3U] 
                                              << 8U))));
    __Vtemp818[0x15U] = ((0xfffff800U & (__Vtemp790[0U] 
                                         << 0xbU)) 
                         | ((0xffU & ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_is_sfb) 
                                                >> 8U)) 
                                      | (__Vtemp799[3U] 
                                         >> 0x18U))) 
                            | (0xffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_1_is_sfb) 
                                            >> 8U))));
    __Vtemp818[0x16U] = ((0x7ffU & (__Vtemp790[0U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp790[1U] 
                                                     << 0xbU)));
    __Vtemp818[0x17U] = ((0x7ffU & (__Vtemp790[1U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp790[2U] 
                                                     << 0xbU)));
    __Vtemp818[0x18U] = ((0x7ffU & (__Vtemp790[2U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp790[3U] 
                                                     << 0xbU)));
    __Vtemp818[0x19U] = ((0x7ffU & (__Vtemp790[3U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & ((0xfe000000U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_bp_debug_if) 
                                                         << 0x19U)) 
                                                     | ((0xff000000U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_bp_xcpt_if) 
                                                            << 0x18U)) 
                                                        | ((0xffc00000U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_debug_fsrc) 
                                                               << 0x16U)) 
                                                           | (__Vtemp790[4U] 
                                                              << 0xbU))))));
    VL_EXTEND_WW(827,826, __Vtemp819, __Vtemp818);
    __Vtemp821[0U] = __Vtemp819[0U];
    __Vtemp821[1U] = __Vtemp819[1U];
    __Vtemp821[2U] = __Vtemp819[2U];
    __Vtemp821[3U] = __Vtemp819[3U];
    __Vtemp821[4U] = __Vtemp819[4U];
    __Vtemp821[5U] = __Vtemp819[5U];
    __Vtemp821[6U] = __Vtemp819[6U];
    __Vtemp821[7U] = __Vtemp819[7U];
    __Vtemp821[8U] = __Vtemp819[8U];
    __Vtemp821[9U] = __Vtemp819[9U];
    __Vtemp821[0xaU] = __Vtemp819[0xaU];
    __Vtemp821[0xbU] = __Vtemp819[0xbU];
    __Vtemp821[0xcU] = __Vtemp819[0xcU];
    __Vtemp821[0xdU] = __Vtemp819[0xdU];
    __Vtemp821[0xeU] = __Vtemp819[0xeU];
    __Vtemp821[0xfU] = __Vtemp819[0xfU];
    __Vtemp821[0x10U] = __Vtemp819[0x10U];
    __Vtemp821[0x11U] = __Vtemp819[0x11U];
    __Vtemp821[0x12U] = __Vtemp819[0x12U];
    __Vtemp821[0x13U] = __Vtemp819[0x13U];
    __Vtemp821[0x14U] = __Vtemp819[0x14U];
    __Vtemp821[0x15U] = __Vtemp819[0x15U];
    __Vtemp821[0x16U] = __Vtemp819[0x16U];
    __Vtemp821[0x17U] = __Vtemp819[0x17U];
    __Vtemp821[0x18U] = __Vtemp819[0x18U];
    __Vtemp821[0x19U] = ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_xcpt_pf_if) 
                                         << 0x1cU)) 
                         | ((0xf8000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_xcpt_ae_if) 
                                            << 0x1bU)) 
                            | __Vtemp819[0x19U]));
    VL_EXTEND_WW(864,829, __Vtemp822, __Vtemp821);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0U] 
        = __Vtemp822[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[1U] 
        = __Vtemp822[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[2U] 
        = __Vtemp822[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[3U] 
        = __Vtemp822[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[4U] 
        = __Vtemp822[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[5U] 
        = __Vtemp822[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[6U] 
        = __Vtemp822[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[7U] 
        = __Vtemp822[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[8U] 
        = __Vtemp822[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[9U] 
        = __Vtemp822[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0xaU] 
        = __Vtemp822[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0xbU] 
        = __Vtemp822[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0xcU] 
        = __Vtemp822[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0xdU] 
        = __Vtemp822[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0xeU] 
        = __Vtemp822[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0xfU] 
        = __Vtemp822[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x10U] 
        = __Vtemp822[0x10U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x11U] 
        = __Vtemp822[0x11U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x12U] 
        = __Vtemp822[0x12U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x13U] 
        = __Vtemp822[0x13U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x14U] 
        = __Vtemp822[0x14U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x15U] 
        = __Vtemp822[0x15U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x16U] 
        = __Vtemp822[0x16U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x17U] 
        = __Vtemp822[0x17U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x18U] 
        = __Vtemp822[0x18U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x19U] 
        = __Vtemp822[0x19U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x1aU] 
        = __Vtemp822[0x1aU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x1bU] 
        = __Vtemp786[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x1cU] 
        = __Vtemp786[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x1dU] 
        = __Vtemp786[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x1eU] 
        = __Vtemp786[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x1fU] 
        = __Vtemp786[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x20U] 
        = __Vtemp786[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x21U] 
        = __Vtemp786[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x22U] 
        = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_debug_pc) 
                           << 0x1eU)) | __Vtemp786[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x23U] 
        = ((0x3fffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_debug_pc) 
                           >> 2U)) | (0xc0000000U & 
                                      ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_debug_pc 
                                                >> 0x20U)) 
                                       << 0x1eU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x24U] 
        = ((0xffffff80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_debug_inst 
                           << 7U)) | ((0xffffffc0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_is_rvc) 
                                          << 6U)) | 
                                      (0x3fffffffU 
                                       & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_debug_pc 
                                                   >> 0x20U)) 
                                          >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x25U] 
        = ((0xffffff80U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_inst))) 
                           << 7U)) | (0x7fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_debug_inst 
                                               >> 0x19U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1407[0x26U] 
        = ((0x7fU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_inst))) 
                     >> 0x19U)) | (0xffffff80U & ((IData)(
                                                          ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_2_inst)) 
                                                           >> 0x20U)) 
                                                  << 7U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3906(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3906\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp831[7];
    WData/*255:0*/ __Vtemp832[8];
    WData/*159:0*/ __Vtemp835[5];
    WData/*159:0*/ __Vtemp836[5];
    WData/*95:0*/ __Vtemp844[3];
    WData/*127:0*/ __Vtemp845[4];
    WData/*159:0*/ __Vtemp847[5];
    WData/*159:0*/ __Vtemp854[5];
    WData/*159:0*/ __Vtemp855[5];
    WData/*223:0*/ __Vtemp858[7];
    WData/*831:0*/ __Vtemp864[26];
    WData/*831:0*/ __Vtemp865[26];
    WData/*831:0*/ __Vtemp867[26];
    WData/*863:0*/ __Vtemp868[27];
    // Body
    __Vtemp831[0U] = 0U;
    __Vtemp831[1U] = 0U;
    __Vtemp831[2U] = 0U;
    __Vtemp831[3U] = 0U;
    __Vtemp831[4U] = 0U;
    __Vtemp831[5U] = ((0xfffc0000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_ftq_idx) 
                                       << 0x19U) | 
                                      (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_edge_inst) 
                                        << 0x18U) | 
                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_pc_lob) 
                                        << 0x12U)))) 
                      | (0xfffe0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_taken) 
                                        << 0x11U)));
    __Vtemp831[6U] = ((0xfffc0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_is_sfb) 
                                      << 0x12U)) | 
                      (0x3ffffU & ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_ftq_idx) 
                                                >> 7U)) 
                                   | ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_edge_inst) 
                                                   >> 8U)) 
                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_pc_lob) 
                                         >> 0xeU)))));
    VL_EXTEND_WW(254,220, __Vtemp832, __Vtemp831);
    __Vtemp835[0U] = (0xfe000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_pc) 
                                     << 0x19U));
    __Vtemp835[1U] = ((0x1ffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_pc) 
                                     >> 7U)) | (0xfe000000U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_pc 
                                                            >> 0x20U)) 
                                                   << 0x19U)));
    __Vtemp835[2U] = ((0xfffffffcU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_inst)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_inst)))) 
                                      << 2U)) | ((0xfffffffeU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_is_rvc) 
                                                     << 1U)) 
                                                 | (0x1ffffffU 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_pc 
                                                                >> 0x20U)) 
                                                       >> 7U))));
    __Vtemp835[3U] = ((3U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_inst)))) 
                             >> 0x1eU)) | (0xfffffffcU 
                                           & ((IData)(
                                                      ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_inst)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_inst))) 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp835[4U] = (3U & ((IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_inst))) 
                                     >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WW(139,130, __Vtemp836, __Vtemp835);
    __Vtemp844[0U] = 0U;
    __Vtemp844[1U] = 0U;
    __Vtemp844[2U] = ((0xff800000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_ftq_idx) 
                                      << 0x17U)) | 
                      ((0xffc00000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_edge_inst) 
                                       << 0x16U)) | 
                       ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_pc_lob) 
                                        << 0x10U)) 
                        | (0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_taken) 
                                          << 0xfU)))));
    VL_EXTEND_WW(112,92, __Vtemp845, __Vtemp844);
    VL_EXTEND_WI(134,1, __Vtemp847, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_xcpt_pf_if));
    __Vtemp854[0U] = 0U;
    __Vtemp854[1U] = (0xffffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_debug_pc) 
                                     << 8U));
    __Vtemp854[2U] = ((0xfffe0000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_debug_inst 
                                      << 0x11U)) | 
                      ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_is_rvc) 
                                       << 0x10U)) | 
                       ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_debug_pc) 
                                  >> 0x18U)) | (0xffffff00U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_debug_pc 
                                                            >> 0x20U)) 
                                                   << 8U)))));
    __Vtemp854[3U] = ((0xfffe0000U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_inst))) 
                                      << 0x11U)) | 
                      (0x1ffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_debug_inst 
                                   >> 0xfU)));
    __Vtemp854[4U] = ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_bp_debug_if) 
                                      << 0x1dU)) | 
                      ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_bp_xcpt_if) 
                                       << 0x1cU)) | 
                       ((0xfc000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_debug_fsrc) 
                                        << 0x1aU)) 
                        | ((0x1ffffU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_inst))) 
                                        >> 0xfU)) | 
                           (0xfffe0000U & ((IData)(
                                                   ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_inst)) 
                                                    >> 0x20U)) 
                                           << 0x11U))))));
    VL_EXTEND_WW(159,158, __Vtemp855, __Vtemp854);
    VL_EXTEND_WQ(221,55, __Vtemp858, (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_xcpt_pf_if)) 
                                       << 8U) | (QData)((IData)(
                                                                (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_xcpt_ae_if) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_bp_debug_if) 
                                                                     << 5U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_bp_xcpt_if) 
                                                                        << 4U) 
                                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_debug_fsrc) 
                                                                          << 2U))))))));
    __Vtemp864[0U] = __Vtemp858[0U];
    __Vtemp864[1U] = __Vtemp858[1U];
    __Vtemp864[2U] = __Vtemp858[2U];
    __Vtemp864[3U] = __Vtemp858[3U];
    __Vtemp864[4U] = __Vtemp858[4U];
    __Vtemp864[5U] = __Vtemp858[5U];
    __Vtemp864[6U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_pc_lob) 
                                      << 0x1eU)) | 
                      ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_taken) 
                                       << 0x1dU)) | 
                       __Vtemp858[6U]));
    __Vtemp864[7U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_is_sfb) 
                                      << 0x1eU)) | 
                      (0x3fffffffU & ((0x3fffffe0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_ftq_idx) 
                                          << 5U)) | 
                                      ((0x3ffffff0U 
                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_edge_inst) 
                                           << 4U)) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_pc_lob) 
                                          >> 2U)))));
    __Vtemp864[8U] = ((0xfffffffcU & (__Vtemp855[0U] 
                                      << 2U)) | (0x3fffffffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_21_is_sfb) 
                                                    >> 2U)));
    __Vtemp864[9U] = ((3U & (__Vtemp855[0U] >> 0x1eU)) 
                      | (0xfffffffcU & (__Vtemp855[1U] 
                                        << 2U)));
    __Vtemp864[0xaU] = ((3U & (__Vtemp855[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp855[2U] 
                                          << 2U)));
    __Vtemp864[0xbU] = ((3U & (__Vtemp855[2U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp855[3U] 
                                          << 2U)));
    __Vtemp864[0xcU] = ((3U & (__Vtemp855[3U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp855[4U] 
                                          << 2U)));
    __Vtemp864[0xdU] = ((3U & ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_xcpt_ae_if) 
                                      << 1U)) | (__Vtemp855[4U] 
                                                 >> 0x1eU))) 
                        | (0xfffffffcU & (__Vtemp847[0U] 
                                          << 2U)));
    __Vtemp864[0xeU] = ((3U & (__Vtemp847[0U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp847[1U] 
                                          << 2U)));
    __Vtemp864[0xfU] = ((3U & (__Vtemp847[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp847[2U] 
                                          << 2U)));
    __Vtemp864[0x10U] = ((3U & (__Vtemp847[2U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp847[3U] 
                                           << 2U)));
    __Vtemp864[0x11U] = ((0xffffff00U & (__Vtemp845[0U] 
                                         << 8U)) | 
                         ((3U & (__Vtemp847[3U] >> 0x1eU)) 
                          | (0xfffffffcU & (__Vtemp847[4U] 
                                            << 2U))));
    __Vtemp864[0x12U] = ((0xffU & (__Vtemp845[0U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp845[1U] 
                                           << 8U)));
    __Vtemp864[0x13U] = ((0xffU & (__Vtemp845[1U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp845[2U] 
                                           << 8U)));
    __Vtemp864[0x14U] = ((0xffU & (__Vtemp845[2U] >> 0x18U)) 
                         | (0xffffff00U & ((0xff000000U 
                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_is_sfb) 
                                               << 0x18U)) 
                                           | (__Vtemp845[3U] 
                                              << 8U))));
    __Vtemp864[0x15U] = ((0xfffff800U & (__Vtemp836[0U] 
                                         << 0xbU)) 
                         | ((0xffU & ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_is_sfb) 
                                                >> 8U)) 
                                      | (__Vtemp845[3U] 
                                         >> 0x18U))) 
                            | (0xffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_22_is_sfb) 
                                            >> 8U))));
    __Vtemp864[0x16U] = ((0x7ffU & (__Vtemp836[0U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp836[1U] 
                                                     << 0xbU)));
    __Vtemp864[0x17U] = ((0x7ffU & (__Vtemp836[1U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp836[2U] 
                                                     << 0xbU)));
    __Vtemp864[0x18U] = ((0x7ffU & (__Vtemp836[2U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp836[3U] 
                                                     << 0xbU)));
    __Vtemp864[0x19U] = ((0x7ffU & (__Vtemp836[3U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & ((0xfe000000U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_bp_debug_if) 
                                                         << 0x19U)) 
                                                     | ((0xff000000U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_bp_xcpt_if) 
                                                            << 0x18U)) 
                                                        | ((0xffc00000U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_debug_fsrc) 
                                                               << 0x16U)) 
                                                           | (__Vtemp836[4U] 
                                                              << 0xbU))))));
    VL_EXTEND_WW(827,826, __Vtemp865, __Vtemp864);
    __Vtemp867[0U] = __Vtemp865[0U];
    __Vtemp867[1U] = __Vtemp865[1U];
    __Vtemp867[2U] = __Vtemp865[2U];
    __Vtemp867[3U] = __Vtemp865[3U];
    __Vtemp867[4U] = __Vtemp865[4U];
    __Vtemp867[5U] = __Vtemp865[5U];
    __Vtemp867[6U] = __Vtemp865[6U];
    __Vtemp867[7U] = __Vtemp865[7U];
    __Vtemp867[8U] = __Vtemp865[8U];
    __Vtemp867[9U] = __Vtemp865[9U];
    __Vtemp867[0xaU] = __Vtemp865[0xaU];
    __Vtemp867[0xbU] = __Vtemp865[0xbU];
    __Vtemp867[0xcU] = __Vtemp865[0xcU];
    __Vtemp867[0xdU] = __Vtemp865[0xdU];
    __Vtemp867[0xeU] = __Vtemp865[0xeU];
    __Vtemp867[0xfU] = __Vtemp865[0xfU];
    __Vtemp867[0x10U] = __Vtemp865[0x10U];
    __Vtemp867[0x11U] = __Vtemp865[0x11U];
    __Vtemp867[0x12U] = __Vtemp865[0x12U];
    __Vtemp867[0x13U] = __Vtemp865[0x13U];
    __Vtemp867[0x14U] = __Vtemp865[0x14U];
    __Vtemp867[0x15U] = __Vtemp865[0x15U];
    __Vtemp867[0x16U] = __Vtemp865[0x16U];
    __Vtemp867[0x17U] = __Vtemp865[0x17U];
    __Vtemp867[0x18U] = __Vtemp865[0x18U];
    __Vtemp867[0x19U] = ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_xcpt_pf_if) 
                                         << 0x1cU)) 
                         | ((0xf8000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_xcpt_ae_if) 
                                            << 0x1bU)) 
                            | __Vtemp865[0x19U]));
    VL_EXTEND_WW(864,829, __Vtemp868, __Vtemp867);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0U] 
        = __Vtemp868[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[1U] 
        = __Vtemp868[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[2U] 
        = __Vtemp868[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[3U] 
        = __Vtemp868[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[4U] 
        = __Vtemp868[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[5U] 
        = __Vtemp868[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[6U] 
        = __Vtemp868[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[7U] 
        = __Vtemp868[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[8U] 
        = __Vtemp868[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[9U] 
        = __Vtemp868[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0xaU] 
        = __Vtemp868[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0xbU] 
        = __Vtemp868[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0xcU] 
        = __Vtemp868[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0xdU] 
        = __Vtemp868[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0xeU] 
        = __Vtemp868[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0xfU] 
        = __Vtemp868[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x10U] 
        = __Vtemp868[0x10U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x11U] 
        = __Vtemp868[0x11U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x12U] 
        = __Vtemp868[0x12U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x13U] 
        = __Vtemp868[0x13U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x14U] 
        = __Vtemp868[0x14U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x15U] 
        = __Vtemp868[0x15U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x16U] 
        = __Vtemp868[0x16U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x17U] 
        = __Vtemp868[0x17U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x18U] 
        = __Vtemp868[0x18U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x19U] 
        = __Vtemp868[0x19U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x1aU] 
        = __Vtemp868[0x1aU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x1bU] 
        = __Vtemp832[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x1cU] 
        = __Vtemp832[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x1dU] 
        = __Vtemp832[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x1eU] 
        = __Vtemp832[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x1fU] 
        = __Vtemp832[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x20U] 
        = __Vtemp832[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x21U] 
        = __Vtemp832[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x22U] 
        = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_debug_pc) 
                           << 0x1eU)) | __Vtemp832[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x23U] 
        = ((0x3fffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_debug_pc) 
                           >> 2U)) | (0xc0000000U & 
                                      ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_debug_pc 
                                                >> 0x20U)) 
                                       << 0x1eU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x24U] 
        = ((0xffffff80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_debug_inst 
                           << 7U)) | ((0xffffffc0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_is_rvc) 
                                          << 6U)) | 
                                      (0x3fffffffU 
                                       & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_debug_pc 
                                                   >> 0x20U)) 
                                          >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x25U] 
        = ((0xffffff80U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_inst))) 
                           << 7U)) | (0x7fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_debug_inst 
                                               >> 0x19U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3066[0x26U] 
        = ((0x7fU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_inst))) 
                     >> 0x19U)) | (0xffffff80U & ((IData)(
                                                          ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_23_inst)) 
                                                           >> 0x20U)) 
                                                  << 7U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3907(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3907\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp877[7];
    WData/*255:0*/ __Vtemp878[8];
    WData/*159:0*/ __Vtemp881[5];
    WData/*159:0*/ __Vtemp882[5];
    WData/*95:0*/ __Vtemp890[3];
    WData/*127:0*/ __Vtemp891[4];
    WData/*159:0*/ __Vtemp893[5];
    WData/*159:0*/ __Vtemp900[5];
    WData/*159:0*/ __Vtemp901[5];
    WData/*223:0*/ __Vtemp904[7];
    WData/*831:0*/ __Vtemp910[26];
    WData/*831:0*/ __Vtemp911[26];
    WData/*831:0*/ __Vtemp913[26];
    WData/*863:0*/ __Vtemp914[27];
    // Body
    __Vtemp877[0U] = 0U;
    __Vtemp877[1U] = 0U;
    __Vtemp877[2U] = 0U;
    __Vtemp877[3U] = 0U;
    __Vtemp877[4U] = 0U;
    __Vtemp877[5U] = ((0xfffc0000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_ftq_idx) 
                                       << 0x19U) | 
                                      (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_edge_inst) 
                                        << 0x18U) | 
                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_pc_lob) 
                                        << 0x12U)))) 
                      | (0xfffe0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_taken) 
                                        << 0x11U)));
    __Vtemp877[6U] = ((0xfffc0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_is_sfb) 
                                      << 0x12U)) | 
                      (0x3ffffU & ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_ftq_idx) 
                                                >> 7U)) 
                                   | ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_edge_inst) 
                                                   >> 8U)) 
                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_pc_lob) 
                                         >> 0xeU)))));
    VL_EXTEND_WW(254,220, __Vtemp878, __Vtemp877);
    __Vtemp881[0U] = (0xfe000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_pc) 
                                     << 0x19U));
    __Vtemp881[1U] = ((0x1ffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_pc) 
                                     >> 7U)) | (0xfe000000U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_pc 
                                                            >> 0x20U)) 
                                                   << 0x19U)));
    __Vtemp881[2U] = ((0xfffffffcU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_inst)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_inst)))) 
                                      << 2U)) | ((0xfffffffeU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_is_rvc) 
                                                     << 1U)) 
                                                 | (0x1ffffffU 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_pc 
                                                                >> 0x20U)) 
                                                       >> 7U))));
    __Vtemp881[3U] = ((3U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_inst)))) 
                             >> 0x1eU)) | (0xfffffffcU 
                                           & ((IData)(
                                                      ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_inst)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_inst))) 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp881[4U] = (3U & ((IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_inst))) 
                                     >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WW(139,130, __Vtemp882, __Vtemp881);
    __Vtemp890[0U] = 0U;
    __Vtemp890[1U] = 0U;
    __Vtemp890[2U] = ((0xff800000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_ftq_idx) 
                                      << 0x17U)) | 
                      ((0xffc00000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_edge_inst) 
                                       << 0x16U)) | 
                       ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_pc_lob) 
                                        << 0x10U)) 
                        | (0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_taken) 
                                          << 0xfU)))));
    VL_EXTEND_WW(112,92, __Vtemp891, __Vtemp890);
    VL_EXTEND_WI(134,1, __Vtemp893, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_xcpt_pf_if));
    __Vtemp900[0U] = 0U;
    __Vtemp900[1U] = (0xffffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_debug_pc) 
                                     << 8U));
    __Vtemp900[2U] = ((0xfffe0000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_debug_inst 
                                      << 0x11U)) | 
                      ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_is_rvc) 
                                       << 0x10U)) | 
                       ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_debug_pc) 
                                  >> 0x18U)) | (0xffffff00U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_debug_pc 
                                                            >> 0x20U)) 
                                                   << 8U)))));
    __Vtemp900[3U] = ((0xfffe0000U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_inst))) 
                                      << 0x11U)) | 
                      (0x1ffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_debug_inst 
                                   >> 0xfU)));
    __Vtemp900[4U] = ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_bp_debug_if) 
                                      << 0x1dU)) | 
                      ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_bp_xcpt_if) 
                                       << 0x1cU)) | 
                       ((0xfc000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_debug_fsrc) 
                                        << 0x1aU)) 
                        | ((0x1ffffU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_inst))) 
                                        >> 0xfU)) | 
                           (0xfffe0000U & ((IData)(
                                                   ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_inst)) 
                                                    >> 0x20U)) 
                                           << 0x11U))))));
    VL_EXTEND_WW(159,158, __Vtemp901, __Vtemp900);
    VL_EXTEND_WQ(221,55, __Vtemp904, (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_xcpt_pf_if)) 
                                       << 8U) | (QData)((IData)(
                                                                (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_xcpt_ae_if) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_bp_debug_if) 
                                                                     << 5U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_bp_xcpt_if) 
                                                                        << 4U) 
                                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_debug_fsrc) 
                                                                          << 2U))))))));
    __Vtemp910[0U] = __Vtemp904[0U];
    __Vtemp910[1U] = __Vtemp904[1U];
    __Vtemp910[2U] = __Vtemp904[2U];
    __Vtemp910[3U] = __Vtemp904[3U];
    __Vtemp910[4U] = __Vtemp904[4U];
    __Vtemp910[5U] = __Vtemp904[5U];
    __Vtemp910[6U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_pc_lob) 
                                      << 0x1eU)) | 
                      ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_taken) 
                                       << 0x1dU)) | 
                       __Vtemp904[6U]));
    __Vtemp910[7U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_is_sfb) 
                                      << 0x1eU)) | 
                      (0x3fffffffU & ((0x3fffffe0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_ftq_idx) 
                                          << 5U)) | 
                                      ((0x3ffffff0U 
                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_edge_inst) 
                                           << 4U)) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_pc_lob) 
                                          >> 2U)))));
    __Vtemp910[8U] = ((0xfffffffcU & (__Vtemp901[0U] 
                                      << 2U)) | (0x3fffffffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_6_is_sfb) 
                                                    >> 2U)));
    __Vtemp910[9U] = ((3U & (__Vtemp901[0U] >> 0x1eU)) 
                      | (0xfffffffcU & (__Vtemp901[1U] 
                                        << 2U)));
    __Vtemp910[0xaU] = ((3U & (__Vtemp901[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp901[2U] 
                                          << 2U)));
    __Vtemp910[0xbU] = ((3U & (__Vtemp901[2U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp901[3U] 
                                          << 2U)));
    __Vtemp910[0xcU] = ((3U & (__Vtemp901[3U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp901[4U] 
                                          << 2U)));
    __Vtemp910[0xdU] = ((3U & ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_xcpt_ae_if) 
                                      << 1U)) | (__Vtemp901[4U] 
                                                 >> 0x1eU))) 
                        | (0xfffffffcU & (__Vtemp893[0U] 
                                          << 2U)));
    __Vtemp910[0xeU] = ((3U & (__Vtemp893[0U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp893[1U] 
                                          << 2U)));
    __Vtemp910[0xfU] = ((3U & (__Vtemp893[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp893[2U] 
                                          << 2U)));
    __Vtemp910[0x10U] = ((3U & (__Vtemp893[2U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp893[3U] 
                                           << 2U)));
    __Vtemp910[0x11U] = ((0xffffff00U & (__Vtemp891[0U] 
                                         << 8U)) | 
                         ((3U & (__Vtemp893[3U] >> 0x1eU)) 
                          | (0xfffffffcU & (__Vtemp893[4U] 
                                            << 2U))));
    __Vtemp910[0x12U] = ((0xffU & (__Vtemp891[0U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp891[1U] 
                                           << 8U)));
    __Vtemp910[0x13U] = ((0xffU & (__Vtemp891[1U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp891[2U] 
                                           << 8U)));
    __Vtemp910[0x14U] = ((0xffU & (__Vtemp891[2U] >> 0x18U)) 
                         | (0xffffff00U & ((0xff000000U 
                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_is_sfb) 
                                               << 0x18U)) 
                                           | (__Vtemp891[3U] 
                                              << 8U))));
    __Vtemp910[0x15U] = ((0xfffff800U & (__Vtemp882[0U] 
                                         << 0xbU)) 
                         | ((0xffU & ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_is_sfb) 
                                                >> 8U)) 
                                      | (__Vtemp891[3U] 
                                         >> 0x18U))) 
                            | (0xffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_7_is_sfb) 
                                            >> 8U))));
    __Vtemp910[0x16U] = ((0x7ffU & (__Vtemp882[0U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp882[1U] 
                                                     << 0xbU)));
    __Vtemp910[0x17U] = ((0x7ffU & (__Vtemp882[1U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp882[2U] 
                                                     << 0xbU)));
    __Vtemp910[0x18U] = ((0x7ffU & (__Vtemp882[2U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp882[3U] 
                                                     << 0xbU)));
    __Vtemp910[0x19U] = ((0x7ffU & (__Vtemp882[3U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & ((0xfe000000U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_bp_debug_if) 
                                                         << 0x19U)) 
                                                     | ((0xff000000U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_bp_xcpt_if) 
                                                            << 0x18U)) 
                                                        | ((0xffc00000U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_debug_fsrc) 
                                                               << 0x16U)) 
                                                           | (__Vtemp882[4U] 
                                                              << 0xbU))))));
    VL_EXTEND_WW(827,826, __Vtemp911, __Vtemp910);
    __Vtemp913[0U] = __Vtemp911[0U];
    __Vtemp913[1U] = __Vtemp911[1U];
    __Vtemp913[2U] = __Vtemp911[2U];
    __Vtemp913[3U] = __Vtemp911[3U];
    __Vtemp913[4U] = __Vtemp911[4U];
    __Vtemp913[5U] = __Vtemp911[5U];
    __Vtemp913[6U] = __Vtemp911[6U];
    __Vtemp913[7U] = __Vtemp911[7U];
    __Vtemp913[8U] = __Vtemp911[8U];
    __Vtemp913[9U] = __Vtemp911[9U];
    __Vtemp913[0xaU] = __Vtemp911[0xaU];
    __Vtemp913[0xbU] = __Vtemp911[0xbU];
    __Vtemp913[0xcU] = __Vtemp911[0xcU];
    __Vtemp913[0xdU] = __Vtemp911[0xdU];
    __Vtemp913[0xeU] = __Vtemp911[0xeU];
    __Vtemp913[0xfU] = __Vtemp911[0xfU];
    __Vtemp913[0x10U] = __Vtemp911[0x10U];
    __Vtemp913[0x11U] = __Vtemp911[0x11U];
    __Vtemp913[0x12U] = __Vtemp911[0x12U];
    __Vtemp913[0x13U] = __Vtemp911[0x13U];
    __Vtemp913[0x14U] = __Vtemp911[0x14U];
    __Vtemp913[0x15U] = __Vtemp911[0x15U];
    __Vtemp913[0x16U] = __Vtemp911[0x16U];
    __Vtemp913[0x17U] = __Vtemp911[0x17U];
    __Vtemp913[0x18U] = __Vtemp911[0x18U];
    __Vtemp913[0x19U] = ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_xcpt_pf_if) 
                                         << 0x1cU)) 
                         | ((0xf8000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_xcpt_ae_if) 
                                            << 0x1bU)) 
                            | __Vtemp911[0x19U]));
    VL_EXTEND_WW(864,829, __Vtemp914, __Vtemp913);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0U] 
        = __Vtemp914[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[1U] 
        = __Vtemp914[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[2U] 
        = __Vtemp914[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[3U] 
        = __Vtemp914[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[4U] 
        = __Vtemp914[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[5U] 
        = __Vtemp914[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[6U] 
        = __Vtemp914[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[7U] 
        = __Vtemp914[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[8U] 
        = __Vtemp914[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[9U] 
        = __Vtemp914[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0xaU] 
        = __Vtemp914[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0xbU] 
        = __Vtemp914[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0xcU] 
        = __Vtemp914[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0xdU] 
        = __Vtemp914[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0xeU] 
        = __Vtemp914[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0xfU] 
        = __Vtemp914[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x10U] 
        = __Vtemp914[0x10U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x11U] 
        = __Vtemp914[0x11U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x12U] 
        = __Vtemp914[0x12U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x13U] 
        = __Vtemp914[0x13U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x14U] 
        = __Vtemp914[0x14U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x15U] 
        = __Vtemp914[0x15U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x16U] 
        = __Vtemp914[0x16U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x17U] 
        = __Vtemp914[0x17U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x18U] 
        = __Vtemp914[0x18U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x19U] 
        = __Vtemp914[0x19U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x1aU] 
        = __Vtemp914[0x1aU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x1bU] 
        = __Vtemp878[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x1cU] 
        = __Vtemp878[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x1dU] 
        = __Vtemp878[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x1eU] 
        = __Vtemp878[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x1fU] 
        = __Vtemp878[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x20U] 
        = __Vtemp878[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x21U] 
        = __Vtemp878[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x22U] 
        = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_debug_pc) 
                           << 0x1eU)) | __Vtemp878[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x23U] 
        = ((0x3fffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_debug_pc) 
                           >> 2U)) | (0xc0000000U & 
                                      ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_debug_pc 
                                                >> 0x20U)) 
                                       << 0x1eU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x24U] 
        = ((0xffffff80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_debug_inst 
                           << 7U)) | ((0xffffffc0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_is_rvc) 
                                          << 6U)) | 
                                      (0x3fffffffU 
                                       & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_debug_pc 
                                                   >> 0x20U)) 
                                          >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x25U] 
        = ((0xffffff80U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_inst))) 
                           << 7U)) | (0x7fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_debug_inst 
                                               >> 0x19U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1881[0x26U] 
        = ((0x7fU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_inst))) 
                     >> 0x19U)) | (0xffffff80U & ((IData)(
                                                          ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_8_inst)) 
                                                           >> 0x20U)) 
                                                  << 7U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3908(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3908\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp923[7];
    WData/*255:0*/ __Vtemp924[8];
    WData/*159:0*/ __Vtemp927[5];
    WData/*159:0*/ __Vtemp928[5];
    WData/*95:0*/ __Vtemp936[3];
    WData/*127:0*/ __Vtemp937[4];
    WData/*159:0*/ __Vtemp939[5];
    WData/*159:0*/ __Vtemp946[5];
    WData/*159:0*/ __Vtemp947[5];
    WData/*223:0*/ __Vtemp950[7];
    WData/*831:0*/ __Vtemp956[26];
    WData/*831:0*/ __Vtemp957[26];
    WData/*831:0*/ __Vtemp959[26];
    WData/*863:0*/ __Vtemp960[27];
    // Body
    __Vtemp923[0U] = 0U;
    __Vtemp923[1U] = 0U;
    __Vtemp923[2U] = 0U;
    __Vtemp923[3U] = 0U;
    __Vtemp923[4U] = 0U;
    __Vtemp923[5U] = ((0xfffc0000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_ftq_idx) 
                                       << 0x19U) | 
                                      (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_edge_inst) 
                                        << 0x18U) | 
                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_pc_lob) 
                                        << 0x12U)))) 
                      | (0xfffe0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_taken) 
                                        << 0x11U)));
    __Vtemp923[6U] = ((0xfffc0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_is_sfb) 
                                      << 0x12U)) | 
                      (0x3ffffU & ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_ftq_idx) 
                                                >> 7U)) 
                                   | ((0x3ffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_edge_inst) 
                                                   >> 8U)) 
                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_pc_lob) 
                                         >> 0xeU)))));
    VL_EXTEND_WW(254,220, __Vtemp924, __Vtemp923);
    __Vtemp927[0U] = (0xfe000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_pc) 
                                     << 0x19U));
    __Vtemp927[1U] = ((0x1ffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_pc) 
                                     >> 7U)) | (0xfe000000U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_pc 
                                                            >> 0x20U)) 
                                                   << 0x19U)));
    __Vtemp927[2U] = ((0xfffffffcU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_inst)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_inst)))) 
                                      << 2U)) | ((0xfffffffeU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_is_rvc) 
                                                     << 1U)) 
                                                 | (0x1ffffffU 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_pc 
                                                                >> 0x20U)) 
                                                       >> 7U))));
    __Vtemp927[3U] = ((3U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_inst)))) 
                             >> 0x1eU)) | (0xfffffffcU 
                                           & ((IData)(
                                                      ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_inst)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_inst))) 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp927[4U] = (3U & ((IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_inst)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_inst))) 
                                     >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WW(139,130, __Vtemp928, __Vtemp927);
    __Vtemp936[0U] = 0U;
    __Vtemp936[1U] = 0U;
    __Vtemp936[2U] = ((0xff800000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_ftq_idx) 
                                      << 0x17U)) | 
                      ((0xffc00000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_edge_inst) 
                                       << 0x16U)) | 
                       ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_pc_lob) 
                                        << 0x10U)) 
                        | (0xffff8000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_taken) 
                                          << 0xfU)))));
    VL_EXTEND_WW(112,92, __Vtemp937, __Vtemp936);
    VL_EXTEND_WI(134,1, __Vtemp939, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_xcpt_pf_if));
    __Vtemp946[0U] = 0U;
    __Vtemp946[1U] = (0xffffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_debug_pc) 
                                     << 8U));
    __Vtemp946[2U] = ((0xfffe0000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_debug_inst 
                                      << 0x11U)) | 
                      ((0xffff0000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_is_rvc) 
                                       << 0x10U)) | 
                       ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_debug_pc) 
                                  >> 0x18U)) | (0xffffff00U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_debug_pc 
                                                            >> 0x20U)) 
                                                   << 8U)))));
    __Vtemp946[3U] = ((0xfffe0000U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_inst))) 
                                      << 0x11U)) | 
                      (0x1ffffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_debug_inst 
                                   >> 0xfU)));
    __Vtemp946[4U] = ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_bp_debug_if) 
                                      << 0x1dU)) | 
                      ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_bp_xcpt_if) 
                                       << 0x1cU)) | 
                       ((0xfc000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_debug_fsrc) 
                                        << 0x1aU)) 
                        | ((0x1ffffU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_inst))) 
                                        >> 0xfU)) | 
                           (0xfffe0000U & ((IData)(
                                                   ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_inst)) 
                                                    >> 0x20U)) 
                                           << 0x11U))))));
    VL_EXTEND_WW(159,158, __Vtemp947, __Vtemp946);
    VL_EXTEND_WQ(221,55, __Vtemp950, (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_xcpt_pf_if)) 
                                       << 8U) | (QData)((IData)(
                                                                (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_xcpt_ae_if) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_bp_debug_if) 
                                                                     << 5U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_bp_xcpt_if) 
                                                                        << 4U) 
                                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_debug_fsrc) 
                                                                          << 2U))))))));
    __Vtemp956[0U] = __Vtemp950[0U];
    __Vtemp956[1U] = __Vtemp950[1U];
    __Vtemp956[2U] = __Vtemp950[2U];
    __Vtemp956[3U] = __Vtemp950[3U];
    __Vtemp956[4U] = __Vtemp950[4U];
    __Vtemp956[5U] = __Vtemp950[5U];
    __Vtemp956[6U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_pc_lob) 
                                      << 0x1eU)) | 
                      ((0xe0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_taken) 
                                       << 0x1dU)) | 
                       __Vtemp950[6U]));
    __Vtemp956[7U] = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_is_sfb) 
                                      << 0x1eU)) | 
                      (0x3fffffffU & ((0x3fffffe0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_ftq_idx) 
                                          << 5U)) | 
                                      ((0x3ffffff0U 
                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_edge_inst) 
                                           << 4U)) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_pc_lob) 
                                          >> 2U)))));
    __Vtemp956[8U] = ((0xfffffffcU & (__Vtemp947[0U] 
                                      << 2U)) | (0x3fffffffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_9_is_sfb) 
                                                    >> 2U)));
    __Vtemp956[9U] = ((3U & (__Vtemp947[0U] >> 0x1eU)) 
                      | (0xfffffffcU & (__Vtemp947[1U] 
                                        << 2U)));
    __Vtemp956[0xaU] = ((3U & (__Vtemp947[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp947[2U] 
                                          << 2U)));
    __Vtemp956[0xbU] = ((3U & (__Vtemp947[2U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp947[3U] 
                                          << 2U)));
    __Vtemp956[0xcU] = ((3U & (__Vtemp947[3U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp947[4U] 
                                          << 2U)));
    __Vtemp956[0xdU] = ((3U & ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_xcpt_ae_if) 
                                      << 1U)) | (__Vtemp947[4U] 
                                                 >> 0x1eU))) 
                        | (0xfffffffcU & (__Vtemp939[0U] 
                                          << 2U)));
    __Vtemp956[0xeU] = ((3U & (__Vtemp939[0U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp939[1U] 
                                          << 2U)));
    __Vtemp956[0xfU] = ((3U & (__Vtemp939[1U] >> 0x1eU)) 
                        | (0xfffffffcU & (__Vtemp939[2U] 
                                          << 2U)));
    __Vtemp956[0x10U] = ((3U & (__Vtemp939[2U] >> 0x1eU)) 
                         | (0xfffffffcU & (__Vtemp939[3U] 
                                           << 2U)));
    __Vtemp956[0x11U] = ((0xffffff00U & (__Vtemp937[0U] 
                                         << 8U)) | 
                         ((3U & (__Vtemp939[3U] >> 0x1eU)) 
                          | (0xfffffffcU & (__Vtemp939[4U] 
                                            << 2U))));
    __Vtemp956[0x12U] = ((0xffU & (__Vtemp937[0U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp937[1U] 
                                           << 8U)));
    __Vtemp956[0x13U] = ((0xffU & (__Vtemp937[1U] >> 0x18U)) 
                         | (0xffffff00U & (__Vtemp937[2U] 
                                           << 8U)));
    __Vtemp956[0x14U] = ((0xffU & (__Vtemp937[2U] >> 0x18U)) 
                         | (0xffffff00U & ((0xff000000U 
                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_is_sfb) 
                                               << 0x18U)) 
                                           | (__Vtemp937[3U] 
                                              << 8U))));
    __Vtemp956[0x15U] = ((0xfffff800U & (__Vtemp928[0U] 
                                         << 0xbU)) 
                         | ((0xffU & ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_is_sfb) 
                                                >> 8U)) 
                                      | (__Vtemp937[3U] 
                                         >> 0x18U))) 
                            | (0xffff00U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_10_is_sfb) 
                                            >> 8U))));
    __Vtemp956[0x16U] = ((0x7ffU & (__Vtemp928[0U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp928[1U] 
                                                     << 0xbU)));
    __Vtemp956[0x17U] = ((0x7ffU & (__Vtemp928[1U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp928[2U] 
                                                     << 0xbU)));
    __Vtemp956[0x18U] = ((0x7ffU & (__Vtemp928[2U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & (__Vtemp928[3U] 
                                                     << 0xbU)));
    __Vtemp956[0x19U] = ((0x7ffU & (__Vtemp928[3U] 
                                    >> 0x15U)) | (0xfffff800U 
                                                  & ((0xfe000000U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_bp_debug_if) 
                                                         << 0x19U)) 
                                                     | ((0xff000000U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_bp_xcpt_if) 
                                                            << 0x18U)) 
                                                        | ((0xffc00000U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_debug_fsrc) 
                                                               << 0x16U)) 
                                                           | (__Vtemp928[4U] 
                                                              << 0xbU))))));
    VL_EXTEND_WW(827,826, __Vtemp957, __Vtemp956);
    __Vtemp959[0U] = __Vtemp957[0U];
    __Vtemp959[1U] = __Vtemp957[1U];
    __Vtemp959[2U] = __Vtemp957[2U];
    __Vtemp959[3U] = __Vtemp957[3U];
    __Vtemp959[4U] = __Vtemp957[4U];
    __Vtemp959[5U] = __Vtemp957[5U];
    __Vtemp959[6U] = __Vtemp957[6U];
    __Vtemp959[7U] = __Vtemp957[7U];
    __Vtemp959[8U] = __Vtemp957[8U];
    __Vtemp959[9U] = __Vtemp957[9U];
    __Vtemp959[0xaU] = __Vtemp957[0xaU];
    __Vtemp959[0xbU] = __Vtemp957[0xbU];
    __Vtemp959[0xcU] = __Vtemp957[0xcU];
    __Vtemp959[0xdU] = __Vtemp957[0xdU];
    __Vtemp959[0xeU] = __Vtemp957[0xeU];
    __Vtemp959[0xfU] = __Vtemp957[0xfU];
    __Vtemp959[0x10U] = __Vtemp957[0x10U];
    __Vtemp959[0x11U] = __Vtemp957[0x11U];
    __Vtemp959[0x12U] = __Vtemp957[0x12U];
    __Vtemp959[0x13U] = __Vtemp957[0x13U];
    __Vtemp959[0x14U] = __Vtemp957[0x14U];
    __Vtemp959[0x15U] = __Vtemp957[0x15U];
    __Vtemp959[0x16U] = __Vtemp957[0x16U];
    __Vtemp959[0x17U] = __Vtemp957[0x17U];
    __Vtemp959[0x18U] = __Vtemp957[0x18U];
    __Vtemp959[0x19U] = ((0xf0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_xcpt_pf_if) 
                                         << 0x1cU)) 
                         | ((0xf8000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_xcpt_ae_if) 
                                            << 0x1bU)) 
                            | __Vtemp957[0x19U]));
    VL_EXTEND_WW(864,829, __Vtemp960, __Vtemp959);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0U] 
        = __Vtemp960[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[1U] 
        = __Vtemp960[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[2U] 
        = __Vtemp960[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[3U] 
        = __Vtemp960[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[4U] 
        = __Vtemp960[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[5U] 
        = __Vtemp960[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[6U] 
        = __Vtemp960[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[7U] 
        = __Vtemp960[7U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[8U] 
        = __Vtemp960[8U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[9U] 
        = __Vtemp960[9U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0xaU] 
        = __Vtemp960[0xaU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0xbU] 
        = __Vtemp960[0xbU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0xcU] 
        = __Vtemp960[0xcU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0xdU] 
        = __Vtemp960[0xdU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0xeU] 
        = __Vtemp960[0xeU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0xfU] 
        = __Vtemp960[0xfU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x10U] 
        = __Vtemp960[0x10U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x11U] 
        = __Vtemp960[0x11U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x12U] 
        = __Vtemp960[0x12U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x13U] 
        = __Vtemp960[0x13U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x14U] 
        = __Vtemp960[0x14U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x15U] 
        = __Vtemp960[0x15U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x16U] 
        = __Vtemp960[0x16U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x17U] 
        = __Vtemp960[0x17U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x18U] 
        = __Vtemp960[0x18U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x19U] 
        = __Vtemp960[0x19U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x1aU] 
        = __Vtemp960[0x1aU];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x1bU] 
        = __Vtemp924[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x1cU] 
        = __Vtemp924[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x1dU] 
        = __Vtemp924[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x1eU] 
        = __Vtemp924[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x1fU] 
        = __Vtemp924[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x20U] 
        = __Vtemp924[5U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x21U] 
        = __Vtemp924[6U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x22U] 
        = ((0xc0000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_debug_pc) 
                           << 0x1eU)) | __Vtemp924[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x23U] 
        = ((0x3fffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_debug_pc) 
                           >> 2U)) | (0xc0000000U & 
                                      ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_debug_pc 
                                                >> 0x20U)) 
                                       << 0x1eU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x24U] 
        = ((0xffffff80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_debug_inst 
                           << 7U)) | ((0xffffffc0U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_is_rvc) 
                                          << 6U)) | 
                                      (0x3fffffffU 
                                       & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_debug_pc 
                                                   >> 0x20U)) 
                                          >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x25U] 
        = ((0xffffff80U & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_inst))) 
                           << 7U)) | (0x7fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_debug_inst 
                                               >> 0x19U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_2118[0x26U] 
        = ((0x7fU & ((IData)((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_inst))) 
                     >> 0x19U)) | (0xffffff80U & ((IData)(
                                                          ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__fb_uop_ram_11_inst)) 
                                                           >> 0x20U)) 
                                                  << 7U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3909(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3909\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_15 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT___GEN_15));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_12;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_4 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_47) {
            if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_2))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_4 
                    = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                             >> 3U));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_92 = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_valid))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_92 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_97;
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___T_120) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInValid)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInAddress 
            = ((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_data
                               [0U])) << 4U);
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___T_94) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInValid)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInAddress 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_data
                [0U];
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT__maybe_full = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT___T_4) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkX__DOT__x__DOT__do_enq;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_1657_predicted_pc_valid 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_0_predicted_pc_valid;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_1657_predicted_pc_valid 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_0_predicted_pc_valid;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_1659_predicted_pc_valid 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_1_predicted_pc_valid;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_1661_predicted_pc_valid 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3_io_resp_f1_2_predicted_pc_valid;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3910(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3910\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp966[4];
    WData/*127:0*/ __Vtemp967[4];
    WData/*127:0*/ __Vtemp968[4];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_1659_predicted_pc_valid 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_1_predicted_pc_valid;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_1661_predicted_pc_valid 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3_io_resp_f1_2_predicted_pc_valid;
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mprv = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x300U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
                VL_EXTEND_WQ(103,64, __Vtemp966, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mprv 
                    = (1U & (__Vtemp966[0U] >> 0x11U));
            }
        }
    }
    VL_EXTEND_WQ(103,64, __Vtemp967, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata);
    VL_EXTEND_WQ(103,64, __Vtemp968, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_spp 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen)
                                                ? (
                                                   (0x100U 
                                                    == 
                                                    (0xfffU 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))
                                                    ? 
                                                   (1U 
                                                    & (__Vtemp967[0U] 
                                                       >> 8U))
                                                    : 
                                                   ((0x300U 
                                                     == 
                                                     (0xfffU 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))
                                                     ? 
                                                    (1U 
                                                     & (__Vtemp968[0U] 
                                                        >> 8U))
                                                     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___GEN_112)))
                                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___GEN_112))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_debug = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__insn_ret) {
            if ((0x200U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83)) {
                if ((0x400U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83)) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_debug = 0U;
                } else {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__exception) {
                        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__trapToDebug) {
                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_debug 
                                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___GEN_40;
                        }
                    }
                }
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__exception) {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__trapToDebug) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_debug 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___GEN_40;
                    }
                }
            }
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__exception) {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__trapToDebug) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_debug 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___GEN_40;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3911(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3911\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__used 
        = ((IData)(vlTOPp->reset) ? 0ULL : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT___T_88);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_129 
        = (3U & ((~ (6U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_113)) 
                            << 1U) | (4U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_113)) 
                                            << 2U))))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_113))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__used 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT___T_70));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2_io_resp_f2_3_is_jal 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT___T_231)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT___T_234)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_1663_is_jal));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2_io_resp_f2_3_is_jal 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT___T_231)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT___T_234)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_1663_is_jal));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__req_clientBit 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_source) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_source))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__req_clientBit 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_source) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_source))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__req_clientBit 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_source) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_source))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__req_clientBit 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_source) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_source))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3912(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3912\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__req_clientBit 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_source) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_source))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__req_clientBit 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_source) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_source))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__req_clientBit 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_source) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_source))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__req_clientBit 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_source) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_source))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__req_clientBit 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_source) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_source))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__req_clientBit 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_source) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_source))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__req_clientBit 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_source) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_source))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3913(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3913\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1008[4];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__req_clientBit 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_source) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_source))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__maybe_full = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_4) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__maybe_full 
                = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__empty)
                    ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA_io_a_ready)) 
                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT___T_1));
        }
    }
    if ((0x2000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])) {
        __Vtemp1008[0U] = 0U;
        __Vtemp1008[1U] = 0U;
        __Vtemp1008[2U] = 0x2000000U;
        __Vtemp1008[3U] = 0U;
    } else {
        __Vtemp1008[0U] = ((0x4000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                            ? 0U : ((0x8000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                     ? 0U : ((0x10000000U 
                                              & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                              ? 0U : 
                                             ((0x20000000U 
                                               & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                               ? 0U
                                               : ((0x40000000U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x80000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[3U])
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[3U])
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[3U])
                                                       ? 0U
                                                       : 0U)))))))));
        __Vtemp1008[1U] = ((0x4000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                            ? 0U : ((0x8000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                     ? 0U : ((0x10000000U 
                                              & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                              ? 0U : 
                                             ((0x20000000U 
                                               & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                               ? 0U
                                               : ((0x40000000U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x80000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[3U])
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[3U])
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[3U])
                                                       ? 0U
                                                       : 0U)))))))));
        __Vtemp1008[2U] = ((0x4000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                            ? 0x4000000U : ((0x8000000U 
                                             & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                             ? 0x8000000U
                                             : ((0x10000000U 
                                                 & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                 ? 0x10000000U
                                                 : 
                                                ((0x20000000U 
                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                  ? 0x20000000U
                                                  : 
                                                 ((0x40000000U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                   ? 0x40000000U
                                                   : 
                                                  ((0x80000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0x80000000U
                                                    : 
                                                   ((1U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[3U])
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[3U])
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[3U])
                                                       ? 0U
                                                       : 0U)))))))));
        __Vtemp1008[3U] = ((0x4000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                            ? 0U : ((0x8000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                     ? 0U : ((0x10000000U 
                                              & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                              ? 0U : 
                                             ((0x20000000U 
                                               & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                               ? 0U
                                               : ((0x40000000U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x80000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[3U])
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[3U])
                                                      ? 2U
                                                      : 
                                                     ((4U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[3U])
                                                       ? 4U
                                                       : 
                                                      ((8U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[3U])
                                                        ? 8U
                                                        : 0U))))))))));
    }
    if ((0x80000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_117[0U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_117[1U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_117[2U] = 0x80000U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_117[3U] = 0U;
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_117[0U] 
            = ((0x100000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                ? 0U : ((0x200000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                         ? 0U : ((0x400000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                  ? 0U : ((0x800000U 
                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                           ? 0U : (
                                                   (0x1000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   __Vtemp1008[0U])))));
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_117[1U] 
            = ((0x100000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                ? 0U : ((0x200000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                         ? 0U : ((0x400000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                  ? 0U : ((0x800000U 
                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                           ? 0U : (
                                                   (0x1000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   __Vtemp1008[1U])))));
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_117[2U] 
            = ((0x100000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                ? 0x100000U : ((0x200000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                ? 0x200000U : ((0x400000U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                ? 0x400000U
                                                : (
                                                   (0x800000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0x800000U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                     ? 0x1000000U
                                                     : 
                                                    __Vtemp1008[2U])))));
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_117[3U] 
            = ((0x100000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                ? 0U : ((0x200000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                         ? 0U : ((0x400000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                  ? 0U : ((0x800000U 
                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                           ? 0U : (
                                                   (0x1000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   __Vtemp1008[3U])))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3914(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3914\n"); );
    VTestHarness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1060[3];
    // Body
    if ((0x200000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])) {
        __Vtemp1060[0U] = 0U;
        __Vtemp1060[1U] = 0U;
        __Vtemp1060[2U] = 0x200000U;
    } else {
        __Vtemp1060[0U] = ((0x400000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                            ? 0U : ((0x800000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                     ? 0U : ((0x1000000U 
                                              & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                              ? 0U : 
                                             ((0x2000000U 
                                               & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                               ? 0U
                                               : ((0x4000000U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x8000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x10000000U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                     ? 0U
                                                     : 
                                                    ((0x20000000U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                      ? 0U
                                                      : 
                                                     ((0x40000000U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                       ? 0U
                                                       : 0U)))))))));
        __Vtemp1060[1U] = ((0x400000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                            ? 0U : ((0x800000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                     ? 0U : ((0x1000000U 
                                              & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                              ? 0U : 
                                             ((0x2000000U 
                                               & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                               ? 0U
                                               : ((0x4000000U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x8000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x10000000U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                     ? 0U
                                                     : 
                                                    ((0x20000000U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                      ? 0U
                                                      : 
                                                     ((0x40000000U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                       ? 0U
                                                       : 0U)))))))));
        __Vtemp1060[2U] = ((0x400000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                            ? 0x400000U : ((0x800000U 
                                            & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                            ? 0x800000U
                                            : ((0x1000000U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                ? 0x1000000U
                                                : (
                                                   (0x2000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0x2000000U
                                                    : 
                                                   ((0x4000000U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                     ? 0x4000000U
                                                     : 
                                                    ((0x8000000U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                      ? 0x8000000U
                                                      : 
                                                     ((0x10000000U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                       ? 0x10000000U
                                                       : 
                                                      ((0x20000000U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                        ? 0x20000000U
                                                        : 
                                                       ((0x40000000U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                         ? 0x40000000U
                                                         : 
                                                        ((0x80000000U 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                          ? 0x80000000U
                                                          : 0U))))))))));
    }
    if ((0x8000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_113[0U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_113[1U] = 0U;
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_113[2U] = 0x8000U;
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_113[0U] 
            = ((0x10000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                ? 0U : ((0x20000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                         ? 0U : ((0x40000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                  ? 0U : ((0x80000U 
                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                           ? 0U : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   __Vtemp1060[0U])))));
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_113[1U] 
            = ((0x10000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                ? 0U : ((0x20000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                         ? 0U : ((0x40000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                  ? 0U : ((0x80000U 
                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                           ? 0U : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   __Vtemp1060[1U])))));
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_113[2U] 
            = ((0x10000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                ? 0x10000U : ((0x20000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                               ? 0x20000U : ((0x40000U 
                                              & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                              ? 0x40000U
                                              : ((0x80000U 
                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                  ? 0x80000U
                                                  : 
                                                 ((0x100000U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                   ? 0x100000U
                                                   : 
                                                  __Vtemp1060[2U])))));
    }
}
