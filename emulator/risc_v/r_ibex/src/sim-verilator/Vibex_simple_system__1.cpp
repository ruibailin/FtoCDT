// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_simple_system.h for the primary calling header

#include "Vibex_simple_system.h"
#include "Vibex_simple_system__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vibex_simple_system::_sequent__TOP__10(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system::_sequent__TOP__10\n"); );
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ibex_core___Vcellout__id_stage_i__imd_val_q_ex_o[0U] 
        = vlTOPp->ibex_core_id_stage_i_imd_val_q
        [0U];
    vlTOPp->ibex_core___Vcellout__id_stage_i__imd_val_q_ex_o[1U] 
        = vlTOPp->ibex_core_id_stage_i_imd_val_q
        [1U];
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0x1fU] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0x1eU] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0x1dU] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0x1cU] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0x1bU] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0x1aU] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0x19U] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0x18U] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0x17U] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0x16U] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0x15U] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0x14U] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0x13U] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0x12U] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0x11U] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0x10U] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0xfU] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0xeU] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0xdU] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0xcU] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0xbU] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0xaU] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[9U] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[8U] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[7U] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[6U] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[5U] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[4U] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt;
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter[3U] 
        = vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt;
    vlTOPp->ibex_core_imd_val_q_ex[0U] 
        = vlTOPp->ibex_core___Vcellout__id_stage_i__imd_val_q_ex_o
        [0U];
    vlTOPp->ibex_core_imd_val_q_ex[1U] 
        = vlTOPp->ibex_core___Vcellout__id_stage_i__imd_val_q_ex_o
        [1U];
    vlTOPp->ibex_core_id_stage_i_controller_i_ebreak_into_debug 
        = (1U & ((3U == (IData)(vlTOPp->ibex_core_cs_reg_i_priv_lvl_q))
                  ? (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                     >> 0xfU) : ((0U == (IData)(vlTOPp->ibex_core_cs_reg_i_priv_lvl_q)) 
                                 & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                    >> 0xcU))));
    vlTOPp->ibex_core___Vcellinp__ex_block_i__imd_val_q_i[0U] 
        = vlTOPp->ibex_core_imd_val_q_ex
        [0U];
    vlTOPp->ibex_core___Vcellinp__ex_block_i__imd_val_q_i[1U] 
        = vlTOPp->ibex_core_imd_val_q_ex
        [1U];
    vlTOPp->ibex_core_ex_block_i_alu_imd_val_q[0U] 
        = (IData)(vlTOPp->ibex_core___Vcellinp__ex_block_i__imd_val_q_i
                  [0U]);
    vlTOPp->ibex_core_ex_block_i_alu_imd_val_q[1U] 
        = (IData)(vlTOPp->ibex_core___Vcellinp__ex_block_i__imd_val_q_i
                  [1U]);
    vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i[0U] 
        = vlTOPp->ibex_core___Vcellinp__ex_block_i__imd_val_q_i
        [0U];
    vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i[1U] 
        = vlTOPp->ibex_core___Vcellinp__ex_block_i__imd_val_q_i
        [1U];
    vlTOPp->ibex_core_ex_block_i___Vcellinp__alu_i__imd_val_q_i[0U] 
        = vlTOPp->ibex_core_ex_block_i_alu_imd_val_q
        [0U];
    vlTOPp->ibex_core_ex_block_i___Vcellinp__alu_i__imd_val_q_i[1U] 
        = vlTOPp->ibex_core_ex_block_i_alu_imd_val_q
        [1U];
    vlTOPp->ibex_core_ex_block_i_multdiv_alu_operand_a = 1ULL;
    if ((4U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q) 
                      >> 1U)))) {
            vlTOPp->ibex_core_ex_block_i_multdiv_alu_operand_a 
                = ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))
                    ? 1ULL : (1ULL | ((QData)((IData)(
                                                      vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                                      [0U])) 
                                      << 1U)));
        }
    } else {
        vlTOPp->ibex_core_ex_block_i_multdiv_alu_operand_a 
            = ((2U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))
                ? ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))
                    ? (1ULL | ((QData)((IData)(vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                               [0U])) 
                               << 1U)) : 1ULL) : 1ULL);
    }
    vlTOPp->ibex_core_ex_block_i_alu_i_g_no_alu_rvb__unused_imd_val_q[0U] 
        = vlTOPp->ibex_core_ex_block_i___Vcellinp__alu_i__imd_val_q_i
        [0U];
    vlTOPp->ibex_core_ex_block_i_alu_i_g_no_alu_rvb__unused_imd_val_q[1U] 
        = vlTOPp->ibex_core_ex_block_i___Vcellinp__alu_i__imd_val_q_i
        [1U];
}

VL_INLINE_OPT void Vibex_simple_system::_sequent__TOP__11(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system::_sequent__TOP__11\n"); );
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (VL_UNLIKELY(((((5U == (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)) 
                       & (IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q)) 
                      & (~ (IData)(vlTOPp->ibex_core_instr_fetch_err))) 
                     & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_d)))) {
        VL_WRITEF("%t: Illegal instruction (hart 0) at PC 0x%x: 0x%x\n",
                  64,VL_TIME_UNITED_Q(1),32,vlTOPp->ibex_core_pc_id,
                  32,vlTOPp->ibex_core_instr_rdata_id);
    }
}

VL_INLINE_OPT void Vibex_simple_system::_sequent__TOP__12(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system::_sequent__TOP__12\n"); );
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ibex_u_core_u_ibex_tracer__cycle 
        = vlTOPp->__Vdly__ibex_u_core_u_ibex_tracer__cycle;
    if (vlTOPp->ibex_bus_host_sel_resp) {
        vlTOPp->ibex_Vcellout__u_bus__host_rdata_o[0U] = 0U;
    } else {
        vlTOPp->ibex_bus___Vlvbound14 
            = ((2U >= (IData)(vlTOPp->ibex_bus_device_sel_resp))
                ? vlTOPp->ibex_Vcellinp_u_bus__device_rdata_i
               [vlTOPp->ibex_bus_device_sel_resp]
                : 0U);
        vlTOPp->ibex_Vcellout__u_bus__host_rdata_o[0U] 
            = vlTOPp->ibex_bus___Vlvbound14;
    }
    if (vlTOPp->ibex_bus_host_sel_resp) {
        vlTOPp->ibex_Vcellout__u_bus__host_err_o[0U] = 0U;
    } else {
        vlTOPp->ibex_bus___Vlvbound13 
            = ((2U >= (IData)(vlTOPp->ibex_bus_device_sel_resp)) 
               & vlTOPp->ibex_Vcellinp_u_bus__device_err_i
               [vlTOPp->ibex_bus_device_sel_resp]);
        vlTOPp->ibex_Vcellout__u_bus__host_err_o[0U] 
            = vlTOPp->ibex_bus___Vlvbound13;
    }
    vlTOPp->ibex_simple_system__host_rdata[0U] 
        = vlTOPp->ibex_Vcellout__u_bus__host_rdata_o
        [0U];
    vlTOPp->ibex_simple_system__host_err[0U] = 
        vlTOPp->ibex_Vcellout__u_bus__host_err_o
        [0U];
}

VL_INLINE_OPT void Vibex_simple_system::_sequent__TOP__13(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system::_sequent__TOP__13\n"); );
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_d[2U] 
        = vlTOPp->ibex_simple_system__instr_rdata;
}

VL_INLINE_OPT void Vibex_simple_system::_sequent__TOP__14(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system::_sequent__TOP__14\n"); );
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ibex_core_if_stage_i_instr_new_id_d) {
        vlTOPp->ibex_core_pc_id 
            = (vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q 
               << 1U);
    }
    if (vlTOPp->ibex_core_if_stage_i_instr_new_id_d) {
        vlTOPp->ibex_core_instr_rdata_c_id 
            = (0xffffU & vlTOPp->ibex_core_if_stage_i_fetch_rdata);
    }
    if (vlTOPp->ibex_core_if_stage_i_instr_new_id_d) {
        vlTOPp->ibex_core_instr_is_compressed_id 
            = (3U != (3U & vlTOPp->ibex_core_if_stage_i_fetch_rdata));
    }
    if (vlTOPp->ibex_core_if_stage_i_instr_new_id_d) {
        vlTOPp->ibex_core_instr_rdata_id 
            = vlTOPp->ibex_core_if_stage_i_instr_decompressed;
    }
    if (((IData)(vlTOPp->ibex_core_pc_set) 
         | ((IData)(vlTOPp->ibex_core_id_in_ready) 
            & (IData)(vlTOPp->ibex_core_pre_buf_i_valid_raw)))) {
        vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q 
            = vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_d;
    }
}

VL_INLINE_OPT void Vibex_simple_system::_multiclk__TOP__15(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system::_multiclk__TOP__15\n"); );
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_d[0U] 
        = ((2U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q))
            ? vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_q[1U]
            : vlTOPp->ibex_simple_system__instr_rdata);
    vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_d[1U] 
        = ((4U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q))
            ? vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_q[2U]
            : vlTOPp->ibex_simple_system__instr_rdata);
    vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata 
        = ((1U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q))
            ? vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_q[0U]
            : vlTOPp->ibex_simple_system__instr_rdata);
    vlTOPp->ibex_core_pre_buf_i_rvalid_or_pmp_err 
        = (1U & ((IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_q) 
                 & ((IData)(vlTOPp->ibex_simple_system__instr_rvalid) 
                    | (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_q))));
    vlTOPp->ibex_core_irqs 
        = (vlTOPp->ibex_core_cs_reg_i_mip 
           & vlTOPp->ibex_core_cs_reg_i_u_mie_csr__rdata_q);
    vlTOPp->ibex_core_load_store_unit_i_rdata_update = 0U;
    if ((4U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs)))) {
                if (vlTOPp->ibex_simple_system__host_rvalid
                    [0U]) {
                    vlTOPp->ibex_core_load_store_unit_i_rdata_update 
                        = (1U & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_data_we_q)));
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs)))) {
                if ((vlTOPp->ibex_simple_system__host_rvalid
                     [0U] | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q))) {
                    vlTOPp->ibex_core_load_store_unit_i_rdata_update 
                        = (1U & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_data_we_q)));
                }
            }
        }
    }
    vlTOPp->ibex_core_lsu_resp_valid 
        = ((vlTOPp->ibex_simple_system__host_rvalid
            [0U] | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q)) 
           & (0U == (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs)));
    if ((2U & (IData)(vlTOPp->ibex_core_load_store_unit_i_rdata_offset_q))) {
        vlTOPp->ibex_core_load_store_unit_i_rdata_b_ext 
            = ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_rdata_offset_q))
                ? ((IData)(vlTOPp->ibex_core_load_store_unit_i_data_sign_ext_q)
                    ? ((0xffffff00U & ((- (IData)((1U 
                                                   & (vlTOPp->ibex_simple_system__host_rdata
                                                      [0U] 
                                                      >> 0x1fU)))) 
                                       << 8U)) | (0xffU 
                                                  & (vlTOPp->ibex_simple_system__host_rdata
                                                     [0U] 
                                                     >> 0x18U)))
                    : (0xffU & (vlTOPp->ibex_simple_system__host_rdata
                                [0U] >> 0x18U))) : 
               ((IData)(vlTOPp->ibex_core_load_store_unit_i_data_sign_ext_q)
                 ? ((0xffffff00U & ((- (IData)((1U 
                                                & (vlTOPp->ibex_simple_system__host_rdata
                                                   [0U] 
                                                   >> 0x17U)))) 
                                    << 8U)) | (0xffU 
                                               & (vlTOPp->ibex_simple_system__host_rdata
                                                  [0U] 
                                                  >> 0x10U)))
                 : (0xffU & (vlTOPp->ibex_simple_system__host_rdata
                             [0U] >> 0x10U))));
        vlTOPp->ibex_core_load_store_unit_i_rdata_h_ext 
            = ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_rdata_offset_q))
                ? ((IData)(vlTOPp->ibex_core_load_store_unit_i_data_sign_ext_q)
                    ? ((0xffff0000U & ((- (IData)((1U 
                                                   & (vlTOPp->ibex_simple_system__host_rdata
                                                      [0U] 
                                                      >> 7U)))) 
                                       << 0x10U)) | 
                       ((0xff00U & (vlTOPp->ibex_simple_system__host_rdata
                                    [0U] << 8U)) | 
                        (0xffU & (vlTOPp->ibex_core_load_store_unit_i_rdata_q 
                                  >> 0x10U)))) : ((0xff00U 
                                                   & (vlTOPp->ibex_simple_system__host_rdata
                                                      [0U] 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (vlTOPp->ibex_core_load_store_unit_i_rdata_q 
                                                        >> 0x10U))))
                : ((IData)(vlTOPp->ibex_core_load_store_unit_i_data_sign_ext_q)
                    ? ((0xffff0000U & ((- (IData)((1U 
                                                   & (vlTOPp->ibex_simple_system__host_rdata
                                                      [0U] 
                                                      >> 0x1fU)))) 
                                       << 0x10U)) | 
                       (0xffffU & (vlTOPp->ibex_simple_system__host_rdata
                                   [0U] >> 0x10U)))
                    : (0xffffU & (vlTOPp->ibex_simple_system__host_rdata
                                  [0U] >> 0x10U))));
    } else {
        vlTOPp->ibex_core_load_store_unit_i_rdata_b_ext 
            = ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_rdata_offset_q))
                ? ((IData)(vlTOPp->ibex_core_load_store_unit_i_data_sign_ext_q)
                    ? ((0xffffff00U & ((- (IData)((1U 
                                                   & (vlTOPp->ibex_simple_system__host_rdata
                                                      [0U] 
                                                      >> 0xfU)))) 
                                       << 8U)) | (0xffU 
                                                  & (vlTOPp->ibex_simple_system__host_rdata
                                                     [0U] 
                                                     >> 8U)))
                    : (0xffU & (vlTOPp->ibex_simple_system__host_rdata
                                [0U] >> 8U))) : ((IData)(vlTOPp->ibex_core_load_store_unit_i_data_sign_ext_q)
                                                  ? 
                                                 ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->ibex_simple_system__host_rdata
                                                                     [0U] 
                                                                     >> 7U)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & vlTOPp->ibex_simple_system__host_rdata
                                                     [0U]))
                                                  : 
                                                 (0xffU 
                                                  & vlTOPp->ibex_simple_system__host_rdata
                                                  [0U])));
        vlTOPp->ibex_core_load_store_unit_i_rdata_h_ext 
            = ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_rdata_offset_q))
                ? ((IData)(vlTOPp->ibex_core_load_store_unit_i_data_sign_ext_q)
                    ? ((0xffff0000U & ((- (IData)((1U 
                                                   & (vlTOPp->ibex_simple_system__host_rdata
                                                      [0U] 
                                                      >> 0x17U)))) 
                                       << 0x10U)) | 
                       (0xffffU & (vlTOPp->ibex_simple_system__host_rdata
                                   [0U] >> 8U))) : 
                   (0xffffU & (vlTOPp->ibex_simple_system__host_rdata
                               [0U] >> 8U))) : ((IData)(vlTOPp->ibex_core_load_store_unit_i_data_sign_ext_q)
                                                 ? 
                                                ((0xffff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->ibex_simple_system__host_rdata
                                                                    [0U] 
                                                                    >> 0xfU)))) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & vlTOPp->ibex_simple_system__host_rdata
                                                    [0U]))
                                                 : 
                                                (0xffffU 
                                                 & vlTOPp->ibex_simple_system__host_rdata
                                                 [0U])));
    }
    vlTOPp->ibex_core_load_store_unit_i_data_or_pmp_err 
        = (((IData)(vlTOPp->ibex_core_load_store_unit_i_lsu_err_q) 
            | vlTOPp->ibex_simple_system__host_err
            [0U]) | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q));
    vlTOPp->ibex_core_rf_rdata_a_ecc 
        = vlTOPp->ibex_core_gen_reg_file_rf_reg[
        (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                  >> 0xfU))];
    vlTOPp->ibex_core_rf_rdata_b_ecc 
        = vlTOPp->ibex_core_gen_reg_file_rf_reg[
        (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                  >> 0x14U))];
    vlTOPp->ibex_core_pre_buf_i_fifo_i_aligned_is_compressed 
        = ((3U != (3U & vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata)) 
           & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err)));
    vlTOPp->ibex_core_pre_buf_i_fifo_i_unaligned_is_compressed 
        = ((3U != (3U & (vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata 
                         >> 0x10U))) & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err)));
    vlTOPp->ibex_core_if_stage_i_fetch_rdata 
        = ((1U & vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q)
            ? ((2U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q))
                ? ((0xffff0000U & (vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_q[1U] 
                                   << 0x10U)) | (0xffffU 
                                                 & (vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata 
                                                    >> 0x10U)))
                : ((0xffff0000U & (vlTOPp->ibex_simple_system__instr_rdata 
                                   << 0x10U)) | (0xffffU 
                                                 & (vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata 
                                                    >> 0x10U))))
            : vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata);
    vlTOPp->ibex_core_pre_buf_i_fifo_valid 
        = ((IData)(vlTOPp->ibex_core_pre_buf_i_rvalid_or_pmp_err) 
           & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_branch_discard_q)));
    vlTOPp->ibex_core_id_stage_i_controller_i_handle_irq 
        = (((~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)) 
            & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_nmi_mode_q))) 
           & ((0U != vlTOPp->ibex_core_irqs) 
              & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                 >> 5U)));
    vlTOPp->ibex_core_load_store_unit_i_data_rdata_ext 
        = ((2U & (IData)(vlTOPp->ibex_core_load_store_unit_i_data_type_q))
            ? vlTOPp->ibex_core_load_store_unit_i_rdata_b_ext
            : ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_data_type_q))
                ? vlTOPp->ibex_core_load_store_unit_i_rdata_h_ext
                : ((2U & (IData)(vlTOPp->ibex_core_load_store_unit_i_rdata_offset_q))
                    ? ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_rdata_offset_q))
                        ? ((0xffffff00U & (vlTOPp->ibex_simple_system__host_rdata
                                           [0U] << 8U)) 
                           | (0xffU & (vlTOPp->ibex_core_load_store_unit_i_rdata_q 
                                       >> 0x10U))) : 
                       ((0xffff0000U & (vlTOPp->ibex_simple_system__host_rdata
                                        [0U] << 0x10U)) 
                        | (0xffffU & (vlTOPp->ibex_core_load_store_unit_i_rdata_q 
                                      >> 8U)))) : (
                                                   (1U 
                                                    & (IData)(vlTOPp->ibex_core_load_store_unit_i_rdata_offset_q))
                                                    ? 
                                                   ((0xff000000U 
                                                     & (vlTOPp->ibex_simple_system__host_rdata
                                                        [0U] 
                                                        << 0x18U)) 
                                                    | vlTOPp->ibex_core_load_store_unit_i_rdata_q)
                                                    : 
                                                   vlTOPp->ibex_simple_system__host_rdata
                                                   [0U]))));
    vlTOPp->ibex_core_rf_we_lsu 
        = ((((0U == (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs)) 
             & vlTOPp->ibex_simple_system__host_rvalid
             [0U]) & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_data_or_pmp_err))) 
           & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_data_we_q)));
    vlTOPp->ibex_core_lsu_load_err 
        = (((IData)(vlTOPp->ibex_core_load_store_unit_i_data_or_pmp_err) 
            & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_data_we_q))) 
           & (IData)(vlTOPp->ibex_core_lsu_resp_valid));
    vlTOPp->ibex_core_lsu_store_err 
        = (((IData)(vlTOPp->ibex_core_load_store_unit_i_data_or_pmp_err) 
            & (IData)(vlTOPp->ibex_core_load_store_unit_i_data_we_q)) 
           & (IData)(vlTOPp->ibex_core_lsu_resp_valid));
    if ((2U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))) {
        vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_a 
            = (0xffffU & ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))
                           ? (vlTOPp->ibex_core_rf_rdata_a_ecc 
                              >> 0x10U) : (vlTOPp->ibex_core_rf_rdata_a_ecc 
                                           >> 0x10U)));
        vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_b 
            = (0xffffU & ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))
                           ? (vlTOPp->ibex_core_rf_rdata_b_ecc 
                              >> 0x10U) : vlTOPp->ibex_core_rf_rdata_b_ecc));
    } else {
        vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_a 
            = (0xffffU & vlTOPp->ibex_core_rf_rdata_a_ecc);
        vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_b 
            = (0xffffU & ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))
                           ? (vlTOPp->ibex_core_rf_rdata_b_ecc 
                              >> 0x10U) : vlTOPp->ibex_core_rf_rdata_b_ecc));
    }
    vlTOPp->ibex_core_ex_block_i_multdiv_alu_operand_b 
        = (1ULL | ((QData)((IData)((~ vlTOPp->ibex_core_rf_rdata_b_ecc))) 
                   << 1U));
    if ((4U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q) 
                      >> 1U)))) {
            vlTOPp->ibex_core_ex_block_i_multdiv_alu_operand_b 
                = ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                                          [0U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ (IData)(
                                                                             vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                                                             [1U])))) 
                                                  << 1U)));
        }
    } else {
        vlTOPp->ibex_core_ex_block_i_multdiv_alu_operand_b 
            = ((2U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))
                ? ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                                          [1U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlTOPp->ibex_core_rf_rdata_b_ecc))) 
                                                  << 1U)))
                : ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlTOPp->ibex_core_rf_rdata_a_ecc))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlTOPp->ibex_core_rf_rdata_b_ecc))) 
                                                  << 1U))));
    }
    if ((1U & vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q)) {
        vlTOPp->ibex_core_if_stage_i_fetch_err 
            = (1U & ((2U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q))
                      ? ((((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q) 
                           >> 1U) & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_unaligned_is_compressed))) 
                         | (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q))
                      : (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q) 
                          & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q)) 
                         | ((IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_q) 
                            & ((~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q)) 
                               | (~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_unaligned_is_compressed)))))));
        vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two 
            = vlTOPp->ibex_core_pre_buf_i_fifo_i_unaligned_is_compressed;
    } else {
        vlTOPp->ibex_core_if_stage_i_fetch_err 
            = (1U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err));
        vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two 
            = vlTOPp->ibex_core_pre_buf_i_fifo_i_aligned_is_compressed;
    }
    vlTOPp->ibex_core_if_stage_i_illegal_c_insn = 0U;
    if ((2U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
        if ((1U & (~ vlTOPp->ibex_core_if_stage_i_fetch_rdata))) {
            if ((0x8000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                if ((0x4000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                    if ((0x2000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                        vlTOPp->ibex_core_if_stage_i_illegal_c_insn = 1U;
                    }
                } else {
                    if ((0x2000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                        vlTOPp->ibex_core_if_stage_i_illegal_c_insn = 1U;
                    } else {
                        if ((1U & (~ (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                      >> 0xcU)))) {
                            if ((0U == (0x1fU & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                 >> 2U)))) {
                                if ((0U == (0x1fU & 
                                            (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                             >> 7U)))) {
                                    vlTOPp->ibex_core_if_stage_i_illegal_c_insn = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                    if ((0x2000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                        vlTOPp->ibex_core_if_stage_i_illegal_c_insn = 1U;
                    } else {
                        if ((0U == (0x1fU & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                             >> 7U)))) {
                            vlTOPp->ibex_core_if_stage_i_illegal_c_insn = 1U;
                        }
                    }
                } else {
                    if ((0x2000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                        vlTOPp->ibex_core_if_stage_i_illegal_c_insn = 1U;
                    } else {
                        if ((0x1000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                            vlTOPp->ibex_core_if_stage_i_illegal_c_insn = 1U;
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
            if ((0x8000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                if ((1U & (~ (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                  >> 0xdU)))) {
                        if ((0x800U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                            if ((0x400U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                                if ((0x1000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                                    vlTOPp->ibex_core_if_stage_i_illegal_c_insn = 1U;
                                }
                            }
                        } else {
                            if ((0x1000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                                vlTOPp->ibex_core_if_stage_i_illegal_c_insn = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                    if ((0x2000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                        if ((0U == ((0x20U & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                              >> 7U)) 
                                    | (0x1fU & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                >> 2U))))) {
                            vlTOPp->ibex_core_if_stage_i_illegal_c_insn = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x8000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                if ((0x4000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                    if ((0x2000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                        vlTOPp->ibex_core_if_stage_i_illegal_c_insn = 1U;
                    }
                } else {
                    vlTOPp->ibex_core_if_stage_i_illegal_c_insn = 1U;
                }
            } else {
                if ((0x4000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                    if ((0x2000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                        vlTOPp->ibex_core_if_stage_i_illegal_c_insn = 1U;
                    }
                } else {
                    if ((0x2000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                        vlTOPp->ibex_core_if_stage_i_illegal_c_insn = 1U;
                    } else {
                        if ((0U == (0xffU & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                             >> 5U)))) {
                            vlTOPp->ibex_core_if_stage_i_illegal_c_insn = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_if_stage_i_instr_decompressed 
        = vlTOPp->ibex_core_if_stage_i_fetch_rdata;
    if ((2U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
        if ((1U & (~ vlTOPp->ibex_core_if_stage_i_fetch_rdata))) {
            if ((0x8000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                if ((0x4000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                    if ((1U & (~ (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->ibex_core_if_stage_i_instr_decompressed 
                            = (0x12023U | ((0xc000000U 
                                            & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                               << 0x13U)) 
                                           | ((0x2000000U 
                                               & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xe00U 
                                                    & vlTOPp->ibex_core_if_stage_i_fetch_rdata)))));
                    }
                } else {
                    if ((1U & (~ (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->ibex_core_if_stage_i_instr_decompressed 
                            = ((0x1000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)
                                ? ((0U != (0x1fU & 
                                           (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                    << 0x12U)) 
                                                | ((0xf8000U 
                                                    & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & vlTOPp->ibex_core_if_stage_i_fetch_rdata))))
                                    : ((0U == (0x1fU 
                                               & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                  >> 7U)))
                                        ? 0x100073U
                                        : (0xe7U | 
                                           (0xf8000U 
                                            & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                               << 8U)))))
                                : ((0U != (0x1fU & 
                                           (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                    << 0x12U)) 
                                                | (0xf80U 
                                                   & vlTOPp->ibex_core_if_stage_i_fetch_rdata)))
                                    : (0x67U | (0xf8000U 
                                                & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                   << 8U)))));
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                    if ((1U & (~ (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->ibex_core_if_stage_i_instr_decompressed 
                            = (0x12003U | ((0xc000000U 
                                            & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                               << 0x18U)) 
                                           | ((0x2000000U 
                                               & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1c00000U 
                                                  & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xf80U 
                                                    & vlTOPp->ibex_core_if_stage_i_fetch_rdata)))));
                    }
                } else {
                    if ((1U & (~ (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->ibex_core_if_stage_i_instr_decompressed 
                            = (0x1013U | ((0x1f00000U 
                                           & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                              << 0x12U)) 
                                          | ((0xf8000U 
                                              & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                 << 8U)) 
                                             | (0xf80U 
                                                & vlTOPp->ibex_core_if_stage_i_fetch_rdata))));
                    }
                }
            }
        }
    } else {
        if ((1U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
            if ((0x8000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                if ((0x4000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                    vlTOPp->ibex_core_if_stage_i_instr_decompressed 
                        = (0x40063U | ((0xf0000000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                          >> 0xcU)))) 
                                           << 0x1cU)) 
                                       | ((0xc000000U 
                                           & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                              << 0x15U)) 
                                          | ((0x2000000U 
                                              & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                 << 0x17U)) 
                                             | ((0x38000U 
                                                 & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                    << 8U)) 
                                                | ((0x1000U 
                                                    & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                       >> 1U)) 
                                                   | ((0xc00U 
                                                       & vlTOPp->ibex_core_if_stage_i_fetch_rdata) 
                                                      | ((0x300U 
                                                          & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                             << 5U)) 
                                                         | (0x80U 
                                                            & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                               >> 5U))))))))));
                } else {
                    if ((0x2000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                        vlTOPp->ibex_core_if_stage_i_instr_decompressed 
                            = (0x6fU | ((0x80000000U 
                                         & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                            << 0x13U)) 
                                        | ((0x40000000U 
                                            & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                               << 0x16U)) 
                                           | ((0x30000000U 
                                               & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                  << 0x13U)) 
                                              | ((0x8000000U 
                                                  & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x4000000U 
                                                     & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                        << 0x13U)) 
                                                    | ((0x2000000U 
                                                        & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                           << 0x17U)) 
                                                       | ((0x1000000U 
                                                           & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                              << 0xdU)) 
                                                          | ((0xe00000U 
                                                              & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                                 << 0x12U)) 
                                                             | ((0x1ff000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                                                >> 0xcU)))) 
                                                                    << 0xcU)) 
                                                                | (0x80U 
                                                                   & ((~ 
                                                                       (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                                        >> 0xfU)) 
                                                                      << 7U))))))))))));
                    } else {
                        if ((0x800U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                            if ((0x400U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                                if ((1U & (~ (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                              >> 0xcU)))) {
                                    vlTOPp->ibex_core_if_stage_i_instr_decompressed 
                                        = ((0x40U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)
                                            ? ((0x20U 
                                                & vlTOPp->ibex_core_if_stage_i_fetch_rdata)
                                                ? (0x847433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->ibex_core_if_stage_i_fetch_rdata))))
                                                : (0x846433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->ibex_core_if_stage_i_fetch_rdata)))))
                                            : ((0x20U 
                                                & vlTOPp->ibex_core_if_stage_i_fetch_rdata)
                                                ? (0x844433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->ibex_core_if_stage_i_fetch_rdata))))
                                                : (0x40840433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->ibex_core_if_stage_i_fetch_rdata))))));
                                }
                            } else {
                                vlTOPp->ibex_core_if_stage_i_instr_decompressed 
                                    = (0x47413U | (
                                                   (0xfc000000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                                      >> 0xcU)))) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                          << 0xdU)) 
                                                      | ((0x1f00000U 
                                                          & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                             << 0x12U)) 
                                                         | ((0x38000U 
                                                             & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                                << 8U)) 
                                                            | (0x380U 
                                                               & vlTOPp->ibex_core_if_stage_i_fetch_rdata))))));
                            }
                        } else {
                            vlTOPp->ibex_core_if_stage_i_instr_decompressed 
                                = (0x45413U | ((0x40000000U 
                                                & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                   << 0x14U)) 
                                               | ((0x1f00000U 
                                                   & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                      << 0x12U)) 
                                                  | ((0x38000U 
                                                      & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                         << 8U)) 
                                                     | (0x380U 
                                                        & vlTOPp->ibex_core_if_stage_i_fetch_rdata)))));
                        }
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                    if ((0x2000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                        vlTOPp->ibex_core_if_stage_i_instr_decompressed 
                            = (0x37U | ((0xfffe0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x11U)) 
                                        | ((0x1f000U 
                                            & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                               << 0xaU)) 
                                           | (0xf80U 
                                              & vlTOPp->ibex_core_if_stage_i_fetch_rdata))));
                        if ((2U == (0x1fU & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                             >> 7U)))) {
                            vlTOPp->ibex_core_if_stage_i_instr_decompressed 
                                = (0x10113U | ((0xe0000000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                                  >> 0xcU)))) 
                                                   << 0x1dU)) 
                                               | ((0x18000000U 
                                                   & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                      << 0x18U)) 
                                                  | ((0x4000000U 
                                                      & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                         << 0x15U)) 
                                                     | ((0x2000000U 
                                                         & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                            << 0x17U)) 
                                                        | (0x1000000U 
                                                           & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                              << 0x12U)))))));
                        }
                    } else {
                        vlTOPp->ibex_core_if_stage_i_instr_decompressed 
                            = (0x13U | ((0xfc000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x1aU)) 
                                        | ((0x2000000U 
                                            & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                               << 0xdU)) 
                                           | ((0x1f00000U 
                                               & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                  << 0x12U)) 
                                              | (0xf80U 
                                                 & vlTOPp->ibex_core_if_stage_i_fetch_rdata)))));
                    }
                } else {
                    vlTOPp->ibex_core_if_stage_i_instr_decompressed 
                        = ((0x2000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)
                            ? (0x6fU | ((0x80000000U 
                                         & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                            << 0x13U)) 
                                        | ((0x40000000U 
                                            & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                               << 0x16U)) 
                                           | ((0x30000000U 
                                               & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                  << 0x13U)) 
                                              | ((0x8000000U 
                                                  & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x4000000U 
                                                     & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                        << 0x13U)) 
                                                    | ((0x2000000U 
                                                        & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                           << 0x17U)) 
                                                       | ((0x1000000U 
                                                           & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                              << 0xdU)) 
                                                          | ((0xe00000U 
                                                              & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                                 << 0x12U)) 
                                                             | ((0x1ff000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                                                >> 0xcU)))) 
                                                                    << 0xcU)) 
                                                                | (0x80U 
                                                                   & ((~ 
                                                                       (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                                        >> 0xfU)) 
                                                                      << 7U))))))))))))
                            : (0x13U | ((0xfc000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x1aU)) 
                                        | ((0x2000000U 
                                            & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                               << 0xdU)) 
                                           | ((0x1f00000U 
                                               & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                  << 0x12U)) 
                                              | ((0xf8000U 
                                                  & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                     << 8U)) 
                                                 | (0xf80U 
                                                    & vlTOPp->ibex_core_if_stage_i_fetch_rdata)))))));
                }
            }
        } else {
            if ((0x8000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                if ((0x4000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                    if ((1U & (~ (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->ibex_core_if_stage_i_instr_decompressed 
                            = (0x842023U | ((0x4000000U 
                                             & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                << 0x15U)) 
                                            | ((0x2000000U 
                                                & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                   << 0xdU)) 
                                               | ((0x700000U 
                                                   & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                      << 0x12U)) 
                                                  | ((0x38000U 
                                                      & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                         << 8U)) 
                                                     | ((0xc00U 
                                                         & vlTOPp->ibex_core_if_stage_i_fetch_rdata) 
                                                        | (0x200U 
                                                           & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                              << 3U))))))));
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->ibex_core_if_stage_i_fetch_rdata)) {
                    if ((1U & (~ (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->ibex_core_if_stage_i_instr_decompressed 
                            = (0x42403U | ((0x4000000U 
                                            & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                               << 0x15U)) 
                                           | ((0x3800000U 
                                               & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x400000U 
                                                  & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                     << 0x10U)) 
                                                 | ((0x38000U 
                                                     & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                        << 8U)) 
                                                    | (0x380U 
                                                       & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                          << 5U)))))));
                    }
                } else {
                    if ((1U & (~ (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->ibex_core_if_stage_i_instr_decompressed 
                            = (0x10413U | ((0x3c000000U 
                                            & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                               << 0x13U)) 
                                           | ((0x3000000U 
                                               & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x800000U 
                                                  & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                     << 0x12U)) 
                                                 | ((0x400000U 
                                                     & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                        << 0x10U)) 
                                                    | (0x380U 
                                                       & (vlTOPp->ibex_core_if_stage_i_fetch_rdata 
                                                          << 5U)))))));
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_pre_buf_i_fifo_i_entry_en 
        = ((3U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_entry_en)) 
           | (0xfffffffcU & (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_valid) 
                              << 2U) & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_lowest_free_entry))));
    vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_pushed 
        = ((6U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_pushed)) 
           | (1U & (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_valid) 
                     & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_lowest_free_entry)) 
                    | (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q))));
    vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_pushed 
        = ((5U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_pushed)) 
           | (2U & ((((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_valid) 
                      << 1U) & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_lowest_free_entry)) 
                    | (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q))));
    vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_pushed 
        = ((3U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_pushed)) 
           | (4U & ((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q) 
                    | (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_valid) 
                        << 2U) & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_lowest_free_entry)))));
    vlTOPp->ibex_core_pre_buf_i_fifo_i_valid 
        = (1U & ((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q) 
                 | (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_valid)));
    vlTOPp->ibex_core_rvfi_mem_rdata_d 
        = ((IData)(vlTOPp->ibex_core_lsu_resp_valid)
            ? vlTOPp->ibex_core_load_store_unit_i_data_rdata_ext
            : vlTOPp->ibex_core_rvfi_mem_rdata_q);
    vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux[1U] 
        = vlTOPp->ibex_core_load_store_unit_i_data_rdata_ext;
    vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we 
        = ((1U & (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)) 
           | ((IData)(vlTOPp->ibex_core_rf_we_lsu) 
              << 1U));
    vlTOPp->ibex_core_pre_buf_i_valid_raw 
        = (1U & ((1U & vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q)
                  ? ((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_unaligned_is_compressed)
                      ? (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid)
                      : (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q) 
                          >> 1U) | ((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q) 
                                    & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_valid))))
                  : (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid)));
}

VL_INLINE_OPT void Vibex_simple_system::_sequent__TOP__16(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system::_sequent__TOP__16\n"); );
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ibex_u_core_crash_dump_o[0U] 
        = vlTOPp->ibex_core_cs_reg_i_u_mepc_csr__rdata_q;
    vlTOPp->ibex_u_core_crash_dump_o[1U] 
        = vlTOPp->ibex_core_load_store_unit_i_addr_last_q;
    vlTOPp->ibex_u_core_crash_dump_o[2U] 
        = (IData)((((QData)((IData)(vlTOPp->ibex_core_pc_id)) 
                    << 0x20U) | (QData)((IData)((vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q 
                                                 << 1U)))));
    vlTOPp->ibex_u_core_crash_dump_o[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->ibex_core_pc_id)) 
                     << 0x20U) | (QData)((IData)((vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q 
                                                  << 1U)))) 
                   >> 0x20U));
    if (vlTOPp->IO_RST_N) {
        vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs 
            = vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns;
        vlTOPp->ibex_core_if_stage_i_instr_valid_id_q 
            = ((IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_d) 
               & 1U);
    } else {
        vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs = 0U;
        vlTOPp->ibex_core_if_stage_i_instr_valid_id_q = 0U;
    }
    vlTOPp->ibex_core_exc_pc_mux_id = 1U;
    if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->ibex_core_exc_pc_mux_id = 2U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    vlTOPp->ibex_core_exc_pc_mux_id = 1U;
                } else {
                    if ((((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_q) 
                          | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_q)) 
                         | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_q))) {
                        vlTOPp->ibex_core_exc_pc_mux_id 
                            = ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)
                                ? 3U : 0U);
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_instr_req_int = 1U;
    if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            vlTOPp->ibex_core_instr_req_int = 0U;
        } else {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                vlTOPp->ibex_core_instr_req_int = 0U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                      >> 2U)))) {
            vlTOPp->ibex_core_instr_req_int 
                = (1U & ((~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                             >> 1U)) & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)));
        }
    }
    vlTOPp->ibex_core_id_stage_i_controller_run = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    vlTOPp->ibex_core_id_stage_i_controller_run = 1U;
                }
            }
        }
    }
    vlTOPp->ibex_core_debug_cause = 1U;
    if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ebreak_into_debug) 
                         & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))) {
                        vlTOPp->ibex_core_debug_cause = 1U;
                    }
                } else {
                    vlTOPp->ibex_core_debug_cause 
                        = ((4U & vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q)
                            ? 4U : 3U);
                }
            }
        }
    }
    vlTOPp->ibex_core_debug_csr_save = 0U;
    if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ebreak_into_debug) 
                         & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))) {
                        vlTOPp->ibex_core_debug_csr_save = 1U;
                    }
                } else {
                    vlTOPp->ibex_core_debug_csr_save = 1U;
                }
            }
        }
    }
    vlTOPp->ibex_core_id_stage_i_controller_i_enter_debug_mode_d 
        = (((vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
             >> 2U) & (IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q)) 
           & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)));
    vlTOPp->ibex_core_id_stage_i_controller_i_instr_fetch_err 
        = ((IData)(vlTOPp->ibex_core_instr_fetch_err) 
           & (IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q));
    vlTOPp->ibex_core_id_stage_i_instr_first_cycle 
        = ((IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q) 
           & (~ (IData)(vlTOPp->ibex_core_id_stage_i_id_fsm_q)));
    vlTOPp->ibex_core_id_stage_i_instr_executing_spec 
        = (((IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q) 
            & (~ (IData)(vlTOPp->ibex_core_instr_fetch_err))) 
           & (IData)(vlTOPp->ibex_core_id_stage_i_controller_run));
    vlTOPp->ibex_core_rvfi_intr_d 
        = ((IData)(vlTOPp->ibex_core_id_stage_i_instr_first_cycle)
            ? (IData)(vlTOPp->ibex_core_rvfi_set_trap_pc_q)
            : (IData)(vlTOPp->ibex_core_rvfi_intr_q));
    vlTOPp->ibex_core_id_stage_i_jump_in_dec = 0U;
    vlTOPp->ibex_core_id_stage_i_jump_set_dec = 0U;
    vlTOPp->ibex_core_id_stage_i_branch_in_dec = 0U;
    vlTOPp->ibex_core_icache_inval = 0U;
    vlTOPp->ibex_core_id_stage_i_multdiv_operator = 0U;
    vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode = 0U;
    vlTOPp->ibex_core_id_stage_i_rf_wdata_sel = 0U;
    vlTOPp->ibex_core_id_stage_i_decoder_i_rf_we = 0U;
    vlTOPp->ibex_core_id_stage_i_rf_ren_a = 0U;
    vlTOPp->ibex_core_id_stage_i_rf_ren_b = 0U;
    vlTOPp->ibex_core_csr_access = 0U;
    vlTOPp->ibex_core_id_stage_i_decoder_i_csr_illegal = 0U;
    vlTOPp->ibex_core_id_stage_i_decoder_i_csr_op = 0U;
    vlTOPp->ibex_core_id_stage_i_lsu_we = 0U;
    vlTOPp->ibex_core_id_stage_i_lsu_type = 0U;
    vlTOPp->ibex_core_id_stage_i_lsu_sign_ext = 0U;
    vlTOPp->ibex_core_id_stage_i_lsu_req_dec = 0U;
    vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 0U;
    vlTOPp->ibex_core_id_stage_i_ebrk_insn = 0U;
    vlTOPp->ibex_core_id_stage_i_mret_insn_dec = 0U;
    vlTOPp->ibex_core_id_stage_i_dret_insn_dec = 0U;
    vlTOPp->ibex_core_id_stage_i_ecall_insn_dec = 0U;
    vlTOPp->ibex_core_id_stage_i_wfi_insn_dec = 0U;
    vlTOPp->ibex_core_id_stage_i_decoder_i_opcode 
        = (0x7fU & vlTOPp->ibex_core_instr_rdata_id);
    if ((0x40U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
        if ((0x20U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
            if ((0x10U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                    vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                        vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                                if ((0U == (7U & (vlTOPp->ibex_core_instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == (0xfffU 
                                                & (vlTOPp->ibex_core_instr_rdata_id 
                                                   >> 0x14U)))) {
                                        vlTOPp->ibex_core_id_stage_i_ecall_insn_dec = 1U;
                                    } else {
                                        if ((1U == 
                                             (0xfffU 
                                              & (vlTOPp->ibex_core_instr_rdata_id 
                                                 >> 0x14U)))) {
                                            vlTOPp->ibex_core_id_stage_i_ebrk_insn = 1U;
                                        } else {
                                            if ((0x302U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlTOPp->ibex_core_instr_rdata_id 
                                                     >> 0x14U)))) {
                                                vlTOPp->ibex_core_id_stage_i_mret_insn_dec = 1U;
                                            } else {
                                                if (
                                                    (0x7b2U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlTOPp->ibex_core_instr_rdata_id 
                                                         >> 0x14U)))) {
                                                    vlTOPp->ibex_core_id_stage_i_dret_insn_dec = 1U;
                                                } else {
                                                    if (
                                                        (0x105U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlTOPp->ibex_core_instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlTOPp->ibex_core_id_stage_i_wfi_insn_dec = 1U;
                                                    } else {
                                                        vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if (((0U != (0x1fU 
                                                 & (vlTOPp->ibex_core_instr_rdata_id 
                                                    >> 0xfU))) 
                                         | (0U != (0x1fU 
                                                   & (vlTOPp->ibex_core_instr_rdata_id 
                                                      >> 7U))))) {
                                        vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                                    }
                                } else {
                                    vlTOPp->ibex_core_csr_access = 1U;
                                    vlTOPp->ibex_core_id_stage_i_rf_wdata_sel = 1U;
                                    vlTOPp->ibex_core_id_stage_i_decoder_i_rf_we = 1U;
                                    if ((1U & (~ (vlTOPp->ibex_core_instr_rdata_id 
                                                  >> 0xeU)))) {
                                        vlTOPp->ibex_core_id_stage_i_rf_ren_a = 1U;
                                    }
                                    if ((1U == (3U 
                                                & (vlTOPp->ibex_core_instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->ibex_core_id_stage_i_decoder_i_csr_op = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->ibex_core_instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->ibex_core_id_stage_i_decoder_i_csr_op = 2U;
                                        } else {
                                            if ((3U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->ibex_core_instr_rdata_id 
                                                     >> 0xcU)))) {
                                                vlTOPp->ibex_core_id_stage_i_decoder_i_csr_op = 3U;
                                            } else {
                                                vlTOPp->ibex_core_id_stage_i_decoder_i_csr_illegal = 1U;
                                            }
                                        }
                                    }
                                    vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn 
                                        = vlTOPp->ibex_core_id_stage_i_decoder_i_csr_illegal;
                                }
                            } else {
                                vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                    if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                                vlTOPp->ibex_core_id_stage_i_jump_in_dec = 1U;
                                if (vlTOPp->ibex_core_id_stage_i_instr_first_cycle) {
                                    vlTOPp->ibex_core_id_stage_i_decoder_i_rf_we = 0U;
                                    vlTOPp->ibex_core_id_stage_i_jump_set_dec = 1U;
                                } else {
                                    vlTOPp->ibex_core_id_stage_i_decoder_i_rf_we = 1U;
                                }
                            } else {
                                vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                        }
                    } else {
                        vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                                vlTOPp->ibex_core_id_stage_i_jump_in_dec = 1U;
                                if (vlTOPp->ibex_core_id_stage_i_instr_first_cycle) {
                                    vlTOPp->ibex_core_id_stage_i_decoder_i_rf_we = 0U;
                                    vlTOPp->ibex_core_id_stage_i_jump_set_dec = 1U;
                                } else {
                                    vlTOPp->ibex_core_id_stage_i_decoder_i_rf_we = 1U;
                                }
                                if ((0U != (7U & (vlTOPp->ibex_core_instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                                }
                                vlTOPp->ibex_core_id_stage_i_rf_ren_a = 1U;
                            } else {
                                vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                                vlTOPp->ibex_core_id_stage_i_branch_in_dec = 1U;
                                vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn 
                                    = (1U & ((~ (vlTOPp->ibex_core_instr_rdata_id 
                                                 >> 0xeU)) 
                                             & (vlTOPp->ibex_core_instr_rdata_id 
                                                >> 0xdU)));
                                vlTOPp->ibex_core_id_stage_i_rf_ren_a = 1U;
                                vlTOPp->ibex_core_id_stage_i_rf_ren_b = 1U;
                            } else {
                                vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
            if ((0x10U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                    vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                                vlTOPp->ibex_core_id_stage_i_decoder_i_rf_we = 1U;
                            } else {
                                vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                                vlTOPp->ibex_core_id_stage_i_rf_ren_a = 1U;
                                vlTOPp->ibex_core_id_stage_i_rf_ren_b = 1U;
                                vlTOPp->ibex_core_id_stage_i_decoder_i_rf_we = 1U;
                                if ((5U == ((4U & (vlTOPp->ibex_core_instr_rdata_id 
                                                   >> 0x18U)) 
                                            | (3U & 
                                               (vlTOPp->ibex_core_instr_rdata_id 
                                                >> 0xcU))))) {
                                    vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                                } else {
                                    if ((0x80000000U 
                                         & vlTOPp->ibex_core_instr_rdata_id)) {
                                        vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->ibex_core_instr_rdata_id)) {
                                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn 
                                                = (1U 
                                                   & ((vlTOPp->ibex_core_instr_rdata_id 
                                                       >> 0x1dU) 
                                                      | ((vlTOPp->ibex_core_instr_rdata_id 
                                                          >> 0x1cU) 
                                                         | ((vlTOPp->ibex_core_instr_rdata_id 
                                                             >> 0x1bU) 
                                                            | ((vlTOPp->ibex_core_instr_rdata_id 
                                                                >> 0x1aU) 
                                                               | ((vlTOPp->ibex_core_instr_rdata_id 
                                                                   >> 0x19U) 
                                                                  | ((0x4000U 
                                                                      & vlTOPp->ibex_core_instr_rdata_id)
                                                                      ? 
                                                                     ((vlTOPp->ibex_core_instr_rdata_id 
                                                                       >> 0xdU) 
                                                                      | (~ 
                                                                         (vlTOPp->ibex_core_instr_rdata_id 
                                                                          >> 0xcU)))
                                                                      : 
                                                                     ((vlTOPp->ibex_core_instr_rdata_id 
                                                                       >> 0xdU) 
                                                                      | (vlTOPp->ibex_core_instr_rdata_id 
                                                                         >> 0xcU)))))))));
                                        } else {
                                            if ((0x20000000U 
                                                 & vlTOPp->ibex_core_instr_rdata_id)) {
                                                vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->ibex_core_instr_rdata_id)) {
                                                    vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->ibex_core_instr_rdata_id)) {
                                                        vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->ibex_core_instr_rdata_id)) {
                                                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                            vlTOPp->ibex_core_id_stage_i_multdiv_operator = 3U;
                                                                            vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode = 0U;
                                                                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->ibex_core_id_stage_i_multdiv_operator = 3U;
                                                                            vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode = 3U;
                                                                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 0U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                            vlTOPp->ibex_core_id_stage_i_multdiv_operator = 2U;
                                                                            vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode = 0U;
                                                                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->ibex_core_id_stage_i_multdiv_operator = 2U;
                                                                            vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode = 3U;
                                                                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 0U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                            vlTOPp->ibex_core_id_stage_i_multdiv_operator = 1U;
                                                                            vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode = 0U;
                                                                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->ibex_core_id_stage_i_multdiv_operator = 1U;
                                                                            vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode = 1U;
                                                                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 0U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                            vlTOPp->ibex_core_id_stage_i_multdiv_operator = 1U;
                                                                            vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode = 3U;
                                                                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->ibex_core_id_stage_i_multdiv_operator = 0U;
                                                                            vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode = 0U;
                                                                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 0U;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                    vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                        vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                                vlTOPp->ibex_core_id_stage_i_rf_ren_a = 1U;
                                vlTOPp->ibex_core_id_stage_i_rf_ren_b = 1U;
                                vlTOPp->ibex_core_id_stage_i_lsu_req_dec = 1U;
                                vlTOPp->ibex_core_id_stage_i_lsu_we = 1U;
                                if ((0x4000U & vlTOPp->ibex_core_instr_rdata_id)) {
                                    vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                                }
                                if ((0U == (3U & (vlTOPp->ibex_core_instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->ibex_core_id_stage_i_lsu_type = 2U;
                                } else {
                                    if ((1U == (3U 
                                                & (vlTOPp->ibex_core_instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->ibex_core_id_stage_i_lsu_type = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->ibex_core_instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->ibex_core_id_stage_i_lsu_type = 0U;
                                        } else {
                                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                    vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                                vlTOPp->ibex_core_id_stage_i_decoder_i_rf_we = 1U;
                            } else {
                                vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                                vlTOPp->ibex_core_id_stage_i_rf_ren_a = 1U;
                                vlTOPp->ibex_core_id_stage_i_decoder_i_rf_we = 1U;
                                vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn 
                                    = (1U & ((0x4000U 
                                              & vlTOPp->ibex_core_instr_rdata_id)
                                              ? ((~ 
                                                  (vlTOPp->ibex_core_instr_rdata_id 
                                                   >> 0xdU)) 
                                                 & ((vlTOPp->ibex_core_instr_rdata_id 
                                                     >> 0xcU) 
                                                    & ((vlTOPp->ibex_core_instr_rdata_id 
                                                        >> 0x1aU) 
                                                       | ((vlTOPp->ibex_core_instr_rdata_id 
                                                           >> 0x1fU) 
                                                          | ((0x40000000U 
                                                              & vlTOPp->ibex_core_instr_rdata_id)
                                                              ? 
                                                             ((vlTOPp->ibex_core_instr_rdata_id 
                                                               >> 0x1dU) 
                                                              | ((vlTOPp->ibex_core_instr_rdata_id 
                                                                  >> 0x1cU) 
                                                                 | ((vlTOPp->ibex_core_instr_rdata_id 
                                                                     >> 0x1bU) 
                                                                    | (0U 
                                                                       != 
                                                                       (3U 
                                                                        & (vlTOPp->ibex_core_instr_rdata_id 
                                                                           >> 0x19U))))))
                                                              : 
                                                             ((vlTOPp->ibex_core_instr_rdata_id 
                                                               >> 0x1dU) 
                                                              | ((vlTOPp->ibex_core_instr_rdata_id 
                                                                  >> 0x1cU) 
                                                                 | ((vlTOPp->ibex_core_instr_rdata_id 
                                                                     >> 0x1bU) 
                                                                    | (0U 
                                                                       != 
                                                                       (3U 
                                                                        & (vlTOPp->ibex_core_instr_rdata_id 
                                                                           >> 0x19U)))))))))))
                                              : ((~ 
                                                  (vlTOPp->ibex_core_instr_rdata_id 
                                                   >> 0xdU)) 
                                                 & ((vlTOPp->ibex_core_instr_rdata_id 
                                                     >> 0xcU) 
                                                    & ((vlTOPp->ibex_core_instr_rdata_id 
                                                        >> 0x1fU) 
                                                       | ((vlTOPp->ibex_core_instr_rdata_id 
                                                           >> 0x1eU) 
                                                          | ((vlTOPp->ibex_core_instr_rdata_id 
                                                              >> 0x1dU) 
                                                             | ((vlTOPp->ibex_core_instr_rdata_id 
                                                                 >> 0x1cU) 
                                                                | ((vlTOPp->ibex_core_instr_rdata_id 
                                                                    >> 0x1bU) 
                                                                   | (0U 
                                                                      != 
                                                                      (3U 
                                                                       & (vlTOPp->ibex_core_instr_rdata_id 
                                                                          >> 0x19U))))))))))));
                            } else {
                                vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                    if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                                if ((0U == (7U & (vlTOPp->ibex_core_instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->ibex_core_id_stage_i_decoder_i_rf_we = 0U;
                                } else {
                                    if ((1U == (7U 
                                                & (vlTOPp->ibex_core_instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->ibex_core_id_stage_i_jump_in_dec = 1U;
                                        vlTOPp->ibex_core_id_stage_i_decoder_i_rf_we = 0U;
                                        if (vlTOPp->ibex_core_id_stage_i_instr_first_cycle) {
                                            vlTOPp->ibex_core_id_stage_i_jump_set_dec = 1U;
                                            vlTOPp->ibex_core_icache_inval = 1U;
                                        }
                                    } else {
                                        vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                        }
                    } else {
                        vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                        vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode))) {
                                vlTOPp->ibex_core_id_stage_i_rf_ren_a = 1U;
                                vlTOPp->ibex_core_id_stage_i_lsu_req_dec = 1U;
                                vlTOPp->ibex_core_id_stage_i_lsu_type = 0U;
                                vlTOPp->ibex_core_id_stage_i_lsu_sign_ext 
                                    = (1U & (~ (vlTOPp->ibex_core_instr_rdata_id 
                                                >> 0xeU)));
                                if ((0U == (3U & (vlTOPp->ibex_core_instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->ibex_core_id_stage_i_lsu_type = 2U;
                                } else {
                                    if ((1U == (3U 
                                                & (vlTOPp->ibex_core_instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->ibex_core_id_stage_i_lsu_type = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->ibex_core_instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->ibex_core_id_stage_i_lsu_type = 0U;
                                            if ((0x4000U 
                                                 & vlTOPp->ibex_core_instr_rdata_id)) {
                                                vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                                            }
                                        } else {
                                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->ibex_core_illegal_c_insn_id) {
        vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn = 1U;
    }
    if (vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn) {
        vlTOPp->ibex_core_id_stage_i_decoder_i_rf_we = 0U;
        vlTOPp->ibex_core_id_stage_i_lsu_req_dec = 0U;
        vlTOPp->ibex_core_id_stage_i_lsu_we = 0U;
        vlTOPp->ibex_core_id_stage_i_jump_in_dec = 0U;
        vlTOPp->ibex_core_id_stage_i_jump_set_dec = 0U;
        vlTOPp->ibex_core_id_stage_i_branch_in_dec = 0U;
        vlTOPp->ibex_core_csr_access = 0U;
    }
    vlTOPp->ibex_core_id_stage_i_alu_operator = 0x26U;
    vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec = 3U;
    vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 1U;
    vlTOPp->ibex_core_id_stage_i_imm_a_mux_sel = 1U;
    vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel_dec = 0U;
    vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu 
        = (0x7fU & vlTOPp->ibex_core_instr_rdata_id);
    vlTOPp->ibex_core_mult_sel_ex = 0U;
    vlTOPp->ibex_core_div_sel_ex = 0U;
    if ((0x40U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
        if ((0x20U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
            if ((0x10U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                                if ((0U == (7U & (vlTOPp->ibex_core_instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->ibex_core_id_stage_i_imm_a_mux_sel = 0U;
                                    vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel_dec = 0U;
                                    vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec 
                                        = ((0x4000U 
                                            & vlTOPp->ibex_core_instr_rdata_id)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                    if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                                if (vlTOPp->ibex_core_id_stage_i_instr_first_cycle) {
                                    vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel_dec = 4U;
                                    vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                                } else {
                                    vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel_dec = 5U;
                                    vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                                if (vlTOPp->ibex_core_id_stage_i_instr_first_cycle) {
                                    vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel_dec = 0U;
                                    vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                                } else {
                                    vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel_dec = 5U;
                                    vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                                }
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                                if ((0x4000U & vlTOPp->ibex_core_instr_rdata_id)) {
                                    vlTOPp->ibex_core_id_stage_i_alu_operator 
                                        = ((0x2000U 
                                            & vlTOPp->ibex_core_instr_rdata_id)
                                            ? ((0x1000U 
                                                & vlTOPp->ibex_core_instr_rdata_id)
                                                ? 0x16U
                                                : 0x14U)
                                            : ((0x1000U 
                                                & vlTOPp->ibex_core_instr_rdata_id)
                                                ? 0x15U
                                                : 0x13U));
                                } else {
                                    if ((1U & (~ (vlTOPp->ibex_core_instr_rdata_id 
                                                  >> 0xdU)))) {
                                        vlTOPp->ibex_core_id_stage_i_alu_operator 
                                            = ((0x1000U 
                                                & vlTOPp->ibex_core_instr_rdata_id)
                                                ? 0x18U
                                                : 0x17U);
                                    }
                                }
                                if (vlTOPp->ibex_core_id_stage_i_instr_first_cycle) {
                                    vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 0U;
                                } else {
                                    vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel_dec = 2U;
                                    vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
            if ((0x10U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                                vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec = 3U;
                                vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->ibex_core_id_stage_i_imm_a_mux_sel = 1U;
                                vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel_dec = 3U;
                                vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                                vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 0U;
                                if ((1U & (~ (vlTOPp->ibex_core_instr_rdata_id 
                                              >> 0x1aU)))) {
                                    if ((1U & (~ (vlTOPp->ibex_core_instr_rdata_id 
                                                  >> 0x1fU)))) {
                                        if ((0x40000000U 
                                             & vlTOPp->ibex_core_instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->ibex_core_instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->ibex_core_instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->ibex_core_instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->ibex_core_instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->ibex_core_instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->ibex_core_instr_rdata_id 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                            vlTOPp->ibex_core_id_stage_i_alu_operator = 8U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->ibex_core_instr_rdata_id 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlTOPp->ibex_core_instr_rdata_id 
                                                                                >> 0xcU)))) {
                                                                            vlTOPp->ibex_core_id_stage_i_alu_operator = 1U;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->ibex_core_instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->ibex_core_instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->ibex_core_instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->ibex_core_instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                            vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                                                                            vlTOPp->ibex_core_div_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                                                                            vlTOPp->ibex_core_div_sel_ex = 1U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                            vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                                                                            vlTOPp->ibex_core_div_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                                                                            vlTOPp->ibex_core_div_sel_ex = 1U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                            vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                                                                            vlTOPp->ibex_core_mult_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                                                                            vlTOPp->ibex_core_mult_sel_ex = 1U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_core_instr_rdata_id)) {
                                                                            vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                                                                            vlTOPp->ibex_core_mult_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                                                                            vlTOPp->ibex_core_mult_sel_ex = 1U;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                vlTOPp->ibex_core_id_stage_i_alu_operator 
                                                                    = 
                                                                    ((0x4000U 
                                                                      & vlTOPp->ibex_core_instr_rdata_id)
                                                                      ? 
                                                                     ((0x2000U 
                                                                       & vlTOPp->ibex_core_instr_rdata_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlTOPp->ibex_core_instr_rdata_id)
                                                                        ? 4U
                                                                        : 3U)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlTOPp->ibex_core_instr_rdata_id)
                                                                        ? 9U
                                                                        : 2U))
                                                                      : 
                                                                     ((0x2000U 
                                                                       & vlTOPp->ibex_core_instr_rdata_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlTOPp->ibex_core_instr_rdata_id)
                                                                        ? 0x26U
                                                                        : 0x25U)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlTOPp->ibex_core_instr_rdata_id)
                                                                        ? 0xaU
                                                                        : 0U)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                                vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 0U;
                                vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                                if ((1U & (~ (vlTOPp->ibex_core_instr_rdata_id 
                                              >> 0xeU)))) {
                                    vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel_dec = 1U;
                                    vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                                vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec = 2U;
                                vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel_dec = 3U;
                                vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                                vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel_dec = 0U;
                                if ((0x4000U & vlTOPp->ibex_core_instr_rdata_id)) {
                                    if ((0x2000U & vlTOPp->ibex_core_instr_rdata_id)) {
                                        vlTOPp->ibex_core_id_stage_i_alu_operator 
                                            = ((0x1000U 
                                                & vlTOPp->ibex_core_instr_rdata_id)
                                                ? 4U
                                                : 3U);
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->ibex_core_instr_rdata_id)) {
                                            if ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->ibex_core_instr_rdata_id 
                                                     >> 0x1bU)))) {
                                                vlTOPp->ibex_core_id_stage_i_alu_operator = 9U;
                                            } else {
                                                if (
                                                    (8U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->ibex_core_instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->ibex_core_id_stage_i_alu_operator = 8U;
                                                }
                                            }
                                        } else {
                                            vlTOPp->ibex_core_id_stage_i_alu_operator = 2U;
                                        }
                                    }
                                } else {
                                    vlTOPp->ibex_core_id_stage_i_alu_operator 
                                        = ((0x2000U 
                                            & vlTOPp->ibex_core_instr_rdata_id)
                                            ? ((0x1000U 
                                                & vlTOPp->ibex_core_instr_rdata_id)
                                                ? 0x26U
                                                : 0x25U)
                                            : ((0x1000U 
                                                & vlTOPp->ibex_core_instr_rdata_id)
                                                ? 0xaU
                                                : 0U));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                    if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                                if ((0U == (7U & (vlTOPp->ibex_core_instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                                    vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    if ((1U == (7U 
                                                & (vlTOPp->ibex_core_instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec = 2U;
                                        vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 1U;
                                        vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel_dec = 5U;
                                        vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu))) {
                                vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->ibex_core_id_stage_i_alu_operator = 0U;
                                vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel_dec = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->ibex_core_id_stage_i_instr_first_cycle) {
        vlTOPp->ibex_core_rvfi_rs1_addr_d 
            = (0x1fU & ((IData)(vlTOPp->ibex_core_id_stage_i_rf_ren_a)
                         ? (vlTOPp->ibex_core_instr_rdata_id 
                            >> 0xfU) : 0U));
        vlTOPp->ibex_core_rvfi_rs2_addr_d 
            = (0x1fU & ((IData)(vlTOPp->ibex_core_id_stage_i_rf_ren_b)
                         ? (vlTOPp->ibex_core_instr_rdata_id 
                            >> 0x14U) : 0U));
    } else {
        vlTOPp->ibex_core_rvfi_rs1_addr_d 
            = (0x1fU & (IData)(vlTOPp->ibex_core_rvfi_rs1_addr_q));
        vlTOPp->ibex_core_rvfi_rs2_addr_d 
            = (0x1fU & (IData)(vlTOPp->ibex_core_rvfi_rs2_addr_q));
    }
    vlTOPp->ibex_simple_system__host_we[0U] = vlTOPp->ibex_core_id_stage_i_lsu_we;
    vlTOPp->ibex_core_id_stage_i_controller_i_wfi_insn 
        = ((IData)(vlTOPp->ibex_core_id_stage_i_wfi_insn_dec) 
           & (IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q));
    vlTOPp->ibex_core_id_stage_i_controller_i_dret_insn 
        = ((IData)(vlTOPp->ibex_core_id_stage_i_dret_insn_dec) 
           & (IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q));
    vlTOPp->ibex_core_id_stage_i_controller_i_mret_insn 
        = ((IData)(vlTOPp->ibex_core_id_stage_i_mret_insn_dec) 
           & (IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q));
    vlTOPp->ibex_core_rvfi_mem_mask_int 
        = ((0U == (IData)(vlTOPp->ibex_core_id_stage_i_lsu_type))
            ? 0xfU : ((1U == (IData)(vlTOPp->ibex_core_id_stage_i_lsu_type))
                       ? 3U : ((2U == (IData)(vlTOPp->ibex_core_id_stage_i_lsu_type))
                                ? 1U : 0U)));
    vlTOPp->ibex_core_csr_op 
        = vlTOPp->ibex_core_id_stage_i_decoder_i_csr_op;
    if ((((2U == (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_csr_op)) 
          | (3U == (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_csr_op))) 
         & (0U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                            >> 0xfU))))) {
        vlTOPp->ibex_core_csr_op = 0U;
    }
    vlTOPp->ibex_core_id_stage_i_controller_i_ebrk_insn 
        = ((IData)(vlTOPp->ibex_core_id_stage_i_ebrk_insn) 
           & (IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q));
    vlTOPp->ibex_core_id_stage_i_controller_i_ecall_insn 
        = ((IData)(vlTOPp->ibex_core_id_stage_i_ecall_insn_dec) 
           & (IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q));
    vlTOPp->ibex_core_id_stage_i_lsu_req 
        = ((IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec) 
           & ((IData)(vlTOPp->ibex_core_id_stage_i_instr_first_cycle) 
              & (IData)(vlTOPp->ibex_core_id_stage_i_lsu_req_dec)));
    vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_d 
        = ((2U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))
            ? ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))
                ? 0U : ((0U == (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_operator))
                         ? 0U : 3U)) : ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))
                                         ? 2U : 1U));
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_hold = 0U;
    if ((2U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))) {
        if ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))) {
            vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_hold = 0U;
        } else {
            if ((0U == (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_operator))) {
                vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_hold = 0U;
            }
        }
    }
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_valid = 0U;
    if ((2U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))) {
        if ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))) {
            vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_valid = 1U;
        } else {
            if ((0U == (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_operator))) {
                vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_valid = 1U;
            }
        }
    }
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum 
        = vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
        [0U];
    if ((2U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))) {
        if ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))) {
            vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum 
                = ((0x3fffc0000ULL & vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum) 
                   | (IData)((IData)((0x3ffffU & (IData)(
                                                         (vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                                          [0U] 
                                                          >> 0x10U))))));
            vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum 
                = ((0x3ffffULL & vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum) 
                   | ((QData)((IData)((0xffffU & (- (IData)(
                                                            ((0U 
                                                              != (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode)) 
                                                             & (IData)(
                                                                       (vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                                                        [0U] 
                                                                        >> 0x21U)))))))) 
                      << 0x12U));
        } else {
            vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum 
                = ((0U == (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_operator))
                    ? (QData)((IData)((0xffffU & (IData)(
                                                         (vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                                          [0U] 
                                                          >> 0x10U)))))
                    : vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                   [0U]);
        }
    } else {
        vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum 
            = ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))
                ? (QData)((IData)((0xffffU & (IData)(
                                                     (vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                                      [0U] 
                                                      >> 0x10U)))))
                : 0ULL);
    }
    vlTOPp->__Vtableidx5 = vlTOPp->ibex_core_id_stage_i_alu_operator;
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_left 
        = vlTOPp->__Vtable5_ibex_core_ex_block_i_alu_i_shift_left
        [vlTOPp->__Vtableidx5];
    vlTOPp->__Vtableidx3 = vlTOPp->ibex_core_id_stage_i_alu_operator;
    vlTOPp->ibex_core_ex_block_i_alu_i_cmp_signed 
        = vlTOPp->__Vtable3_ibex_core_ex_block_i_alu_i_cmp_signed
        [vlTOPp->__Vtableidx3];
    vlTOPp->__Vtableidx2 = vlTOPp->ibex_core_id_stage_i_alu_operator;
    vlTOPp->ibex_core_ex_block_i_alu_i_adder_op_b_negate 
        = vlTOPp->__Vtable2_ibex_core_ex_block_i_alu_i_adder_op_b_negate
        [vlTOPp->__Vtableidx2];
    vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel 
        = ((IData)(vlTOPp->ibex_core_lsu_addr_incr_req)
            ? 1U : (IData)(vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec));
    vlTOPp->ibex_core_id_stage_i_mult_en_dec 
        = ((~ (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn)) 
           & (IData)(vlTOPp->ibex_core_mult_sel_ex));
    vlTOPp->ibex_core_id_stage_i_div_en_dec 
        = ((~ (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn)) 
           & (IData)(vlTOPp->ibex_core_div_sel_ex));
    vlTOPp->ibex_core_ex_block_i_multdiv_sel 
        = ((IData)(vlTOPp->ibex_core_mult_sel_ex) 
           | (IData)(vlTOPp->ibex_core_div_sel_ex));
    vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel 
        = ((IData)(vlTOPp->ibex_core_lsu_addr_incr_req)
            ? 6U : (IData)(vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel_dec));
    vlTOPp->ibex_Vcellinp_u_bus__host_we_i[0U] 
        = vlTOPp->ibex_simple_system__host_we[0U];
    vlTOPp->ibex_core_id_stage_i_controller_i_nmi_mode_d 
        = vlTOPp->ibex_core_id_stage_i_controller_i_nmi_mode_q;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_q) 
                                   | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_q)) 
                                  | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_q))))) {
                        if (vlTOPp->ibex_core_id_stage_i_controller_i_mret_insn) {
                            if (vlTOPp->ibex_core_id_stage_i_controller_i_nmi_mode_q) {
                                vlTOPp->ibex_core_id_stage_i_controller_i_nmi_mode_d = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_d 
        = vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q;
    if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_d = 1U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_q) 
                                   | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_q)) 
                                  | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_q))))) {
                        if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_mret_insn)))) {
                            if (vlTOPp->ibex_core_id_stage_i_controller_i_dret_insn) {
                                vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_d = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_pc_mux_id = 0U;
    if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->ibex_core_pc_mux_id = 2U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    vlTOPp->ibex_core_pc_mux_id = 2U;
                } else {
                    if ((((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_q) 
                          | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_q)) 
                         | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_q))) {
                        vlTOPp->ibex_core_pc_mux_id = 2U;
                    } else {
                        if (vlTOPp->ibex_core_id_stage_i_controller_i_mret_insn) {
                            vlTOPp->ibex_core_pc_mux_id = 3U;
                        } else {
                            if (vlTOPp->ibex_core_id_stage_i_controller_i_dret_insn) {
                                vlTOPp->ibex_core_pc_mux_id = 4U;
                            }
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    vlTOPp->ibex_core_pc_mux_id = 1U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->ibex_core_pc_mux_id = 0U;
            }
        }
    }
    vlTOPp->ibex_core_csr_restore_mret_id = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_q) 
                                   | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_q)) 
                                  | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_q))))) {
                        if (vlTOPp->ibex_core_id_stage_i_controller_i_mret_insn) {
                            vlTOPp->ibex_core_csr_restore_mret_id = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_csr_restore_dret_id = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_q) 
                                   | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_q)) 
                                  | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_q))))) {
                        if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_mret_insn)))) {
                            if (vlTOPp->ibex_core_id_stage_i_controller_i_dret_insn) {
                                vlTOPp->ibex_core_csr_restore_dret_id = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_q) 
                             << 5U) | (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_q) 
                                        << 4U) | (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ebrk_insn) 
                                                   << 3U) 
                                                  | (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ecall_insn) 
                                                      << 2U) 
                                                     | (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_q) 
                                                         << 1U) 
                                                        | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_instr_fetch_err))))));
    vlTOPp->ibex_core_id_stage_i_controller_i_instr_fetch_err_prio 
        = vlTOPp->__Vtable1_ibex_core_id_stage_i_controller_i_instr_fetch_err_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_prio 
        = vlTOPp->__Vtable1_ibex_core_id_stage_i_controller_i_illegal_insn_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->ibex_core_id_stage_i_controller_i_ecall_insn_prio 
        = vlTOPp->__Vtable1_ibex_core_id_stage_i_controller_i_ecall_insn_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->ibex_core_id_stage_i_controller_i_ebrk_insn_prio 
        = vlTOPp->__Vtable1_ibex_core_id_stage_i_controller_i_ebrk_insn_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->ibex_core_id_stage_i_controller_i_store_err_prio 
        = vlTOPp->__Vtable1_ibex_core_id_stage_i_controller_i_store_err_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->ibex_core_id_stage_i_controller_i_load_err_prio 
        = vlTOPp->__Vtable1_ibex_core_id_stage_i_controller_i_load_err_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->ibex_core_perf_store = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs)))) {
                if (vlTOPp->ibex_core_id_stage_i_lsu_req) {
                    vlTOPp->ibex_core_perf_store 
                        = vlTOPp->ibex_core_id_stage_i_lsu_we;
                }
            }
        }
    }
    vlTOPp->ibex_core_perf_load = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs)))) {
                if (vlTOPp->ibex_core_id_stage_i_lsu_req) {
                    vlTOPp->ibex_core_perf_load 
                        = (1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_lsu_we)));
                }
            }
        }
    }
    vlTOPp->ibex_core_data_req_out = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
            vlTOPp->ibex_core_data_req_out = 1U;
        } else {
            if ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
                vlTOPp->ibex_core_data_req_out = 1U;
            } else {
                if (vlTOPp->ibex_core_id_stage_i_lsu_req) {
                    vlTOPp->ibex_core_data_req_out = 1U;
                }
            }
        }
    }
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_en_internal 
        = (((IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec) 
            & (IData)(vlTOPp->ibex_core_id_stage_i_mult_en_dec)) 
           & (~ (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_hold)));
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_en_internal 
        = (((IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec) 
            & (IData)(vlTOPp->ibex_core_id_stage_i_div_en_dec)) 
           & (~ (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_hold)));
    vlTOPp->ibex_core_id_stage_i_multdiv_en_dec 
        = ((IData)(vlTOPp->ibex_core_id_stage_i_mult_en_dec) 
           | (IData)(vlTOPp->ibex_core_id_stage_i_div_en_dec));
    vlTOPp->ibex_core_ex_valid 
        = (1U & ((~ (IData)(vlTOPp->ibex_core_ex_block_i_multdiv_sel)) 
                 | ((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_valid) 
                    | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_valid))));
    vlTOPp->ibex_core_id_stage_i_imm_b 
        = ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel))
            ? ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel))
                ? 4U : ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel))
                         ? ((IData)(vlTOPp->ibex_core_instr_is_compressed_id)
                             ? 2U : 4U) : ((0xfff00000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->ibex_core_instr_rdata_id 
                                                              >> 0x1fU)))) 
                                               << 0x14U)) 
                                           | ((0xff000U 
                                               & vlTOPp->ibex_core_instr_rdata_id) 
                                              | ((0x800U 
                                                  & (vlTOPp->ibex_core_instr_rdata_id 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlTOPp->ibex_core_instr_rdata_id 
                                                       >> 0x14U)))))))
            : ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel))
                ? ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel))
                    ? (0xfffff000U & vlTOPp->ibex_core_instr_rdata_id)
                    : ((0xffffe000U & ((- (IData)((1U 
                                                   & (vlTOPp->ibex_core_instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xdU)) | 
                       ((0x1000U & (vlTOPp->ibex_core_instr_rdata_id 
                                    >> 0x13U)) | ((0x800U 
                                                   & (vlTOPp->ibex_core_instr_rdata_id 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlTOPp->ibex_core_instr_rdata_id 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlTOPp->ibex_core_instr_rdata_id 
                                                           >> 7U)))))))
                : ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel))
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlTOPp->ibex_core_instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       ((0xfe0U & (vlTOPp->ibex_core_instr_rdata_id 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlTOPp->ibex_core_instr_rdata_id 
                                                    >> 7U))))
                    : ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlTOPp->ibex_core_instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlTOPp->ibex_core_instr_rdata_id 
                                  >> 0x14U))))));
    vlTOPp->ibex_core_csr_mtval = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)))) {
                    if ((((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_q) 
                          | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_q)) 
                         | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_q))) {
                        if (vlTOPp->ibex_core_id_stage_i_controller_i_instr_fetch_err_prio) {
                            vlTOPp->ibex_core_csr_mtval 
                                = ((IData)(vlTOPp->ibex_core_instr_fetch_err_plus2)
                                    ? ((IData)(2U) 
                                       + vlTOPp->ibex_core_pc_id)
                                    : vlTOPp->ibex_core_pc_id);
                        } else {
                            if (vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_prio) {
                                vlTOPp->ibex_core_csr_mtval 
                                    = ((IData)(vlTOPp->ibex_core_instr_is_compressed_id)
                                        ? (IData)(vlTOPp->ibex_core_instr_rdata_c_id)
                                        : vlTOPp->ibex_core_instr_rdata_id);
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ecall_insn_prio)))) {
                                    if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ebrk_insn_prio)))) {
                                        if (vlTOPp->ibex_core_id_stage_i_controller_i_store_err_prio) {
                                            vlTOPp->ibex_core_csr_mtval 
                                                = vlTOPp->ibex_core_load_store_unit_i_addr_last_q;
                                        } else {
                                            if (vlTOPp->ibex_core_id_stage_i_controller_i_load_err_prio) {
                                                vlTOPp->ibex_core_csr_mtval 
                                                    = vlTOPp->ibex_core_load_store_unit_i_addr_last_q;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_csr_save_id = 0U;
    if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ebreak_into_debug) 
                         & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))) {
                        vlTOPp->ibex_core_csr_save_id = 1U;
                    }
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)))) {
                    if ((((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_q) 
                          | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_q)) 
                         | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_q))) {
                        vlTOPp->ibex_core_csr_save_id = 0U;
                        if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ecall_insn_prio)))) {
                                    if (vlTOPp->ibex_core_id_stage_i_controller_i_ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q) 
                                             | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ebreak_into_debug))) {
                                            vlTOPp->ibex_core_csr_save_id = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_id_stage_i_controller_i_flush_id = 0U;
    if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->ibex_core_id_stage_i_controller_i_flush_id = 1U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)))) {
                    vlTOPp->ibex_core_id_stage_i_controller_i_flush_id = 1U;
                    if ((((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_q) 
                          | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_q)) 
                         | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_q))) {
                        if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ecall_insn_prio)))) {
                                    if (vlTOPp->ibex_core_id_stage_i_controller_i_ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q) 
                                             | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ebreak_into_debug))) {
                                            vlTOPp->ibex_core_id_stage_i_controller_i_flush_id = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                vlTOPp->ibex_core_id_stage_i_controller_i_flush_id = 1U;
            }
        }
    }
    vlTOPp->ibex_simple_system__host_req[0U] = 
        ((IData)(vlTOPp->ibex_core_data_req_out) 
         & (~ vlTOPp->ibex_core_pmp_req_err
            [1U]));
    vlTOPp->ibex_core_ex_block_i_multdiv_imd_val_we 
        = ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_multdiv_imd_val_we)) 
           | ((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_en_internal) 
              << 1U));
    vlTOPp->ibex_core_ex_block_i_multdiv_imd_val_we 
        = ((2U & (IData)(vlTOPp->ibex_core_ex_block_i_multdiv_imd_val_we)) 
           | ((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_en_internal) 
              | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_en_internal)));
    vlTOPp->ibex_core_perf_branch = 0U;
    if (vlTOPp->ibex_core_id_stage_i_instr_executing_spec) {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_id_fsm_q)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_en_dec)))) {
                    if (vlTOPp->ibex_core_id_stage_i_branch_in_dec) {
                        vlTOPp->ibex_core_perf_branch = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_id_stage_i_jump_set_raw = 0U;
    if (vlTOPp->ibex_core_id_stage_i_instr_executing_spec) {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_id_fsm_q)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_en_dec)))) {
                    if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_branch_in_dec)))) {
                        if (vlTOPp->ibex_core_id_stage_i_jump_in_dec) {
                            vlTOPp->ibex_core_id_stage_i_jump_set_raw 
                                = vlTOPp->ibex_core_id_stage_i_jump_set_dec;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_id_stage_i_rf_we_raw 
        = vlTOPp->ibex_core_id_stage_i_decoder_i_rf_we;
    if (vlTOPp->ibex_core_id_stage_i_instr_executing_spec) {
        if (vlTOPp->ibex_core_id_stage_i_id_fsm_q) {
            if (vlTOPp->ibex_core_id_stage_i_id_fsm_q) {
                if (vlTOPp->ibex_core_id_stage_i_multdiv_en_dec) {
                    vlTOPp->ibex_core_id_stage_i_rf_we_raw 
                        = ((IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_rf_we) 
                           & (IData)(vlTOPp->ibex_core_ex_valid));
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_lsu_req_dec)))) {
                if (vlTOPp->ibex_core_id_stage_i_multdiv_en_dec) {
                    if ((1U & (~ (IData)(vlTOPp->ibex_core_ex_valid)))) {
                        vlTOPp->ibex_core_id_stage_i_rf_we_raw = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_Vcellinp_u_bus__host_req_i[0U] 
        = vlTOPp->ibex_simple_system__host_req
        [0U];
    vlTOPp->ibex_core_imd_val_we_ex 
        = ((IData)(vlTOPp->ibex_core_ex_block_i_multdiv_sel)
            ? (IData)(vlTOPp->ibex_core_ex_block_i_multdiv_imd_val_we)
            : 0U);
    vlTOPp->ibex_core_id_stage_i_jump_set 
        = ((IData)(vlTOPp->ibex_core_id_stage_i_jump_set_raw) 
           & (~ (IData)(vlTOPp->ibex_core_id_stage_i_branch_jump_set_done_q)));
    vlTOPp->ibex_bus_host_sel_req = 0U;
    if (vlTOPp->ibex_Vcellinp_u_bus__host_req_i
        [0U]) {
        vlTOPp->ibex_bus_host_sel_req = 0U;
    }
    vlTOPp->ibex_core_perf_tbranch = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->ibex_core_id_stage_i_branch_set) 
                         | (IData)(vlTOPp->ibex_core_id_stage_i_jump_set))) {
                        vlTOPp->ibex_core_perf_tbranch 
                            = vlTOPp->ibex_core_id_stage_i_branch_set;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_perf_jump = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->ibex_core_id_stage_i_branch_set) 
                         | (IData)(vlTOPp->ibex_core_id_stage_i_jump_set))) {
                        vlTOPp->ibex_core_perf_jump 
                            = vlTOPp->ibex_core_id_stage_i_jump_set;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_Vcellout__u_bus__host_gnt_o[0U] = 0U;
    vlTOPp->ibex_bus___Vlvbound18 
        = ((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req)) 
           & vlTOPp->ibex_Vcellinp_u_bus__host_req_i
           [vlTOPp->ibex_bus_host_sel_req]);
    if ((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req))) {
        vlTOPp->ibex_Vcellout__u_bus__host_gnt_o[vlTOPp->ibex_bus_host_sel_req] 
            = vlTOPp->ibex_bus___Vlvbound18;
    }
    vlTOPp->ibex_simple_system__host_gnt[0U] = 
        vlTOPp->ibex_Vcellout__u_bus__host_gnt_o
        [0U];
    vlTOPp->ibex_core_load_store_unit_i_ctrl_update = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
            if ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
                if ((vlTOPp->ibex_simple_system__host_gnt
                     [0U] | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q))) {
                    vlTOPp->ibex_core_load_store_unit_i_ctrl_update = 1U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
                if ((vlTOPp->ibex_simple_system__host_gnt
                     [0U] | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q))) {
                    vlTOPp->ibex_core_load_store_unit_i_ctrl_update = 1U;
                }
            } else {
                if (vlTOPp->ibex_core_id_stage_i_lsu_req) {
                    if (vlTOPp->ibex_simple_system__host_gnt
                        [0U]) {
                        vlTOPp->ibex_core_load_store_unit_i_ctrl_update = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vibex_simple_system::_combo__TOP__17(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system::_combo__TOP__17\n"); );
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->ibex_simple_system__clk_sys)))) {
        vlTOPp->ibex_core_core_clock_gate_i_gen_generic__u_impl_generic__en_latch 
            = ((IData)(vlTOPp->ibex_core_fetch_enable_q) 
               & ((IData)(vlTOPp->ibex_core_core_busy_q) 
                  | (0U != vlTOPp->ibex_core_irqs)));
    }
}

VL_INLINE_OPT void Vibex_simple_system::_multiclk__TOP__18(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system::_multiclk__TOP__18\n"); );
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ibex_core_ctrl_busy = 1U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if ((1U & (~ (((0U != vlTOPp->ibex_core_irqs) 
                                   | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)) 
                                  | (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                     >> 2U))))) {
                        vlTOPp->ibex_core_ctrl_busy = 0U;
                    }
                } else {
                    vlTOPp->ibex_core_ctrl_busy = 0U;
                }
            }
        }
    }
    vlTOPp->ibex_core_csr_save_if = 0U;
    if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)))) {
                    vlTOPp->ibex_core_csr_save_if = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if (vlTOPp->ibex_core_id_stage_i_controller_i_handle_irq) {
                        vlTOPp->ibex_core_csr_save_if = 1U;
                    }
                }
            }
        }
    }
    if (vlTOPp->ibex_core_id_stage_i_instr_first_cycle) {
        vlTOPp->ibex_core_rvfi_mem_wdata_d 
            = vlTOPp->ibex_core_rf_rdata_b_ecc;
        vlTOPp->ibex_core_rvfi_rs1_data_d 
            = ((IData)(vlTOPp->ibex_core_id_stage_i_rf_ren_a)
                ? vlTOPp->ibex_core_rf_rdata_a_ecc
                : 0U);
        vlTOPp->ibex_core_rvfi_rs2_data_d 
            = ((IData)(vlTOPp->ibex_core_id_stage_i_rf_ren_b)
                ? vlTOPp->ibex_core_rf_rdata_b_ecc
                : 0U);
    } else {
        vlTOPp->ibex_core_rvfi_mem_wdata_d 
            = vlTOPp->ibex_core_rvfi_mem_wdata_q;
        vlTOPp->ibex_core_rvfi_rs1_data_d 
            = vlTOPp->ibex_core_rvfi_rs1_data_q;
        vlTOPp->ibex_core_rvfi_rs2_data_d 
            = vlTOPp->ibex_core_rvfi_rs2_data_q;
    }
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_sign_a 
        = (1U & ((vlTOPp->ibex_core_rf_rdata_a_ecc 
                  >> 0x1fU) & (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode)));
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_b 
        = (1U & ((2U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))
                  ? ((IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q) 
                     & (((IData)(vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode) 
                         >> 1U) & (vlTOPp->ibex_core_rf_rdata_b_ecc 
                                   >> 0x1fU))) : ((IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q) 
                                                  & (((IData)(vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode) 
                                                      >> 1U) 
                                                     & (vlTOPp->ibex_core_rf_rdata_b_ecc 
                                                        >> 0x1fU)))));
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_a 
        = (1U & (((IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q) 
                  >> 1U) & ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))
                             ? ((IData)(vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode) 
                                & (vlTOPp->ibex_core_rf_rdata_a_ecc 
                                   >> 0x1fU)) : ((IData)(vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode) 
                                                 & (vlTOPp->ibex_core_rf_rdata_a_ecc 
                                                    >> 0x1fU)))));
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_sign_b 
        = (1U & ((vlTOPp->ibex_core_rf_rdata_b_ecc 
                  >> 0x1fU) & ((IData)(vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode) 
                               >> 1U)));
    vlTOPp->ibex_core_load_store_unit_i_pmp_err_d 
        = vlTOPp->ibex_core_load_store_unit_i_pmp_err_q;
    if ((4U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs)))) {
                if (vlTOPp->ibex_simple_system__host_rvalid
                    [0U]) {
                    vlTOPp->ibex_core_load_store_unit_i_pmp_err_d 
                        = vlTOPp->ibex_core_pmp_req_err
                        [1U];
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs)))) {
                if ((vlTOPp->ibex_simple_system__host_rvalid
                     [0U] | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q))) {
                    vlTOPp->ibex_core_load_store_unit_i_pmp_err_d 
                        = vlTOPp->ibex_core_pmp_req_err
                        [1U];
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs)))) {
                vlTOPp->ibex_core_load_store_unit_i_pmp_err_d = 0U;
                if (vlTOPp->ibex_core_id_stage_i_lsu_req) {
                    vlTOPp->ibex_core_load_store_unit_i_pmp_err_d 
                        = vlTOPp->ibex_core_pmp_req_err
                        [1U];
                }
            }
        }
    }
    vlTOPp->ibex_core_load_store_unit_i_lsu_err_d 
        = vlTOPp->ibex_core_load_store_unit_i_lsu_err_q;
    if ((4U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs)))) {
                if (vlTOPp->ibex_simple_system__host_rvalid
                    [0U]) {
                    vlTOPp->ibex_core_load_store_unit_i_lsu_err_d 
                        = vlTOPp->ibex_simple_system__host_err
                        [0U];
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs)))) {
                if ((vlTOPp->ibex_simple_system__host_rvalid
                     [0U] | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q))) {
                    vlTOPp->ibex_core_load_store_unit_i_lsu_err_d 
                        = (vlTOPp->ibex_simple_system__host_err
                           [0U] | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q));
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs)))) {
                if (vlTOPp->ibex_core_id_stage_i_lsu_req) {
                    vlTOPp->ibex_core_load_store_unit_i_lsu_err_d = 0U;
                }
            }
        }
    }
    vlTOPp->ibex_core_id_stage_i_alu_operand_a 
        = ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel))
            ? ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel))
                ? ((IData)(vlTOPp->ibex_core_id_stage_i_imm_a_mux_sel)
                    ? 0U : (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                                     >> 0xfU))) : vlTOPp->ibex_core_pc_id)
            : ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel))
                ? vlTOPp->ibex_core_load_store_unit_i_addr_last_q
                : vlTOPp->ibex_core_rf_rdata_a_ecc));
    vlTOPp->ibex_core_exc_cause = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if (vlTOPp->ibex_core_id_stage_i_controller_i_handle_irq) {
                        vlTOPp->ibex_core_exc_cause 
                            = ((0U != (0x7fffU & vlTOPp->ibex_core_irqs))
                                ? (0x30U | ((0x4000U 
                                             & vlTOPp->ibex_core_irqs)
                                             ? 0xeU
                                             : ((0x2000U 
                                                 & vlTOPp->ibex_core_irqs)
                                                 ? 0xdU
                                                 : 
                                                ((0x1000U 
                                                  & vlTOPp->ibex_core_irqs)
                                                  ? 0xcU
                                                  : 
                                                 ((0x800U 
                                                   & vlTOPp->ibex_core_irqs)
                                                   ? 0xbU
                                                   : 
                                                  ((0x400U 
                                                    & vlTOPp->ibex_core_irqs)
                                                    ? 0xaU
                                                    : 
                                                   ((0x200U 
                                                     & vlTOPp->ibex_core_irqs)
                                                     ? 9U
                                                     : 
                                                    ((0x100U 
                                                      & vlTOPp->ibex_core_irqs)
                                                      ? 8U
                                                      : 
                                                     ((0x80U 
                                                       & vlTOPp->ibex_core_irqs)
                                                       ? 7U
                                                       : 
                                                      ((0x40U 
                                                        & vlTOPp->ibex_core_irqs)
                                                        ? 6U
                                                        : 
                                                       ((0x20U 
                                                         & vlTOPp->ibex_core_irqs)
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlTOPp->ibex_core_irqs)
                                                          ? 4U
                                                          : 
                                                         ((8U 
                                                           & vlTOPp->ibex_core_irqs)
                                                           ? 3U
                                                           : 
                                                          ((4U 
                                                            & vlTOPp->ibex_core_irqs)
                                                            ? 2U
                                                            : 
                                                           ((2U 
                                                             & vlTOPp->ibex_core_irqs)
                                                             ? 1U
                                                             : 0U)))))))))))))))
                                : ((0x8000U & vlTOPp->ibex_core_irqs)
                                    ? 0x2bU : ((0x20000U 
                                                & vlTOPp->ibex_core_irqs)
                                                ? 0x23U
                                                : 0x27U)));
                    }
                } else {
                    if ((((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_q) 
                          | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_q)) 
                         | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_q))) {
                        if (vlTOPp->ibex_core_id_stage_i_controller_i_instr_fetch_err_prio) {
                            vlTOPp->ibex_core_exc_cause = 1U;
                        } else {
                            if (vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_prio) {
                                vlTOPp->ibex_core_exc_cause = 2U;
                            } else {
                                if (vlTOPp->ibex_core_id_stage_i_controller_i_ecall_insn_prio) {
                                    vlTOPp->ibex_core_exc_cause 
                                        = ((3U == (IData)(vlTOPp->ibex_core_cs_reg_i_priv_lvl_q))
                                            ? 0xbU : 8U);
                                } else {
                                    if (vlTOPp->ibex_core_id_stage_i_controller_i_ebrk_insn_prio) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q) 
                                                    | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ebreak_into_debug))))) {
                                            vlTOPp->ibex_core_exc_cause = 3U;
                                        }
                                    } else {
                                        if (vlTOPp->ibex_core_id_stage_i_controller_i_store_err_prio) {
                                            vlTOPp->ibex_core_exc_cause = 7U;
                                        } else {
                                            if (vlTOPp->ibex_core_id_stage_i_controller_i_load_err_prio) {
                                                vlTOPp->ibex_core_exc_cause = 5U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_csr_save_cause = 0U;
    if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ebreak_into_debug) 
                         & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))) {
                        vlTOPp->ibex_core_csr_save_cause = 1U;
                    }
                } else {
                    vlTOPp->ibex_core_csr_save_cause = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if (vlTOPp->ibex_core_id_stage_i_controller_i_handle_irq) {
                        vlTOPp->ibex_core_csr_save_cause = 1U;
                    }
                } else {
                    if ((((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_q) 
                          | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_q)) 
                         | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_q))) {
                        vlTOPp->ibex_core_csr_save_cause = 1U;
                        if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ecall_insn_prio)))) {
                                    if (vlTOPp->ibex_core_id_stage_i_controller_i_ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q) 
                                             | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ebreak_into_debug))) {
                                            vlTOPp->ibex_core_csr_save_cause = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_id_stage_i_multicycle_done 
        = ((IData)(vlTOPp->ibex_core_id_stage_i_lsu_req_dec)
            ? (IData)(vlTOPp->ibex_core_lsu_resp_valid)
            : (IData)(vlTOPp->ibex_core_ex_valid));
    vlTOPp->ibex_core_id_stage_i_alu_operand_b 
        = (((IData)(vlTOPp->ibex_core_lsu_addr_incr_req) 
            | (IData)(vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec))
            ? vlTOPp->ibex_core_id_stage_i_imm_b
            : vlTOPp->ibex_core_rf_rdata_b_ecc);
    vlTOPp->ibex_core_pc_set_spec = 0U;
    if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->ibex_core_pc_set_spec = 1U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if (vlTOPp->ibex_core_id_stage_i_controller_i_handle_irq) {
                        vlTOPp->ibex_core_pc_set_spec = 1U;
                    }
                } else {
                    if ((((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_q) 
                          | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_q)) 
                         | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_q))) {
                        vlTOPp->ibex_core_pc_set_spec = 1U;
                        if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ecall_insn_prio)))) {
                                    if (vlTOPp->ibex_core_id_stage_i_controller_i_ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q) 
                                             | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ebreak_into_debug))) {
                                            vlTOPp->ibex_core_pc_set_spec = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (vlTOPp->ibex_core_id_stage_i_controller_i_mret_insn) {
                            vlTOPp->ibex_core_pc_set_spec = 1U;
                        } else {
                            if (vlTOPp->ibex_core_id_stage_i_controller_i_dret_insn) {
                                vlTOPp->ibex_core_pc_set_spec = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if ((((IData)(vlTOPp->ibex_core_id_stage_i_g_branch_set_flop__branch_set_raw_q) 
                          & (~ (IData)(vlTOPp->ibex_core_id_stage_i_branch_jump_set_done_q))) 
                         | (IData)(vlTOPp->ibex_core_id_stage_i_jump_set))) {
                        vlTOPp->ibex_core_pc_set_spec = 1U;
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->ibex_core_pc_set_spec = 1U;
            }
        }
    }
    vlTOPp->ibex_core_pc_set = 0U;
    if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->ibex_core_pc_set = 1U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if (vlTOPp->ibex_core_id_stage_i_controller_i_handle_irq) {
                        vlTOPp->ibex_core_pc_set = 1U;
                    }
                } else {
                    if ((((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_q) 
                          | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_q)) 
                         | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_q))) {
                        vlTOPp->ibex_core_pc_set = 1U;
                        if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ecall_insn_prio)))) {
                                    if (vlTOPp->ibex_core_id_stage_i_controller_i_ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q) 
                                             | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ebreak_into_debug))) {
                                            vlTOPp->ibex_core_pc_set = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (vlTOPp->ibex_core_id_stage_i_controller_i_mret_insn) {
                            vlTOPp->ibex_core_pc_set = 1U;
                        } else {
                            if (vlTOPp->ibex_core_id_stage_i_controller_i_dret_insn) {
                                vlTOPp->ibex_core_pc_set = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->ibex_core_id_stage_i_branch_set) 
                         | (IData)(vlTOPp->ibex_core_id_stage_i_jump_set))) {
                        vlTOPp->ibex_core_pc_set = 1U;
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->ibex_core_pc_set = 1U;
            }
        }
    }
    vlTOPp->ibex_core_load_store_unit_i_addr_update = 0U;
    if ((4U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs)))) {
                if (vlTOPp->ibex_simple_system__host_rvalid
                    [0U]) {
                    vlTOPp->ibex_core_load_store_unit_i_addr_update 
                        = (1U & (~ vlTOPp->ibex_simple_system__host_err
                                 [0U]));
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
            if ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
                if ((vlTOPp->ibex_simple_system__host_gnt
                     [0U] | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q))) {
                    vlTOPp->ibex_core_load_store_unit_i_addr_update 
                        = (1U & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_lsu_err_q)));
                }
            } else {
                if ((vlTOPp->ibex_simple_system__host_rvalid
                     [0U] | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q))) {
                    vlTOPp->ibex_core_load_store_unit_i_addr_update 
                        = (vlTOPp->ibex_simple_system__host_gnt
                           [0U] & (~ (vlTOPp->ibex_simple_system__host_err
                                      [0U] | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q))));
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
                if ((vlTOPp->ibex_simple_system__host_gnt
                     [0U] | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q))) {
                    vlTOPp->ibex_core_load_store_unit_i_addr_update = 1U;
                }
            } else {
                if (vlTOPp->ibex_core_id_stage_i_lsu_req) {
                    if (vlTOPp->ibex_simple_system__host_gnt
                        [0U]) {
                        vlTOPp->ibex_core_load_store_unit_i_addr_update = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mac_res_d 
        = (0x3ffffffffULL & ((2U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))
                              ? ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))
                                  ? ((0x7ffffffffULL 
                                      & VL_MULS_QQQ(35,35,35, 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_a) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_a)))), 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_b) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_b)))))) 
                                     + (0x7ffffffffULL 
                                        & VL_EXTENDS_QQ(35,34, vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum)))
                                  : ((0U == (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_operator))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
                                                                       & VL_MULS_QQQ(35,35,35, 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_a)))), 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                                                      [0U])))))
                                      : ((0x7ffffffffULL 
                                          & VL_MULS_QQQ(35,35,35, 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_a) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_a)))), 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_b) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_b)))))) 
                                         + (0x7ffffffffULL 
                                            & VL_EXTENDS_QQ(35,34, vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum)))))
                              : ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q))
                                  ? ((0U == (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_operator))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
                                                                       & VL_MULS_QQQ(35,35,35, 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_a)))), 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                                                      [0U])))))
                                      : ((0x7ffffffffULL 
                                          & VL_MULS_QQQ(35,35,35, 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_a) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_a)))), 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_b) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_b)))))) 
                                         + (0x7ffffffffULL 
                                            & VL_EXTENDS_QQ(35,34, vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum))))
                                  : ((0x7ffffffffULL 
                                      & VL_MULS_QQQ(35,35,35, 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_a) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_a)))), 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_b) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_b)))))) 
                                     + (0x7ffffffffULL 
                                        & VL_EXTENDS_QQ(35,34, vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum))))));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xfffffffeU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (1U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                    >> 0x1fU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xfffffffdU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (2U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                    >> 0x1dU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xfffffffbU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (4U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                    >> 0x1bU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xfffffff7U & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (8U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                    >> 0x19U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xffffffefU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x10U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                       >> 0x17U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xffffffdfU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x20U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                       >> 0x15U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xffffffbfU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x40U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                       >> 0x13U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xffffff7fU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x80U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                       >> 0x11U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xfffffeffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x100U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                        >> 0xfU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xfffffdffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x200U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                        >> 0xdU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xfffffbffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x400U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                        >> 0xbU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xfffff7ffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x800U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                        >> 9U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xffffefffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x1000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                         >> 7U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xffffdfffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x2000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                         >> 5U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xffffbfffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x4000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                         >> 3U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xffff7fffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x8000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                         >> 1U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xfffeffffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x10000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                          << 1U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xfffdffffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x20000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                          << 3U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xfffbffffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x40000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                          << 5U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xfff7ffffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x80000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                          << 7U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xffefffffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x100000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                           << 9U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xffdfffffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x200000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                           << 0xbU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xffbfffffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x400000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                           << 0xdU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xff7fffffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x800000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                           << 0xfU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xfeffffffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x1000000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                            << 0x11U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xfdffffffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x2000000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                            << 0x13U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xfbffffffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x4000000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                            << 0x15U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xf7ffffffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x8000000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                            << 0x17U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xefffffffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x10000000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                             << 0x19U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xdfffffffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x20000000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                             << 0x1bU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0xbfffffffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x40000000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                             << 0x1dU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev 
        = ((0x7fffffffU & vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev) 
           | (0x80000000U & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                             << 0x1fU)));
    vlTOPp->ibex_core_cs_reg_i_mstack_en = 0U;
    if (vlTOPp->ibex_core_csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))) {
                vlTOPp->ibex_core_cs_reg_i_mstack_en = 1U;
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_priv_lvl_d 
        = vlTOPp->ibex_core_cs_reg_i_priv_lvl_q;
    if (vlTOPp->ibex_core_csr_save_cause) {
        vlTOPp->ibex_core_cs_reg_i_priv_lvl_d = 3U;
    } else {
        if (vlTOPp->ibex_core_csr_restore_dret_id) {
            vlTOPp->ibex_core_cs_reg_i_priv_lvl_d 
                = (3U & vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q);
        } else {
            if (vlTOPp->ibex_core_csr_restore_mret_id) {
                vlTOPp->ibex_core_cs_reg_i_priv_lvl_d 
                    = (3U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                             >> 2U));
            }
        }
    }
    vlTOPp->ibex_core_id_stage_i_stall_jump = 0U;
    if (vlTOPp->ibex_core_id_stage_i_instr_executing_spec) {
        if (vlTOPp->ibex_core_id_stage_i_id_fsm_q) {
            if (vlTOPp->ibex_core_id_stage_i_id_fsm_q) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_multicycle_done)))) {
                    vlTOPp->ibex_core_id_stage_i_stall_jump 
                        = vlTOPp->ibex_core_id_stage_i_jump_in_dec;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_en_dec)))) {
                    if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_branch_in_dec)))) {
                        if (vlTOPp->ibex_core_id_stage_i_jump_in_dec) {
                            vlTOPp->ibex_core_id_stage_i_stall_jump = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_id_stage_i_stall_multdiv = 0U;
    if (vlTOPp->ibex_core_id_stage_i_instr_executing_spec) {
        if (vlTOPp->ibex_core_id_stage_i_id_fsm_q) {
            if (vlTOPp->ibex_core_id_stage_i_id_fsm_q) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_multicycle_done)))) {
                    vlTOPp->ibex_core_id_stage_i_stall_multdiv 
                        = vlTOPp->ibex_core_id_stage_i_multdiv_en_dec;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_lsu_req_dec)))) {
                if (vlTOPp->ibex_core_id_stage_i_multdiv_en_dec) {
                    if ((1U & (~ (IData)(vlTOPp->ibex_core_ex_valid)))) {
                        vlTOPp->ibex_core_id_stage_i_stall_multdiv = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_ex_block_i_alu_i_bwlogic_result 
        = (((3U == (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator)) 
            | (6U == (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator)))
            ? (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
               | vlTOPp->ibex_core_id_stage_i_alu_operand_b)
            : (((4U == (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator)) 
                | (7U == (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator)))
                ? (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                   & vlTOPp->ibex_core_id_stage_i_alu_operand_b)
                : (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                   ^ vlTOPp->ibex_core_id_stage_i_alu_operand_b)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_amt 
        = ((0x20U & (IData)(vlTOPp->ibex_core_ex_block_i_alu_i_shift_amt)) 
           | (0x1fU & ((IData)(vlTOPp->ibex_core_id_stage_i_instr_first_cycle)
                        ? vlTOPp->ibex_core_id_stage_i_alu_operand_b
                        : (- vlTOPp->ibex_core_id_stage_i_alu_operand_b))));
    vlTOPp->ibex_core_csr_addr 
        = ((IData)(vlTOPp->ibex_core_csr_access)
            ? (0xfffU & vlTOPp->ibex_core_id_stage_i_alu_operand_b)
            : 0U);
    vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
        = (0x3ffffffffULL & (((IData)(vlTOPp->ibex_core_ex_block_i_multdiv_sel)
                               ? vlTOPp->ibex_core_ex_block_i_multdiv_alu_operand_a
                               : (1ULL | ((QData)((IData)(vlTOPp->ibex_core_id_stage_i_alu_operand_a)) 
                                          << 1U))) 
                             + (0x1ffffffffULL & ((IData)(vlTOPp->ibex_core_ex_block_i_multdiv_sel)
                                                   ? vlTOPp->ibex_core_ex_block_i_multdiv_alu_operand_b
                                                   : 
                                                  ((IData)(vlTOPp->ibex_core_ex_block_i_alu_i_adder_op_b_negate)
                                                    ? 
                                                   (~ 
                                                    ((QData)((IData)(vlTOPp->ibex_core_id_stage_i_alu_operand_b)) 
                                                     << 1U))
                                                    : 
                                                   ((QData)((IData)(vlTOPp->ibex_core_id_stage_i_alu_operand_b)) 
                                                    << 1U))))));
    vlTOPp->ibex_core_csr_mtvec_init 
        = ((0U == (IData)(vlTOPp->ibex_core_pc_mux_id)) 
           & (IData)(vlTOPp->ibex_core_pc_set));
    vlTOPp->ibex_core_pre_buf_i_discard_req_d 
        = ((IData)(vlTOPp->ibex_core_pre_buf_i_valid_req_q) 
           & ((IData)(vlTOPp->ibex_core_pc_set) 
              | (IData)(vlTOPp->ibex_core_pre_buf_i_discard_req_q)));
    vlTOPp->ibex_core_pre_buf_i_valid_new_req 
        = ((((~ ((IData)(vlTOPp->ibex_core_pc_set_spec) 
                 & (~ (IData)(vlTOPp->ibex_core_pc_set)))) 
             & (IData)(vlTOPp->ibex_core_instr_req_int)) 
            & ((~ (IData)((3U == (3U & (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q) 
                                         >> 1U) | (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_rev)))))) 
               | (IData)(vlTOPp->ibex_core_pc_set))) 
           & (~ ((IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_q) 
                 >> 1U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_operand 
        = ((IData)(vlTOPp->ibex_core_ex_block_i_alu_i_shift_left)
            ? vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev
            : vlTOPp->ibex_core_id_stage_i_alu_operand_a);
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_ext_signed 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                           (((QData)((IData)(
                                                             ((8U 
                                                               == (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator)) 
                                                              & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_operand 
                                                                 >> 0x1fU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->ibex_core_ex_block_i_alu_i_shift_operand))), 
                                           (0x1fU & (IData)(vlTOPp->ibex_core_ex_block_i_alu_i_shift_amt))));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_ext 
        = vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_ext_signed;
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
        = (IData)(vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_ext);
    vlTOPp->ibex_core_ex_block_i_alu_i_unused_shift_result_ext 
        = (1U & (IData)((vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_ext 
                         >> 0x20U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xfffffffeU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (1U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                    >> 0x1fU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xfffffffdU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (2U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                    >> 0x1dU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xfffffffbU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (4U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                    >> 0x1bU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xfffffff7U & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (8U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                    >> 0x19U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xffffffefU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x10U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                       >> 0x17U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xffffffdfU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x20U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                       >> 0x15U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xffffffbfU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x40U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                       >> 0x13U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xffffff7fU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x80U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                       >> 0x11U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xfffffeffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x100U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                        >> 0xfU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xfffffdffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x200U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                        >> 0xdU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xfffffbffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x400U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                        >> 0xbU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xfffff7ffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x800U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                        >> 9U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xffffefffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x1000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                         >> 7U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xffffdfffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x2000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                         >> 5U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xffffbfffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x4000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                         >> 3U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xffff7fffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x8000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                         >> 1U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xfffeffffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x10000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                          << 1U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xfffdffffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x20000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                          << 3U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xfffbffffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x40000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                          << 5U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xfff7ffffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x80000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                          << 7U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xffefffffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x100000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                           << 9U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xffdfffffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x200000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                           << 0xbU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xffbfffffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x400000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                           << 0xdU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xff7fffffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x800000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                           << 0xfU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xfeffffffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x1000000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                            << 0x11U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xfdffffffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x2000000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                            << 0x13U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xfbffffffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x4000000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                            << 0x15U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xf7ffffffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x8000000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                            << 0x17U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xefffffffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x10000000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                             << 0x19U)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xdfffffffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x20000000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                             << 0x1bU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0xbfffffffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x40000000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                             << 0x1dU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev 
        = ((0x7fffffffU & vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev) 
           | (0x80000000U & (vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
                             << 0x1fU)));
    vlTOPp->ibex_core_ex_block_i_alu_i_shift_result 
        = ((IData)(vlTOPp->ibex_core_ex_block_i_alu_i_shift_left)
            ? vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev
            : vlTOPp->ibex_core_ex_block_i_alu_i_shift_result);
    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int = 0U;
    if ((0x800U & (IData)(vlTOPp->ibex_core_csr_addr))) {
        if ((0x400U & (IData)(vlTOPp->ibex_core_csr_addr))) {
            if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                        = (IData)((
                                                   vlTOPp->ibex_core_cs_reg_i_mhpmcounter
                                                   [
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->ibex_core_csr_addr))] 
                                                   >> 0x20U));
                                } else {
                                    if ((8U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                        vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                            = (IData)(
                                                      (vlTOPp->ibex_core_cs_reg_i_mhpmcounter
                                                       [
                                                       (0x1fU 
                                                        & (IData)(vlTOPp->ibex_core_csr_addr))] 
                                                       >> 0x20U));
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                            vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                = (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_mhpmcounter
                                                           [
                                                           (0x1fU 
                                                            & (IData)(vlTOPp->ibex_core_csr_addr))] 
                                                           >> 0x20U));
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                    = (IData)(
                                                              (vlTOPp->ibex_core_cs_reg_i_mhpmcounter
                                                               [
                                                               (0x1fU 
                                                                & (IData)(vlTOPp->ibex_core_csr_addr))] 
                                                               >> 0x20U));
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = (IData)(
                                                                  (vlTOPp->ibex_core_cs_reg_i_mhpmcounter
                                                                   [
                                                                   (0x1fU 
                                                                    & (IData)(vlTOPp->ibex_core_csr_addr))] 
                                                                   >> 0x20U));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                        = (IData)(vlTOPp->ibex_core_cs_reg_i_mhpmcounter
                                                  [
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->ibex_core_csr_addr))]);
                                } else {
                                    if ((8U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                        vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                            = (IData)(
                                                      vlTOPp->ibex_core_cs_reg_i_mhpmcounter
                                                      [
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->ibex_core_csr_addr))]);
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                            vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                = (IData)(
                                                          vlTOPp->ibex_core_cs_reg_i_mhpmcounter
                                                          [
                                                          (0x1fU 
                                                           & (IData)(vlTOPp->ibex_core_csr_addr))]);
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                    = (IData)(
                                                              vlTOPp->ibex_core_cs_reg_i_mhpmcounter
                                                              [
                                                              (0x1fU 
                                                               & (IData)(vlTOPp->ibex_core_csr_addr))]);
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = (IData)(
                                                                  vlTOPp->ibex_core_cs_reg_i_mhpmcounter
                                                                  [
                                                                  (0x1fU 
                                                                   & (IData)(vlTOPp->ibex_core_csr_addr))]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x400U & (IData)(vlTOPp->ibex_core_csr_addr))) {
            if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((0x40U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 1U)))) {
                                                vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlTOPp->ibex_core_csr_addr))
                                                      ? 0U
                                                      : (IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q));
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 2U)))) {
                                            vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                = (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_core_csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))
                                                     ? vlTOPp->ibex_core_cs_reg_i_u_dscratch1_csr__rdata_q
                                                     : vlTOPp->ibex_core_cs_reg_i_u_dscratch0_csr__rdata_q)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))
                                                     ? vlTOPp->ibex_core_cs_reg_i_u_depc_csr__rdata_q
                                                     : vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q));
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int = 0U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int = 0U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 2U)))) {
                                            vlTOPp->ibex_core_cs_reg_i_csr_rdata_int = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                        = ((8U & (IData)(vlTOPp->ibex_core_csr_addr))
                                            ? ((4U 
                                                & (IData)(vlTOPp->ibex_core_csr_addr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_core_csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))
                                                     ? 
                                                    vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata
                                                    [0xfU]
                                                     : 
                                                    vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata
                                                    [0xeU])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))
                                                     ? 
                                                    vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata
                                                    [0xdU]
                                                     : 
                                                    vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata
                                                    [0xcU]))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_core_csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))
                                                     ? 
                                                    vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata
                                                    [0xbU]
                                                     : 
                                                    vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata
                                                    [0xaU])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))
                                                     ? 
                                                    vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata
                                                    [9U]
                                                     : 
                                                    vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata
                                                    [8U])))
                                            : ((4U 
                                                & (IData)(vlTOPp->ibex_core_csr_addr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_core_csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))
                                                     ? 
                                                    vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata
                                                    [7U]
                                                     : 
                                                    vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata
                                                    [6U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))
                                                     ? 
                                                    vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata
                                                    [5U]
                                                     : 
                                                    vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata
                                                    [4U]))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_core_csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))
                                                     ? 
                                                    vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata
                                                    [3U]
                                                     : 
                                                    vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata
                                                    [2U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))
                                                     ? 
                                                    vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata
                                                    [1U]
                                                     : 
                                                    vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata
                                                    [0U]))));
                                } else {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 2U)))) {
                                            vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                = (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_core_csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))
                                                     ? 
                                                    ((vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata
                                                      [0xfU] 
                                                      << 0x18U) 
                                                     | ((vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata
                                                         [0xeU] 
                                                         << 0x10U) 
                                                        | ((vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata
                                                            [0xdU] 
                                                            << 8U) 
                                                           | vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata
                                                           [0xcU])))
                                                     : 
                                                    ((vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata
                                                      [0xbU] 
                                                      << 0x18U) 
                                                     | ((vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata
                                                         [0xaU] 
                                                         << 0x10U) 
                                                        | ((vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata
                                                            [9U] 
                                                            << 8U) 
                                                           | vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata
                                                           [8U]))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))
                                                     ? 
                                                    ((vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata
                                                      [7U] 
                                                      << 0x18U) 
                                                     | ((vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata
                                                         [6U] 
                                                         << 0x10U) 
                                                        | ((vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata
                                                            [5U] 
                                                            << 8U) 
                                                           | vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata
                                                           [4U])))
                                                     : 
                                                    ((vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata
                                                      [3U] 
                                                      << 0x18U) 
                                                     | ((vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata
                                                         [2U] 
                                                         << 0x10U) 
                                                        | ((vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata
                                                            [1U] 
                                                            << 8U) 
                                                           | vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata
                                                           [0U])))));
                                        }
                                    }
                                }
                            } else {
                                if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int = 0U;
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = 
                                                        (0xfffffffeU 
                                                         & vlTOPp->ibex_core_cs_reg_i_csr_rdata_int);
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = 
                                                        (0xfffffffdU 
                                                         & vlTOPp->ibex_core_cs_reg_i_csr_rdata_int);
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = 
                                                        (0xfffffffbU 
                                                         & vlTOPp->ibex_core_cs_reg_i_csr_rdata_int);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x40U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int = 0U;
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = 
                                                        ((0xfffffff7U 
                                                          & vlTOPp->ibex_core_cs_reg_i_csr_rdata_int) 
                                                         | (8U 
                                                            & (vlTOPp->ibex_core_cs_reg_i_mip 
                                                               >> 0xeU)));
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = 
                                                        ((0xffffff7fU 
                                                          & vlTOPp->ibex_core_cs_reg_i_csr_rdata_int) 
                                                         | (0x80U 
                                                            & (vlTOPp->ibex_core_cs_reg_i_mip 
                                                               >> 9U)));
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = 
                                                        ((0xfffff7ffU 
                                                          & vlTOPp->ibex_core_cs_reg_i_csr_rdata_int) 
                                                         | (0x800U 
                                                            & (vlTOPp->ibex_core_cs_reg_i_mip 
                                                               >> 4U)));
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = 
                                                        ((0x8000ffffU 
                                                          & vlTOPp->ibex_core_cs_reg_i_csr_rdata_int) 
                                                         | (0x7fff0000U 
                                                            & (vlTOPp->ibex_core_cs_reg_i_mip 
                                                               << 0x10U)));
                                                }
                                            }
                                        } else {
                                            vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                = (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_core_csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))
                                                     ? vlTOPp->ibex_core_cs_reg_i_u_mtval_csr__rdata_q
                                                     : 
                                                    ((0x80000000U 
                                                      & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mcause_csr__rdata_q) 
                                                         << 0x1aU)) 
                                                     | (0x1fU 
                                                        & (IData)(vlTOPp->ibex_core_cs_reg_i_u_mcause_csr__rdata_q))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))
                                                     ? vlTOPp->ibex_core_cs_reg_i_u_mepc_csr__rdata_q
                                                     : vlTOPp->ibex_core_cs_reg_i_u_mscratch_csr__rdata_q));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                        = vlTOPp->ibex_core_cs_reg_i_mhpmevent
                                        [(0x1fU & (IData)(vlTOPp->ibex_core_csr_addr))];
                                } else {
                                    if ((8U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                        vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                            = vlTOPp->ibex_core_cs_reg_i_mhpmevent
                                            [(0x1fU 
                                              & (IData)(vlTOPp->ibex_core_csr_addr))];
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                            vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                = vlTOPp->ibex_core_cs_reg_i_mhpmevent
                                                [(0x1fU 
                                                  & (IData)(vlTOPp->ibex_core_csr_addr))];
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = 
                                                        vlTOPp->ibex_core_cs_reg_i_mhpmevent
                                                        [
                                                        (0x1fU 
                                                         & (IData)(vlTOPp->ibex_core_csr_addr))];
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int = 0U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = vlTOPp->ibex_core_cs_reg_i_u_mtvec_csr__rdata_q;
                                                } else {
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int = 0U;
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = 
                                                        ((0xfffffff7U 
                                                          & vlTOPp->ibex_core_cs_reg_i_csr_rdata_int) 
                                                         | (8U 
                                                            & (vlTOPp->ibex_core_cs_reg_i_u_mie_csr__rdata_q 
                                                               >> 0xeU)));
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = 
                                                        ((0xffffff7fU 
                                                          & vlTOPp->ibex_core_cs_reg_i_csr_rdata_int) 
                                                         | (0x80U 
                                                            & (vlTOPp->ibex_core_cs_reg_i_u_mie_csr__rdata_q 
                                                               >> 9U)));
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = 
                                                        ((0xfffff7ffU 
                                                          & vlTOPp->ibex_core_cs_reg_i_csr_rdata_int) 
                                                         | (0x800U 
                                                            & (vlTOPp->ibex_core_cs_reg_i_u_mie_csr__rdata_q 
                                                               >> 4U)));
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = 
                                                        ((0x8000ffffU 
                                                          & vlTOPp->ibex_core_cs_reg_i_csr_rdata_int) 
                                                         | (0x7fff0000U 
                                                            & (vlTOPp->ibex_core_cs_reg_i_u_mie_csr__rdata_q 
                                                               << 0x10U)));
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int = 0x40101104U;
                                                } else {
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int = 0U;
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = 
                                                        ((0xfffffff7U 
                                                          & vlTOPp->ibex_core_cs_reg_i_csr_rdata_int) 
                                                         | (8U 
                                                            & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                                               >> 2U)));
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = 
                                                        ((0xffffff7fU 
                                                          & vlTOPp->ibex_core_cs_reg_i_csr_rdata_int) 
                                                         | (0x80U 
                                                            & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                                               << 3U)));
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = 
                                                        ((0xffffe7ffU 
                                                          & vlTOPp->ibex_core_cs_reg_i_csr_rdata_int) 
                                                         | (0x1800U 
                                                            & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                                               << 9U)));
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = 
                                                        ((0xfffdffffU 
                                                          & vlTOPp->ibex_core_cs_reg_i_csr_rdata_int) 
                                                         | (0x20000U 
                                                            & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                                               << 0x10U)));
                                                    vlTOPp->ibex_core_cs_reg_i_csr_rdata_int 
                                                        = 
                                                        ((0xffdfffffU 
                                                          & vlTOPp->ibex_core_cs_reg_i_csr_rdata_int) 
                                                         | (0x200000U 
                                                            & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                                               << 0x15U)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_illegal_csr = 0U;
    if ((0x800U & (IData)(vlTOPp->ibex_core_csr_addr))) {
        if ((0x400U & (IData)(vlTOPp->ibex_core_csr_addr))) {
            if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                    } else {
                        if ((0x40U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                            vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    if ((8U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                        vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                    vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                                }
                                            }
                                        } else {
                                            vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                }
            } else {
                vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((0x40U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                            vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                    vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x40U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                            vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                    vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                }
            } else {
                vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
            }
        }
    } else {
        if ((0x400U & (IData)(vlTOPp->ibex_core_csr_addr))) {
            if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((0x40U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                            if ((0x20U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                        vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                            vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            vlTOPp->ibex_core_cs_reg_i_illegal_csr 
                                = (1U & ((~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                             >> 5U)) 
                                         | ((~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                >> 4U)) 
                                            | (((IData)(vlTOPp->ibex_core_csr_addr) 
                                                >> 3U) 
                                               | (((IData)(vlTOPp->ibex_core_csr_addr) 
                                                   >> 2U) 
                                                  | ((2U 
                                                      & (IData)(vlTOPp->ibex_core_csr_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->ibex_core_csr_addr))
                                                       ? 
                                                      (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q))
                                                       : 
                                                      (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->ibex_core_csr_addr))
                                                       ? 
                                                      (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q))
                                                       : 
                                                      (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))))))));
                        }
                    } else {
                        vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                    }
                } else {
                    vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                }
            } else {
                vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((0x40U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                            vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 4U)))) {
                                    if ((8U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                        vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                            vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                        }
                                    }
                                }
                            } else {
                                if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    if ((8U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                        vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                            vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                    vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                }
                            }
                        }
                    } else {
                        if ((0x40U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                            if ((0x20U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                        vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                    vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                    vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                    vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                        vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                            }
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
                }
            } else {
                vlTOPp->ibex_core_cs_reg_i_illegal_csr = 1U;
            }
        }
    }
    vlTOPp->ibex_core_rvfi_mem_addr_d 
        = ((IData)(vlTOPp->ibex_core_id_stage_i_instr_first_cycle)
            ? (IData)((vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                       >> 1U)) : vlTOPp->ibex_core_rvfi_mem_addr_q);
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_by_zero_d 
        = vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_by_zero_q;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q)))) {
                if ((2U == (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_operator))) {
                    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_by_zero_d 
                        = (0U == (IData)((vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                          >> 1U)));
                }
            }
        }
    }
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_d 
        = ((4U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))
            ? ((2U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))
                ? 0U : ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))
                         ? 6U : 5U)) : ((2U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))
                                         ? ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))
                                             ? ((1U 
                                                 == (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_counter_q))
                                                 ? 4U
                                                 : 3U)
                                             : 3U) : 
                                        ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))
                                          ? 2U : ((2U 
                                                   == (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_operator))
                                                   ? 
                                                  (((~ 
                                                     ((IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q) 
                                                      >> 1U)) 
                                                    & (0U 
                                                       == (IData)(
                                                                  (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                                   >> 1U))))
                                                    ? 6U
                                                    : 1U)
                                                   : 
                                                  (((~ 
                                                     ((IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q) 
                                                      >> 1U)) 
                                                    & (0U 
                                                       == (IData)(
                                                                  (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                                   >> 1U))))
                                                    ? 6U
                                                    : 1U)))));
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_numerator_d 
        = vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_numerator_q;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))) {
                vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_numerator_d 
                    = ((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_sign_a)
                        ? (IData)((vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                   >> 1U)) : vlTOPp->ibex_core_rf_rdata_a_ecc);
            }
        }
    }
    vlTOPp->ibex_core_load_store_unit_i_split_misaligned_access 
        = (((0U == (IData)(vlTOPp->ibex_core_id_stage_i_lsu_type)) 
            & (0U != (3U & (IData)((vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                    >> 1U))))) | ((1U 
                                                   == (IData)(vlTOPp->ibex_core_id_stage_i_lsu_type)) 
                                                  & (3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                                 >> 1U))))));
    vlTOPp->ibex_core_if_stage_i_fetch_addr_n 
        = ((4U & (IData)(vlTOPp->ibex_core_pc_mux_id))
            ? ((2U & (IData)(vlTOPp->ibex_core_pc_mux_id))
                ? 0x100080U : ((1U & (IData)(vlTOPp->ibex_core_pc_mux_id))
                                ? 0x100080U : vlTOPp->ibex_core_cs_reg_i_u_depc_csr__rdata_q))
            : ((2U & (IData)(vlTOPp->ibex_core_pc_mux_id))
                ? ((1U & (IData)(vlTOPp->ibex_core_pc_mux_id))
                    ? vlTOPp->ibex_core_cs_reg_i_u_mepc_csr__rdata_q
                    : ((2U & (IData)(vlTOPp->ibex_core_exc_pc_mux_id))
                        ? 0x100000U : ((1U & (IData)(vlTOPp->ibex_core_exc_pc_mux_id))
                                        ? ((0xffffff00U 
                                            & vlTOPp->ibex_core_cs_reg_i_u_mtvec_csr__rdata_q) 
                                           | (0x7cU 
                                              & ((IData)(vlTOPp->ibex_core_exc_cause) 
                                                 << 2U)))
                                        : (0xffffff00U 
                                           & vlTOPp->ibex_core_cs_reg_i_u_mtvec_csr__rdata_q))))
                : ((1U & (IData)(vlTOPp->ibex_core_pc_mux_id))
                    ? (IData)((vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                               >> 1U)) : 0x100080U)));
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_denominator_d 
        = (IData)(vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                  [1U]);
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q)))) {
                vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_denominator_d 
                    = ((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_sign_b)
                        ? (IData)((vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                   >> 1U)) : vlTOPp->ibex_core_rf_rdata_b_ecc);
            }
        }
    }
    vlTOPp->ibex_simple_system__host_wdata[0U] 
        = ((1U & (IData)((vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                          >> 2U))) ? ((1U & (IData)(
                                                    (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                     >> 1U)))
                                       ? ((0xff000000U 
                                           & (vlTOPp->ibex_core_rf_rdata_b_ecc 
                                              << 0x18U)) 
                                          | (0xffffffU 
                                             & (vlTOPp->ibex_core_rf_rdata_b_ecc 
                                                >> 8U)))
                                       : ((0xffff0000U 
                                           & (vlTOPp->ibex_core_rf_rdata_b_ecc 
                                              << 0x10U)) 
                                          | (0xffffU 
                                             & (vlTOPp->ibex_core_rf_rdata_b_ecc 
                                                >> 0x10U))))
            : ((1U & (IData)((vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                              >> 1U))) ? ((0xffffff00U 
                                           & (vlTOPp->ibex_core_rf_rdata_b_ecc 
                                              << 8U)) 
                                          | (0xffU 
                                             & (vlTOPp->ibex_core_rf_rdata_b_ecc 
                                                >> 0x18U)))
                : vlTOPp->ibex_core_rf_rdata_b_ecc));
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_is_greater_equal 
        = (1U & ((1U & ((IData)((vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                 [0U] >> 0x1fU)) ^ (IData)(
                                                           (vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                                            [1U] 
                                                            >> 0x1fU))))
                  ? (IData)((vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                             [0U] >> 0x1fU)) : (~ (IData)(
                                                          (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                           >> 0x20U)))));
    vlTOPp->__Vtableidx6 = (((IData)(vlTOPp->ibex_core_load_store_unit_i_handle_misaligned_q) 
                             << 4U) | ((0xcU & ((IData)(
                                                        (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                         >> 1U)) 
                                                << 2U)) 
                                       | (IData)(vlTOPp->ibex_core_id_stage_i_lsu_type)));
    vlTOPp->ibex_core_load_store_unit_i_data_be 
        = vlTOPp->__Vtable6_ibex_core_load_store_unit_i_data_be
        [vlTOPp->__Vtableidx6];
    vlTOPp->ibex_simple_system__host_addr[0U] 
        = (0xfffffffcU & ((IData)((vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                   >> 3U)) << 2U));
    vlTOPp->__Vtableidx4 = ((0x80U & (((0x80000000U 
                                        & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                                           ^ vlTOPp->ibex_core_id_stage_i_alu_operand_b))
                                        ? ((vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                                            >> 0x1fU) 
                                           ^ (IData)(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_signed))
                                        : (~ (IData)(
                                                     (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                      >> 0x20U)))) 
                                      << 7U)) | (((0U 
                                                   == (IData)(
                                                              (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                               >> 1U))) 
                                                  << 6U) 
                                                 | (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator)));
    vlTOPp->ibex_core_ex_block_i_alu_i_cmp_result 
        = vlTOPp->__Vtable4_ibex_core_ex_block_i_alu_i_cmp_result
        [vlTOPp->__Vtableidx4];
    vlTOPp->ibex_core_pre_buf_i_valid_req 
        = ((IData)(vlTOPp->ibex_core_pre_buf_i_valid_req_q) 
           | (IData)(vlTOPp->ibex_core_pre_buf_i_valid_new_req));
    vlTOPp->ibex_core_cs_reg_i_csr_wdata_int 
        = ((2U & (IData)(vlTOPp->ibex_core_csr_op))
            ? ((1U & (IData)(vlTOPp->ibex_core_csr_op))
                ? ((~ vlTOPp->ibex_core_id_stage_i_alu_operand_a) 
                   & vlTOPp->ibex_core_cs_reg_i_csr_rdata_int)
                : (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                   | vlTOPp->ibex_core_cs_reg_i_csr_rdata_int))
            : vlTOPp->ibex_core_id_stage_i_alu_operand_a);
    vlTOPp->ibex_core_load_store_unit_i_ls_fsm_ns 
        = vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs;
    if ((4U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
        if ((2U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
            vlTOPp->ibex_core_load_store_unit_i_ls_fsm_ns = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
                vlTOPp->ibex_core_load_store_unit_i_ls_fsm_ns = 0U;
            } else {
                if (vlTOPp->ibex_simple_system__host_rvalid
                    [0U]) {
                    vlTOPp->ibex_core_load_store_unit_i_ls_fsm_ns = 0U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
            if ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
                if ((vlTOPp->ibex_simple_system__host_gnt
                     [0U] | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q))) {
                    vlTOPp->ibex_core_load_store_unit_i_ls_fsm_ns = 0U;
                }
            } else {
                if ((vlTOPp->ibex_simple_system__host_rvalid
                     [0U] | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q))) {
                    vlTOPp->ibex_core_load_store_unit_i_ls_fsm_ns 
                        = (vlTOPp->ibex_simple_system__host_gnt
                           [0U] ? 0U : 3U);
                } else {
                    if (vlTOPp->ibex_simple_system__host_gnt
                        [0U]) {
                        vlTOPp->ibex_core_load_store_unit_i_ls_fsm_ns = 4U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
                if ((vlTOPp->ibex_simple_system__host_gnt
                     [0U] | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q))) {
                    vlTOPp->ibex_core_load_store_unit_i_ls_fsm_ns = 2U;
                }
            } else {
                if (vlTOPp->ibex_core_id_stage_i_lsu_req) {
                    vlTOPp->ibex_core_load_store_unit_i_ls_fsm_ns 
                        = (vlTOPp->ibex_simple_system__host_gnt
                           [0U] ? ((IData)(vlTOPp->ibex_core_load_store_unit_i_split_misaligned_access)
                                    ? 2U : 0U) : ((IData)(vlTOPp->ibex_core_load_store_unit_i_split_misaligned_access)
                                                   ? 1U
                                                   : 3U));
                }
            }
        }
    }
    vlTOPp->ibex_core_load_store_unit_i_handle_misaligned_d 
        = vlTOPp->ibex_core_load_store_unit_i_handle_misaligned_q;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
            if ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
                if ((vlTOPp->ibex_simple_system__host_gnt
                     [0U] | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q))) {
                    vlTOPp->ibex_core_load_store_unit_i_handle_misaligned_d = 0U;
                }
            } else {
                if ((vlTOPp->ibex_simple_system__host_rvalid
                     [0U] | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q))) {
                    vlTOPp->ibex_core_load_store_unit_i_handle_misaligned_d 
                        = (1U & (~ vlTOPp->ibex_simple_system__host_gnt
                                 [0U]));
                } else {
                    if (vlTOPp->ibex_simple_system__host_gnt
                        [0U]) {
                        vlTOPp->ibex_core_load_store_unit_i_handle_misaligned_d = 0U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) {
                if ((vlTOPp->ibex_simple_system__host_gnt
                     [0U] | (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q))) {
                    vlTOPp->ibex_core_load_store_unit_i_handle_misaligned_d = 1U;
                }
            } else {
                if (vlTOPp->ibex_core_id_stage_i_lsu_req) {
                    if (vlTOPp->ibex_simple_system__host_gnt
                        [0U]) {
                        vlTOPp->ibex_core_load_store_unit_i_handle_misaligned_d 
                            = vlTOPp->ibex_core_load_store_unit_i_split_misaligned_access;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_d 
        = (0x7fffffffU & ((IData)(vlTOPp->ibex_core_pc_set)
                           ? (((IData)(vlTOPp->ibex_core_pc_set)
                                ? (0xfffffffeU & vlTOPp->ibex_core_if_stage_i_fetch_addr_n)
                                : 0U) >> 1U) : (vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q 
                                                + (
                                                   (2U 
                                                    & ((~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two)) 
                                                       << 1U)) 
                                                   | (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two)))));
    vlTOPp->ibex_core_pre_buf_i_instr_addr 
        = ((IData)(vlTOPp->ibex_core_pre_buf_i_valid_req_q)
            ? vlTOPp->ibex_core_pre_buf_i_stored_addr_q
            : ((IData)(vlTOPp->ibex_core_pc_set_spec)
                ? (0xfffffffeU & vlTOPp->ibex_core_if_stage_i_fetch_addr_n)
                : vlTOPp->ibex_core_pre_buf_i_fetch_addr_q));
    vlTOPp->ibex_core_pre_buf_i_fetch_addr_d 
        = (((IData)(vlTOPp->ibex_core_pc_set)
             ? (0xfffffffeU & vlTOPp->ibex_core_if_stage_i_fetch_addr_n)
             : (0xfffffffcU & vlTOPp->ibex_core_pre_buf_i_fetch_addr_q)) 
           + (((IData)(vlTOPp->ibex_core_pre_buf_i_valid_new_req) 
               & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_valid_req_q))) 
              << 2U));
    vlTOPp->ibex_core_ex_block_i___Vcellout__gen_multdiv_fast_i__imd_val_d_o[1U] 
        = (QData)((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_denominator_d));
    vlTOPp->ibex_Vcellinp_u_bus__host_wdata_i[0U] 
        = vlTOPp->ibex_simple_system__host_wdata
        [0U];
    if (vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_is_greater_equal) {
        vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_next_remainder 
            = (IData)((vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                       >> 1U));
        vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_next_quotient 
            = ((QData)((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_quotient_q)) 
               | (QData)((IData)(((IData)(1U) << (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_counter_q)))));
    } else {
        vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_next_remainder 
            = (IData)(vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                      [0U]);
        vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_next_quotient 
            = (QData)((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_quotient_q));
    }
    vlTOPp->ibex_simple_system__host_be[0U] = vlTOPp->ibex_core_load_store_unit_i_data_be;
    vlTOPp->ibex_Vcellinp_u_bus__host_addr_i[0U] 
        = vlTOPp->ibex_simple_system__host_addr
        [0U];
    vlTOPp->ibex_core_id_stage_i_branch_spec = 0U;
    if (vlTOPp->ibex_core_id_stage_i_instr_executing_spec) {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_id_fsm_q)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_en_dec)))) {
                    if (vlTOPp->ibex_core_id_stage_i_branch_in_dec) {
                        vlTOPp->ibex_core_id_stage_i_branch_spec 
                            = vlTOPp->ibex_core_ex_block_i_alu_i_cmp_result;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_id_stage_i_branch_set_raw_d = 0U;
    if (vlTOPp->ibex_core_id_stage_i_instr_executing_spec) {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_id_fsm_q)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_en_dec)))) {
                    if (vlTOPp->ibex_core_id_stage_i_branch_in_dec) {
                        vlTOPp->ibex_core_id_stage_i_branch_set_raw_d 
                            = (1U & ((IData)(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_result) 
                                     | ((IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q) 
                                        >> 1U)));
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_id_stage_i_id_fsm_d 
        = vlTOPp->ibex_core_id_stage_i_id_fsm_q;
    if (vlTOPp->ibex_core_id_stage_i_instr_executing_spec) {
        if (vlTOPp->ibex_core_id_stage_i_id_fsm_q) {
            if (vlTOPp->ibex_core_id_stage_i_id_fsm_q) {
                if (vlTOPp->ibex_core_id_stage_i_multicycle_done) {
                    vlTOPp->ibex_core_id_stage_i_id_fsm_d = 0U;
                }
            } else {
                vlTOPp->ibex_core_id_stage_i_id_fsm_d = 0U;
            }
        } else {
            if (vlTOPp->ibex_core_id_stage_i_lsu_req_dec) {
                vlTOPp->ibex_core_id_stage_i_id_fsm_d = 1U;
            } else {
                if (vlTOPp->ibex_core_id_stage_i_multdiv_en_dec) {
                    if ((1U & (~ (IData)(vlTOPp->ibex_core_ex_valid)))) {
                        vlTOPp->ibex_core_id_stage_i_id_fsm_d = 1U;
                    }
                } else {
                    vlTOPp->ibex_core_id_stage_i_id_fsm_d 
                        = (1U & ((IData)(vlTOPp->ibex_core_id_stage_i_branch_in_dec)
                                  ? (((IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q) 
                                      >> 1U) | (IData)(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_result))
                                  : (IData)(vlTOPp->ibex_core_id_stage_i_jump_in_dec)));
                }
            }
        }
    }
    vlTOPp->ibex_core_ex_block_i_alu_result = 0U;
    if ((0x20U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))) {
        if ((0x10U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))) {
            if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))) {
                if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_alu_operator) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))) {
                        if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator)))) {
                            vlTOPp->ibex_core_ex_block_i_alu_result = 0U;
                        }
                    } else {
                        vlTOPp->ibex_core_ex_block_i_alu_result = 0U;
                    }
                }
            } else {
                vlTOPp->ibex_core_ex_block_i_alu_result = 0U;
            }
        } else {
            vlTOPp->ibex_core_ex_block_i_alu_result 
                = ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                    ? 0U : ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                             ? ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                                 ? ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                                     ? 0U : (IData)(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_result))
                                 : ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                                     ? (IData)(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_result)
                                     : 0U)) : 0U));
        }
    } else {
        vlTOPp->ibex_core_ex_block_i_alu_result 
            = ((0x10U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                ? ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                    ? ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                        ? 0U : ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                                 ? 0U : ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                                          ? 0U : (IData)(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_result))))
                    : ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                        ? (IData)(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_result)
                        : ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                            ? ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                                ? (IData)(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_result)
                                : 0U) : 0U))) : ((8U 
                                                  & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                                                     ? 0U
                                                     : vlTOPp->ibex_core_ex_block_i_alu_i_shift_result))
                                                   : vlTOPp->ibex_core_ex_block_i_alu_i_shift_result)
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                                                   ? vlTOPp->ibex_core_ex_block_i_alu_i_bwlogic_result
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))
                                                    ? vlTOPp->ibex_core_ex_block_i_alu_i_bwlogic_result
                                                    : (IData)(
                                                              (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                               >> 1U))))));
    }
    vlTOPp->ibex_core_id_stage_i_stall_branch = 0U;
    if (vlTOPp->ibex_core_id_stage_i_instr_executing_spec) {
        if (vlTOPp->ibex_core_id_stage_i_id_fsm_q) {
            if (vlTOPp->ibex_core_id_stage_i_id_fsm_q) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_multicycle_done)))) {
                    vlTOPp->ibex_core_id_stage_i_stall_branch 
                        = vlTOPp->ibex_core_id_stage_i_branch_in_dec;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_en_dec)))) {
                    if (vlTOPp->ibex_core_id_stage_i_branch_in_dec) {
                        vlTOPp->ibex_core_id_stage_i_stall_branch 
                            = (1U & ((IData)(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_result) 
                                     | ((IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q) 
                                        >> 1U)));
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_n 
        = ((2U & (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_n)) 
           | (1U & ((((IData)(vlTOPp->ibex_core_pre_buf_i_valid_req) 
                      & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_q))) 
                     & vlTOPp->ibex_core_pmp_req_err
                     [0U]) | (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_q))));
    vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_n 
        = ((1U & (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_n)) 
           | (2U & ((((((IData)(vlTOPp->ibex_core_pre_buf_i_valid_req) 
                        & (~ ((IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_q) 
                              >> 1U))) & vlTOPp->ibex_core_pmp_req_err
                       [0U]) & (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_q)) 
                     << 1U) | (0xfffffffeU & (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_q)))));
    vlTOPp->ibex_simple_system__instr_req = ((IData)(vlTOPp->ibex_core_pre_buf_i_valid_req) 
                                                  & (~ 
                                                     vlTOPp->ibex_core_pmp_req_err
                                                     [0U]));
    vlTOPp->ibex_core_cs_reg_i_mie_d 
        = ((0x20000U & (vlTOPp->ibex_core_cs_reg_i_csr_wdata_int 
                        << 0xeU)) | ((0x10000U & (vlTOPp->ibex_core_cs_reg_i_csr_wdata_int 
                                                  << 9U)) 
                                     | ((0x8000U & 
                                         (vlTOPp->ibex_core_cs_reg_i_csr_wdata_int 
                                          << 4U)) | 
                                        (0x7fffU & 
                                         (vlTOPp->ibex_core_cs_reg_i_csr_wdata_int 
                                          >> 0x10U)))));
    vlTOPp->ibex_core_cs_reg_i_mtval_d 
        = vlTOPp->ibex_core_cs_reg_i_csr_wdata_int;
    if (vlTOPp->ibex_core_csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))) {
                vlTOPp->ibex_core_cs_reg_i_mtval_d 
                    = vlTOPp->ibex_core_csr_mtval;
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_mcause_d 
        = ((0x20U & (vlTOPp->ibex_core_cs_reg_i_csr_wdata_int 
                     >> 0x1aU)) | (0x1fU & vlTOPp->ibex_core_cs_reg_i_csr_wdata_int));
    if (vlTOPp->ibex_core_csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))) {
                vlTOPp->ibex_core_cs_reg_i_mcause_d 
                    = vlTOPp->ibex_core_exc_cause;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_csr_restore_dret_id)))) {
            if (vlTOPp->ibex_core_csr_restore_mret_id) {
                if (vlTOPp->ibex_core_id_stage_i_controller_i_nmi_mode_q) {
                    vlTOPp->ibex_core_cs_reg_i_mcause_d 
                        = vlTOPp->ibex_core_cs_reg_i_u_mstack_cause_csr__rdata_q;
                }
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_exception_pc 
        = vlTOPp->ibex_core_pc_id;
    vlTOPp->ibex_core_cs_reg_i_mepc_d 
        = (0xfffffffeU & vlTOPp->ibex_core_cs_reg_i_csr_wdata_int);
    vlTOPp->ibex_core_cs_reg_i_depc_d 
        = (0xfffffffeU & vlTOPp->ibex_core_cs_reg_i_csr_wdata_int);
    if (vlTOPp->ibex_core_csr_save_cause) {
        if (vlTOPp->ibex_core_csr_save_if) {
            vlTOPp->ibex_core_cs_reg_i_exception_pc 
                = (vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q 
                   << 1U);
        } else {
            if (vlTOPp->ibex_core_csr_save_id) {
                vlTOPp->ibex_core_cs_reg_i_exception_pc 
                    = vlTOPp->ibex_core_pc_id;
            }
        }
        if (vlTOPp->ibex_core_debug_csr_save) {
            vlTOPp->ibex_core_cs_reg_i_depc_d 
                = vlTOPp->ibex_core_cs_reg_i_exception_pc;
        } else {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))) {
                vlTOPp->ibex_core_cs_reg_i_mepc_d 
                    = vlTOPp->ibex_core_cs_reg_i_exception_pc;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_csr_restore_dret_id)))) {
            if (vlTOPp->ibex_core_csr_restore_mret_id) {
                if (vlTOPp->ibex_core_id_stage_i_controller_i_nmi_mode_q) {
                    vlTOPp->ibex_core_cs_reg_i_mepc_d 
                        = vlTOPp->ibex_core_cs_reg_i_u_mstack_epc_csr__rdata_q;
                }
            }
        }
    }
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_quotient_d 
        = vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_quotient_q;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))) {
            if ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))) {
                vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_quotient_d 
                    = (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_next_quotient);
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))) {
                vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_quotient_d = 0U;
            }
        }
    }
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_counter_d 
        = (0x1fU & ((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_counter_q) 
                    - (IData)(1U)));
    vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_remainder_d 
        = vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
        [0U];
    if ((4U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q) 
                      >> 1U)))) {
            vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_remainder_d 
                = ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))
                    ? ((2U == (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_operator))
                        ? ((((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_sign_a) 
                             ^ (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_sign_b)) 
                            & (~ (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_by_zero_q)))
                            ? (QData)((IData)((vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                               >> 1U)))
                            : vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                           [0U]) : ((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_sign_a)
                                     ? (QData)((IData)(
                                                       (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                        >> 1U)))
                                     : vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                    [0U])) : ((2U == (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_operator))
                                               ? vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_next_quotient
                                               : (QData)((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_next_remainder))));
        }
    } else {
        if ((2U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))) {
            if ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))) {
                vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_remainder_d 
                    = (((QData)((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_next_remainder)) 
                        << 1U) | (QData)((IData)((1U 
                                                  & (vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_numerator_q 
                                                     >> (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_counter_d))))));
            } else {
                vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_remainder_d 
                    = (QData)((IData)((1U & (vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_numerator_q 
                                             >> 0x1fU))));
                vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_counter_d = 0x1fU;
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q))) {
                vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_counter_d = 0x1fU;
            } else {
                vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_remainder_d 
                    = ((2U == (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_operator))
                        ? 0x3ffffffffULL : (QData)((IData)(vlTOPp->ibex_core_rf_rdata_a_ecc)));
                vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_counter_d = 0x1fU;
            }
        }
    }
    vlTOPp->ibex_Vcellinp_u_bus__host_be_i[0U] 
        = vlTOPp->ibex_simple_system__host_be[0U];
    vlTOPp->ibex_bus_device_sel_req = 0U;
    if (((((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req))
            ? vlTOPp->ibex_Vcellinp_u_bus__host_addr_i
           [vlTOPp->ibex_bus_host_sel_req]
            : 0U) & vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_mask
          [0U]) == vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_base
         [0U])) {
        vlTOPp->ibex_bus_device_sel_req = 0U;
    }
    if (((((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req))
            ? vlTOPp->ibex_Vcellinp_u_bus__host_addr_i
           [vlTOPp->ibex_bus_host_sel_req]
            : 0U) & vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_mask
          [1U]) == vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_base
         [1U])) {
        vlTOPp->ibex_bus_device_sel_req = 1U;
    }
    if (((((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req))
            ? vlTOPp->ibex_Vcellinp_u_bus__host_addr_i
           [vlTOPp->ibex_bus_host_sel_req]
            : 0U) & vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_mask
          [2U]) == vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_base
         [2U])) {
        vlTOPp->ibex_bus_device_sel_req = 2U;
    }
    vlTOPp->ibex_core_result_ex 
        = ((IData)(vlTOPp->ibex_core_ex_block_i_multdiv_sel)
            ? ((IData)(vlTOPp->ibex_core_div_sel_ex)
                ? (IData)(vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                          [0U]) : (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mac_res_d))
            : vlTOPp->ibex_core_ex_block_i_alu_result);
    vlTOPp->ibex_core_id_stage_i_stall_id 
        = ((((((IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q) 
               & ((IData)(vlTOPp->ibex_core_id_stage_i_lsu_req_dec) 
                  & ((~ (IData)(vlTOPp->ibex_core_lsu_resp_valid)) 
                     | (IData)(vlTOPp->ibex_core_id_stage_i_instr_first_cycle)))) 
              | (IData)(vlTOPp->ibex_core_id_stage_i_stall_multdiv)) 
             | (IData)(vlTOPp->ibex_core_id_stage_i_stall_jump)) 
            | (IData)(vlTOPp->ibex_core_id_stage_i_stall_branch)) 
           | (IData)(vlTOPp->ibex_core_id_stage_i_stall_alu));
    vlTOPp->ibex_core_pre_buf_i_gnt_or_pmp_err 
        = ((IData)(vlTOPp->ibex_simple_system__instr_req) 
           | vlTOPp->ibex_core_pmp_req_err
           [0U]);
    vlTOPp->ibex_core_ex_block_i___Vcellout__gen_multdiv_fast_i__imd_val_d_o[0U] 
        = ((IData)(vlTOPp->ibex_core_div_sel_ex)
            ? vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_remainder_d
            : vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mac_res_d);
    if ((0U == (IData)(vlTOPp->ibex_bus_device_sel_req))) {
        vlTOPp->ibex_bus___Vlvbound3 
            = ((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req))
                ? vlTOPp->ibex_Vcellinp_u_bus__host_addr_i
               [vlTOPp->ibex_bus_host_sel_req]
                : 0U);
        vlTOPp->ibex_Vcellout__u_bus__device_addr_o[0U] 
            = vlTOPp->ibex_bus___Vlvbound3;
    } else {
        vlTOPp->ibex_Vcellout__u_bus__device_addr_o[0U] = 0U;
    }
    if ((1U == (IData)(vlTOPp->ibex_bus_device_sel_req))) {
        vlTOPp->ibex_bus___Vlvbound3 
            = ((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req))
                ? vlTOPp->ibex_Vcellinp_u_bus__host_addr_i
               [vlTOPp->ibex_bus_host_sel_req]
                : 0U);
        vlTOPp->ibex_Vcellout__u_bus__device_addr_o[1U] 
            = vlTOPp->ibex_bus___Vlvbound3;
    } else {
        vlTOPp->ibex_Vcellout__u_bus__device_addr_o[1U] = 0U;
    }
    if ((2U == (IData)(vlTOPp->ibex_bus_device_sel_req))) {
        vlTOPp->ibex_bus___Vlvbound3 
            = ((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req))
                ? vlTOPp->ibex_Vcellinp_u_bus__host_addr_i
               [vlTOPp->ibex_bus_host_sel_req]
                : 0U);
        vlTOPp->ibex_Vcellout__u_bus__device_addr_o[2U] 
            = vlTOPp->ibex_bus___Vlvbound3;
    } else {
        vlTOPp->ibex_Vcellout__u_bus__device_addr_o[2U] = 0U;
    }
    if ((0U == (IData)(vlTOPp->ibex_bus_device_sel_req))) {
        vlTOPp->ibex_bus___Vlvbound1 
            = ((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req)) 
               & vlTOPp->ibex_Vcellinp_u_bus__host_req_i
               [vlTOPp->ibex_bus_host_sel_req]);
        vlTOPp->ibex_Vcellout__u_bus__device_req_o[0U] 
            = vlTOPp->ibex_bus___Vlvbound1;
    } else {
        vlTOPp->ibex_Vcellout__u_bus__device_req_o[0U] = 0U;
    }
    if ((1U == (IData)(vlTOPp->ibex_bus_device_sel_req))) {
        vlTOPp->ibex_bus___Vlvbound1 
            = ((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req)) 
               & vlTOPp->ibex_Vcellinp_u_bus__host_req_i
               [vlTOPp->ibex_bus_host_sel_req]);
        vlTOPp->ibex_Vcellout__u_bus__device_req_o[1U] 
            = vlTOPp->ibex_bus___Vlvbound1;
    } else {
        vlTOPp->ibex_Vcellout__u_bus__device_req_o[1U] = 0U;
    }
    if ((2U == (IData)(vlTOPp->ibex_bus_device_sel_req))) {
        vlTOPp->ibex_bus___Vlvbound1 
            = ((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req)) 
               & vlTOPp->ibex_Vcellinp_u_bus__host_req_i
               [vlTOPp->ibex_bus_host_sel_req]);
        vlTOPp->ibex_Vcellout__u_bus__device_req_o[2U] 
            = vlTOPp->ibex_bus___Vlvbound1;
    } else {
        vlTOPp->ibex_Vcellout__u_bus__device_req_o[2U] = 0U;
    }
    if ((0U == (IData)(vlTOPp->ibex_bus_device_sel_req))) {
        vlTOPp->ibex_bus___Vlvbound2 
            = ((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req)) 
               & vlTOPp->ibex_Vcellinp_u_bus__host_we_i
               [vlTOPp->ibex_bus_host_sel_req]);
        vlTOPp->ibex_Vcellout__u_bus__device_we_o[0U] 
            = vlTOPp->ibex_bus___Vlvbound2;
    } else {
        vlTOPp->ibex_Vcellout__u_bus__device_we_o[0U] = 0U;
    }
    if ((1U == (IData)(vlTOPp->ibex_bus_device_sel_req))) {
        vlTOPp->ibex_bus___Vlvbound2 
            = ((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req)) 
               & vlTOPp->ibex_Vcellinp_u_bus__host_we_i
               [vlTOPp->ibex_bus_host_sel_req]);
        vlTOPp->ibex_Vcellout__u_bus__device_we_o[1U] 
            = vlTOPp->ibex_bus___Vlvbound2;
    } else {
        vlTOPp->ibex_Vcellout__u_bus__device_we_o[1U] = 0U;
    }
    if ((2U == (IData)(vlTOPp->ibex_bus_device_sel_req))) {
        vlTOPp->ibex_bus___Vlvbound2 
            = ((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req)) 
               & vlTOPp->ibex_Vcellinp_u_bus__host_we_i
               [vlTOPp->ibex_bus_host_sel_req]);
        vlTOPp->ibex_Vcellout__u_bus__device_we_o[2U] 
            = vlTOPp->ibex_bus___Vlvbound2;
    } else {
        vlTOPp->ibex_Vcellout__u_bus__device_we_o[2U] = 0U;
    }
    if ((0U == (IData)(vlTOPp->ibex_bus_device_sel_req))) {
        vlTOPp->ibex_bus___Vlvbound4 
            = ((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req))
                ? vlTOPp->ibex_Vcellinp_u_bus__host_wdata_i
               [vlTOPp->ibex_bus_host_sel_req]
                : 0U);
        vlTOPp->ibex_Vcellout__u_bus__device_wdata_o[0U] 
            = vlTOPp->ibex_bus___Vlvbound4;
    } else {
        vlTOPp->ibex_Vcellout__u_bus__device_wdata_o[0U] = 0U;
    }
    if ((1U == (IData)(vlTOPp->ibex_bus_device_sel_req))) {
        vlTOPp->ibex_bus___Vlvbound4 
            = ((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req))
                ? vlTOPp->ibex_Vcellinp_u_bus__host_wdata_i
               [vlTOPp->ibex_bus_host_sel_req]
                : 0U);
        vlTOPp->ibex_Vcellout__u_bus__device_wdata_o[1U] 
            = vlTOPp->ibex_bus___Vlvbound4;
    } else {
        vlTOPp->ibex_Vcellout__u_bus__device_wdata_o[1U] = 0U;
    }
    if ((2U == (IData)(vlTOPp->ibex_bus_device_sel_req))) {
        vlTOPp->ibex_bus___Vlvbound4 
            = ((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req))
                ? vlTOPp->ibex_Vcellinp_u_bus__host_wdata_i
               [vlTOPp->ibex_bus_host_sel_req]
                : 0U);
        vlTOPp->ibex_Vcellout__u_bus__device_wdata_o[2U] 
            = vlTOPp->ibex_bus___Vlvbound4;
    } else {
        vlTOPp->ibex_Vcellout__u_bus__device_wdata_o[2U] = 0U;
    }
    if ((0U == (IData)(vlTOPp->ibex_bus_device_sel_req))) {
        vlTOPp->ibex_bus___Vlvbound5 
            = ((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req))
                ? vlTOPp->ibex_Vcellinp_u_bus__host_be_i
               [vlTOPp->ibex_bus_host_sel_req]
                : 0U);
        vlTOPp->ibex_Vcellout__u_bus__device_be_o[0U] 
            = vlTOPp->ibex_bus___Vlvbound5;
    } else {
        vlTOPp->ibex_Vcellout__u_bus__device_be_o[0U] = 0U;
    }
    if ((1U == (IData)(vlTOPp->ibex_bus_device_sel_req))) {
        vlTOPp->ibex_bus___Vlvbound5 
            = ((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req))
                ? vlTOPp->ibex_Vcellinp_u_bus__host_be_i
               [vlTOPp->ibex_bus_host_sel_req]
                : 0U);
        vlTOPp->ibex_Vcellout__u_bus__device_be_o[1U] 
            = vlTOPp->ibex_bus___Vlvbound5;
    } else {
        vlTOPp->ibex_Vcellout__u_bus__device_be_o[1U] = 0U;
    }
    if ((2U == (IData)(vlTOPp->ibex_bus_device_sel_req))) {
        vlTOPp->ibex_bus___Vlvbound5 
            = ((0U >= (IData)(vlTOPp->ibex_bus_host_sel_req))
                ? vlTOPp->ibex_Vcellinp_u_bus__host_be_i
               [vlTOPp->ibex_bus_host_sel_req]
                : 0U);
        vlTOPp->ibex_Vcellout__u_bus__device_be_o[2U] 
            = vlTOPp->ibex_bus___Vlvbound5;
    } else {
        vlTOPp->ibex_Vcellout__u_bus__device_be_o[2U] = 0U;
    }
    vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux[0U] 
        = ((IData)(vlTOPp->ibex_core_id_stage_i_rf_wdata_sel)
            ? ((IData)(vlTOPp->ibex_core_id_stage_i_rf_wdata_sel)
                ? vlTOPp->ibex_core_cs_reg_i_csr_rdata_int
                : vlTOPp->ibex_core_result_ex)
            : vlTOPp->ibex_core_result_ex);
    vlTOPp->ibex_core_id_stage_i_instr_done 
        = (((~ (IData)(vlTOPp->ibex_core_id_stage_i_stall_id)) 
            & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_flush_id))) 
           & (IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec));
    vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_n 
        = ((2U & (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_n)) 
           | (1U & (((IData)(vlTOPp->ibex_core_pre_buf_i_valid_req) 
                     & (IData)(vlTOPp->ibex_core_pre_buf_i_gnt_or_pmp_err)) 
                    | (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_q))));
    vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_n 
        = ((1U & (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_n)) 
           | (2U & (((((IData)(vlTOPp->ibex_core_pre_buf_i_valid_req) 
                       & (IData)(vlTOPp->ibex_core_pre_buf_i_gnt_or_pmp_err)) 
                      & (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_q)) 
                     << 1U) | (0xfffffffeU & (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_q)))));
    vlTOPp->ibex_core_pre_buf_i_branch_discard_n 
        = ((2U & (IData)(vlTOPp->ibex_core_pre_buf_i_branch_discard_n)) 
           | (1U & (((((IData)(vlTOPp->ibex_core_pre_buf_i_valid_req) 
                       & (IData)(vlTOPp->ibex_core_pre_buf_i_gnt_or_pmp_err)) 
                      & (IData)(vlTOPp->ibex_core_pre_buf_i_discard_req_d)) 
                     | ((IData)(vlTOPp->ibex_core_pc_set) 
                        & (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_q))) 
                    | (IData)(vlTOPp->ibex_core_pre_buf_i_branch_discard_q))));
    vlTOPp->ibex_core_pre_buf_i_branch_discard_n 
        = ((1U & (IData)(vlTOPp->ibex_core_pre_buf_i_branch_discard_n)) 
           | (2U & (((((((IData)(vlTOPp->ibex_core_pre_buf_i_valid_req) 
                         & (IData)(vlTOPp->ibex_core_pre_buf_i_gnt_or_pmp_err)) 
                        & (IData)(vlTOPp->ibex_core_pre_buf_i_discard_req_d)) 
                       & (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_q)) 
                      << 1U) | (0xfffffffeU & (((IData)(vlTOPp->ibex_core_pc_set) 
                                                << 1U) 
                                               & (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_q)))) 
                    | (0xfffffffeU & (IData)(vlTOPp->ibex_core_pre_buf_i_branch_discard_q)))));
    vlTOPp->ibex_core_ex_block_i_multdiv_imd_val_d[0U] 
        = vlTOPp->ibex_core_ex_block_i___Vcellout__gen_multdiv_fast_i__imd_val_d_o
        [0U];
    vlTOPp->ibex_core_ex_block_i_multdiv_imd_val_d[1U] 
        = vlTOPp->ibex_core_ex_block_i___Vcellout__gen_multdiv_fast_i__imd_val_d_o
        [1U];
    vlTOPp->ibex_device_addr[0U] 
        = vlTOPp->ibex_Vcellout__u_bus__device_addr_o
        [0U];
    vlTOPp->ibex_device_addr[1U] 
        = vlTOPp->ibex_Vcellout__u_bus__device_addr_o
        [1U];
    vlTOPp->ibex_device_addr[2U] 
        = vlTOPp->ibex_Vcellout__u_bus__device_addr_o
        [2U];
    vlTOPp->ibex_device_req[0U] 
        = vlTOPp->ibex_Vcellout__u_bus__device_req_o
        [0U];
    vlTOPp->ibex_device_req[1U] 
        = vlTOPp->ibex_Vcellout__u_bus__device_req_o
        [1U];
    vlTOPp->ibex_device_req[2U] 
        = vlTOPp->ibex_Vcellout__u_bus__device_req_o
        [2U];
    vlTOPp->ibex_device_we[0U] 
        = vlTOPp->ibex_Vcellout__u_bus__device_we_o
        [0U];
    vlTOPp->ibex_device_we[1U] 
        = vlTOPp->ibex_Vcellout__u_bus__device_we_o
        [1U];
    vlTOPp->ibex_device_we[2U] 
        = vlTOPp->ibex_Vcellout__u_bus__device_we_o
        [2U];
    vlTOPp->ibex_device_wdata[0U] 
        = vlTOPp->ibex_Vcellout__u_bus__device_wdata_o
        [0U];
    vlTOPp->ibex_device_wdata[1U] 
        = vlTOPp->ibex_Vcellout__u_bus__device_wdata_o
        [1U];
    vlTOPp->ibex_device_wdata[2U] 
        = vlTOPp->ibex_Vcellout__u_bus__device_wdata_o
        [2U];
    vlTOPp->ibex_device_be[0U] 
        = vlTOPp->ibex_Vcellout__u_bus__device_be_o
        [0U];
    vlTOPp->ibex_device_be[1U] 
        = vlTOPp->ibex_Vcellout__u_bus__device_be_o
        [1U];
    vlTOPp->ibex_device_be[2U] 
        = vlTOPp->ibex_Vcellout__u_bus__device_be_o
        [2U];
    vlTOPp->ibex_core_rvfi_stage_valid_d[0U] 
        = vlTOPp->ibex_core_id_stage_i_instr_done;
    vlTOPp->ibex_core_rvfi_set_trap_pc_d 
        = vlTOPp->ibex_core_rvfi_set_trap_pc_q;
    if ((((IData)(vlTOPp->ibex_core_pc_set) 
          & (2U == (IData)(vlTOPp->ibex_core_pc_mux_id))) 
         & ((0U == (IData)(vlTOPp->ibex_core_exc_pc_mux_id)) 
            | (1U == (IData)(vlTOPp->ibex_core_exc_pc_mux_id))))) {
        vlTOPp->ibex_core_rvfi_set_trap_pc_d = 1U;
    } else {
        if (((IData)(vlTOPp->ibex_core_rvfi_set_trap_pc_q) 
             & (IData)(vlTOPp->ibex_core_id_stage_i_instr_done))) {
            vlTOPp->ibex_core_rvfi_set_trap_pc_d = 0U;
        }
    }
    vlTOPp->ibex_core_csr_op_en 
        = (((IData)(vlTOPp->ibex_core_csr_access) 
            & (IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec)) 
           & (IData)(vlTOPp->ibex_core_id_stage_i_instr_done));
    if (vlTOPp->ibex_core_ex_block_i_multdiv_sel) {
        vlTOPp->ibex_core___Vcellout__ex_block_i__imd_val_d_o[0U] 
            = vlTOPp->ibex_core_ex_block_i_multdiv_imd_val_d
            [0U];
        vlTOPp->ibex_core___Vcellout__ex_block_i__imd_val_d_o[1U] 
            = vlTOPp->ibex_core_ex_block_i_multdiv_imd_val_d
            [1U];
    } else {
        vlTOPp->ibex_core___Vcellout__ex_block_i__imd_val_d_o[0U] 
            = (QData)((IData)(vlTOPp->ibex_core_ex_block_i_alu_imd_val_d
                              [0U]));
        vlTOPp->ibex_core___Vcellout__ex_block_i__imd_val_d_o[1U] 
            = (QData)((IData)(vlTOPp->ibex_core_ex_block_i_alu_imd_val_d
                              [1U]));
    }
    vlTOPp->ibex_timer_error_d = 0U;
    if ((0U != (0x3ffU & vlTOPp->ibex_device_addr
                [2U]))) {
        if ((4U != (0x3ffU & vlTOPp->ibex_device_addr
                    [2U]))) {
            if ((8U != (0x3ffU & vlTOPp->ibex_device_addr
                        [2U]))) {
                if ((0xcU != (0x3ffU & vlTOPp->ibex_device_addr
                              [2U]))) {
                    vlTOPp->ibex_timer_error_d = 1U;
                }
            }
        }
    }
    vlTOPp->ibex_timer_rdata_d 
        = ((0U == (0x3ffU & vlTOPp->ibex_device_addr
                   [2U])) ? (IData)(vlTOPp->ibex_timer_mtime_q)
            : ((4U == (0x3ffU & vlTOPp->ibex_device_addr
                       [2U])) ? (IData)((vlTOPp->ibex_timer_mtime_q 
                                         >> 0x20U))
                : ((8U == (0x3ffU & vlTOPp->ibex_device_addr
                           [2U])) ? (IData)(vlTOPp->ibex_timer_mtimecmp_q)
                    : ((0xcU == (0x3ffU & vlTOPp->ibex_device_addr
                                 [2U])) ? (IData)((vlTOPp->ibex_timer_mtimecmp_q 
                                                   >> 0x20U))
                        : 0U))));
    vlTOPp->ibex_timer_timer_we 
        = (vlTOPp->ibex_device_req
           [2U] & vlTOPp->ibex_device_we
           [2U]);
    vlTOPp->ibex_timer_mtime_wdata 
        = ((0xffffff00U & vlTOPp->ibex_timer_mtime_wdata) 
           | (0xffU & ((1U & vlTOPp->ibex_device_be
                        [2U]) ? vlTOPp->ibex_device_wdata
                       [2U] : (IData)(vlTOPp->ibex_timer_mtime_q))));
    vlTOPp->ibex_timer_mtimeh_wdata 
        = ((0xffffff00U & vlTOPp->ibex_timer_mtimeh_wdata) 
           | (0xffU & ((1U & vlTOPp->ibex_device_be
                        [2U]) ? vlTOPp->ibex_device_wdata
                       [2U] : (IData)((vlTOPp->ibex_timer_mtime_q 
                                       >> 0x20U)))));
    vlTOPp->ibex_timer_mtimecmp_wdata 
        = ((0xffffff00U & vlTOPp->ibex_timer_mtimecmp_wdata) 
           | (0xffU & ((1U & vlTOPp->ibex_device_be
                        [2U]) ? vlTOPp->ibex_device_wdata
                       [2U] : (IData)(vlTOPp->ibex_timer_mtimecmp_q))));
    vlTOPp->ibex_timer_mtimecmph_wdata 
        = ((0xffffff00U & vlTOPp->ibex_timer_mtimecmph_wdata) 
           | (0xffU & ((1U & vlTOPp->ibex_device_be
                        [2U]) ? vlTOPp->ibex_device_wdata
                       [2U] : (IData)((vlTOPp->ibex_timer_mtimecmp_q 
                                       >> 0x20U)))));
    vlTOPp->ibex_timer_mtime_wdata 
        = ((0xffff00ffU & vlTOPp->ibex_timer_mtime_wdata) 
           | (0xff00U & (((2U & vlTOPp->ibex_device_be
                           [2U]) ? (vlTOPp->ibex_device_wdata
                                    [2U] >> 8U) : (IData)(
                                                          (vlTOPp->ibex_timer_mtime_q 
                                                           >> 8U))) 
                         << 8U)));
    vlTOPp->ibex_timer_mtimeh_wdata 
        = ((0xffff00ffU & vlTOPp->ibex_timer_mtimeh_wdata) 
           | (0xff00U & (((2U & vlTOPp->ibex_device_be
                           [2U]) ? (vlTOPp->ibex_device_wdata
                                    [2U] >> 8U) : (IData)(
                                                          (vlTOPp->ibex_timer_mtime_q 
                                                           >> 0x28U))) 
                         << 8U)));
    vlTOPp->ibex_timer_mtimecmp_wdata 
        = ((0xffff00ffU & vlTOPp->ibex_timer_mtimecmp_wdata) 
           | (0xff00U & (((2U & vlTOPp->ibex_device_be
                           [2U]) ? (vlTOPp->ibex_device_wdata
                                    [2U] >> 8U) : (IData)(
                                                          (vlTOPp->ibex_timer_mtimecmp_q 
                                                           >> 8U))) 
                         << 8U)));
    vlTOPp->ibex_timer_mtimecmph_wdata 
        = ((0xffff00ffU & vlTOPp->ibex_timer_mtimecmph_wdata) 
           | (0xff00U & (((2U & vlTOPp->ibex_device_be
                           [2U]) ? (vlTOPp->ibex_device_wdata
                                    [2U] >> 8U) : (IData)(
                                                          (vlTOPp->ibex_timer_mtimecmp_q 
                                                           >> 0x28U))) 
                         << 8U)));
    vlTOPp->ibex_timer_mtime_wdata 
        = ((0xff00ffffU & vlTOPp->ibex_timer_mtime_wdata) 
           | (0xff0000U & (((4U & vlTOPp->ibex_device_be
                             [2U]) ? (vlTOPp->ibex_device_wdata
                                      [2U] >> 0x10U)
                             : (IData)((vlTOPp->ibex_timer_mtime_q 
                                        >> 0x10U))) 
                           << 0x10U)));
    vlTOPp->ibex_timer_mtimeh_wdata 
        = ((0xff00ffffU & vlTOPp->ibex_timer_mtimeh_wdata) 
           | (0xff0000U & (((4U & vlTOPp->ibex_device_be
                             [2U]) ? (vlTOPp->ibex_device_wdata
                                      [2U] >> 0x10U)
                             : (IData)((vlTOPp->ibex_timer_mtime_q 
                                        >> 0x30U))) 
                           << 0x10U)));
    vlTOPp->ibex_timer_mtimecmp_wdata 
        = ((0xff00ffffU & vlTOPp->ibex_timer_mtimecmp_wdata) 
           | (0xff0000U & (((4U & vlTOPp->ibex_device_be
                             [2U]) ? (vlTOPp->ibex_device_wdata
                                      [2U] >> 0x10U)
                             : (IData)((vlTOPp->ibex_timer_mtimecmp_q 
                                        >> 0x10U))) 
                           << 0x10U)));
    vlTOPp->ibex_timer_mtimecmph_wdata 
        = ((0xff00ffffU & vlTOPp->ibex_timer_mtimecmph_wdata) 
           | (0xff0000U & (((4U & vlTOPp->ibex_device_be
                             [2U]) ? (vlTOPp->ibex_device_wdata
                                      [2U] >> 0x10U)
                             : (IData)((vlTOPp->ibex_timer_mtimecmp_q 
                                        >> 0x30U))) 
                           << 0x10U)));
    vlTOPp->ibex_timer_mtime_wdata 
        = ((0xffffffU & vlTOPp->ibex_timer_mtime_wdata) 
           | (0xff000000U & (((8U & vlTOPp->ibex_device_be
                               [2U]) ? (vlTOPp->ibex_device_wdata
                                        [2U] >> 0x18U)
                               : (IData)((vlTOPp->ibex_timer_mtime_q 
                                          >> 0x18U))) 
                             << 0x18U)));
    vlTOPp->ibex_timer_mtimeh_wdata 
        = ((0xffffffU & vlTOPp->ibex_timer_mtimeh_wdata) 
           | (0xff000000U & (((8U & vlTOPp->ibex_device_be
                               [2U]) ? (vlTOPp->ibex_device_wdata
                                        [2U] >> 0x18U)
                               : (IData)((vlTOPp->ibex_timer_mtime_q 
                                          >> 0x38U))) 
                             << 0x18U)));
    vlTOPp->ibex_timer_mtimecmp_wdata 
        = ((0xffffffU & vlTOPp->ibex_timer_mtimecmp_wdata) 
           | (0xff000000U & (((8U & vlTOPp->ibex_device_be
                               [2U]) ? (vlTOPp->ibex_device_wdata
                                        [2U] >> 0x18U)
                               : (IData)((vlTOPp->ibex_timer_mtimecmp_q 
                                          >> 0x18U))) 
                             << 0x18U)));
    vlTOPp->ibex_timer_mtimecmph_wdata 
        = ((0xffffffU & vlTOPp->ibex_timer_mtimecmph_wdata) 
           | (0xff000000U & (((8U & vlTOPp->ibex_device_be
                               [2U]) ? (vlTOPp->ibex_device_wdata
                                        [2U] >> 0x18U)
                               : (IData)((vlTOPp->ibex_timer_mtimecmp_q 
                                          >> 0x38U))) 
                             << 0x18U)));
    vlTOPp->ibex_ram_a_wmask 
        = ((0xffffff00U & vlTOPp->ibex_ram_a_wmask) 
           | (0xffU & (- (IData)((1U & vlTOPp->ibex_device_be
                                  [0U])))));
    vlTOPp->ibex_ram_a_wmask 
        = ((0xffff00ffU & vlTOPp->ibex_ram_a_wmask) 
           | (0xff00U & ((- (IData)((1U & (vlTOPp->ibex_device_be
                                           [0U] >> 1U)))) 
                         << 8U)));
    vlTOPp->ibex_ram_a_wmask 
        = ((0xff00ffffU & vlTOPp->ibex_ram_a_wmask) 
           | (0xff0000U & ((- (IData)((1U & (vlTOPp->ibex_device_be
                                             [0U] >> 2U)))) 
                           << 0x10U)));
    vlTOPp->ibex_ram_a_wmask 
        = ((0xffffffU & vlTOPp->ibex_ram_a_wmask) 
           | (0xff000000U & ((- (IData)((1U & (vlTOPp->ibex_device_be
                                               [0U] 
                                               >> 3U)))) 
                             << 0x18U)));
    vlTOPp->ibex_core_id_stage_i_csr_pipe_flush = 0U;
    if (((IData)(vlTOPp->ibex_core_csr_op_en) 
         & ((1U == (IData)(vlTOPp->ibex_core_csr_op)) 
            | (2U == (IData)(vlTOPp->ibex_core_csr_op))))) {
        if (((0x300U == (0xfffU & (vlTOPp->ibex_core_instr_rdata_id 
                                   >> 0x14U))) | (0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->ibex_core_instr_rdata_id 
                                                      >> 0x14U))))) {
            vlTOPp->ibex_core_id_stage_i_csr_pipe_flush = 1U;
        }
    } else {
        if (((IData)(vlTOPp->ibex_core_csr_op_en) 
             & (0U != (IData)(vlTOPp->ibex_core_csr_op)))) {
            if (((((0x7b0U == (0xfffU & (vlTOPp->ibex_core_instr_rdata_id 
                                         >> 0x14U))) 
                   | (0x7b1U == (0xfffU & (vlTOPp->ibex_core_instr_rdata_id 
                                           >> 0x14U)))) 
                  | (0x7b2U == (0xfffU & (vlTOPp->ibex_core_instr_rdata_id 
                                          >> 0x14U)))) 
                 | (0x7b3U == (0xfffU & (vlTOPp->ibex_core_instr_rdata_id 
                                         >> 0x14U))))) {
                vlTOPp->ibex_core_id_stage_i_csr_pipe_flush = 1U;
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_csr_wreq 
        = ((IData)(vlTOPp->ibex_core_csr_op_en) 
           & (((1U == (IData)(vlTOPp->ibex_core_csr_op)) 
               | (2U == (IData)(vlTOPp->ibex_core_csr_op))) 
              | (3U == (IData)(vlTOPp->ibex_core_csr_op))));
    vlTOPp->ibex_core_imd_val_d_ex[0U] 
        = vlTOPp->ibex_core___Vcellout__ex_block_i__imd_val_d_o
        [0U];
    vlTOPp->ibex_core_imd_val_d_ex[1U] 
        = vlTOPp->ibex_core___Vcellout__ex_block_i__imd_val_d_o
        [1U];
    vlTOPp->ibex_timer_mtimecmp_we 
        = ((IData)(vlTOPp->ibex_timer_timer_we) 
           & (8U == (0x3ffU & vlTOPp->ibex_device_addr
                     [2U])));
    vlTOPp->ibex_timer_mtimecmph_we 
        = ((IData)(vlTOPp->ibex_timer_timer_we) 
           & (0xcU == (0x3ffU & vlTOPp->ibex_device_addr
                       [2U])));
    vlTOPp->ibex_timer_mtime_d 
        = (((QData)((IData)((((IData)(vlTOPp->ibex_timer_timer_we) 
                              & (4U == (0x3ffU & vlTOPp->ibex_device_addr
                                        [2U]))) ? vlTOPp->ibex_timer_mtimeh_wdata
                              : (IData)(((1ULL + vlTOPp->ibex_timer_mtime_q) 
                                         >> 0x20U))))) 
            << 0x20U) | (QData)((IData)((((IData)(vlTOPp->ibex_timer_timer_we) 
                                          & (0U == 
                                             (0x3ffU 
                                              & vlTOPp->ibex_device_addr
                                              [2U])))
                                          ? vlTOPp->ibex_timer_mtime_wdata
                                          : ((IData)(1U) 
                                             + (IData)(vlTOPp->ibex_timer_mtime_q))))));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xfffffffeU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (1U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xfffffffdU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (2U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xfffffffbU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (4U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xfffffff7U & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (8U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xffffffefU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x10U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xffffffdfU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x20U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xffffffbfU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x40U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xffffff7fU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x80U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xfffffeffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x100U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xfffffdffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x200U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xfffffbffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x400U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xfffff7ffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x800U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xffffefffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x1000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xffffdfffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x2000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xffffbfffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x4000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xffff7fffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x8000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xfffeffffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x10000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xfffdffffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x20000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xfffbffffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x40000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xfff7ffffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x80000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xffefffffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x100000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xffdfffffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x200000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xffbfffffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x400000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xff7fffffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x800000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xfeffffffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x1000000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xfdffffffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x2000000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xfbffffffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x4000000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xf7ffffffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x8000000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xefffffffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x10000000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xdfffffffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x20000000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0xbfffffffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x40000000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_ram_gen_generic_impl_a_wmask 
        = ((0x7fffffffU & vlTOPp->ibex_ram_gen_generic_impl_a_wmask) 
           | (0x80000000U & vlTOPp->ibex_ram_a_wmask));
    vlTOPp->ibex_core_id_stage_i_controller_i_csr_pipe_flush 
        = ((IData)(vlTOPp->ibex_core_id_stage_i_csr_pipe_flush) 
           & (IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q));
    vlTOPp->ibex_core_illegal_csr_insn_id 
        = ((IData)(vlTOPp->ibex_core_csr_access) 
           & (((IData)(vlTOPp->ibex_core_cs_reg_i_illegal_csr) 
               | ((3U == (3U & ((IData)(vlTOPp->ibex_core_csr_addr) 
                                >> 0xaU))) & (IData)(vlTOPp->ibex_core_cs_reg_i_csr_wreq))) 
              | ((3U & ((IData)(vlTOPp->ibex_core_csr_addr) 
                        >> 8U)) > (IData)(vlTOPp->ibex_core_cs_reg_i_priv_lvl_q))));
    vlTOPp->ibex_core___Vcellinp__id_stage_i__imd_val_d_ex_i[0U] 
        = vlTOPp->ibex_core_imd_val_d_ex
        [0U];
    vlTOPp->ibex_core___Vcellinp__id_stage_i__imd_val_d_ex_i[1U] 
        = vlTOPp->ibex_core_imd_val_d_ex
        [1U];
    vlTOPp->ibex_timer_mtimecmp_d 
        = (((QData)((IData)(((IData)(vlTOPp->ibex_timer_mtimecmph_we)
                              ? vlTOPp->ibex_timer_mtimecmph_wdata
                              : (IData)((vlTOPp->ibex_timer_mtimecmp_q 
                                         >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlTOPp->ibex_timer_mtimecmp_we)
                                          ? vlTOPp->ibex_timer_mtimecmp_wdata
                                          : (IData)(vlTOPp->ibex_timer_mtimecmp_q)))));
    vlTOPp->ibex_timer_interrupt_d 
        = (((vlTOPp->ibex_timer_mtime_q 
             >= vlTOPp->ibex_timer_mtimecmp_q) 
            | (IData)(vlTOPp->ibex_timer_interrupt_q)) 
           & (~ ((IData)(vlTOPp->ibex_timer_mtimecmp_we) 
                 | (IData)(vlTOPp->ibex_timer_mtimecmph_we))));
    vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we 
        = ((2U & (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)) 
           | (((IData)(vlTOPp->ibex_core_id_stage_i_rf_we_raw) 
               & (IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec)) 
              & (~ (IData)(vlTOPp->ibex_core_illegal_csr_insn_id))));
    vlTOPp->ibex_core_perf_instr_ret_wb 
        = (((((((~ (IData)(vlTOPp->ibex_core_id_stage_i_ebrk_insn)) 
                & (~ (IData)(vlTOPp->ibex_core_id_stage_i_ecall_insn_dec))) 
               & (~ (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn))) 
              & (~ (IData)(vlTOPp->ibex_core_illegal_csr_insn_id))) 
             & (~ (IData)(vlTOPp->ibex_core_instr_fetch_err))) 
            & (IData)(vlTOPp->ibex_core_id_stage_i_instr_done)) 
           & (~ ((IData)(vlTOPp->ibex_core_lsu_resp_valid) 
                 & ((IData)(vlTOPp->ibex_core_lsu_load_err) 
                    | (IData)(vlTOPp->ibex_core_lsu_store_err)))));
    vlTOPp->ibex_core_cs_reg_i_csr_we_int 
        = ((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wreq) 
           & (~ (IData)(vlTOPp->ibex_core_illegal_csr_insn_id)));
    vlTOPp->ibex_core_illegal_insn_id 
        = ((IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q) 
           & ((IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn) 
              | (IData)(vlTOPp->ibex_core_illegal_csr_insn_id)));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((1U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7ffffffeU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | (IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((2U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7ffffffdU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 1U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((3U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7ffffffbU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 2U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((4U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7ffffff7U & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 3U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((5U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7fffffefU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 4U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((6U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7fffffdfU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 5U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((7U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7fffffbfU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 6U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((8U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7fffff7fU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 7U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((9U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                            >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7ffffeffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 8U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0xaU == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                              >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7ffffdffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 9U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0xbU == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                              >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7ffffbffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0xaU));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0xcU == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                              >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7ffff7ffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0xbU));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0xdU == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                              >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7fffefffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0xcU));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0xeU == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                              >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7fffdfffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0xdU));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0xfU == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                              >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7fffbfffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0xeU));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0x10U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7fff7fffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0xfU));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0x11U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7ffeffffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0x10U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0x12U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7ffdffffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0x11U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0x13U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7ffbffffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0x12U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0x14U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7ff7ffffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0x13U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0x15U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7fefffffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0x14U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0x16U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7fdfffffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0x15U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0x17U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7fbfffffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0x16U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0x18U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7f7fffffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0x17U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0x19U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7effffffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0x18U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0x1aU == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7dffffffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0x19U));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0x1bU == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x7bffffffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0x1aU));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0x1cU == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x77ffffffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0x1bU));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0x1dU == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x6fffffffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0x1cU));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0x1eU == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x5fffffffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0x1dU));
    vlTOPp->ibex_core_gen_reg_file___Vlvbound1 
        = ((0x1fU == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)));
    vlTOPp->ibex_core_gen_reg_file_we_a_dec 
        = ((0x3fffffffU & vlTOPp->ibex_core_gen_reg_file_we_a_dec) 
           | ((IData)(vlTOPp->ibex_core_gen_reg_file___Vlvbound1) 
              << 0x1eU));
    vlTOPp->ibex_core_rf_wdata_wb 
        = ((1U & (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we))
            ? vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux
           [0U] : vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux
           [1U]);
    vlTOPp->ibex_core_rvfi_rd_we_wb 
        = ((0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we)) 
           | (IData)(vlTOPp->ibex_core_rf_we_lsu));
    vlTOPp->ibex_core_cs_reg_i_dscratch1_en = 0U;
    if (vlTOPp->ibex_core_cs_reg_i_csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                        vlTOPp->ibex_core_cs_reg_i_dscratch1_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_dscratch0_en = 0U;
    if (vlTOPp->ibex_core_cs_reg_i_csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                        vlTOPp->ibex_core_cs_reg_i_dscratch0_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_mie_en = 0U;
    if (vlTOPp->ibex_core_cs_reg_i_csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                        vlTOPp->ibex_core_cs_reg_i_mie_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_mscratch_en = 0U;
    if (vlTOPp->ibex_core_cs_reg_i_csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                        vlTOPp->ibex_core_cs_reg_i_mscratch_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_cpuctrl_we = 0U;
    if (vlTOPp->ibex_core_cs_reg_i_csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                            if ((0x40U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                        vlTOPp->ibex_core_cs_reg_i_cpuctrl_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_mtvec_en 
        = vlTOPp->ibex_core_csr_mtvec_init;
    if (vlTOPp->ibex_core_cs_reg_i_csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                        vlTOPp->ibex_core_cs_reg_i_mtvec_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_depc_en = 0U;
    if (vlTOPp->ibex_core_cs_reg_i_csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                        vlTOPp->ibex_core_cs_reg_i_depc_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->ibex_core_csr_save_cause) {
        if (vlTOPp->ibex_core_debug_csr_save) {
            vlTOPp->ibex_core_cs_reg_i_depc_en = 1U;
        }
    }
    vlTOPp->ibex_core_cs_reg_i_dcsr_en = 0U;
    if (vlTOPp->ibex_core_cs_reg_i_csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                        vlTOPp->ibex_core_cs_reg_i_dcsr_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->ibex_core_csr_save_cause) {
        if (vlTOPp->ibex_core_debug_csr_save) {
            vlTOPp->ibex_core_cs_reg_i_dcsr_en = 1U;
        }
    }
    vlTOPp->ibex_core_cs_reg_i_mtval_en = 0U;
    if (vlTOPp->ibex_core_cs_reg_i_csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                        vlTOPp->ibex_core_cs_reg_i_mtval_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->ibex_core_csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))) {
                vlTOPp->ibex_core_cs_reg_i_mtval_en = 1U;
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_mstatus_en = 0U;
    if (vlTOPp->ibex_core_cs_reg_i_csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                        vlTOPp->ibex_core_cs_reg_i_mstatus_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->ibex_core_csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))) {
                vlTOPp->ibex_core_cs_reg_i_mstatus_en = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_csr_restore_dret_id)))) {
            if (vlTOPp->ibex_core_csr_restore_mret_id) {
                vlTOPp->ibex_core_cs_reg_i_mstatus_en = 1U;
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_dcsr_d 
        = vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q;
    if (vlTOPp->ibex_core_cs_reg_i_csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                        vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                                            = vlTOPp->ibex_core_cs_reg_i_csr_wdata_int;
                                                        vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                                            = 
                                                            (0x40000000U 
                                                             | (0xfffffffU 
                                                                & vlTOPp->ibex_core_cs_reg_i_dcsr_d));
                                                        if (
                                                            ((3U 
                                                              != 
                                                              (3U 
                                                               & vlTOPp->ibex_core_cs_reg_i_dcsr_d)) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & vlTOPp->ibex_core_cs_reg_i_dcsr_d)))) {
                                                            vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                                                = 
                                                                (3U 
                                                                 | vlTOPp->ibex_core_cs_reg_i_dcsr_d);
                                                        }
                                                        vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                                            = 
                                                            ((0xfffffe3fU 
                                                              & vlTOPp->ibex_core_cs_reg_i_dcsr_d) 
                                                             | (0x1c0U 
                                                                & vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q));
                                                        vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                                            = 
                                                            (0xfffffff7U 
                                                             & vlTOPp->ibex_core_cs_reg_i_dcsr_d);
                                                        vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                                            = 
                                                            (0xffffffefU 
                                                             & vlTOPp->ibex_core_cs_reg_i_dcsr_d);
                                                        vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                                            = 
                                                            (0xfffffbffU 
                                                             & vlTOPp->ibex_core_cs_reg_i_dcsr_d);
                                                        vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                                            = 
                                                            (0xfffffdffU 
                                                             & vlTOPp->ibex_core_cs_reg_i_dcsr_d);
                                                        vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                                            = 
                                                            (0xffffffdfU 
                                                             & vlTOPp->ibex_core_cs_reg_i_dcsr_d);
                                                        vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                                            = 
                                                            (0xffffbfffU 
                                                             & vlTOPp->ibex_core_cs_reg_i_dcsr_d);
                                                        vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                                            = 
                                                            (0xf000ffffU 
                                                             & vlTOPp->ibex_core_cs_reg_i_dcsr_d);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->ibex_core_csr_save_cause) {
        if (vlTOPp->ibex_core_debug_csr_save) {
            vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                = ((0xfffffffcU & vlTOPp->ibex_core_cs_reg_i_dcsr_d) 
                   | (IData)(vlTOPp->ibex_core_cs_reg_i_priv_lvl_q));
            vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                = ((0xfffffe3fU & vlTOPp->ibex_core_cs_reg_i_dcsr_d) 
                   | ((IData)(vlTOPp->ibex_core_debug_cause) 
                      << 6U));
        }
    }
    vlTOPp->ibex_core_cs_reg_i_mepc_en = 0U;
    if (vlTOPp->ibex_core_cs_reg_i_csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                        vlTOPp->ibex_core_cs_reg_i_mepc_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->ibex_core_csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))) {
                vlTOPp->ibex_core_cs_reg_i_mepc_en = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_csr_restore_dret_id)))) {
            if (vlTOPp->ibex_core_csr_restore_mret_id) {
                if (vlTOPp->ibex_core_id_stage_i_controller_i_nmi_mode_q) {
                    vlTOPp->ibex_core_cs_reg_i_mepc_en = 1U;
                }
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_mcause_en = 0U;
    if (vlTOPp->ibex_core_cs_reg_i_csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                        vlTOPp->ibex_core_cs_reg_i_mcause_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->ibex_core_csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))) {
                vlTOPp->ibex_core_cs_reg_i_mcause_en = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_csr_restore_dret_id)))) {
            if (vlTOPp->ibex_core_csr_restore_mret_id) {
                if (vlTOPp->ibex_core_id_stage_i_controller_i_nmi_mode_q) {
                    vlTOPp->ibex_core_cs_reg_i_mcause_en = 1U;
                }
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_mstatus_d 
        = vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q;
    if (vlTOPp->ibex_core_cs_reg_i_csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                        vlTOPp->ibex_core_cs_reg_i_mstatus_d 
                                                            = 
                                                            ((0x20U 
                                                              & (vlTOPp->ibex_core_cs_reg_i_csr_wdata_int 
                                                                 << 2U)) 
                                                             | ((0x10U 
                                                                 & (vlTOPp->ibex_core_cs_reg_i_csr_wdata_int 
                                                                    >> 3U)) 
                                                                | ((0xcU 
                                                                    & (vlTOPp->ibex_core_cs_reg_i_csr_wdata_int 
                                                                       >> 9U)) 
                                                                   | ((2U 
                                                                       & (vlTOPp->ibex_core_cs_reg_i_csr_wdata_int 
                                                                          >> 0x10U)) 
                                                                      | (1U 
                                                                         & (vlTOPp->ibex_core_cs_reg_i_csr_wdata_int 
                                                                            >> 0x15U))))));
                                                        if (
                                                            ((3U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d) 
                                                                  >> 2U))) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d) 
                                                                    >> 2U))))) {
                                                            vlTOPp->ibex_core_cs_reg_i_mstatus_d 
                                                                = 
                                                                (0xcU 
                                                                 | (IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->ibex_core_csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))) {
                vlTOPp->ibex_core_cs_reg_i_mstatus_d 
                    = (0x1fU & (IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d));
                vlTOPp->ibex_core_cs_reg_i_mstatus_d 
                    = ((0x2fU & (IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d)) 
                       | (0x10U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                   >> 1U)));
                vlTOPp->ibex_core_cs_reg_i_mstatus_d 
                    = ((0x33U & (IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d)) 
                       | ((IData)(vlTOPp->ibex_core_cs_reg_i_priv_lvl_q) 
                          << 2U));
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->ibex_core_csr_restore_dret_id)))) {
            if (vlTOPp->ibex_core_csr_restore_mret_id) {
                vlTOPp->ibex_core_cs_reg_i_mstatus_d 
                    = ((0x1fU & (IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d)) 
                       | (0x20U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                   << 1U)));
                if (vlTOPp->ibex_core_id_stage_i_controller_i_nmi_mode_q) {
                    vlTOPp->ibex_core_cs_reg_i_mstatus_d 
                        = ((0x2fU & (IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d)) 
                           | (0x10U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstack_csr__rdata_q) 
                                       << 2U)));
                    vlTOPp->ibex_core_cs_reg_i_mstatus_d 
                        = ((0x33U & (IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d)) 
                           | (0xcU & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstack_csr__rdata_q) 
                                      << 2U)));
                } else {
                    vlTOPp->ibex_core_cs_reg_i_mstatus_d 
                        = (0x10U | (IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d));
                    vlTOPp->ibex_core_cs_reg_i_mstatus_d 
                        = (0x33U & (IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d));
                }
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_mcountinhibit_we = 0U;
    if (vlTOPp->ibex_core_cs_reg_i_csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                        vlTOPp->ibex_core_cs_reg_i_mcountinhibit_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we = 0U;
    if (vlTOPp->ibex_core_cs_reg_i_csr_we_int) {
        if ((0x800U & (IData)(vlTOPp->ibex_core_csr_addr))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                        vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                            = (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                               | ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->ibex_core_csr_addr))));
                                    } else {
                                        if ((8U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                            vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                                = (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                                   | ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->ibex_core_csr_addr))));
                                        } else {
                                            if ((4U 
                                                 & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                                    = 
                                                    (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                                     | ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & (IData)(vlTOPp->ibex_core_csr_addr))));
                                            } else {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                                        = 
                                                        (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                                         | ((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & (IData)(vlTOPp->ibex_core_csr_addr))));
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                        vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                                            = 
                                                            (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                                             | ((IData)(1U) 
                                                                << 
                                                                (0x1fU 
                                                                 & (IData)(vlTOPp->ibex_core_csr_addr))));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we = 0U;
    if (vlTOPp->ibex_core_cs_reg_i_csr_we_int) {
        if ((0x800U & (IData)(vlTOPp->ibex_core_csr_addr))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_core_csr_addr) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                        vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                            = (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                               | ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->ibex_core_csr_addr))));
                                    } else {
                                        if ((8U & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                            vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                                = (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                                   | ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->ibex_core_csr_addr))));
                                        } else {
                                            if ((4U 
                                                 & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                                    = 
                                                    (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                                     | ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & (IData)(vlTOPp->ibex_core_csr_addr))));
                                            } else {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->ibex_core_csr_addr))) {
                                                    vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                                        = 
                                                        (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                                         | ((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & (IData)(vlTOPp->ibex_core_csr_addr))));
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_core_csr_addr)))) {
                                                        vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                                            = 
                                                            (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                                             | ((IData)(1U) 
                                                                << 
                                                                (0x1fU 
                                                                 & (IData)(vlTOPp->ibex_core_csr_addr))));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_d 
        = ((((IData)(vlTOPp->ibex_core_illegal_insn_id) 
             | ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_dret_insn) 
                & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))) 
            | ((3U != (IData)(vlTOPp->ibex_core_cs_reg_i_priv_lvl_q)) 
               & ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_mret_insn) 
                  | ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                     & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_wfi_insn))))) 
           & (6U != (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)));
    if (vlTOPp->ibex_core_rvfi_rd_we_wb) {
        vlTOPp->ibex_core_rvfi_rd_addr_d 
            = (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                        >> 7U));
        vlTOPp->ibex_core_rvfi_rd_wdata_d 
            = ((0U == (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                                >> 7U))) ? 0U : ((0U 
                                                  != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we))
                                                  ? vlTOPp->ibex_core_rf_wdata_wb
                                                  : vlTOPp->ibex_core_load_store_unit_i_data_rdata_ext));
    } else {
        vlTOPp->ibex_core_rvfi_rd_addr_d 
            = (0x1fU & ((IData)(vlTOPp->ibex_core_if_stage_i_instr_new_id_q)
                         ? 0U : (IData)(vlTOPp->ibex_core_rvfi_rd_addr_q)));
        vlTOPp->ibex_core_rvfi_rd_wdata_d 
            = ((IData)(vlTOPp->ibex_core_if_stage_i_instr_new_id_q)
                ? 0U : vlTOPp->ibex_core_rvfi_rd_wdata_q);
    }
    vlTOPp->ibex_core_cs_reg_i_mcountinhibit_d 
        = ((IData)(vlTOPp->ibex_core_cs_reg_i_mcountinhibit_we)
            ? (0xfffffffdU & vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)
            : vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q);
    vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_d 
        = (((((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ecall_insn) 
              | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ebrk_insn)) 
             | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_d)) 
            | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_instr_fetch_err)) 
           & (6U != (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)));
    vlTOPp->ibex_core_id_stage_i_controller_i_special_req 
        = (((((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_mret_insn) 
              | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_dret_insn)) 
             | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_d)) 
            | ((IData)(vlTOPp->ibex_core_lsu_store_err) 
               | (IData)(vlTOPp->ibex_core_lsu_load_err))) 
           | ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_wfi_insn) 
              | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_csr_pipe_flush)));
    vlTOPp->ibex_core_id_stage_i_controller_i_halt_if = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)))) {
                    vlTOPp->ibex_core_id_stage_i_controller_i_halt_if = 1U;
                }
            } else {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if ((((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_enter_debug_mode_d) 
                          | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_handle_irq)) 
                         & (IData)(vlTOPp->ibex_core_id_stage_i_stall_id))) {
                        vlTOPp->ibex_core_id_stage_i_controller_i_halt_if = 1U;
                    }
                    if ((1U & ((~ (IData)(vlTOPp->ibex_core_id_stage_i_stall_id)) 
                               & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_special_req))))) {
                        if (vlTOPp->ibex_core_id_stage_i_controller_i_enter_debug_mode_d) {
                            vlTOPp->ibex_core_id_stage_i_controller_i_halt_if = 1U;
                        } else {
                            if (vlTOPp->ibex_core_id_stage_i_controller_i_handle_irq) {
                                vlTOPp->ibex_core_id_stage_i_controller_i_halt_if = 1U;
                            }
                        }
                    }
                } else {
                    if (vlTOPp->ibex_core_id_stage_i_controller_i_handle_irq) {
                        vlTOPp->ibex_core_id_stage_i_controller_i_halt_if = 1U;
                    }
                    if (vlTOPp->ibex_core_id_stage_i_controller_i_enter_debug_mode_d) {
                        vlTOPp->ibex_core_id_stage_i_controller_i_halt_if = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                vlTOPp->ibex_core_id_stage_i_controller_i_halt_if = 1U;
            }
        }
    }
    vlTOPp->ibex_core_id_stage_i_controller_i_retain_id = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if (vlTOPp->ibex_core_id_stage_i_controller_i_special_req) {
                        vlTOPp->ibex_core_id_stage_i_controller_i_retain_id = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_core_instr_valid_clear 
        = (1U & ((~ ((IData)(vlTOPp->ibex_core_id_stage_i_stall_id) 
                     | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_retain_id))) 
                 | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_flush_id)));
    vlTOPp->ibex_core_id_in_ready 
        = (1U & (((~ (IData)(vlTOPp->ibex_core_id_stage_i_stall_id)) 
                  & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_halt_if))) 
                 & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_retain_id))));
    vlTOPp->ibex_core_id_stage_i_branch_jump_set_done_d 
        = ((((IData)(vlTOPp->ibex_core_id_stage_i_g_branch_set_flop__branch_set_raw_q) 
             | (IData)(vlTOPp->ibex_core_id_stage_i_jump_set_raw)) 
            | (IData)(vlTOPp->ibex_core_id_stage_i_branch_jump_set_done_q)) 
           & (~ (IData)(vlTOPp->ibex_core_instr_valid_clear)));
    vlTOPp->ibex_core_if_stage_i_instr_new_id_d 
        = ((IData)(vlTOPp->ibex_core_pre_buf_i_valid_raw) 
           & (IData)(vlTOPp->ibex_core_id_in_ready));
    vlTOPp->ibex_core_if_stage_i_instr_valid_id_d 
        = ((((IData)(vlTOPp->ibex_core_pre_buf_i_valid_raw) 
             & (IData)(vlTOPp->ibex_core_id_in_ready)) 
            & (~ (IData)(vlTOPp->ibex_core_pc_set))) 
           | ((IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q) 
              & (~ (IData)(vlTOPp->ibex_core_instr_valid_clear))));
    vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns 
        = vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs;
    if ((8U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
        vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns 
            = ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))
                ? 0U : ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))
                         ? 0U : 5U));
    } else {
        if ((4U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns = 5U;
                } else {
                    vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns = 5U;
                    if ((((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_q) 
                          | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_q)) 
                         | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_q))) {
                        if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ecall_insn_prio)))) {
                                    if (vlTOPp->ibex_core_id_stage_i_controller_i_ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q) 
                                             | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ebreak_into_debug))) {
                                            vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns = 9U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_mret_insn)))) {
                            if ((1U & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_dret_insn)))) {
                                if (vlTOPp->ibex_core_id_stage_i_controller_i_wfi_insn) {
                                    vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns = 2U;
                                } else {
                                    if (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_csr_pipe_flush) 
                                         & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_handle_irq))) {
                                        vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns = 7U;
                                    }
                                }
                            }
                        }
                    }
                    if (((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_enter_debug_mode_q) 
                         & (~ ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ebrk_insn_prio) 
                               & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ebreak_into_debug))))) {
                        vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns = 8U;
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if (vlTOPp->ibex_core_id_stage_i_controller_i_special_req) {
                        vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns = 6U;
                    }
                    if ((1U & ((~ (IData)(vlTOPp->ibex_core_id_stage_i_stall_id)) 
                               & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_special_req))))) {
                        if (vlTOPp->ibex_core_id_stage_i_controller_i_enter_debug_mode_d) {
                            vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns = 8U;
                        } else {
                            if (vlTOPp->ibex_core_id_stage_i_controller_i_handle_irq) {
                                vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns = 7U;
                            }
                        }
                    }
                } else {
                    if (vlTOPp->ibex_core_id_in_ready) {
                        vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns = 5U;
                    }
                    if (vlTOPp->ibex_core_id_stage_i_controller_i_handle_irq) {
                        vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns = 7U;
                    }
                    if (vlTOPp->ibex_core_id_stage_i_controller_i_enter_debug_mode_d) {
                        vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns = 8U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))) {
                    if ((1U & (((0U != vlTOPp->ibex_core_irqs) 
                                | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)) 
                               | (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                  >> 2U)))) {
                        vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns = 4U;
                    }
                } else {
                    vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns = 3U;
                }
            } else {
                vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns 
                    = ((1U & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs))
                        ? 4U : 1U);
            }
        }
    }
    vlTOPp->ibex_core_pre_buf_i_fifo_i_pop_fifo 
        = (((IData)(vlTOPp->ibex_core_id_in_ready) 
            & (IData)(vlTOPp->ibex_core_pre_buf_i_valid_raw)) 
           & ((~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_aligned_is_compressed)) 
              | vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q));
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xfffffffeU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xfffffffdU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xfffffffbU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xfffffff7U & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xffffffefU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xffffffdfU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xffffffbfU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xffffff7fU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xfffffeffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xfffffdffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xfffffbffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xfffff7ffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xffffefffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xffffdfffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xffffbfffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xffff7fffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xfffeffffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xfffdffffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xfffbffffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xfff7ffffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xffefffffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xffdfffffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xffbfffffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xff7fffffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xfeffffffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xfdffffffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xfbffffffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xf7ffffffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xefffffffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xdfffffffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xbfffffffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0x7fffffffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (1U | vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = (0xfffffffdU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr);
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = ((0xfffffffbU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr) 
           | ((IData)(vlTOPp->ibex_core_perf_instr_ret_wb) 
              << 2U));
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = ((0xfffffff7U & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr) 
           | ((((IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec) 
                & (IData)(vlTOPp->ibex_core_id_stage_i_lsu_req_dec)) 
               & (~ (IData)(vlTOPp->ibex_core_lsu_resp_valid))) 
              << 3U));
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = ((0xffffffefU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr) 
           | (((IData)(vlTOPp->ibex_core_id_in_ready) 
               & (~ (IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q))) 
              << 4U));
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = ((0xffffffdfU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr) 
           | ((IData)(vlTOPp->ibex_core_perf_load) 
              << 5U));
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = ((0xffffffbfU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr) 
           | ((IData)(vlTOPp->ibex_core_perf_store) 
              << 6U));
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = ((0xffffff7fU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr) 
           | ((IData)(vlTOPp->ibex_core_perf_jump) 
              << 7U));
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = ((0xfffffeffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr) 
           | ((IData)(vlTOPp->ibex_core_perf_branch) 
              << 8U));
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = ((0xfffffdffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr) 
           | ((IData)(vlTOPp->ibex_core_perf_tbranch) 
              << 9U));
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = ((0xfffffbffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr) 
           | (((IData)(vlTOPp->ibex_core_perf_instr_ret_wb) 
               & (IData)(vlTOPp->ibex_core_instr_is_compressed_id)) 
              << 0xaU));
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = ((0xfffff7ffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr) 
           | (((IData)(vlTOPp->ibex_core_id_stage_i_stall_multdiv) 
               & (IData)(vlTOPp->ibex_core_id_stage_i_mult_en_dec)) 
              << 0xbU));
    vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
        = ((0xffffefffU & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr) 
           | (((IData)(vlTOPp->ibex_core_id_stage_i_stall_multdiv) 
               & (IData)(vlTOPp->ibex_core_id_stage_i_div_en_dec)) 
              << 0xcU));
    vlTOPp->ibex_core_pre_buf_i_fifo_i_entry_en 
        = ((6U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_entry_en)) 
           | ((((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_pushed) 
                >> 1U) & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_pop_fifo)) 
              | (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_valid) 
                  & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_lowest_free_entry)) 
                 & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_pop_fifo)))));
    vlTOPp->ibex_core_pre_buf_i_fifo_i_entry_en 
        = ((5U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_entry_en)) 
           | ((0x7ffffffeU & (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_pushed) 
                               >> 1U) & ((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_pop_fifo) 
                                         << 1U))) | 
              (0xfffffffeU & ((((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_valid) 
                                << 1U) & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_lowest_free_entry)) 
                              & ((~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_pop_fifo)) 
                                 << 1U)))));
    vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_popped 
        = ((6U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_popped)) 
           | (1U & ((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_pop_fifo)
                     ? ((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_pushed) 
                        >> 1U) : (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_pushed))));
    vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_popped 
        = ((5U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_popped)) 
           | (2U & (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_pop_fifo)
                      ? ((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_pushed) 
                         >> 2U) : ((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_pushed) 
                                   >> 1U)) << 1U)));
    vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_popped 
        = ((3U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_popped)) 
           | (4U & (((~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_pop_fifo)) 
                     << 2U) & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_pushed))));
    vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_we 
        = (1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                 | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we));
    vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_q 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((1U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_q)));
    }
    vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_upd 
        = (1ULL + vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_q);
    vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_d 
        = ((IData)(vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_we)
            ? vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_load
            : ((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                      & (~ vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q)))
                ? vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_upd
                : vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_q));
    vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 2U));
    vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_q 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((4U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_q)));
    }
    vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_upd 
        = (1ULL + vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_q);
    vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_d 
        = ((IData)(vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_we)
            ? vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_load
            : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                       >> 2U) & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                    >> 2U)))) ? vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_upd
                : vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_q));
    vlTOPp->ibex_core_cs_reg_i_cntrs_0_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 3U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((8U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_0_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 3U) & 
                                         (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                             >> 3U))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_1_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 4U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x10U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_1_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 4U) & 
                                         (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                             >> 4U))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_2_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 5U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x20U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_2_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 5U) & 
                                         (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                             >> 5U))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_3_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 6U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x40U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_3_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 6U) & 
                                         (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                             >> 6U))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_4_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 7U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x80U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_4_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 7U) & 
                                         (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                             >> 7U))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_5_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 8U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x100U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_5_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 8U) & 
                                         (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                             >> 8U))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_6_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 9U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x200U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_6_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 9U) & 
                                         (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                             >> 9U))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_7_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0xaU));
    vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x400U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_7_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0xaU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0xaU))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_8_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0xbU));
    vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x800U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_8_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0xbU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0xbU))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_9_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0xcU));
    vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x1000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_9_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0xcU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0xcU))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_10_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0xdU));
    vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x2000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_10_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0xdU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0xdU))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_11_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0xeU));
    vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x4000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_11_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0xeU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0xeU))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_12_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0xfU));
    vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x8000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_12_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0xfU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0xfU))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_13_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0x10U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x10000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_13_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x10U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x10U))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_14_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0x11U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x20000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_14_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x11U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x11U))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_15_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0x12U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x40000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_15_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x12U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x12U))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_16_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0x13U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x80000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_16_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x13U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x13U))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_17_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0x14U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x100000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_17_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x14U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x14U))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_18_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0x15U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x200000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_18_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x15U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x15U))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_19_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0x16U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x400000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_19_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x16U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x16U))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_20_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0x17U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x800000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_20_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x17U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x17U))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_21_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0x18U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x1000000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_21_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x18U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x18U))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_22_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0x19U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x2000000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_22_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x19U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x19U))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_23_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0x1aU));
    vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x4000000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_23_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x1aU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x1aU))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_24_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0x1bU));
    vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x8000000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_24_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x1bU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x1bU))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_25_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0x1cU));
    vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x10000000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_25_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x1cU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x1cU))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_26_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0x1dU));
    vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x20000000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_26_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x1dU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x1dU))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_27_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0x1eU));
    vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x40000000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_27_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x1eU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x1eU))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt)));
    vlTOPp->ibex_core_cs_reg_i_cntrs_28_gen_mcnt_var_i_we 
        = (1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                  | vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we) 
                 >> 0x1fU));
    vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_load 
        = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_load) 
           | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
    if ((0x80000000U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)) {
        vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_load 
            = ((0xffffffffULL & vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_load) 
               | ((QData)((IData)(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_load) 
               | (IData)((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt)));
    }
    vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_upd 
        = (0xffffffffffULL & (1ULL + vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt));
    vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_core_cs_reg_i_cntrs_28_gen_mcnt_var_i_we)
                               ? vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_load
                               : ((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x1fU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x1fU))))
                                   ? vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_upd
                                   : vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt)));
    vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_d 
        = ((6U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_d)) 
           | (1U & ((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_popped) 
                    & (~ (IData)(vlTOPp->ibex_core_pc_set)))));
    vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_d 
        = ((5U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_d)) 
           | (2U & ((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_popped) 
                    & ((~ (IData)(vlTOPp->ibex_core_pc_set)) 
                       << 1U))));
    vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_d 
        = ((3U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_d)) 
           | (4U & ((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_popped) 
                    & ((~ (IData)(vlTOPp->ibex_core_pc_set)) 
                       << 2U))));
}
