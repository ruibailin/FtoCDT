// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vibex_simple_system__Syms.h"


void Vibex_simple_system::traceChgTop0(void* userp, VerilatedFst* tracep) {
    Vibex_simple_system__Syms* __restrict vlSymsp = static_cast<Vibex_simple_system__Syms*>(userp);
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vibex_simple_system::traceChgSub0(void* userp, VerilatedFst* tracep) {
    Vibex_simple_system__Syms* __restrict vlSymsp = static_cast<Vibex_simple_system__Syms*>(userp);
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlTOPp->ibex_simple_system__cfg_device_addr_base[0]),32);
            tracep->chgIData(oldp+1,(vlTOPp->ibex_simple_system__cfg_device_addr_base[1]),32);
            tracep->chgIData(oldp+2,(vlTOPp->ibex_simple_system__cfg_device_addr_base[2]),32);
            tracep->chgIData(oldp+3,(vlTOPp->ibex_simple_system__cfg_device_addr_mask[0]),32);
            tracep->chgIData(oldp+4,(vlTOPp->ibex_simple_system__cfg_device_addr_mask[1]),32);
            tracep->chgIData(oldp+5,(vlTOPp->ibex_simple_system__cfg_device_addr_mask[2]),32);
            tracep->chgIData(oldp+6,(vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_base[0]),32);
            tracep->chgIData(oldp+7,(vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_base[1]),32);
            tracep->chgIData(oldp+8,(vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_base[2]),32);
            tracep->chgIData(oldp+9,(vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_mask[0]),32);
            tracep->chgIData(oldp+10,(vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_mask[1]),32);
            tracep->chgIData(oldp+11,(vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_mask[2]),32);
            tracep->chgQData(oldp+12,(vlTOPp->ibex_core_csr_pmp_addr[0]),34);
            tracep->chgQData(oldp+14,(vlTOPp->ibex_core_csr_pmp_addr[1]),34);
            tracep->chgQData(oldp+16,(vlTOPp->ibex_core_csr_pmp_addr[2]),34);
            tracep->chgQData(oldp+18,(vlTOPp->ibex_core_csr_pmp_addr[3]),34);
            tracep->chgBit(oldp+20,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                           [0U] >> 5U))));
            tracep->chgCData(oldp+21,((3U & (vlTOPp->ibex_core_csr_pmp_cfg
                                             [0U] >> 3U))),2);
            tracep->chgBit(oldp+22,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                           [0U] >> 2U))));
            tracep->chgBit(oldp+23,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                           [0U] >> 1U))));
            tracep->chgBit(oldp+24,((1U & vlTOPp->ibex_core_csr_pmp_cfg
                                     [0U])));
            tracep->chgBit(oldp+25,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                           [1U] >> 5U))));
            tracep->chgCData(oldp+26,((3U & (vlTOPp->ibex_core_csr_pmp_cfg
                                             [1U] >> 3U))),2);
            tracep->chgBit(oldp+27,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                           [1U] >> 2U))));
            tracep->chgBit(oldp+28,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                           [1U] >> 1U))));
            tracep->chgBit(oldp+29,((1U & vlTOPp->ibex_core_csr_pmp_cfg
                                     [1U])));
            tracep->chgBit(oldp+30,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                           [2U] >> 5U))));
            tracep->chgCData(oldp+31,((3U & (vlTOPp->ibex_core_csr_pmp_cfg
                                             [2U] >> 3U))),2);
            tracep->chgBit(oldp+32,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                           [2U] >> 2U))));
            tracep->chgBit(oldp+33,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                           [2U] >> 1U))));
            tracep->chgBit(oldp+34,((1U & vlTOPp->ibex_core_csr_pmp_cfg
                                     [2U])));
            tracep->chgBit(oldp+35,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                           [3U] >> 5U))));
            tracep->chgCData(oldp+36,((3U & (vlTOPp->ibex_core_csr_pmp_cfg
                                             [3U] >> 3U))),2);
            tracep->chgBit(oldp+37,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                           [3U] >> 2U))));
            tracep->chgBit(oldp+38,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                           [3U] >> 1U))));
            tracep->chgBit(oldp+39,((1U & vlTOPp->ibex_core_csr_pmp_cfg
                                     [3U])));
            tracep->chgBit(oldp+40,(vlTOPp->ibex_core_pmp_req_err[0]));
            tracep->chgBit(oldp+41,(vlTOPp->ibex_core_pmp_req_err[1]));
            tracep->chgQData(oldp+42,(vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_addr[0]),34);
            tracep->chgQData(oldp+44,(vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_addr[1]),34);
            tracep->chgQData(oldp+46,(vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_addr[2]),34);
            tracep->chgQData(oldp+48,(vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_addr[3]),34);
            tracep->chgBit(oldp+50,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                           [0U] >> 5U))));
            tracep->chgCData(oldp+51,((3U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                             [0U] >> 3U))),2);
            tracep->chgBit(oldp+52,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                           [0U] >> 2U))));
            tracep->chgBit(oldp+53,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                           [0U] >> 1U))));
            tracep->chgBit(oldp+54,((1U & vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                     [0U])));
            tracep->chgBit(oldp+55,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                           [1U] >> 5U))));
            tracep->chgCData(oldp+56,((3U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                             [1U] >> 3U))),2);
            tracep->chgBit(oldp+57,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                           [1U] >> 2U))));
            tracep->chgBit(oldp+58,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                           [1U] >> 1U))));
            tracep->chgBit(oldp+59,((1U & vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                     [1U])));
            tracep->chgBit(oldp+60,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                           [2U] >> 5U))));
            tracep->chgCData(oldp+61,((3U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                             [2U] >> 3U))),2);
            tracep->chgBit(oldp+62,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                           [2U] >> 2U))));
            tracep->chgBit(oldp+63,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                           [2U] >> 1U))));
            tracep->chgBit(oldp+64,((1U & vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                     [2U])));
            tracep->chgBit(oldp+65,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                           [3U] >> 5U))));
            tracep->chgCData(oldp+66,((3U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                             [3U] >> 3U))),2);
            tracep->chgBit(oldp+67,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                           [3U] >> 2U))));
            tracep->chgBit(oldp+68,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                           [3U] >> 1U))));
            tracep->chgBit(oldp+69,((1U & vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                     [3U])));
            tracep->chgBit(oldp+70,(vlTOPp->ibex_core_pmp_req_err
                                    [0U]));
            tracep->chgBit(oldp+71,(vlTOPp->ibex_core_id_stage_i_stall_alu));
            tracep->chgIData(oldp+72,(vlTOPp->ibex_core_ex_block_i_alu_imd_val_d[0]),32);
            tracep->chgIData(oldp+73,(vlTOPp->ibex_core_ex_block_i_alu_imd_val_d[1]),32);
            tracep->chgIData(oldp+74,(vlTOPp->ibex_core_ex_block_i___Vcellout__alu_i__imd_val_d_o[0]),32);
            tracep->chgIData(oldp+75,(vlTOPp->ibex_core_ex_block_i___Vcellout__alu_i__imd_val_d_o[1]),32);
            tracep->chgIData(oldp+76,(vlTOPp->ibex_core_ex_block_i_alu_i_bfp_mask_rev),32);
            tracep->chgBit(oldp+77,(vlTOPp->ibex_core_pmp_req_err
                                    [1U]));
            tracep->chgBit(oldp+78,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                           [0U] >> 5U))));
            tracep->chgCData(oldp+79,((3U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                             [0U] >> 3U))),2);
            tracep->chgBit(oldp+80,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                           [0U] >> 2U))));
            tracep->chgBit(oldp+81,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                           [0U] >> 1U))));
            tracep->chgBit(oldp+82,((1U & vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                     [0U])));
            tracep->chgBit(oldp+83,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                           [1U] >> 5U))));
            tracep->chgCData(oldp+84,((3U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                             [1U] >> 3U))),2);
            tracep->chgBit(oldp+85,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                           [1U] >> 2U))));
            tracep->chgBit(oldp+86,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                           [1U] >> 1U))));
            tracep->chgBit(oldp+87,((1U & vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                     [1U])));
            tracep->chgBit(oldp+88,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                           [2U] >> 5U))));
            tracep->chgCData(oldp+89,((3U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                             [2U] >> 3U))),2);
            tracep->chgBit(oldp+90,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                           [2U] >> 2U))));
            tracep->chgBit(oldp+91,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                           [2U] >> 1U))));
            tracep->chgBit(oldp+92,((1U & vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                     [2U])));
            tracep->chgBit(oldp+93,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                           [3U] >> 5U))));
            tracep->chgCData(oldp+94,((3U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                             [3U] >> 3U))),2);
            tracep->chgBit(oldp+95,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                           [3U] >> 2U))));
            tracep->chgBit(oldp+96,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                           [3U] >> 1U))));
            tracep->chgBit(oldp+97,((1U & vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                     [3U])));
            tracep->chgQData(oldp+98,(vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_addr_o[0]),34);
            tracep->chgQData(oldp+100,(vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_addr_o[1]),34);
            tracep->chgQData(oldp+102,(vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_addr_o[2]),34);
            tracep->chgQData(oldp+104,(vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_addr_o[3]),34);
            tracep->chgIData(oldp+106,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[0]),32);
            tracep->chgIData(oldp+107,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[1]),32);
            tracep->chgIData(oldp+108,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[2]),32);
            tracep->chgIData(oldp+109,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[3]),32);
            tracep->chgIData(oldp+110,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[4]),32);
            tracep->chgIData(oldp+111,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[5]),32);
            tracep->chgIData(oldp+112,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[6]),32);
            tracep->chgIData(oldp+113,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[7]),32);
            tracep->chgIData(oldp+114,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[8]),32);
            tracep->chgIData(oldp+115,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[9]),32);
            tracep->chgIData(oldp+116,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[10]),32);
            tracep->chgIData(oldp+117,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[11]),32);
            tracep->chgIData(oldp+118,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[12]),32);
            tracep->chgIData(oldp+119,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[13]),32);
            tracep->chgIData(oldp+120,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[14]),32);
            tracep->chgIData(oldp+121,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[15]),32);
            tracep->chgCData(oldp+122,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[0]),8);
            tracep->chgCData(oldp+123,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[1]),8);
            tracep->chgCData(oldp+124,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[2]),8);
            tracep->chgCData(oldp+125,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[3]),8);
            tracep->chgCData(oldp+126,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[4]),8);
            tracep->chgCData(oldp+127,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[5]),8);
            tracep->chgCData(oldp+128,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[6]),8);
            tracep->chgCData(oldp+129,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[7]),8);
            tracep->chgCData(oldp+130,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[8]),8);
            tracep->chgCData(oldp+131,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[9]),8);
            tracep->chgCData(oldp+132,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[10]),8);
            tracep->chgCData(oldp+133,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[11]),8);
            tracep->chgCData(oldp+134,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[12]),8);
            tracep->chgCData(oldp+135,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[13]),8);
            tracep->chgCData(oldp+136,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[14]),8);
            tracep->chgCData(oldp+137,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[15]),8);
            tracep->chgIData(oldp+138,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[0]),32);
            tracep->chgIData(oldp+139,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[1]),32);
            tracep->chgIData(oldp+140,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[2]),32);
            tracep->chgIData(oldp+141,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[3]),32);
            tracep->chgIData(oldp+142,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[4]),32);
            tracep->chgIData(oldp+143,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[5]),32);
            tracep->chgIData(oldp+144,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[6]),32);
            tracep->chgIData(oldp+145,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[7]),32);
            tracep->chgIData(oldp+146,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[8]),32);
            tracep->chgIData(oldp+147,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[9]),32);
            tracep->chgIData(oldp+148,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[10]),32);
            tracep->chgIData(oldp+149,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[11]),32);
            tracep->chgIData(oldp+150,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[12]),32);
            tracep->chgIData(oldp+151,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[13]),32);
            tracep->chgIData(oldp+152,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[14]),32);
            tracep->chgIData(oldp+153,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[15]),32);
            tracep->chgIData(oldp+154,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[16]),32);
            tracep->chgIData(oldp+155,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[17]),32);
            tracep->chgIData(oldp+156,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[18]),32);
            tracep->chgIData(oldp+157,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[19]),32);
            tracep->chgIData(oldp+158,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[20]),32);
            tracep->chgIData(oldp+159,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[21]),32);
            tracep->chgIData(oldp+160,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[22]),32);
            tracep->chgIData(oldp+161,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[23]),32);
            tracep->chgIData(oldp+162,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[24]),32);
            tracep->chgIData(oldp+163,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[25]),32);
            tracep->chgIData(oldp+164,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[26]),32);
            tracep->chgIData(oldp+165,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[27]),32);
            tracep->chgIData(oldp+166,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[28]),32);
            tracep->chgIData(oldp+167,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[29]),32);
            tracep->chgIData(oldp+168,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[30]),32);
            tracep->chgIData(oldp+169,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[31]),32);
            tracep->chgCData(oldp+170,((7U & ((IData)(vlTOPp->ibex_core_cs_reg_i_cpuctrl_d) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+171,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_cpuctrl_d) 
                                            >> 2U))));
            tracep->chgBit(oldp+172,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_cpuctrl_d) 
                                            >> 1U))));
            tracep->chgBit(oldp+173,((1U & (IData)(vlTOPp->ibex_core_cs_reg_i_cpuctrl_d))));
            tracep->chgCData(oldp+174,(vlTOPp->ibex_core_cs_reg_i_cpuctrl_d),6);
            tracep->chgBit(oldp+175,(vlTOPp->ibex_u_core_u_ibex_tracer__trace_log_enable));
            tracep->chgIData(oldp+176,(vlTOPp->ibex_ram_b_wmask),32);
            tracep->chgIData(oldp+177,(vlTOPp->ibex_ram_gen_generic_impl_b_wmask),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+178,(vlTOPp->ibex_simple_system__clk_sys));
            tracep->chgBit(oldp+179,(vlTOPp->ibex_core_clk));
            tracep->chgBit(oldp+180,(vlTOPp->ibex_core_core_clock_gate_i_gen_generic__u_impl_generic__en_latch));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+181,(vlTOPp->ibex_timer_interrupt_q));
            tracep->chgBit(oldp+182,(vlTOPp->ibex_simple_system__host_rvalid[0]));
            tracep->chgBit(oldp+183,(vlTOPp->ibex_device_rvalid[0]));
            tracep->chgBit(oldp+184,(vlTOPp->ibex_device_rvalid[1]));
            tracep->chgBit(oldp+185,(vlTOPp->ibex_device_rvalid[2]));
            tracep->chgBit(oldp+186,(vlTOPp->ibex_simple_system__instr_rvalid));
            tracep->chgBit(oldp+187,(vlTOPp->ibex_Vcellout__u_bus__host_rvalid_o[0]));
            tracep->chgBit(oldp+188,(vlTOPp->ibex_Vcellinp_u_bus__device_rvalid_i[0]));
            tracep->chgBit(oldp+189,(vlTOPp->ibex_Vcellinp_u_bus__device_rvalid_i[1]));
            tracep->chgBit(oldp+190,(vlTOPp->ibex_Vcellinp_u_bus__device_rvalid_i[2]));
            tracep->chgBit(oldp+191,(vlTOPp->ibex_bus_host_sel_resp));
            tracep->chgCData(oldp+192,(vlTOPp->ibex_bus_device_sel_resp),2);
            tracep->chgBit(oldp+193,(vlTOPp->ibex_simple_system__host_rvalid
                                     [0U]));
            tracep->chgBit(oldp+194,(vlTOPp->ibex_core_core_busy_q));
            tracep->chgBit(oldp+195,(vlTOPp->ibex_core_fetch_enable_q));
            tracep->chgBit(oldp+196,((1U & (vlTOPp->ibex_core_cs_reg_i_mip 
                                            >> 0x11U))));
            tracep->chgBit(oldp+197,((1U & (vlTOPp->ibex_core_cs_reg_i_mip 
                                            >> 0x10U))));
            tracep->chgBit(oldp+198,((1U & (vlTOPp->ibex_core_cs_reg_i_mip 
                                            >> 0xfU))));
            tracep->chgSData(oldp+199,((0x7fffU & vlTOPp->ibex_core_cs_reg_i_mip)),15);
            tracep->chgIData(oldp+200,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0U]),32);
            tracep->chgIData(oldp+201,(vlTOPp->ibex_core_gen_reg_file_rf_reg[1U]),32);
            tracep->chgIData(oldp+202,(vlTOPp->ibex_core_gen_reg_file_rf_reg[2U]),32);
            tracep->chgIData(oldp+203,(vlTOPp->ibex_core_gen_reg_file_rf_reg[3U]),32);
            tracep->chgIData(oldp+204,(vlTOPp->ibex_core_gen_reg_file_rf_reg[4U]),32);
            tracep->chgIData(oldp+205,(vlTOPp->ibex_core_gen_reg_file_rf_reg[5U]),32);
            tracep->chgIData(oldp+206,(vlTOPp->ibex_core_gen_reg_file_rf_reg[6U]),32);
            tracep->chgIData(oldp+207,(vlTOPp->ibex_core_gen_reg_file_rf_reg[7U]),32);
            tracep->chgIData(oldp+208,(vlTOPp->ibex_core_gen_reg_file_rf_reg[8U]),32);
            tracep->chgIData(oldp+209,(vlTOPp->ibex_core_gen_reg_file_rf_reg[9U]),32);
            tracep->chgIData(oldp+210,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0xaU]),32);
            tracep->chgIData(oldp+211,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0xbU]),32);
            tracep->chgIData(oldp+212,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0xcU]),32);
            tracep->chgIData(oldp+213,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0xdU]),32);
            tracep->chgIData(oldp+214,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0xeU]),32);
            tracep->chgIData(oldp+215,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0xfU]),32);
            tracep->chgIData(oldp+216,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x10U]),32);
            tracep->chgIData(oldp+217,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x11U]),32);
            tracep->chgIData(oldp+218,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x12U]),32);
            tracep->chgIData(oldp+219,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x13U]),32);
            tracep->chgIData(oldp+220,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x14U]),32);
            tracep->chgIData(oldp+221,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x15U]),32);
            tracep->chgIData(oldp+222,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x16U]),32);
            tracep->chgIData(oldp+223,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x17U]),32);
            tracep->chgIData(oldp+224,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x18U]),32);
            tracep->chgIData(oldp+225,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x19U]),32);
            tracep->chgIData(oldp+226,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x1aU]),32);
            tracep->chgIData(oldp+227,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x1bU]),32);
            tracep->chgIData(oldp+228,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x1cU]),32);
            tracep->chgIData(oldp+229,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x1dU]),32);
            tracep->chgIData(oldp+230,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x1eU]),32);
            tracep->chgIData(oldp+231,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x1fU]),32);
            tracep->chgIData(oldp+232,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0U]),32);
            tracep->chgIData(oldp+233,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[1U]),32);
            tracep->chgIData(oldp+234,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[2U]),32);
            tracep->chgIData(oldp+235,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[3U]),32);
            tracep->chgIData(oldp+236,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[4U]),32);
            tracep->chgIData(oldp+237,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[5U]),32);
            tracep->chgIData(oldp+238,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[6U]),32);
            tracep->chgIData(oldp+239,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[7U]),32);
            tracep->chgIData(oldp+240,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[8U]),32);
            tracep->chgIData(oldp+241,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[9U]),32);
            tracep->chgIData(oldp+242,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0xaU]),32);
            tracep->chgIData(oldp+243,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0xbU]),32);
            tracep->chgIData(oldp+244,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0xcU]),32);
            tracep->chgIData(oldp+245,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0xdU]),32);
            tracep->chgIData(oldp+246,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0xeU]),32);
            tracep->chgIData(oldp+247,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0xfU]),32);
            tracep->chgIData(oldp+248,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x10U]),32);
            tracep->chgIData(oldp+249,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x11U]),32);
            tracep->chgIData(oldp+250,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x12U]),32);
            tracep->chgIData(oldp+251,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x13U]),32);
            tracep->chgIData(oldp+252,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x14U]),32);
            tracep->chgIData(oldp+253,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x15U]),32);
            tracep->chgIData(oldp+254,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x16U]),32);
            tracep->chgIData(oldp+255,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x17U]),32);
            tracep->chgIData(oldp+256,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x18U]),32);
            tracep->chgIData(oldp+257,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x19U]),32);
            tracep->chgIData(oldp+258,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x1aU]),32);
            tracep->chgIData(oldp+259,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x1bU]),32);
            tracep->chgIData(oldp+260,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x1cU]),32);
            tracep->chgIData(oldp+261,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x1dU]),32);
            tracep->chgIData(oldp+262,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x1eU]),32);
            tracep->chgBit(oldp+263,(vlTOPp->ibex_Vcellout__u_ram__a_rvalid_o));
            tracep->chgBit(oldp+264,(vlTOPp->ibex_Vcellout__u_simulator_ctrl__rvalid_o));
            tracep->chgCData(oldp+265,(vlTOPp->ibex_simulator_ctrl__sim_finish),3);
            tracep->chgIData(oldp+266,(vlTOPp->ibex_simulator_ctrl__log_fd),32);
            tracep->chgBit(oldp+267,(vlTOPp->ibex_timer_rvalid_q));
            tracep->chgQData(oldp+268,(vlTOPp->ibex_timer_mtime_q),64);
            tracep->chgQData(oldp+270,((1ULL + vlTOPp->ibex_timer_mtime_q)),64);
            tracep->chgQData(oldp+272,(vlTOPp->ibex_timer_mtimecmp_q),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+274,(vlTOPp->ibex_device_rdata[0]),32);
            tracep->chgIData(oldp+275,(vlTOPp->ibex_device_rdata[1]),32);
            tracep->chgIData(oldp+276,(vlTOPp->ibex_device_rdata[2]),32);
            tracep->chgBit(oldp+277,(vlTOPp->ibex_device_err[0]));
            tracep->chgBit(oldp+278,(vlTOPp->ibex_device_err[1]));
            tracep->chgBit(oldp+279,(vlTOPp->ibex_device_err[2]));
            tracep->chgIData(oldp+280,(vlTOPp->ibex_simple_system__instr_rdata),32);
            tracep->chgIData(oldp+281,(vlTOPp->ibex_Vcellinp_u_bus__device_rdata_i[0]),32);
            tracep->chgIData(oldp+282,(vlTOPp->ibex_Vcellinp_u_bus__device_rdata_i[1]),32);
            tracep->chgIData(oldp+283,(vlTOPp->ibex_Vcellinp_u_bus__device_rdata_i[2]),32);
            tracep->chgBit(oldp+284,(vlTOPp->ibex_Vcellinp_u_bus__device_err_i[0]));
            tracep->chgBit(oldp+285,(vlTOPp->ibex_Vcellinp_u_bus__device_err_i[1]));
            tracep->chgBit(oldp+286,(vlTOPp->ibex_Vcellinp_u_bus__device_err_i[2]));
            tracep->chgIData(oldp+287,(vlTOPp->ibex_u_core_u_ibex_tracer__file_handle),32);
            tracep->chgIData(oldp+288,(vlTOPp->ibex_Vcellout__u_ram__a_rdata_o),32);
            tracep->chgIData(oldp+289,(vlTOPp->ibex_ram_gen_generic_impl_unnamedblk1__i),32);
            tracep->chgIData(oldp+290,(vlTOPp->ibex_timer_rdata_q),32);
            tracep->chgBit(oldp+291,(vlTOPp->ibex_timer_error_q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+292,(vlTOPp->ibex_core_instr_fetch_err));
            tracep->chgBit(oldp+293,(vlTOPp->ibex_core_instr_fetch_err_plus2));
            tracep->chgBit(oldp+294,(vlTOPp->ibex_core_illegal_c_insn_id));
            tracep->chgIData(oldp+295,(vlTOPp->ibex_core_pre_buf_i_stored_addr_q),32);
            tracep->chgIData(oldp+296,(vlTOPp->ibex_core_pre_buf_i_fetch_addr_q),32);
            tracep->chgIData(oldp+297,(vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_q[0U]),32);
            tracep->chgIData(oldp+298,(vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_q[1U]),32);
            tracep->chgIData(oldp+299,(vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_q[2U]),32);
            tracep->chgCData(oldp+300,(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+301,(vlTOPp->ibex_core_rvfi_stage_valid
                                     [0U]));
            tracep->chgQData(oldp+302,(vlTOPp->ibex_core_rvfi_stage_order
                                       [0U]),64);
            tracep->chgIData(oldp+304,(vlTOPp->ibex_core_rvfi_stage_insn
                                       [0U]),32);
            tracep->chgBit(oldp+305,(vlTOPp->ibex_core_rvfi_stage_trap
                                     [0U]));
            tracep->chgBit(oldp+306,(vlTOPp->ibex_core_rvfi_stage_halt
                                     [0U]));
            tracep->chgBit(oldp+307,(vlTOPp->ibex_core_rvfi_stage_intr
                                     [0U]));
            tracep->chgCData(oldp+308,(vlTOPp->ibex_core_rvfi_stage_mode
                                       [0U]),2);
            tracep->chgCData(oldp+309,(vlTOPp->ibex_core_rvfi_stage_ixl
                                       [0U]),2);
            tracep->chgCData(oldp+310,(vlTOPp->ibex_core_rvfi_stage_rs1_addr
                                       [0U]),5);
            tracep->chgCData(oldp+311,(vlTOPp->ibex_core_rvfi_stage_rs2_addr
                                       [0U]),5);
            tracep->chgCData(oldp+312,(vlTOPp->ibex_core_rvfi_stage_rs3_addr
                                       [0U]),5);
            tracep->chgIData(oldp+313,(vlTOPp->ibex_core_rvfi_stage_rs1_rdata
                                       [0U]),32);
            tracep->chgIData(oldp+314,(vlTOPp->ibex_core_rvfi_stage_rs2_rdata
                                       [0U]),32);
            tracep->chgIData(oldp+315,(vlTOPp->ibex_core_rvfi_stage_rs3_rdata
                                       [0U]),32);
            tracep->chgCData(oldp+316,(vlTOPp->ibex_core_rvfi_stage_rd_addr
                                       [0U]),5);
            tracep->chgIData(oldp+317,(vlTOPp->ibex_core_rvfi_stage_rd_wdata
                                       [0U]),32);
            tracep->chgIData(oldp+318,(vlTOPp->ibex_core_rvfi_stage_pc_rdata
                                       [0U]),32);
            tracep->chgIData(oldp+319,(vlTOPp->ibex_core_rvfi_stage_pc_wdata
                                       [0U]),32);
            tracep->chgIData(oldp+320,(vlTOPp->ibex_core_rvfi_stage_mem_addr
                                       [0U]),32);
            tracep->chgCData(oldp+321,(vlTOPp->ibex_core_rvfi_stage_mem_rmask
                                       [0U]),4);
            tracep->chgCData(oldp+322,(vlTOPp->ibex_core_rvfi_stage_mem_wmask
                                       [0U]),4);
            tracep->chgIData(oldp+323,(vlTOPp->ibex_core_rvfi_stage_mem_rdata
                                       [0U]),32);
            tracep->chgIData(oldp+324,(vlTOPp->ibex_core_rvfi_stage_mem_wdata
                                       [0U]),32);
            tracep->chgBit(oldp+325,(vlTOPp->ibex_core_if_stage_i_instr_new_id_q));
            tracep->chgQData(oldp+326,(vlTOPp->ibex_core_imd_val_q_ex[0]),34);
            tracep->chgQData(oldp+328,(vlTOPp->ibex_core_imd_val_q_ex[1]),34);
            tracep->chgBit(oldp+330,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q) 
                                            >> 1U))));
            tracep->chgBit(oldp+331,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q) 
                                            >> 2U))));
            tracep->chgCData(oldp+332,((7U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+333,((1U & (IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q))));
            tracep->chgBit(oldp+334,(vlTOPp->ibex_core_lsu_addr_incr_req));
            tracep->chgIData(oldp+335,(vlTOPp->ibex_core_load_store_unit_i_addr_last_q),32);
            tracep->chgBit(oldp+336,((0U != (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))));
            tracep->chgBit(oldp+337,(vlTOPp->ibex_core_id_stage_i_controller_i_nmi_mode_q));
            tracep->chgBit(oldp+338,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                            >> 5U))));
            tracep->chgIData(oldp+339,(vlTOPp->ibex_core_cs_reg_i_u_mepc_csr__rdata_q),32);
            tracep->chgIData(oldp+340,(vlTOPp->ibex_core_cs_reg_i_u_depc_csr__rdata_q),32);
            tracep->chgIData(oldp+341,(vlTOPp->ibex_core_cs_reg_i_u_mtvec_csr__rdata_q),32);
            tracep->chgBit(oldp+342,((1U & (IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q))));
            tracep->chgCData(oldp+343,(vlTOPp->ibex_core_cs_reg_i_priv_lvl_q),2);
            tracep->chgCData(oldp+344,((3U & ((2U & (IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q))
                                               ? ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                                  >> 2U)
                                               : (IData)(vlTOPp->ibex_core_cs_reg_i_priv_lvl_q)))),2);
            tracep->chgBit(oldp+345,(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q));
            tracep->chgBit(oldp+346,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                            >> 2U))));
            tracep->chgBit(oldp+347,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                            >> 0xfU))));
            tracep->chgBit(oldp+348,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                            >> 0xcU))));
            tracep->chgBit(oldp+349,(vlTOPp->ibex_core_rvfi_intr_q));
            tracep->chgBit(oldp+350,(vlTOPp->ibex_core_rvfi_set_trap_pc_q));
            tracep->chgCData(oldp+351,(vlTOPp->ibex_core_rvfi_rs1_addr_q),5);
            tracep->chgCData(oldp+352,(vlTOPp->ibex_core_rvfi_rs2_addr_q),5);
            tracep->chgIData(oldp+353,(vlTOPp->ibex_core_rvfi_rs1_data_q),32);
            tracep->chgIData(oldp+354,(vlTOPp->ibex_core_rvfi_rs2_data_q),32);
            tracep->chgCData(oldp+355,(vlTOPp->ibex_core_rvfi_rd_addr_q),5);
            tracep->chgIData(oldp+356,(vlTOPp->ibex_core_rvfi_rd_wdata_q),32);
            tracep->chgIData(oldp+357,(vlTOPp->ibex_core_rvfi_mem_rdata_q),32);
            tracep->chgIData(oldp+358,(vlTOPp->ibex_core_rvfi_mem_wdata_q),32);
            tracep->chgIData(oldp+359,(vlTOPp->ibex_core_rvfi_mem_addr_q),32);
            tracep->chgBit(oldp+360,(vlTOPp->ibex_core_rvfi_stage_valid[0]));
            tracep->chgQData(oldp+361,(vlTOPp->ibex_core_rvfi_stage_order[0]),64);
            tracep->chgIData(oldp+363,(vlTOPp->ibex_core_rvfi_stage_insn[0]),32);
            tracep->chgBit(oldp+364,(vlTOPp->ibex_core_rvfi_stage_trap[0]));
            tracep->chgBit(oldp+365,(vlTOPp->ibex_core_rvfi_stage_halt[0]));
            tracep->chgBit(oldp+366,(vlTOPp->ibex_core_rvfi_stage_intr[0]));
            tracep->chgCData(oldp+367,(vlTOPp->ibex_core_rvfi_stage_mode[0]),2);
            tracep->chgCData(oldp+368,(vlTOPp->ibex_core_rvfi_stage_ixl[0]),2);
            tracep->chgCData(oldp+369,(vlTOPp->ibex_core_rvfi_stage_rs1_addr[0]),5);
            tracep->chgCData(oldp+370,(vlTOPp->ibex_core_rvfi_stage_rs2_addr[0]),5);
            tracep->chgCData(oldp+371,(vlTOPp->ibex_core_rvfi_stage_rs3_addr[0]),5);
            tracep->chgIData(oldp+372,(vlTOPp->ibex_core_rvfi_stage_rs1_rdata[0]),32);
            tracep->chgIData(oldp+373,(vlTOPp->ibex_core_rvfi_stage_rs2_rdata[0]),32);
            tracep->chgIData(oldp+374,(vlTOPp->ibex_core_rvfi_stage_rs3_rdata[0]),32);
            tracep->chgCData(oldp+375,(vlTOPp->ibex_core_rvfi_stage_rd_addr[0]),5);
            tracep->chgIData(oldp+376,(vlTOPp->ibex_core_rvfi_stage_rd_wdata[0]),32);
            tracep->chgIData(oldp+377,(vlTOPp->ibex_core_rvfi_stage_pc_rdata[0]),32);
            tracep->chgIData(oldp+378,(vlTOPp->ibex_core_rvfi_stage_pc_wdata[0]),32);
            tracep->chgIData(oldp+379,(vlTOPp->ibex_core_rvfi_stage_mem_addr[0]),32);
            tracep->chgCData(oldp+380,(vlTOPp->ibex_core_rvfi_stage_mem_rmask[0]),4);
            tracep->chgCData(oldp+381,(vlTOPp->ibex_core_rvfi_stage_mem_wmask[0]),4);
            tracep->chgIData(oldp+382,(vlTOPp->ibex_core_rvfi_stage_mem_rdata[0]),32);
            tracep->chgIData(oldp+383,(vlTOPp->ibex_core_rvfi_stage_mem_wdata[0]),32);
            tracep->chgCData(oldp+384,((0xffU & vlTOPp->ibex_core_cs_reg_i_u_mtvec_csr__rdata_q)),8);
            tracep->chgBit(oldp+385,(vlTOPp->ibex_core_pre_buf_i_valid_req_q));
            tracep->chgBit(oldp+386,(vlTOPp->ibex_core_pre_buf_i_discard_req_q));
            tracep->chgCData(oldp+387,(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_q),2);
            tracep->chgCData(oldp+388,(vlTOPp->ibex_core_pre_buf_i_branch_discard_q),2);
            tracep->chgCData(oldp+389,(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_q),2);
            tracep->chgCData(oldp+390,(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_rev),2);
            tracep->chgBit(oldp+391,((1U & (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_q))));
            tracep->chgBit(oldp+392,((1U & (~ (IData)(
                                                      (3U 
                                                       == 
                                                       (3U 
                                                        & (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q) 
                                                            >> 1U) 
                                                           | (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_rev)))))))));
            tracep->chgCData(oldp+393,((3U & ((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q) 
                                              >> 1U))),2);
            tracep->chgCData(oldp+394,(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_d),3);
            tracep->chgCData(oldp+395,(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q),3);
            tracep->chgCData(oldp+396,(vlTOPp->ibex_core_pre_buf_i_fifo_i_lowest_free_entry),3);
            tracep->chgBit(oldp+397,(vlTOPp->ibex_core_pre_buf_i_fifo_i_err));
            tracep->chgQData(oldp+398,(vlTOPp->ibex_core___Vcellout__id_stage_i__imd_val_q_ex_o[0]),34);
            tracep->chgQData(oldp+400,(vlTOPp->ibex_core___Vcellout__id_stage_i__imd_val_q_ex_o[1]),34);
            tracep->chgBit(oldp+402,(((IData)(vlTOPp->ibex_core_id_stage_i_g_branch_set_flop__branch_set_raw_q) 
                                      & (~ (IData)(vlTOPp->ibex_core_id_stage_i_branch_jump_set_done_q)))));
            tracep->chgBit(oldp+403,(vlTOPp->ibex_core_id_stage_i_g_branch_set_flop__branch_set_raw_q));
            tracep->chgBit(oldp+404,(vlTOPp->ibex_core_id_stage_i_branch_set));
            tracep->chgBit(oldp+405,(vlTOPp->ibex_core_id_stage_i_branch_jump_set_done_q));
            tracep->chgQData(oldp+406,(vlTOPp->ibex_core_id_stage_i_imd_val_q[0]),34);
            tracep->chgQData(oldp+408,(vlTOPp->ibex_core_id_stage_i_imd_val_q[1]),34);
            tracep->chgBit(oldp+410,(vlTOPp->ibex_core_id_stage_i_id_fsm_q));
            tracep->chgBit(oldp+411,(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_q));
            tracep->chgBit(oldp+412,(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_q));
            tracep->chgBit(oldp+413,(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_q));
            tracep->chgBit(oldp+414,(vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_q));
            tracep->chgBit(oldp+415,(vlTOPp->ibex_core_id_stage_i_controller_i_enter_debug_mode_q));
            tracep->chgBit(oldp+416,(vlTOPp->ibex_core_id_stage_i_controller_i_ebreak_into_debug));
            tracep->chgQData(oldp+417,(vlTOPp->ibex_core___Vcellinp__ex_block_i__imd_val_q_i[0]),34);
            tracep->chgQData(oldp+419,(vlTOPp->ibex_core___Vcellinp__ex_block_i__imd_val_q_i[1]),34);
            tracep->chgQData(oldp+421,(vlTOPp->ibex_core_ex_block_i_multdiv_alu_operand_a),33);
            tracep->chgIData(oldp+423,(vlTOPp->ibex_core_ex_block_i_alu_imd_val_q[0]),32);
            tracep->chgIData(oldp+424,(vlTOPp->ibex_core_ex_block_i_alu_imd_val_q[1]),32);
            tracep->chgIData(oldp+425,(vlTOPp->ibex_core_ex_block_i___Vcellinp__alu_i__imd_val_q_i[0]),32);
            tracep->chgIData(oldp+426,(vlTOPp->ibex_core_ex_block_i___Vcellinp__alu_i__imd_val_q_i[1]),32);
            tracep->chgIData(oldp+427,(vlTOPp->ibex_core_ex_block_i_alu_i_g_no_alu_rvb__unused_imd_val_q[0]),32);
            tracep->chgIData(oldp+428,(vlTOPp->ibex_core_ex_block_i_alu_i_g_no_alu_rvb__unused_imd_val_q[1]),32);
            tracep->chgQData(oldp+429,(vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i[0]),34);
            tracep->chgQData(oldp+431,(vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i[1]),34);
            tracep->chgIData(oldp+433,(((IData)(1U) 
                                        << (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_counter_q))),32);
            tracep->chgIData(oldp+434,((IData)(vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                               [1U])),32);
            tracep->chgIData(oldp+435,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_numerator_q),32);
            tracep->chgIData(oldp+436,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_quotient_q),32);
            tracep->chgBit(oldp+437,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_valid));
            tracep->chgCData(oldp+438,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_counter_q),5);
            tracep->chgBit(oldp+439,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_hold));
            tracep->chgBit(oldp+440,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_by_zero_q));
            tracep->chgCData(oldp+441,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q),3);
            tracep->chgCData(oldp+442,((3U & (IData)(
                                                     (vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                                      [1U] 
                                                      >> 0x20U)))),2);
            tracep->chgCData(oldp+443,(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q),2);
            tracep->chgIData(oldp+444,(vlTOPp->ibex_core_load_store_unit_i_rdata_q),24);
            tracep->chgCData(oldp+445,(vlTOPp->ibex_core_load_store_unit_i_rdata_offset_q),2);
            tracep->chgCData(oldp+446,(vlTOPp->ibex_core_load_store_unit_i_data_type_q),2);
            tracep->chgBit(oldp+447,(vlTOPp->ibex_core_load_store_unit_i_data_sign_ext_q));
            tracep->chgBit(oldp+448,(vlTOPp->ibex_core_load_store_unit_i_data_we_q));
            tracep->chgBit(oldp+449,(vlTOPp->ibex_core_load_store_unit_i_handle_misaligned_q));
            tracep->chgBit(oldp+450,(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q));
            tracep->chgBit(oldp+451,(vlTOPp->ibex_core_load_store_unit_i_lsu_err_q));
            tracep->chgCData(oldp+452,(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs),3);
            tracep->chgBit(oldp+453,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                            >> 5U))));
            tracep->chgBit(oldp+454,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                            >> 4U))));
            tracep->chgCData(oldp+455,((3U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                              >> 2U))),2);
            tracep->chgBit(oldp+456,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                            >> 1U))));
            tracep->chgBit(oldp+457,((1U & (IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q))));
            tracep->chgBit(oldp+458,((1U & (vlTOPp->ibex_core_cs_reg_i_u_mie_csr__rdata_q 
                                            >> 0x11U))));
            tracep->chgBit(oldp+459,((1U & (vlTOPp->ibex_core_cs_reg_i_u_mie_csr__rdata_q 
                                            >> 0x10U))));
            tracep->chgBit(oldp+460,((1U & (vlTOPp->ibex_core_cs_reg_i_u_mie_csr__rdata_q 
                                            >> 0xfU))));
            tracep->chgSData(oldp+461,((0x7fffU & vlTOPp->ibex_core_cs_reg_i_u_mie_csr__rdata_q)),15);
            tracep->chgIData(oldp+462,(vlTOPp->ibex_core_cs_reg_i_u_mscratch_csr__rdata_q),32);
            tracep->chgCData(oldp+463,(vlTOPp->ibex_core_cs_reg_i_u_mcause_csr__rdata_q),6);
            tracep->chgIData(oldp+464,(vlTOPp->ibex_core_cs_reg_i_u_mtval_csr__rdata_q),32);
            tracep->chgCData(oldp+465,((0xfU & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                                >> 0x1cU))),4);
            tracep->chgSData(oldp+466,((0xfffU & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                                  >> 0x10U))),12);
            tracep->chgBit(oldp+467,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                            >> 0xfU))));
            tracep->chgBit(oldp+468,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                            >> 0xeU))));
            tracep->chgBit(oldp+469,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                            >> 0xdU))));
            tracep->chgBit(oldp+470,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                            >> 0xcU))));
            tracep->chgBit(oldp+471,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                            >> 0xbU))));
            tracep->chgBit(oldp+472,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                            >> 0xaU))));
            tracep->chgBit(oldp+473,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                            >> 9U))));
            tracep->chgCData(oldp+474,((7U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                              >> 6U))),3);
            tracep->chgBit(oldp+475,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                            >> 5U))));
            tracep->chgBit(oldp+476,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                            >> 4U))));
            tracep->chgBit(oldp+477,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                            >> 3U))));
            tracep->chgBit(oldp+478,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                            >> 2U))));
            tracep->chgCData(oldp+479,((3U & vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q)),2);
            tracep->chgIData(oldp+480,(vlTOPp->ibex_core_cs_reg_i_u_dscratch0_csr__rdata_q),32);
            tracep->chgIData(oldp+481,(vlTOPp->ibex_core_cs_reg_i_u_dscratch1_csr__rdata_q),32);
            tracep->chgBit(oldp+482,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstack_csr__rdata_q) 
                                            >> 2U))));
            tracep->chgCData(oldp+483,((3U & (IData)(vlTOPp->ibex_core_cs_reg_i_u_mstack_csr__rdata_q))),2);
            tracep->chgBit(oldp+484,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_mstack_d) 
                                            >> 2U))));
            tracep->chgCData(oldp+485,((3U & (IData)(vlTOPp->ibex_core_cs_reg_i_mstack_d))),2);
            tracep->chgIData(oldp+486,(vlTOPp->ibex_core_cs_reg_i_u_mstack_epc_csr__rdata_q),32);
            tracep->chgCData(oldp+487,(vlTOPp->ibex_core_cs_reg_i_u_mstack_cause_csr__rdata_q),6);
            tracep->chgIData(oldp+488,(vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q),32);
            tracep->chgQData(oldp+489,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0]),64);
            tracep->chgQData(oldp+491,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[1]),64);
            tracep->chgQData(oldp+493,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[2]),64);
            tracep->chgQData(oldp+495,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[3]),64);
            tracep->chgQData(oldp+497,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[4]),64);
            tracep->chgQData(oldp+499,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[5]),64);
            tracep->chgQData(oldp+501,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[6]),64);
            tracep->chgQData(oldp+503,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[7]),64);
            tracep->chgQData(oldp+505,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[8]),64);
            tracep->chgQData(oldp+507,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[9]),64);
            tracep->chgQData(oldp+509,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[10]),64);
            tracep->chgQData(oldp+511,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[11]),64);
            tracep->chgQData(oldp+513,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[12]),64);
            tracep->chgQData(oldp+515,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[13]),64);
            tracep->chgQData(oldp+517,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[14]),64);
            tracep->chgQData(oldp+519,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[15]),64);
            tracep->chgQData(oldp+521,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[16]),64);
            tracep->chgQData(oldp+523,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[17]),64);
            tracep->chgQData(oldp+525,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[18]),64);
            tracep->chgQData(oldp+527,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[19]),64);
            tracep->chgQData(oldp+529,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[20]),64);
            tracep->chgQData(oldp+531,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[21]),64);
            tracep->chgQData(oldp+533,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[22]),64);
            tracep->chgQData(oldp+535,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[23]),64);
            tracep->chgQData(oldp+537,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[24]),64);
            tracep->chgQData(oldp+539,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[25]),64);
            tracep->chgQData(oldp+541,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[26]),64);
            tracep->chgQData(oldp+543,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[27]),64);
            tracep->chgQData(oldp+545,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[28]),64);
            tracep->chgQData(oldp+547,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[29]),64);
            tracep->chgQData(oldp+549,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[30]),64);
            tracep->chgQData(oldp+551,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[31]),64);
            tracep->chgCData(oldp+553,((7U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+554,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q) 
                                            >> 2U))));
            tracep->chgBit(oldp+555,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q) 
                                            >> 1U))));
            tracep->chgBit(oldp+556,((1U & (IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q))));
            tracep->chgCData(oldp+557,(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q),6);
            tracep->chgIData(oldp+558,(vlTOPp->ibex_core_cs_reg_i_u_mie_csr__rdata_q),18);
            tracep->chgIData(oldp+559,(vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q),32);
            tracep->chgCData(oldp+560,(vlTOPp->ibex_core_cs_reg_i_mstack_d),3);
            tracep->chgCData(oldp+561,(vlTOPp->ibex_core_cs_reg_i_u_mstack_csr__rdata_q),3);
            tracep->chgQData(oldp+562,(vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_q),64);
            tracep->chgQData(oldp+564,(vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_q),64);
            tracep->chgCData(oldp+566,(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q),6);
            tracep->chgQData(oldp+567,(vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt),64);
            tracep->chgQData(oldp+569,(vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_q),40);
            tracep->chgQData(oldp+571,(vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt),64);
            tracep->chgQData(oldp+573,(vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_q),40);
            tracep->chgQData(oldp+575,(vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt),64);
            tracep->chgQData(oldp+577,(vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_q),40);
            tracep->chgQData(oldp+579,(vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt),64);
            tracep->chgQData(oldp+581,(vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_q),40);
            tracep->chgQData(oldp+583,(vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt),64);
            tracep->chgQData(oldp+585,(vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_q),40);
            tracep->chgQData(oldp+587,(vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt),64);
            tracep->chgQData(oldp+589,(vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_q),40);
            tracep->chgQData(oldp+591,(vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt),64);
            tracep->chgQData(oldp+593,(vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_q),40);
            tracep->chgQData(oldp+595,(vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt),64);
            tracep->chgQData(oldp+597,(vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_q),40);
            tracep->chgQData(oldp+599,(vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt),64);
            tracep->chgQData(oldp+601,(vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_q),40);
            tracep->chgQData(oldp+603,(vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt),64);
            tracep->chgQData(oldp+605,(vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_q),40);
            tracep->chgQData(oldp+607,(vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt),64);
            tracep->chgQData(oldp+609,(vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_q),40);
            tracep->chgQData(oldp+611,(vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt),64);
            tracep->chgQData(oldp+613,(vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_q),40);
            tracep->chgQData(oldp+615,(vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt),64);
            tracep->chgQData(oldp+617,(vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_q),40);
            tracep->chgQData(oldp+619,(vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt),64);
            tracep->chgQData(oldp+621,(vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_q),40);
            tracep->chgQData(oldp+623,(vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt),64);
            tracep->chgQData(oldp+625,(vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_q),40);
            tracep->chgQData(oldp+627,(vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt),64);
            tracep->chgQData(oldp+629,(vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_q),40);
            tracep->chgQData(oldp+631,(vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt),64);
            tracep->chgQData(oldp+633,(vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_q),40);
            tracep->chgQData(oldp+635,(vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt),64);
            tracep->chgQData(oldp+637,(vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_q),40);
            tracep->chgQData(oldp+639,(vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt),64);
            tracep->chgQData(oldp+641,(vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_q),40);
            tracep->chgQData(oldp+643,(vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt),64);
            tracep->chgQData(oldp+645,(vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_q),40);
            tracep->chgQData(oldp+647,(vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt),64);
            tracep->chgQData(oldp+649,(vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_q),40);
            tracep->chgQData(oldp+651,(vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt),64);
            tracep->chgQData(oldp+653,(vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_q),40);
            tracep->chgQData(oldp+655,(vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt),64);
            tracep->chgQData(oldp+657,(vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_q),40);
            tracep->chgQData(oldp+659,(vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt),64);
            tracep->chgQData(oldp+661,(vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_q),40);
            tracep->chgQData(oldp+663,(vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt),64);
            tracep->chgQData(oldp+665,(vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_q),40);
            tracep->chgQData(oldp+667,(vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt),64);
            tracep->chgQData(oldp+669,(vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_q),40);
            tracep->chgQData(oldp+671,(vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt),64);
            tracep->chgQData(oldp+673,(vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_q),40);
            tracep->chgQData(oldp+675,(vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt),64);
            tracep->chgQData(oldp+677,(vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_q),40);
            tracep->chgQData(oldp+679,(vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt),64);
            tracep->chgQData(oldp+681,(vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_q),40);
            tracep->chgBit(oldp+683,(vlTOPp->ibex_u_core_u_ibex_tracer__insn_is_compressed));
            tracep->chgCData(oldp+684,(vlTOPp->ibex_u_core_u_ibex_tracer__data_accessed),5);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [5U] | vlTOPp->__Vm_traceActivity
                          [9U]) | vlTOPp->__Vm_traceActivity
                         [0xaU]))) {
            tracep->chgBit(oldp+685,((((IData)(vlTOPp->ibex_core_id_stage_i_lsu_req) 
                                       | (0U != (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) 
                                      & (0U == (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_ns)))));
            tracep->chgIData(oldp+686,(((2U & (IData)(vlTOPp->ibex_core_exc_pc_mux_id))
                                         ? 0x100000U
                                         : ((1U & (IData)(vlTOPp->ibex_core_exc_pc_mux_id))
                                             ? ((0xffffff00U 
                                                 & vlTOPp->ibex_core_cs_reg_i_u_mtvec_csr__rdata_q) 
                                                | (0x7cU 
                                                   & ((IData)(vlTOPp->ibex_core_exc_cause) 
                                                      << 2U)))
                                             : (0xffffff00U 
                                                & vlTOPp->ibex_core_cs_reg_i_u_mtvec_csr__rdata_q)))),32);
            tracep->chgBit(oldp+687,(((((IData)(vlTOPp->ibex_core_id_stage_i_g_branch_set_flop__branch_set_raw_q) 
                                        | (IData)(vlTOPp->ibex_core_id_stage_i_jump_set_raw)) 
                                       | (IData)(vlTOPp->ibex_core_id_stage_i_branch_jump_set_done_q)) 
                                      & (~ (IData)(vlTOPp->ibex_core_instr_valid_clear)))));
            tracep->chgBit(oldp+688,((((IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec) 
                                       & (~ (IData)(vlTOPp->ibex_core_id_stage_i_id_fsm_q))) 
                                      & (IData)(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_result))));
            tracep->chgBit(oldp+689,((((IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec) 
                                       & (~ (IData)(vlTOPp->ibex_core_id_stage_i_id_fsm_q))) 
                                      & (~ (IData)(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_result)))));
            tracep->chgIData(oldp+690,(((IData)(vlTOPp->ibex_core_div_sel_ex)
                                         ? (IData)(
                                                   vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                                   [0U])
                                         : (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mac_res_d))),32);
            tracep->chgQData(oldp+691,(((IData)(vlTOPp->ibex_core_ex_block_i_multdiv_sel)
                                         ? vlTOPp->ibex_core_ex_block_i_multdiv_alu_operand_a
                                         : (1ULL | 
                                            ((QData)((IData)(vlTOPp->ibex_core_id_stage_i_alu_operand_a)) 
                                             << 1U)))),33);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [5U] | vlTOPp->__Vm_traceActivity
                         [0xaU]))) {
            tracep->chgBit(oldp+693,(((0U != (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_q)) 
                                      | (IData)(vlTOPp->ibex_core_pre_buf_i_valid_req))));
            tracep->chgBit(oldp+694,((((IData)(vlTOPp->ibex_core_ctrl_busy) 
                                       | ((0U != (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_q)) 
                                          | (IData)(vlTOPp->ibex_core_pre_buf_i_valid_req))) 
                                      | (0U != (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs)))));
            tracep->chgBit(oldp+695,((((IData)(vlTOPp->ibex_core_pre_buf_i_valid_new_req) 
                                       & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_valid_req_q))) 
                                      & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_gnt_or_pmp_err)))));
            tracep->chgBit(oldp+696,(((IData)(vlTOPp->ibex_core_pc_set) 
                                      | ((IData)(vlTOPp->ibex_core_pre_buf_i_valid_new_req) 
                                         & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_valid_req_q))))));
            tracep->chgBit(oldp+697,((((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_sign_a) 
                                       ^ (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_sign_b)) 
                                      & (~ (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_by_zero_q)))));
            tracep->chgIData(oldp+698,(((IData)(vlTOPp->ibex_core_cs_reg_i_mcountinhibit_we)
                                         ? (0xfffffffdU 
                                            & vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)
                                         : vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q)),32);
            tracep->chgBit(oldp+699,(((3U & ((IData)(vlTOPp->ibex_core_csr_addr) 
                                             >> 8U)) 
                                      > (IData)(vlTOPp->ibex_core_cs_reg_i_priv_lvl_q))));
            tracep->chgBit(oldp+700,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                            & (~ vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q)))));
            tracep->chgBit(oldp+701,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 2U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 2U))))));
            tracep->chgBit(oldp+702,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 3U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 3U))))));
            tracep->chgBit(oldp+703,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 4U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 4U))))));
            tracep->chgBit(oldp+704,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 5U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 5U))))));
            tracep->chgBit(oldp+705,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 6U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 6U))))));
            tracep->chgBit(oldp+706,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 7U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 7U))))));
            tracep->chgBit(oldp+707,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 8U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 8U))))));
            tracep->chgBit(oldp+708,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 9U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 9U))))));
            tracep->chgBit(oldp+709,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0xaU) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+710,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0xbU) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+711,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0xcU) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+712,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0xdU) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0xdU))))));
            tracep->chgBit(oldp+713,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0xeU) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+714,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0xfU) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0xfU))))));
            tracep->chgBit(oldp+715,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0x10U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0x10U))))));
            tracep->chgBit(oldp+716,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0x11U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0x11U))))));
            tracep->chgBit(oldp+717,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0x12U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+718,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0x13U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0x13U))))));
            tracep->chgBit(oldp+719,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0x14U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0x14U))))));
            tracep->chgBit(oldp+720,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0x15U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0x15U))))));
            tracep->chgBit(oldp+721,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0x16U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0x16U))))));
            tracep->chgBit(oldp+722,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0x17U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0x17U))))));
            tracep->chgBit(oldp+723,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0x18U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0x18U))))));
            tracep->chgBit(oldp+724,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0x19U) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+725,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0x1aU) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+726,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0x1bU) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0x1bU))))));
            tracep->chgBit(oldp+727,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0x1cU) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0x1cU))))));
            tracep->chgBit(oldp+728,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0x1dU) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0x1dU))))));
            tracep->chgBit(oldp+729,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0x1eU) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+730,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 0x1fU) 
                                            & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                                  >> 0x1fU))))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgIData(oldp+731,(vlTOPp->ibex_simple_system__host_rdata[0]),32);
            tracep->chgBit(oldp+732,(vlTOPp->ibex_simple_system__host_err[0]));
            tracep->chgIData(oldp+733,(vlTOPp->ibex_Vcellout__u_bus__host_rdata_o[0]),32);
            tracep->chgBit(oldp+734,(vlTOPp->ibex_Vcellout__u_bus__host_err_o[0]));
            tracep->chgIData(oldp+735,(vlTOPp->ibex_simple_system__host_rdata
                                       [0U]),32);
            tracep->chgBit(oldp+736,(vlTOPp->ibex_simple_system__host_err
                                     [0U]));
            tracep->chgIData(oldp+737,(vlTOPp->ibex_u_core_u_ibex_tracer__cycle),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgIData(oldp+738,(vlTOPp->ibex_core_instr_rdata_id),32);
            tracep->chgSData(oldp+739,(vlTOPp->ibex_core_instr_rdata_c_id),16);
            tracep->chgBit(oldp+740,(vlTOPp->ibex_core_instr_is_compressed_id));
            tracep->chgIData(oldp+741,((vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q 
                                        << 1U)),32);
            tracep->chgIData(oldp+742,(vlTOPp->ibex_core_pc_id),32);
            tracep->chgCData(oldp+743,((0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+744,((0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+745,((0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                                                 >> 7U))),5);
            tracep->chgIData(oldp+746,(((IData)(vlTOPp->ibex_core_instr_is_compressed_id)
                                         ? (IData)(vlTOPp->ibex_core_instr_rdata_c_id)
                                         : vlTOPp->ibex_core_instr_rdata_id)),32);
            tracep->chgIData(oldp+747,(vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q),31);
            tracep->chgIData(oldp+748,(((0xfffff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->ibex_core_instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                                        | (0xfffU & 
                                           (vlTOPp->ibex_core_instr_rdata_id 
                                            >> 0x14U)))),32);
            tracep->chgIData(oldp+749,(((0xfffff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->ibex_core_instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                                        | ((0xfe0U 
                                            & (vlTOPp->ibex_core_instr_rdata_id 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlTOPp->ibex_core_instr_rdata_id 
                                                 >> 7U))))),32);
            tracep->chgIData(oldp+750,(((0xffffe000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->ibex_core_instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0xdU)) 
                                        | ((0x1000U 
                                            & (vlTOPp->ibex_core_instr_rdata_id 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (vlTOPp->ibex_core_instr_rdata_id 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlTOPp->ibex_core_instr_rdata_id 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlTOPp->ibex_core_instr_rdata_id 
                                                       >> 7U))))))),32);
            tracep->chgIData(oldp+751,((0xfffff000U 
                                        & vlTOPp->ibex_core_instr_rdata_id)),32);
            tracep->chgIData(oldp+752,(((0xfff00000U 
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
                                                    >> 0x14U)))))),32);
            tracep->chgIData(oldp+753,((0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                                                 >> 0xfU))),32);
            tracep->chgSData(oldp+754,(((0x3e0U & (vlTOPp->ibex_core_instr_rdata_id 
                                                   >> 0xaU)) 
                                        | (0x1fU & 
                                           (vlTOPp->ibex_core_instr_rdata_id 
                                            >> 7U)))),10);
            tracep->chgCData(oldp+755,((0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                                                 >> 0x1bU))),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgBit(oldp+756,(vlTOPp->ibex_core_lsu_load_err));
            tracep->chgBit(oldp+757,(vlTOPp->ibex_core_lsu_store_err));
            tracep->chgIData(oldp+758,(vlTOPp->ibex_core_rf_rdata_a_ecc),32);
            tracep->chgIData(oldp+759,(vlTOPp->ibex_core_rf_rdata_b_ecc),32);
            tracep->chgIData(oldp+760,(vlTOPp->ibex_core_load_store_unit_i_data_rdata_ext),32);
            tracep->chgBit(oldp+761,(vlTOPp->ibex_core_rf_we_lsu));
            tracep->chgBit(oldp+762,(vlTOPp->ibex_core_lsu_resp_valid));
            tracep->chgBit(oldp+763,(((IData)(vlTOPp->ibex_core_lsu_load_err) 
                                      | (IData)(vlTOPp->ibex_core_lsu_store_err))));
            tracep->chgBit(oldp+764,((0U != vlTOPp->ibex_core_irqs)));
            tracep->chgBit(oldp+765,((1U & (vlTOPp->ibex_core_irqs 
                                            >> 0x11U))));
            tracep->chgBit(oldp+766,((1U & (vlTOPp->ibex_core_irqs 
                                            >> 0x10U))));
            tracep->chgBit(oldp+767,((1U & (vlTOPp->ibex_core_irqs 
                                            >> 0xfU))));
            tracep->chgSData(oldp+768,((0x7fffU & vlTOPp->ibex_core_irqs)),15);
            tracep->chgIData(oldp+769,(vlTOPp->ibex_core_rvfi_mem_rdata_d),32);
            tracep->chgBit(oldp+770,(vlTOPp->ibex_core_pre_buf_i_valid_raw));
            tracep->chgIData(oldp+771,(vlTOPp->ibex_core_if_stage_i_fetch_rdata),32);
            tracep->chgBit(oldp+772,(vlTOPp->ibex_core_if_stage_i_fetch_err));
            tracep->chgIData(oldp+773,(vlTOPp->ibex_core_if_stage_i_instr_decompressed),32);
            tracep->chgBit(oldp+774,((3U != (3U & vlTOPp->ibex_core_if_stage_i_fetch_rdata))));
            tracep->chgBit(oldp+775,(vlTOPp->ibex_core_if_stage_i_illegal_c_insn));
            tracep->chgBit(oldp+776,(((IData)(vlTOPp->ibex_core_pre_buf_i_valid_raw) 
                                      & (~ (IData)(vlTOPp->ibex_core_if_stage_i_fetch_err)))));
            tracep->chgBit(oldp+777,(vlTOPp->ibex_core_pre_buf_i_rvalid_or_pmp_err));
            tracep->chgBit(oldp+778,(vlTOPp->ibex_core_pre_buf_i_fifo_valid));
            tracep->chgCData(oldp+779,(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_pushed),3);
            tracep->chgIData(oldp+780,(vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata),32);
            tracep->chgBit(oldp+781,(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid));
            tracep->chgBit(oldp+782,(vlTOPp->ibex_core_pre_buf_i_fifo_i_aligned_is_compressed));
            tracep->chgBit(oldp+783,(vlTOPp->ibex_core_pre_buf_i_fifo_i_unaligned_is_compressed));
            tracep->chgBit(oldp+784,(vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two));
            tracep->chgBit(oldp+785,(((IData)(vlTOPp->ibex_core_lsu_store_err) 
                                      | (IData)(vlTOPp->ibex_core_lsu_load_err))));
            tracep->chgBit(oldp+786,(vlTOPp->ibex_core_id_stage_i_controller_i_handle_irq));
            tracep->chgCData(oldp+787,(((0x4000U & vlTOPp->ibex_core_irqs)
                                         ? 0xeU : (
                                                   (0x2000U 
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
                                                                : 0U))))))))))))))),4);
            tracep->chgBit(oldp+788,((1U & (vlTOPp->ibex_core_irqs 
                                            >> 0x10U))));
            tracep->chgQData(oldp+789,(vlTOPp->ibex_core_ex_block_i_multdiv_alu_operand_b),33);
            tracep->chgSData(oldp+791,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_a),16);
            tracep->chgSData(oldp+792,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_b),16);
            tracep->chgBit(oldp+793,(vlTOPp->ibex_core_load_store_unit_i_rdata_update));
            tracep->chgIData(oldp+794,(vlTOPp->ibex_core_load_store_unit_i_rdata_h_ext),32);
            tracep->chgIData(oldp+795,(vlTOPp->ibex_core_load_store_unit_i_rdata_b_ext),32);
            tracep->chgBit(oldp+796,(vlTOPp->ibex_core_load_store_unit_i_data_or_pmp_err));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [8U] | vlTOPp->__Vm_traceActivity
                         [0xaU]))) {
            tracep->chgIData(oldp+797,(((1U & (IData)(
                                                      (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                       >> 2U)))
                                         ? ((1U & (IData)(
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
                                         : ((1U & (IData)(
                                                          (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                           >> 1U)))
                                             ? ((0xffffff00U 
                                                 & (vlTOPp->ibex_core_rf_rdata_b_ecc 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (vlTOPp->ibex_core_rf_rdata_b_ecc 
                                                      >> 0x18U)))
                                             : vlTOPp->ibex_core_rf_rdata_b_ecc))),32);
            tracep->chgBit(oldp+798,((0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we))));
            tracep->chgIData(oldp+799,(((0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we))
                                         ? vlTOPp->ibex_core_rf_wdata_wb
                                         : vlTOPp->ibex_core_load_store_unit_i_data_rdata_ext)),32);
            tracep->chgCData(oldp+800,(((IData)(vlTOPp->ibex_core_pre_buf_i_rvalid_or_pmp_err)
                                         ? (1U & ((IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_n) 
                                                  >> 1U))
                                         : (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_n))),2);
            tracep->chgCData(oldp+801,(((IData)(vlTOPp->ibex_core_pre_buf_i_rvalid_or_pmp_err)
                                         ? (1U & ((IData)(vlTOPp->ibex_core_pre_buf_i_branch_discard_n) 
                                                  >> 1U))
                                         : (IData)(vlTOPp->ibex_core_pre_buf_i_branch_discard_n))),2);
            tracep->chgCData(oldp+802,(((IData)(vlTOPp->ibex_core_pre_buf_i_rvalid_or_pmp_err)
                                         ? (1U & ((IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_n) 
                                                  >> 1U))
                                         : (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_n))),2);
            tracep->chgCData(oldp+803,(vlTOPp->ibex_core_pre_buf_i_fifo_i_entry_en),3);
            tracep->chgBit(oldp+804,(((IData)(vlTOPp->ibex_core_pc_set) 
                                      | ((IData)(vlTOPp->ibex_core_id_in_ready) 
                                         & (IData)(vlTOPp->ibex_core_pre_buf_i_valid_raw)))));
            tracep->chgIData(oldp+805,(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux[0]),32);
            tracep->chgIData(oldp+806,(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux[1]),32);
            tracep->chgCData(oldp+807,(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            tracep->chgBit(oldp+808,(vlTOPp->ibex_simple_system__host_req[0]));
            tracep->chgBit(oldp+809,(vlTOPp->ibex_simple_system__host_gnt[0]));
            tracep->chgBit(oldp+810,(vlTOPp->ibex_simple_system__host_we[0]));
            tracep->chgBit(oldp+811,(vlTOPp->ibex_Vcellinp_u_bus__host_req_i[0]));
            tracep->chgBit(oldp+812,(vlTOPp->ibex_Vcellout__u_bus__host_gnt_o[0]));
            tracep->chgBit(oldp+813,(vlTOPp->ibex_Vcellinp_u_bus__host_we_i[0]));
            tracep->chgBit(oldp+814,(vlTOPp->ibex_bus_host_sel_req));
            tracep->chgBit(oldp+815,(((IData)(vlTOPp->ibex_core_data_req_out) 
                                      & (~ vlTOPp->ibex_core_pmp_req_err
                                         [1U]))));
            tracep->chgBit(oldp+816,(vlTOPp->ibex_simple_system__host_gnt
                                     [0U]));
            tracep->chgBit(oldp+817,(vlTOPp->ibex_core_id_stage_i_lsu_we));
            tracep->chgIData(oldp+818,(vlTOPp->ibex_u_core_crash_dump_o[3U]),32);
            tracep->chgIData(oldp+819,(vlTOPp->ibex_u_core_crash_dump_o[2U]),32);
            tracep->chgIData(oldp+820,(vlTOPp->ibex_u_core_crash_dump_o[1U]),32);
            tracep->chgIData(oldp+821,(vlTOPp->ibex_u_core_crash_dump_o[0U]),32);
            tracep->chgBit(oldp+822,(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q));
            tracep->chgCData(oldp+823,(vlTOPp->ibex_core_imd_val_we_ex),2);
            tracep->chgBit(oldp+824,(vlTOPp->ibex_core_icache_inval));
            tracep->chgBit(oldp+825,(vlTOPp->ibex_core_id_stage_i_instr_first_cycle));
            tracep->chgCData(oldp+826,(vlTOPp->ibex_core_pc_mux_id),3);
            tracep->chgCData(oldp+827,(vlTOPp->ibex_core_exc_pc_mux_id),2);
            tracep->chgBit(oldp+828,(vlTOPp->ibex_core_id_stage_i_rf_ren_a));
            tracep->chgBit(oldp+829,(vlTOPp->ibex_core_id_stage_i_rf_ren_b));
            tracep->chgCData(oldp+830,(vlTOPp->ibex_core_id_stage_i_alu_operator),6);
            tracep->chgBit(oldp+831,(((IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec) 
                                      & (IData)(vlTOPp->ibex_core_id_stage_i_mult_en_dec))));
            tracep->chgBit(oldp+832,(((IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec) 
                                      & (IData)(vlTOPp->ibex_core_id_stage_i_div_en_dec))));
            tracep->chgBit(oldp+833,(vlTOPp->ibex_core_mult_sel_ex));
            tracep->chgBit(oldp+834,(vlTOPp->ibex_core_div_sel_ex));
            tracep->chgCData(oldp+835,(vlTOPp->ibex_core_id_stage_i_multdiv_operator),2);
            tracep->chgCData(oldp+836,(vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode),2);
            tracep->chgBit(oldp+837,(vlTOPp->ibex_core_csr_access));
            tracep->chgCData(oldp+838,(vlTOPp->ibex_core_csr_op),2);
            tracep->chgCData(oldp+839,(vlTOPp->ibex_core_id_stage_i_lsu_type),2);
            tracep->chgBit(oldp+840,(vlTOPp->ibex_core_id_stage_i_lsu_sign_ext));
            tracep->chgBit(oldp+841,(vlTOPp->ibex_core_id_stage_i_lsu_req));
            tracep->chgBit(oldp+842,(vlTOPp->ibex_core_ex_valid));
            tracep->chgBit(oldp+843,(vlTOPp->ibex_core_instr_req_int));
            tracep->chgBit(oldp+844,(vlTOPp->ibex_core_data_req_out));
            tracep->chgBit(oldp+845,(vlTOPp->ibex_core_csr_save_id));
            tracep->chgBit(oldp+846,(vlTOPp->ibex_core_csr_restore_mret_id));
            tracep->chgBit(oldp+847,(vlTOPp->ibex_core_csr_restore_dret_id));
            tracep->chgIData(oldp+848,(vlTOPp->ibex_core_csr_mtval),32);
            tracep->chgCData(oldp+849,(vlTOPp->ibex_core_debug_cause),3);
            tracep->chgBit(oldp+850,(vlTOPp->ibex_core_debug_csr_save));
            tracep->chgBit(oldp+851,(vlTOPp->ibex_core_perf_jump));
            tracep->chgBit(oldp+852,(vlTOPp->ibex_core_perf_branch));
            tracep->chgBit(oldp+853,(vlTOPp->ibex_core_perf_tbranch));
            tracep->chgBit(oldp+854,(vlTOPp->ibex_core_perf_load));
            tracep->chgBit(oldp+855,(vlTOPp->ibex_core_perf_store));
            tracep->chgBit(oldp+856,(vlTOPp->ibex_core_rvfi_intr_d));
            tracep->chgCData(oldp+857,(vlTOPp->ibex_core_rvfi_rs1_addr_d),5);
            tracep->chgCData(oldp+858,(vlTOPp->ibex_core_rvfi_rs2_addr_d),5);
            tracep->chgCData(oldp+859,(vlTOPp->ibex_core_rvfi_mem_mask_int),4);
            tracep->chgBit(oldp+860,(vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn));
            tracep->chgBit(oldp+861,(vlTOPp->ibex_core_id_stage_i_ebrk_insn));
            tracep->chgBit(oldp+862,(vlTOPp->ibex_core_id_stage_i_mret_insn_dec));
            tracep->chgBit(oldp+863,(vlTOPp->ibex_core_id_stage_i_dret_insn_dec));
            tracep->chgBit(oldp+864,(vlTOPp->ibex_core_id_stage_i_ecall_insn_dec));
            tracep->chgBit(oldp+865,(vlTOPp->ibex_core_id_stage_i_wfi_insn_dec));
            tracep->chgBit(oldp+866,(vlTOPp->ibex_core_id_stage_i_branch_in_dec));
            tracep->chgBit(oldp+867,(vlTOPp->ibex_core_id_stage_i_jump_in_dec));
            tracep->chgBit(oldp+868,(vlTOPp->ibex_core_id_stage_i_jump_set_dec));
            tracep->chgBit(oldp+869,(vlTOPp->ibex_core_id_stage_i_jump_set));
            tracep->chgBit(oldp+870,(vlTOPp->ibex_core_id_stage_i_jump_set_raw));
            tracep->chgBit(oldp+871,(vlTOPp->ibex_core_id_stage_i_instr_executing_spec));
            tracep->chgBit(oldp+872,(vlTOPp->ibex_core_id_stage_i_controller_run));
            tracep->chgBit(oldp+873,(vlTOPp->ibex_core_id_stage_i_controller_i_flush_id));
            tracep->chgIData(oldp+874,(vlTOPp->ibex_core_id_stage_i_imm_b),32);
            tracep->chgBit(oldp+875,(vlTOPp->ibex_core_id_stage_i_rf_wdata_sel));
            tracep->chgBit(oldp+876,(vlTOPp->ibex_core_id_stage_i_decoder_i_rf_we));
            tracep->chgBit(oldp+877,(vlTOPp->ibex_core_id_stage_i_rf_we_raw));
            tracep->chgCData(oldp+878,(vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel),2);
            tracep->chgCData(oldp+879,(vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec),2);
            tracep->chgBit(oldp+880,(vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec));
            tracep->chgBit(oldp+881,(vlTOPp->ibex_core_id_stage_i_imm_a_mux_sel));
            tracep->chgCData(oldp+882,(vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel),3);
            tracep->chgCData(oldp+883,(vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel_dec),3);
            tracep->chgBit(oldp+884,(vlTOPp->ibex_core_id_stage_i_mult_en_dec));
            tracep->chgBit(oldp+885,(vlTOPp->ibex_core_id_stage_i_div_en_dec));
            tracep->chgBit(oldp+886,(vlTOPp->ibex_core_id_stage_i_multdiv_en_dec));
            tracep->chgBit(oldp+887,(vlTOPp->ibex_core_id_stage_i_lsu_req_dec));
            tracep->chgBit(oldp+888,(vlTOPp->ibex_core_id_stage_i_decoder_i_csr_illegal));
            tracep->chgCData(oldp+889,(vlTOPp->ibex_core_id_stage_i_decoder_i_csr_op),2);
            tracep->chgCData(oldp+890,(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode),7);
            tracep->chgCData(oldp+891,(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu),7);
            tracep->chgCData(oldp+892,(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs),4);
            tracep->chgBit(oldp+893,(vlTOPp->ibex_core_id_stage_i_controller_i_nmi_mode_d));
            tracep->chgBit(oldp+894,(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_d));
            tracep->chgBit(oldp+895,(vlTOPp->ibex_core_id_stage_i_controller_i_instr_fetch_err_prio));
            tracep->chgBit(oldp+896,(vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_prio));
            tracep->chgBit(oldp+897,(vlTOPp->ibex_core_id_stage_i_controller_i_ecall_insn_prio));
            tracep->chgBit(oldp+898,(vlTOPp->ibex_core_id_stage_i_controller_i_ebrk_insn_prio));
            tracep->chgBit(oldp+899,(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_prio));
            tracep->chgBit(oldp+900,(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_prio));
            tracep->chgBit(oldp+901,(vlTOPp->ibex_core_id_stage_i_controller_i_enter_debug_mode_d));
            tracep->chgBit(oldp+902,(vlTOPp->ibex_core_id_stage_i_controller_i_ecall_insn));
            tracep->chgBit(oldp+903,(vlTOPp->ibex_core_id_stage_i_controller_i_mret_insn));
            tracep->chgBit(oldp+904,(vlTOPp->ibex_core_id_stage_i_controller_i_dret_insn));
            tracep->chgBit(oldp+905,(vlTOPp->ibex_core_id_stage_i_controller_i_wfi_insn));
            tracep->chgBit(oldp+906,(vlTOPp->ibex_core_id_stage_i_controller_i_ebrk_insn));
            tracep->chgBit(oldp+907,(vlTOPp->ibex_core_id_stage_i_controller_i_instr_fetch_err));
            tracep->chgBit(oldp+908,(vlTOPp->ibex_core_ex_block_i_multdiv_sel));
            tracep->chgCData(oldp+909,(vlTOPp->ibex_core_ex_block_i_multdiv_imd_val_we),2);
            tracep->chgBit(oldp+910,(vlTOPp->ibex_core_ex_block_i_alu_i_adder_op_b_negate));
            tracep->chgBit(oldp+911,(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_signed));
            tracep->chgBit(oldp+912,(vlTOPp->ibex_core_ex_block_i_alu_i_shift_left));
            tracep->chgBit(oldp+913,((8U == (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))));
            tracep->chgBit(oldp+914,(((3U == (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator)) 
                                      | (6U == (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator)))));
            tracep->chgBit(oldp+915,(((4U == (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator)) 
                                      | (7U == (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator)))));
            tracep->chgQData(oldp+916,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum),34);
            tracep->chgBit(oldp+918,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_valid));
            tracep->chgBit(oldp+919,((0U != (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode))));
            tracep->chgBit(oldp+920,(((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_en_internal) 
                                      | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_en_internal))));
            tracep->chgBit(oldp+921,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_hold));
            tracep->chgBit(oldp+922,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_en_internal));
            tracep->chgBit(oldp+923,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_en_internal));
            tracep->chgCData(oldp+924,(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_d),2);
            tracep->chgBit(oldp+925,(vlTOPp->ibex_core_load_store_unit_i_ctrl_update));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [9U] | vlTOPp->__Vm_traceActivity
                         [0xaU]))) {
            tracep->chgIData(oldp+926,(((IData)(vlTOPp->ibex_core_id_stage_i_rf_wdata_sel)
                                         ? ((IData)(vlTOPp->ibex_core_id_stage_i_rf_wdata_sel)
                                             ? vlTOPp->ibex_core_cs_reg_i_csr_rdata_int
                                             : vlTOPp->ibex_core_result_ex)
                                         : vlTOPp->ibex_core_result_ex)),32);
            tracep->chgBit(oldp+927,((((IData)(vlTOPp->ibex_core_id_stage_i_rf_we_raw) 
                                       & (IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec)) 
                                      & (~ (IData)(vlTOPp->ibex_core_illegal_csr_insn_id)))));
            tracep->chgBit(oldp+928,(((IData)(vlTOPp->ibex_core_id_in_ready) 
                                      & (~ (IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q)))));
            tracep->chgBit(oldp+929,(((IData)(vlTOPp->ibex_core_id_stage_i_stall_multdiv) 
                                      & (IData)(vlTOPp->ibex_core_id_stage_i_mult_en_dec))));
            tracep->chgBit(oldp+930,(((IData)(vlTOPp->ibex_core_id_stage_i_stall_multdiv) 
                                      & (IData)(vlTOPp->ibex_core_id_stage_i_div_en_dec))));
            tracep->chgBit(oldp+931,(((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_wfi_insn) 
                                      | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_csr_pipe_flush))));
            tracep->chgBit(oldp+932,(((7U != (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)) 
                                      & (7U == (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns)))));
            tracep->chgBit(oldp+933,(((8U != (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)) 
                                      & (8U == (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns)))));
            tracep->chgBit(oldp+934,(((9U != (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)) 
                                      & (9U == (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns)))));
            tracep->chgBit(oldp+935,(((6U != (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)) 
                                      & (6U == (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns)))));
            tracep->chgBit(oldp+936,((1U & ((0x80000000U 
                                             & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                                                ^ vlTOPp->ibex_core_id_stage_i_alu_operand_b))
                                             ? ((vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                                                 >> 0x1fU) 
                                                ^ (IData)(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_signed))
                                             : (~ (IData)(
                                                          (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                           >> 0x20U)))))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xaU])) {
            tracep->chgIData(oldp+937,(vlTOPp->ibex_simple_system__host_addr[0]),32);
            tracep->chgCData(oldp+938,(vlTOPp->ibex_simple_system__host_be[0]),4);
            tracep->chgIData(oldp+939,(vlTOPp->ibex_simple_system__host_wdata[0]),32);
            tracep->chgBit(oldp+940,(vlTOPp->ibex_device_req[0]));
            tracep->chgBit(oldp+941,(vlTOPp->ibex_device_req[1]));
            tracep->chgBit(oldp+942,(vlTOPp->ibex_device_req[2]));
            tracep->chgIData(oldp+943,(vlTOPp->ibex_device_addr[0]),32);
            tracep->chgIData(oldp+944,(vlTOPp->ibex_device_addr[1]),32);
            tracep->chgIData(oldp+945,(vlTOPp->ibex_device_addr[2]),32);
            tracep->chgBit(oldp+946,(vlTOPp->ibex_device_we[0]));
            tracep->chgBit(oldp+947,(vlTOPp->ibex_device_we[1]));
            tracep->chgBit(oldp+948,(vlTOPp->ibex_device_we[2]));
            tracep->chgCData(oldp+949,(vlTOPp->ibex_device_be[0]),4);
            tracep->chgCData(oldp+950,(vlTOPp->ibex_device_be[1]),4);
            tracep->chgCData(oldp+951,(vlTOPp->ibex_device_be[2]),4);
            tracep->chgIData(oldp+952,(vlTOPp->ibex_device_wdata[0]),32);
            tracep->chgIData(oldp+953,(vlTOPp->ibex_device_wdata[1]),32);
            tracep->chgIData(oldp+954,(vlTOPp->ibex_device_wdata[2]),32);
            tracep->chgBit(oldp+955,(vlTOPp->ibex_simple_system__instr_req));
            tracep->chgIData(oldp+956,((0xfffffffcU 
                                        & vlTOPp->ibex_core_pre_buf_i_instr_addr)),32);
            tracep->chgIData(oldp+957,(vlTOPp->ibex_Vcellinp_u_bus__host_addr_i[0]),32);
            tracep->chgCData(oldp+958,(vlTOPp->ibex_Vcellinp_u_bus__host_be_i[0]),4);
            tracep->chgIData(oldp+959,(vlTOPp->ibex_Vcellinp_u_bus__host_wdata_i[0]),32);
            tracep->chgBit(oldp+960,(vlTOPp->ibex_Vcellout__u_bus__device_req_o[0]));
            tracep->chgBit(oldp+961,(vlTOPp->ibex_Vcellout__u_bus__device_req_o[1]));
            tracep->chgBit(oldp+962,(vlTOPp->ibex_Vcellout__u_bus__device_req_o[2]));
            tracep->chgIData(oldp+963,(vlTOPp->ibex_Vcellout__u_bus__device_addr_o[0]),32);
            tracep->chgIData(oldp+964,(vlTOPp->ibex_Vcellout__u_bus__device_addr_o[1]),32);
            tracep->chgIData(oldp+965,(vlTOPp->ibex_Vcellout__u_bus__device_addr_o[2]),32);
            tracep->chgBit(oldp+966,(vlTOPp->ibex_Vcellout__u_bus__device_we_o[0]));
            tracep->chgBit(oldp+967,(vlTOPp->ibex_Vcellout__u_bus__device_we_o[1]));
            tracep->chgBit(oldp+968,(vlTOPp->ibex_Vcellout__u_bus__device_we_o[2]));
            tracep->chgCData(oldp+969,(vlTOPp->ibex_Vcellout__u_bus__device_be_o[0]),4);
            tracep->chgCData(oldp+970,(vlTOPp->ibex_Vcellout__u_bus__device_be_o[1]),4);
            tracep->chgCData(oldp+971,(vlTOPp->ibex_Vcellout__u_bus__device_be_o[2]),4);
            tracep->chgIData(oldp+972,(vlTOPp->ibex_Vcellout__u_bus__device_wdata_o[0]),32);
            tracep->chgIData(oldp+973,(vlTOPp->ibex_Vcellout__u_bus__device_wdata_o[1]),32);
            tracep->chgIData(oldp+974,(vlTOPp->ibex_Vcellout__u_bus__device_wdata_o[2]),32);
            tracep->chgCData(oldp+975,(vlTOPp->ibex_bus_device_sel_req),2);
            tracep->chgCData(oldp+976,(vlTOPp->ibex_core_load_store_unit_i_data_be),4);
            tracep->chgIData(oldp+977,((0xfffffffcU 
                                        & ((IData)(
                                                   (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                    >> 3U)) 
                                           << 2U))),32);
            tracep->chgQData(oldp+978,(vlTOPp->ibex_core_imd_val_d_ex[0]),34);
            tracep->chgQData(oldp+980,(vlTOPp->ibex_core_imd_val_d_ex[1]),34);
            tracep->chgBit(oldp+982,(vlTOPp->ibex_core_instr_valid_clear));
            tracep->chgBit(oldp+983,(vlTOPp->ibex_core_pc_set));
            tracep->chgBit(oldp+984,(vlTOPp->ibex_core_pc_set_spec));
            tracep->chgCData(oldp+985,(vlTOPp->ibex_core_exc_cause),6);
            tracep->chgIData(oldp+986,((IData)((vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                >> 1U))),32);
            tracep->chgBit(oldp+987,(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_result));
            tracep->chgBit(oldp+988,(vlTOPp->ibex_core_ctrl_busy));
            tracep->chgIData(oldp+989,(vlTOPp->ibex_core_rf_wdata_wb),32);
            tracep->chgIData(oldp+990,(vlTOPp->ibex_core_id_stage_i_alu_operand_a),32);
            tracep->chgIData(oldp+991,(vlTOPp->ibex_core_id_stage_i_alu_operand_b),32);
            tracep->chgIData(oldp+992,(vlTOPp->ibex_core_result_ex),32);
            tracep->chgBit(oldp+993,(vlTOPp->ibex_core_csr_op_en));
            tracep->chgSData(oldp+994,(vlTOPp->ibex_core_csr_addr),12);
            tracep->chgIData(oldp+995,(vlTOPp->ibex_core_cs_reg_i_csr_rdata_int),32);
            tracep->chgBit(oldp+996,(vlTOPp->ibex_core_illegal_csr_insn_id));
            tracep->chgBit(oldp+997,(vlTOPp->ibex_core_id_in_ready));
            tracep->chgBit(oldp+998,(vlTOPp->ibex_core_id_stage_i_instr_done));
            tracep->chgBit(oldp+999,(vlTOPp->ibex_core_pre_buf_i_valid_req));
            tracep->chgBit(oldp+1000,(vlTOPp->ibex_core_csr_save_if));
            tracep->chgBit(oldp+1001,(vlTOPp->ibex_core_csr_save_cause));
            tracep->chgBit(oldp+1002,(vlTOPp->ibex_core_csr_mtvec_init));
            tracep->chgCData(oldp+1003,(vlTOPp->ibex_core_cs_reg_i_priv_lvl_d),2);
            tracep->chgBit(oldp+1004,(vlTOPp->ibex_core_perf_instr_ret_wb));
            tracep->chgBit(oldp+1005,(vlTOPp->ibex_core_illegal_insn_id));
            tracep->chgBit(oldp+1006,(vlTOPp->ibex_core_rvfi_set_trap_pc_d));
            tracep->chgIData(oldp+1007,(vlTOPp->ibex_core_rvfi_rs1_data_d),32);
            tracep->chgIData(oldp+1008,(vlTOPp->ibex_core_rvfi_rs2_data_d),32);
            tracep->chgCData(oldp+1009,(vlTOPp->ibex_core_rvfi_rd_addr_d),5);
            tracep->chgIData(oldp+1010,(vlTOPp->ibex_core_rvfi_rd_wdata_d),32);
            tracep->chgBit(oldp+1011,(vlTOPp->ibex_core_rvfi_rd_we_wb));
            tracep->chgIData(oldp+1012,(vlTOPp->ibex_core_rvfi_mem_wdata_d),32);
            tracep->chgIData(oldp+1013,(vlTOPp->ibex_core_rvfi_mem_addr_d),32);
            tracep->chgBit(oldp+1014,(vlTOPp->ibex_core_rvfi_stage_valid_d[0]));
            tracep->chgBit(oldp+1015,(vlTOPp->ibex_core_if_stage_i_instr_new_id_d));
            tracep->chgIData(oldp+1016,(vlTOPp->ibex_core_if_stage_i_fetch_addr_n),32);
            tracep->chgBit(oldp+1017,((1U & vlTOPp->ibex_core_if_stage_i_fetch_addr_n)));
            tracep->chgBit(oldp+1018,((1U & ((IData)(vlTOPp->ibex_core_exc_cause) 
                                             >> 5U))));
            tracep->chgIData(oldp+1019,((0xfffffffeU 
                                         & vlTOPp->ibex_core_if_stage_i_fetch_addr_n)),32);
            tracep->chgBit(oldp+1020,(((IData)(vlTOPp->ibex_core_pc_set_spec) 
                                       & (~ (IData)(vlTOPp->ibex_core_pc_set)))));
            tracep->chgBit(oldp+1021,(vlTOPp->ibex_core_pre_buf_i_valid_new_req));
            tracep->chgBit(oldp+1022,(((IData)(vlTOPp->ibex_core_pre_buf_i_valid_req) 
                                       & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_gnt_or_pmp_err)))));
            tracep->chgBit(oldp+1023,(vlTOPp->ibex_core_pre_buf_i_discard_req_d));
            tracep->chgBit(oldp+1024,(vlTOPp->ibex_core_pre_buf_i_gnt_or_pmp_err));
            tracep->chgCData(oldp+1025,(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_n),2);
            tracep->chgCData(oldp+1026,(vlTOPp->ibex_core_pre_buf_i_branch_discard_n),2);
            tracep->chgCData(oldp+1027,(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_n),2);
            tracep->chgIData(oldp+1028,(vlTOPp->ibex_core_pre_buf_i_instr_addr),32);
            tracep->chgIData(oldp+1029,(((IData)(vlTOPp->ibex_core_pc_set)
                                          ? (0xfffffffeU 
                                             & vlTOPp->ibex_core_if_stage_i_fetch_addr_n)
                                          : 0U)),32);
            tracep->chgCData(oldp+1030,(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_d),3);
            tracep->chgCData(oldp+1031,(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_popped),3);
            tracep->chgBit(oldp+1032,(vlTOPp->ibex_core_pre_buf_i_fifo_i_pop_fifo));
            tracep->chgBit(oldp+1033,(0U));
            tracep->chgQData(oldp+1034,(vlTOPp->ibex_core___Vcellinp__id_stage_i__imd_val_d_ex_i[0]),34);
            tracep->chgQData(oldp+1036,(vlTOPp->ibex_core___Vcellinp__id_stage_i__imd_val_d_ex_i[1]),34);
            tracep->chgBit(oldp+1038,(vlTOPp->ibex_core_id_stage_i_branch_spec));
            tracep->chgBit(oldp+1039,(vlTOPp->ibex_core_id_stage_i_branch_set_raw_d));
            tracep->chgBit(oldp+1040,(vlTOPp->ibex_core_id_stage_i_stall_multdiv));
            tracep->chgBit(oldp+1041,(vlTOPp->ibex_core_id_stage_i_stall_branch));
            tracep->chgBit(oldp+1042,(vlTOPp->ibex_core_id_stage_i_stall_jump));
            tracep->chgBit(oldp+1043,(vlTOPp->ibex_core_id_stage_i_stall_id));
            tracep->chgBit(oldp+1044,(vlTOPp->ibex_core_id_stage_i_multicycle_done));
            tracep->chgBit(oldp+1045,(vlTOPp->ibex_core_id_stage_i_csr_pipe_flush));
            tracep->chgBit(oldp+1046,(vlTOPp->ibex_core_id_stage_i_id_fsm_d));
            tracep->chgCData(oldp+1047,(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns),4);
            tracep->chgBit(oldp+1048,(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_d));
            tracep->chgBit(oldp+1049,(vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_d));
            tracep->chgBit(oldp+1050,(vlTOPp->ibex_core_id_stage_i_controller_i_halt_if));
            tracep->chgBit(oldp+1051,(vlTOPp->ibex_core_id_stage_i_controller_i_retain_id));
            tracep->chgBit(oldp+1052,(vlTOPp->ibex_core_id_stage_i_controller_i_special_req));
            tracep->chgBit(oldp+1053,(vlTOPp->ibex_core_id_stage_i_controller_i_csr_pipe_flush));
            tracep->chgQData(oldp+1054,(vlTOPp->ibex_core___Vcellout__ex_block_i__imd_val_d_o[0]),34);
            tracep->chgQData(oldp+1056,(vlTOPp->ibex_core___Vcellout__ex_block_i__imd_val_d_o[1]),34);
            tracep->chgIData(oldp+1058,(vlTOPp->ibex_core_ex_block_i_alu_result),32);
            tracep->chgQData(oldp+1059,(vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext),34);
            tracep->chgBit(oldp+1061,((0U == (IData)(
                                                     (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                      >> 1U)))));
            tracep->chgQData(oldp+1062,(vlTOPp->ibex_core_ex_block_i_multdiv_imd_val_d[0]),34);
            tracep->chgQData(oldp+1064,(vlTOPp->ibex_core_ex_block_i_multdiv_imd_val_d[1]),34);
            tracep->chgIData(oldp+1066,(vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev),32);
            tracep->chgQData(oldp+1067,((0x1ffffffffULL 
                                         & (~ ((QData)((IData)(vlTOPp->ibex_core_id_stage_i_alu_operand_b)) 
                                               << 1U)))),33);
            tracep->chgCData(oldp+1069,(vlTOPp->ibex_core_ex_block_i_alu_i_shift_amt),6);
            tracep->chgCData(oldp+1070,((0x3fU & ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & vlTOPp->ibex_core_id_stage_i_alu_operand_b)))),6);
            tracep->chgIData(oldp+1071,(vlTOPp->ibex_core_ex_block_i_alu_i_shift_operand),32);
            tracep->chgQData(oldp+1072,(vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_ext_signed),33);
            tracep->chgQData(oldp+1074,(vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_ext),33);
            tracep->chgBit(oldp+1076,(vlTOPp->ibex_core_ex_block_i_alu_i_unused_shift_result_ext));
            tracep->chgIData(oldp+1077,(vlTOPp->ibex_core_ex_block_i_alu_i_shift_result),32);
            tracep->chgIData(oldp+1078,(vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev),32);
            tracep->chgCData(oldp+1079,(((0x10U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & (vlTOPp->ibex_core_id_stage_i_alu_operand_b 
                                                                   >> 0x18U))))) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlTOPp->ibex_core_id_stage_i_alu_operand_b 
                                             >> 0x18U)))),5);
            tracep->chgCData(oldp+1080,((0x1fU & (vlTOPp->ibex_core_id_stage_i_alu_operand_b 
                                                  >> 0x10U))),5);
            tracep->chgIData(oldp+1081,((vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                                         | vlTOPp->ibex_core_id_stage_i_alu_operand_b)),32);
            tracep->chgIData(oldp+1082,((vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                                         & vlTOPp->ibex_core_id_stage_i_alu_operand_b)),32);
            tracep->chgIData(oldp+1083,((vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                                         ^ vlTOPp->ibex_core_id_stage_i_alu_operand_b)),32);
            tracep->chgIData(oldp+1084,(vlTOPp->ibex_core_ex_block_i_alu_i_bwlogic_result),32);
            tracep->chgBit(oldp+1085,((1U & (((IData)(0x20U) 
                                              - (0x1fU 
                                                 & vlTOPp->ibex_core_id_stage_i_alu_operand_b)) 
                                             >> 5U))));
            tracep->chgQData(oldp+1086,(vlTOPp->ibex_core_ex_block_i___Vcellout__gen_multdiv_fast_i__imd_val_d_o[0]),34);
            tracep->chgQData(oldp+1088,(vlTOPp->ibex_core_ex_block_i___Vcellout__gen_multdiv_fast_i__imd_val_d_o[1]),34);
            tracep->chgBit(oldp+1090,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_a));
            tracep->chgBit(oldp+1091,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_b));
            tracep->chgQData(oldp+1092,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mac_res_d),34);
            tracep->chgQData(oldp+1094,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_remainder_d),34);
            tracep->chgBit(oldp+1096,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_sign_a));
            tracep->chgBit(oldp+1097,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_sign_b));
            tracep->chgBit(oldp+1098,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_is_greater_equal));
            tracep->chgIData(oldp+1099,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_denominator_d),32);
            tracep->chgIData(oldp+1100,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_numerator_d),32);
            tracep->chgIData(oldp+1101,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_quotient_d),32);
            tracep->chgIData(oldp+1102,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_next_remainder),32);
            tracep->chgQData(oldp+1103,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_next_quotient),33);
            tracep->chgCData(oldp+1105,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_counter_d),5);
            tracep->chgBit(oldp+1106,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_by_zero_d));
            tracep->chgCData(oldp+1107,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_d),3);
            tracep->chgCData(oldp+1108,(((2U & ((IData)(
                                                        (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                         >> 0x21U)) 
                                                << 1U)) 
                                         | (1U & (IData)(vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext)))),2);
            tracep->chgBit(oldp+1109,(vlTOPp->ibex_core_load_store_unit_i_addr_update));
            tracep->chgCData(oldp+1110,((3U & (IData)(
                                                      (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                       >> 1U)))),2);
            tracep->chgBit(oldp+1111,(vlTOPp->ibex_core_load_store_unit_i_split_misaligned_access));
            tracep->chgBit(oldp+1112,(vlTOPp->ibex_core_load_store_unit_i_handle_misaligned_d));
            tracep->chgBit(oldp+1113,(vlTOPp->ibex_core_load_store_unit_i_pmp_err_d));
            tracep->chgBit(oldp+1114,(vlTOPp->ibex_core_load_store_unit_i_lsu_err_d));
            tracep->chgCData(oldp+1115,(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_ns),3);
            tracep->chgIData(oldp+1116,(vlTOPp->ibex_core_cs_reg_i_exception_pc),32);
            tracep->chgBit(oldp+1117,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d) 
                                             >> 5U))));
            tracep->chgBit(oldp+1118,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d) 
                                             >> 4U))));
            tracep->chgCData(oldp+1119,((3U & ((IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d) 
                                               >> 2U))),2);
            tracep->chgBit(oldp+1120,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d) 
                                             >> 1U))));
            tracep->chgBit(oldp+1121,((1U & (IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d))));
            tracep->chgBit(oldp+1122,(vlTOPp->ibex_core_cs_reg_i_mstatus_en));
            tracep->chgBit(oldp+1123,((1U & (vlTOPp->ibex_core_cs_reg_i_mie_d 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1124,((1U & (vlTOPp->ibex_core_cs_reg_i_mie_d 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1125,((1U & (vlTOPp->ibex_core_cs_reg_i_mie_d 
                                             >> 0xfU))));
            tracep->chgSData(oldp+1126,((0x7fffU & vlTOPp->ibex_core_cs_reg_i_mie_d)),15);
            tracep->chgBit(oldp+1127,(vlTOPp->ibex_core_cs_reg_i_mie_en));
            tracep->chgBit(oldp+1128,(vlTOPp->ibex_core_cs_reg_i_mscratch_en));
            tracep->chgIData(oldp+1129,(vlTOPp->ibex_core_cs_reg_i_mepc_d),32);
            tracep->chgBit(oldp+1130,(vlTOPp->ibex_core_cs_reg_i_mepc_en));
            tracep->chgCData(oldp+1131,(vlTOPp->ibex_core_cs_reg_i_mcause_d),6);
            tracep->chgBit(oldp+1132,(vlTOPp->ibex_core_cs_reg_i_mcause_en));
            tracep->chgIData(oldp+1133,(vlTOPp->ibex_core_cs_reg_i_mtval_d),32);
            tracep->chgBit(oldp+1134,(vlTOPp->ibex_core_cs_reg_i_mtval_en));
            tracep->chgIData(oldp+1135,(((IData)(vlTOPp->ibex_core_csr_mtvec_init)
                                          ? 0x100001U
                                          : (1U | (0xffffff00U 
                                                   & vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)))),32);
            tracep->chgBit(oldp+1136,(vlTOPp->ibex_core_cs_reg_i_mtvec_en));
            tracep->chgCData(oldp+1137,((0xfU & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                                 >> 0x1cU))),4);
            tracep->chgSData(oldp+1138,((0xfffU & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                                   >> 0x10U))),12);
            tracep->chgBit(oldp+1139,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1140,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1141,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1142,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1143,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1144,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1145,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                             >> 9U))));
            tracep->chgCData(oldp+1146,((7U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1147,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                             >> 5U))));
            tracep->chgBit(oldp+1148,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                             >> 4U))));
            tracep->chgBit(oldp+1149,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                             >> 3U))));
            tracep->chgBit(oldp+1150,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                             >> 2U))));
            tracep->chgCData(oldp+1151,((3U & vlTOPp->ibex_core_cs_reg_i_dcsr_d)),2);
            tracep->chgBit(oldp+1152,(vlTOPp->ibex_core_cs_reg_i_dcsr_en));
            tracep->chgIData(oldp+1153,(vlTOPp->ibex_core_cs_reg_i_depc_d),32);
            tracep->chgBit(oldp+1154,(vlTOPp->ibex_core_cs_reg_i_depc_en));
            tracep->chgBit(oldp+1155,(vlTOPp->ibex_core_cs_reg_i_dscratch0_en));
            tracep->chgBit(oldp+1156,(vlTOPp->ibex_core_cs_reg_i_dscratch1_en));
            tracep->chgBit(oldp+1157,(vlTOPp->ibex_core_cs_reg_i_mstack_en));
            tracep->chgBit(oldp+1158,(vlTOPp->ibex_core_cs_reg_i_mcountinhibit_we));
            tracep->chgIData(oldp+1159,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we),32);
            tracep->chgIData(oldp+1160,(vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we),32);
            tracep->chgIData(oldp+1161,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr),32);
            tracep->chgCData(oldp+1162,((0x1fU & (IData)(vlTOPp->ibex_core_csr_addr))),5);
            tracep->chgBit(oldp+1163,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 1U))));
            tracep->chgBit(oldp+1164,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 1U))));
            tracep->chgBit(oldp+1165,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                             >> 1U))));
            tracep->chgCData(oldp+1166,((7U & (vlTOPp->ibex_core_cs_reg_i_csr_wdata_int 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1167,((1U & (vlTOPp->ibex_core_cs_reg_i_csr_wdata_int 
                                             >> 2U))));
            tracep->chgBit(oldp+1168,((1U & (vlTOPp->ibex_core_cs_reg_i_csr_wdata_int 
                                             >> 1U))));
            tracep->chgBit(oldp+1169,((1U & vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
            tracep->chgBit(oldp+1170,(vlTOPp->ibex_core_cs_reg_i_cpuctrl_we));
            tracep->chgIData(oldp+1171,(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int),32);
            tracep->chgBit(oldp+1172,(vlTOPp->ibex_core_cs_reg_i_csr_we_int));
            tracep->chgBit(oldp+1173,(vlTOPp->ibex_core_cs_reg_i_csr_wreq));
            tracep->chgBit(oldp+1174,(vlTOPp->ibex_core_cs_reg_i_illegal_csr));
            tracep->chgBit(oldp+1175,(((3U == (3U & 
                                               ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                >> 0xaU))) 
                                       & (IData)(vlTOPp->ibex_core_cs_reg_i_csr_wreq))));
            tracep->chgCData(oldp+1176,((7U & ((IData)(vlTOPp->ibex_core_csr_addr) 
                                               >> 5U))),3);
            tracep->chgCData(oldp+1177,(vlTOPp->ibex_core_cs_reg_i_mstatus_d),6);
            tracep->chgIData(oldp+1178,(vlTOPp->ibex_core_cs_reg_i_mie_d),18);
            tracep->chgIData(oldp+1179,(vlTOPp->ibex_core_cs_reg_i_dcsr_d),32);
            tracep->chgBit(oldp+1180,((1U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)));
            tracep->chgBit(oldp+1181,((1U & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we)));
            tracep->chgQData(oldp+1182,(vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_upd),64);
            tracep->chgQData(oldp+1184,(vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_load),64);
            tracep->chgBit(oldp+1186,(vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_we));
            tracep->chgQData(oldp+1187,(vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_d),64);
            tracep->chgBit(oldp+1189,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 2U))));
            tracep->chgBit(oldp+1190,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 2U))));
            tracep->chgQData(oldp+1191,(vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_upd),64);
            tracep->chgQData(oldp+1193,(vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_load),64);
            tracep->chgBit(oldp+1195,(vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_we));
            tracep->chgQData(oldp+1196,(vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_d),64);
            tracep->chgBit(oldp+1198,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 3U))));
            tracep->chgBit(oldp+1199,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 3U))));
            tracep->chgQData(oldp+1200,(vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_upd),40);
            tracep->chgQData(oldp+1202,(vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_load),64);
            tracep->chgBit(oldp+1204,(vlTOPp->ibex_core_cs_reg_i_cntrs_0_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1205,(vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_d),40);
            tracep->chgIData(oldp+1207,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1208,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 4U))));
            tracep->chgBit(oldp+1209,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 4U))));
            tracep->chgQData(oldp+1210,(vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_upd),40);
            tracep->chgQData(oldp+1212,(vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_load),64);
            tracep->chgBit(oldp+1214,(vlTOPp->ibex_core_cs_reg_i_cntrs_1_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1215,(vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_d),40);
            tracep->chgIData(oldp+1217,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1218,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 5U))));
            tracep->chgBit(oldp+1219,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 5U))));
            tracep->chgQData(oldp+1220,(vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_upd),40);
            tracep->chgQData(oldp+1222,(vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_load),64);
            tracep->chgBit(oldp+1224,(vlTOPp->ibex_core_cs_reg_i_cntrs_2_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1225,(vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_d),40);
            tracep->chgIData(oldp+1227,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1228,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 6U))));
            tracep->chgBit(oldp+1229,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 6U))));
            tracep->chgQData(oldp+1230,(vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_upd),40);
            tracep->chgQData(oldp+1232,(vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_load),64);
            tracep->chgBit(oldp+1234,(vlTOPp->ibex_core_cs_reg_i_cntrs_3_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1235,(vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_d),40);
            tracep->chgIData(oldp+1237,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1238,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 7U))));
            tracep->chgBit(oldp+1239,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 7U))));
            tracep->chgQData(oldp+1240,(vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_upd),40);
            tracep->chgQData(oldp+1242,(vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_load),64);
            tracep->chgBit(oldp+1244,(vlTOPp->ibex_core_cs_reg_i_cntrs_4_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1245,(vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_d),40);
            tracep->chgIData(oldp+1247,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1248,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 8U))));
            tracep->chgBit(oldp+1249,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 8U))));
            tracep->chgQData(oldp+1250,(vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_upd),40);
            tracep->chgQData(oldp+1252,(vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_load),64);
            tracep->chgBit(oldp+1254,(vlTOPp->ibex_core_cs_reg_i_cntrs_5_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1255,(vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_d),40);
            tracep->chgIData(oldp+1257,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1258,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 9U))));
            tracep->chgBit(oldp+1259,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 9U))));
            tracep->chgQData(oldp+1260,(vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_upd),40);
            tracep->chgQData(oldp+1262,(vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_load),64);
            tracep->chgBit(oldp+1264,(vlTOPp->ibex_core_cs_reg_i_cntrs_6_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1265,(vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_d),40);
            tracep->chgIData(oldp+1267,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1268,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1269,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0xaU))));
            tracep->chgQData(oldp+1270,(vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_upd),40);
            tracep->chgQData(oldp+1272,(vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_load),64);
            tracep->chgBit(oldp+1274,(vlTOPp->ibex_core_cs_reg_i_cntrs_7_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1275,(vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_d),40);
            tracep->chgIData(oldp+1277,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1278,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1279,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0xbU))));
            tracep->chgQData(oldp+1280,(vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_upd),40);
            tracep->chgQData(oldp+1282,(vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_load),64);
            tracep->chgBit(oldp+1284,(vlTOPp->ibex_core_cs_reg_i_cntrs_8_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1285,(vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_d),40);
            tracep->chgIData(oldp+1287,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1288,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1289,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0xcU))));
            tracep->chgQData(oldp+1290,(vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_upd),40);
            tracep->chgQData(oldp+1292,(vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_load),64);
            tracep->chgBit(oldp+1294,(vlTOPp->ibex_core_cs_reg_i_cntrs_9_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1295,(vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_d),40);
            tracep->chgIData(oldp+1297,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1298,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1299,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0xdU))));
            tracep->chgQData(oldp+1300,(vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_upd),40);
            tracep->chgQData(oldp+1302,(vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_load),64);
            tracep->chgBit(oldp+1304,(vlTOPp->ibex_core_cs_reg_i_cntrs_10_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1305,(vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_d),40);
            tracep->chgIData(oldp+1307,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1308,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1309,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0xeU))));
            tracep->chgQData(oldp+1310,(vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_upd),40);
            tracep->chgQData(oldp+1312,(vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_load),64);
            tracep->chgBit(oldp+1314,(vlTOPp->ibex_core_cs_reg_i_cntrs_11_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1315,(vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_d),40);
            tracep->chgIData(oldp+1317,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1318,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1319,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0xfU))));
            tracep->chgQData(oldp+1320,(vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_upd),40);
            tracep->chgQData(oldp+1322,(vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_load),64);
            tracep->chgBit(oldp+1324,(vlTOPp->ibex_core_cs_reg_i_cntrs_12_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1325,(vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_d),40);
            tracep->chgIData(oldp+1327,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1328,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1329,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0x10U))));
            tracep->chgQData(oldp+1330,(vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_upd),40);
            tracep->chgQData(oldp+1332,(vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_load),64);
            tracep->chgBit(oldp+1334,(vlTOPp->ibex_core_cs_reg_i_cntrs_13_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1335,(vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_d),40);
            tracep->chgIData(oldp+1337,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1338,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1339,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0x11U))));
            tracep->chgQData(oldp+1340,(vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_upd),40);
            tracep->chgQData(oldp+1342,(vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_load),64);
            tracep->chgBit(oldp+1344,(vlTOPp->ibex_core_cs_reg_i_cntrs_14_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1345,(vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_d),40);
            tracep->chgIData(oldp+1347,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1348,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1349,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0x12U))));
            tracep->chgQData(oldp+1350,(vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_upd),40);
            tracep->chgQData(oldp+1352,(vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_load),64);
            tracep->chgBit(oldp+1354,(vlTOPp->ibex_core_cs_reg_i_cntrs_15_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1355,(vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_d),40);
            tracep->chgIData(oldp+1357,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1358,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1359,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0x13U))));
            tracep->chgQData(oldp+1360,(vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_upd),40);
            tracep->chgQData(oldp+1362,(vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_load),64);
            tracep->chgBit(oldp+1364,(vlTOPp->ibex_core_cs_reg_i_cntrs_16_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1365,(vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_d),40);
            tracep->chgIData(oldp+1367,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1368,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1369,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0x14U))));
            tracep->chgQData(oldp+1370,(vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_upd),40);
            tracep->chgQData(oldp+1372,(vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_load),64);
            tracep->chgBit(oldp+1374,(vlTOPp->ibex_core_cs_reg_i_cntrs_17_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1375,(vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_d),40);
            tracep->chgIData(oldp+1377,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1378,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1379,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0x15U))));
            tracep->chgQData(oldp+1380,(vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_upd),40);
            tracep->chgQData(oldp+1382,(vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_load),64);
            tracep->chgBit(oldp+1384,(vlTOPp->ibex_core_cs_reg_i_cntrs_18_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1385,(vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_d),40);
            tracep->chgIData(oldp+1387,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1388,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1389,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0x16U))));
            tracep->chgQData(oldp+1390,(vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_upd),40);
            tracep->chgQData(oldp+1392,(vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_load),64);
            tracep->chgBit(oldp+1394,(vlTOPp->ibex_core_cs_reg_i_cntrs_19_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1395,(vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_d),40);
            tracep->chgIData(oldp+1397,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1398,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1399,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0x17U))));
            tracep->chgQData(oldp+1400,(vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_upd),40);
            tracep->chgQData(oldp+1402,(vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_load),64);
            tracep->chgBit(oldp+1404,(vlTOPp->ibex_core_cs_reg_i_cntrs_20_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1405,(vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_d),40);
            tracep->chgIData(oldp+1407,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1408,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1409,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0x18U))));
            tracep->chgQData(oldp+1410,(vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_upd),40);
            tracep->chgQData(oldp+1412,(vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_load),64);
            tracep->chgBit(oldp+1414,(vlTOPp->ibex_core_cs_reg_i_cntrs_21_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1415,(vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_d),40);
            tracep->chgIData(oldp+1417,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1418,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1419,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0x19U))));
            tracep->chgQData(oldp+1420,(vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_upd),40);
            tracep->chgQData(oldp+1422,(vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_load),64);
            tracep->chgBit(oldp+1424,(vlTOPp->ibex_core_cs_reg_i_cntrs_22_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1425,(vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_d),40);
            tracep->chgIData(oldp+1427,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1428,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1429,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0x1aU))));
            tracep->chgQData(oldp+1430,(vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_upd),40);
            tracep->chgQData(oldp+1432,(vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_load),64);
            tracep->chgBit(oldp+1434,(vlTOPp->ibex_core_cs_reg_i_cntrs_23_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1435,(vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_d),40);
            tracep->chgIData(oldp+1437,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1438,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1439,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0x1bU))));
            tracep->chgQData(oldp+1440,(vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_upd),40);
            tracep->chgQData(oldp+1442,(vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_load),64);
            tracep->chgBit(oldp+1444,(vlTOPp->ibex_core_cs_reg_i_cntrs_24_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1445,(vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_d),40);
            tracep->chgIData(oldp+1447,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1448,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1449,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0x1cU))));
            tracep->chgQData(oldp+1450,(vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_upd),40);
            tracep->chgQData(oldp+1452,(vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_load),64);
            tracep->chgBit(oldp+1454,(vlTOPp->ibex_core_cs_reg_i_cntrs_25_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1455,(vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_d),40);
            tracep->chgIData(oldp+1457,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1458,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1459,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0x1dU))));
            tracep->chgQData(oldp+1460,(vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_upd),40);
            tracep->chgQData(oldp+1462,(vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_load),64);
            tracep->chgBit(oldp+1464,(vlTOPp->ibex_core_cs_reg_i_cntrs_26_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1465,(vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_d),40);
            tracep->chgIData(oldp+1467,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1468,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1469,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0x1eU))));
            tracep->chgQData(oldp+1470,(vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_upd),40);
            tracep->chgQData(oldp+1472,(vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_load),64);
            tracep->chgBit(oldp+1474,(vlTOPp->ibex_core_cs_reg_i_cntrs_27_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1475,(vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_d),40);
            tracep->chgIData(oldp+1477,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+1478,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1479,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                             >> 0x1fU))));
            tracep->chgQData(oldp+1480,(vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_upd),40);
            tracep->chgQData(oldp+1482,(vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_load),64);
            tracep->chgBit(oldp+1484,(vlTOPp->ibex_core_cs_reg_i_cntrs_28_gen_mcnt_var_i_we));
            tracep->chgQData(oldp+1485,(vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_d),40);
            tracep->chgIData(oldp+1487,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_load 
                                                    >> 0x28U)))),24);
            tracep->chgIData(oldp+1488,(vlTOPp->ibex_core_gen_reg_file_we_a_dec),31);
            tracep->chgBit(oldp+1489,(vlTOPp->ibex_device_req
                                      [0U]));
            tracep->chgBit(oldp+1490,(vlTOPp->ibex_device_we
                                      [0U]));
            tracep->chgCData(oldp+1491,(vlTOPp->ibex_device_be
                                        [0U]),4);
            tracep->chgIData(oldp+1492,(vlTOPp->ibex_device_addr
                                        [0U]),32);
            tracep->chgIData(oldp+1493,(vlTOPp->ibex_device_wdata
                                        [0U]),32);
            tracep->chgIData(oldp+1494,((0x3ffffU & 
                                         (vlTOPp->ibex_device_addr
                                          [0U] >> 2U))),18);
            tracep->chgSData(oldp+1495,(((0x3ffcU & 
                                          (vlTOPp->ibex_device_addr
                                           [0U] >> 0x12U)) 
                                         | (3U & vlTOPp->ibex_device_addr
                                            [0U]))),14);
            tracep->chgIData(oldp+1496,((0x3ffffU & 
                                         (vlTOPp->ibex_core_pre_buf_i_instr_addr 
                                          >> 2U))),18);
            tracep->chgSData(oldp+1497,((0x3ffcU & 
                                         (vlTOPp->ibex_core_pre_buf_i_instr_addr 
                                          >> 0x12U))),14);
            tracep->chgIData(oldp+1498,(vlTOPp->ibex_ram_a_wmask),32);
            tracep->chgIData(oldp+1499,(vlTOPp->ibex_ram_gen_generic_impl_a_wmask),32);
            tracep->chgBit(oldp+1500,(vlTOPp->ibex_device_req
                                      [1U]));
            tracep->chgBit(oldp+1501,(vlTOPp->ibex_device_we
                                      [1U]));
            tracep->chgCData(oldp+1502,(vlTOPp->ibex_device_be
                                        [1U]),4);
            tracep->chgIData(oldp+1503,(vlTOPp->ibex_device_addr
                                        [1U]),32);
            tracep->chgIData(oldp+1504,(vlTOPp->ibex_device_wdata
                                        [1U]),32);
            tracep->chgCData(oldp+1505,((0xffU & (vlTOPp->ibex_device_addr
                                                  [1U] 
                                                  >> 2U))),8);
            tracep->chgBit(oldp+1506,(vlTOPp->ibex_device_req
                                      [2U]));
            tracep->chgIData(oldp+1507,(vlTOPp->ibex_device_addr
                                        [2U]),32);
            tracep->chgBit(oldp+1508,(vlTOPp->ibex_device_we
                                      [2U]));
            tracep->chgCData(oldp+1509,(vlTOPp->ibex_device_be
                                        [2U]),4);
            tracep->chgIData(oldp+1510,(vlTOPp->ibex_device_wdata
                                        [2U]),32);
            tracep->chgBit(oldp+1511,(vlTOPp->ibex_timer_timer_we));
            tracep->chgBit(oldp+1512,(((IData)(vlTOPp->ibex_timer_timer_we) 
                                       & (0U == (0x3ffU 
                                                 & vlTOPp->ibex_device_addr
                                                 [2U])))));
            tracep->chgBit(oldp+1513,(((IData)(vlTOPp->ibex_timer_timer_we) 
                                       & (4U == (0x3ffU 
                                                 & vlTOPp->ibex_device_addr
                                                 [2U])))));
            tracep->chgBit(oldp+1514,(vlTOPp->ibex_timer_mtimecmp_we));
            tracep->chgBit(oldp+1515,(vlTOPp->ibex_timer_mtimecmph_we));
            tracep->chgIData(oldp+1516,(vlTOPp->ibex_timer_mtime_wdata),32);
            tracep->chgIData(oldp+1517,(vlTOPp->ibex_timer_mtimeh_wdata),32);
            tracep->chgIData(oldp+1518,(vlTOPp->ibex_timer_mtimecmp_wdata),32);
            tracep->chgIData(oldp+1519,(vlTOPp->ibex_timer_mtimecmph_wdata),32);
            tracep->chgBit(oldp+1520,(vlTOPp->ibex_timer_error_d));
            tracep->chgIData(oldp+1521,(vlTOPp->ibex_timer_rdata_d),32);
        }
        tracep->chgBit(oldp+1522,(vlTOPp->IO_CLK));
        tracep->chgBit(oldp+1523,(vlTOPp->IO_RST_N));
        tracep->chgBit(oldp+1524,((1U & (~ ((IData)(vlTOPp->ibex_core_fetch_enable_q) 
                                            & ((IData)(vlTOPp->ibex_core_core_busy_q) 
                                               | (0U 
                                                  != vlTOPp->ibex_core_irqs)))))));
        tracep->chgBit(oldp+1525,((1U & (((((~ (IData)(vlTOPp->ibex_core_id_stage_i_ebrk_insn)) 
                                            & (~ (IData)(vlTOPp->ibex_core_id_stage_i_ecall_insn_dec))) 
                                           & (~ (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn))) 
                                          & (~ (IData)(vlTOPp->ibex_core_illegal_csr_insn_id))) 
                                         & (~ (IData)(vlTOPp->ibex_core_instr_fetch_err))))));
        tracep->chgBit(oldp+1526,(((IData)(vlTOPp->ibex_core_perf_instr_ret_wb) 
                                   & (IData)(vlTOPp->ibex_core_instr_is_compressed_id))));
        tracep->chgBit(oldp+1527,((((IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec) 
                                    & (IData)(vlTOPp->ibex_core_id_stage_i_lsu_req_dec)) 
                                   & (~ (IData)(vlTOPp->ibex_core_lsu_resp_valid)))));
        tracep->chgCData(oldp+1528,(((IData)(vlTOPp->ibex_core_id_stage_i_instr_first_cycle)
                                      ? 0U : (0x1fU 
                                              & (vlTOPp->ibex_core_instr_rdata_id 
                                                 >> 0xfU)))),5);
        tracep->chgIData(oldp+1529,(((IData)(vlTOPp->ibex_core_id_stage_i_instr_first_cycle)
                                      ? 0U : vlTOPp->ibex_core_rf_rdata_a_ecc)),32);
        tracep->chgBit(oldp+1530,(((IData)(vlTOPp->ibex_core_fetch_enable_q) 
                                   & ((IData)(vlTOPp->ibex_core_core_busy_q) 
                                      | (0U != vlTOPp->ibex_core_irqs)))));
        tracep->chgBit(oldp+1531,(((((IData)(vlTOPp->ibex_core_pre_buf_i_valid_raw) 
                                     & (IData)(vlTOPp->ibex_core_id_in_ready)) 
                                    & (~ (IData)(vlTOPp->ibex_core_pc_set))) 
                                   | ((IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q) 
                                      & (~ (IData)(vlTOPp->ibex_core_instr_valid_clear))))));
        tracep->chgBit(oldp+1532,((1U & (vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q 
                                         & ((2U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q))
                                             ? (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q) 
                                                 >> 1U) 
                                                & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q)))
                                             : (((IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_q) 
                                                 & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q)) 
                                                & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q))))))));
        tracep->chgIData(oldp+1533,((((IData)(vlTOPp->ibex_core_pc_set)
                                       ? (0xfffffffeU 
                                          & vlTOPp->ibex_core_if_stage_i_fetch_addr_n)
                                       : (0xfffffffcU 
                                          & vlTOPp->ibex_core_pre_buf_i_fetch_addr_q)) 
                                     + (((IData)(vlTOPp->ibex_core_pre_buf_i_valid_new_req) 
                                         & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_valid_req_q))) 
                                        << 2U))),32);
        tracep->chgIData(oldp+1534,((0xfffffffeU & 
                                     ((vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q 
                                       + ((2U & ((~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two)) 
                                                 << 1U)) 
                                          | (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two))) 
                                      << 1U))),32);
        tracep->chgIData(oldp+1535,(vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_d[0U]),32);
        tracep->chgIData(oldp+1536,(vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_d[1U]),32);
        tracep->chgIData(oldp+1537,(vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_d[2U]),32);
        tracep->chgIData(oldp+1538,(((2U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q))
                                      ? ((0xffff0000U 
                                          & (vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_q[1U] 
                                             << 0x10U)) 
                                         | (0xffffU 
                                            & (vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata 
                                               >> 0x10U)))
                                      : ((0xffff0000U 
                                          & (vlTOPp->ibex_simple_system__instr_rdata 
                                             << 0x10U)) 
                                         | (0xffffU 
                                            & (vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata 
                                               >> 0x10U))))),32);
        tracep->chgBit(oldp+1539,((1U & ((2U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q))
                                          ? ((((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q) 
                                               >> 1U) 
                                              & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_unaligned_is_compressed))) 
                                             | (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q))
                                          : (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q) 
                                              & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q)) 
                                             | ((IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_q) 
                                                & ((~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q)) 
                                                   | (~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_unaligned_is_compressed)))))))));
        tracep->chgBit(oldp+1540,((1U & ((2U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q))
                                          ? (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q) 
                                              >> 1U) 
                                             & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q)))
                                          : (((IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_q) 
                                              & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q)) 
                                             & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q)))))));
        tracep->chgBit(oldp+1541,((1U & (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q) 
                                          >> 1U) | 
                                         ((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q) 
                                          & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_valid))))));
        tracep->chgIData(oldp+1542,((0x7fffffffU & 
                                     (vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q 
                                      + ((2U & ((~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two)) 
                                                << 1U)) 
                                         | (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two))))),31);
        tracep->chgIData(oldp+1543,((0x7fffffffU & 
                                     ((IData)(vlTOPp->ibex_core_pc_set)
                                       ? (((IData)(vlTOPp->ibex_core_pc_set)
                                            ? (0xfffffffeU 
                                               & vlTOPp->ibex_core_if_stage_i_fetch_addr_n)
                                            : 0U) >> 1U)
                                       : (vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q 
                                          + ((2U & 
                                              ((~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two)) 
                                               << 1U)) 
                                             | (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two)))))),31);
        tracep->chgBit(oldp+1544,(((IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q) 
                                   & ((IData)(vlTOPp->ibex_core_id_stage_i_lsu_req_dec) 
                                      & ((~ (IData)(vlTOPp->ibex_core_lsu_resp_valid)) 
                                         | (IData)(vlTOPp->ibex_core_id_stage_i_instr_first_cycle))))));
        tracep->chgIData(oldp+1545,(((IData)(vlTOPp->ibex_core_id_stage_i_imm_a_mux_sel)
                                      ? 0U : (0x1fU 
                                              & (vlTOPp->ibex_core_instr_rdata_id 
                                                 >> 0xfU)))),32);
        tracep->chgBit(oldp+1546,(((IData)(vlTOPp->ibex_core_lsu_addr_incr_req) 
                                   | (IData)(vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec))));
        tracep->chgBit(oldp+1547,(((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_dret_insn) 
                                   & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))));
        tracep->chgBit(oldp+1548,(((3U != (IData)(vlTOPp->ibex_core_cs_reg_i_priv_lvl_q)) 
                                   & ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_mret_insn) 
                                      | ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                         & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_wfi_insn))))));
        tracep->chgBit(oldp+1549,(((((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_mret_insn) 
                                     | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_dret_insn)) 
                                    | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_d)) 
                                   | ((IData)(vlTOPp->ibex_core_lsu_store_err) 
                                      | (IData)(vlTOPp->ibex_core_lsu_load_err)))));
        tracep->chgBit(oldp+1550,(((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_valid) 
                                   | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_valid))));
        tracep->chgQData(oldp+1551,((0x1ffffffffULL 
                                     & ((IData)(vlTOPp->ibex_core_ex_block_i_multdiv_sel)
                                         ? vlTOPp->ibex_core_ex_block_i_multdiv_alu_operand_b
                                         : ((IData)(vlTOPp->ibex_core_ex_block_i_alu_i_adder_op_b_negate)
                                             ? (~ ((QData)((IData)(vlTOPp->ibex_core_id_stage_i_alu_operand_b)) 
                                                   << 1U))
                                             : ((QData)((IData)(vlTOPp->ibex_core_id_stage_i_alu_operand_b)) 
                                                << 1U))))),33);
        tracep->chgQData(oldp+1553,((0x7ffffffffULL 
                                     & (VL_MULS_QQQ(35,35,35, 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_a) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_a)))), 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_b) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_b))))) 
                                        + VL_EXTENDS_QQ(35,34, vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum)))),35);
        tracep->chgQData(oldp+1555,((0x3ffffffffULL 
                                     & ((0x7ffffffffULL 
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
                                           & VL_EXTENDS_QQ(35,34, vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum))))),34);
        tracep->chgBit(oldp+1557,((1U & (IData)((1ULL 
                                                 & ((VL_MULS_QQQ(35,35,35, 
                                                                 (0x7ffffffffULL 
                                                                  & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_a)))), 
                                                                 (0x7ffffffffULL 
                                                                  & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_b))))) 
                                                     + 
                                                     VL_EXTENDS_QQ(35,34, vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum)) 
                                                    >> 0x22U))))));
        tracep->chgIData(oldp+1558,(((2U & (IData)(vlTOPp->ibex_core_load_store_unit_i_rdata_offset_q))
                                      ? ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_rdata_offset_q))
                                          ? ((0xffffff00U 
                                              & (vlTOPp->ibex_simple_system__host_rdata
                                                 [0U] 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (vlTOPp->ibex_core_load_store_unit_i_rdata_q 
                                                   >> 0x10U)))
                                          : ((0xffff0000U 
                                              & (vlTOPp->ibex_simple_system__host_rdata
                                                 [0U] 
                                                 << 0x10U)) 
                                             | (0xffffU 
                                                & (vlTOPp->ibex_core_load_store_unit_i_rdata_q 
                                                   >> 8U))))
                                      : ((1U & (IData)(vlTOPp->ibex_core_load_store_unit_i_rdata_offset_q))
                                          ? ((0xff000000U 
                                              & (vlTOPp->ibex_simple_system__host_rdata
                                                 [0U] 
                                                 << 0x18U)) 
                                             | vlTOPp->ibex_core_load_store_unit_i_rdata_q)
                                          : vlTOPp->ibex_simple_system__host_rdata
                                         [0U]))),32);
        tracep->chgBit(oldp+1559,((((IData)(vlTOPp->ibex_core_lsu_load_err) 
                                    | (IData)(vlTOPp->ibex_core_lsu_store_err)) 
                                   & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q)))));
        tracep->chgBit(oldp+1560,((((IData)(vlTOPp->ibex_core_lsu_load_err) 
                                    | (IData)(vlTOPp->ibex_core_lsu_store_err)) 
                                   & (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q))));
        tracep->chgQData(oldp+1561,((((QData)((IData)(
                                                      (((IData)(vlTOPp->ibex_timer_timer_we) 
                                                        & (4U 
                                                           == 
                                                           (0x3ffU 
                                                            & vlTOPp->ibex_device_addr
                                                            [2U])))
                                                        ? vlTOPp->ibex_timer_mtimeh_wdata
                                                        : (IData)(
                                                                  ((1ULL 
                                                                    + vlTOPp->ibex_timer_mtime_q) 
                                                                   >> 0x20U))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (((IData)(vlTOPp->ibex_timer_timer_we) 
                                                                    & (0U 
                                                                       == 
                                                                       (0x3ffU 
                                                                        & vlTOPp->ibex_device_addr
                                                                        [2U])))
                                                                    ? vlTOPp->ibex_timer_mtime_wdata
                                                                    : 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlTOPp->ibex_timer_mtime_q))))))),64);
        tracep->chgQData(oldp+1563,((((QData)((IData)(
                                                      ((IData)(vlTOPp->ibex_timer_mtimecmph_we)
                                                        ? vlTOPp->ibex_timer_mtimecmph_wdata
                                                        : (IData)(
                                                                  (vlTOPp->ibex_timer_mtimecmp_q 
                                                                   >> 0x20U))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(vlTOPp->ibex_timer_mtimecmp_we)
                                                                    ? vlTOPp->ibex_timer_mtimecmp_wdata
                                                                    : (IData)(vlTOPp->ibex_timer_mtimecmp_q)))))),64);
        tracep->chgBit(oldp+1565,((((vlTOPp->ibex_timer_mtime_q 
                                     >= vlTOPp->ibex_timer_mtimecmp_q) 
                                    | (IData)(vlTOPp->ibex_timer_interrupt_q)) 
                                   & (~ ((IData)(vlTOPp->ibex_timer_mtimecmp_we) 
                                         | (IData)(vlTOPp->ibex_timer_mtimecmph_we))))));
    }
}

void Vibex_simple_system::traceCleanup(void* userp, VerilatedFst* /*unused*/) {
    Vibex_simple_system__Syms* __restrict vlSymsp = static_cast<Vibex_simple_system__Syms*>(userp);
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
        vlTOPp->__Vm_traceActivity[5U] = 0U;
        vlTOPp->__Vm_traceActivity[6U] = 0U;
        vlTOPp->__Vm_traceActivity[7U] = 0U;
        vlTOPp->__Vm_traceActivity[8U] = 0U;
        vlTOPp->__Vm_traceActivity[9U] = 0U;
        vlTOPp->__Vm_traceActivity[0xaU] = 0U;
    }
}
