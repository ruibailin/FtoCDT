// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vibex_simple_system__Syms.h"


//======================

void Vibex_simple_system::trace(VerilatedFstC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vibex_simple_system::traceInit(void* userp, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vibex_simple_system__Syms* __restrict vlSymsp = static_cast<Vibex_simple_system__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vibex_simple_system::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vibex_simple_system::traceInitTop(void* userp, VerilatedFst* tracep) {
    Vibex_simple_system__Syms* __restrict vlSymsp = static_cast<Vibex_simple_system__Syms*>(userp);
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vibex_simple_system::traceInitSub0(void* userp, VerilatedFst* tracep) {
    Vibex_simple_system__Syms* __restrict vlSymsp = static_cast<Vibex_simple_system__Syms*>(userp);
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1523,"IO_CLK",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"IO_RST_N",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1523,"ibex_simple_system IO_CLK",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system IO_RST_N",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        {
            const char* __VenumItemNames[]
            = {"RV32MNone", "RV32MSlow", "RV32MFast", 
                                                "RV32MSingleCycle"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(1, "ibex_pkg::rv32m_e", 4, 32, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+1567,"ibex_simple_system RV32M",1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        {
            const char* __VenumItemNames[]
            = {"RV32BNone", "RV32BBalanced", "RV32BFull"};
            const char* __VenumItemValues[]
            = {"0", "1", "10"};
            tracep->declDTypeEnum(2, "ibex_pkg::rv32b_e", 3, 32, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+1568,"ibex_simple_system RV32B",2, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        {
            const char* __VenumItemNames[]
            = {"RegFileFF", "RegFileFPGA", "RegFileLatch"};
            const char* __VenumItemValues[]
            = {"0", "1", "10"};
            tracep->declDTypeEnum(3, "ibex_pkg::regfile_e", 3, 32, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+1569,"ibex_simple_system RegFile",3, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1570,"ibex_simple_system SRAMInitFile",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
        tracep->declBit(c+179,"ibex_simple_system clk_sys",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system rst_sys_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1571,"ibex_simple_system NrDevices",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1572,"ibex_simple_system NrHosts",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+182,"ibex_simple_system timer_irq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+809+i*1,"ibex_simple_system host_req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+810+i*1,"ibex_simple_system host_gnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+938+i*1,"ibex_simple_system host_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+811+i*1,"ibex_simple_system host_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+939+i*1,"ibex_simple_system host_be",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 3,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+940+i*1,"ibex_simple_system host_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+183+i*1,"ibex_simple_system host_rvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+732+i*1,"ibex_simple_system host_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+733+i*1,"ibex_simple_system host_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+941+i*1,"ibex_simple_system device_req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+944+i*1,"ibex_simple_system device_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+947+i*1,"ibex_simple_system device_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+950+i*1,"ibex_simple_system device_be",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+953+i*1,"ibex_simple_system device_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+184+i*1,"ibex_simple_system device_rvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+275+i*1,"ibex_simple_system device_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+278+i*1,"ibex_simple_system device_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1+i*1,"ibex_simple_system cfg_device_addr_base",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+4+i*1,"ibex_simple_system cfg_device_addr_mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        tracep->declBit(c+956,"ibex_simple_system instr_req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+956,"ibex_simple_system instr_gnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+187,"ibex_simple_system instr_rvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+957,"ibex_simple_system instr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+281,"ibex_simple_system instr_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system instr_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1571,"ibex_simple_system u_bus NrDevices",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1572,"ibex_simple_system u_bus NrHosts",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1574,"ibex_simple_system u_bus DataWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1574,"ibex_simple_system u_bus AddressWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+179,"ibex_simple_system u_bus clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_bus rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+812+i*1,"ibex_simple_system u_bus host_req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+813+i*1,"ibex_simple_system u_bus host_gnt_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+958+i*1,"ibex_simple_system u_bus host_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+814+i*1,"ibex_simple_system u_bus host_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+959+i*1,"ibex_simple_system u_bus host_be_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 3,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+960+i*1,"ibex_simple_system u_bus host_wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+188+i*1,"ibex_simple_system u_bus host_rvalid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+734+i*1,"ibex_simple_system u_bus host_rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+735+i*1,"ibex_simple_system u_bus host_err_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+961+i*1,"ibex_simple_system u_bus device_req_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+964+i*1,"ibex_simple_system u_bus device_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+967+i*1,"ibex_simple_system u_bus device_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+970+i*1,"ibex_simple_system u_bus device_be_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+973+i*1,"ibex_simple_system u_bus device_wdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+189+i*1,"ibex_simple_system u_bus device_rvalid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+282+i*1,"ibex_simple_system u_bus device_rdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+285+i*1,"ibex_simple_system u_bus device_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+7+i*1,"ibex_simple_system u_bus cfg_device_addr_base",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+10+i*1,"ibex_simple_system u_bus cfg_device_addr_mask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);}}
        tracep->declBus(c+1575,"ibex_simple_system u_bus NumBitsHostSel",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1576,"ibex_simple_system u_bus NumBitsDeviceSel",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+815,"ibex_simple_system u_bus host_sel_req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
        tracep->declBus(c+192,"ibex_simple_system u_bus host_sel_resp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
        tracep->declBus(c+976,"ibex_simple_system u_bus device_sel_req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+193,"ibex_simple_system u_bus device_sel_resp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+1577,"ibex_simple_system u_bus unnamedblk1 host",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+1578,"ibex_simple_system u_bus unnamedblk2 device",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+1578,"ibex_simple_system u_bus unnamedblk3 device",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+1579,"ibex_simple_system u_bus unnamedblk4 host",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core PMPEnable",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1581,"ibex_simple_system u_core PMPGranularity",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1582,"ibex_simple_system u_core PMPNumRegions",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1583,"ibex_simple_system u_core MHPMCounterNum",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1584,"ibex_simple_system u_core MHPMCounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core RV32E",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1585,"ibex_simple_system u_core RV32M",1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1586,"ibex_simple_system u_core RV32B",2, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1587,"ibex_simple_system u_core RegFile",3, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core BranchTargetALU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core WritebackStage",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core ICache",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core ICacheECC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core BranchPredictor",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core DbgTriggerEn",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1575,"ibex_simple_system u_core DbgHwBreakNum",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core SecureIbex",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1588,"ibex_simple_system u_core DmHaltAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1588,"ibex_simple_system u_core DmExceptionAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+179,"ibex_simple_system u_core clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core test_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1589,"ibex_simple_system u_core ram_cfg_i ram_cfg cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1590,"ibex_simple_system u_core ram_cfg_i ram_cfg cfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1589,"ibex_simple_system u_core ram_cfg_i rf_cfg cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1590,"ibex_simple_system u_core ram_cfg_i rf_cfg cfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core hart_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1592,"ibex_simple_system u_core boot_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+956,"ibex_simple_system u_core instr_req_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+956,"ibex_simple_system u_core instr_gnt_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+187,"ibex_simple_system u_core instr_rvalid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+957,"ibex_simple_system u_core instr_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+281,"ibex_simple_system u_core instr_rdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core instr_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+816,"ibex_simple_system u_core data_req_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+817,"ibex_simple_system u_core data_gnt_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+194,"ibex_simple_system u_core data_rvalid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+818,"ibex_simple_system u_core data_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+977,"ibex_simple_system u_core data_be_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+978,"ibex_simple_system u_core data_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+798,"ibex_simple_system u_core data_wdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+736,"ibex_simple_system u_core data_rdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+737,"ibex_simple_system u_core data_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core irq_software_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+182,"ibex_simple_system u_core irq_timer_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core irq_external_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1593,"ibex_simple_system u_core irq_fast_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 14,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core irq_nm_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core debug_req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+819,"ibex_simple_system u_core crash_dump_o current_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+820,"ibex_simple_system u_core crash_dump_o next_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+821,"ibex_simple_system u_core crash_dump_o last_data_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+822,"ibex_simple_system u_core crash_dump_o exception_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1594,"ibex_simple_system u_core fetch_enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core alert_minor_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core alert_major_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1525,"ibex_simple_system u_core core_sleep_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+302,"ibex_simple_system u_core rvfi_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+303,"ibex_simple_system u_core rvfi_order",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+305,"ibex_simple_system u_core rvfi_insn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+306,"ibex_simple_system u_core rvfi_trap",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+307,"ibex_simple_system u_core rvfi_halt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+308,"ibex_simple_system u_core rvfi_intr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+309,"ibex_simple_system u_core rvfi_mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+310,"ibex_simple_system u_core rvfi_ixl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+311,"ibex_simple_system u_core rvfi_rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+312,"ibex_simple_system u_core rvfi_rs2_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+313,"ibex_simple_system u_core rvfi_rs3_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+314,"ibex_simple_system u_core rvfi_rs1_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+315,"ibex_simple_system u_core rvfi_rs2_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+316,"ibex_simple_system u_core rvfi_rs3_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+317,"ibex_simple_system u_core rvfi_rd_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+318,"ibex_simple_system u_core rvfi_rd_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+319,"ibex_simple_system u_core rvfi_pc_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+320,"ibex_simple_system u_core rvfi_pc_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+321,"ibex_simple_system u_core rvfi_mem_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+322,"ibex_simple_system u_core rvfi_mem_rmask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+323,"ibex_simple_system u_core rvfi_mem_wmask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+324,"ibex_simple_system u_core rvfi_mem_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+325,"ibex_simple_system u_core rvfi_mem_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core PMPEnable",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1581,"ibex_simple_system u_core u_ibex_core PMPGranularity",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1582,"ibex_simple_system u_core u_ibex_core PMPNumRegions",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1583,"ibex_simple_system u_core u_ibex_core MHPMCounterNum",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1584,"ibex_simple_system u_core u_ibex_core MHPMCounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core RV32E",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1595,"ibex_simple_system u_core u_ibex_core RV32M",1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1596,"ibex_simple_system u_core u_ibex_core RV32B",2, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1597,"ibex_simple_system u_core u_ibex_core RegFile",3, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core BranchTargetALU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core WritebackStage",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core ICache",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core ICacheECC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core BranchPredictor",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core DbgTriggerEn",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1575,"ibex_simple_system u_core u_ibex_core DbgHwBreakNum",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core SecureIbex",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1588,"ibex_simple_system u_core u_ibex_core DmHaltAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1588,"ibex_simple_system u_core u_ibex_core DmExceptionAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+179,"ibex_simple_system u_core u_ibex_core clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core test_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1589,"ibex_simple_system u_core u_ibex_core ram_cfg_i ram_cfg cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1590,"ibex_simple_system u_core u_ibex_core ram_cfg_i ram_cfg cfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1589,"ibex_simple_system u_core u_ibex_core ram_cfg_i rf_cfg cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1590,"ibex_simple_system u_core u_ibex_core ram_cfg_i rf_cfg cfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core hart_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1592,"ibex_simple_system u_core u_ibex_core boot_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+956,"ibex_simple_system u_core u_ibex_core instr_req_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+956,"ibex_simple_system u_core u_ibex_core instr_gnt_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+187,"ibex_simple_system u_core u_ibex_core instr_rvalid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+957,"ibex_simple_system u_core u_ibex_core instr_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+281,"ibex_simple_system u_core u_ibex_core instr_rdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core instr_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+816,"ibex_simple_system u_core u_ibex_core data_req_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+817,"ibex_simple_system u_core u_ibex_core data_gnt_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+194,"ibex_simple_system u_core u_ibex_core data_rvalid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+818,"ibex_simple_system u_core u_ibex_core data_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+977,"ibex_simple_system u_core u_ibex_core data_be_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+978,"ibex_simple_system u_core u_ibex_core data_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+798,"ibex_simple_system u_core u_ibex_core data_wdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+736,"ibex_simple_system u_core u_ibex_core data_rdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+737,"ibex_simple_system u_core u_ibex_core data_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core irq_software_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+182,"ibex_simple_system u_core u_ibex_core irq_timer_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core irq_external_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1593,"ibex_simple_system u_core u_ibex_core irq_fast_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 14,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core irq_nm_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core debug_req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+819,"ibex_simple_system u_core u_ibex_core crash_dump_o current_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+820,"ibex_simple_system u_core u_ibex_core crash_dump_o next_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+821,"ibex_simple_system u_core u_ibex_core crash_dump_o last_data_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+822,"ibex_simple_system u_core u_ibex_core crash_dump_o exception_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+302,"ibex_simple_system u_core u_ibex_core rvfi_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+303,"ibex_simple_system u_core u_ibex_core rvfi_order",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+305,"ibex_simple_system u_core u_ibex_core rvfi_insn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+306,"ibex_simple_system u_core u_ibex_core rvfi_trap",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+307,"ibex_simple_system u_core u_ibex_core rvfi_halt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+308,"ibex_simple_system u_core u_ibex_core rvfi_intr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+309,"ibex_simple_system u_core u_ibex_core rvfi_mode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+310,"ibex_simple_system u_core u_ibex_core rvfi_ixl",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+311,"ibex_simple_system u_core u_ibex_core rvfi_rs1_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+312,"ibex_simple_system u_core u_ibex_core rvfi_rs2_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+313,"ibex_simple_system u_core u_ibex_core rvfi_rs3_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+314,"ibex_simple_system u_core u_ibex_core rvfi_rs1_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+315,"ibex_simple_system u_core u_ibex_core rvfi_rs2_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+316,"ibex_simple_system u_core u_ibex_core rvfi_rs3_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+317,"ibex_simple_system u_core u_ibex_core rvfi_rd_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+318,"ibex_simple_system u_core u_ibex_core rvfi_rd_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+319,"ibex_simple_system u_core u_ibex_core rvfi_pc_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+320,"ibex_simple_system u_core u_ibex_core rvfi_pc_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+321,"ibex_simple_system u_core u_ibex_core rvfi_mem_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+322,"ibex_simple_system u_core u_ibex_core rvfi_mem_rmask",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+323,"ibex_simple_system u_core u_ibex_core rvfi_mem_wmask",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+324,"ibex_simple_system u_core u_ibex_core rvfi_mem_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+325,"ibex_simple_system u_core u_ibex_core rvfi_mem_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1594,"ibex_simple_system u_core u_ibex_core fetch_enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core alert_minor_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core alert_major_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1525,"ibex_simple_system u_core u_ibex_core core_sleep_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1576,"ibex_simple_system u_core u_ibex_core PMP_NUM_CHAN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core DataIndTiming",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core DummyInstructions",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core PCIncrCheck",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core ShadowCSR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core SpecBranch",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core RegFileECC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1598,"ibex_simple_system u_core u_ibex_core RegFileDataWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core dummy_instr_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+823,"ibex_simple_system u_core u_ibex_core instr_valid_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+326,"ibex_simple_system u_core u_ibex_core instr_new_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+739,"ibex_simple_system u_core u_ibex_core instr_rdata_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+739,"ibex_simple_system u_core u_ibex_core instr_rdata_alu_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+740,"ibex_simple_system u_core u_ibex_core instr_rdata_c_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
        tracep->declBit(c+741,"ibex_simple_system u_core u_ibex_core instr_is_compressed_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1526,"ibex_simple_system u_core u_ibex_core instr_perf_count_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core instr_bp_taken_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+293,"ibex_simple_system u_core u_ibex_core instr_fetch_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+294,"ibex_simple_system u_core u_ibex_core instr_fetch_err_plus2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+295,"ibex_simple_system u_core u_ibex_core illegal_c_insn_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+742,"ibex_simple_system u_core u_ibex_core pc_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+743,"ibex_simple_system u_core u_ibex_core pc_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core pc_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+979+i*2,"ibex_simple_system u_core u_ibex_core imd_val_d_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 33,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+327+i*2,"ibex_simple_system u_core u_ibex_core imd_val_q_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 33,0);}}
        tracep->declBus(c+824,"ibex_simple_system u_core u_ibex_core imd_val_we_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+331,"ibex_simple_system u_core u_ibex_core data_ind_timing",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+332,"ibex_simple_system u_core u_ibex_core dummy_instr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+333,"ibex_simple_system u_core u_ibex_core dummy_instr_mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core dummy_instr_seed_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core dummy_instr_seed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+334,"ibex_simple_system u_core u_ibex_core icache_enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+825,"ibex_simple_system u_core u_ibex_core icache_inval",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core pc_mismatch_alert",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core csr_shadow_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+826,"ibex_simple_system u_core u_ibex_core instr_first_cycle_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+983,"ibex_simple_system u_core u_ibex_core instr_valid_clear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+984,"ibex_simple_system u_core u_ibex_core pc_set",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+985,"ibex_simple_system u_core u_ibex_core pc_set_spec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core nt_branch_mispredict",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"PC_BOOT", "PC_JUMP", "PC_EXC", "PC_ERET", 
                                                "PC_DRET", 
                                                "PC_BP"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101"};
            tracep->declDTypeEnum(4, "ibex_pkg::pc_sel_e", 6, 3, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+827,"ibex_simple_system u_core u_ibex_core pc_mux_id",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        {
            const char* __VenumItemNames[]
            = {"EXC_PC_EXC", "EXC_PC_IRQ", "EXC_PC_DBD", 
                                                "EXC_PC_DBG_EXC"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(5, "ibex_pkg::exc_pc_sel_e", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+828,"ibex_simple_system u_core u_ibex_core exc_pc_mux_id",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        {
            const char* __VenumItemNames[]
            = {"EXC_CAUSE_IRQ_SOFTWARE_M", "EXC_CAUSE_IRQ_TIMER_M", 
                                                "EXC_CAUSE_IRQ_EXTERNAL_M", 
                                                "EXC_CAUSE_IRQ_NM", 
                                                "EXC_CAUSE_INSN_ADDR_MISA", 
                                                "EXC_CAUSE_INSTR_ACCESS_FAULT", 
                                                "EXC_CAUSE_ILLEGAL_INSN", 
                                                "EXC_CAUSE_BREAKPOINT", 
                                                "EXC_CAUSE_LOAD_ACCESS_FAULT", 
                                                "EXC_CAUSE_STORE_ACCESS_FAULT", 
                                                "EXC_CAUSE_ECALL_UMODE", 
                                                "EXC_CAUSE_ECALL_MMODE"};
            const char* __VenumItemValues[]
            = {"100011", "100111", "101011", "111111", 
                                                "0", 
                                                "1", 
                                                "10", 
                                                "11", 
                                                "101", 
                                                "111", 
                                                "1000", 
                                                "1011"};
            tracep->declDTypeEnum(6, "ibex_pkg::exc_cause_e", 12, 6, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+986,"ibex_simple_system u_core u_ibex_core exc_cause",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+757,"ibex_simple_system u_core u_ibex_core lsu_load_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+758,"ibex_simple_system u_core u_ibex_core lsu_store_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+335,"ibex_simple_system u_core u_ibex_core lsu_addr_incr_req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+336,"ibex_simple_system u_core u_ibex_core lsu_addr_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+987,"ibex_simple_system u_core u_ibex_core branch_target_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+988,"ibex_simple_system u_core u_ibex_core branch_decision",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+989,"ibex_simple_system u_core u_ibex_core ctrl_busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+694,"ibex_simple_system u_core u_ibex_core if_busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+337,"ibex_simple_system u_core u_ibex_core lsu_busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+695,"ibex_simple_system u_core u_ibex_core core_busy_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+195,"ibex_simple_system u_core u_ibex_core core_busy_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+744,"ibex_simple_system u_core u_ibex_core rf_raddr_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+759,"ibex_simple_system u_core u_ibex_core rf_rdata_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+745,"ibex_simple_system u_core u_ibex_core rf_raddr_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+760,"ibex_simple_system u_core u_ibex_core rf_rdata_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+829,"ibex_simple_system u_core u_ibex_core rf_ren_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+830,"ibex_simple_system u_core u_ibex_core rf_ren_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+746,"ibex_simple_system u_core u_ibex_core rf_waddr_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+990,"ibex_simple_system u_core u_ibex_core rf_wdata_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core rf_wdata_fwd_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+761,"ibex_simple_system u_core u_ibex_core rf_wdata_lsu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+799,"ibex_simple_system u_core u_ibex_core rf_we_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+762,"ibex_simple_system u_core u_ibex_core rf_we_lsu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+746,"ibex_simple_system u_core u_ibex_core rf_waddr_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+927,"ibex_simple_system u_core u_ibex_core rf_wdata_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+928,"ibex_simple_system u_core u_ibex_core rf_we_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core rf_rd_a_wb_match",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core rf_rd_b_wb_match",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"ALU_ADD", "ALU_SUB", "ALU_XOR", "ALU_OR", 
                                                "ALU_AND", 
                                                "ALU_XNOR", 
                                                "ALU_ORN", 
                                                "ALU_ANDN", 
                                                "ALU_SRA", 
                                                "ALU_SRL", 
                                                "ALU_SLL", 
                                                "ALU_SRO", 
                                                "ALU_SLO", 
                                                "ALU_ROR", 
                                                "ALU_ROL", 
                                                "ALU_GREV", 
                                                "ALU_GORC", 
                                                "ALU_SHFL", 
                                                "ALU_UNSHFL", 
                                                "ALU_LT", 
                                                "ALU_LTU", 
                                                "ALU_GE", 
                                                "ALU_GEU", 
                                                "ALU_EQ", 
                                                "ALU_NE", 
                                                "ALU_MIN", 
                                                "ALU_MINU", 
                                                "ALU_MAX", 
                                                "ALU_MAXU", 
                                                "ALU_PACK", 
                                                "ALU_PACKU", 
                                                "ALU_PACKH", 
                                                "ALU_SEXTB", 
                                                "ALU_SEXTH", 
                                                "ALU_CLZ", 
                                                "ALU_CTZ", 
                                                "ALU_PCNT", 
                                                "ALU_SLT", 
                                                "ALU_SLTU", 
                                                "ALU_CMOV", 
                                                "ALU_CMIX", 
                                                "ALU_FSL", 
                                                "ALU_FSR", 
                                                "ALU_SBSET", 
                                                "ALU_SBCLR", 
                                                "ALU_SBINV", 
                                                "ALU_SBEXT", 
                                                "ALU_BEXT", 
                                                "ALU_BDEP", 
                                                "ALU_BFP", 
                                                "ALU_CLMUL", 
                                                "ALU_CLMULR", 
                                                "ALU_CLMULH", 
                                                "ALU_CRC32_B", 
                                                "ALU_CRC32C_B", 
                                                "ALU_CRC32_H", 
                                                "ALU_CRC32C_H", 
                                                "ALU_CRC32_W", 
                                                "ALU_CRC32C_W"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101", 
                                                "110", 
                                                "111", 
                                                "1000", 
                                                "1001", 
                                                "1010", 
                                                "1011", 
                                                "1100", 
                                                "1101", 
                                                "1110", 
                                                "1111", 
                                                "10000", 
                                                "10001", 
                                                "10010", 
                                                "10011", 
                                                "10100", 
                                                "10101", 
                                                "10110", 
                                                "10111", 
                                                "11000", 
                                                "11001", 
                                                "11010", 
                                                "11011", 
                                                "11100", 
                                                "11101", 
                                                "11110", 
                                                "11111", 
                                                "100000", 
                                                "100001", 
                                                "100010", 
                                                "100011", 
                                                "100100", 
                                                "100101", 
                                                "100110", 
                                                "100111", 
                                                "101000", 
                                                "101001", 
                                                "101010", 
                                                "101011", 
                                                "101100", 
                                                "101101", 
                                                "101110", 
                                                "101111", 
                                                "110000", 
                                                "110001", 
                                                "110010", 
                                                "110011", 
                                                "110100", 
                                                "110101", 
                                                "110110", 
                                                "110111", 
                                                "111000", 
                                                "111001", 
                                                "111010"};
            tracep->declDTypeEnum(7, "ibex_pkg::alu_op_e", 59, 6, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+831,"ibex_simple_system u_core u_ibex_core alu_operator_ex",7, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+991,"ibex_simple_system u_core u_ibex_core alu_operand_a_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+992,"ibex_simple_system u_core u_ibex_core alu_operand_b_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core bt_a_operand",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core bt_b_operand",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+987,"ibex_simple_system u_core u_ibex_core alu_adder_result_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+993,"ibex_simple_system u_core u_ibex_core result_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+832,"ibex_simple_system u_core u_ibex_core mult_en_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+833,"ibex_simple_system u_core u_ibex_core div_en_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+834,"ibex_simple_system u_core u_ibex_core mult_sel_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+835,"ibex_simple_system u_core u_ibex_core div_sel_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"MD_OP_MULL", "MD_OP_MULH", "MD_OP_DIV", 
                                                "MD_OP_REM"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(8, "ibex_pkg::md_op_e", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+836,"ibex_simple_system u_core u_ibex_core multdiv_operator_ex",8, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+837,"ibex_simple_system u_core u_ibex_core multdiv_signed_mode_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+759,"ibex_simple_system u_core u_ibex_core multdiv_operand_a_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+760,"ibex_simple_system u_core u_ibex_core multdiv_operand_b_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1594,"ibex_simple_system u_core u_ibex_core multdiv_ready_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+838,"ibex_simple_system u_core u_ibex_core csr_access",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"CSR_OP_READ", "CSR_OP_WRITE", "CSR_OP_SET", 
                                                "CSR_OP_CLEAR"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(9, "ibex_pkg::csr_op_e", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+839,"ibex_simple_system u_core u_ibex_core csr_op",9, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+994,"ibex_simple_system u_core u_ibex_core csr_op_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"CSR_MHARTID", "CSR_MSTATUS", "CSR_MISA", 
                                                "CSR_MIE", 
                                                "CSR_MTVEC", 
                                                "CSR_MCOUNTEREN", 
                                                "CSR_MSCRATCH", 
                                                "CSR_MEPC", 
                                                "CSR_MCAUSE", 
                                                "CSR_MTVAL", 
                                                "CSR_MIP", 
                                                "CSR_MSECCFG", 
                                                "CSR_PMPCFG0", 
                                                "CSR_PMPCFG1", 
                                                "CSR_PMPCFG2", 
                                                "CSR_PMPCFG3", 
                                                "CSR_PMPADDR0", 
                                                "CSR_PMPADDR1", 
                                                "CSR_PMPADDR2", 
                                                "CSR_PMPADDR3", 
                                                "CSR_PMPADDR4", 
                                                "CSR_PMPADDR5", 
                                                "CSR_PMPADDR6", 
                                                "CSR_PMPADDR7", 
                                                "CSR_PMPADDR8", 
                                                "CSR_PMPADDR9", 
                                                "CSR_PMPADDR10", 
                                                "CSR_PMPADDR11", 
                                                "CSR_PMPADDR12", 
                                                "CSR_PMPADDR13", 
                                                "CSR_PMPADDR14", 
                                                "CSR_PMPADDR15", 
                                                "CSR_TSELECT", 
                                                "CSR_TDATA1", 
                                                "CSR_TDATA2", 
                                                "CSR_TDATA3", 
                                                "CSR_MCONTEXT", 
                                                "CSR_SCONTEXT", 
                                                "CSR_DCSR", 
                                                "CSR_DPC", 
                                                "CSR_DSCRATCH0", 
                                                "CSR_DSCRATCH1", 
                                                "CSR_MCOUNTINHIBIT", 
                                                "CSR_MHPMEVENT3", 
                                                "CSR_MHPMEVENT4", 
                                                "CSR_MHPMEVENT5", 
                                                "CSR_MHPMEVENT6", 
                                                "CSR_MHPMEVENT7", 
                                                "CSR_MHPMEVENT8", 
                                                "CSR_MHPMEVENT9", 
                                                "CSR_MHPMEVENT10", 
                                                "CSR_MHPMEVENT11", 
                                                "CSR_MHPMEVENT12", 
                                                "CSR_MHPMEVENT13", 
                                                "CSR_MHPMEVENT14", 
                                                "CSR_MHPMEVENT15", 
                                                "CSR_MHPMEVENT16", 
                                                "CSR_MHPMEVENT17", 
                                                "CSR_MHPMEVENT18", 
                                                "CSR_MHPMEVENT19", 
                                                "CSR_MHPMEVENT20", 
                                                "CSR_MHPMEVENT21", 
                                                "CSR_MHPMEVENT22", 
                                                "CSR_MHPMEVENT23", 
                                                "CSR_MHPMEVENT24", 
                                                "CSR_MHPMEVENT25", 
                                                "CSR_MHPMEVENT26", 
                                                "CSR_MHPMEVENT27", 
                                                "CSR_MHPMEVENT28", 
                                                "CSR_MHPMEVENT29", 
                                                "CSR_MHPMEVENT30", 
                                                "CSR_MHPMEVENT31", 
                                                "CSR_MCYCLE", 
                                                "CSR_MINSTRET", 
                                                "CSR_MHPMCOUNTER3", 
                                                "CSR_MHPMCOUNTER4", 
                                                "CSR_MHPMCOUNTER5", 
                                                "CSR_MHPMCOUNTER6", 
                                                "CSR_MHPMCOUNTER7", 
                                                "CSR_MHPMCOUNTER8", 
                                                "CSR_MHPMCOUNTER9", 
                                                "CSR_MHPMCOUNTER10", 
                                                "CSR_MHPMCOUNTER11", 
                                                "CSR_MHPMCOUNTER12", 
                                                "CSR_MHPMCOUNTER13", 
                                                "CSR_MHPMCOUNTER14", 
                                                "CSR_MHPMCOUNTER15", 
                                                "CSR_MHPMCOUNTER16", 
                                                "CSR_MHPMCOUNTER17", 
                                                "CSR_MHPMCOUNTER18", 
                                                "CSR_MHPMCOUNTER19", 
                                                "CSR_MHPMCOUNTER20", 
                                                "CSR_MHPMCOUNTER21", 
                                                "CSR_MHPMCOUNTER22", 
                                                "CSR_MHPMCOUNTER23", 
                                                "CSR_MHPMCOUNTER24", 
                                                "CSR_MHPMCOUNTER25", 
                                                "CSR_MHPMCOUNTER26", 
                                                "CSR_MHPMCOUNTER27", 
                                                "CSR_MHPMCOUNTER28", 
                                                "CSR_MHPMCOUNTER29", 
                                                "CSR_MHPMCOUNTER30", 
                                                "CSR_MHPMCOUNTER31", 
                                                "CSR_MCYCLEH", 
                                                "CSR_MINSTRETH", 
                                                "CSR_MHPMCOUNTER3H", 
                                                "CSR_MHPMCOUNTER4H", 
                                                "CSR_MHPMCOUNTER5H", 
                                                "CSR_MHPMCOUNTER6H", 
                                                "CSR_MHPMCOUNTER7H", 
                                                "CSR_MHPMCOUNTER8H", 
                                                "CSR_MHPMCOUNTER9H", 
                                                "CSR_MHPMCOUNTER10H", 
                                                "CSR_MHPMCOUNTER11H", 
                                                "CSR_MHPMCOUNTER12H", 
                                                "CSR_MHPMCOUNTER13H", 
                                                "CSR_MHPMCOUNTER14H", 
                                                "CSR_MHPMCOUNTER15H", 
                                                "CSR_MHPMCOUNTER16H", 
                                                "CSR_MHPMCOUNTER17H", 
                                                "CSR_MHPMCOUNTER18H", 
                                                "CSR_MHPMCOUNTER19H", 
                                                "CSR_MHPMCOUNTER20H", 
                                                "CSR_MHPMCOUNTER21H", 
                                                "CSR_MHPMCOUNTER22H", 
                                                "CSR_MHPMCOUNTER23H", 
                                                "CSR_MHPMCOUNTER24H", 
                                                "CSR_MHPMCOUNTER25H", 
                                                "CSR_MHPMCOUNTER26H", 
                                                "CSR_MHPMCOUNTER27H", 
                                                "CSR_MHPMCOUNTER28H", 
                                                "CSR_MHPMCOUNTER29H", 
                                                "CSR_MHPMCOUNTER30H", 
                                                "CSR_MHPMCOUNTER31H", 
                                                "CSR_CPUCTRL", 
                                                "CSR_SECURESEED"};
            const char* __VenumItemValues[]
            = {"111100010100", "1100000000", "1100000001", 
                                                "1100000100", 
                                                "1100000101", 
                                                "1100000110", 
                                                "1101000000", 
                                                "1101000001", 
                                                "1101000010", 
                                                "1101000011", 
                                                "1101000100", 
                                                "1110010000", 
                                                "1110100000", 
                                                "1110100001", 
                                                "1110100010", 
                                                "1110100011", 
                                                "1110110000", 
                                                "1110110001", 
                                                "1110110010", 
                                                "1110110011", 
                                                "1110110100", 
                                                "1110110101", 
                                                "1110110110", 
                                                "1110110111", 
                                                "1110111000", 
                                                "1110111001", 
                                                "1110111010", 
                                                "1110111011", 
                                                "1110111100", 
                                                "1110111101", 
                                                "1110111110", 
                                                "1110111111", 
                                                "11110100000", 
                                                "11110100001", 
                                                "11110100010", 
                                                "11110100011", 
                                                "11110101000", 
                                                "11110101010", 
                                                "11110110000", 
                                                "11110110001", 
                                                "11110110010", 
                                                "11110110011", 
                                                "1100100000", 
                                                "1100100011", 
                                                "1100100100", 
                                                "1100100101", 
                                                "1100100110", 
                                                "1100100111", 
                                                "1100101000", 
                                                "1100101001", 
                                                "1100101010", 
                                                "1100101011", 
                                                "1100101100", 
                                                "1100101101", 
                                                "1100101110", 
                                                "1100101111", 
                                                "1100110000", 
                                                "1100110001", 
                                                "1100110010", 
                                                "1100110011", 
                                                "1100110100", 
                                                "1100110101", 
                                                "1100110110", 
                                                "1100110111", 
                                                "1100111000", 
                                                "1100111001", 
                                                "1100111010", 
                                                "1100111011", 
                                                "1100111100", 
                                                "1100111101", 
                                                "1100111110", 
                                                "1100111111", 
                                                "101100000000", 
                                                "101100000010", 
                                                "101100000011", 
                                                "101100000100", 
                                                "101100000101", 
                                                "101100000110", 
                                                "101100000111", 
                                                "101100001000", 
                                                "101100001001", 
                                                "101100001010", 
                                                "101100001011", 
                                                "101100001100", 
                                                "101100001101", 
                                                "101100001110", 
                                                "101100001111", 
                                                "101100010000", 
                                                "101100010001", 
                                                "101100010010", 
                                                "101100010011", 
                                                "101100010100", 
                                                "101100010101", 
                                                "101100010110", 
                                                "101100010111", 
                                                "101100011000", 
                                                "101100011001", 
                                                "101100011010", 
                                                "101100011011", 
                                                "101100011100", 
                                                "101100011101", 
                                                "101100011110", 
                                                "101100011111", 
                                                "101110000000", 
                                                "101110000010", 
                                                "101110000011", 
                                                "101110000100", 
                                                "101110000101", 
                                                "101110000110", 
                                                "101110000111", 
                                                "101110001000", 
                                                "101110001001", 
                                                "101110001010", 
                                                "101110001011", 
                                                "101110001100", 
                                                "101110001101", 
                                                "101110001110", 
                                                "101110001111", 
                                                "101110010000", 
                                                "101110010001", 
                                                "101110010010", 
                                                "101110010011", 
                                                "101110010100", 
                                                "101110010101", 
                                                "101110010110", 
                                                "101110010111", 
                                                "101110011000", 
                                                "101110011001", 
                                                "101110011010", 
                                                "101110011011", 
                                                "101110011100", 
                                                "101110011101", 
                                                "101110011110", 
                                                "101110011111", 
                                                "11111000000", 
                                                "11111000001"};
            tracep->declDTypeEnum(10, "ibex_pkg::csr_num_e", 136, 12, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+995,"ibex_simple_system u_core u_ibex_core csr_addr",10, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declBus(c+996,"ibex_simple_system u_core u_ibex_core csr_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+991,"ibex_simple_system u_core u_ibex_core csr_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+997,"ibex_simple_system u_core u_ibex_core illegal_csr_insn_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+818,"ibex_simple_system u_core u_ibex_core lsu_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+840,"ibex_simple_system u_core u_ibex_core lsu_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+841,"ibex_simple_system u_core u_ibex_core lsu_sign_ext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+842,"ibex_simple_system u_core u_ibex_core lsu_req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+760,"ibex_simple_system u_core u_ibex_core lsu_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+686,"ibex_simple_system u_core u_ibex_core lsu_req_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+998,"ibex_simple_system u_core u_ibex_core id_in_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+843,"ibex_simple_system u_core u_ibex_core ex_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+763,"ibex_simple_system u_core u_ibex_core lsu_resp_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+764,"ibex_simple_system u_core u_ibex_core lsu_resp_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+844,"ibex_simple_system u_core u_ibex_core instr_req_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+999,"ibex_simple_system u_core u_ibex_core en_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"WB_INSTR_LOAD", "WB_INSTR_STORE", "WB_INSTR_OTHER"};
            const char* __VenumItemValues[]
            = {"0", "1", "10"};
            tracep->declDTypeEnum(11, "ibex_pkg::wb_instr_type_e", 3, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+1599,"ibex_simple_system u_core u_ibex_core instr_type_wb",11, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+1594,"ibex_simple_system u_core u_ibex_core ready_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core rf_write_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core outstanding_load_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core outstanding_store_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+765,"ibex_simple_system u_core u_ibex_core irq_pending",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+338,"ibex_simple_system u_core u_ibex_core nmi_mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+766,"ibex_simple_system u_core u_ibex_core irqs irq_software",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+767,"ibex_simple_system u_core u_ibex_core irqs irq_timer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+768,"ibex_simple_system u_core u_ibex_core irqs irq_external",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+769,"ibex_simple_system u_core u_ibex_core irqs irq_fast",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 14,0);
        tracep->declBit(c+339,"ibex_simple_system u_core u_ibex_core csr_mstatus_mie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+340,"ibex_simple_system u_core u_ibex_core csr_mepc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+341,"ibex_simple_system u_core u_ibex_core csr_depc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+13+i*2,"ibex_simple_system u_core u_ibex_core csr_pmp_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 33,0);}}
        tracep->declBit(c+21,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(0) lock",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"PMP_MODE_OFF", "PMP_MODE_TOR", "PMP_MODE_NA4", 
                                                "PMP_MODE_NAPOT"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(12, "ibex_pkg::pmp_cfg_mode_e", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+22,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(0) mode",12, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+23,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(0) exec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+24,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(0) write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+25,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(0) read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+26,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(1) lock",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+27,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(1) mode",12, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+28,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(1) exec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+29,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(1) write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+30,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(1) read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+31,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(2) lock",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+32,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(2) mode",12, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+33,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(2) exec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+34,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(2) write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+35,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(2) read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+36,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(3) lock",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+37,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(3) mode",12, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+38,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(3) exec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+39,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(3) write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+40,"ibex_simple_system u_core u_ibex_core csr_pmp_cfg(3) read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1600,"ibex_simple_system u_core u_ibex_core csr_pmp_mseccfg rlb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1601,"ibex_simple_system u_core u_ibex_core csr_pmp_mseccfg mmwp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1602,"ibex_simple_system u_core u_ibex_core csr_pmp_mseccfg mml",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {int i; for (i=0; i<2; i++) {
                tracep->declBit(c+41+i*1,"ibex_simple_system u_core u_ibex_core pmp_req_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        tracep->declBit(c+1000,"ibex_simple_system u_core u_ibex_core instr_req_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+845,"ibex_simple_system u_core u_ibex_core data_req_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1001,"ibex_simple_system u_core u_ibex_core csr_save_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+846,"ibex_simple_system u_core u_ibex_core csr_save_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core csr_save_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+847,"ibex_simple_system u_core u_ibex_core csr_restore_mret_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+848,"ibex_simple_system u_core u_ibex_core csr_restore_dret_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1002,"ibex_simple_system u_core u_ibex_core csr_save_cause",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1003,"ibex_simple_system u_core u_ibex_core csr_mtvec_init",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+342,"ibex_simple_system u_core u_ibex_core csr_mtvec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+849,"ibex_simple_system u_core u_ibex_core csr_mtval",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+343,"ibex_simple_system u_core u_ibex_core csr_mstatus_tw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"PRIV_LVL_M", "PRIV_LVL_H", "PRIV_LVL_S", 
                                                "PRIV_LVL_U"};
            const char* __VenumItemValues[]
            = {"11", "10", "1", "0"};
            tracep->declDTypeEnum(13, "ibex_pkg::priv_lvl_e", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+344,"ibex_simple_system u_core u_ibex_core priv_mode_id",13, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+1004,"ibex_simple_system u_core u_ibex_core priv_mode_if",13, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+345,"ibex_simple_system u_core u_ibex_core priv_mode_lsu",13, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+346,"ibex_simple_system u_core u_ibex_core debug_mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"DBG_CAUSE_NONE", "DBG_CAUSE_EBREAK", 
                                                "DBG_CAUSE_TRIGGER", 
                                                "DBG_CAUSE_HALTREQ", 
                                                "DBG_CAUSE_STEP"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100"};
            tracep->declDTypeEnum(14, "ibex_pkg::dbg_cause_e", 5, 3, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+850,"ibex_simple_system u_core u_ibex_core debug_cause",14, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+851,"ibex_simple_system u_core u_ibex_core debug_csr_save",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+347,"ibex_simple_system u_core u_ibex_core debug_single_step",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+348,"ibex_simple_system u_core u_ibex_core debug_ebreakm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+349,"ibex_simple_system u_core u_ibex_core debug_ebreaku",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core trigger_match",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+999,"ibex_simple_system u_core u_ibex_core instr_id_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core instr_done_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1005,"ibex_simple_system u_core u_ibex_core perf_instr_ret_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1527,"ibex_simple_system u_core u_ibex_core perf_instr_ret_compressed_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+929,"ibex_simple_system u_core u_ibex_core perf_iside_wait",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1528,"ibex_simple_system u_core u_ibex_core perf_dside_wait",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+930,"ibex_simple_system u_core u_ibex_core perf_mul_wait",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+931,"ibex_simple_system u_core u_ibex_core perf_div_wait",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+852,"ibex_simple_system u_core u_ibex_core perf_jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+853,"ibex_simple_system u_core u_ibex_core perf_branch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+854,"ibex_simple_system u_core u_ibex_core perf_tbranch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+855,"ibex_simple_system u_core u_ibex_core perf_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+856,"ibex_simple_system u_core u_ibex_core perf_store",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1006,"ibex_simple_system u_core u_ibex_core illegal_insn_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1006,"ibex_simple_system u_core u_ibex_core unused_illegal_insn_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+326,"ibex_simple_system u_core u_ibex_core rvfi_instr_new_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+857,"ibex_simple_system u_core u_ibex_core rvfi_intr_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+350,"ibex_simple_system u_core u_ibex_core rvfi_intr_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1007,"ibex_simple_system u_core u_ibex_core rvfi_set_trap_pc_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+351,"ibex_simple_system u_core u_ibex_core rvfi_set_trap_pc_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+747,"ibex_simple_system u_core u_ibex_core rvfi_insn_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+858,"ibex_simple_system u_core u_ibex_core rvfi_rs1_addr_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+352,"ibex_simple_system u_core u_ibex_core rvfi_rs1_addr_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+859,"ibex_simple_system u_core u_ibex_core rvfi_rs2_addr_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+353,"ibex_simple_system u_core u_ibex_core rvfi_rs2_addr_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+1529,"ibex_simple_system u_core u_ibex_core rvfi_rs3_addr_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+1008,"ibex_simple_system u_core u_ibex_core rvfi_rs1_data_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+354,"ibex_simple_system u_core u_ibex_core rvfi_rs1_data_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1009,"ibex_simple_system u_core u_ibex_core rvfi_rs2_data_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+355,"ibex_simple_system u_core u_ibex_core rvfi_rs2_data_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1530,"ibex_simple_system u_core u_ibex_core rvfi_rs3_data_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+746,"ibex_simple_system u_core u_ibex_core rvfi_rd_addr_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+356,"ibex_simple_system u_core u_ibex_core rvfi_rd_addr_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+1010,"ibex_simple_system u_core u_ibex_core rvfi_rd_addr_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+800,"ibex_simple_system u_core u_ibex_core rvfi_rd_wdata_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1011,"ibex_simple_system u_core u_ibex_core rvfi_rd_wdata_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+357,"ibex_simple_system u_core u_ibex_core rvfi_rd_wdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1012,"ibex_simple_system u_core u_ibex_core rvfi_rd_we_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+860,"ibex_simple_system u_core u_ibex_core rvfi_mem_mask_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+770,"ibex_simple_system u_core u_ibex_core rvfi_mem_rdata_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+358,"ibex_simple_system u_core u_ibex_core rvfi_mem_rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1013,"ibex_simple_system u_core u_ibex_core rvfi_mem_wdata_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+359,"ibex_simple_system u_core u_ibex_core rvfi_mem_wdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1014,"ibex_simple_system u_core u_ibex_core rvfi_mem_addr_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+360,"ibex_simple_system u_core u_ibex_core rvfi_mem_addr_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1531,"ibex_simple_system u_core u_ibex_core clock_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+196,"ibex_simple_system u_core u_ibex_core fetch_enable_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+990,"ibex_simple_system u_core u_ibex_core rf_wdata_wb_ecc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+759,"ibex_simple_system u_core u_ibex_core rf_rdata_a_ecc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+760,"ibex_simple_system u_core u_ibex_core rf_rdata_b_ecc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core rf_ecc_err_comb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1572,"ibex_simple_system u_core u_ibex_core RVFI_STAGES",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+361+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+362+i*2,"ibex_simple_system u_core u_ibex_core rvfi_stage_order",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+364+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_insn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+365+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_trap",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+366+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_halt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+367+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_intr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+368+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 1,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+369+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_ixl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 1,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+370+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 4,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+371+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_rs2_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 4,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+372+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_rs3_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 4,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+373+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_rs1_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+374+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_rs2_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+375+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_rs3_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+376+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_rd_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 4,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+377+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_rd_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+378+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_pc_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+379+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_pc_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+380+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_mem_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+381+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_mem_rmask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 3,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+382+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_mem_wmask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 3,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+383+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_mem_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+384+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_mem_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+1015+i*1,"ibex_simple_system u_core u_ibex_core rvfi_stage_valid_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        tracep->declBit(c+829,"ibex_simple_system u_core u_ibex_core gen_no_regfile_ecc unused_rf_ren_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+830,"ibex_simple_system u_core u_ibex_core gen_no_regfile_ecc unused_rf_ren_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core gen_no_regfile_ecc unused_rf_rd_a_wb_match",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core gen_no_regfile_ecc unused_rf_rd_b_wb_match",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1004,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_priv_lvl_if",13, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+345,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_priv_lvl_ls",13, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+43+i*2,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 33,0);}}
        tracep->declBit(c+51,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(0) lock",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+52,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(0) mode",12, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+53,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(0) exec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+54,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(0) write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+55,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(0) read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+56,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(1) lock",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+57,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(1) mode",12, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+58,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(1) exec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+59,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(1) write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+60,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(1) read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+61,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(2) lock",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+62,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(2) mode",12, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+63,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(2) exec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+64,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(2) write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+65,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(2) read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+66,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(3) lock",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+67,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(3) mode",12, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+68,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(3) exec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+69,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(3) write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+70,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_cfg(3) read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1600,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_mseccfg rlb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1601,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_mseccfg mmwp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1602,"ibex_simple_system u_core u_ibex_core g_no_pmp unused_csr_pmp_mseccfg mml",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core core_clock_gate_i NoFpgaGate",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+179,"ibex_simple_system u_core u_ibex_core core_clock_gate_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1531,"ibex_simple_system u_core u_ibex_core core_clock_gate_i en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core core_clock_gate_i test_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core core_clock_gate_i clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        {
            const char* __VenumItemNames[]
            = {"ImplGeneric", "ImplBadbit", "ImplXilinx"};
            const char* __VenumItemValues[]
            = {"0", "1", "10"};
            tracep->declDTypeEnum(15, "prim_pkg::impl_e", 3, 32, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+1603,"ibex_simple_system u_core u_ibex_core core_clock_gate_i Impl",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core core_clock_gate_i gen_generic u_impl_generic NoFpgaGate",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+179,"ibex_simple_system u_core u_ibex_core core_clock_gate_i gen_generic u_impl_generic clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1531,"ibex_simple_system u_core u_ibex_core core_clock_gate_i gen_generic u_impl_generic en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core core_clock_gate_i gen_generic u_impl_generic test_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core core_clock_gate_i gen_generic u_impl_generic clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+181,"ibex_simple_system u_core u_ibex_core core_clock_gate_i gen_generic u_impl_generic en_latch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1588,"ibex_simple_system u_core u_ibex_core if_stage_i DmHaltAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1588,"ibex_simple_system u_core u_ibex_core if_stage_i DmExceptionAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core if_stage_i DummyInstructions",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core if_stage_i ICache",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core if_stage_i ICacheECC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core if_stage_i PCIncrCheck",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core if_stage_i BranchPredictor",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core if_stage_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core if_stage_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1589,"ibex_simple_system u_core u_ibex_core if_stage_i ram_cfg_i ram_cfg cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1590,"ibex_simple_system u_core u_ibex_core if_stage_i ram_cfg_i ram_cfg cfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1589,"ibex_simple_system u_core u_ibex_core if_stage_i ram_cfg_i rf_cfg cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1590,"ibex_simple_system u_core u_ibex_core if_stage_i ram_cfg_i rf_cfg cfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1592,"ibex_simple_system u_core u_ibex_core if_stage_i boot_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+844,"ibex_simple_system u_core u_ibex_core if_stage_i req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1000,"ibex_simple_system u_core u_ibex_core if_stage_i instr_req_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+957,"ibex_simple_system u_core u_ibex_core if_stage_i instr_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+956,"ibex_simple_system u_core u_ibex_core if_stage_i instr_gnt_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+187,"ibex_simple_system u_core u_ibex_core if_stage_i instr_rvalid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+281,"ibex_simple_system u_core u_ibex_core if_stage_i instr_rdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core if_stage_i instr_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+71,"ibex_simple_system u_core u_ibex_core if_stage_i instr_pmp_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+823,"ibex_simple_system u_core u_ibex_core if_stage_i instr_valid_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+326,"ibex_simple_system u_core u_ibex_core if_stage_i instr_new_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+739,"ibex_simple_system u_core u_ibex_core if_stage_i instr_rdata_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+739,"ibex_simple_system u_core u_ibex_core if_stage_i instr_rdata_alu_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+740,"ibex_simple_system u_core u_ibex_core if_stage_i instr_rdata_c_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBit(c+741,"ibex_simple_system u_core u_ibex_core if_stage_i instr_is_compressed_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core if_stage_i instr_bp_taken_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+293,"ibex_simple_system u_core u_ibex_core if_stage_i instr_fetch_err_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+294,"ibex_simple_system u_core u_ibex_core if_stage_i instr_fetch_err_plus2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+295,"ibex_simple_system u_core u_ibex_core if_stage_i illegal_c_insn_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core if_stage_i dummy_instr_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+742,"ibex_simple_system u_core u_ibex_core if_stage_i pc_if_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+743,"ibex_simple_system u_core u_ibex_core if_stage_i pc_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+983,"ibex_simple_system u_core u_ibex_core if_stage_i instr_valid_clear_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+984,"ibex_simple_system u_core u_ibex_core if_stage_i pc_set_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+985,"ibex_simple_system u_core u_ibex_core if_stage_i pc_set_spec_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+827,"ibex_simple_system u_core u_ibex_core if_stage_i pc_mux_i",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core if_stage_i nt_branch_mispredict_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+828,"ibex_simple_system u_core u_ibex_core if_stage_i exc_pc_mux_i",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+986,"ibex_simple_system u_core u_ibex_core if_stage_i exc_cause",6,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+332,"ibex_simple_system u_core u_ibex_core if_stage_i dummy_instr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+333,"ibex_simple_system u_core u_ibex_core if_stage_i dummy_instr_mask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core if_stage_i dummy_instr_seed_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core if_stage_i dummy_instr_seed_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+334,"ibex_simple_system u_core u_ibex_core if_stage_i icache_enable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+825,"ibex_simple_system u_core u_ibex_core if_stage_i icache_inval_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+987,"ibex_simple_system u_core u_ibex_core if_stage_i branch_target_ex_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+340,"ibex_simple_system u_core u_ibex_core if_stage_i csr_mepc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+341,"ibex_simple_system u_core u_ibex_core if_stage_i csr_depc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+342,"ibex_simple_system u_core u_ibex_core if_stage_i csr_mtvec_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1003,"ibex_simple_system u_core u_ibex_core if_stage_i csr_mtvec_init_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+998,"ibex_simple_system u_core u_ibex_core if_stage_i id_in_ready_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core if_stage_i pc_mismatch_alert_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+694,"ibex_simple_system u_core u_ibex_core if_stage_i if_busy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1532,"ibex_simple_system u_core u_ibex_core if_stage_i instr_valid_id_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+823,"ibex_simple_system u_core u_ibex_core if_stage_i instr_valid_id_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1016,"ibex_simple_system u_core u_ibex_core if_stage_i instr_new_id_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+326,"ibex_simple_system u_core u_ibex_core if_stage_i instr_new_id_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+694,"ibex_simple_system u_core u_ibex_core if_stage_i prefetch_busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+984,"ibex_simple_system u_core u_ibex_core if_stage_i branch_req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+985,"ibex_simple_system u_core u_ibex_core if_stage_i branch_spec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core if_stage_i predicted_branch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1017,"ibex_simple_system u_core u_ibex_core if_stage_i fetch_addr_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1018,"ibex_simple_system u_core u_ibex_core if_stage_i unused_fetch_addr_n0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+771,"ibex_simple_system u_core u_ibex_core if_stage_i fetch_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+998,"ibex_simple_system u_core u_ibex_core if_stage_i fetch_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+772,"ibex_simple_system u_core u_ibex_core if_stage_i fetch_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+742,"ibex_simple_system u_core u_ibex_core if_stage_i fetch_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+773,"ibex_simple_system u_core u_ibex_core if_stage_i fetch_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1533,"ibex_simple_system u_core u_ibex_core if_stage_i fetch_err_plus2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+771,"ibex_simple_system u_core u_ibex_core if_stage_i if_instr_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+772,"ibex_simple_system u_core u_ibex_core if_stage_i if_instr_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+742,"ibex_simple_system u_core u_ibex_core if_stage_i if_instr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+773,"ibex_simple_system u_core u_ibex_core if_stage_i if_instr_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+687,"ibex_simple_system u_core u_ibex_core if_stage_i exc_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+986,"ibex_simple_system u_core u_ibex_core if_stage_i irq_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+1019,"ibex_simple_system u_core u_ibex_core if_stage_i unused_irq_bit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1016,"ibex_simple_system u_core u_ibex_core if_stage_i if_id_pipe_reg_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core if_stage_i stall_dummy_instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+774,"ibex_simple_system u_core u_ibex_core if_stage_i instr_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+775,"ibex_simple_system u_core u_ibex_core if_stage_i instr_is_compressed_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+776,"ibex_simple_system u_core u_ibex_core if_stage_i illegal_c_instr_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+773,"ibex_simple_system u_core u_ibex_core if_stage_i instr_err_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core if_stage_i predict_branch_taken",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core if_stage_i predict_branch_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+827,"ibex_simple_system u_core u_ibex_core if_stage_i pc_mux_internal",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+1604,"ibex_simple_system u_core u_ibex_core if_stage_i unused_boot_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+385,"ibex_simple_system u_core u_ibex_core if_stage_i unused_csr_mtvec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+774,"ibex_simple_system u_core u_ibex_core if_stage_i instr_decompressed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+776,"ibex_simple_system u_core u_ibex_core if_stage_i illegal_c_insn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+775,"ibex_simple_system u_core u_ibex_core if_stage_i instr_is_compressed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+334,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer unused_icen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+825,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer unused_icinv",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1589,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer unused_ram_cfg ram_cfg cfg_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1590,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer unused_ram_cfg ram_cfg cfg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+1589,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer unused_ram_cfg rf_cfg cfg_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1590,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer unused_ram_cfg rf_cfg cfg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+332,"ibex_simple_system u_core u_ibex_core if_stage_i gen_no_dummy_instr unused_dummy_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+333,"ibex_simple_system u_core u_ibex_core if_stage_i gen_no_dummy_instr unused_dummy_mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core if_stage_i gen_no_dummy_instr unused_dummy_seed_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core if_stage_i gen_no_dummy_instr unused_dummy_seed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core if_stage_i compressed_decoder_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core if_stage_i compressed_decoder_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+777,"ibex_simple_system u_core u_ibex_core if_stage_i compressed_decoder_i valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+772,"ibex_simple_system u_core u_ibex_core if_stage_i compressed_decoder_i instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+774,"ibex_simple_system u_core u_ibex_core if_stage_i compressed_decoder_i instr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+775,"ibex_simple_system u_core u_ibex_core if_stage_i compressed_decoder_i is_compressed_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+776,"ibex_simple_system u_core u_ibex_core if_stage_i compressed_decoder_i illegal_instr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+777,"ibex_simple_system u_core u_ibex_core if_stage_i compressed_decoder_i unused_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i BranchPredictor",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+844,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+984,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i branch_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+985,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i branch_spec_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i predicted_branch_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i branch_mispredict_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1020,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+998,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i ready_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+771,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+772,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+742,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+773,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i err_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1533,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i err_plus2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1000,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i instr_req_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+956,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i instr_gnt_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+957,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i instr_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+281,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i instr_rdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i instr_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+71,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i instr_pmp_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+187,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i instr_rvalid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+694,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i busy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1576,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i NUM_REQS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1021,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i branch_suppress",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1022,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i valid_new_req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1000,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i valid_req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1023,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i valid_req_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+386,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i valid_req_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1024,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i discard_req_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+387,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i discard_req_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1025,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i gnt_or_pmp_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+778,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i rvalid_or_pmp_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1026,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i rdata_outstanding_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+801,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i rdata_outstanding_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+388,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i rdata_outstanding_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+1027,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i branch_discard_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+802,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i branch_discard_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+389,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i branch_discard_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+1028,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i rdata_pmp_err_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+803,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i rdata_pmp_err_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+390,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i rdata_pmp_err_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+391,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i rdata_outstanding_rev",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+1029,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i stored_addr_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+296,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i stored_addr_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+696,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i stored_addr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1534,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fetch_addr_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+297,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fetch_addr_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+697,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fetch_addr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i branch_mispredict_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1029,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i instr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+957,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i instr_addr_w_aligned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+392,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i instr_or_pmp_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+779,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1030,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+393,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+984,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_clear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+394,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+771,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i valid_raw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1535,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i addr_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+984,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i branch_or_mispredict",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i g_no_branch_predictor unused_predicted_branch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1535,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i g_no_branch_predictor unused_addr_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1576,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i NUM_REQS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+984,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i clear_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+394,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i busy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+779,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i in_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1030,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i in_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+281,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i in_rdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+392,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i in_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+771,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i out_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+998,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i out_ready_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+742,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i out_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1535,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i out_addr_next_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+772,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i out_rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+773,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i out_err_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1533,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i out_err_plus2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1605,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1536,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i rdata_d(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1537,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i rdata_d(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1538,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i rdata_d(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+298,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i rdata_q(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+299,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i rdata_q(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+300,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i rdata_q(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+395,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i err_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+301,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i err_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+1031,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i valid_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+396,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i valid_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+397,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i lowest_free_entry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+780,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i valid_pushed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+1032,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i valid_popped",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+804,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i entry_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+1033,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i pop_fifo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+781,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1539,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i rdata_unaligned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+398,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1540,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i err_unaligned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1541,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i err_plus2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+782,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1542,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i valid_unaligned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+783,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i aligned_is_compressed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+784,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i unaligned_is_compressed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+785,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i addr_incr_two",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1543,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i instr_addr_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,1);
        tracep->declBus(c+1544,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i instr_addr_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,1);
        tracep->declBus(c+748,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i instr_addr_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,1);
        tracep->declBit(c+805,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i instr_addr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1034,"ibex_simple_system u_core u_ibex_core if_stage_i gen_prefetch_buffer prefetch_buffer_i fifo_i unused_addr_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core id_stage_i RV32E",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1606,"ibex_simple_system u_core u_ibex_core id_stage_i RV32M",1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1607,"ibex_simple_system u_core u_ibex_core id_stage_i RV32B",2, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core id_stage_i DataIndTiming",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core id_stage_i BranchTargetALU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core id_stage_i SpecBranch",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core id_stage_i WritebackStage",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core id_stage_i BranchPredictor",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core id_stage_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core id_stage_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+989,"ibex_simple_system u_core u_ibex_core id_stage_i ctrl_busy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1006,"ibex_simple_system u_core u_ibex_core id_stage_i illegal_insn_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+823,"ibex_simple_system u_core u_ibex_core id_stage_i instr_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+739,"ibex_simple_system u_core u_ibex_core id_stage_i instr_rdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+739,"ibex_simple_system u_core u_ibex_core id_stage_i instr_rdata_alu_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+740,"ibex_simple_system u_core u_ibex_core id_stage_i instr_rdata_c_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBit(c+741,"ibex_simple_system u_core u_ibex_core id_stage_i instr_is_compressed_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i instr_bp_taken_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+844,"ibex_simple_system u_core u_ibex_core id_stage_i instr_req_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+826,"ibex_simple_system u_core u_ibex_core id_stage_i instr_first_cycle_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+983,"ibex_simple_system u_core u_ibex_core id_stage_i instr_valid_clear_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+998,"ibex_simple_system u_core u_ibex_core id_stage_i id_in_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+825,"ibex_simple_system u_core u_ibex_core id_stage_i icache_inval_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+988,"ibex_simple_system u_core u_ibex_core id_stage_i branch_decision_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+984,"ibex_simple_system u_core u_ibex_core id_stage_i pc_set_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+985,"ibex_simple_system u_core u_ibex_core id_stage_i pc_set_spec_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+827,"ibex_simple_system u_core u_ibex_core id_stage_i pc_mux_o",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i nt_branch_mispredict_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+828,"ibex_simple_system u_core u_ibex_core id_stage_i exc_pc_mux_o",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+986,"ibex_simple_system u_core u_ibex_core id_stage_i exc_cause_o",6,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+295,"ibex_simple_system u_core u_ibex_core id_stage_i illegal_c_insn_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+293,"ibex_simple_system u_core u_ibex_core id_stage_i instr_fetch_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+294,"ibex_simple_system u_core u_ibex_core id_stage_i instr_fetch_err_plus2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+743,"ibex_simple_system u_core u_ibex_core id_stage_i pc_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+843,"ibex_simple_system u_core u_ibex_core id_stage_i ex_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+763,"ibex_simple_system u_core u_ibex_core id_stage_i lsu_resp_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+831,"ibex_simple_system u_core u_ibex_core id_stage_i alu_operator_ex_o",7,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+991,"ibex_simple_system u_core u_ibex_core id_stage_i alu_operand_a_ex_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+992,"ibex_simple_system u_core u_ibex_core id_stage_i alu_operand_b_ex_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+824,"ibex_simple_system u_core u_ibex_core id_stage_i imd_val_we_ex_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+1035+i*2,"ibex_simple_system u_core u_ibex_core id_stage_i imd_val_d_ex_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 33,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+399+i*2,"ibex_simple_system u_core u_ibex_core id_stage_i imd_val_q_ex_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 33,0);}}
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core id_stage_i bt_a_operand_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core id_stage_i bt_b_operand_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+832,"ibex_simple_system u_core u_ibex_core id_stage_i mult_en_ex_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+833,"ibex_simple_system u_core u_ibex_core id_stage_i div_en_ex_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+834,"ibex_simple_system u_core u_ibex_core id_stage_i mult_sel_ex_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+835,"ibex_simple_system u_core u_ibex_core id_stage_i div_sel_ex_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+836,"ibex_simple_system u_core u_ibex_core id_stage_i multdiv_operator_ex_o",8,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+837,"ibex_simple_system u_core u_ibex_core id_stage_i multdiv_signed_mode_ex_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+759,"ibex_simple_system u_core u_ibex_core id_stage_i multdiv_operand_a_ex_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+760,"ibex_simple_system u_core u_ibex_core id_stage_i multdiv_operand_b_ex_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1594,"ibex_simple_system u_core u_ibex_core id_stage_i multdiv_ready_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+838,"ibex_simple_system u_core u_ibex_core id_stage_i csr_access_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+839,"ibex_simple_system u_core u_ibex_core id_stage_i csr_op_o",9,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+994,"ibex_simple_system u_core u_ibex_core id_stage_i csr_op_en_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1001,"ibex_simple_system u_core u_ibex_core id_stage_i csr_save_if_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+846,"ibex_simple_system u_core u_ibex_core id_stage_i csr_save_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i csr_save_wb_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+847,"ibex_simple_system u_core u_ibex_core id_stage_i csr_restore_mret_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+848,"ibex_simple_system u_core u_ibex_core id_stage_i csr_restore_dret_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1002,"ibex_simple_system u_core u_ibex_core id_stage_i csr_save_cause_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+849,"ibex_simple_system u_core u_ibex_core id_stage_i csr_mtval_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+344,"ibex_simple_system u_core u_ibex_core id_stage_i priv_mode_i",13,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+343,"ibex_simple_system u_core u_ibex_core id_stage_i csr_mstatus_tw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+997,"ibex_simple_system u_core u_ibex_core id_stage_i illegal_csr_insn_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+331,"ibex_simple_system u_core u_ibex_core id_stage_i data_ind_timing_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+842,"ibex_simple_system u_core u_ibex_core id_stage_i lsu_req_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+818,"ibex_simple_system u_core u_ibex_core id_stage_i lsu_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+840,"ibex_simple_system u_core u_ibex_core id_stage_i lsu_type_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+841,"ibex_simple_system u_core u_ibex_core id_stage_i lsu_sign_ext_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+760,"ibex_simple_system u_core u_ibex_core id_stage_i lsu_wdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+686,"ibex_simple_system u_core u_ibex_core id_stage_i lsu_req_done_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+335,"ibex_simple_system u_core u_ibex_core id_stage_i lsu_addr_incr_req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+336,"ibex_simple_system u_core u_ibex_core id_stage_i lsu_addr_last_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+339,"ibex_simple_system u_core u_ibex_core id_stage_i csr_mstatus_mie_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+765,"ibex_simple_system u_core u_ibex_core id_stage_i irq_pending_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+766,"ibex_simple_system u_core u_ibex_core id_stage_i irqs_i irq_software",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+767,"ibex_simple_system u_core u_ibex_core id_stage_i irqs_i irq_timer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+768,"ibex_simple_system u_core u_ibex_core id_stage_i irqs_i irq_external",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+769,"ibex_simple_system u_core u_ibex_core id_stage_i irqs_i irq_fast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 14,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i irq_nm_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+338,"ibex_simple_system u_core u_ibex_core id_stage_i nmi_mode_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+757,"ibex_simple_system u_core u_ibex_core id_stage_i lsu_load_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+758,"ibex_simple_system u_core u_ibex_core id_stage_i lsu_store_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+346,"ibex_simple_system u_core u_ibex_core id_stage_i debug_mode_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+850,"ibex_simple_system u_core u_ibex_core id_stage_i debug_cause_o",14,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+851,"ibex_simple_system u_core u_ibex_core id_stage_i debug_csr_save_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i debug_req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+347,"ibex_simple_system u_core u_ibex_core id_stage_i debug_single_step_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+348,"ibex_simple_system u_core u_ibex_core id_stage_i debug_ebreakm_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+349,"ibex_simple_system u_core u_ibex_core id_stage_i debug_ebreaku_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i trigger_match_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+993,"ibex_simple_system u_core u_ibex_core id_stage_i result_ex_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+996,"ibex_simple_system u_core u_ibex_core id_stage_i csr_rdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+744,"ibex_simple_system u_core u_ibex_core id_stage_i rf_raddr_a_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+759,"ibex_simple_system u_core u_ibex_core id_stage_i rf_rdata_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+745,"ibex_simple_system u_core u_ibex_core id_stage_i rf_raddr_b_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+760,"ibex_simple_system u_core u_ibex_core id_stage_i rf_rdata_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+829,"ibex_simple_system u_core u_ibex_core id_stage_i rf_ren_a_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+830,"ibex_simple_system u_core u_ibex_core id_stage_i rf_ren_b_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+746,"ibex_simple_system u_core u_ibex_core id_stage_i rf_waddr_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+927,"ibex_simple_system u_core u_ibex_core id_stage_i rf_wdata_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+928,"ibex_simple_system u_core u_ibex_core id_stage_i rf_we_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i rf_rd_a_wb_match_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i rf_rd_b_wb_match_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+746,"ibex_simple_system u_core u_ibex_core id_stage_i rf_waddr_wb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core id_stage_i rf_wdata_fwd_wb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i rf_write_wb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+999,"ibex_simple_system u_core u_ibex_core id_stage_i en_wb_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1599,"ibex_simple_system u_core u_ibex_core id_stage_i instr_type_wb_o",11,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+1526,"ibex_simple_system u_core u_ibex_core id_stage_i instr_perf_count_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1594,"ibex_simple_system u_core u_ibex_core id_stage_i ready_wb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i outstanding_load_wb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i outstanding_store_wb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+852,"ibex_simple_system u_core u_ibex_core id_stage_i perf_jump_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+853,"ibex_simple_system u_core u_ibex_core id_stage_i perf_branch_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+854,"ibex_simple_system u_core u_ibex_core id_stage_i perf_tbranch_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1528,"ibex_simple_system u_core u_ibex_core id_stage_i perf_dside_wait_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+930,"ibex_simple_system u_core u_ibex_core id_stage_i perf_mul_wait_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+931,"ibex_simple_system u_core u_ibex_core id_stage_i perf_div_wait_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+999,"ibex_simple_system u_core u_ibex_core id_stage_i instr_id_done_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+861,"ibex_simple_system u_core u_ibex_core id_stage_i illegal_insn_dec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+862,"ibex_simple_system u_core u_ibex_core id_stage_i ebrk_insn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+863,"ibex_simple_system u_core u_ibex_core id_stage_i mret_insn_dec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+864,"ibex_simple_system u_core u_ibex_core id_stage_i dret_insn_dec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+865,"ibex_simple_system u_core u_ibex_core id_stage_i ecall_insn_dec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+866,"ibex_simple_system u_core u_ibex_core id_stage_i wfi_insn_dec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i wb_exception",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+867,"ibex_simple_system u_core u_ibex_core id_stage_i branch_in_dec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1039,"ibex_simple_system u_core u_ibex_core id_stage_i branch_spec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+403,"ibex_simple_system u_core u_ibex_core id_stage_i branch_set_spec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+404,"ibex_simple_system u_core u_ibex_core id_stage_i branch_set_raw_spec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+405,"ibex_simple_system u_core u_ibex_core id_stage_i branch_set",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+404,"ibex_simple_system u_core u_ibex_core id_stage_i branch_set_raw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1040,"ibex_simple_system u_core u_ibex_core id_stage_i branch_set_raw_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+406,"ibex_simple_system u_core u_ibex_core id_stage_i branch_jump_set_done_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+688,"ibex_simple_system u_core u_ibex_core id_stage_i branch_jump_set_done_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i branch_not_set",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1594,"ibex_simple_system u_core u_ibex_core id_stage_i branch_taken",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+868,"ibex_simple_system u_core u_ibex_core id_stage_i jump_in_dec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+869,"ibex_simple_system u_core u_ibex_core id_stage_i jump_set_dec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+870,"ibex_simple_system u_core u_ibex_core id_stage_i jump_set",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+871,"ibex_simple_system u_core u_ibex_core id_stage_i jump_set_raw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+826,"ibex_simple_system u_core u_ibex_core id_stage_i instr_first_cycle",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+872,"ibex_simple_system u_core u_ibex_core id_stage_i instr_executing_spec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+872,"ibex_simple_system u_core u_ibex_core id_stage_i instr_executing",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+999,"ibex_simple_system u_core u_ibex_core id_stage_i instr_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+873,"ibex_simple_system u_core u_ibex_core id_stage_i controller_run",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i stall_ld_hz",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1545,"ibex_simple_system u_core u_ibex_core id_stage_i stall_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1041,"ibex_simple_system u_core u_ibex_core id_stage_i stall_multdiv",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1042,"ibex_simple_system u_core u_ibex_core id_stage_i stall_branch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1043,"ibex_simple_system u_core u_ibex_core id_stage_i stall_jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1044,"ibex_simple_system u_core u_ibex_core id_stage_i stall_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i stall_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+874,"ibex_simple_system u_core u_ibex_core id_stage_i flush_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1045,"ibex_simple_system u_core u_ibex_core id_stage_i multicycle_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+749,"ibex_simple_system u_core u_ibex_core id_stage_i imm_i_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+750,"ibex_simple_system u_core u_ibex_core id_stage_i imm_s_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+751,"ibex_simple_system u_core u_ibex_core id_stage_i imm_b_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+752,"ibex_simple_system u_core u_ibex_core id_stage_i imm_u_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+753,"ibex_simple_system u_core u_ibex_core id_stage_i imm_j_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+754,"ibex_simple_system u_core u_ibex_core id_stage_i zimm_rs1_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1546,"ibex_simple_system u_core u_ibex_core id_stage_i imm_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+875,"ibex_simple_system u_core u_ibex_core id_stage_i imm_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        {
            const char* __VenumItemNames[]
            = {"RF_WD_EX", "RF_WD_CSR"};
            const char* __VenumItemValues[]
            = {"0", "1"};
            tracep->declDTypeEnum(16, "ibex_pkg::rf_wd_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBit(c+876,"ibex_simple_system u_core u_ibex_core id_stage_i rf_wdata_sel",16, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+877,"ibex_simple_system u_core u_ibex_core id_stage_i rf_we_dec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+878,"ibex_simple_system u_core u_ibex_core id_stage_i rf_we_raw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+829,"ibex_simple_system u_core u_ibex_core id_stage_i rf_ren_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+830,"ibex_simple_system u_core u_ibex_core id_stage_i rf_ren_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+759,"ibex_simple_system u_core u_ibex_core id_stage_i rf_rdata_a_fwd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+760,"ibex_simple_system u_core u_ibex_core id_stage_i rf_rdata_b_fwd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+831,"ibex_simple_system u_core u_ibex_core id_stage_i alu_operator",7, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        {
            const char* __VenumItemNames[]
            = {"OP_A_REG_A", "OP_A_FWD", "OP_A_CURRPC", 
                                                "OP_A_IMM"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(17, "ibex_pkg::op_a_sel_e", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+879,"ibex_simple_system u_core u_ibex_core id_stage_i alu_op_a_mux_sel",17, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+880,"ibex_simple_system u_core u_ibex_core id_stage_i alu_op_a_mux_sel_dec",17, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        {
            const char* __VenumItemNames[]
            = {"OP_B_REG_B", "OP_B_IMM"};
            const char* __VenumItemValues[]
            = {"0", "1"};
            tracep->declDTypeEnum(18, "ibex_pkg::op_b_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBit(c+1547,"ibex_simple_system u_core u_ibex_core id_stage_i alu_op_b_mux_sel",18, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+881,"ibex_simple_system u_core u_ibex_core id_stage_i alu_op_b_mux_sel_dec",18, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i alu_multicycle_dec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+72,"ibex_simple_system u_core u_ibex_core id_stage_i stall_alu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+407+i*2,"ibex_simple_system u_core u_ibex_core id_stage_i imd_val_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 33,0);}}
        tracep->declBus(c+1608,"ibex_simple_system u_core u_ibex_core id_stage_i bt_a_mux_sel",17, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        {
            const char* __VenumItemNames[]
            = {"IMM_B_I", "IMM_B_S", "IMM_B_B", "IMM_B_U", 
                                                "IMM_B_J", 
                                                "IMM_B_INCR_PC", 
                                                "IMM_B_INCR_ADDR"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101", 
                                                "110"};
            tracep->declDTypeEnum(19, "ibex_pkg::imm_b_sel_e", 7, 3, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+1609,"ibex_simple_system u_core u_ibex_core id_stage_i bt_b_mux_sel",19, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        {
            const char* __VenumItemNames[]
            = {"IMM_A_Z", "IMM_A_ZERO"};
            const char* __VenumItemValues[]
            = {"0", "1"};
            tracep->declDTypeEnum(20, "ibex_pkg::imm_a_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBit(c+882,"ibex_simple_system u_core u_ibex_core id_stage_i imm_a_mux_sel",20, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+883,"ibex_simple_system u_core u_ibex_core id_stage_i imm_b_mux_sel",19, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+884,"ibex_simple_system u_core u_ibex_core id_stage_i imm_b_mux_sel_dec",19, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+832,"ibex_simple_system u_core u_ibex_core id_stage_i mult_en_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+885,"ibex_simple_system u_core u_ibex_core id_stage_i mult_en_dec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+833,"ibex_simple_system u_core u_ibex_core id_stage_i div_en_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+886,"ibex_simple_system u_core u_ibex_core id_stage_i div_en_dec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+887,"ibex_simple_system u_core u_ibex_core id_stage_i multdiv_en_dec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+836,"ibex_simple_system u_core u_ibex_core id_stage_i multdiv_operator",8, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+837,"ibex_simple_system u_core u_ibex_core id_stage_i multdiv_signed_mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+818,"ibex_simple_system u_core u_ibex_core id_stage_i lsu_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+840,"ibex_simple_system u_core u_ibex_core id_stage_i lsu_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+841,"ibex_simple_system u_core u_ibex_core id_stage_i lsu_sign_ext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+842,"ibex_simple_system u_core u_ibex_core id_stage_i lsu_req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+888,"ibex_simple_system u_core u_ibex_core id_stage_i lsu_req_dec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+826,"ibex_simple_system u_core u_ibex_core id_stage_i data_req_allowed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1046,"ibex_simple_system u_core u_ibex_core id_stage_i csr_pipe_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+991,"ibex_simple_system u_core u_ibex_core id_stage_i alu_operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+992,"ibex_simple_system u_core u_ibex_core id_stage_i alu_operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        {
            const char* __VenumItemNames[]
            = {"FIRST_CYCLE", "MULTI_CYCLE"};
            const char* __VenumItemValues[]
            = {"0", "1"};
            tracep->declDTypeEnum(21, "ibex_id_stage.id_fsm_e", 2, 1, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBit(c+411,"ibex_simple_system u_core u_ibex_core id_stage_i id_fsm_q",21, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1047,"ibex_simple_system u_core u_ibex_core id_stage_i id_fsm_d",21, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i fcov_rf_rd_wb_hz",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i unused_fcov_rf_rd_wb_hz",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+689,"ibex_simple_system u_core u_ibex_core id_stage_i fcov_branch_taken",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+689,"ibex_simple_system u_core u_ibex_core id_stage_i unused_fcov_branch_taken",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+690,"ibex_simple_system u_core u_ibex_core id_stage_i fcov_branch_not_taken",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+690,"ibex_simple_system u_core u_ibex_core id_stage_i unused_fcov_branch_not_taken",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1608,"ibex_simple_system u_core u_ibex_core id_stage_i g_nobtalu unused_a_mux_sel",17, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+1609,"ibex_simple_system u_core u_ibex_core id_stage_i g_nobtalu unused_b_mux_sel",19, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+404,"ibex_simple_system u_core u_ibex_core id_stage_i g_branch_set_flop branch_set_raw_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+686,"ibex_simple_system u_core u_ibex_core id_stage_i gen_no_stall_mem unused_data_req_done_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+746,"ibex_simple_system u_core u_ibex_core id_stage_i gen_no_stall_mem unused_rf_waddr_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i gen_no_stall_mem unused_rf_write_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i gen_no_stall_mem unused_outstanding_load_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i gen_no_stall_mem unused_outstanding_store_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i gen_no_stall_mem unused_wb_exception",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core id_stage_i gen_no_stall_mem unused_rf_wdata_fwd_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i RV32E",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1610,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i RV32M",1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1611,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i RV32B",2, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i BranchTargetALU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+861,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i illegal_insn_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+862,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i ebrk_insn_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+863,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i mret_insn_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+864,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i dret_insn_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+865,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i ecall_insn_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+866,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i wfi_insn_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+869,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i jump_set_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1594,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i branch_taken_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+825,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i icache_inval_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+826,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i instr_first_cycle_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+739,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i instr_rdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+739,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i instr_rdata_alu_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+295,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i illegal_c_insn_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+882,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i imm_a_mux_sel_o",20,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+884,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i imm_b_mux_sel_o",19,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1608,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i bt_a_mux_sel_o",17,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1609,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i bt_b_mux_sel_o",19,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+749,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i imm_i_type_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+750,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i imm_s_type_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+751,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i imm_b_type_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+752,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i imm_u_type_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+753,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i imm_j_type_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+754,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i zimm_rs1_type_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+876,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i rf_wdata_sel_o",16,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+877,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i rf_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+744,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i rf_raddr_a_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+745,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i rf_raddr_b_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+746,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i rf_waddr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+829,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i rf_ren_a_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+830,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i rf_ren_b_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+831,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i alu_operator_o",7,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+880,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i alu_op_a_mux_sel_o",17,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+881,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i alu_op_b_mux_sel_o",18,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i alu_multicycle_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+885,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i mult_en_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+886,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i div_en_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+834,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i mult_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+835,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i div_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+836,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i multdiv_operator_o",8,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+837,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i multdiv_signed_mode_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+838,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i csr_access_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+839,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i csr_op_o",9,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+888,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i data_req_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+818,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i data_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+840,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i data_type_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+841,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i data_sign_extension_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+868,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i jump_in_dec_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+867,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i branch_in_dec_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+861,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i illegal_insn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i illegal_reg_rv32e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+889,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i csr_illegal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+877,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i rf_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+739,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+739,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i instr_alu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+755,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i unused_instr_alu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
        tracep->declBus(c+744,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i instr_rs1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+745,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i instr_rs2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+756,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i instr_rs3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+746,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i instr_rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i use_rs3_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i use_rs3_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+890,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i csr_op",9, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        {
            const char* __VenumItemNames[]
            = {"OPCODE_LOAD", "OPCODE_MISC_MEM", "OPCODE_OP_IMM", 
                                                "OPCODE_AUIPC", 
                                                "OPCODE_STORE", 
                                                "OPCODE_OP", 
                                                "OPCODE_LUI", 
                                                "OPCODE_BRANCH", 
                                                "OPCODE_JALR", 
                                                "OPCODE_JAL", 
                                                "OPCODE_SYSTEM"};
            const char* __VenumItemValues[]
            = {"11", "1111", "10011", "10111", "100011", 
                                                "110011", 
                                                "110111", 
                                                "1100011", 
                                                "1100111", 
                                                "1101111", 
                                                "1110011"};
            tracep->declDTypeEnum(22, "ibex_pkg::opcode_e", 11, 7, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+891,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i opcode",22, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+892,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i opcode_alu",22, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i gen_no_rs3_flop unused_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core id_stage_i decoder_i gen_no_rs3_flop unused_rst_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i WritebackStage",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i BranchPredictor",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+989,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i ctrl_busy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1006,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i illegal_insn_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+865,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i ecall_insn_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+863,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i mret_insn_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+864,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i dret_insn_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+866,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i wfi_insn_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+862,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i ebrk_insn_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1046,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i csr_pipe_flush_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+823,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i instr_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+739,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+740,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i instr_compressed_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBit(c+741,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i instr_is_compressed_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i instr_bp_taken_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+293,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i instr_fetch_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+294,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i instr_fetch_err_plus2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+743,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i pc_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+983,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i instr_valid_clear_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+998,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i id_in_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+873,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i controller_run_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+844,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i instr_req_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+984,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i pc_set_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+985,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i pc_set_spec_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+827,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i pc_mux_o",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i nt_branch_mispredict_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+828,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i exc_pc_mux_o",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+986,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i exc_cause_o",6,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+336,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i lsu_addr_last_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+757,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i load_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+758,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i store_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i wb_exception_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+405,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i branch_set_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+403,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i branch_set_spec_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i branch_not_set_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+870,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i jump_set_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+339,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i csr_mstatus_mie_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+765,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i irq_pending_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+766,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i irqs_i irq_software",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+767,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i irqs_i irq_timer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+768,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i irqs_i irq_external",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+769,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i irqs_i irq_fast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 14,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i irq_nm_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+338,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i nmi_mode_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i debug_req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+850,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i debug_cause_o",14,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+851,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i debug_csr_save_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+346,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i debug_mode_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+347,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i debug_single_step_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+348,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i debug_ebreakm_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+349,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i debug_ebreaku_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i trigger_match_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1001,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i csr_save_if_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+846,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i csr_save_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i csr_save_wb_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+847,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i csr_restore_mret_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+848,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i csr_restore_dret_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1002,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i csr_save_cause_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+849,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i csr_mtval_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+344,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i priv_mode_i",13,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+343,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i csr_mstatus_tw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1044,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i stall_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i stall_wb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+874,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i flush_id_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1594,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i ready_wb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+852,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i perf_jump_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+854,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i perf_tbranch_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        {
            const char* __VenumItemNames[]
            = {"RESET", "BOOT_SET", "WAIT_SLEEP", "SLEEP", 
                                                "FIRST_FETCH", 
                                                "DECODE", 
                                                "FLUSH", 
                                                "IRQ_TAKEN", 
                                                "DBG_TAKEN_IF", 
                                                "DBG_TAKEN_ID"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101", 
                                                "110", 
                                                "111", 
                                                "1000", 
                                                "1001"};
            tracep->declDTypeEnum(23, "ibex_controller.ctrl_fsm_e", 10, 4, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+893,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i ctrl_fsm_cs",23, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+1048,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i ctrl_fsm_ns",23, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+338,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i nmi_mode_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+894,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i nmi_mode_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+346,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i debug_mode_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+895,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i debug_mode_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+412,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i load_err_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+757,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i load_err_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+413,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i store_err_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+758,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i store_err_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+414,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i exc_req_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1049,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i exc_req_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+415,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i illegal_insn_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1050,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i illegal_insn_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+896,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i instr_fetch_err_prio",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+897,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i illegal_insn_prio",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+898,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i ecall_insn_prio",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+899,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i ebrk_insn_prio",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+900,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i store_err_prio",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+901,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i load_err_prio",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1044,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1051,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i halt_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1052,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i retain_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+874,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i flush_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1548,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i illegal_dret",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1549,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i illegal_umode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+786,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i exc_req_lsu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1053,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i special_req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1550,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i special_req_pc_change",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+932,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i special_req_flush_only",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+902,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i enter_debug_mode_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+416,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i enter_debug_mode_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+417,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i ebreak_into_debug",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+787,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i handle_irq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+788,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i mfip_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+789,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i unused_irq_timer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+903,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i ecall_insn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+904,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i mret_insn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+905,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i dret_insn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+906,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i wfi_insn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+907,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i ebrk_insn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1054,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i csr_pipe_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+908,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i instr_fetch_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+933,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i fcov_interrupt_taken",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+933,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i unused_fcov_interrupt_taken",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+934,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i fcov_debug_entry_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+934,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i unused_fcov_debug_entry_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+935,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i fcov_debug_entry_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+935,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i unused_fcov_debug_entry_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+936,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i fcov_pipe_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+936,"ibex_simple_system u_core u_ibex_core id_stage_i controller_i unused_fcov_pipe_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1612,"ibex_simple_system u_core u_ibex_core ex_block_i RV32M",1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1613,"ibex_simple_system u_core u_ibex_core ex_block_i RV32B",2, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core ex_block_i BranchTargetALU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core ex_block_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core ex_block_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+831,"ibex_simple_system u_core u_ibex_core ex_block_i alu_operator_i",7,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+991,"ibex_simple_system u_core u_ibex_core ex_block_i alu_operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+992,"ibex_simple_system u_core u_ibex_core ex_block_i alu_operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+826,"ibex_simple_system u_core u_ibex_core ex_block_i alu_instr_first_cycle_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i bt_a_operand_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i bt_b_operand_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+836,"ibex_simple_system u_core u_ibex_core ex_block_i multdiv_operator_i",8,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+832,"ibex_simple_system u_core u_ibex_core ex_block_i mult_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+833,"ibex_simple_system u_core u_ibex_core ex_block_i div_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+834,"ibex_simple_system u_core u_ibex_core ex_block_i mult_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+835,"ibex_simple_system u_core u_ibex_core ex_block_i div_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+837,"ibex_simple_system u_core u_ibex_core ex_block_i multdiv_signed_mode_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+759,"ibex_simple_system u_core u_ibex_core ex_block_i multdiv_operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+760,"ibex_simple_system u_core u_ibex_core ex_block_i multdiv_operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1594,"ibex_simple_system u_core u_ibex_core ex_block_i multdiv_ready_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+331,"ibex_simple_system u_core u_ibex_core ex_block_i data_ind_timing_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+824,"ibex_simple_system u_core u_ibex_core ex_block_i imd_val_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+1055+i*2,"ibex_simple_system u_core u_ibex_core ex_block_i imd_val_d_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 33,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+418+i*2,"ibex_simple_system u_core u_ibex_core ex_block_i imd_val_q_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 33,0);}}
        tracep->declBus(c+987,"ibex_simple_system u_core u_ibex_core ex_block_i alu_adder_result_ex_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+993,"ibex_simple_system u_core u_ibex_core ex_block_i result_ex_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+987,"ibex_simple_system u_core u_ibex_core ex_block_i branch_target_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+988,"ibex_simple_system u_core u_ibex_core ex_block_i branch_decision_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+843,"ibex_simple_system u_core u_ibex_core ex_block_i ex_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1059,"ibex_simple_system u_core u_ibex_core ex_block_i alu_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+691,"ibex_simple_system u_core u_ibex_core ex_block_i multdiv_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+790,"ibex_simple_system u_core u_ibex_core ex_block_i multdiv_alu_operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
        tracep->declQuad(c+422,"ibex_simple_system u_core u_ibex_core ex_block_i multdiv_alu_operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
        tracep->declQuad(c+1060,"ibex_simple_system u_core u_ibex_core ex_block_i alu_adder_result_ext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 33,0);
        tracep->declBit(c+988,"ibex_simple_system u_core u_ibex_core ex_block_i alu_cmp_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1062,"ibex_simple_system u_core u_ibex_core ex_block_i alu_is_equal_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1551,"ibex_simple_system u_core u_ibex_core ex_block_i multdiv_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+909,"ibex_simple_system u_core u_ibex_core ex_block_i multdiv_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+424+i*1,"ibex_simple_system u_core u_ibex_core ex_block_i alu_imd_val_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+73+i*1,"ibex_simple_system u_core u_ibex_core ex_block_i alu_imd_val_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        tracep->declBus(c+1614,"ibex_simple_system u_core u_ibex_core ex_block_i alu_imd_val_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+1063+i*2,"ibex_simple_system u_core u_ibex_core ex_block_i multdiv_imd_val_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 33,0);}}
        tracep->declBus(c+910,"ibex_simple_system u_core u_ibex_core ex_block_i multdiv_imd_val_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i g_no_branch_target_alu unused_bt_a_operand",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i g_no_branch_target_alu unused_bt_b_operand",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1615,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i RV32B",2, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+831,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i operator_i",7,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+991,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+992,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+826,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i instr_first_cycle_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+422,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i multdiv_operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 32,0);
        tracep->declQuad(c+790,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i multdiv_operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 32,0);
        tracep->declBit(c+909,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i multdiv_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+426+i*1,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i imd_val_q_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+75+i*1,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i imd_val_d_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);}}
        tracep->declBus(c+1614,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i imd_val_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+987,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i adder_result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+1060,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i adder_result_ext_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 33,0);
        tracep->declBus(c+1059,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+988,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i comparison_result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1062,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i is_equal_result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1067,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i operand_a_rev",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+1068,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i operand_b_neg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
        tracep->declBit(c+911,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i adder_op_b_negate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+692,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i adder_in_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
        tracep->declQuad(c+1552,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i adder_in_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
        tracep->declBus(c+987,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i adder_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1062,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i is_equal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+937,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i is_greater_equal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+912,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i cmp_signed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+988,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i cmp_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+913,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i shift_left",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i shift_ones",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+914,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i shift_arith",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i shift_funnel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i shift_sbmode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1070,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i shift_amt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+1071,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i shift_amt_compl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+1072,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i shift_operand",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+1073,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i shift_result_ext_signed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
        tracep->declQuad(c+1075,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i shift_result_ext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
        tracep->declBit(c+1077,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i unused_shift_result_ext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1078,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i shift_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1079,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i shift_result_rev",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i bfp_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1080,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i bfp_len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+1081,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i bfp_off",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i bfp_mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+77,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i bfp_mask_rev",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i bfp_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+915,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i bwlogic_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+916,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i bwlogic_and",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+992,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i bwlogic_operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1082,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i bwlogic_or_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1083,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i bwlogic_and_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1084,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i bwlogic_xor_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1085,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i bwlogic_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i bwlogic_op_b_negate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1616,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i bitcnt_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i minmax_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i pack_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i sext_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i singlebit_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i rev_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i shuffle_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i butterfly_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i invbutterfly_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i clmul_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i multicycle_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1086,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i unused_shift_amt_compl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1598,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i unnamedblk1 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+428+i*1,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i g_no_alu_rvb unused_imd_val_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i g_no_alu_rvb unused_butterfly_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core ex_block_i alu_i g_no_alu_rvb unused_invbutterfly_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1617,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i RV32M",1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+832,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i mult_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+833,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i div_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+834,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i mult_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+835,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i div_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+836,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i operator_i",8,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+837,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i signed_mode_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+759,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i op_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+760,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i op_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+1060,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i alu_adder_ext_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 33,0);
        tracep->declBus(c+987,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i alu_adder_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1062,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i equal_to_zero_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+331,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i data_ind_timing_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+422,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i alu_operand_a_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 32,0);
        tracep->declQuad(c+790,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i alu_operand_b_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 32,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+430+i*2,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i imd_val_q_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 33,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+1087+i*2,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i imd_val_d_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 33,0);}}
        tracep->declBus(c+910,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i imd_val_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+1594,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i multdiv_ready_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+691,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i multdiv_result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1551,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+1554,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i mac_res_signed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 34,0);
        tracep->declQuad(c+1554,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i mac_res_ext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 34,0);
        tracep->declQuad(c+917,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i accum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 33,0);
        tracep->declBit(c+1091,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i sign_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1092,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i sign_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+919,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i mult_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+920,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i signed_mult",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1093,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i mac_res_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 33,0);
        tracep->declQuad(c+1095,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i op_remainder_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 33,0);
        tracep->declQuad(c+1556,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i mac_res",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 33,0);
        tracep->declBit(c+1097,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i div_sign_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1098,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i div_sign_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1099,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i is_greater_equal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+698,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i div_change_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1097,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i rem_change_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+434,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i one_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+435,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i op_denominator_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+436,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i op_numerator_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+437,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i op_quotient_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1100,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i op_denominator_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1101,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i op_numerator_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1102,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i op_quotient_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1103,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i next_remainder",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+1104,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i next_quotient",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
        tracep->declBus(c+987,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i res_adder_h",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+438,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i div_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+439,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i div_counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+1106,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i div_counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+921,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i multdiv_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+922,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i mult_hold",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+440,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i div_hold",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1107,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i div_by_zero_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+441,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i div_by_zero_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+923,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i mult_en_internal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+924,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i div_en_internal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"MD_IDLE", "MD_ABS_A", "MD_ABS_B", "MD_COMP", 
                                                "MD_LAST", 
                                                "MD_CHANGE_SIGN", 
                                                "MD_FINISH"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101", 
                                                "110"};
            tracep->declDTypeEnum(24, "ibex_multdiv_fast.md_fsm_e", 7, 3, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+442,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i md_state_q",24, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+1108,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i md_state_d",24, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+834,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i unused_mult_sel_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+443,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i unused_imd_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+1558,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i unused_mac_res_ext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1109,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i unused_alu_adder_ext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+792,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i gen_mult_fast mult_op_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
        tracep->declBus(c+793,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i gen_mult_fast mult_op_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
        {
            const char* __VenumItemNames[]
            = {"ALBL", "ALBH", "AHBL", "AHBH"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(25, "ibex_multdiv_fast.mult_fsm_e", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+444,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i gen_mult_fast mult_state_q",25, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+925,"ibex_simple_system u_core u_ibex_core ex_block_i gen_multdiv_fast multdiv_i gen_mult_fast mult_state_d",25, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core load_store_unit_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core load_store_unit_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+845,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_req_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+817,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_gnt_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+194,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_rvalid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+737,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+78,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_pmp_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+978,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+818,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+977,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_be_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+798,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_wdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+736,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_rdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+818,"ibex_simple_system u_core u_ibex_core load_store_unit_i lsu_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+840,"ibex_simple_system u_core u_ibex_core load_store_unit_i lsu_type_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+760,"ibex_simple_system u_core u_ibex_core load_store_unit_i lsu_wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+841,"ibex_simple_system u_core u_ibex_core load_store_unit_i lsu_sign_ext_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+761,"ibex_simple_system u_core u_ibex_core load_store_unit_i lsu_rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+762,"ibex_simple_system u_core u_ibex_core load_store_unit_i lsu_rdata_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+842,"ibex_simple_system u_core u_ibex_core load_store_unit_i lsu_req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+987,"ibex_simple_system u_core u_ibex_core load_store_unit_i adder_result_ex_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+335,"ibex_simple_system u_core u_ibex_core load_store_unit_i addr_incr_req_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+336,"ibex_simple_system u_core u_ibex_core load_store_unit_i addr_last_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+686,"ibex_simple_system u_core u_ibex_core load_store_unit_i lsu_req_done_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+763,"ibex_simple_system u_core u_ibex_core load_store_unit_i lsu_resp_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+757,"ibex_simple_system u_core u_ibex_core load_store_unit_i load_err_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+758,"ibex_simple_system u_core u_ibex_core load_store_unit_i store_err_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+337,"ibex_simple_system u_core u_ibex_core load_store_unit_i busy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+855,"ibex_simple_system u_core u_ibex_core load_store_unit_i perf_load_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+856,"ibex_simple_system u_core u_ibex_core load_store_unit_i perf_store_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+987,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+978,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_addr_w_aligned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+336,"ibex_simple_system u_core u_ibex_core load_store_unit_i addr_last_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1110,"ibex_simple_system u_core u_ibex_core load_store_unit_i addr_update",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+926,"ibex_simple_system u_core u_ibex_core load_store_unit_i ctrl_update",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+794,"ibex_simple_system u_core u_ibex_core load_store_unit_i rdata_update",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+445,"ibex_simple_system u_core u_ibex_core load_store_unit_i rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,8);
        tracep->declBus(c+446,"ibex_simple_system u_core u_ibex_core load_store_unit_i rdata_offset_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+447,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_type_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+448,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_sign_ext_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+449,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_we_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1111,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_offset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+977,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_be",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+798,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+761,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_rdata_ext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1559,"ibex_simple_system u_core u_ibex_core load_store_unit_i rdata_w_ext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+795,"ibex_simple_system u_core u_ibex_core load_store_unit_i rdata_h_ext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+796,"ibex_simple_system u_core u_ibex_core load_store_unit_i rdata_b_ext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1112,"ibex_simple_system u_core u_ibex_core load_store_unit_i split_misaligned_access",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+450,"ibex_simple_system u_core u_ibex_core load_store_unit_i handle_misaligned_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1113,"ibex_simple_system u_core u_ibex_core load_store_unit_i handle_misaligned_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+451,"ibex_simple_system u_core u_ibex_core load_store_unit_i pmp_err_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1114,"ibex_simple_system u_core u_ibex_core load_store_unit_i pmp_err_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+452,"ibex_simple_system u_core u_ibex_core load_store_unit_i lsu_err_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1115,"ibex_simple_system u_core u_ibex_core load_store_unit_i lsu_err_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+797,"ibex_simple_system u_core u_ibex_core load_store_unit_i data_or_pmp_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"IDLE", "WAIT_GNT_MIS", "WAIT_RVALID_MIS", 
                                                "WAIT_GNT", 
                                                "WAIT_RVALID_MIS_GNTS_DONE"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100"};
            tracep->declDTypeEnum(26, "ibex_load_store_unit.ls_fsm_e", 5, 3, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+453,"ibex_simple_system u_core u_ibex_core load_store_unit_i ls_fsm_cs",26, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+1116,"ibex_simple_system u_core u_ibex_core load_store_unit_i ls_fsm_ns",26, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+1560,"ibex_simple_system u_core u_ibex_core load_store_unit_i fcov_ls_error_exception",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1560,"ibex_simple_system u_core u_ibex_core load_store_unit_i unused_fcov_ls_error_exception",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1561,"ibex_simple_system u_core u_ibex_core load_store_unit_i fcov_ls_pmp_exception",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1561,"ibex_simple_system u_core u_ibex_core load_store_unit_i unused_fcov_ls_pmp_exception",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core wb_stage_i WritebackStage",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core wb_stage_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core wb_stage_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+999,"ibex_simple_system u_core u_ibex_core wb_stage_i en_wb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1599,"ibex_simple_system u_core u_ibex_core wb_stage_i instr_type_wb_i",11,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+743,"ibex_simple_system u_core u_ibex_core wb_stage_i pc_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+741,"ibex_simple_system u_core u_ibex_core wb_stage_i instr_is_compressed_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1526,"ibex_simple_system u_core u_ibex_core wb_stage_i instr_perf_count_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1594,"ibex_simple_system u_core u_ibex_core wb_stage_i ready_wb_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core wb_stage_i rf_write_wb_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core wb_stage_i outstanding_load_wb_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core wb_stage_i outstanding_store_wb_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core wb_stage_i pc_wb_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1005,"ibex_simple_system u_core u_ibex_core wb_stage_i perf_instr_ret_wb_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1527,"ibex_simple_system u_core u_ibex_core wb_stage_i perf_instr_ret_compressed_wb_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+746,"ibex_simple_system u_core u_ibex_core wb_stage_i rf_waddr_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+927,"ibex_simple_system u_core u_ibex_core wb_stage_i rf_wdata_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+928,"ibex_simple_system u_core u_ibex_core wb_stage_i rf_we_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+761,"ibex_simple_system u_core u_ibex_core wb_stage_i rf_wdata_lsu_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+762,"ibex_simple_system u_core u_ibex_core wb_stage_i rf_we_lsu_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core wb_stage_i rf_wdata_fwd_wb_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+746,"ibex_simple_system u_core u_ibex_core wb_stage_i rf_waddr_wb_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+990,"ibex_simple_system u_core u_ibex_core wb_stage_i rf_wdata_wb_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+799,"ibex_simple_system u_core u_ibex_core wb_stage_i rf_we_wb_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+763,"ibex_simple_system u_core u_ibex_core wb_stage_i lsu_resp_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+764,"ibex_simple_system u_core u_ibex_core wb_stage_i lsu_resp_err_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core wb_stage_i instr_done_wb_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+806+i*1,"ibex_simple_system u_core u_ibex_core wb_stage_i rf_wdata_wb_mux",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        tracep->declBus(c+808,"ibex_simple_system u_core u_ibex_core wb_stage_i rf_wdata_wb_mux_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core wb_stage_i fcov_wb_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core wb_stage_i unused_fcov_wb_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core wb_stage_i g_bypass_wb unused_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core wb_stage_i g_bypass_wb unused_rst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1599,"ibex_simple_system u_core u_ibex_core wb_stage_i g_bypass_wb unused_instr_type_wb",11, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+743,"ibex_simple_system u_core u_ibex_core wb_stage_i g_bypass_wb unused_pc_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i DbgTriggerEn",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1575,"ibex_simple_system u_core u_ibex_core cs_reg_i DbgHwBreakNum",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i DataIndTiming",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i DummyInstructions",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i ShadowCSR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i ICache",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1583,"ibex_simple_system u_core u_ibex_core cs_reg_i MHPMCounterNum",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1584,"ibex_simple_system u_core u_ibex_core cs_reg_i MHPMCounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i PMPEnable",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1581,"ibex_simple_system u_core u_ibex_core cs_reg_i PMPGranularity",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1582,"ibex_simple_system u_core u_ibex_core cs_reg_i PMPNumRegions",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i RV32E",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1618,"ibex_simple_system u_core u_ibex_core cs_reg_i RV32M",1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1619,"ibex_simple_system u_core u_ibex_core cs_reg_i RV32B",2, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core cs_reg_i hart_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+344,"ibex_simple_system u_core u_ibex_core cs_reg_i priv_mode_id_o",13,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1004,"ibex_simple_system u_core u_ibex_core cs_reg_i priv_mode_if_o",13,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+345,"ibex_simple_system u_core u_ibex_core cs_reg_i priv_mode_lsu_o",13,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+343,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_mstatus_tw_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+342,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_mtvec_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1003,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_mtvec_init_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1592,"ibex_simple_system u_core u_ibex_core cs_reg_i boot_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+838,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_access_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+995,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_addr_i",10,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declBus(c+991,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+839,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_op_i",9,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+994,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_op_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+996,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i irq_software_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+182,"ibex_simple_system u_core u_ibex_core cs_reg_i irq_timer_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i irq_external_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1593,"ibex_simple_system u_core u_ibex_core cs_reg_i irq_fast_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 14,0);
        tracep->declBit(c+338,"ibex_simple_system u_core u_ibex_core cs_reg_i nmi_mode_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+765,"ibex_simple_system u_core u_ibex_core cs_reg_i irq_pending_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+766,"ibex_simple_system u_core u_ibex_core cs_reg_i irqs_o irq_software",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+767,"ibex_simple_system u_core u_ibex_core cs_reg_i irqs_o irq_timer",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+768,"ibex_simple_system u_core u_ibex_core cs_reg_i irqs_o irq_external",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+769,"ibex_simple_system u_core u_ibex_core cs_reg_i irqs_o irq_fast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 14,0);
        tracep->declBit(c+339,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_mstatus_mie_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+340,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_mepc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+79,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(0) lock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+80,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(0) mode",12,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+81,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(0) exec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+82,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(0) write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+83,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(0) read",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+84,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(1) lock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+85,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(1) mode",12,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+86,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(1) exec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+87,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(1) write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+88,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(1) read",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+89,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(2) lock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+90,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(2) mode",12,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+91,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(2) exec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+92,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(2) write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+93,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(2) read",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+94,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(3) lock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+95,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(3) mode",12,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+96,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(3) exec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+97,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(3) write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+98,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_cfg_o(3) read",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+99+i*2,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 33,0);}}
        tracep->declBit(c+1600,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_mseccfg_o rlb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1601,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_mseccfg_o mmwp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1602,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_pmp_mseccfg_o mml",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+346,"ibex_simple_system u_core u_ibex_core cs_reg_i debug_mode_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+850,"ibex_simple_system u_core u_ibex_core cs_reg_i debug_cause_i",14,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+851,"ibex_simple_system u_core u_ibex_core cs_reg_i debug_csr_save_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+341,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_depc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+347,"ibex_simple_system u_core u_ibex_core cs_reg_i debug_single_step_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+348,"ibex_simple_system u_core u_ibex_core cs_reg_i debug_ebreakm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+349,"ibex_simple_system u_core u_ibex_core cs_reg_i debug_ebreaku_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i trigger_match_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+742,"ibex_simple_system u_core u_ibex_core cs_reg_i pc_if_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+743,"ibex_simple_system u_core u_ibex_core cs_reg_i pc_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core cs_reg_i pc_wb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+331,"ibex_simple_system u_core u_ibex_core cs_reg_i data_ind_timing_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+332,"ibex_simple_system u_core u_ibex_core cs_reg_i dummy_instr_en_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+333,"ibex_simple_system u_core u_ibex_core cs_reg_i dummy_instr_mask_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i dummy_instr_seed_en_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core cs_reg_i dummy_instr_seed_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+334,"ibex_simple_system u_core u_ibex_core cs_reg_i icache_enable_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_shadow_err_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1001,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_save_if_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+846,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_save_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_save_wb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+847,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_restore_mret_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+848,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_restore_dret_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1002,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_save_cause_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+986,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_mcause_i",6,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+849,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_mtval_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+997,"ibex_simple_system u_core u_ibex_core cs_reg_i illegal_csr_insn_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1005,"ibex_simple_system u_core u_ibex_core cs_reg_i instr_ret_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1527,"ibex_simple_system u_core u_ibex_core cs_reg_i instr_ret_compressed_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+929,"ibex_simple_system u_core u_ibex_core cs_reg_i iside_wait_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+852,"ibex_simple_system u_core u_ibex_core cs_reg_i jump_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+853,"ibex_simple_system u_core u_ibex_core cs_reg_i branch_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+854,"ibex_simple_system u_core u_ibex_core cs_reg_i branch_taken_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+855,"ibex_simple_system u_core u_ibex_core cs_reg_i mem_load_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+856,"ibex_simple_system u_core u_ibex_core cs_reg_i mem_store_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1528,"ibex_simple_system u_core u_ibex_core cs_reg_i dside_wait_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+930,"ibex_simple_system u_core u_ibex_core cs_reg_i mul_wait_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+931,"ibex_simple_system u_core u_ibex_core cs_reg_i div_wait_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1581,"ibex_simple_system u_core u_ibex_core cs_reg_i RV32BEnabled",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1575,"ibex_simple_system u_core u_ibex_core cs_reg_i RV32MEnabled",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1598,"ibex_simple_system u_core u_ibex_core cs_reg_i PMPAddrWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1620,"ibex_simple_system u_core u_ibex_core cs_reg_i MISA_VALUE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1117,"ibex_simple_system u_core u_ibex_core cs_reg_i exception_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+344,"ibex_simple_system u_core u_ibex_core cs_reg_i priv_lvl_q",13, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+1004,"ibex_simple_system u_core u_ibex_core cs_reg_i priv_lvl_d",13, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+454,"ibex_simple_system u_core u_ibex_core cs_reg_i mstatus_q mie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+455,"ibex_simple_system u_core u_ibex_core cs_reg_i mstatus_q mpie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+456,"ibex_simple_system u_core u_ibex_core cs_reg_i mstatus_q mpp",13, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+457,"ibex_simple_system u_core u_ibex_core cs_reg_i mstatus_q mprv",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+458,"ibex_simple_system u_core u_ibex_core cs_reg_i mstatus_q tw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1118,"ibex_simple_system u_core u_ibex_core cs_reg_i mstatus_d mie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1119,"ibex_simple_system u_core u_ibex_core cs_reg_i mstatus_d mpie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1120,"ibex_simple_system u_core u_ibex_core cs_reg_i mstatus_d mpp",13, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+1121,"ibex_simple_system u_core u_ibex_core cs_reg_i mstatus_d mprv",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1122,"ibex_simple_system u_core u_ibex_core cs_reg_i mstatus_d tw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i mstatus_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1123,"ibex_simple_system u_core u_ibex_core cs_reg_i mstatus_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+459,"ibex_simple_system u_core u_ibex_core cs_reg_i mie_q irq_software",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+460,"ibex_simple_system u_core u_ibex_core cs_reg_i mie_q irq_timer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+461,"ibex_simple_system u_core u_ibex_core cs_reg_i mie_q irq_external",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+462,"ibex_simple_system u_core u_ibex_core cs_reg_i mie_q irq_fast",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 14,0);
        tracep->declBit(c+1124,"ibex_simple_system u_core u_ibex_core cs_reg_i mie_d irq_software",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1125,"ibex_simple_system u_core u_ibex_core cs_reg_i mie_d irq_timer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1126,"ibex_simple_system u_core u_ibex_core cs_reg_i mie_d irq_external",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1127,"ibex_simple_system u_core u_ibex_core cs_reg_i mie_d irq_fast",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 14,0);
        tracep->declBit(c+1128,"ibex_simple_system u_core u_ibex_core cs_reg_i mie_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+463,"ibex_simple_system u_core u_ibex_core cs_reg_i mscratch_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1129,"ibex_simple_system u_core u_ibex_core cs_reg_i mscratch_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+340,"ibex_simple_system u_core u_ibex_core cs_reg_i mepc_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1130,"ibex_simple_system u_core u_ibex_core cs_reg_i mepc_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1131,"ibex_simple_system u_core u_ibex_core cs_reg_i mepc_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+464,"ibex_simple_system u_core u_ibex_core cs_reg_i mcause_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+1132,"ibex_simple_system u_core u_ibex_core cs_reg_i mcause_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+1133,"ibex_simple_system u_core u_ibex_core cs_reg_i mcause_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+465,"ibex_simple_system u_core u_ibex_core cs_reg_i mtval_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1134,"ibex_simple_system u_core u_ibex_core cs_reg_i mtval_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1135,"ibex_simple_system u_core u_ibex_core cs_reg_i mtval_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+342,"ibex_simple_system u_core u_ibex_core cs_reg_i mtvec_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1136,"ibex_simple_system u_core u_ibex_core cs_reg_i mtvec_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i mtvec_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1137,"ibex_simple_system u_core u_ibex_core cs_reg_i mtvec_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+197,"ibex_simple_system u_core u_ibex_core cs_reg_i mip irq_software",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+198,"ibex_simple_system u_core u_ibex_core cs_reg_i mip irq_timer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+199,"ibex_simple_system u_core u_ibex_core cs_reg_i mip irq_external",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+200,"ibex_simple_system u_core u_ibex_core cs_reg_i mip irq_fast",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 14,0);
        {
            const char* __VenumItemNames[]
            = {"XDEBUGVER_NO", "XDEBUGVER_STD", "XDEBUGVER_NONSTD"};
            const char* __VenumItemValues[]
            = {"0", "100", "1111"};
            tracep->declDTypeEnum(27, "ibex_pkg::x_debug_ver_e", 3, 4, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+466,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_q xdebugver",27, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+467,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_q zero2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declBit(c+468,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_q ebreakm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+469,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_q zero1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+470,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_q ebreaks",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+471,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_q ebreaku",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+472,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_q stepie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+473,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_q stopcount",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+474,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_q stoptime",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+475,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_q cause",14, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+476,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_q zero0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+477,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_q mprven",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+478,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_q nmip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+479,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_q step",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+480,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_q prv",13, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+1138,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_d xdebugver",27, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+1139,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_d zero2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declBit(c+1140,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_d ebreakm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1141,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_d zero1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1142,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_d ebreaks",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1143,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_d ebreaku",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1144,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_d stepie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1145,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_d stopcount",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1146,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_d stoptime",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1147,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_d cause",14, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+1148,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_d zero0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1149,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_d mprven",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1150,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_d nmip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1151,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_d step",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1152,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_d prv",13, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+1153,"ibex_simple_system u_core u_ibex_core cs_reg_i dcsr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+341,"ibex_simple_system u_core u_ibex_core cs_reg_i depc_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1154,"ibex_simple_system u_core u_ibex_core cs_reg_i depc_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1155,"ibex_simple_system u_core u_ibex_core cs_reg_i depc_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+481,"ibex_simple_system u_core u_ibex_core cs_reg_i dscratch0_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+482,"ibex_simple_system u_core u_ibex_core cs_reg_i dscratch1_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1156,"ibex_simple_system u_core u_ibex_core cs_reg_i dscratch0_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1157,"ibex_simple_system u_core u_ibex_core cs_reg_i dscratch1_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+483,"ibex_simple_system u_core u_ibex_core cs_reg_i mstack_q mpie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+484,"ibex_simple_system u_core u_ibex_core cs_reg_i mstack_q mpp",13, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+485,"ibex_simple_system u_core u_ibex_core cs_reg_i mstack_d mpie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+486,"ibex_simple_system u_core u_ibex_core cs_reg_i mstack_d mpp",13, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+1158,"ibex_simple_system u_core u_ibex_core cs_reg_i mstack_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+487,"ibex_simple_system u_core u_ibex_core cs_reg_i mstack_epc_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+340,"ibex_simple_system u_core u_ibex_core cs_reg_i mstack_epc_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+488,"ibex_simple_system u_core u_ibex_core cs_reg_i mstack_cause_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+464,"ibex_simple_system u_core u_ibex_core cs_reg_i mstack_cause_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+107+i*1,"ibex_simple_system u_core u_ibex_core cs_reg_i pmp_addr_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+123+i*1,"ibex_simple_system u_core u_ibex_core cs_reg_i pmp_cfg_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);}}
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i pmp_csr_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1600,"ibex_simple_system u_core u_ibex_core cs_reg_i pmp_mseccfg rlb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1601,"ibex_simple_system u_core u_ibex_core cs_reg_i pmp_mseccfg mmwp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1602,"ibex_simple_system u_core u_ibex_core cs_reg_i pmp_mseccfg mml",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+489,"ibex_simple_system u_core u_ibex_core cs_reg_i mcountinhibit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+699,"ibex_simple_system u_core u_ibex_core cs_reg_i mcountinhibit_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+489,"ibex_simple_system u_core u_ibex_core cs_reg_i mcountinhibit_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1159,"ibex_simple_system u_core u_ibex_core cs_reg_i mcountinhibit_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+490+i*2,"ibex_simple_system u_core u_ibex_core cs_reg_i mhpmcounter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);}}
        tracep->declBus(c+1160,"ibex_simple_system u_core u_ibex_core cs_reg_i mhpmcounter_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1161,"ibex_simple_system u_core u_ibex_core cs_reg_i mhpmcounterh_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1162,"ibex_simple_system u_core u_ibex_core cs_reg_i mhpmcounter_incr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+139+i*1,"ibex_simple_system u_core u_ibex_core cs_reg_i mhpmevent",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        tracep->declBus(c+1163,"ibex_simple_system u_core u_ibex_core cs_reg_i mhpmcounter_idx",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+1164,"ibex_simple_system u_core u_ibex_core cs_reg_i unused_mhpmcounter_we_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1165,"ibex_simple_system u_core u_ibex_core cs_reg_i unused_mhpmcounterh_we_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1166,"ibex_simple_system u_core u_ibex_core cs_reg_i unused_mhpmcounter_incr_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core cs_reg_i tselect_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core cs_reg_i tmatch_control_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_core cs_reg_i tmatch_value_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+554,"ibex_simple_system u_core u_ibex_core cs_reg_i cpuctrl_q dummy_instr_mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+555,"ibex_simple_system u_core u_ibex_core cs_reg_i cpuctrl_q dummy_instr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+556,"ibex_simple_system u_core u_ibex_core cs_reg_i cpuctrl_q data_ind_timing",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+557,"ibex_simple_system u_core u_ibex_core cs_reg_i cpuctrl_q icache_enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+171,"ibex_simple_system u_core u_ibex_core cs_reg_i cpuctrl_d dummy_instr_mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+172,"ibex_simple_system u_core u_ibex_core cs_reg_i cpuctrl_d dummy_instr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+173,"ibex_simple_system u_core u_ibex_core cs_reg_i cpuctrl_d data_ind_timing",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+174,"ibex_simple_system u_core u_ibex_core cs_reg_i cpuctrl_d icache_enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1167,"ibex_simple_system u_core u_ibex_core cs_reg_i cpuctrl_wdata dummy_instr_mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+1168,"ibex_simple_system u_core u_ibex_core cs_reg_i cpuctrl_wdata dummy_instr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1169,"ibex_simple_system u_core u_ibex_core cs_reg_i cpuctrl_wdata data_ind_timing",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1170,"ibex_simple_system u_core u_ibex_core cs_reg_i cpuctrl_wdata icache_enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1171,"ibex_simple_system u_core u_ibex_core cs_reg_i cpuctrl_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i cpuctrl_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_wdata_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+996,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_rdata_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1173,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_we_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1174,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_wreq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1175,"ibex_simple_system u_core u_ibex_core cs_reg_i illegal_csr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+700,"ibex_simple_system u_core u_ibex_core cs_reg_i illegal_csr_priv",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1176,"ibex_simple_system u_core u_ibex_core cs_reg_i illegal_csr_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1604,"ibex_simple_system u_core u_ibex_core cs_reg_i unused_boot_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+1177,"ibex_simple_system u_core u_ibex_core cs_reg_i unused_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+995,"ibex_simple_system u_core u_ibex_core cs_reg_i csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declBit(c+1621,"ibex_simple_system u_core u_ibex_core cs_reg_i MSTATUS_RST_VAL mie",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1622,"ibex_simple_system u_core u_ibex_core cs_reg_i MSTATUS_RST_VAL mpie",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1623,"ibex_simple_system u_core u_ibex_core cs_reg_i MSTATUS_RST_VAL mpp",13, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
        tracep->declBit(c+1624,"ibex_simple_system u_core u_ibex_core cs_reg_i MSTATUS_RST_VAL mprv",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1625,"ibex_simple_system u_core u_ibex_core cs_reg_i MSTATUS_RST_VAL tw",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1626,"ibex_simple_system u_core u_ibex_core cs_reg_i DCSR_RESET_VAL xdebugver",27, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1627,"ibex_simple_system u_core u_ibex_core cs_reg_i DCSR_RESET_VAL zero2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
        tracep->declBit(c+1628,"ibex_simple_system u_core u_ibex_core cs_reg_i DCSR_RESET_VAL ebreakm",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1629,"ibex_simple_system u_core u_ibex_core cs_reg_i DCSR_RESET_VAL zero1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1630,"ibex_simple_system u_core u_ibex_core cs_reg_i DCSR_RESET_VAL ebreaks",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1631,"ibex_simple_system u_core u_ibex_core cs_reg_i DCSR_RESET_VAL ebreaku",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1632,"ibex_simple_system u_core u_ibex_core cs_reg_i DCSR_RESET_VAL stepie",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1633,"ibex_simple_system u_core u_ibex_core cs_reg_i DCSR_RESET_VAL stopcount",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1634,"ibex_simple_system u_core u_ibex_core cs_reg_i DCSR_RESET_VAL stoptime",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1635,"ibex_simple_system u_core u_ibex_core cs_reg_i DCSR_RESET_VAL cause",14, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBit(c+1636,"ibex_simple_system u_core u_ibex_core cs_reg_i DCSR_RESET_VAL zero0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1637,"ibex_simple_system u_core u_ibex_core cs_reg_i DCSR_RESET_VAL mprven",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1638,"ibex_simple_system u_core u_ibex_core cs_reg_i DCSR_RESET_VAL nmip",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1639,"ibex_simple_system u_core u_ibex_core cs_reg_i DCSR_RESET_VAL step",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1640,"ibex_simple_system u_core u_ibex_core cs_reg_i DCSR_RESET_VAL prv",13, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
        tracep->declBit(c+1641,"ibex_simple_system u_core u_ibex_core cs_reg_i MSTACK_RESET_VAL mpie",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1623,"ibex_simple_system u_core u_ibex_core cs_reg_i MSTACK_RESET_VAL mpp",13, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
        tracep->declBus(c+1598,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_mhpmcounter_incr unnamedblk1 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+1642,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_mhpmevent unnamedblk2 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+1598,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_mhpmevent unnamedblk3 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+1169,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_no_dit unused_dit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1168,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_no_dummy unused_dummy_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1167,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_no_dummy unused_dummy_mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+1170,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_no_icache unused_icen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1643,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstatus_csr Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstatus_csr ShadowCopy",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1644,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstatus_csr ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstatus_csr clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstatus_csr rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1178,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstatus_csr wr_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+1123,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstatus_csr wr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+558,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstatus_csr rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstatus_csr rd_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+558,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstatus_csr rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+1598,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mepc_csr Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mepc_csr ShadowCopy",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1645,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mepc_csr ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mepc_csr clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mepc_csr rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1130,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mepc_csr wr_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1131,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mepc_csr wr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+340,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mepc_csr rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mepc_csr rd_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+340,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mepc_csr rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1646,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mie_csr Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mie_csr ShadowCopy",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1647,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mie_csr ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 17,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mie_csr clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mie_csr rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1179,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mie_csr wr_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
        tracep->declBit(c+1128,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mie_csr wr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+559,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mie_csr rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mie_csr rd_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+559,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mie_csr rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
        tracep->declBus(c+1598,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mscratch_csr Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mscratch_csr ShadowCopy",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1645,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mscratch_csr ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mscratch_csr clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mscratch_csr rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mscratch_csr wr_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1129,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mscratch_csr wr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+463,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mscratch_csr rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mscratch_csr rd_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+463,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mscratch_csr rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1643,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mcause_csr Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mcause_csr ShadowCopy",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1648,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mcause_csr ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mcause_csr clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mcause_csr rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1132,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mcause_csr wr_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+1133,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mcause_csr wr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+464,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mcause_csr rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mcause_csr rd_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+464,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mcause_csr rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+1598,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtval_csr Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtval_csr ShadowCopy",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1645,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtval_csr ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtval_csr clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtval_csr rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1134,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtval_csr wr_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1135,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtval_csr wr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+465,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtval_csr rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtval_csr rd_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+465,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtval_csr rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1598,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtvec_csr Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtvec_csr ShadowCopy",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1649,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtvec_csr ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtvec_csr clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtvec_csr rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1136,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtvec_csr wr_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1137,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtvec_csr wr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+342,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtvec_csr rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtvec_csr rd_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+342,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mtvec_csr rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1598,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dcsr_csr Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dcsr_csr ShadowCopy",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1650,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dcsr_csr ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dcsr_csr clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dcsr_csr rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1180,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dcsr_csr wr_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1153,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dcsr_csr wr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+560,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dcsr_csr rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dcsr_csr rd_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+560,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dcsr_csr rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1598,"ibex_simple_system u_core u_ibex_core cs_reg_i u_depc_csr Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i u_depc_csr ShadowCopy",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1645,"ibex_simple_system u_core u_ibex_core cs_reg_i u_depc_csr ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i u_depc_csr clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i u_depc_csr rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1154,"ibex_simple_system u_core u_ibex_core cs_reg_i u_depc_csr wr_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1155,"ibex_simple_system u_core u_ibex_core cs_reg_i u_depc_csr wr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+341,"ibex_simple_system u_core u_ibex_core cs_reg_i u_depc_csr rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i u_depc_csr rd_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+341,"ibex_simple_system u_core u_ibex_core cs_reg_i u_depc_csr rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1598,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch0_csr Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch0_csr ShadowCopy",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1645,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch0_csr ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch0_csr clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch0_csr rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch0_csr wr_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1156,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch0_csr wr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+481,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch0_csr rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch0_csr rd_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+481,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch0_csr rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1598,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch1_csr Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch1_csr ShadowCopy",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1645,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch1_csr ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch1_csr clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch1_csr rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch1_csr wr_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1157,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch1_csr wr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+482,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch1_csr rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch1_csr rd_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+482,"ibex_simple_system u_core u_ibex_core cs_reg_i u_dscratch1_csr rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1605,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_csr Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_csr ShadowCopy",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1651,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_csr ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_csr clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_csr rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+561,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_csr wr_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1158,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_csr wr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+562,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_csr rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_csr rd_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+562,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_csr rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+1598,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_epc_csr Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_epc_csr ShadowCopy",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1645,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_epc_csr ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_epc_csr clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_epc_csr rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+340,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_epc_csr wr_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1158,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_epc_csr wr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+487,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_epc_csr rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_epc_csr rd_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+487,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_epc_csr rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1643,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_cause_csr Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_cause_csr ShadowCopy",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1648,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_cause_csr ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_cause_csr clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_cause_csr rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+464,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_cause_csr wr_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+1158,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_cause_csr wr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+488,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_cause_csr rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_cause_csr rd_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+488,"ibex_simple_system u_core u_ibex_core cs_reg_i u_mstack_cause_csr rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+1652,"ibex_simple_system u_core u_ibex_core cs_reg_i mcycle_counter_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i mcycle_counter_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i mcycle_counter_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+701,"ibex_simple_system u_core u_ibex_core cs_reg_i mcycle_counter_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1181,"ibex_simple_system u_core u_ibex_core cs_reg_i mcycle_counter_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1182,"ibex_simple_system u_core u_ibex_core cs_reg_i mcycle_counter_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i mcycle_counter_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+563,"ibex_simple_system u_core u_ibex_core cs_reg_i mcycle_counter_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+563,"ibex_simple_system u_core u_ibex_core cs_reg_i mcycle_counter_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1183,"ibex_simple_system u_core u_ibex_core cs_reg_i mcycle_counter_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1185,"ibex_simple_system u_core u_ibex_core cs_reg_i mcycle_counter_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1187,"ibex_simple_system u_core u_ibex_core cs_reg_i mcycle_counter_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1188,"ibex_simple_system u_core u_ibex_core cs_reg_i mcycle_counter_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+563,"ibex_simple_system u_core u_ibex_core cs_reg_i mcycle_counter_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+1652,"ibex_simple_system u_core u_ibex_core cs_reg_i minstret_counter_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i minstret_counter_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i minstret_counter_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+702,"ibex_simple_system u_core u_ibex_core cs_reg_i minstret_counter_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1190,"ibex_simple_system u_core u_ibex_core cs_reg_i minstret_counter_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1191,"ibex_simple_system u_core u_ibex_core cs_reg_i minstret_counter_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i minstret_counter_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+565,"ibex_simple_system u_core u_ibex_core cs_reg_i minstret_counter_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+565,"ibex_simple_system u_core u_ibex_core cs_reg_i minstret_counter_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1192,"ibex_simple_system u_core u_ibex_core cs_reg_i minstret_counter_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1194,"ibex_simple_system u_core u_ibex_core cs_reg_i minstret_counter_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1196,"ibex_simple_system u_core u_ibex_core cs_reg_i minstret_counter_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1197,"ibex_simple_system u_core u_ibex_core cs_reg_i minstret_counter_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+565,"ibex_simple_system u_core u_ibex_core cs_reg_i minstret_counter_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+1643,"ibex_simple_system u_core u_ibex_core cs_reg_i u_cpuctrl_csr Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core cs_reg_i u_cpuctrl_csr ShadowCopy",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1648,"ibex_simple_system u_core u_ibex_core cs_reg_i u_cpuctrl_csr ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i u_cpuctrl_csr clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i u_cpuctrl_csr rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+175,"ibex_simple_system u_core u_ibex_core cs_reg_i u_cpuctrl_csr wr_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+1171,"ibex_simple_system u_core u_ibex_core cs_reg_i u_cpuctrl_csr wr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+567,"ibex_simple_system u_core u_ibex_core cs_reg_i u_cpuctrl_csr rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core cs_reg_i u_cpuctrl_csr rd_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+567,"ibex_simple_system u_core u_ibex_core cs_reg_i u_cpuctrl_csr rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[0] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[0] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[0] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+703,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[0] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1199,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[0] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1200,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[0] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[0] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+568,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[0] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+568,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[0] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1201,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[0] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1203,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[0] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1205,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[0] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1206,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[0] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+570,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[0] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1208,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[0] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[1] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[1] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[1] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+704,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[1] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1209,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[1] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1210,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[1] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[1] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+572,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[1] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+572,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[1] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1211,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[1] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1213,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[1] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1215,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[1] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1216,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[1] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+574,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[1] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1218,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[1] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[2] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[2] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[2] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+705,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[2] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1219,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[2] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1220,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[2] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[2] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+576,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[2] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+576,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[2] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1221,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[2] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1223,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[2] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1225,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[2] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1226,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[2] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+578,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[2] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1228,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[2] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[3] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[3] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[3] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+706,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[3] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1229,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[3] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1230,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[3] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[3] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+580,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[3] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+580,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[3] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1231,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[3] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1233,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[3] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1235,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[3] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1236,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[3] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+582,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[3] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1238,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[3] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[4] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[4] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[4] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+707,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[4] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1239,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[4] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1240,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[4] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[4] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+584,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[4] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+584,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[4] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1241,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[4] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1243,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[4] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1245,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[4] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1246,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[4] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+586,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[4] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1248,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[4] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[5] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[5] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[5] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+708,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[5] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1249,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[5] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1250,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[5] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[5] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+588,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[5] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+588,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[5] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1251,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[5] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1253,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[5] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1255,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[5] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1256,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[5] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+590,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[5] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1258,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[5] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[6] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[6] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[6] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+709,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[6] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1259,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[6] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1260,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[6] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[6] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+592,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[6] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+592,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[6] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1261,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[6] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1263,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[6] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1265,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[6] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1266,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[6] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+594,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[6] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1268,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[6] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[7] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[7] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[7] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+710,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[7] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1269,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[7] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1270,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[7] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[7] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+596,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[7] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+596,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[7] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1271,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[7] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1273,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[7] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1275,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[7] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1276,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[7] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+598,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[7] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1278,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[7] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[8] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[8] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[8] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+711,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[8] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1279,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[8] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1280,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[8] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[8] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+600,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[8] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+600,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[8] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1281,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[8] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1283,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[8] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1285,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[8] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1286,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[8] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+602,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[8] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1288,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[8] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[9] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[9] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[9] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+712,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[9] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1289,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[9] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1290,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[9] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[9] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+604,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[9] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+604,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[9] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1291,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[9] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1293,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[9] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1295,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[9] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1296,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[9] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+606,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[9] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1298,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[9] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[10] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[10] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[10] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+713,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[10] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1299,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[10] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1300,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[10] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[10] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+608,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[10] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+608,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[10] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1301,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[10] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1303,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[10] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1305,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[10] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1306,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[10] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+610,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[10] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1308,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[10] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[11] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[11] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[11] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+714,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[11] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1309,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[11] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1310,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[11] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[11] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+612,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[11] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+612,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[11] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1311,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[11] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1313,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[11] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1315,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[11] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1316,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[11] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+614,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[11] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1318,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[11] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[12] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[12] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[12] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+715,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[12] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1319,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[12] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1320,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[12] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[12] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+616,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[12] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+616,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[12] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1321,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[12] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1323,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[12] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1325,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[12] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1326,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[12] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+618,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[12] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1328,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[12] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[13] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[13] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[13] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+716,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[13] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1329,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[13] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1330,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[13] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[13] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+620,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[13] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[13] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1331,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[13] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1333,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[13] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1335,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[13] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1336,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[13] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+622,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[13] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1338,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[13] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[14] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[14] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[14] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+717,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[14] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1339,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[14] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1340,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[14] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[14] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+624,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[14] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+624,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[14] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1341,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[14] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1343,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[14] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1345,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[14] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1346,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[14] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+626,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[14] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1348,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[14] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[15] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[15] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[15] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+718,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[15] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1349,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[15] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1350,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[15] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[15] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+628,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[15] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+628,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[15] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1351,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[15] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1353,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[15] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1355,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[15] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1356,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[15] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+630,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[15] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1358,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[15] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[16] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[16] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[16] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+719,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[16] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1359,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[16] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1360,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[16] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[16] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+632,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[16] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+632,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[16] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1361,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[16] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1363,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[16] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1365,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[16] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1366,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[16] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+634,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[16] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1368,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[16] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[17] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[17] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[17] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+720,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[17] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1369,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[17] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1370,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[17] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[17] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+636,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[17] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+636,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[17] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1371,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[17] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1373,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[17] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1375,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[17] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1376,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[17] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+638,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[17] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1378,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[17] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[18] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[18] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[18] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+721,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[18] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1379,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[18] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1380,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[18] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[18] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+640,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[18] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+640,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[18] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1381,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[18] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1383,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[18] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1385,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[18] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1386,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[18] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+642,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[18] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1388,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[18] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[19] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[19] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[19] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+722,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[19] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1389,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[19] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1390,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[19] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[19] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+644,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[19] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+644,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[19] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1391,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[19] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1393,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[19] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1395,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[19] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1396,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[19] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+646,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[19] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1398,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[19] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[20] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[20] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[20] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+723,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[20] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1399,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[20] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1400,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[20] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[20] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+648,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[20] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+648,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[20] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1401,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[20] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1403,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[20] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1405,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[20] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1406,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[20] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+650,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[20] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1408,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[20] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[21] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[21] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[21] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+724,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[21] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1409,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[21] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1410,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[21] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[21] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+652,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[21] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+652,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[21] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1411,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[21] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1413,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[21] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1415,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[21] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1416,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[21] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+654,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[21] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1418,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[21] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[22] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[22] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[22] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+725,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[22] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1419,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[22] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1420,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[22] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[22] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+656,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[22] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+656,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[22] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1421,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[22] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1423,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[22] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1425,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[22] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1426,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[22] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+658,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[22] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1428,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[22] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[23] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[23] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[23] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+726,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[23] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1429,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[23] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1430,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[23] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[23] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+660,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[23] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+660,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[23] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1431,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[23] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1433,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[23] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1435,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[23] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1436,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[23] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+662,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[23] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1438,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[23] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[24] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[24] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[24] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+727,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[24] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1439,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[24] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1440,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[24] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[24] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+664,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[24] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+664,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[24] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1441,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[24] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1443,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[24] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1445,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[24] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1446,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[24] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+666,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[24] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1448,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[24] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[25] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[25] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[25] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+728,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[25] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1449,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[25] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1450,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[25] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[25] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+668,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[25] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+668,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[25] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1451,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[25] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1453,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[25] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1455,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[25] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1456,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[25] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+670,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[25] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1458,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[25] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[26] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[26] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[26] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+729,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[26] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1459,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[26] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1460,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[26] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[26] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+672,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[26] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+672,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[26] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1461,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[26] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1463,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[26] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1465,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[26] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1466,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[26] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+674,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[26] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1468,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[26] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[27] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[27] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[27] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+730,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[27] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1469,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[27] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1470,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[27] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[27] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+676,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[27] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+676,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[27] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1471,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[27] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1473,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[27] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1475,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[27] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1476,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[27] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+678,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[27] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1478,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[27] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBus(c+1653,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[28] gen_imp mcounters_variable_i CounterWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+180,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[28] gen_imp mcounters_variable_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[28] gen_imp mcounters_variable_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+731,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[28] gen_imp mcounters_variable_i counter_inc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1479,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[28] gen_imp mcounters_variable_i counterh_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1480,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[28] gen_imp mcounters_variable_i counter_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1172,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[28] gen_imp mcounters_variable_i counter_val_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+680,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[28] gen_imp mcounters_variable_i counter_val_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+680,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[28] gen_imp mcounters_variable_i counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1481,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[28] gen_imp mcounters_variable_i counter_upd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+1483,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[28] gen_imp mcounters_variable_i counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+1485,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[28] gen_imp mcounters_variable_i we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1486,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[28] gen_imp mcounters_variable_i counter_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declQuad(c+682,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[28] gen_imp mcounters_variable_i counter_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
        tracep->declBus(c+1488,"ibex_simple_system u_core u_ibex_core cs_reg_i gen_cntrs[28] gen_imp mcounters_variable_i g_counter_narrow unused_counter_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,40);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i RV32E",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1598,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i DataWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1580,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i DummyInstructions",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+179,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i test_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i dummy_instr_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+744,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i raddr_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+759,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rdata_a_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+745,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i raddr_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+760,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rdata_b_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+746,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i waddr_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+990,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i wdata_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+799,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i we_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1654,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1598,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i NUM_WORDS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+201,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+202,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+203,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+204,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+205,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(4)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+206,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(5)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+207,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(6)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+208,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(7)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+209,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(8)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+210,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(9)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+211,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(10)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+212,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(11)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+213,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(12)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+214,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(13)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+215,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(14)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+216,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(15)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+217,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(16)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+218,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(17)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+219,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(18)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+220,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(19)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+221,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(20)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+222,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(21)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+223,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(22)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+224,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(23)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+225,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(24)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+226,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(25)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+227,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(26)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+228,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(27)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+229,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(28)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+230,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(29)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+231,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(30)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+232,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg(31)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+233,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+234,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+235,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+236,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(4)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+237,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(5)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+238,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(6)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+239,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(7)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+240,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(8)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+241,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(9)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+242,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(10)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+243,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(11)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+244,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(12)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+245,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(13)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+246,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(14)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+247,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(15)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+248,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(16)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+249,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(17)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+250,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(18)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+251,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(19)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+252,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(20)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+253,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(21)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+254,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(22)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+255,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(23)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+256,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(24)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+257,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(25)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+258,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(26)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+259,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(27)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+260,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(28)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+261,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(29)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+262,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(30)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+263,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i rf_reg_q(31)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1489,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i we_a_dec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,1);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i unused_test_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1598,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i we_a_decoder unnamedblk1 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+1573,"ibex_simple_system u_core u_ibex_core gen_regfile_ff register_file_i g_normal_r0 unused_dummy_instr_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+179,"ibex_simple_system u_core u_ibex_tracer clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_core u_ibex_tracer rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1591,"ibex_simple_system u_core u_ibex_tracer hart_id_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+302,"ibex_simple_system u_core u_ibex_tracer rvfi_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+303,"ibex_simple_system u_core u_ibex_tracer rvfi_order",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+305,"ibex_simple_system u_core u_ibex_tracer rvfi_insn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+306,"ibex_simple_system u_core u_ibex_tracer rvfi_trap",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+307,"ibex_simple_system u_core u_ibex_tracer rvfi_halt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+308,"ibex_simple_system u_core u_ibex_tracer rvfi_intr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+309,"ibex_simple_system u_core u_ibex_tracer rvfi_mode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+310,"ibex_simple_system u_core u_ibex_tracer rvfi_ixl",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+311,"ibex_simple_system u_core u_ibex_tracer rvfi_rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+312,"ibex_simple_system u_core u_ibex_tracer rvfi_rs2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+313,"ibex_simple_system u_core u_ibex_tracer rvfi_rs3_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+314,"ibex_simple_system u_core u_ibex_tracer rvfi_rs1_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+315,"ibex_simple_system u_core u_ibex_tracer rvfi_rs2_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+316,"ibex_simple_system u_core u_ibex_tracer rvfi_rs3_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+317,"ibex_simple_system u_core u_ibex_tracer rvfi_rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+318,"ibex_simple_system u_core u_ibex_tracer rvfi_rd_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+319,"ibex_simple_system u_core u_ibex_tracer rvfi_pc_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+320,"ibex_simple_system u_core u_ibex_tracer rvfi_pc_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+321,"ibex_simple_system u_core u_ibex_tracer rvfi_mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+322,"ibex_simple_system u_core u_ibex_tracer rvfi_mem_rmask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+323,"ibex_simple_system u_core u_ibex_tracer rvfi_mem_wmask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+324,"ibex_simple_system u_core u_ibex_tracer rvfi_mem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+325,"ibex_simple_system u_core u_ibex_tracer rvfi_mem_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+303,"ibex_simple_system u_core u_ibex_tracer unused_rvfi_order",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+306,"ibex_simple_system u_core u_ibex_tracer unused_rvfi_trap",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+307,"ibex_simple_system u_core u_ibex_tracer unused_rvfi_halt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+308,"ibex_simple_system u_core u_ibex_tracer unused_rvfi_intr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+309,"ibex_simple_system u_core u_ibex_tracer unused_rvfi_mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+310,"ibex_simple_system u_core u_ibex_tracer unused_rvfi_ixl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+288,"ibex_simple_system u_core u_ibex_tracer file_handle",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+738,"ibex_simple_system u_core u_ibex_tracer cycle",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+684,"ibex_simple_system u_core u_ibex_tracer insn_is_compressed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1655,"ibex_simple_system u_core u_ibex_tracer RS1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1656,"ibex_simple_system u_core u_ibex_tracer RS2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1657,"ibex_simple_system u_core u_ibex_tracer RS3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1658,"ibex_simple_system u_core u_ibex_tracer RD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1659,"ibex_simple_system u_core u_ibex_tracer MEM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+685,"ibex_simple_system u_core u_ibex_tracer data_accessed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+176,"ibex_simple_system u_core u_ibex_tracer trace_log_enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1660,"ibex_simple_system u_ram Depth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1570,"ibex_simple_system u_ram MemInitFile",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
        tracep->declBit(c+179,"ibex_simple_system u_ram clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_ram rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1490,"ibex_simple_system u_ram a_req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1491,"ibex_simple_system u_ram a_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1492,"ibex_simple_system u_ram a_be_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1493,"ibex_simple_system u_ram a_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1494,"ibex_simple_system u_ram a_wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+264,"ibex_simple_system u_ram a_rvalid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+289,"ibex_simple_system u_ram a_rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+956,"ibex_simple_system u_ram b_req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_ram b_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1661,"ibex_simple_system u_ram b_be_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+957,"ibex_simple_system u_ram b_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1591,"ibex_simple_system u_ram b_wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+187,"ibex_simple_system u_ram b_rvalid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+281,"ibex_simple_system u_ram b_rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1662,"ibex_simple_system u_ram Aw",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1495,"ibex_simple_system u_ram a_addr_idx",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
        tracep->declBus(c+1496,"ibex_simple_system u_ram unused_a_addr_parts",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,0);
        tracep->declBus(c+1497,"ibex_simple_system u_ram b_addr_idx",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
        tracep->declBus(c+1498,"ibex_simple_system u_ram unused_b_addr_parts",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,0);
        tracep->declBus(c+1499,"ibex_simple_system u_ram a_wmask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+177,"ibex_simple_system u_ram b_wmask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1663,"ibex_simple_system u_ram unnamedblk1 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+1574,"ibex_simple_system u_ram u_ram Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1660,"ibex_simple_system u_ram u_ram Depth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1572,"ibex_simple_system u_ram u_ram DataBitsPerMask",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1570,"ibex_simple_system u_ram u_ram MemInitFile",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
        tracep->declBus(c+1662,"ibex_simple_system u_ram u_ram Aw",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+179,"ibex_simple_system u_ram u_ram clk_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+179,"ibex_simple_system u_ram u_ram clk_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1490,"ibex_simple_system u_ram u_ram a_req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1491,"ibex_simple_system u_ram u_ram a_write_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1495,"ibex_simple_system u_ram u_ram a_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
        tracep->declBus(c+1494,"ibex_simple_system u_ram u_ram a_wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1499,"ibex_simple_system u_ram u_ram a_wmask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+289,"ibex_simple_system u_ram u_ram a_rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+956,"ibex_simple_system u_ram u_ram b_req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_ram u_ram b_write_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1497,"ibex_simple_system u_ram u_ram b_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
        tracep->declBus(c+1591,"ibex_simple_system u_ram u_ram b_wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+177,"ibex_simple_system u_ram u_ram b_wmask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+281,"ibex_simple_system u_ram u_ram b_rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1664,"ibex_simple_system u_ram u_ram cfg_i a_ram_fcfg cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1665,"ibex_simple_system u_ram u_ram cfg_i a_ram_fcfg cfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1664,"ibex_simple_system u_ram u_ram cfg_i a_ram_lcfg cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1665,"ibex_simple_system u_ram u_ram cfg_i a_ram_lcfg cfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1664,"ibex_simple_system u_ram u_ram cfg_i b_ram_fcfg cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1665,"ibex_simple_system u_ram u_ram cfg_i b_ram_fcfg cfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1664,"ibex_simple_system u_ram u_ram cfg_i b_ram_lcfg cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1665,"ibex_simple_system u_ram u_ram cfg_i b_ram_lcfg cfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1574,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1660,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic Depth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1572,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic DataBitsPerMask",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1570,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic MemInitFile",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
        tracep->declBus(c+1662,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic Aw",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+179,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic clk_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+179,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic clk_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1490,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic a_req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1491,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic a_write_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1495,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic a_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
        tracep->declBus(c+1494,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic a_wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1499,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic a_wmask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+289,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic a_rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+956,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic b_req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1573,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic b_write_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1497,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic b_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
        tracep->declBus(c+1591,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic b_wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+177,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic b_wmask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+281,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic b_rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1664,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic cfg_i a_ram_fcfg cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1665,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic cfg_i a_ram_fcfg cfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1664,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic cfg_i a_ram_lcfg cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1665,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic cfg_i a_ram_lcfg cfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1664,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic cfg_i b_ram_fcfg cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1665,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic cfg_i b_ram_fcfg cfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1664,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic cfg_i b_ram_lcfg cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1665,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic cfg_i b_ram_lcfg cfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1573,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic unused_cfg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1574,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic MaskWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1500,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic a_wmask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+178,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic b_wmask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+290,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic unnamedblk1 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+1666,"ibex_simple_system u_ram u_ram gen_generic u_impl_generic unnamedblk2 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+1667,"ibex_simple_system u_simulator_ctrl FlushOnChar",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+179,"ibex_simple_system u_simulator_ctrl clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_simulator_ctrl rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1501,"ibex_simple_system u_simulator_ctrl req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1502,"ibex_simple_system u_simulator_ctrl we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1503,"ibex_simple_system u_simulator_ctrl be_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1504,"ibex_simple_system u_simulator_ctrl addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1505,"ibex_simple_system u_simulator_ctrl wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+265,"ibex_simple_system u_simulator_ctrl rvalid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1591,"ibex_simple_system u_simulator_ctrl rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1604,"ibex_simple_system u_simulator_ctrl CHAR_OUT_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
        tracep->declBus(c+1668,"ibex_simple_system u_simulator_ctrl SIM_CTRL_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
        tracep->declBus(c+1506,"ibex_simple_system u_simulator_ctrl ctrl_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+266,"ibex_simple_system u_simulator_ctrl sim_finish",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+267,"ibex_simple_system u_simulator_ctrl log_fd",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+1598,"ibex_simple_system u_timer DataWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1598,"ibex_simple_system u_timer AddressWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+179,"ibex_simple_system u_timer clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1524,"ibex_simple_system u_timer rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1507,"ibex_simple_system u_timer timer_req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1508,"ibex_simple_system u_timer timer_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1509,"ibex_simple_system u_timer timer_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1510,"ibex_simple_system u_timer timer_be_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1511,"ibex_simple_system u_timer timer_wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+268,"ibex_simple_system u_timer timer_rvalid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+291,"ibex_simple_system u_timer timer_rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+292,"ibex_simple_system u_timer timer_err_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+182,"ibex_simple_system u_timer timer_intr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1669,"ibex_simple_system u_timer TW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1670,"ibex_simple_system u_timer ADDR_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1671,"ibex_simple_system u_timer MTIME_LOW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
        tracep->declBus(c+1672,"ibex_simple_system u_timer MTIME_HIGH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
        tracep->declBus(c+1673,"ibex_simple_system u_timer MTIMECMP_LOW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
        tracep->declBus(c+1674,"ibex_simple_system u_timer MTIMECMP_HIGH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
        tracep->declBit(c+1512,"ibex_simple_system u_timer timer_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1513,"ibex_simple_system u_timer mtime_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1514,"ibex_simple_system u_timer mtimeh_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1515,"ibex_simple_system u_timer mtimecmp_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1516,"ibex_simple_system u_timer mtimecmph_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1517,"ibex_simple_system u_timer mtime_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1518,"ibex_simple_system u_timer mtimeh_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1519,"ibex_simple_system u_timer mtimecmp_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1520,"ibex_simple_system u_timer mtimecmph_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+269,"ibex_simple_system u_timer mtime_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1562,"ibex_simple_system u_timer mtime_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+271,"ibex_simple_system u_timer mtime_inc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+273,"ibex_simple_system u_timer mtimecmp_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1564,"ibex_simple_system u_timer mtimecmp_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+182,"ibex_simple_system u_timer interrupt_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1566,"ibex_simple_system u_timer interrupt_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+292,"ibex_simple_system u_timer error_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1521,"ibex_simple_system u_timer error_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+291,"ibex_simple_system u_timer rdata_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1522,"ibex_simple_system u_timer rdata_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+268,"ibex_simple_system u_timer rvalid_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1614,"ibex_tracer_pkg OPCODE_C0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
        tracep->declBus(c+1675,"ibex_tracer_pkg OPCODE_C1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
        tracep->declBus(c+1676,"ibex_tracer_pkg OPCODE_C2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
        tracep->declBus(c+1677,"ibex_tracer_pkg INSN_LUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1678,"ibex_tracer_pkg INSN_AUIPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1679,"ibex_tracer_pkg INSN_JAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1680,"ibex_tracer_pkg INSN_JALR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1681,"ibex_tracer_pkg INSN_BEQ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1682,"ibex_tracer_pkg INSN_BNE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1683,"ibex_tracer_pkg INSN_BLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1684,"ibex_tracer_pkg INSN_BGE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1685,"ibex_tracer_pkg INSN_BLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1686,"ibex_tracer_pkg INSN_BGEU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1687,"ibex_tracer_pkg INSN_ADDI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1688,"ibex_tracer_pkg INSN_SLTI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1689,"ibex_tracer_pkg INSN_SLTIU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1690,"ibex_tracer_pkg INSN_XORI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1691,"ibex_tracer_pkg INSN_ORI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1692,"ibex_tracer_pkg INSN_ANDI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1693,"ibex_tracer_pkg INSN_SLLI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1694,"ibex_tracer_pkg INSN_SRLI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1695,"ibex_tracer_pkg INSN_SRAI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1696,"ibex_tracer_pkg INSN_ADD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1697,"ibex_tracer_pkg INSN_SUB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1698,"ibex_tracer_pkg INSN_SLL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1699,"ibex_tracer_pkg INSN_SLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1700,"ibex_tracer_pkg INSN_SLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1701,"ibex_tracer_pkg INSN_XOR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1702,"ibex_tracer_pkg INSN_SRL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1703,"ibex_tracer_pkg INSN_SRA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1704,"ibex_tracer_pkg INSN_OR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1705,"ibex_tracer_pkg INSN_AND",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1706,"ibex_tracer_pkg INSN_CSRRW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1707,"ibex_tracer_pkg INSN_CSRRS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1708,"ibex_tracer_pkg INSN_CSRRC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1709,"ibex_tracer_pkg INSN_CSRRWI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1710,"ibex_tracer_pkg INSN_CSRRSI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1711,"ibex_tracer_pkg INSN_CSRRCI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1712,"ibex_tracer_pkg INSN_ECALL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1713,"ibex_tracer_pkg INSN_EBREAK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1714,"ibex_tracer_pkg INSN_MRET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1715,"ibex_tracer_pkg INSN_DRET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1716,"ibex_tracer_pkg INSN_WFI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1717,"ibex_tracer_pkg INSN_DIV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1718,"ibex_tracer_pkg INSN_DIVU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1719,"ibex_tracer_pkg INSN_REM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1720,"ibex_tracer_pkg INSN_REMU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1721,"ibex_tracer_pkg INSN_PMUL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1722,"ibex_tracer_pkg INSN_PMUH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1723,"ibex_tracer_pkg INSN_PMULHSU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1724,"ibex_tracer_pkg INSN_PMULHU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1725,"ibex_tracer_pkg INSN_SLOI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1726,"ibex_tracer_pkg INSN_SROI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1727,"ibex_tracer_pkg INSN_RORI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1728,"ibex_tracer_pkg INSN_CLZ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1729,"ibex_tracer_pkg INSN_CTZ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1730,"ibex_tracer_pkg INSN_PCNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1731,"ibex_tracer_pkg INSN_SEXTB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1732,"ibex_tracer_pkg INSN_SEXTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1733,"ibex_tracer_pkg INSN_SLO",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1734,"ibex_tracer_pkg INSN_SRO",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1735,"ibex_tracer_pkg INSN_ROL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1736,"ibex_tracer_pkg INSN_ROR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1737,"ibex_tracer_pkg INSN_MIN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1738,"ibex_tracer_pkg INSN_MAX",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1739,"ibex_tracer_pkg INSN_MINU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1740,"ibex_tracer_pkg INSN_MAXU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1741,"ibex_tracer_pkg INSN_XNOR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1742,"ibex_tracer_pkg INSN_ORN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1743,"ibex_tracer_pkg INSN_ANDN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1744,"ibex_tracer_pkg INSN_PACK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1745,"ibex_tracer_pkg INSN_PACKU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1746,"ibex_tracer_pkg INSN_PACKH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1747,"ibex_tracer_pkg INSN_SBCLRI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1748,"ibex_tracer_pkg INSN_SBSETI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1749,"ibex_tracer_pkg INSN_SBINVI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1750,"ibex_tracer_pkg INSN_SBEXTI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1751,"ibex_tracer_pkg INSN_SBCLR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1752,"ibex_tracer_pkg INSN_SBSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1753,"ibex_tracer_pkg INSN_SBINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1754,"ibex_tracer_pkg INSN_SBEXT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1755,"ibex_tracer_pkg INSN_GREVI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1756,"ibex_tracer_pkg INSN_REV_P",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1757,"ibex_tracer_pkg INSN_REV2_N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1758,"ibex_tracer_pkg INSN_REV_N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1759,"ibex_tracer_pkg INSN_REV4_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1760,"ibex_tracer_pkg INSN_REV2_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1761,"ibex_tracer_pkg INSN_REV_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1762,"ibex_tracer_pkg INSN_REV8_H",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1763,"ibex_tracer_pkg INSN_REV4_H",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1764,"ibex_tracer_pkg INSN_REV2_H",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1765,"ibex_tracer_pkg INSN_REV_H",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1766,"ibex_tracer_pkg INSN_REV16",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1767,"ibex_tracer_pkg INSN_REV8",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1768,"ibex_tracer_pkg INSN_REV4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1769,"ibex_tracer_pkg INSN_REV2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1770,"ibex_tracer_pkg INSN_REV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1771,"ibex_tracer_pkg INSN_GORCI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1772,"ibex_tracer_pkg INSN_ORC_P",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1773,"ibex_tracer_pkg INSN_ORC2_N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1774,"ibex_tracer_pkg INSN_ORC_N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1775,"ibex_tracer_pkg INSN_ORC4_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1776,"ibex_tracer_pkg INSN_ORC2_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1777,"ibex_tracer_pkg INSN_ORC_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1778,"ibex_tracer_pkg INSN_ORC8_H",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1779,"ibex_tracer_pkg INSN_ORC4_H",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1780,"ibex_tracer_pkg INSN_ORC2_H",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1781,"ibex_tracer_pkg INSN_ORC_H",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1782,"ibex_tracer_pkg INSN_ORC16",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1783,"ibex_tracer_pkg INSN_ORC8",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1784,"ibex_tracer_pkg INSN_ORC4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1785,"ibex_tracer_pkg INSN_ORC2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1786,"ibex_tracer_pkg INSN_ORC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1787,"ibex_tracer_pkg INSN_SHFLI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1788,"ibex_tracer_pkg INSN_ZIP_N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1789,"ibex_tracer_pkg INSN_ZIP2_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1790,"ibex_tracer_pkg INSN_ZIP_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1791,"ibex_tracer_pkg INSN_ZIP4_H",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1792,"ibex_tracer_pkg INSN_ZIP2_H",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1793,"ibex_tracer_pkg INSN_ZIP_H",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1794,"ibex_tracer_pkg INSN_ZIP8",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1795,"ibex_tracer_pkg INSN_ZIP4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1796,"ibex_tracer_pkg INSN_ZIP2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1797,"ibex_tracer_pkg INSN_ZIP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1798,"ibex_tracer_pkg INSN_UNSHFLI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1799,"ibex_tracer_pkg INSN_UNZIP_N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1800,"ibex_tracer_pkg INSN_UNZIP2_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1801,"ibex_tracer_pkg INSN_UNZIP_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1802,"ibex_tracer_pkg INSN_UNZIP4_H",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1803,"ibex_tracer_pkg INSN_UNZIP2_H",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1804,"ibex_tracer_pkg INSN_UNZIP_H",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1805,"ibex_tracer_pkg INSN_UNZIP8",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1806,"ibex_tracer_pkg INSN_UNZIP4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1807,"ibex_tracer_pkg INSN_UNZIP2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1808,"ibex_tracer_pkg INSN_UNZIP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1809,"ibex_tracer_pkg INSN_GREV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1810,"ibex_tracer_pkg INSN_GORC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1811,"ibex_tracer_pkg INSN_SHFL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1812,"ibex_tracer_pkg INSN_UNSHFL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1813,"ibex_tracer_pkg INSN_BDEP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1814,"ibex_tracer_pkg INSN_BEXT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1815,"ibex_tracer_pkg INSN_FSRI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1816,"ibex_tracer_pkg INSN_CMIX",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1817,"ibex_tracer_pkg INSN_CMOV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1818,"ibex_tracer_pkg INSN_FSL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1819,"ibex_tracer_pkg INSN_FSR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1820,"ibex_tracer_pkg INSN_BFP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1821,"ibex_tracer_pkg INSN_CLMUL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1822,"ibex_tracer_pkg INSN_CLMULR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1823,"ibex_tracer_pkg INSN_CLMULH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1824,"ibex_tracer_pkg INSN_CRC32_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1825,"ibex_tracer_pkg INSN_CRC32_H",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1826,"ibex_tracer_pkg INSN_CRC32_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1827,"ibex_tracer_pkg INSN_CRC32C_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1828,"ibex_tracer_pkg INSN_CRC32C_H",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1829,"ibex_tracer_pkg INSN_CRC32C_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1830,"ibex_tracer_pkg INSN_LOAD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1831,"ibex_tracer_pkg INSN_STORE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1832,"ibex_tracer_pkg INSN_FENCE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1833,"ibex_tracer_pkg INSN_FENCEI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1834,"ibex_tracer_pkg INSN_CADDI4SPN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1835,"ibex_tracer_pkg INSN_CLW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1836,"ibex_tracer_pkg INSN_CSW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1837,"ibex_tracer_pkg INSN_CADDI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1838,"ibex_tracer_pkg INSN_CJAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1839,"ibex_tracer_pkg INSN_CJ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1840,"ibex_tracer_pkg INSN_CLI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1841,"ibex_tracer_pkg INSN_CLUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1842,"ibex_tracer_pkg INSN_CBEQZ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1843,"ibex_tracer_pkg INSN_CBNEZ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1844,"ibex_tracer_pkg INSN_CSRLI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1845,"ibex_tracer_pkg INSN_CSRAI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1846,"ibex_tracer_pkg INSN_CANDI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1847,"ibex_tracer_pkg INSN_CSUB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1848,"ibex_tracer_pkg INSN_CXOR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1849,"ibex_tracer_pkg INSN_COR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1850,"ibex_tracer_pkg INSN_CAND",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1851,"ibex_tracer_pkg INSN_CSLLI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1852,"ibex_tracer_pkg INSN_CLWSP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1853,"ibex_tracer_pkg INSN_SWSP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1854,"ibex_tracer_pkg INSN_CMV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1855,"ibex_tracer_pkg INSN_CADD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1855,"ibex_tracer_pkg INSN_CEBREAK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1854,"ibex_tracer_pkg INSN_CJR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+1855,"ibex_tracer_pkg INSN_CJALR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBit(c+1664,"prim_ram_2p_pkg RAM_2P_CFG_DEFAULT a_ram_fcfg cfg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1665,"prim_ram_2p_pkg RAM_2P_CFG_DEFAULT a_ram_fcfg cfg",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBit(c+1664,"prim_ram_2p_pkg RAM_2P_CFG_DEFAULT a_ram_lcfg cfg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1665,"prim_ram_2p_pkg RAM_2P_CFG_DEFAULT a_ram_lcfg cfg",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBit(c+1664,"prim_ram_2p_pkg RAM_2P_CFG_DEFAULT b_ram_fcfg cfg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1665,"prim_ram_2p_pkg RAM_2P_CFG_DEFAULT b_ram_fcfg cfg",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBit(c+1664,"prim_ram_2p_pkg RAM_2P_CFG_DEFAULT b_ram_lcfg cfg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1665,"prim_ram_2p_pkg RAM_2P_CFG_DEFAULT b_ram_lcfg cfg",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1856,"ibex_pkg PMP_MAX_REGIONS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1857,"ibex_pkg PMP_CFG_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1581,"ibex_pkg PMP_I",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1575,"ibex_pkg PMP_D",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1858,"ibex_pkg CSR_OFF_PMP_CFG",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
        tracep->declBus(c+1859,"ibex_pkg CSR_OFF_PMP_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
        tracep->declBus(c+1605,"ibex_pkg CSR_MSTATUS_MIE_BIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1860,"ibex_pkg CSR_MSTATUS_MPIE_BIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1861,"ibex_pkg CSR_MSTATUS_MPP_BIT_LOW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1862,"ibex_pkg CSR_MSTATUS_MPP_BIT_HIGH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1863,"ibex_pkg CSR_MSTATUS_MPRV_BIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1864,"ibex_pkg CSR_MSTATUS_TW_BIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1675,"ibex_pkg CSR_MISA_MXL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
        tracep->declBus(c+1605,"ibex_pkg CSR_MSIX_BIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1860,"ibex_pkg CSR_MTIX_BIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1861,"ibex_pkg CSR_MEIX_BIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1856,"ibex_pkg CSR_MFIX_BIT_LOW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1865,"ibex_pkg CSR_MFIX_BIT_HIGH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1581,"ibex_pkg CSR_MSECCFG_MML_BIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1575,"ibex_pkg CSR_MSECCFG_MMWP_BIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1576,"ibex_pkg CSR_MSECCFG_RLB_BIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1589,"prim_ram_1p_pkg RAM_1P_CFG_DEFAULT ram_cfg cfg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1590,"prim_ram_1p_pkg RAM_1P_CFG_DEFAULT ram_cfg cfg",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBit(c+1589,"prim_ram_1p_pkg RAM_1P_CFG_DEFAULT rf_cfg cfg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1590,"prim_ram_1p_pkg RAM_1P_CFG_DEFAULT rf_cfg cfg",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    }
}

void Vibex_simple_system::traceRegister(VerilatedFst* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vibex_simple_system::traceFullTop0(void* userp, VerilatedFst* tracep) {
    Vibex_simple_system__Syms* __restrict vlSymsp = static_cast<Vibex_simple_system__Syms*>(userp);
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vibex_simple_system::traceFullSub0(void* userp, VerilatedFst* tracep) {
    Vibex_simple_system__Syms* __restrict vlSymsp = static_cast<Vibex_simple_system__Syms*>(userp);
    Vibex_simple_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->ibex_simple_system__cfg_device_addr_base[0]),32);
        tracep->fullIData(oldp+2,(vlTOPp->ibex_simple_system__cfg_device_addr_base[1]),32);
        tracep->fullIData(oldp+3,(vlTOPp->ibex_simple_system__cfg_device_addr_base[2]),32);
        tracep->fullIData(oldp+4,(vlTOPp->ibex_simple_system__cfg_device_addr_mask[0]),32);
        tracep->fullIData(oldp+5,(vlTOPp->ibex_simple_system__cfg_device_addr_mask[1]),32);
        tracep->fullIData(oldp+6,(vlTOPp->ibex_simple_system__cfg_device_addr_mask[2]),32);
        tracep->fullIData(oldp+7,(vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_base[0]),32);
        tracep->fullIData(oldp+8,(vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_base[1]),32);
        tracep->fullIData(oldp+9,(vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_base[2]),32);
        tracep->fullIData(oldp+10,(vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_mask[0]),32);
        tracep->fullIData(oldp+11,(vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_mask[1]),32);
        tracep->fullIData(oldp+12,(vlTOPp->ibex_Vcellinp_u_bus__cfg_device_addr_mask[2]),32);
        tracep->fullQData(oldp+13,(vlTOPp->ibex_core_csr_pmp_addr[0]),34);
        tracep->fullQData(oldp+15,(vlTOPp->ibex_core_csr_pmp_addr[1]),34);
        tracep->fullQData(oldp+17,(vlTOPp->ibex_core_csr_pmp_addr[2]),34);
        tracep->fullQData(oldp+19,(vlTOPp->ibex_core_csr_pmp_addr[3]),34);
        tracep->fullBit(oldp+21,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                        [0U] >> 5U))));
        tracep->fullCData(oldp+22,((3U & (vlTOPp->ibex_core_csr_pmp_cfg
                                          [0U] >> 3U))),2);
        tracep->fullBit(oldp+23,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                        [0U] >> 2U))));
        tracep->fullBit(oldp+24,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                        [0U] >> 1U))));
        tracep->fullBit(oldp+25,((1U & vlTOPp->ibex_core_csr_pmp_cfg
                                  [0U])));
        tracep->fullBit(oldp+26,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                        [1U] >> 5U))));
        tracep->fullCData(oldp+27,((3U & (vlTOPp->ibex_core_csr_pmp_cfg
                                          [1U] >> 3U))),2);
        tracep->fullBit(oldp+28,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                        [1U] >> 2U))));
        tracep->fullBit(oldp+29,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                        [1U] >> 1U))));
        tracep->fullBit(oldp+30,((1U & vlTOPp->ibex_core_csr_pmp_cfg
                                  [1U])));
        tracep->fullBit(oldp+31,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                        [2U] >> 5U))));
        tracep->fullCData(oldp+32,((3U & (vlTOPp->ibex_core_csr_pmp_cfg
                                          [2U] >> 3U))),2);
        tracep->fullBit(oldp+33,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                        [2U] >> 2U))));
        tracep->fullBit(oldp+34,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                        [2U] >> 1U))));
        tracep->fullBit(oldp+35,((1U & vlTOPp->ibex_core_csr_pmp_cfg
                                  [2U])));
        tracep->fullBit(oldp+36,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                        [3U] >> 5U))));
        tracep->fullCData(oldp+37,((3U & (vlTOPp->ibex_core_csr_pmp_cfg
                                          [3U] >> 3U))),2);
        tracep->fullBit(oldp+38,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                        [3U] >> 2U))));
        tracep->fullBit(oldp+39,((1U & (vlTOPp->ibex_core_csr_pmp_cfg
                                        [3U] >> 1U))));
        tracep->fullBit(oldp+40,((1U & vlTOPp->ibex_core_csr_pmp_cfg
                                  [3U])));
        tracep->fullBit(oldp+41,(vlTOPp->ibex_core_pmp_req_err[0]));
        tracep->fullBit(oldp+42,(vlTOPp->ibex_core_pmp_req_err[1]));
        tracep->fullQData(oldp+43,(vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_addr[0]),34);
        tracep->fullQData(oldp+45,(vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_addr[1]),34);
        tracep->fullQData(oldp+47,(vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_addr[2]),34);
        tracep->fullQData(oldp+49,(vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_addr[3]),34);
        tracep->fullBit(oldp+51,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                        [0U] >> 5U))));
        tracep->fullCData(oldp+52,((3U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                          [0U] >> 3U))),2);
        tracep->fullBit(oldp+53,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                        [0U] >> 2U))));
        tracep->fullBit(oldp+54,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                        [0U] >> 1U))));
        tracep->fullBit(oldp+55,((1U & vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                  [0U])));
        tracep->fullBit(oldp+56,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                        [1U] >> 5U))));
        tracep->fullCData(oldp+57,((3U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                          [1U] >> 3U))),2);
        tracep->fullBit(oldp+58,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                        [1U] >> 2U))));
        tracep->fullBit(oldp+59,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                        [1U] >> 1U))));
        tracep->fullBit(oldp+60,((1U & vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                  [1U])));
        tracep->fullBit(oldp+61,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                        [2U] >> 5U))));
        tracep->fullCData(oldp+62,((3U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                          [2U] >> 3U))),2);
        tracep->fullBit(oldp+63,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                        [2U] >> 2U))));
        tracep->fullBit(oldp+64,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                        [2U] >> 1U))));
        tracep->fullBit(oldp+65,((1U & vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                  [2U])));
        tracep->fullBit(oldp+66,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                        [3U] >> 5U))));
        tracep->fullCData(oldp+67,((3U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                          [3U] >> 3U))),2);
        tracep->fullBit(oldp+68,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                        [3U] >> 2U))));
        tracep->fullBit(oldp+69,((1U & (vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                        [3U] >> 1U))));
        tracep->fullBit(oldp+70,((1U & vlTOPp->ibex_core_g_no_pmp__unused_csr_pmp_cfg
                                  [3U])));
        tracep->fullBit(oldp+71,(vlTOPp->ibex_core_pmp_req_err
                                 [0U]));
        tracep->fullBit(oldp+72,(vlTOPp->ibex_core_id_stage_i_stall_alu));
        tracep->fullIData(oldp+73,(vlTOPp->ibex_core_ex_block_i_alu_imd_val_d[0]),32);
        tracep->fullIData(oldp+74,(vlTOPp->ibex_core_ex_block_i_alu_imd_val_d[1]),32);
        tracep->fullIData(oldp+75,(vlTOPp->ibex_core_ex_block_i___Vcellout__alu_i__imd_val_d_o[0]),32);
        tracep->fullIData(oldp+76,(vlTOPp->ibex_core_ex_block_i___Vcellout__alu_i__imd_val_d_o[1]),32);
        tracep->fullIData(oldp+77,(vlTOPp->ibex_core_ex_block_i_alu_i_bfp_mask_rev),32);
        tracep->fullBit(oldp+78,(vlTOPp->ibex_core_pmp_req_err
                                 [1U]));
        tracep->fullBit(oldp+79,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                        [0U] >> 5U))));
        tracep->fullCData(oldp+80,((3U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                          [0U] >> 3U))),2);
        tracep->fullBit(oldp+81,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                        [0U] >> 2U))));
        tracep->fullBit(oldp+82,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                        [0U] >> 1U))));
        tracep->fullBit(oldp+83,((1U & vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                  [0U])));
        tracep->fullBit(oldp+84,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                        [1U] >> 5U))));
        tracep->fullCData(oldp+85,((3U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                          [1U] >> 3U))),2);
        tracep->fullBit(oldp+86,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                        [1U] >> 2U))));
        tracep->fullBit(oldp+87,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                        [1U] >> 1U))));
        tracep->fullBit(oldp+88,((1U & vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                  [1U])));
        tracep->fullBit(oldp+89,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                        [2U] >> 5U))));
        tracep->fullCData(oldp+90,((3U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                          [2U] >> 3U))),2);
        tracep->fullBit(oldp+91,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                        [2U] >> 2U))));
        tracep->fullBit(oldp+92,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                        [2U] >> 1U))));
        tracep->fullBit(oldp+93,((1U & vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                  [2U])));
        tracep->fullBit(oldp+94,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                        [3U] >> 5U))));
        tracep->fullCData(oldp+95,((3U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                          [3U] >> 3U))),2);
        tracep->fullBit(oldp+96,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                        [3U] >> 2U))));
        tracep->fullBit(oldp+97,((1U & (vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                        [3U] >> 1U))));
        tracep->fullBit(oldp+98,((1U & vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_cfg_o
                                  [3U])));
        tracep->fullQData(oldp+99,(vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_addr_o[0]),34);
        tracep->fullQData(oldp+101,(vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_addr_o[1]),34);
        tracep->fullQData(oldp+103,(vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_addr_o[2]),34);
        tracep->fullQData(oldp+105,(vlTOPp->ibex_core___Vcellout__cs_reg_i__csr_pmp_addr_o[3]),34);
        tracep->fullIData(oldp+107,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[0]),32);
        tracep->fullIData(oldp+108,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[1]),32);
        tracep->fullIData(oldp+109,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[2]),32);
        tracep->fullIData(oldp+110,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[3]),32);
        tracep->fullIData(oldp+111,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[4]),32);
        tracep->fullIData(oldp+112,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[5]),32);
        tracep->fullIData(oldp+113,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[6]),32);
        tracep->fullIData(oldp+114,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[7]),32);
        tracep->fullIData(oldp+115,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[8]),32);
        tracep->fullIData(oldp+116,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[9]),32);
        tracep->fullIData(oldp+117,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[10]),32);
        tracep->fullIData(oldp+118,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[11]),32);
        tracep->fullIData(oldp+119,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[12]),32);
        tracep->fullIData(oldp+120,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[13]),32);
        tracep->fullIData(oldp+121,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[14]),32);
        tracep->fullIData(oldp+122,(vlTOPp->ibex_core_cs_reg_i_pmp_addr_rdata[15]),32);
        tracep->fullCData(oldp+123,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[0]),8);
        tracep->fullCData(oldp+124,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[1]),8);
        tracep->fullCData(oldp+125,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[2]),8);
        tracep->fullCData(oldp+126,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[3]),8);
        tracep->fullCData(oldp+127,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[4]),8);
        tracep->fullCData(oldp+128,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[5]),8);
        tracep->fullCData(oldp+129,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[6]),8);
        tracep->fullCData(oldp+130,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[7]),8);
        tracep->fullCData(oldp+131,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[8]),8);
        tracep->fullCData(oldp+132,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[9]),8);
        tracep->fullCData(oldp+133,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[10]),8);
        tracep->fullCData(oldp+134,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[11]),8);
        tracep->fullCData(oldp+135,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[12]),8);
        tracep->fullCData(oldp+136,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[13]),8);
        tracep->fullCData(oldp+137,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[14]),8);
        tracep->fullCData(oldp+138,(vlTOPp->ibex_core_cs_reg_i_pmp_cfg_rdata[15]),8);
        tracep->fullIData(oldp+139,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[0]),32);
        tracep->fullIData(oldp+140,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[1]),32);
        tracep->fullIData(oldp+141,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[2]),32);
        tracep->fullIData(oldp+142,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[3]),32);
        tracep->fullIData(oldp+143,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[4]),32);
        tracep->fullIData(oldp+144,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[5]),32);
        tracep->fullIData(oldp+145,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[6]),32);
        tracep->fullIData(oldp+146,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[7]),32);
        tracep->fullIData(oldp+147,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[8]),32);
        tracep->fullIData(oldp+148,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[9]),32);
        tracep->fullIData(oldp+149,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[10]),32);
        tracep->fullIData(oldp+150,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[11]),32);
        tracep->fullIData(oldp+151,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[12]),32);
        tracep->fullIData(oldp+152,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[13]),32);
        tracep->fullIData(oldp+153,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[14]),32);
        tracep->fullIData(oldp+154,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[15]),32);
        tracep->fullIData(oldp+155,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[16]),32);
        tracep->fullIData(oldp+156,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[17]),32);
        tracep->fullIData(oldp+157,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[18]),32);
        tracep->fullIData(oldp+158,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[19]),32);
        tracep->fullIData(oldp+159,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[20]),32);
        tracep->fullIData(oldp+160,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[21]),32);
        tracep->fullIData(oldp+161,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[22]),32);
        tracep->fullIData(oldp+162,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[23]),32);
        tracep->fullIData(oldp+163,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[24]),32);
        tracep->fullIData(oldp+164,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[25]),32);
        tracep->fullIData(oldp+165,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[26]),32);
        tracep->fullIData(oldp+166,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[27]),32);
        tracep->fullIData(oldp+167,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[28]),32);
        tracep->fullIData(oldp+168,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[29]),32);
        tracep->fullIData(oldp+169,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[30]),32);
        tracep->fullIData(oldp+170,(vlTOPp->ibex_core_cs_reg_i_mhpmevent[31]),32);
        tracep->fullCData(oldp+171,((7U & ((IData)(vlTOPp->ibex_core_cs_reg_i_cpuctrl_d) 
                                           >> 3U))),3);
        tracep->fullBit(oldp+172,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_cpuctrl_d) 
                                         >> 2U))));
        tracep->fullBit(oldp+173,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_cpuctrl_d) 
                                         >> 1U))));
        tracep->fullBit(oldp+174,((1U & (IData)(vlTOPp->ibex_core_cs_reg_i_cpuctrl_d))));
        tracep->fullCData(oldp+175,(vlTOPp->ibex_core_cs_reg_i_cpuctrl_d),6);
        tracep->fullBit(oldp+176,(vlTOPp->ibex_u_core_u_ibex_tracer__trace_log_enable));
        tracep->fullIData(oldp+177,(vlTOPp->ibex_ram_b_wmask),32);
        tracep->fullIData(oldp+178,(vlTOPp->ibex_ram_gen_generic_impl_b_wmask),32);
        tracep->fullBit(oldp+179,(vlTOPp->ibex_simple_system__clk_sys));
        tracep->fullBit(oldp+180,(vlTOPp->ibex_core_clk));
        tracep->fullBit(oldp+181,(vlTOPp->ibex_core_core_clock_gate_i_gen_generic__u_impl_generic__en_latch));
        tracep->fullBit(oldp+182,(vlTOPp->ibex_timer_interrupt_q));
        tracep->fullBit(oldp+183,(vlTOPp->ibex_simple_system__host_rvalid[0]));
        tracep->fullBit(oldp+184,(vlTOPp->ibex_device_rvalid[0]));
        tracep->fullBit(oldp+185,(vlTOPp->ibex_device_rvalid[1]));
        tracep->fullBit(oldp+186,(vlTOPp->ibex_device_rvalid[2]));
        tracep->fullBit(oldp+187,(vlTOPp->ibex_simple_system__instr_rvalid));
        tracep->fullBit(oldp+188,(vlTOPp->ibex_Vcellout__u_bus__host_rvalid_o[0]));
        tracep->fullBit(oldp+189,(vlTOPp->ibex_Vcellinp_u_bus__device_rvalid_i[0]));
        tracep->fullBit(oldp+190,(vlTOPp->ibex_Vcellinp_u_bus__device_rvalid_i[1]));
        tracep->fullBit(oldp+191,(vlTOPp->ibex_Vcellinp_u_bus__device_rvalid_i[2]));
        tracep->fullBit(oldp+192,(vlTOPp->ibex_bus_host_sel_resp));
        tracep->fullCData(oldp+193,(vlTOPp->ibex_bus_device_sel_resp),2);
        tracep->fullBit(oldp+194,(vlTOPp->ibex_simple_system__host_rvalid
                                  [0U]));
        tracep->fullBit(oldp+195,(vlTOPp->ibex_core_core_busy_q));
        tracep->fullBit(oldp+196,(vlTOPp->ibex_core_fetch_enable_q));
        tracep->fullBit(oldp+197,((1U & (vlTOPp->ibex_core_cs_reg_i_mip 
                                         >> 0x11U))));
        tracep->fullBit(oldp+198,((1U & (vlTOPp->ibex_core_cs_reg_i_mip 
                                         >> 0x10U))));
        tracep->fullBit(oldp+199,((1U & (vlTOPp->ibex_core_cs_reg_i_mip 
                                         >> 0xfU))));
        tracep->fullSData(oldp+200,((0x7fffU & vlTOPp->ibex_core_cs_reg_i_mip)),15);
        tracep->fullIData(oldp+201,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0U]),32);
        tracep->fullIData(oldp+202,(vlTOPp->ibex_core_gen_reg_file_rf_reg[1U]),32);
        tracep->fullIData(oldp+203,(vlTOPp->ibex_core_gen_reg_file_rf_reg[2U]),32);
        tracep->fullIData(oldp+204,(vlTOPp->ibex_core_gen_reg_file_rf_reg[3U]),32);
        tracep->fullIData(oldp+205,(vlTOPp->ibex_core_gen_reg_file_rf_reg[4U]),32);
        tracep->fullIData(oldp+206,(vlTOPp->ibex_core_gen_reg_file_rf_reg[5U]),32);
        tracep->fullIData(oldp+207,(vlTOPp->ibex_core_gen_reg_file_rf_reg[6U]),32);
        tracep->fullIData(oldp+208,(vlTOPp->ibex_core_gen_reg_file_rf_reg[7U]),32);
        tracep->fullIData(oldp+209,(vlTOPp->ibex_core_gen_reg_file_rf_reg[8U]),32);
        tracep->fullIData(oldp+210,(vlTOPp->ibex_core_gen_reg_file_rf_reg[9U]),32);
        tracep->fullIData(oldp+211,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0xaU]),32);
        tracep->fullIData(oldp+212,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0xbU]),32);
        tracep->fullIData(oldp+213,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0xcU]),32);
        tracep->fullIData(oldp+214,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0xdU]),32);
        tracep->fullIData(oldp+215,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0xeU]),32);
        tracep->fullIData(oldp+216,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0xfU]),32);
        tracep->fullIData(oldp+217,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x10U]),32);
        tracep->fullIData(oldp+218,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x11U]),32);
        tracep->fullIData(oldp+219,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x12U]),32);
        tracep->fullIData(oldp+220,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x13U]),32);
        tracep->fullIData(oldp+221,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x14U]),32);
        tracep->fullIData(oldp+222,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x15U]),32);
        tracep->fullIData(oldp+223,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x16U]),32);
        tracep->fullIData(oldp+224,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x17U]),32);
        tracep->fullIData(oldp+225,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x18U]),32);
        tracep->fullIData(oldp+226,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x19U]),32);
        tracep->fullIData(oldp+227,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x1aU]),32);
        tracep->fullIData(oldp+228,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x1bU]),32);
        tracep->fullIData(oldp+229,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x1cU]),32);
        tracep->fullIData(oldp+230,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x1dU]),32);
        tracep->fullIData(oldp+231,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x1eU]),32);
        tracep->fullIData(oldp+232,(vlTOPp->ibex_core_gen_reg_file_rf_reg[0x1fU]),32);
        tracep->fullIData(oldp+233,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0U]),32);
        tracep->fullIData(oldp+234,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[1U]),32);
        tracep->fullIData(oldp+235,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[2U]),32);
        tracep->fullIData(oldp+236,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[3U]),32);
        tracep->fullIData(oldp+237,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[4U]),32);
        tracep->fullIData(oldp+238,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[5U]),32);
        tracep->fullIData(oldp+239,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[6U]),32);
        tracep->fullIData(oldp+240,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[7U]),32);
        tracep->fullIData(oldp+241,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[8U]),32);
        tracep->fullIData(oldp+242,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[9U]),32);
        tracep->fullIData(oldp+243,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0xaU]),32);
        tracep->fullIData(oldp+244,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0xbU]),32);
        tracep->fullIData(oldp+245,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0xcU]),32);
        tracep->fullIData(oldp+246,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0xdU]),32);
        tracep->fullIData(oldp+247,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0xeU]),32);
        tracep->fullIData(oldp+248,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0xfU]),32);
        tracep->fullIData(oldp+249,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x10U]),32);
        tracep->fullIData(oldp+250,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x11U]),32);
        tracep->fullIData(oldp+251,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x12U]),32);
        tracep->fullIData(oldp+252,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x13U]),32);
        tracep->fullIData(oldp+253,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x14U]),32);
        tracep->fullIData(oldp+254,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x15U]),32);
        tracep->fullIData(oldp+255,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x16U]),32);
        tracep->fullIData(oldp+256,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x17U]),32);
        tracep->fullIData(oldp+257,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x18U]),32);
        tracep->fullIData(oldp+258,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x19U]),32);
        tracep->fullIData(oldp+259,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x1aU]),32);
        tracep->fullIData(oldp+260,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x1bU]),32);
        tracep->fullIData(oldp+261,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x1cU]),32);
        tracep->fullIData(oldp+262,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x1dU]),32);
        tracep->fullIData(oldp+263,(vlTOPp->ibex_core_gen_reg_file_rf_reg_q[0x1eU]),32);
        tracep->fullBit(oldp+264,(vlTOPp->ibex_Vcellout__u_ram__a_rvalid_o));
        tracep->fullBit(oldp+265,(vlTOPp->ibex_Vcellout__u_simulator_ctrl__rvalid_o));
        tracep->fullCData(oldp+266,(vlTOPp->ibex_simulator_ctrl__sim_finish),3);
        tracep->fullIData(oldp+267,(vlTOPp->ibex_simulator_ctrl__log_fd),32);
        tracep->fullBit(oldp+268,(vlTOPp->ibex_timer_rvalid_q));
        tracep->fullQData(oldp+269,(vlTOPp->ibex_timer_mtime_q),64);
        tracep->fullQData(oldp+271,((1ULL + vlTOPp->ibex_timer_mtime_q)),64);
        tracep->fullQData(oldp+273,(vlTOPp->ibex_timer_mtimecmp_q),64);
        tracep->fullIData(oldp+275,(vlTOPp->ibex_device_rdata[0]),32);
        tracep->fullIData(oldp+276,(vlTOPp->ibex_device_rdata[1]),32);
        tracep->fullIData(oldp+277,(vlTOPp->ibex_device_rdata[2]),32);
        tracep->fullBit(oldp+278,(vlTOPp->ibex_device_err[0]));
        tracep->fullBit(oldp+279,(vlTOPp->ibex_device_err[1]));
        tracep->fullBit(oldp+280,(vlTOPp->ibex_device_err[2]));
        tracep->fullIData(oldp+281,(vlTOPp->ibex_simple_system__instr_rdata),32);
        tracep->fullIData(oldp+282,(vlTOPp->ibex_Vcellinp_u_bus__device_rdata_i[0]),32);
        tracep->fullIData(oldp+283,(vlTOPp->ibex_Vcellinp_u_bus__device_rdata_i[1]),32);
        tracep->fullIData(oldp+284,(vlTOPp->ibex_Vcellinp_u_bus__device_rdata_i[2]),32);
        tracep->fullBit(oldp+285,(vlTOPp->ibex_Vcellinp_u_bus__device_err_i[0]));
        tracep->fullBit(oldp+286,(vlTOPp->ibex_Vcellinp_u_bus__device_err_i[1]));
        tracep->fullBit(oldp+287,(vlTOPp->ibex_Vcellinp_u_bus__device_err_i[2]));
        tracep->fullIData(oldp+288,(vlTOPp->ibex_u_core_u_ibex_tracer__file_handle),32);
        tracep->fullIData(oldp+289,(vlTOPp->ibex_Vcellout__u_ram__a_rdata_o),32);
        tracep->fullIData(oldp+290,(vlTOPp->ibex_ram_gen_generic_impl_unnamedblk1__i),32);
        tracep->fullIData(oldp+291,(vlTOPp->ibex_timer_rdata_q),32);
        tracep->fullBit(oldp+292,(vlTOPp->ibex_timer_error_q));
        tracep->fullBit(oldp+293,(vlTOPp->ibex_core_instr_fetch_err));
        tracep->fullBit(oldp+294,(vlTOPp->ibex_core_instr_fetch_err_plus2));
        tracep->fullBit(oldp+295,(vlTOPp->ibex_core_illegal_c_insn_id));
        tracep->fullIData(oldp+296,(vlTOPp->ibex_core_pre_buf_i_stored_addr_q),32);
        tracep->fullIData(oldp+297,(vlTOPp->ibex_core_pre_buf_i_fetch_addr_q),32);
        tracep->fullIData(oldp+298,(vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_q[0U]),32);
        tracep->fullIData(oldp+299,(vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_q[1U]),32);
        tracep->fullIData(oldp+300,(vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_q[2U]),32);
        tracep->fullCData(oldp+301,(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q),3);
        tracep->fullBit(oldp+302,(vlTOPp->ibex_core_rvfi_stage_valid
                                  [0U]));
        tracep->fullQData(oldp+303,(vlTOPp->ibex_core_rvfi_stage_order
                                    [0U]),64);
        tracep->fullIData(oldp+305,(vlTOPp->ibex_core_rvfi_stage_insn
                                    [0U]),32);
        tracep->fullBit(oldp+306,(vlTOPp->ibex_core_rvfi_stage_trap
                                  [0U]));
        tracep->fullBit(oldp+307,(vlTOPp->ibex_core_rvfi_stage_halt
                                  [0U]));
        tracep->fullBit(oldp+308,(vlTOPp->ibex_core_rvfi_stage_intr
                                  [0U]));
        tracep->fullCData(oldp+309,(vlTOPp->ibex_core_rvfi_stage_mode
                                    [0U]),2);
        tracep->fullCData(oldp+310,(vlTOPp->ibex_core_rvfi_stage_ixl
                                    [0U]),2);
        tracep->fullCData(oldp+311,(vlTOPp->ibex_core_rvfi_stage_rs1_addr
                                    [0U]),5);
        tracep->fullCData(oldp+312,(vlTOPp->ibex_core_rvfi_stage_rs2_addr
                                    [0U]),5);
        tracep->fullCData(oldp+313,(vlTOPp->ibex_core_rvfi_stage_rs3_addr
                                    [0U]),5);
        tracep->fullIData(oldp+314,(vlTOPp->ibex_core_rvfi_stage_rs1_rdata
                                    [0U]),32);
        tracep->fullIData(oldp+315,(vlTOPp->ibex_core_rvfi_stage_rs2_rdata
                                    [0U]),32);
        tracep->fullIData(oldp+316,(vlTOPp->ibex_core_rvfi_stage_rs3_rdata
                                    [0U]),32);
        tracep->fullCData(oldp+317,(vlTOPp->ibex_core_rvfi_stage_rd_addr
                                    [0U]),5);
        tracep->fullIData(oldp+318,(vlTOPp->ibex_core_rvfi_stage_rd_wdata
                                    [0U]),32);
        tracep->fullIData(oldp+319,(vlTOPp->ibex_core_rvfi_stage_pc_rdata
                                    [0U]),32);
        tracep->fullIData(oldp+320,(vlTOPp->ibex_core_rvfi_stage_pc_wdata
                                    [0U]),32);
        tracep->fullIData(oldp+321,(vlTOPp->ibex_core_rvfi_stage_mem_addr
                                    [0U]),32);
        tracep->fullCData(oldp+322,(vlTOPp->ibex_core_rvfi_stage_mem_rmask
                                    [0U]),4);
        tracep->fullCData(oldp+323,(vlTOPp->ibex_core_rvfi_stage_mem_wmask
                                    [0U]),4);
        tracep->fullIData(oldp+324,(vlTOPp->ibex_core_rvfi_stage_mem_rdata
                                    [0U]),32);
        tracep->fullIData(oldp+325,(vlTOPp->ibex_core_rvfi_stage_mem_wdata
                                    [0U]),32);
        tracep->fullBit(oldp+326,(vlTOPp->ibex_core_if_stage_i_instr_new_id_q));
        tracep->fullQData(oldp+327,(vlTOPp->ibex_core_imd_val_q_ex[0]),34);
        tracep->fullQData(oldp+329,(vlTOPp->ibex_core_imd_val_q_ex[1]),34);
        tracep->fullBit(oldp+331,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q) 
                                         >> 1U))));
        tracep->fullBit(oldp+332,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q) 
                                         >> 2U))));
        tracep->fullCData(oldp+333,((7U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q) 
                                           >> 3U))),3);
        tracep->fullBit(oldp+334,((1U & (IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q))));
        tracep->fullBit(oldp+335,(vlTOPp->ibex_core_lsu_addr_incr_req));
        tracep->fullIData(oldp+336,(vlTOPp->ibex_core_load_store_unit_i_addr_last_q),32);
        tracep->fullBit(oldp+337,((0U != (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))));
        tracep->fullBit(oldp+338,(vlTOPp->ibex_core_id_stage_i_controller_i_nmi_mode_q));
        tracep->fullBit(oldp+339,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                         >> 5U))));
        tracep->fullIData(oldp+340,(vlTOPp->ibex_core_cs_reg_i_u_mepc_csr__rdata_q),32);
        tracep->fullIData(oldp+341,(vlTOPp->ibex_core_cs_reg_i_u_depc_csr__rdata_q),32);
        tracep->fullIData(oldp+342,(vlTOPp->ibex_core_cs_reg_i_u_mtvec_csr__rdata_q),32);
        tracep->fullBit(oldp+343,((1U & (IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q))));
        tracep->fullCData(oldp+344,(vlTOPp->ibex_core_cs_reg_i_priv_lvl_q),2);
        tracep->fullCData(oldp+345,((3U & ((2U & (IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q))
                                            ? ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                               >> 2U)
                                            : (IData)(vlTOPp->ibex_core_cs_reg_i_priv_lvl_q)))),2);
        tracep->fullBit(oldp+346,(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q));
        tracep->fullBit(oldp+347,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                         >> 2U))));
        tracep->fullBit(oldp+348,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                         >> 0xfU))));
        tracep->fullBit(oldp+349,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                         >> 0xcU))));
        tracep->fullBit(oldp+350,(vlTOPp->ibex_core_rvfi_intr_q));
        tracep->fullBit(oldp+351,(vlTOPp->ibex_core_rvfi_set_trap_pc_q));
        tracep->fullCData(oldp+352,(vlTOPp->ibex_core_rvfi_rs1_addr_q),5);
        tracep->fullCData(oldp+353,(vlTOPp->ibex_core_rvfi_rs2_addr_q),5);
        tracep->fullIData(oldp+354,(vlTOPp->ibex_core_rvfi_rs1_data_q),32);
        tracep->fullIData(oldp+355,(vlTOPp->ibex_core_rvfi_rs2_data_q),32);
        tracep->fullCData(oldp+356,(vlTOPp->ibex_core_rvfi_rd_addr_q),5);
        tracep->fullIData(oldp+357,(vlTOPp->ibex_core_rvfi_rd_wdata_q),32);
        tracep->fullIData(oldp+358,(vlTOPp->ibex_core_rvfi_mem_rdata_q),32);
        tracep->fullIData(oldp+359,(vlTOPp->ibex_core_rvfi_mem_wdata_q),32);
        tracep->fullIData(oldp+360,(vlTOPp->ibex_core_rvfi_mem_addr_q),32);
        tracep->fullBit(oldp+361,(vlTOPp->ibex_core_rvfi_stage_valid[0]));
        tracep->fullQData(oldp+362,(vlTOPp->ibex_core_rvfi_stage_order[0]),64);
        tracep->fullIData(oldp+364,(vlTOPp->ibex_core_rvfi_stage_insn[0]),32);
        tracep->fullBit(oldp+365,(vlTOPp->ibex_core_rvfi_stage_trap[0]));
        tracep->fullBit(oldp+366,(vlTOPp->ibex_core_rvfi_stage_halt[0]));
        tracep->fullBit(oldp+367,(vlTOPp->ibex_core_rvfi_stage_intr[0]));
        tracep->fullCData(oldp+368,(vlTOPp->ibex_core_rvfi_stage_mode[0]),2);
        tracep->fullCData(oldp+369,(vlTOPp->ibex_core_rvfi_stage_ixl[0]),2);
        tracep->fullCData(oldp+370,(vlTOPp->ibex_core_rvfi_stage_rs1_addr[0]),5);
        tracep->fullCData(oldp+371,(vlTOPp->ibex_core_rvfi_stage_rs2_addr[0]),5);
        tracep->fullCData(oldp+372,(vlTOPp->ibex_core_rvfi_stage_rs3_addr[0]),5);
        tracep->fullIData(oldp+373,(vlTOPp->ibex_core_rvfi_stage_rs1_rdata[0]),32);
        tracep->fullIData(oldp+374,(vlTOPp->ibex_core_rvfi_stage_rs2_rdata[0]),32);
        tracep->fullIData(oldp+375,(vlTOPp->ibex_core_rvfi_stage_rs3_rdata[0]),32);
        tracep->fullCData(oldp+376,(vlTOPp->ibex_core_rvfi_stage_rd_addr[0]),5);
        tracep->fullIData(oldp+377,(vlTOPp->ibex_core_rvfi_stage_rd_wdata[0]),32);
        tracep->fullIData(oldp+378,(vlTOPp->ibex_core_rvfi_stage_pc_rdata[0]),32);
        tracep->fullIData(oldp+379,(vlTOPp->ibex_core_rvfi_stage_pc_wdata[0]),32);
        tracep->fullIData(oldp+380,(vlTOPp->ibex_core_rvfi_stage_mem_addr[0]),32);
        tracep->fullCData(oldp+381,(vlTOPp->ibex_core_rvfi_stage_mem_rmask[0]),4);
        tracep->fullCData(oldp+382,(vlTOPp->ibex_core_rvfi_stage_mem_wmask[0]),4);
        tracep->fullIData(oldp+383,(vlTOPp->ibex_core_rvfi_stage_mem_rdata[0]),32);
        tracep->fullIData(oldp+384,(vlTOPp->ibex_core_rvfi_stage_mem_wdata[0]),32);
        tracep->fullCData(oldp+385,((0xffU & vlTOPp->ibex_core_cs_reg_i_u_mtvec_csr__rdata_q)),8);
        tracep->fullBit(oldp+386,(vlTOPp->ibex_core_pre_buf_i_valid_req_q));
        tracep->fullBit(oldp+387,(vlTOPp->ibex_core_pre_buf_i_discard_req_q));
        tracep->fullCData(oldp+388,(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_q),2);
        tracep->fullCData(oldp+389,(vlTOPp->ibex_core_pre_buf_i_branch_discard_q),2);
        tracep->fullCData(oldp+390,(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_q),2);
        tracep->fullCData(oldp+391,(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_rev),2);
        tracep->fullBit(oldp+392,((1U & (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_q))));
        tracep->fullBit(oldp+393,((1U & (~ (IData)(
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q) 
                                                         >> 1U) 
                                                        | (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_rev)))))))));
        tracep->fullCData(oldp+394,((3U & ((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q) 
                                           >> 1U))),2);
        tracep->fullCData(oldp+395,(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_d),3);
        tracep->fullCData(oldp+396,(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q),3);
        tracep->fullCData(oldp+397,(vlTOPp->ibex_core_pre_buf_i_fifo_i_lowest_free_entry),3);
        tracep->fullBit(oldp+398,(vlTOPp->ibex_core_pre_buf_i_fifo_i_err));
        tracep->fullQData(oldp+399,(vlTOPp->ibex_core___Vcellout__id_stage_i__imd_val_q_ex_o[0]),34);
        tracep->fullQData(oldp+401,(vlTOPp->ibex_core___Vcellout__id_stage_i__imd_val_q_ex_o[1]),34);
        tracep->fullBit(oldp+403,(((IData)(vlTOPp->ibex_core_id_stage_i_g_branch_set_flop__branch_set_raw_q) 
                                   & (~ (IData)(vlTOPp->ibex_core_id_stage_i_branch_jump_set_done_q)))));
        tracep->fullBit(oldp+404,(vlTOPp->ibex_core_id_stage_i_g_branch_set_flop__branch_set_raw_q));
        tracep->fullBit(oldp+405,(vlTOPp->ibex_core_id_stage_i_branch_set));
        tracep->fullBit(oldp+406,(vlTOPp->ibex_core_id_stage_i_branch_jump_set_done_q));
        tracep->fullQData(oldp+407,(vlTOPp->ibex_core_id_stage_i_imd_val_q[0]),34);
        tracep->fullQData(oldp+409,(vlTOPp->ibex_core_id_stage_i_imd_val_q[1]),34);
        tracep->fullBit(oldp+411,(vlTOPp->ibex_core_id_stage_i_id_fsm_q));
        tracep->fullBit(oldp+412,(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_q));
        tracep->fullBit(oldp+413,(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_q));
        tracep->fullBit(oldp+414,(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_q));
        tracep->fullBit(oldp+415,(vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_q));
        tracep->fullBit(oldp+416,(vlTOPp->ibex_core_id_stage_i_controller_i_enter_debug_mode_q));
        tracep->fullBit(oldp+417,(vlTOPp->ibex_core_id_stage_i_controller_i_ebreak_into_debug));
        tracep->fullQData(oldp+418,(vlTOPp->ibex_core___Vcellinp__ex_block_i__imd_val_q_i[0]),34);
        tracep->fullQData(oldp+420,(vlTOPp->ibex_core___Vcellinp__ex_block_i__imd_val_q_i[1]),34);
        tracep->fullQData(oldp+422,(vlTOPp->ibex_core_ex_block_i_multdiv_alu_operand_a),33);
        tracep->fullIData(oldp+424,(vlTOPp->ibex_core_ex_block_i_alu_imd_val_q[0]),32);
        tracep->fullIData(oldp+425,(vlTOPp->ibex_core_ex_block_i_alu_imd_val_q[1]),32);
        tracep->fullIData(oldp+426,(vlTOPp->ibex_core_ex_block_i___Vcellinp__alu_i__imd_val_q_i[0]),32);
        tracep->fullIData(oldp+427,(vlTOPp->ibex_core_ex_block_i___Vcellinp__alu_i__imd_val_q_i[1]),32);
        tracep->fullIData(oldp+428,(vlTOPp->ibex_core_ex_block_i_alu_i_g_no_alu_rvb__unused_imd_val_q[0]),32);
        tracep->fullIData(oldp+429,(vlTOPp->ibex_core_ex_block_i_alu_i_g_no_alu_rvb__unused_imd_val_q[1]),32);
        tracep->fullQData(oldp+430,(vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i[0]),34);
        tracep->fullQData(oldp+432,(vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i[1]),34);
        tracep->fullIData(oldp+434,(((IData)(1U) << (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_counter_q))),32);
        tracep->fullIData(oldp+435,((IData)(vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                            [1U])),32);
        tracep->fullIData(oldp+436,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_numerator_q),32);
        tracep->fullIData(oldp+437,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_quotient_q),32);
        tracep->fullBit(oldp+438,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_valid));
        tracep->fullCData(oldp+439,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_counter_q),5);
        tracep->fullBit(oldp+440,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_hold));
        tracep->fullBit(oldp+441,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_by_zero_q));
        tracep->fullCData(oldp+442,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_q),3);
        tracep->fullCData(oldp+443,((3U & (IData)((
                                                   vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                                   [1U] 
                                                   >> 0x20U)))),2);
        tracep->fullCData(oldp+444,(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_q),2);
        tracep->fullIData(oldp+445,(vlTOPp->ibex_core_load_store_unit_i_rdata_q),24);
        tracep->fullCData(oldp+446,(vlTOPp->ibex_core_load_store_unit_i_rdata_offset_q),2);
        tracep->fullCData(oldp+447,(vlTOPp->ibex_core_load_store_unit_i_data_type_q),2);
        tracep->fullBit(oldp+448,(vlTOPp->ibex_core_load_store_unit_i_data_sign_ext_q));
        tracep->fullBit(oldp+449,(vlTOPp->ibex_core_load_store_unit_i_data_we_q));
        tracep->fullBit(oldp+450,(vlTOPp->ibex_core_load_store_unit_i_handle_misaligned_q));
        tracep->fullBit(oldp+451,(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q));
        tracep->fullBit(oldp+452,(vlTOPp->ibex_core_load_store_unit_i_lsu_err_q));
        tracep->fullCData(oldp+453,(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs),3);
        tracep->fullBit(oldp+454,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                         >> 5U))));
        tracep->fullBit(oldp+455,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                         >> 4U))));
        tracep->fullCData(oldp+456,((3U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                           >> 2U))),2);
        tracep->fullBit(oldp+457,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                         >> 1U))));
        tracep->fullBit(oldp+458,((1U & (IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q))));
        tracep->fullBit(oldp+459,((1U & (vlTOPp->ibex_core_cs_reg_i_u_mie_csr__rdata_q 
                                         >> 0x11U))));
        tracep->fullBit(oldp+460,((1U & (vlTOPp->ibex_core_cs_reg_i_u_mie_csr__rdata_q 
                                         >> 0x10U))));
        tracep->fullBit(oldp+461,((1U & (vlTOPp->ibex_core_cs_reg_i_u_mie_csr__rdata_q 
                                         >> 0xfU))));
        tracep->fullSData(oldp+462,((0x7fffU & vlTOPp->ibex_core_cs_reg_i_u_mie_csr__rdata_q)),15);
        tracep->fullIData(oldp+463,(vlTOPp->ibex_core_cs_reg_i_u_mscratch_csr__rdata_q),32);
        tracep->fullCData(oldp+464,(vlTOPp->ibex_core_cs_reg_i_u_mcause_csr__rdata_q),6);
        tracep->fullIData(oldp+465,(vlTOPp->ibex_core_cs_reg_i_u_mtval_csr__rdata_q),32);
        tracep->fullCData(oldp+466,((0xfU & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                             >> 0x1cU))),4);
        tracep->fullSData(oldp+467,((0xfffU & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                               >> 0x10U))),12);
        tracep->fullBit(oldp+468,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                         >> 0xfU))));
        tracep->fullBit(oldp+469,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                         >> 0xeU))));
        tracep->fullBit(oldp+470,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                         >> 0xdU))));
        tracep->fullBit(oldp+471,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                         >> 0xcU))));
        tracep->fullBit(oldp+472,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                         >> 0xbU))));
        tracep->fullBit(oldp+473,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                         >> 0xaU))));
        tracep->fullBit(oldp+474,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                         >> 9U))));
        tracep->fullCData(oldp+475,((7U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                           >> 6U))),3);
        tracep->fullBit(oldp+476,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                         >> 5U))));
        tracep->fullBit(oldp+477,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                         >> 4U))));
        tracep->fullBit(oldp+478,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                         >> 3U))));
        tracep->fullBit(oldp+479,((1U & (vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q 
                                         >> 2U))));
        tracep->fullCData(oldp+480,((3U & vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q)),2);
        tracep->fullIData(oldp+481,(vlTOPp->ibex_core_cs_reg_i_u_dscratch0_csr__rdata_q),32);
        tracep->fullIData(oldp+482,(vlTOPp->ibex_core_cs_reg_i_u_dscratch1_csr__rdata_q),32);
        tracep->fullBit(oldp+483,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstack_csr__rdata_q) 
                                         >> 2U))));
        tracep->fullCData(oldp+484,((3U & (IData)(vlTOPp->ibex_core_cs_reg_i_u_mstack_csr__rdata_q))),2);
        tracep->fullBit(oldp+485,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_mstack_d) 
                                         >> 2U))));
        tracep->fullCData(oldp+486,((3U & (IData)(vlTOPp->ibex_core_cs_reg_i_mstack_d))),2);
        tracep->fullIData(oldp+487,(vlTOPp->ibex_core_cs_reg_i_u_mstack_epc_csr__rdata_q),32);
        tracep->fullCData(oldp+488,(vlTOPp->ibex_core_cs_reg_i_u_mstack_cause_csr__rdata_q),6);
        tracep->fullIData(oldp+489,(vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q),32);
        tracep->fullQData(oldp+490,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[0]),64);
        tracep->fullQData(oldp+492,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[1]),64);
        tracep->fullQData(oldp+494,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[2]),64);
        tracep->fullQData(oldp+496,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[3]),64);
        tracep->fullQData(oldp+498,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[4]),64);
        tracep->fullQData(oldp+500,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[5]),64);
        tracep->fullQData(oldp+502,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[6]),64);
        tracep->fullQData(oldp+504,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[7]),64);
        tracep->fullQData(oldp+506,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[8]),64);
        tracep->fullQData(oldp+508,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[9]),64);
        tracep->fullQData(oldp+510,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[10]),64);
        tracep->fullQData(oldp+512,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[11]),64);
        tracep->fullQData(oldp+514,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[12]),64);
        tracep->fullQData(oldp+516,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[13]),64);
        tracep->fullQData(oldp+518,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[14]),64);
        tracep->fullQData(oldp+520,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[15]),64);
        tracep->fullQData(oldp+522,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[16]),64);
        tracep->fullQData(oldp+524,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[17]),64);
        tracep->fullQData(oldp+526,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[18]),64);
        tracep->fullQData(oldp+528,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[19]),64);
        tracep->fullQData(oldp+530,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[20]),64);
        tracep->fullQData(oldp+532,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[21]),64);
        tracep->fullQData(oldp+534,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[22]),64);
        tracep->fullQData(oldp+536,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[23]),64);
        tracep->fullQData(oldp+538,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[24]),64);
        tracep->fullQData(oldp+540,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[25]),64);
        tracep->fullQData(oldp+542,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[26]),64);
        tracep->fullQData(oldp+544,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[27]),64);
        tracep->fullQData(oldp+546,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[28]),64);
        tracep->fullQData(oldp+548,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[29]),64);
        tracep->fullQData(oldp+550,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[30]),64);
        tracep->fullQData(oldp+552,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter[31]),64);
        tracep->fullCData(oldp+554,((7U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q) 
                                           >> 3U))),3);
        tracep->fullBit(oldp+555,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q) 
                                         >> 2U))));
        tracep->fullBit(oldp+556,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q) 
                                         >> 1U))));
        tracep->fullBit(oldp+557,((1U & (IData)(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q))));
        tracep->fullCData(oldp+558,(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q),6);
        tracep->fullIData(oldp+559,(vlTOPp->ibex_core_cs_reg_i_u_mie_csr__rdata_q),18);
        tracep->fullIData(oldp+560,(vlTOPp->ibex_core_cs_reg_i_u_dcsr_csr__rdata_q),32);
        tracep->fullCData(oldp+561,(vlTOPp->ibex_core_cs_reg_i_mstack_d),3);
        tracep->fullCData(oldp+562,(vlTOPp->ibex_core_cs_reg_i_u_mstack_csr__rdata_q),3);
        tracep->fullQData(oldp+563,(vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_q),64);
        tracep->fullQData(oldp+565,(vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_q),64);
        tracep->fullCData(oldp+567,(vlTOPp->ibex_core_cs_reg_i_u_cpuctrl_csr__rdata_q),6);
        tracep->fullQData(oldp+568,(vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt),64);
        tracep->fullQData(oldp+570,(vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_q),40);
        tracep->fullQData(oldp+572,(vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt),64);
        tracep->fullQData(oldp+574,(vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_q),40);
        tracep->fullQData(oldp+576,(vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt),64);
        tracep->fullQData(oldp+578,(vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_q),40);
        tracep->fullQData(oldp+580,(vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt),64);
        tracep->fullQData(oldp+582,(vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_q),40);
        tracep->fullQData(oldp+584,(vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt),64);
        tracep->fullQData(oldp+586,(vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_q),40);
        tracep->fullQData(oldp+588,(vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt),64);
        tracep->fullQData(oldp+590,(vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_q),40);
        tracep->fullQData(oldp+592,(vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt),64);
        tracep->fullQData(oldp+594,(vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_q),40);
        tracep->fullQData(oldp+596,(vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt),64);
        tracep->fullQData(oldp+598,(vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_q),40);
        tracep->fullQData(oldp+600,(vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt),64);
        tracep->fullQData(oldp+602,(vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_q),40);
        tracep->fullQData(oldp+604,(vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt),64);
        tracep->fullQData(oldp+606,(vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_q),40);
        tracep->fullQData(oldp+608,(vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt),64);
        tracep->fullQData(oldp+610,(vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_q),40);
        tracep->fullQData(oldp+612,(vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt),64);
        tracep->fullQData(oldp+614,(vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_q),40);
        tracep->fullQData(oldp+616,(vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt),64);
        tracep->fullQData(oldp+618,(vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_q),40);
        tracep->fullQData(oldp+620,(vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt),64);
        tracep->fullQData(oldp+622,(vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_q),40);
        tracep->fullQData(oldp+624,(vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt),64);
        tracep->fullQData(oldp+626,(vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_q),40);
        tracep->fullQData(oldp+628,(vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt),64);
        tracep->fullQData(oldp+630,(vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_q),40);
        tracep->fullQData(oldp+632,(vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt),64);
        tracep->fullQData(oldp+634,(vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_q),40);
        tracep->fullQData(oldp+636,(vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt),64);
        tracep->fullQData(oldp+638,(vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_q),40);
        tracep->fullQData(oldp+640,(vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt),64);
        tracep->fullQData(oldp+642,(vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_q),40);
        tracep->fullQData(oldp+644,(vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt),64);
        tracep->fullQData(oldp+646,(vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_q),40);
        tracep->fullQData(oldp+648,(vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt),64);
        tracep->fullQData(oldp+650,(vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_q),40);
        tracep->fullQData(oldp+652,(vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt),64);
        tracep->fullQData(oldp+654,(vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_q),40);
        tracep->fullQData(oldp+656,(vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt),64);
        tracep->fullQData(oldp+658,(vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_q),40);
        tracep->fullQData(oldp+660,(vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt),64);
        tracep->fullQData(oldp+662,(vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_q),40);
        tracep->fullQData(oldp+664,(vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt),64);
        tracep->fullQData(oldp+666,(vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_q),40);
        tracep->fullQData(oldp+668,(vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt),64);
        tracep->fullQData(oldp+670,(vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_q),40);
        tracep->fullQData(oldp+672,(vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt),64);
        tracep->fullQData(oldp+674,(vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_q),40);
        tracep->fullQData(oldp+676,(vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt),64);
        tracep->fullQData(oldp+678,(vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_q),40);
        tracep->fullQData(oldp+680,(vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt),64);
        tracep->fullQData(oldp+682,(vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_q),40);
        tracep->fullBit(oldp+684,(vlTOPp->ibex_u_core_u_ibex_tracer__insn_is_compressed));
        tracep->fullCData(oldp+685,(vlTOPp->ibex_u_core_u_ibex_tracer__data_accessed),5);
        tracep->fullBit(oldp+686,((((IData)(vlTOPp->ibex_core_id_stage_i_lsu_req) 
                                    | (0U != (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs))) 
                                   & (0U == (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_ns)))));
        tracep->fullIData(oldp+687,(((2U & (IData)(vlTOPp->ibex_core_exc_pc_mux_id))
                                      ? 0x100000U : 
                                     ((1U & (IData)(vlTOPp->ibex_core_exc_pc_mux_id))
                                       ? ((0xffffff00U 
                                           & vlTOPp->ibex_core_cs_reg_i_u_mtvec_csr__rdata_q) 
                                          | (0x7cU 
                                             & ((IData)(vlTOPp->ibex_core_exc_cause) 
                                                << 2U)))
                                       : (0xffffff00U 
                                          & vlTOPp->ibex_core_cs_reg_i_u_mtvec_csr__rdata_q)))),32);
        tracep->fullBit(oldp+688,(((((IData)(vlTOPp->ibex_core_id_stage_i_g_branch_set_flop__branch_set_raw_q) 
                                     | (IData)(vlTOPp->ibex_core_id_stage_i_jump_set_raw)) 
                                    | (IData)(vlTOPp->ibex_core_id_stage_i_branch_jump_set_done_q)) 
                                   & (~ (IData)(vlTOPp->ibex_core_instr_valid_clear)))));
        tracep->fullBit(oldp+689,((((IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec) 
                                    & (~ (IData)(vlTOPp->ibex_core_id_stage_i_id_fsm_q))) 
                                   & (IData)(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_result))));
        tracep->fullBit(oldp+690,((((IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec) 
                                    & (~ (IData)(vlTOPp->ibex_core_id_stage_i_id_fsm_q))) 
                                   & (~ (IData)(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_result)))));
        tracep->fullIData(oldp+691,(((IData)(vlTOPp->ibex_core_div_sel_ex)
                                      ? (IData)(vlTOPp->ibex_core_ex_block_i___Vcellinp__gen_multdiv_fast_i__imd_val_q_i
                                                [0U])
                                      : (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mac_res_d))),32);
        tracep->fullQData(oldp+692,(((IData)(vlTOPp->ibex_core_ex_block_i_multdiv_sel)
                                      ? vlTOPp->ibex_core_ex_block_i_multdiv_alu_operand_a
                                      : (1ULL | ((QData)((IData)(vlTOPp->ibex_core_id_stage_i_alu_operand_a)) 
                                                 << 1U)))),33);
        tracep->fullBit(oldp+694,(((0U != (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_q)) 
                                   | (IData)(vlTOPp->ibex_core_pre_buf_i_valid_req))));
        tracep->fullBit(oldp+695,((((IData)(vlTOPp->ibex_core_ctrl_busy) 
                                    | ((0U != (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_q)) 
                                       | (IData)(vlTOPp->ibex_core_pre_buf_i_valid_req))) 
                                   | (0U != (IData)(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_cs)))));
        tracep->fullBit(oldp+696,((((IData)(vlTOPp->ibex_core_pre_buf_i_valid_new_req) 
                                    & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_valid_req_q))) 
                                   & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_gnt_or_pmp_err)))));
        tracep->fullBit(oldp+697,(((IData)(vlTOPp->ibex_core_pc_set) 
                                   | ((IData)(vlTOPp->ibex_core_pre_buf_i_valid_new_req) 
                                      & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_valid_req_q))))));
        tracep->fullBit(oldp+698,((((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_sign_a) 
                                    ^ (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_sign_b)) 
                                   & (~ (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_by_zero_q)))));
        tracep->fullIData(oldp+699,(((IData)(vlTOPp->ibex_core_cs_reg_i_mcountinhibit_we)
                                      ? (0xfffffffdU 
                                         & vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)
                                      : vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q)),32);
        tracep->fullBit(oldp+700,(((3U & ((IData)(vlTOPp->ibex_core_csr_addr) 
                                          >> 8U)) > (IData)(vlTOPp->ibex_core_cs_reg_i_priv_lvl_q))));
        tracep->fullBit(oldp+701,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                         & (~ vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q)))));
        tracep->fullBit(oldp+702,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 2U) & 
                                         (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                             >> 2U))))));
        tracep->fullBit(oldp+703,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 3U) & 
                                         (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                             >> 3U))))));
        tracep->fullBit(oldp+704,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 4U) & 
                                         (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                             >> 4U))))));
        tracep->fullBit(oldp+705,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 5U) & 
                                         (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                             >> 5U))))));
        tracep->fullBit(oldp+706,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 6U) & 
                                         (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                             >> 6U))))));
        tracep->fullBit(oldp+707,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 7U) & 
                                         (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                             >> 7U))))));
        tracep->fullBit(oldp+708,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 8U) & 
                                         (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                             >> 8U))))));
        tracep->fullBit(oldp+709,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 9U) & 
                                         (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                             >> 9U))))));
        tracep->fullBit(oldp+710,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0xaU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0xaU))))));
        tracep->fullBit(oldp+711,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0xbU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0xbU))))));
        tracep->fullBit(oldp+712,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0xcU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0xcU))))));
        tracep->fullBit(oldp+713,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0xdU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0xdU))))));
        tracep->fullBit(oldp+714,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0xeU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0xeU))))));
        tracep->fullBit(oldp+715,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0xfU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0xfU))))));
        tracep->fullBit(oldp+716,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x10U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x10U))))));
        tracep->fullBit(oldp+717,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x11U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x11U))))));
        tracep->fullBit(oldp+718,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x12U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x12U))))));
        tracep->fullBit(oldp+719,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x13U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x13U))))));
        tracep->fullBit(oldp+720,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x14U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x14U))))));
        tracep->fullBit(oldp+721,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x15U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x15U))))));
        tracep->fullBit(oldp+722,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x16U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x16U))))));
        tracep->fullBit(oldp+723,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x17U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x17U))))));
        tracep->fullBit(oldp+724,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x18U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x18U))))));
        tracep->fullBit(oldp+725,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x19U) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+726,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x1aU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+727,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x1bU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x1bU))))));
        tracep->fullBit(oldp+728,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x1cU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x1cU))))));
        tracep->fullBit(oldp+729,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x1dU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x1dU))))));
        tracep->fullBit(oldp+730,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x1eU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x1eU))))));
        tracep->fullBit(oldp+731,((1U & ((vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 0x1fU) 
                                         & (~ (vlTOPp->ibex_core_cs_reg_i_mcountinhibit_q 
                                               >> 0x1fU))))));
        tracep->fullIData(oldp+732,(vlTOPp->ibex_simple_system__host_rdata[0]),32);
        tracep->fullBit(oldp+733,(vlTOPp->ibex_simple_system__host_err[0]));
        tracep->fullIData(oldp+734,(vlTOPp->ibex_Vcellout__u_bus__host_rdata_o[0]),32);
        tracep->fullBit(oldp+735,(vlTOPp->ibex_Vcellout__u_bus__host_err_o[0]));
        tracep->fullIData(oldp+736,(vlTOPp->ibex_simple_system__host_rdata
                                    [0U]),32);
        tracep->fullBit(oldp+737,(vlTOPp->ibex_simple_system__host_err
                                  [0U]));
        tracep->fullIData(oldp+738,(vlTOPp->ibex_u_core_u_ibex_tracer__cycle),32);
        tracep->fullIData(oldp+739,(vlTOPp->ibex_core_instr_rdata_id),32);
        tracep->fullSData(oldp+740,(vlTOPp->ibex_core_instr_rdata_c_id),16);
        tracep->fullBit(oldp+741,(vlTOPp->ibex_core_instr_is_compressed_id));
        tracep->fullIData(oldp+742,((vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q 
                                     << 1U)),32);
        tracep->fullIData(oldp+743,(vlTOPp->ibex_core_pc_id),32);
        tracep->fullCData(oldp+744,((0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+745,((0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+746,((0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                                              >> 7U))),5);
        tracep->fullIData(oldp+747,(((IData)(vlTOPp->ibex_core_instr_is_compressed_id)
                                      ? (IData)(vlTOPp->ibex_core_instr_rdata_c_id)
                                      : vlTOPp->ibex_core_instr_rdata_id)),32);
        tracep->fullIData(oldp+748,(vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q),31);
        tracep->fullIData(oldp+749,(((0xfffff000U & 
                                      ((- (IData)((1U 
                                                   & (vlTOPp->ibex_core_instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                                     (0xfffU & (vlTOPp->ibex_core_instr_rdata_id 
                                                >> 0x14U)))),32);
        tracep->fullIData(oldp+750,(((0xfffff000U & 
                                      ((- (IData)((1U 
                                                   & (vlTOPp->ibex_core_instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                                     ((0xfe0U & (vlTOPp->ibex_core_instr_rdata_id 
                                                 >> 0x14U)) 
                                      | (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                                                  >> 7U))))),32);
        tracep->fullIData(oldp+751,(((0xffffe000U & 
                                      ((- (IData)((1U 
                                                   & (vlTOPp->ibex_core_instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xdU)) | 
                                     ((0x1000U & (vlTOPp->ibex_core_instr_rdata_id 
                                                  >> 0x13U)) 
                                      | ((0x800U & 
                                          (vlTOPp->ibex_core_instr_rdata_id 
                                           << 4U)) 
                                         | ((0x7e0U 
                                             & (vlTOPp->ibex_core_instr_rdata_id 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlTOPp->ibex_core_instr_rdata_id 
                                                  >> 7U))))))),32);
        tracep->fullIData(oldp+752,((0xfffff000U & vlTOPp->ibex_core_instr_rdata_id)),32);
        tracep->fullIData(oldp+753,(((0xfff00000U & 
                                      ((- (IData)((1U 
                                                   & (vlTOPp->ibex_core_instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0x14U)) | 
                                     ((0xff000U & vlTOPp->ibex_core_instr_rdata_id) 
                                      | ((0x800U & 
                                          (vlTOPp->ibex_core_instr_rdata_id 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlTOPp->ibex_core_instr_rdata_id 
                                               >> 0x14U)))))),32);
        tracep->fullIData(oldp+754,((0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                                              >> 0xfU))),32);
        tracep->fullSData(oldp+755,(((0x3e0U & (vlTOPp->ibex_core_instr_rdata_id 
                                                >> 0xaU)) 
                                     | (0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                                                 >> 7U)))),10);
        tracep->fullCData(oldp+756,((0x1fU & (vlTOPp->ibex_core_instr_rdata_id 
                                              >> 0x1bU))),5);
        tracep->fullBit(oldp+757,(vlTOPp->ibex_core_lsu_load_err));
        tracep->fullBit(oldp+758,(vlTOPp->ibex_core_lsu_store_err));
        tracep->fullIData(oldp+759,(vlTOPp->ibex_core_rf_rdata_a_ecc),32);
        tracep->fullIData(oldp+760,(vlTOPp->ibex_core_rf_rdata_b_ecc),32);
        tracep->fullIData(oldp+761,(vlTOPp->ibex_core_load_store_unit_i_data_rdata_ext),32);
        tracep->fullBit(oldp+762,(vlTOPp->ibex_core_rf_we_lsu));
        tracep->fullBit(oldp+763,(vlTOPp->ibex_core_lsu_resp_valid));
        tracep->fullBit(oldp+764,(((IData)(vlTOPp->ibex_core_lsu_load_err) 
                                   | (IData)(vlTOPp->ibex_core_lsu_store_err))));
        tracep->fullBit(oldp+765,((0U != vlTOPp->ibex_core_irqs)));
        tracep->fullBit(oldp+766,((1U & (vlTOPp->ibex_core_irqs 
                                         >> 0x11U))));
        tracep->fullBit(oldp+767,((1U & (vlTOPp->ibex_core_irqs 
                                         >> 0x10U))));
        tracep->fullBit(oldp+768,((1U & (vlTOPp->ibex_core_irqs 
                                         >> 0xfU))));
        tracep->fullSData(oldp+769,((0x7fffU & vlTOPp->ibex_core_irqs)),15);
        tracep->fullIData(oldp+770,(vlTOPp->ibex_core_rvfi_mem_rdata_d),32);
        tracep->fullBit(oldp+771,(vlTOPp->ibex_core_pre_buf_i_valid_raw));
        tracep->fullIData(oldp+772,(vlTOPp->ibex_core_if_stage_i_fetch_rdata),32);
        tracep->fullBit(oldp+773,(vlTOPp->ibex_core_if_stage_i_fetch_err));
        tracep->fullIData(oldp+774,(vlTOPp->ibex_core_if_stage_i_instr_decompressed),32);
        tracep->fullBit(oldp+775,((3U != (3U & vlTOPp->ibex_core_if_stage_i_fetch_rdata))));
        tracep->fullBit(oldp+776,(vlTOPp->ibex_core_if_stage_i_illegal_c_insn));
        tracep->fullBit(oldp+777,(((IData)(vlTOPp->ibex_core_pre_buf_i_valid_raw) 
                                   & (~ (IData)(vlTOPp->ibex_core_if_stage_i_fetch_err)))));
        tracep->fullBit(oldp+778,(vlTOPp->ibex_core_pre_buf_i_rvalid_or_pmp_err));
        tracep->fullBit(oldp+779,(vlTOPp->ibex_core_pre_buf_i_fifo_valid));
        tracep->fullCData(oldp+780,(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_pushed),3);
        tracep->fullIData(oldp+781,(vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata),32);
        tracep->fullBit(oldp+782,(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid));
        tracep->fullBit(oldp+783,(vlTOPp->ibex_core_pre_buf_i_fifo_i_aligned_is_compressed));
        tracep->fullBit(oldp+784,(vlTOPp->ibex_core_pre_buf_i_fifo_i_unaligned_is_compressed));
        tracep->fullBit(oldp+785,(vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two));
        tracep->fullBit(oldp+786,(((IData)(vlTOPp->ibex_core_lsu_store_err) 
                                   | (IData)(vlTOPp->ibex_core_lsu_load_err))));
        tracep->fullBit(oldp+787,(vlTOPp->ibex_core_id_stage_i_controller_i_handle_irq));
        tracep->fullCData(oldp+788,(((0x4000U & vlTOPp->ibex_core_irqs)
                                      ? 0xeU : ((0x2000U 
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
        tracep->fullBit(oldp+789,((1U & (vlTOPp->ibex_core_irqs 
                                         >> 0x10U))));
        tracep->fullQData(oldp+790,(vlTOPp->ibex_core_ex_block_i_multdiv_alu_operand_b),33);
        tracep->fullSData(oldp+792,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_a),16);
        tracep->fullSData(oldp+793,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast__i_gen_mult_op_b),16);
        tracep->fullBit(oldp+794,(vlTOPp->ibex_core_load_store_unit_i_rdata_update));
        tracep->fullIData(oldp+795,(vlTOPp->ibex_core_load_store_unit_i_rdata_h_ext),32);
        tracep->fullIData(oldp+796,(vlTOPp->ibex_core_load_store_unit_i_rdata_b_ext),32);
        tracep->fullBit(oldp+797,(vlTOPp->ibex_core_load_store_unit_i_data_or_pmp_err));
        tracep->fullIData(oldp+798,(((1U & (IData)(
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
        tracep->fullBit(oldp+799,((0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we))));
        tracep->fullIData(oldp+800,(((0U != (IData)(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we))
                                      ? vlTOPp->ibex_core_rf_wdata_wb
                                      : vlTOPp->ibex_core_load_store_unit_i_data_rdata_ext)),32);
        tracep->fullCData(oldp+801,(((IData)(vlTOPp->ibex_core_pre_buf_i_rvalid_or_pmp_err)
                                      ? (1U & ((IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_n) 
                                               >> 1U))
                                      : (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_n))),2);
        tracep->fullCData(oldp+802,(((IData)(vlTOPp->ibex_core_pre_buf_i_rvalid_or_pmp_err)
                                      ? (1U & ((IData)(vlTOPp->ibex_core_pre_buf_i_branch_discard_n) 
                                               >> 1U))
                                      : (IData)(vlTOPp->ibex_core_pre_buf_i_branch_discard_n))),2);
        tracep->fullCData(oldp+803,(((IData)(vlTOPp->ibex_core_pre_buf_i_rvalid_or_pmp_err)
                                      ? (1U & ((IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_n) 
                                               >> 1U))
                                      : (IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_n))),2);
        tracep->fullCData(oldp+804,(vlTOPp->ibex_core_pre_buf_i_fifo_i_entry_en),3);
        tracep->fullBit(oldp+805,(((IData)(vlTOPp->ibex_core_pc_set) 
                                   | ((IData)(vlTOPp->ibex_core_id_in_ready) 
                                      & (IData)(vlTOPp->ibex_core_pre_buf_i_valid_raw)))));
        tracep->fullIData(oldp+806,(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux[0]),32);
        tracep->fullIData(oldp+807,(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux[1]),32);
        tracep->fullCData(oldp+808,(vlTOPp->ibex_core_wb_stage_i_rf_wdata_wb_mux_we),2);
        tracep->fullBit(oldp+809,(vlTOPp->ibex_simple_system__host_req[0]));
        tracep->fullBit(oldp+810,(vlTOPp->ibex_simple_system__host_gnt[0]));
        tracep->fullBit(oldp+811,(vlTOPp->ibex_simple_system__host_we[0]));
        tracep->fullBit(oldp+812,(vlTOPp->ibex_Vcellinp_u_bus__host_req_i[0]));
        tracep->fullBit(oldp+813,(vlTOPp->ibex_Vcellout__u_bus__host_gnt_o[0]));
        tracep->fullBit(oldp+814,(vlTOPp->ibex_Vcellinp_u_bus__host_we_i[0]));
        tracep->fullBit(oldp+815,(vlTOPp->ibex_bus_host_sel_req));
        tracep->fullBit(oldp+816,(((IData)(vlTOPp->ibex_core_data_req_out) 
                                   & (~ vlTOPp->ibex_core_pmp_req_err
                                      [1U]))));
        tracep->fullBit(oldp+817,(vlTOPp->ibex_simple_system__host_gnt
                                  [0U]));
        tracep->fullBit(oldp+818,(vlTOPp->ibex_core_id_stage_i_lsu_we));
        tracep->fullIData(oldp+819,(vlTOPp->ibex_u_core_crash_dump_o[3U]),32);
        tracep->fullIData(oldp+820,(vlTOPp->ibex_u_core_crash_dump_o[2U]),32);
        tracep->fullIData(oldp+821,(vlTOPp->ibex_u_core_crash_dump_o[1U]),32);
        tracep->fullIData(oldp+822,(vlTOPp->ibex_u_core_crash_dump_o[0U]),32);
        tracep->fullBit(oldp+823,(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q));
        tracep->fullCData(oldp+824,(vlTOPp->ibex_core_imd_val_we_ex),2);
        tracep->fullBit(oldp+825,(vlTOPp->ibex_core_icache_inval));
        tracep->fullBit(oldp+826,(vlTOPp->ibex_core_id_stage_i_instr_first_cycle));
        tracep->fullCData(oldp+827,(vlTOPp->ibex_core_pc_mux_id),3);
        tracep->fullCData(oldp+828,(vlTOPp->ibex_core_exc_pc_mux_id),2);
        tracep->fullBit(oldp+829,(vlTOPp->ibex_core_id_stage_i_rf_ren_a));
        tracep->fullBit(oldp+830,(vlTOPp->ibex_core_id_stage_i_rf_ren_b));
        tracep->fullCData(oldp+831,(vlTOPp->ibex_core_id_stage_i_alu_operator),6);
        tracep->fullBit(oldp+832,(((IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec) 
                                   & (IData)(vlTOPp->ibex_core_id_stage_i_mult_en_dec))));
        tracep->fullBit(oldp+833,(((IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec) 
                                   & (IData)(vlTOPp->ibex_core_id_stage_i_div_en_dec))));
        tracep->fullBit(oldp+834,(vlTOPp->ibex_core_mult_sel_ex));
        tracep->fullBit(oldp+835,(vlTOPp->ibex_core_div_sel_ex));
        tracep->fullCData(oldp+836,(vlTOPp->ibex_core_id_stage_i_multdiv_operator),2);
        tracep->fullCData(oldp+837,(vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode),2);
        tracep->fullBit(oldp+838,(vlTOPp->ibex_core_csr_access));
        tracep->fullCData(oldp+839,(vlTOPp->ibex_core_csr_op),2);
        tracep->fullCData(oldp+840,(vlTOPp->ibex_core_id_stage_i_lsu_type),2);
        tracep->fullBit(oldp+841,(vlTOPp->ibex_core_id_stage_i_lsu_sign_ext));
        tracep->fullBit(oldp+842,(vlTOPp->ibex_core_id_stage_i_lsu_req));
        tracep->fullBit(oldp+843,(vlTOPp->ibex_core_ex_valid));
        tracep->fullBit(oldp+844,(vlTOPp->ibex_core_instr_req_int));
        tracep->fullBit(oldp+845,(vlTOPp->ibex_core_data_req_out));
        tracep->fullBit(oldp+846,(vlTOPp->ibex_core_csr_save_id));
        tracep->fullBit(oldp+847,(vlTOPp->ibex_core_csr_restore_mret_id));
        tracep->fullBit(oldp+848,(vlTOPp->ibex_core_csr_restore_dret_id));
        tracep->fullIData(oldp+849,(vlTOPp->ibex_core_csr_mtval),32);
        tracep->fullCData(oldp+850,(vlTOPp->ibex_core_debug_cause),3);
        tracep->fullBit(oldp+851,(vlTOPp->ibex_core_debug_csr_save));
        tracep->fullBit(oldp+852,(vlTOPp->ibex_core_perf_jump));
        tracep->fullBit(oldp+853,(vlTOPp->ibex_core_perf_branch));
        tracep->fullBit(oldp+854,(vlTOPp->ibex_core_perf_tbranch));
        tracep->fullBit(oldp+855,(vlTOPp->ibex_core_perf_load));
        tracep->fullBit(oldp+856,(vlTOPp->ibex_core_perf_store));
        tracep->fullBit(oldp+857,(vlTOPp->ibex_core_rvfi_intr_d));
        tracep->fullCData(oldp+858,(vlTOPp->ibex_core_rvfi_rs1_addr_d),5);
        tracep->fullCData(oldp+859,(vlTOPp->ibex_core_rvfi_rs2_addr_d),5);
        tracep->fullCData(oldp+860,(vlTOPp->ibex_core_rvfi_mem_mask_int),4);
        tracep->fullBit(oldp+861,(vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn));
        tracep->fullBit(oldp+862,(vlTOPp->ibex_core_id_stage_i_ebrk_insn));
        tracep->fullBit(oldp+863,(vlTOPp->ibex_core_id_stage_i_mret_insn_dec));
        tracep->fullBit(oldp+864,(vlTOPp->ibex_core_id_stage_i_dret_insn_dec));
        tracep->fullBit(oldp+865,(vlTOPp->ibex_core_id_stage_i_ecall_insn_dec));
        tracep->fullBit(oldp+866,(vlTOPp->ibex_core_id_stage_i_wfi_insn_dec));
        tracep->fullBit(oldp+867,(vlTOPp->ibex_core_id_stage_i_branch_in_dec));
        tracep->fullBit(oldp+868,(vlTOPp->ibex_core_id_stage_i_jump_in_dec));
        tracep->fullBit(oldp+869,(vlTOPp->ibex_core_id_stage_i_jump_set_dec));
        tracep->fullBit(oldp+870,(vlTOPp->ibex_core_id_stage_i_jump_set));
        tracep->fullBit(oldp+871,(vlTOPp->ibex_core_id_stage_i_jump_set_raw));
        tracep->fullBit(oldp+872,(vlTOPp->ibex_core_id_stage_i_instr_executing_spec));
        tracep->fullBit(oldp+873,(vlTOPp->ibex_core_id_stage_i_controller_run));
        tracep->fullBit(oldp+874,(vlTOPp->ibex_core_id_stage_i_controller_i_flush_id));
        tracep->fullIData(oldp+875,(vlTOPp->ibex_core_id_stage_i_imm_b),32);
        tracep->fullBit(oldp+876,(vlTOPp->ibex_core_id_stage_i_rf_wdata_sel));
        tracep->fullBit(oldp+877,(vlTOPp->ibex_core_id_stage_i_decoder_i_rf_we));
        tracep->fullBit(oldp+878,(vlTOPp->ibex_core_id_stage_i_rf_we_raw));
        tracep->fullCData(oldp+879,(vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel),2);
        tracep->fullCData(oldp+880,(vlTOPp->ibex_core_id_stage_i_alu_op_a_mux_sel_dec),2);
        tracep->fullBit(oldp+881,(vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec));
        tracep->fullBit(oldp+882,(vlTOPp->ibex_core_id_stage_i_imm_a_mux_sel));
        tracep->fullCData(oldp+883,(vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel),3);
        tracep->fullCData(oldp+884,(vlTOPp->ibex_core_id_stage_i_imm_b_mux_sel_dec),3);
        tracep->fullBit(oldp+885,(vlTOPp->ibex_core_id_stage_i_mult_en_dec));
        tracep->fullBit(oldp+886,(vlTOPp->ibex_core_id_stage_i_div_en_dec));
        tracep->fullBit(oldp+887,(vlTOPp->ibex_core_id_stage_i_multdiv_en_dec));
        tracep->fullBit(oldp+888,(vlTOPp->ibex_core_id_stage_i_lsu_req_dec));
        tracep->fullBit(oldp+889,(vlTOPp->ibex_core_id_stage_i_decoder_i_csr_illegal));
        tracep->fullCData(oldp+890,(vlTOPp->ibex_core_id_stage_i_decoder_i_csr_op),2);
        tracep->fullCData(oldp+891,(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode),7);
        tracep->fullCData(oldp+892,(vlTOPp->ibex_core_id_stage_i_decoder_i_opcode_alu),7);
        tracep->fullCData(oldp+893,(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs),4);
        tracep->fullBit(oldp+894,(vlTOPp->ibex_core_id_stage_i_controller_i_nmi_mode_d));
        tracep->fullBit(oldp+895,(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_d));
        tracep->fullBit(oldp+896,(vlTOPp->ibex_core_id_stage_i_controller_i_instr_fetch_err_prio));
        tracep->fullBit(oldp+897,(vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_prio));
        tracep->fullBit(oldp+898,(vlTOPp->ibex_core_id_stage_i_controller_i_ecall_insn_prio));
        tracep->fullBit(oldp+899,(vlTOPp->ibex_core_id_stage_i_controller_i_ebrk_insn_prio));
        tracep->fullBit(oldp+900,(vlTOPp->ibex_core_id_stage_i_controller_i_store_err_prio));
        tracep->fullBit(oldp+901,(vlTOPp->ibex_core_id_stage_i_controller_i_load_err_prio));
        tracep->fullBit(oldp+902,(vlTOPp->ibex_core_id_stage_i_controller_i_enter_debug_mode_d));
        tracep->fullBit(oldp+903,(vlTOPp->ibex_core_id_stage_i_controller_i_ecall_insn));
        tracep->fullBit(oldp+904,(vlTOPp->ibex_core_id_stage_i_controller_i_mret_insn));
        tracep->fullBit(oldp+905,(vlTOPp->ibex_core_id_stage_i_controller_i_dret_insn));
        tracep->fullBit(oldp+906,(vlTOPp->ibex_core_id_stage_i_controller_i_wfi_insn));
        tracep->fullBit(oldp+907,(vlTOPp->ibex_core_id_stage_i_controller_i_ebrk_insn));
        tracep->fullBit(oldp+908,(vlTOPp->ibex_core_id_stage_i_controller_i_instr_fetch_err));
        tracep->fullBit(oldp+909,(vlTOPp->ibex_core_ex_block_i_multdiv_sel));
        tracep->fullCData(oldp+910,(vlTOPp->ibex_core_ex_block_i_multdiv_imd_val_we),2);
        tracep->fullBit(oldp+911,(vlTOPp->ibex_core_ex_block_i_alu_i_adder_op_b_negate));
        tracep->fullBit(oldp+912,(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_signed));
        tracep->fullBit(oldp+913,(vlTOPp->ibex_core_ex_block_i_alu_i_shift_left));
        tracep->fullBit(oldp+914,((8U == (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator))));
        tracep->fullBit(oldp+915,(((3U == (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator)) 
                                   | (6U == (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator)))));
        tracep->fullBit(oldp+916,(((4U == (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator)) 
                                   | (7U == (IData)(vlTOPp->ibex_core_id_stage_i_alu_operator)))));
        tracep->fullQData(oldp+917,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_accum),34);
        tracep->fullBit(oldp+919,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_valid));
        tracep->fullBit(oldp+920,((0U != (IData)(vlTOPp->ibex_core_id_stage_i_multdiv_signed_mode))));
        tracep->fullBit(oldp+921,(((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_en_internal) 
                                   | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_en_internal))));
        tracep->fullBit(oldp+922,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_hold));
        tracep->fullBit(oldp+923,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_en_internal));
        tracep->fullBit(oldp+924,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_en_internal));
        tracep->fullCData(oldp+925,(vlTOPp->ibex_core_ex_block_i_gen_mult_div_fast_d),2);
        tracep->fullBit(oldp+926,(vlTOPp->ibex_core_load_store_unit_i_ctrl_update));
        tracep->fullIData(oldp+927,(((IData)(vlTOPp->ibex_core_id_stage_i_rf_wdata_sel)
                                      ? ((IData)(vlTOPp->ibex_core_id_stage_i_rf_wdata_sel)
                                          ? vlTOPp->ibex_core_cs_reg_i_csr_rdata_int
                                          : vlTOPp->ibex_core_result_ex)
                                      : vlTOPp->ibex_core_result_ex)),32);
        tracep->fullBit(oldp+928,((((IData)(vlTOPp->ibex_core_id_stage_i_rf_we_raw) 
                                    & (IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec)) 
                                   & (~ (IData)(vlTOPp->ibex_core_illegal_csr_insn_id)))));
        tracep->fullBit(oldp+929,(((IData)(vlTOPp->ibex_core_id_in_ready) 
                                   & (~ (IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q)))));
        tracep->fullBit(oldp+930,(((IData)(vlTOPp->ibex_core_id_stage_i_stall_multdiv) 
                                   & (IData)(vlTOPp->ibex_core_id_stage_i_mult_en_dec))));
        tracep->fullBit(oldp+931,(((IData)(vlTOPp->ibex_core_id_stage_i_stall_multdiv) 
                                   & (IData)(vlTOPp->ibex_core_id_stage_i_div_en_dec))));
        tracep->fullBit(oldp+932,(((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_wfi_insn) 
                                   | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_csr_pipe_flush))));
        tracep->fullBit(oldp+933,(((7U != (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)) 
                                   & (7U == (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns)))));
        tracep->fullBit(oldp+934,(((8U != (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)) 
                                   & (8U == (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns)))));
        tracep->fullBit(oldp+935,(((9U != (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)) 
                                   & (9U == (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns)))));
        tracep->fullBit(oldp+936,(((6U != (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_cs)) 
                                   & (6U == (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns)))));
        tracep->fullBit(oldp+937,((1U & ((0x80000000U 
                                          & (vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                                             ^ vlTOPp->ibex_core_id_stage_i_alu_operand_b))
                                          ? ((vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                                              >> 0x1fU) 
                                             ^ (IData)(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_signed))
                                          : (~ (IData)(
                                                       (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                        >> 0x20U)))))));
        tracep->fullIData(oldp+938,(vlTOPp->ibex_simple_system__host_addr[0]),32);
        tracep->fullCData(oldp+939,(vlTOPp->ibex_simple_system__host_be[0]),4);
        tracep->fullIData(oldp+940,(vlTOPp->ibex_simple_system__host_wdata[0]),32);
        tracep->fullBit(oldp+941,(vlTOPp->ibex_device_req[0]));
        tracep->fullBit(oldp+942,(vlTOPp->ibex_device_req[1]));
        tracep->fullBit(oldp+943,(vlTOPp->ibex_device_req[2]));
        tracep->fullIData(oldp+944,(vlTOPp->ibex_device_addr[0]),32);
        tracep->fullIData(oldp+945,(vlTOPp->ibex_device_addr[1]),32);
        tracep->fullIData(oldp+946,(vlTOPp->ibex_device_addr[2]),32);
        tracep->fullBit(oldp+947,(vlTOPp->ibex_device_we[0]));
        tracep->fullBit(oldp+948,(vlTOPp->ibex_device_we[1]));
        tracep->fullBit(oldp+949,(vlTOPp->ibex_device_we[2]));
        tracep->fullCData(oldp+950,(vlTOPp->ibex_device_be[0]),4);
        tracep->fullCData(oldp+951,(vlTOPp->ibex_device_be[1]),4);
        tracep->fullCData(oldp+952,(vlTOPp->ibex_device_be[2]),4);
        tracep->fullIData(oldp+953,(vlTOPp->ibex_device_wdata[0]),32);
        tracep->fullIData(oldp+954,(vlTOPp->ibex_device_wdata[1]),32);
        tracep->fullIData(oldp+955,(vlTOPp->ibex_device_wdata[2]),32);
        tracep->fullBit(oldp+956,(vlTOPp->ibex_simple_system__instr_req));
        tracep->fullIData(oldp+957,((0xfffffffcU & vlTOPp->ibex_core_pre_buf_i_instr_addr)),32);
        tracep->fullIData(oldp+958,(vlTOPp->ibex_Vcellinp_u_bus__host_addr_i[0]),32);
        tracep->fullCData(oldp+959,(vlTOPp->ibex_Vcellinp_u_bus__host_be_i[0]),4);
        tracep->fullIData(oldp+960,(vlTOPp->ibex_Vcellinp_u_bus__host_wdata_i[0]),32);
        tracep->fullBit(oldp+961,(vlTOPp->ibex_Vcellout__u_bus__device_req_o[0]));
        tracep->fullBit(oldp+962,(vlTOPp->ibex_Vcellout__u_bus__device_req_o[1]));
        tracep->fullBit(oldp+963,(vlTOPp->ibex_Vcellout__u_bus__device_req_o[2]));
        tracep->fullIData(oldp+964,(vlTOPp->ibex_Vcellout__u_bus__device_addr_o[0]),32);
        tracep->fullIData(oldp+965,(vlTOPp->ibex_Vcellout__u_bus__device_addr_o[1]),32);
        tracep->fullIData(oldp+966,(vlTOPp->ibex_Vcellout__u_bus__device_addr_o[2]),32);
        tracep->fullBit(oldp+967,(vlTOPp->ibex_Vcellout__u_bus__device_we_o[0]));
        tracep->fullBit(oldp+968,(vlTOPp->ibex_Vcellout__u_bus__device_we_o[1]));
        tracep->fullBit(oldp+969,(vlTOPp->ibex_Vcellout__u_bus__device_we_o[2]));
        tracep->fullCData(oldp+970,(vlTOPp->ibex_Vcellout__u_bus__device_be_o[0]),4);
        tracep->fullCData(oldp+971,(vlTOPp->ibex_Vcellout__u_bus__device_be_o[1]),4);
        tracep->fullCData(oldp+972,(vlTOPp->ibex_Vcellout__u_bus__device_be_o[2]),4);
        tracep->fullIData(oldp+973,(vlTOPp->ibex_Vcellout__u_bus__device_wdata_o[0]),32);
        tracep->fullIData(oldp+974,(vlTOPp->ibex_Vcellout__u_bus__device_wdata_o[1]),32);
        tracep->fullIData(oldp+975,(vlTOPp->ibex_Vcellout__u_bus__device_wdata_o[2]),32);
        tracep->fullCData(oldp+976,(vlTOPp->ibex_bus_device_sel_req),2);
        tracep->fullCData(oldp+977,(vlTOPp->ibex_core_load_store_unit_i_data_be),4);
        tracep->fullIData(oldp+978,((0xfffffffcU & 
                                     ((IData)((vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                               >> 3U)) 
                                      << 2U))),32);
        tracep->fullQData(oldp+979,(vlTOPp->ibex_core_imd_val_d_ex[0]),34);
        tracep->fullQData(oldp+981,(vlTOPp->ibex_core_imd_val_d_ex[1]),34);
        tracep->fullBit(oldp+983,(vlTOPp->ibex_core_instr_valid_clear));
        tracep->fullBit(oldp+984,(vlTOPp->ibex_core_pc_set));
        tracep->fullBit(oldp+985,(vlTOPp->ibex_core_pc_set_spec));
        tracep->fullCData(oldp+986,(vlTOPp->ibex_core_exc_cause),6);
        tracep->fullIData(oldp+987,((IData)((vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                             >> 1U))),32);
        tracep->fullBit(oldp+988,(vlTOPp->ibex_core_ex_block_i_alu_i_cmp_result));
        tracep->fullBit(oldp+989,(vlTOPp->ibex_core_ctrl_busy));
        tracep->fullIData(oldp+990,(vlTOPp->ibex_core_rf_wdata_wb),32);
        tracep->fullIData(oldp+991,(vlTOPp->ibex_core_id_stage_i_alu_operand_a),32);
        tracep->fullIData(oldp+992,(vlTOPp->ibex_core_id_stage_i_alu_operand_b),32);
        tracep->fullIData(oldp+993,(vlTOPp->ibex_core_result_ex),32);
        tracep->fullBit(oldp+994,(vlTOPp->ibex_core_csr_op_en));
        tracep->fullSData(oldp+995,(vlTOPp->ibex_core_csr_addr),12);
        tracep->fullIData(oldp+996,(vlTOPp->ibex_core_cs_reg_i_csr_rdata_int),32);
        tracep->fullBit(oldp+997,(vlTOPp->ibex_core_illegal_csr_insn_id));
        tracep->fullBit(oldp+998,(vlTOPp->ibex_core_id_in_ready));
        tracep->fullBit(oldp+999,(vlTOPp->ibex_core_id_stage_i_instr_done));
        tracep->fullBit(oldp+1000,(vlTOPp->ibex_core_pre_buf_i_valid_req));
        tracep->fullBit(oldp+1001,(vlTOPp->ibex_core_csr_save_if));
        tracep->fullBit(oldp+1002,(vlTOPp->ibex_core_csr_save_cause));
        tracep->fullBit(oldp+1003,(vlTOPp->ibex_core_csr_mtvec_init));
        tracep->fullCData(oldp+1004,(vlTOPp->ibex_core_cs_reg_i_priv_lvl_d),2);
        tracep->fullBit(oldp+1005,(vlTOPp->ibex_core_perf_instr_ret_wb));
        tracep->fullBit(oldp+1006,(vlTOPp->ibex_core_illegal_insn_id));
        tracep->fullBit(oldp+1007,(vlTOPp->ibex_core_rvfi_set_trap_pc_d));
        tracep->fullIData(oldp+1008,(vlTOPp->ibex_core_rvfi_rs1_data_d),32);
        tracep->fullIData(oldp+1009,(vlTOPp->ibex_core_rvfi_rs2_data_d),32);
        tracep->fullCData(oldp+1010,(vlTOPp->ibex_core_rvfi_rd_addr_d),5);
        tracep->fullIData(oldp+1011,(vlTOPp->ibex_core_rvfi_rd_wdata_d),32);
        tracep->fullBit(oldp+1012,(vlTOPp->ibex_core_rvfi_rd_we_wb));
        tracep->fullIData(oldp+1013,(vlTOPp->ibex_core_rvfi_mem_wdata_d),32);
        tracep->fullIData(oldp+1014,(vlTOPp->ibex_core_rvfi_mem_addr_d),32);
        tracep->fullBit(oldp+1015,(vlTOPp->ibex_core_rvfi_stage_valid_d[0]));
        tracep->fullBit(oldp+1016,(vlTOPp->ibex_core_if_stage_i_instr_new_id_d));
        tracep->fullIData(oldp+1017,(vlTOPp->ibex_core_if_stage_i_fetch_addr_n),32);
        tracep->fullBit(oldp+1018,((1U & vlTOPp->ibex_core_if_stage_i_fetch_addr_n)));
        tracep->fullBit(oldp+1019,((1U & ((IData)(vlTOPp->ibex_core_exc_cause) 
                                          >> 5U))));
        tracep->fullIData(oldp+1020,((0xfffffffeU & vlTOPp->ibex_core_if_stage_i_fetch_addr_n)),32);
        tracep->fullBit(oldp+1021,(((IData)(vlTOPp->ibex_core_pc_set_spec) 
                                    & (~ (IData)(vlTOPp->ibex_core_pc_set)))));
        tracep->fullBit(oldp+1022,(vlTOPp->ibex_core_pre_buf_i_valid_new_req));
        tracep->fullBit(oldp+1023,(((IData)(vlTOPp->ibex_core_pre_buf_i_valid_req) 
                                    & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_gnt_or_pmp_err)))));
        tracep->fullBit(oldp+1024,(vlTOPp->ibex_core_pre_buf_i_discard_req_d));
        tracep->fullBit(oldp+1025,(vlTOPp->ibex_core_pre_buf_i_gnt_or_pmp_err));
        tracep->fullCData(oldp+1026,(vlTOPp->ibex_core_pre_buf_i_rdata_outstanding_n),2);
        tracep->fullCData(oldp+1027,(vlTOPp->ibex_core_pre_buf_i_branch_discard_n),2);
        tracep->fullCData(oldp+1028,(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_n),2);
        tracep->fullIData(oldp+1029,(vlTOPp->ibex_core_pre_buf_i_instr_addr),32);
        tracep->fullIData(oldp+1030,(((IData)(vlTOPp->ibex_core_pc_set)
                                       ? (0xfffffffeU 
                                          & vlTOPp->ibex_core_if_stage_i_fetch_addr_n)
                                       : 0U)),32);
        tracep->fullCData(oldp+1031,(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_d),3);
        tracep->fullCData(oldp+1032,(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_popped),3);
        tracep->fullBit(oldp+1033,(vlTOPp->ibex_core_pre_buf_i_fifo_i_pop_fifo));
        tracep->fullBit(oldp+1034,(0U));
        tracep->fullQData(oldp+1035,(vlTOPp->ibex_core___Vcellinp__id_stage_i__imd_val_d_ex_i[0]),34);
        tracep->fullQData(oldp+1037,(vlTOPp->ibex_core___Vcellinp__id_stage_i__imd_val_d_ex_i[1]),34);
        tracep->fullBit(oldp+1039,(vlTOPp->ibex_core_id_stage_i_branch_spec));
        tracep->fullBit(oldp+1040,(vlTOPp->ibex_core_id_stage_i_branch_set_raw_d));
        tracep->fullBit(oldp+1041,(vlTOPp->ibex_core_id_stage_i_stall_multdiv));
        tracep->fullBit(oldp+1042,(vlTOPp->ibex_core_id_stage_i_stall_branch));
        tracep->fullBit(oldp+1043,(vlTOPp->ibex_core_id_stage_i_stall_jump));
        tracep->fullBit(oldp+1044,(vlTOPp->ibex_core_id_stage_i_stall_id));
        tracep->fullBit(oldp+1045,(vlTOPp->ibex_core_id_stage_i_multicycle_done));
        tracep->fullBit(oldp+1046,(vlTOPp->ibex_core_id_stage_i_csr_pipe_flush));
        tracep->fullBit(oldp+1047,(vlTOPp->ibex_core_id_stage_i_id_fsm_d));
        tracep->fullCData(oldp+1048,(vlTOPp->ibex_core_id_stage_i_controller_i_ctrl_fsm_ns),4);
        tracep->fullBit(oldp+1049,(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_d));
        tracep->fullBit(oldp+1050,(vlTOPp->ibex_core_id_stage_i_controller_i_illegal_insn_d));
        tracep->fullBit(oldp+1051,(vlTOPp->ibex_core_id_stage_i_controller_i_halt_if));
        tracep->fullBit(oldp+1052,(vlTOPp->ibex_core_id_stage_i_controller_i_retain_id));
        tracep->fullBit(oldp+1053,(vlTOPp->ibex_core_id_stage_i_controller_i_special_req));
        tracep->fullBit(oldp+1054,(vlTOPp->ibex_core_id_stage_i_controller_i_csr_pipe_flush));
        tracep->fullQData(oldp+1055,(vlTOPp->ibex_core___Vcellout__ex_block_i__imd_val_d_o[0]),34);
        tracep->fullQData(oldp+1057,(vlTOPp->ibex_core___Vcellout__ex_block_i__imd_val_d_o[1]),34);
        tracep->fullIData(oldp+1059,(vlTOPp->ibex_core_ex_block_i_alu_result),32);
        tracep->fullQData(oldp+1060,(vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext),34);
        tracep->fullBit(oldp+1062,((0U == (IData)((vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                   >> 1U)))));
        tracep->fullQData(oldp+1063,(vlTOPp->ibex_core_ex_block_i_multdiv_imd_val_d[0]),34);
        tracep->fullQData(oldp+1065,(vlTOPp->ibex_core_ex_block_i_multdiv_imd_val_d[1]),34);
        tracep->fullIData(oldp+1067,(vlTOPp->ibex_core_ex_block_i_alu_i_operand_a_rev),32);
        tracep->fullQData(oldp+1068,((0x1ffffffffULL 
                                      & (~ ((QData)((IData)(vlTOPp->ibex_core_id_stage_i_alu_operand_b)) 
                                            << 1U)))),33);
        tracep->fullCData(oldp+1070,(vlTOPp->ibex_core_ex_block_i_alu_i_shift_amt),6);
        tracep->fullCData(oldp+1071,((0x3fU & ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & vlTOPp->ibex_core_id_stage_i_alu_operand_b)))),6);
        tracep->fullIData(oldp+1072,(vlTOPp->ibex_core_ex_block_i_alu_i_shift_operand),32);
        tracep->fullQData(oldp+1073,(vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_ext_signed),33);
        tracep->fullQData(oldp+1075,(vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_ext),33);
        tracep->fullBit(oldp+1077,(vlTOPp->ibex_core_ex_block_i_alu_i_unused_shift_result_ext));
        tracep->fullIData(oldp+1078,(vlTOPp->ibex_core_ex_block_i_alu_i_shift_result),32);
        tracep->fullIData(oldp+1079,(vlTOPp->ibex_core_ex_block_i_alu_i_shift_result_rev),32);
        tracep->fullCData(oldp+1080,(((0x10U & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlTOPp->ibex_core_id_stage_i_alu_operand_b 
                                                                >> 0x18U))))) 
                                                << 4U)) 
                                      | (0xfU & (vlTOPp->ibex_core_id_stage_i_alu_operand_b 
                                                 >> 0x18U)))),5);
        tracep->fullCData(oldp+1081,((0x1fU & (vlTOPp->ibex_core_id_stage_i_alu_operand_b 
                                               >> 0x10U))),5);
        tracep->fullIData(oldp+1082,((vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                                      | vlTOPp->ibex_core_id_stage_i_alu_operand_b)),32);
        tracep->fullIData(oldp+1083,((vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                                      & vlTOPp->ibex_core_id_stage_i_alu_operand_b)),32);
        tracep->fullIData(oldp+1084,((vlTOPp->ibex_core_id_stage_i_alu_operand_a 
                                      ^ vlTOPp->ibex_core_id_stage_i_alu_operand_b)),32);
        tracep->fullIData(oldp+1085,(vlTOPp->ibex_core_ex_block_i_alu_i_bwlogic_result),32);
        tracep->fullBit(oldp+1086,((1U & (((IData)(0x20U) 
                                           - (0x1fU 
                                              & vlTOPp->ibex_core_id_stage_i_alu_operand_b)) 
                                          >> 5U))));
        tracep->fullQData(oldp+1087,(vlTOPp->ibex_core_ex_block_i___Vcellout__gen_multdiv_fast_i__imd_val_d_o[0]),34);
        tracep->fullQData(oldp+1089,(vlTOPp->ibex_core_ex_block_i___Vcellout__gen_multdiv_fast_i__imd_val_d_o[1]),34);
        tracep->fullBit(oldp+1091,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_a));
        tracep->fullBit(oldp+1092,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_sign_b));
        tracep->fullQData(oldp+1093,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mac_res_d),34);
        tracep->fullQData(oldp+1095,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_remainder_d),34);
        tracep->fullBit(oldp+1097,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_sign_a));
        tracep->fullBit(oldp+1098,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_sign_b));
        tracep->fullBit(oldp+1099,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_is_greater_equal));
        tracep->fullIData(oldp+1100,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_denominator_d),32);
        tracep->fullIData(oldp+1101,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_numerator_d),32);
        tracep->fullIData(oldp+1102,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_op_quotient_d),32);
        tracep->fullIData(oldp+1103,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_next_remainder),32);
        tracep->fullQData(oldp+1104,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_next_quotient),33);
        tracep->fullCData(oldp+1106,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_counter_d),5);
        tracep->fullBit(oldp+1107,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_by_zero_d));
        tracep->fullCData(oldp+1108,(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_md_state_d),3);
        tracep->fullCData(oldp+1109,(((2U & ((IData)(
                                                     (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                      >> 0x21U)) 
                                             << 1U)) 
                                      | (1U & (IData)(vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext)))),2);
        tracep->fullBit(oldp+1110,(vlTOPp->ibex_core_load_store_unit_i_addr_update));
        tracep->fullCData(oldp+1111,((3U & (IData)(
                                                   (vlTOPp->ibex_core_ex_block_i_alu_adder_result_ext 
                                                    >> 1U)))),2);
        tracep->fullBit(oldp+1112,(vlTOPp->ibex_core_load_store_unit_i_split_misaligned_access));
        tracep->fullBit(oldp+1113,(vlTOPp->ibex_core_load_store_unit_i_handle_misaligned_d));
        tracep->fullBit(oldp+1114,(vlTOPp->ibex_core_load_store_unit_i_pmp_err_d));
        tracep->fullBit(oldp+1115,(vlTOPp->ibex_core_load_store_unit_i_lsu_err_d));
        tracep->fullCData(oldp+1116,(vlTOPp->ibex_core_load_store_unit_i_ls_fsm_ns),3);
        tracep->fullIData(oldp+1117,(vlTOPp->ibex_core_cs_reg_i_exception_pc),32);
        tracep->fullBit(oldp+1118,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d) 
                                          >> 5U))));
        tracep->fullBit(oldp+1119,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d) 
                                          >> 4U))));
        tracep->fullCData(oldp+1120,((3U & ((IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d) 
                                            >> 2U))),2);
        tracep->fullBit(oldp+1121,((1U & ((IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d) 
                                          >> 1U))));
        tracep->fullBit(oldp+1122,((1U & (IData)(vlTOPp->ibex_core_cs_reg_i_mstatus_d))));
        tracep->fullBit(oldp+1123,(vlTOPp->ibex_core_cs_reg_i_mstatus_en));
        tracep->fullBit(oldp+1124,((1U & (vlTOPp->ibex_core_cs_reg_i_mie_d 
                                          >> 0x11U))));
        tracep->fullBit(oldp+1125,((1U & (vlTOPp->ibex_core_cs_reg_i_mie_d 
                                          >> 0x10U))));
        tracep->fullBit(oldp+1126,((1U & (vlTOPp->ibex_core_cs_reg_i_mie_d 
                                          >> 0xfU))));
        tracep->fullSData(oldp+1127,((0x7fffU & vlTOPp->ibex_core_cs_reg_i_mie_d)),15);
        tracep->fullBit(oldp+1128,(vlTOPp->ibex_core_cs_reg_i_mie_en));
        tracep->fullBit(oldp+1129,(vlTOPp->ibex_core_cs_reg_i_mscratch_en));
        tracep->fullIData(oldp+1130,(vlTOPp->ibex_core_cs_reg_i_mepc_d),32);
        tracep->fullBit(oldp+1131,(vlTOPp->ibex_core_cs_reg_i_mepc_en));
        tracep->fullCData(oldp+1132,(vlTOPp->ibex_core_cs_reg_i_mcause_d),6);
        tracep->fullBit(oldp+1133,(vlTOPp->ibex_core_cs_reg_i_mcause_en));
        tracep->fullIData(oldp+1134,(vlTOPp->ibex_core_cs_reg_i_mtval_d),32);
        tracep->fullBit(oldp+1135,(vlTOPp->ibex_core_cs_reg_i_mtval_en));
        tracep->fullIData(oldp+1136,(((IData)(vlTOPp->ibex_core_csr_mtvec_init)
                                       ? 0x100001U : 
                                      (1U | (0xffffff00U 
                                             & vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)))),32);
        tracep->fullBit(oldp+1137,(vlTOPp->ibex_core_cs_reg_i_mtvec_en));
        tracep->fullCData(oldp+1138,((0xfU & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                              >> 0x1cU))),4);
        tracep->fullSData(oldp+1139,((0xfffU & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                                >> 0x10U))),12);
        tracep->fullBit(oldp+1140,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1141,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1142,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1143,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1144,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1145,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1146,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                          >> 9U))));
        tracep->fullCData(oldp+1147,((7U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                            >> 6U))),3);
        tracep->fullBit(oldp+1148,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                          >> 5U))));
        tracep->fullBit(oldp+1149,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                          >> 4U))));
        tracep->fullBit(oldp+1150,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                          >> 3U))));
        tracep->fullBit(oldp+1151,((1U & (vlTOPp->ibex_core_cs_reg_i_dcsr_d 
                                          >> 2U))));
        tracep->fullCData(oldp+1152,((3U & vlTOPp->ibex_core_cs_reg_i_dcsr_d)),2);
        tracep->fullBit(oldp+1153,(vlTOPp->ibex_core_cs_reg_i_dcsr_en));
        tracep->fullIData(oldp+1154,(vlTOPp->ibex_core_cs_reg_i_depc_d),32);
        tracep->fullBit(oldp+1155,(vlTOPp->ibex_core_cs_reg_i_depc_en));
        tracep->fullBit(oldp+1156,(vlTOPp->ibex_core_cs_reg_i_dscratch0_en));
        tracep->fullBit(oldp+1157,(vlTOPp->ibex_core_cs_reg_i_dscratch1_en));
        tracep->fullBit(oldp+1158,(vlTOPp->ibex_core_cs_reg_i_mstack_en));
        tracep->fullBit(oldp+1159,(vlTOPp->ibex_core_cs_reg_i_mcountinhibit_we));
        tracep->fullIData(oldp+1160,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we),32);
        tracep->fullIData(oldp+1161,(vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we),32);
        tracep->fullIData(oldp+1162,(vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr),32);
        tracep->fullCData(oldp+1163,((0x1fU & (IData)(vlTOPp->ibex_core_csr_addr))),5);
        tracep->fullBit(oldp+1164,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 1U))));
        tracep->fullBit(oldp+1165,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 1U))));
        tracep->fullBit(oldp+1166,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_incr 
                                          >> 1U))));
        tracep->fullCData(oldp+1167,((7U & (vlTOPp->ibex_core_cs_reg_i_csr_wdata_int 
                                            >> 3U))),3);
        tracep->fullBit(oldp+1168,((1U & (vlTOPp->ibex_core_cs_reg_i_csr_wdata_int 
                                          >> 2U))));
        tracep->fullBit(oldp+1169,((1U & (vlTOPp->ibex_core_cs_reg_i_csr_wdata_int 
                                          >> 1U))));
        tracep->fullBit(oldp+1170,((1U & vlTOPp->ibex_core_cs_reg_i_csr_wdata_int)));
        tracep->fullBit(oldp+1171,(vlTOPp->ibex_core_cs_reg_i_cpuctrl_we));
        tracep->fullIData(oldp+1172,(vlTOPp->ibex_core_cs_reg_i_csr_wdata_int),32);
        tracep->fullBit(oldp+1173,(vlTOPp->ibex_core_cs_reg_i_csr_we_int));
        tracep->fullBit(oldp+1174,(vlTOPp->ibex_core_cs_reg_i_csr_wreq));
        tracep->fullBit(oldp+1175,(vlTOPp->ibex_core_cs_reg_i_illegal_csr));
        tracep->fullBit(oldp+1176,(((3U == (3U & ((IData)(vlTOPp->ibex_core_csr_addr) 
                                                  >> 0xaU))) 
                                    & (IData)(vlTOPp->ibex_core_cs_reg_i_csr_wreq))));
        tracep->fullCData(oldp+1177,((7U & ((IData)(vlTOPp->ibex_core_csr_addr) 
                                            >> 5U))),3);
        tracep->fullCData(oldp+1178,(vlTOPp->ibex_core_cs_reg_i_mstatus_d),6);
        tracep->fullIData(oldp+1179,(vlTOPp->ibex_core_cs_reg_i_mie_d),18);
        tracep->fullIData(oldp+1180,(vlTOPp->ibex_core_cs_reg_i_dcsr_d),32);
        tracep->fullBit(oldp+1181,((1U & vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we)));
        tracep->fullBit(oldp+1182,((1U & vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we)));
        tracep->fullQData(oldp+1183,(vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_upd),64);
        tracep->fullQData(oldp+1185,(vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_load),64);
        tracep->fullBit(oldp+1187,(vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_we));
        tracep->fullQData(oldp+1188,(vlTOPp->ibex_core_cs_reg_i_mcycle_counter_i_counter_d),64);
        tracep->fullBit(oldp+1190,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 2U))));
        tracep->fullBit(oldp+1191,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 2U))));
        tracep->fullQData(oldp+1192,(vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_upd),64);
        tracep->fullQData(oldp+1194,(vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_load),64);
        tracep->fullBit(oldp+1196,(vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_we));
        tracep->fullQData(oldp+1197,(vlTOPp->ibex_core_cs_reg_i_minstret_counter_i_counter_d),64);
        tracep->fullBit(oldp+1199,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 3U))));
        tracep->fullBit(oldp+1200,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 3U))));
        tracep->fullQData(oldp+1201,(vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_upd),40);
        tracep->fullQData(oldp+1203,(vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_load),64);
        tracep->fullBit(oldp+1205,(vlTOPp->ibex_core_cs_reg_i_cntrs_0_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1206,(vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_d),40);
        tracep->fullIData(oldp+1208,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_0_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1209,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 4U))));
        tracep->fullBit(oldp+1210,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 4U))));
        tracep->fullQData(oldp+1211,(vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_upd),40);
        tracep->fullQData(oldp+1213,(vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_load),64);
        tracep->fullBit(oldp+1215,(vlTOPp->ibex_core_cs_reg_i_cntrs_1_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1216,(vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_d),40);
        tracep->fullIData(oldp+1218,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_1_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1219,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 5U))));
        tracep->fullBit(oldp+1220,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 5U))));
        tracep->fullQData(oldp+1221,(vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_upd),40);
        tracep->fullQData(oldp+1223,(vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_load),64);
        tracep->fullBit(oldp+1225,(vlTOPp->ibex_core_cs_reg_i_cntrs_2_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1226,(vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_d),40);
        tracep->fullIData(oldp+1228,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_2_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1229,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 6U))));
        tracep->fullBit(oldp+1230,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 6U))));
        tracep->fullQData(oldp+1231,(vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_upd),40);
        tracep->fullQData(oldp+1233,(vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_load),64);
        tracep->fullBit(oldp+1235,(vlTOPp->ibex_core_cs_reg_i_cntrs_3_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1236,(vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_d),40);
        tracep->fullIData(oldp+1238,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_3_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1239,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 7U))));
        tracep->fullBit(oldp+1240,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 7U))));
        tracep->fullQData(oldp+1241,(vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_upd),40);
        tracep->fullQData(oldp+1243,(vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_load),64);
        tracep->fullBit(oldp+1245,(vlTOPp->ibex_core_cs_reg_i_cntrs_4_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1246,(vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_d),40);
        tracep->fullIData(oldp+1248,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_4_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1249,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 8U))));
        tracep->fullBit(oldp+1250,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 8U))));
        tracep->fullQData(oldp+1251,(vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_upd),40);
        tracep->fullQData(oldp+1253,(vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_load),64);
        tracep->fullBit(oldp+1255,(vlTOPp->ibex_core_cs_reg_i_cntrs_5_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1256,(vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_d),40);
        tracep->fullIData(oldp+1258,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_5_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1259,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 9U))));
        tracep->fullBit(oldp+1260,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 9U))));
        tracep->fullQData(oldp+1261,(vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_upd),40);
        tracep->fullQData(oldp+1263,(vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_load),64);
        tracep->fullBit(oldp+1265,(vlTOPp->ibex_core_cs_reg_i_cntrs_6_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1266,(vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_d),40);
        tracep->fullIData(oldp+1268,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_6_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1269,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1270,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0xaU))));
        tracep->fullQData(oldp+1271,(vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_upd),40);
        tracep->fullQData(oldp+1273,(vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_load),64);
        tracep->fullBit(oldp+1275,(vlTOPp->ibex_core_cs_reg_i_cntrs_7_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1276,(vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_d),40);
        tracep->fullIData(oldp+1278,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_7_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1279,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1280,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0xbU))));
        tracep->fullQData(oldp+1281,(vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_upd),40);
        tracep->fullQData(oldp+1283,(vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_load),64);
        tracep->fullBit(oldp+1285,(vlTOPp->ibex_core_cs_reg_i_cntrs_8_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1286,(vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_d),40);
        tracep->fullIData(oldp+1288,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_8_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1289,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1290,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0xcU))));
        tracep->fullQData(oldp+1291,(vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_upd),40);
        tracep->fullQData(oldp+1293,(vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_load),64);
        tracep->fullBit(oldp+1295,(vlTOPp->ibex_core_cs_reg_i_cntrs_9_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1296,(vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_d),40);
        tracep->fullIData(oldp+1298,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_9_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1299,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1300,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0xdU))));
        tracep->fullQData(oldp+1301,(vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_upd),40);
        tracep->fullQData(oldp+1303,(vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_load),64);
        tracep->fullBit(oldp+1305,(vlTOPp->ibex_core_cs_reg_i_cntrs_10_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1306,(vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_d),40);
        tracep->fullIData(oldp+1308,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_10_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1309,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1310,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0xeU))));
        tracep->fullQData(oldp+1311,(vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_upd),40);
        tracep->fullQData(oldp+1313,(vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_load),64);
        tracep->fullBit(oldp+1315,(vlTOPp->ibex_core_cs_reg_i_cntrs_11_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1316,(vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_d),40);
        tracep->fullIData(oldp+1318,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_11_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1319,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1320,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0xfU))));
        tracep->fullQData(oldp+1321,(vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_upd),40);
        tracep->fullQData(oldp+1323,(vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_load),64);
        tracep->fullBit(oldp+1325,(vlTOPp->ibex_core_cs_reg_i_cntrs_12_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1326,(vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_d),40);
        tracep->fullIData(oldp+1328,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_12_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1329,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0x10U))));
        tracep->fullBit(oldp+1330,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0x10U))));
        tracep->fullQData(oldp+1331,(vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_upd),40);
        tracep->fullQData(oldp+1333,(vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_load),64);
        tracep->fullBit(oldp+1335,(vlTOPp->ibex_core_cs_reg_i_cntrs_13_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1336,(vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_d),40);
        tracep->fullIData(oldp+1338,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_13_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1339,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0x11U))));
        tracep->fullBit(oldp+1340,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0x11U))));
        tracep->fullQData(oldp+1341,(vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_upd),40);
        tracep->fullQData(oldp+1343,(vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_load),64);
        tracep->fullBit(oldp+1345,(vlTOPp->ibex_core_cs_reg_i_cntrs_14_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1346,(vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_d),40);
        tracep->fullIData(oldp+1348,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_14_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1349,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0x12U))));
        tracep->fullBit(oldp+1350,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0x12U))));
        tracep->fullQData(oldp+1351,(vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_upd),40);
        tracep->fullQData(oldp+1353,(vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_load),64);
        tracep->fullBit(oldp+1355,(vlTOPp->ibex_core_cs_reg_i_cntrs_15_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1356,(vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_d),40);
        tracep->fullIData(oldp+1358,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_15_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1359,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0x13U))));
        tracep->fullBit(oldp+1360,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0x13U))));
        tracep->fullQData(oldp+1361,(vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_upd),40);
        tracep->fullQData(oldp+1363,(vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_load),64);
        tracep->fullBit(oldp+1365,(vlTOPp->ibex_core_cs_reg_i_cntrs_16_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1366,(vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_d),40);
        tracep->fullIData(oldp+1368,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_16_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1369,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0x14U))));
        tracep->fullBit(oldp+1370,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0x14U))));
        tracep->fullQData(oldp+1371,(vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_upd),40);
        tracep->fullQData(oldp+1373,(vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_load),64);
        tracep->fullBit(oldp+1375,(vlTOPp->ibex_core_cs_reg_i_cntrs_17_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1376,(vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_d),40);
        tracep->fullIData(oldp+1378,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_17_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1379,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0x15U))));
        tracep->fullBit(oldp+1380,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0x15U))));
        tracep->fullQData(oldp+1381,(vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_upd),40);
        tracep->fullQData(oldp+1383,(vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_load),64);
        tracep->fullBit(oldp+1385,(vlTOPp->ibex_core_cs_reg_i_cntrs_18_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1386,(vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_d),40);
        tracep->fullIData(oldp+1388,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_18_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1389,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0x16U))));
        tracep->fullBit(oldp+1390,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0x16U))));
        tracep->fullQData(oldp+1391,(vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_upd),40);
        tracep->fullQData(oldp+1393,(vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_load),64);
        tracep->fullBit(oldp+1395,(vlTOPp->ibex_core_cs_reg_i_cntrs_19_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1396,(vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_d),40);
        tracep->fullIData(oldp+1398,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_19_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1399,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0x17U))));
        tracep->fullBit(oldp+1400,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0x17U))));
        tracep->fullQData(oldp+1401,(vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_upd),40);
        tracep->fullQData(oldp+1403,(vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_load),64);
        tracep->fullBit(oldp+1405,(vlTOPp->ibex_core_cs_reg_i_cntrs_20_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1406,(vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_d),40);
        tracep->fullIData(oldp+1408,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_20_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1409,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0x18U))));
        tracep->fullBit(oldp+1410,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0x18U))));
        tracep->fullQData(oldp+1411,(vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_upd),40);
        tracep->fullQData(oldp+1413,(vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_load),64);
        tracep->fullBit(oldp+1415,(vlTOPp->ibex_core_cs_reg_i_cntrs_21_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1416,(vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_d),40);
        tracep->fullIData(oldp+1418,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_21_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1419,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0x19U))));
        tracep->fullBit(oldp+1420,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0x19U))));
        tracep->fullQData(oldp+1421,(vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_upd),40);
        tracep->fullQData(oldp+1423,(vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_load),64);
        tracep->fullBit(oldp+1425,(vlTOPp->ibex_core_cs_reg_i_cntrs_22_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1426,(vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_d),40);
        tracep->fullIData(oldp+1428,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_22_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1429,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+1430,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0x1aU))));
        tracep->fullQData(oldp+1431,(vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_upd),40);
        tracep->fullQData(oldp+1433,(vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_load),64);
        tracep->fullBit(oldp+1435,(vlTOPp->ibex_core_cs_reg_i_cntrs_23_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1436,(vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_d),40);
        tracep->fullIData(oldp+1438,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_23_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1439,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+1440,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0x1bU))));
        tracep->fullQData(oldp+1441,(vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_upd),40);
        tracep->fullQData(oldp+1443,(vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_load),64);
        tracep->fullBit(oldp+1445,(vlTOPp->ibex_core_cs_reg_i_cntrs_24_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1446,(vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_d),40);
        tracep->fullIData(oldp+1448,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_24_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1449,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+1450,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0x1cU))));
        tracep->fullQData(oldp+1451,(vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_upd),40);
        tracep->fullQData(oldp+1453,(vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_load),64);
        tracep->fullBit(oldp+1455,(vlTOPp->ibex_core_cs_reg_i_cntrs_25_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1456,(vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_d),40);
        tracep->fullIData(oldp+1458,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_25_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1459,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+1460,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0x1dU))));
        tracep->fullQData(oldp+1461,(vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_upd),40);
        tracep->fullQData(oldp+1463,(vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_load),64);
        tracep->fullBit(oldp+1465,(vlTOPp->ibex_core_cs_reg_i_cntrs_26_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1466,(vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_d),40);
        tracep->fullIData(oldp+1468,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_26_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1469,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+1470,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0x1eU))));
        tracep->fullQData(oldp+1471,(vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_upd),40);
        tracep->fullQData(oldp+1473,(vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_load),64);
        tracep->fullBit(oldp+1475,(vlTOPp->ibex_core_cs_reg_i_cntrs_27_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1476,(vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_d),40);
        tracep->fullIData(oldp+1478,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_27_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullBit(oldp+1479,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounterh_we 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+1480,((1U & (vlTOPp->ibex_core_cs_reg_i_mhpmcounter_we 
                                          >> 0x1fU))));
        tracep->fullQData(oldp+1481,(vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_upd),40);
        tracep->fullQData(oldp+1483,(vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_load),64);
        tracep->fullBit(oldp+1485,(vlTOPp->ibex_core_cs_reg_i_cntrs_28_gen_mcnt_var_i_we));
        tracep->fullQData(oldp+1486,(vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_d),40);
        tracep->fullIData(oldp+1488,((0xffffffU & (IData)(
                                                          (vlTOPp->ibex_core_cs_reg_i_cntrs_28_var_cnt_load 
                                                           >> 0x28U)))),24);
        tracep->fullIData(oldp+1489,(vlTOPp->ibex_core_gen_reg_file_we_a_dec),31);
        tracep->fullBit(oldp+1490,(vlTOPp->ibex_device_req
                                   [0U]));
        tracep->fullBit(oldp+1491,(vlTOPp->ibex_device_we
                                   [0U]));
        tracep->fullCData(oldp+1492,(vlTOPp->ibex_device_be
                                     [0U]),4);
        tracep->fullIData(oldp+1493,(vlTOPp->ibex_device_addr
                                     [0U]),32);
        tracep->fullIData(oldp+1494,(vlTOPp->ibex_device_wdata
                                     [0U]),32);
        tracep->fullIData(oldp+1495,((0x3ffffU & (vlTOPp->ibex_device_addr
                                                  [0U] 
                                                  >> 2U))),18);
        tracep->fullSData(oldp+1496,(((0x3ffcU & (vlTOPp->ibex_device_addr
                                                  [0U] 
                                                  >> 0x12U)) 
                                      | (3U & vlTOPp->ibex_device_addr
                                         [0U]))),14);
        tracep->fullIData(oldp+1497,((0x3ffffU & (vlTOPp->ibex_core_pre_buf_i_instr_addr 
                                                  >> 2U))),18);
        tracep->fullSData(oldp+1498,((0x3ffcU & (vlTOPp->ibex_core_pre_buf_i_instr_addr 
                                                 >> 0x12U))),14);
        tracep->fullIData(oldp+1499,(vlTOPp->ibex_ram_a_wmask),32);
        tracep->fullIData(oldp+1500,(vlTOPp->ibex_ram_gen_generic_impl_a_wmask),32);
        tracep->fullBit(oldp+1501,(vlTOPp->ibex_device_req
                                   [1U]));
        tracep->fullBit(oldp+1502,(vlTOPp->ibex_device_we
                                   [1U]));
        tracep->fullCData(oldp+1503,(vlTOPp->ibex_device_be
                                     [1U]),4);
        tracep->fullIData(oldp+1504,(vlTOPp->ibex_device_addr
                                     [1U]),32);
        tracep->fullIData(oldp+1505,(vlTOPp->ibex_device_wdata
                                     [1U]),32);
        tracep->fullCData(oldp+1506,((0xffU & (vlTOPp->ibex_device_addr
                                               [1U] 
                                               >> 2U))),8);
        tracep->fullBit(oldp+1507,(vlTOPp->ibex_device_req
                                   [2U]));
        tracep->fullIData(oldp+1508,(vlTOPp->ibex_device_addr
                                     [2U]),32);
        tracep->fullBit(oldp+1509,(vlTOPp->ibex_device_we
                                   [2U]));
        tracep->fullCData(oldp+1510,(vlTOPp->ibex_device_be
                                     [2U]),4);
        tracep->fullIData(oldp+1511,(vlTOPp->ibex_device_wdata
                                     [2U]),32);
        tracep->fullBit(oldp+1512,(vlTOPp->ibex_timer_timer_we));
        tracep->fullBit(oldp+1513,(((IData)(vlTOPp->ibex_timer_timer_we) 
                                    & (0U == (0x3ffU 
                                              & vlTOPp->ibex_device_addr
                                              [2U])))));
        tracep->fullBit(oldp+1514,(((IData)(vlTOPp->ibex_timer_timer_we) 
                                    & (4U == (0x3ffU 
                                              & vlTOPp->ibex_device_addr
                                              [2U])))));
        tracep->fullBit(oldp+1515,(vlTOPp->ibex_timer_mtimecmp_we));
        tracep->fullBit(oldp+1516,(vlTOPp->ibex_timer_mtimecmph_we));
        tracep->fullIData(oldp+1517,(vlTOPp->ibex_timer_mtime_wdata),32);
        tracep->fullIData(oldp+1518,(vlTOPp->ibex_timer_mtimeh_wdata),32);
        tracep->fullIData(oldp+1519,(vlTOPp->ibex_timer_mtimecmp_wdata),32);
        tracep->fullIData(oldp+1520,(vlTOPp->ibex_timer_mtimecmph_wdata),32);
        tracep->fullBit(oldp+1521,(vlTOPp->ibex_timer_error_d));
        tracep->fullIData(oldp+1522,(vlTOPp->ibex_timer_rdata_d),32);
        tracep->fullBit(oldp+1523,(vlTOPp->IO_CLK));
        tracep->fullBit(oldp+1524,(vlTOPp->IO_RST_N));
        tracep->fullBit(oldp+1525,((1U & (~ ((IData)(vlTOPp->ibex_core_fetch_enable_q) 
                                             & ((IData)(vlTOPp->ibex_core_core_busy_q) 
                                                | (0U 
                                                   != vlTOPp->ibex_core_irqs)))))));
        tracep->fullBit(oldp+1526,((1U & (((((~ (IData)(vlTOPp->ibex_core_id_stage_i_ebrk_insn)) 
                                             & (~ (IData)(vlTOPp->ibex_core_id_stage_i_ecall_insn_dec))) 
                                            & (~ (IData)(vlTOPp->ibex_core_id_stage_i_decoder_i_illegal_insn))) 
                                           & (~ (IData)(vlTOPp->ibex_core_illegal_csr_insn_id))) 
                                          & (~ (IData)(vlTOPp->ibex_core_instr_fetch_err))))));
        tracep->fullBit(oldp+1527,(((IData)(vlTOPp->ibex_core_perf_instr_ret_wb) 
                                    & (IData)(vlTOPp->ibex_core_instr_is_compressed_id))));
        tracep->fullBit(oldp+1528,((((IData)(vlTOPp->ibex_core_id_stage_i_instr_executing_spec) 
                                     & (IData)(vlTOPp->ibex_core_id_stage_i_lsu_req_dec)) 
                                    & (~ (IData)(vlTOPp->ibex_core_lsu_resp_valid)))));
        tracep->fullCData(oldp+1529,(((IData)(vlTOPp->ibex_core_id_stage_i_instr_first_cycle)
                                       ? 0U : (0x1fU 
                                               & (vlTOPp->ibex_core_instr_rdata_id 
                                                  >> 0xfU)))),5);
        tracep->fullIData(oldp+1530,(((IData)(vlTOPp->ibex_core_id_stage_i_instr_first_cycle)
                                       ? 0U : vlTOPp->ibex_core_rf_rdata_a_ecc)),32);
        tracep->fullBit(oldp+1531,(((IData)(vlTOPp->ibex_core_fetch_enable_q) 
                                    & ((IData)(vlTOPp->ibex_core_core_busy_q) 
                                       | (0U != vlTOPp->ibex_core_irqs)))));
        tracep->fullBit(oldp+1532,(((((IData)(vlTOPp->ibex_core_pre_buf_i_valid_raw) 
                                      & (IData)(vlTOPp->ibex_core_id_in_ready)) 
                                     & (~ (IData)(vlTOPp->ibex_core_pc_set))) 
                                    | ((IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q) 
                                       & (~ (IData)(vlTOPp->ibex_core_instr_valid_clear))))));
        tracep->fullBit(oldp+1533,((1U & (vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q 
                                          & ((2U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q))
                                              ? (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q)))
                                              : (((IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_q) 
                                                  & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q)) 
                                                 & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q))))))));
        tracep->fullIData(oldp+1534,((((IData)(vlTOPp->ibex_core_pc_set)
                                        ? (0xfffffffeU 
                                           & vlTOPp->ibex_core_if_stage_i_fetch_addr_n)
                                        : (0xfffffffcU 
                                           & vlTOPp->ibex_core_pre_buf_i_fetch_addr_q)) 
                                      + (((IData)(vlTOPp->ibex_core_pre_buf_i_valid_new_req) 
                                          & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_valid_req_q))) 
                                         << 2U))),32);
        tracep->fullIData(oldp+1535,((0xfffffffeU & 
                                      ((vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q 
                                        + ((2U & ((~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two)) 
                                                  << 1U)) 
                                           | (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two))) 
                                       << 1U))),32);
        tracep->fullIData(oldp+1536,(vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_d[0U]),32);
        tracep->fullIData(oldp+1537,(vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_d[1U]),32);
        tracep->fullIData(oldp+1538,(vlTOPp->ibex_core_pre_buf_i_fifo_i_rdata_d[2U]),32);
        tracep->fullIData(oldp+1539,(((2U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q))
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
        tracep->fullBit(oldp+1540,((1U & ((2U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q))
                                           ? ((((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q) 
                                                >> 1U) 
                                               & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_unaligned_is_compressed))) 
                                              | (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q))
                                           : (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q) 
                                               & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q)) 
                                              | ((IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_q) 
                                                 & ((~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q)) 
                                                    | (~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_unaligned_is_compressed)))))))));
        tracep->fullBit(oldp+1541,((1U & ((2U & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q))
                                           ? (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q) 
                                               >> 1U) 
                                              & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q)))
                                           : (((IData)(vlTOPp->ibex_core_pre_buf_i_rdata_pmp_err_q) 
                                               & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q)) 
                                              & (~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_err_q)))))));
        tracep->fullBit(oldp+1542,((1U & (((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q) 
                                           >> 1U) | 
                                          ((IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_valid_q) 
                                           & (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_valid))))));
        tracep->fullIData(oldp+1543,((0x7fffffffU & 
                                      (vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q 
                                       + ((2U & ((~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two)) 
                                                 << 1U)) 
                                          | (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two))))),31);
        tracep->fullIData(oldp+1544,((0x7fffffffU & 
                                      ((IData)(vlTOPp->ibex_core_pc_set)
                                        ? (((IData)(vlTOPp->ibex_core_pc_set)
                                             ? (0xfffffffeU 
                                                & vlTOPp->ibex_core_if_stage_i_fetch_addr_n)
                                             : 0U) 
                                           >> 1U) : 
                                       (vlTOPp->ibex_core_pre_buf_i_fifo_i_instr_addr_q 
                                        + ((2U & ((~ (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two)) 
                                                  << 1U)) 
                                           | (IData)(vlTOPp->ibex_core_pre_buf_i_fifo_i_addr_incr_two)))))),31);
        tracep->fullBit(oldp+1545,(((IData)(vlTOPp->ibex_core_if_stage_i_instr_valid_id_q) 
                                    & ((IData)(vlTOPp->ibex_core_id_stage_i_lsu_req_dec) 
                                       & ((~ (IData)(vlTOPp->ibex_core_lsu_resp_valid)) 
                                          | (IData)(vlTOPp->ibex_core_id_stage_i_instr_first_cycle))))));
        tracep->fullIData(oldp+1546,(((IData)(vlTOPp->ibex_core_id_stage_i_imm_a_mux_sel)
                                       ? 0U : (0x1fU 
                                               & (vlTOPp->ibex_core_instr_rdata_id 
                                                  >> 0xfU)))),32);
        tracep->fullBit(oldp+1547,(((IData)(vlTOPp->ibex_core_lsu_addr_incr_req) 
                                    | (IData)(vlTOPp->ibex_core_id_stage_i_alu_op_b_mux_sel_dec))));
        tracep->fullBit(oldp+1548,(((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_dret_insn) 
                                    & (~ (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_debug_mode_q)))));
        tracep->fullBit(oldp+1549,(((3U != (IData)(vlTOPp->ibex_core_cs_reg_i_priv_lvl_q)) 
                                    & ((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_mret_insn) 
                                       | ((IData)(vlTOPp->ibex_core_cs_reg_i_u_mstatus_csr__rdata_q) 
                                          & (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_wfi_insn))))));
        tracep->fullBit(oldp+1550,(((((IData)(vlTOPp->ibex_core_id_stage_i_controller_i_mret_insn) 
                                      | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_dret_insn)) 
                                     | (IData)(vlTOPp->ibex_core_id_stage_i_controller_i_exc_req_d)) 
                                    | ((IData)(vlTOPp->ibex_core_lsu_store_err) 
                                       | (IData)(vlTOPp->ibex_core_lsu_load_err)))));
        tracep->fullBit(oldp+1551,(((IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_mult_valid) 
                                    | (IData)(vlTOPp->ibex_core_ex_block_i_gen_multdiv_fast_i_div_valid))));
        tracep->fullQData(oldp+1552,((0x1ffffffffULL 
                                      & ((IData)(vlTOPp->ibex_core_ex_block_i_multdiv_sel)
                                          ? vlTOPp->ibex_core_ex_block_i_multdiv_alu_operand_b
                                          : ((IData)(vlTOPp->ibex_core_ex_block_i_alu_i_adder_op_b_negate)
                                              ? (~ 
                                                 ((QData)((IData)(vlTOPp->ibex_core_id_stage_i_alu_operand_b)) 
                                                  << 1U))
                                              : ((QData)((IData)(vlTOPp->ibex_core_id_stage_i_alu_operand_b)) 
                                                 << 1U))))),33);
        tracep->fullQData(oldp+1554,((0x7ffffffffULL 
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
        tracep->fullQData(oldp+1556,((0x3ffffffffULL 
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
        tracep->fullBit(oldp+1558,((1U & (IData)((1ULL 
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
        tracep->fullIData(oldp+1559,(((2U & (IData)(vlTOPp->ibex_core_load_store_unit_i_rdata_offset_q))
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
        tracep->fullBit(oldp+1560,((((IData)(vlTOPp->ibex_core_lsu_load_err) 
                                     | (IData)(vlTOPp->ibex_core_lsu_store_err)) 
                                    & (~ (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q)))));
        tracep->fullBit(oldp+1561,((((IData)(vlTOPp->ibex_core_lsu_load_err) 
                                     | (IData)(vlTOPp->ibex_core_lsu_store_err)) 
                                    & (IData)(vlTOPp->ibex_core_load_store_unit_i_pmp_err_q))));
        tracep->fullQData(oldp+1562,((((QData)((IData)(
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
        tracep->fullQData(oldp+1564,((((QData)((IData)(
                                                       ((IData)(vlTOPp->ibex_timer_mtimecmph_we)
                                                         ? vlTOPp->ibex_timer_mtimecmph_wdata
                                                         : (IData)(
                                                                   (vlTOPp->ibex_timer_mtimecmp_q 
                                                                    >> 0x20U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((IData)(vlTOPp->ibex_timer_mtimecmp_we)
                                                                     ? vlTOPp->ibex_timer_mtimecmp_wdata
                                                                     : (IData)(vlTOPp->ibex_timer_mtimecmp_q)))))),64);
        tracep->fullBit(oldp+1566,((((vlTOPp->ibex_timer_mtime_q 
                                      >= vlTOPp->ibex_timer_mtimecmp_q) 
                                     | (IData)(vlTOPp->ibex_timer_interrupt_q)) 
                                    & (~ ((IData)(vlTOPp->ibex_timer_mtimecmp_we) 
                                          | (IData)(vlTOPp->ibex_timer_mtimecmph_we))))));
        tracep->fullIData(oldp+1567,(2U),32);
        tracep->fullIData(oldp+1568,(0U),32);
        tracep->fullIData(oldp+1569,(0U),32);
        tracep->fullBit(oldp+1570,(0U));
        tracep->fullIData(oldp+1571,(3U),32);
        tracep->fullIData(oldp+1572,(1U),32);
        tracep->fullBit(oldp+1573,(0U));
        tracep->fullIData(oldp+1574,(0x20U),32);
        tracep->fullIData(oldp+1575,(1U),32);
        tracep->fullIData(oldp+1576,(2U),32);
        tracep->fullIData(oldp+1577,(0xffffffffU),32);
        tracep->fullIData(oldp+1578,(3U),32);
        tracep->fullIData(oldp+1579,(1U),32);
        tracep->fullBit(oldp+1580,(0U));
        tracep->fullIData(oldp+1581,(0U),32);
        tracep->fullIData(oldp+1582,(4U),32);
        tracep->fullIData(oldp+1583,(0x1dU),32);
        tracep->fullIData(oldp+1584,(0x28U),32);
        tracep->fullIData(oldp+1585,(2U),32);
        tracep->fullIData(oldp+1586,(0U),32);
        tracep->fullIData(oldp+1587,(0U),32);
        tracep->fullIData(oldp+1588,(0x100000U),32);
        tracep->fullBit(oldp+1589,(0U));
        tracep->fullCData(oldp+1590,(0U),4);
        tracep->fullIData(oldp+1591,(0U),32);
        tracep->fullIData(oldp+1592,(0x100000U),32);
        tracep->fullSData(oldp+1593,(0U),15);
        tracep->fullBit(oldp+1594,(1U));
        tracep->fullIData(oldp+1595,(2U),32);
        tracep->fullIData(oldp+1596,(0U),32);
        tracep->fullIData(oldp+1597,(0U),32);
        tracep->fullIData(oldp+1598,(0x20U),32);
        tracep->fullCData(oldp+1599,(2U),2);
        tracep->fullBit(oldp+1600,(0U));
        tracep->fullBit(oldp+1601,(0U));
        tracep->fullBit(oldp+1602,(0U));
        tracep->fullIData(oldp+1603,(0U),32);
        tracep->fullCData(oldp+1604,(0U),8);
        tracep->fullIData(oldp+1605,(3U),32);
        tracep->fullIData(oldp+1606,(2U),32);
        tracep->fullIData(oldp+1607,(0U),32);
        tracep->fullCData(oldp+1608,(2U),2);
        tracep->fullCData(oldp+1609,(0U),3);
        tracep->fullIData(oldp+1610,(2U),32);
        tracep->fullIData(oldp+1611,(0U),32);
        tracep->fullIData(oldp+1612,(2U),32);
        tracep->fullIData(oldp+1613,(0U),32);
        tracep->fullCData(oldp+1614,(0U),2);
        tracep->fullIData(oldp+1615,(0U),32);
        tracep->fullCData(oldp+1616,(0U),6);
        tracep->fullIData(oldp+1617,(2U),32);
        tracep->fullIData(oldp+1618,(2U),32);
        tracep->fullIData(oldp+1619,(0U),32);
        tracep->fullIData(oldp+1620,(0x40101104U),32);
        tracep->fullBit(oldp+1621,(0U));
        tracep->fullBit(oldp+1622,(1U));
        tracep->fullCData(oldp+1623,(0U),2);
        tracep->fullBit(oldp+1624,(0U));
        tracep->fullBit(oldp+1625,(0U));
        tracep->fullCData(oldp+1626,(4U),4);
        tracep->fullSData(oldp+1627,(0U),12);
        tracep->fullBit(oldp+1628,(0U));
        tracep->fullBit(oldp+1629,(0U));
        tracep->fullBit(oldp+1630,(0U));
        tracep->fullBit(oldp+1631,(0U));
        tracep->fullBit(oldp+1632,(0U));
        tracep->fullBit(oldp+1633,(0U));
        tracep->fullBit(oldp+1634,(0U));
        tracep->fullCData(oldp+1635,(0U),3);
        tracep->fullBit(oldp+1636,(0U));
        tracep->fullBit(oldp+1637,(0U));
        tracep->fullBit(oldp+1638,(0U));
        tracep->fullBit(oldp+1639,(0U));
        tracep->fullCData(oldp+1640,(3U),2);
        tracep->fullBit(oldp+1641,(1U));
        tracep->fullIData(oldp+1642,(0x20U),32);
        tracep->fullIData(oldp+1643,(6U),32);
        tracep->fullCData(oldp+1644,(0x10U),6);
        tracep->fullIData(oldp+1645,(0U),32);
        tracep->fullIData(oldp+1646,(0x12U),32);
        tracep->fullIData(oldp+1647,(0U),18);
        tracep->fullCData(oldp+1648,(0U),6);
        tracep->fullIData(oldp+1649,(1U),32);
        tracep->fullIData(oldp+1650,(0x40000003U),32);
        tracep->fullCData(oldp+1651,(4U),3);
        tracep->fullIData(oldp+1652,(0x40U),32);
        tracep->fullIData(oldp+1653,(0x28U),32);
        tracep->fullIData(oldp+1654,(5U),32);
        tracep->fullCData(oldp+1655,(1U),5);
        tracep->fullCData(oldp+1656,(2U),5);
        tracep->fullCData(oldp+1657,(4U),5);
        tracep->fullCData(oldp+1658,(8U),5);
        tracep->fullCData(oldp+1659,(0x10U),5);
        tracep->fullIData(oldp+1660,(0x40000U),32);
        tracep->fullCData(oldp+1661,(0U),4);
        tracep->fullIData(oldp+1662,(0x12U),32);
        tracep->fullIData(oldp+1663,(4U),32);
        tracep->fullBit(oldp+1664,(0U));
        tracep->fullCData(oldp+1665,(0U),4);
        tracep->fullIData(oldp+1666,(vlTOPp->ibex_ram_gen_generic_impl_unnamedblk2__i),32);
        tracep->fullBit(oldp+1667,(1U));
        tracep->fullCData(oldp+1668,(2U),8);
        tracep->fullIData(oldp+1669,(0x40U),32);
        tracep->fullIData(oldp+1670,(0xaU),32);
        tracep->fullSData(oldp+1671,(0U),10);
        tracep->fullSData(oldp+1672,(4U),10);
        tracep->fullSData(oldp+1673,(8U),10);
        tracep->fullSData(oldp+1674,(0xcU),10);
        tracep->fullCData(oldp+1675,(1U),2);
        tracep->fullCData(oldp+1676,(2U),2);
        tracep->fullIData(oldp+1677,(0x37U),32);
        tracep->fullIData(oldp+1678,(0x17U),32);
        tracep->fullIData(oldp+1679,(0x6fU),32);
        tracep->fullIData(oldp+1680,(0x67U),32);
        tracep->fullIData(oldp+1681,(0x63U),32);
        tracep->fullIData(oldp+1682,(0x1063U),32);
        tracep->fullIData(oldp+1683,(0x4063U),32);
        tracep->fullIData(oldp+1684,(0x5063U),32);
        tracep->fullIData(oldp+1685,(0x6063U),32);
        tracep->fullIData(oldp+1686,(0x7063U),32);
        tracep->fullIData(oldp+1687,(0x13U),32);
        tracep->fullIData(oldp+1688,(0x2013U),32);
        tracep->fullIData(oldp+1689,(0x3013U),32);
        tracep->fullIData(oldp+1690,(0x4013U),32);
        tracep->fullIData(oldp+1691,(0x6013U),32);
        tracep->fullIData(oldp+1692,(0x7013U),32);
        tracep->fullIData(oldp+1693,(0x1013U),32);
        tracep->fullIData(oldp+1694,(0x5013U),32);
        tracep->fullIData(oldp+1695,(0x40005013U),32);
        tracep->fullIData(oldp+1696,(0x33U),32);
        tracep->fullIData(oldp+1697,(0x40000033U),32);
        tracep->fullIData(oldp+1698,(0x1033U),32);
        tracep->fullIData(oldp+1699,(0x2033U),32);
        tracep->fullIData(oldp+1700,(0x3033U),32);
        tracep->fullIData(oldp+1701,(0x4033U),32);
        tracep->fullIData(oldp+1702,(0x5033U),32);
        tracep->fullIData(oldp+1703,(0x40005033U),32);
        tracep->fullIData(oldp+1704,(0x6033U),32);
        tracep->fullIData(oldp+1705,(0x7033U),32);
        tracep->fullIData(oldp+1706,(0x1073U),32);
        tracep->fullIData(oldp+1707,(0x2073U),32);
        tracep->fullIData(oldp+1708,(0x3073U),32);
        tracep->fullIData(oldp+1709,(0x5073U),32);
        tracep->fullIData(oldp+1710,(0x6073U),32);
        tracep->fullIData(oldp+1711,(0x7073U),32);
        tracep->fullIData(oldp+1712,(0x73U),32);
        tracep->fullIData(oldp+1713,(0x100073U),32);
        tracep->fullIData(oldp+1714,(0x30200073U),32);
        tracep->fullIData(oldp+1715,(0x7b200073U),32);
        tracep->fullIData(oldp+1716,(0x10500073U),32);
        tracep->fullIData(oldp+1717,(0x2004033U),32);
        tracep->fullIData(oldp+1718,(0x2005033U),32);
        tracep->fullIData(oldp+1719,(0x2006033U),32);
        tracep->fullIData(oldp+1720,(0x2007033U),32);
        tracep->fullIData(oldp+1721,(0x2000033U),32);
        tracep->fullIData(oldp+1722,(0x2001033U),32);
        tracep->fullIData(oldp+1723,(0x2002033U),32);
        tracep->fullIData(oldp+1724,(0x2003033U),32);
        tracep->fullIData(oldp+1725,(0x20001013U),32);
        tracep->fullIData(oldp+1726,(0x20005013U),32);
        tracep->fullIData(oldp+1727,(0x60005013U),32);
        tracep->fullIData(oldp+1728,(0x60001013U),32);
        tracep->fullIData(oldp+1729,(0x60101013U),32);
        tracep->fullIData(oldp+1730,(0x60201013U),32);
        tracep->fullIData(oldp+1731,(0x60401013U),32);
        tracep->fullIData(oldp+1732,(0x60501013U),32);
        tracep->fullIData(oldp+1733,(0x20001033U),32);
        tracep->fullIData(oldp+1734,(0x20005033U),32);
        tracep->fullIData(oldp+1735,(0x60001033U),32);
        tracep->fullIData(oldp+1736,(0x60005033U),32);
        tracep->fullIData(oldp+1737,(0xa004033U),32);
        tracep->fullIData(oldp+1738,(0xa005033U),32);
        tracep->fullIData(oldp+1739,(0xa006033U),32);
        tracep->fullIData(oldp+1740,(0xa007033U),32);
        tracep->fullIData(oldp+1741,(0x40004033U),32);
        tracep->fullIData(oldp+1742,(0x40006033U),32);
        tracep->fullIData(oldp+1743,(0x40007033U),32);
        tracep->fullIData(oldp+1744,(0x8004033U),32);
        tracep->fullIData(oldp+1745,(0x48004033U),32);
        tracep->fullIData(oldp+1746,(0x8007033U),32);
        tracep->fullIData(oldp+1747,(0x48001013U),32);
        tracep->fullIData(oldp+1748,(0x28001013U),32);
        tracep->fullIData(oldp+1749,(0x68001013U),32);
        tracep->fullIData(oldp+1750,(0x48005013U),32);
        tracep->fullIData(oldp+1751,(0x48001033U),32);
        tracep->fullIData(oldp+1752,(0x28001033U),32);
        tracep->fullIData(oldp+1753,(0x68001033U),32);
        tracep->fullIData(oldp+1754,(0x48005033U),32);
        tracep->fullIData(oldp+1755,(0x68005013U),32);
        tracep->fullIData(oldp+1756,(0x68105013U),32);
        tracep->fullIData(oldp+1757,(0x68205013U),32);
        tracep->fullIData(oldp+1758,(0x68305013U),32);
        tracep->fullIData(oldp+1759,(0x68405013U),32);
        tracep->fullIData(oldp+1760,(0x68605013U),32);
        tracep->fullIData(oldp+1761,(0x68705013U),32);
        tracep->fullIData(oldp+1762,(0x68805013U),32);
        tracep->fullIData(oldp+1763,(0x68c05013U),32);
        tracep->fullIData(oldp+1764,(0x68e05013U),32);
        tracep->fullIData(oldp+1765,(0x68f05013U),32);
        tracep->fullIData(oldp+1766,(0x69005013U),32);
        tracep->fullIData(oldp+1767,(0x69805013U),32);
        tracep->fullIData(oldp+1768,(0x69c05013U),32);
        tracep->fullIData(oldp+1769,(0x69e05013U),32);
        tracep->fullIData(oldp+1770,(0x69f05013U),32);
        tracep->fullIData(oldp+1771,(0x28005013U),32);
        tracep->fullIData(oldp+1772,(0x28105013U),32);
        tracep->fullIData(oldp+1773,(0x28205013U),32);
        tracep->fullIData(oldp+1774,(0x28305013U),32);
        tracep->fullIData(oldp+1775,(0x28405013U),32);
        tracep->fullIData(oldp+1776,(0x28605013U),32);
        tracep->fullIData(oldp+1777,(0x28705013U),32);
        tracep->fullIData(oldp+1778,(0x28805013U),32);
        tracep->fullIData(oldp+1779,(0x28c05013U),32);
        tracep->fullIData(oldp+1780,(0x28e05013U),32);
        tracep->fullIData(oldp+1781,(0x28f05013U),32);
        tracep->fullIData(oldp+1782,(0x29005013U),32);
        tracep->fullIData(oldp+1783,(0x29805013U),32);
        tracep->fullIData(oldp+1784,(0x29c05013U),32);
        tracep->fullIData(oldp+1785,(0x29e05013U),32);
        tracep->fullIData(oldp+1786,(0x29f05013U),32);
        tracep->fullIData(oldp+1787,(0x8001013U),32);
        tracep->fullIData(oldp+1788,(0x8101013U),32);
        tracep->fullIData(oldp+1789,(0x8201013U),32);
        tracep->fullIData(oldp+1790,(0x8301013U),32);
        tracep->fullIData(oldp+1791,(0x8401013U),32);
        tracep->fullIData(oldp+1792,(0x8601013U),32);
        tracep->fullIData(oldp+1793,(0x8701013U),32);
        tracep->fullIData(oldp+1794,(0x8801013U),32);
        tracep->fullIData(oldp+1795,(0x8c01013U),32);
        tracep->fullIData(oldp+1796,(0x8e01013U),32);
        tracep->fullIData(oldp+1797,(0x8f01013U),32);
        tracep->fullIData(oldp+1798,(0x8005013U),32);
        tracep->fullIData(oldp+1799,(0x8105013U),32);
        tracep->fullIData(oldp+1800,(0x8205013U),32);
        tracep->fullIData(oldp+1801,(0x8305013U),32);
        tracep->fullIData(oldp+1802,(0x8405013U),32);
        tracep->fullIData(oldp+1803,(0x8605013U),32);
        tracep->fullIData(oldp+1804,(0x8705013U),32);
        tracep->fullIData(oldp+1805,(0x8805013U),32);
        tracep->fullIData(oldp+1806,(0x8c05013U),32);
        tracep->fullIData(oldp+1807,(0x8e05013U),32);
        tracep->fullIData(oldp+1808,(0x8f05013U),32);
        tracep->fullIData(oldp+1809,(0x68005033U),32);
        tracep->fullIData(oldp+1810,(0x28005033U),32);
        tracep->fullIData(oldp+1811,(0x8001033U),32);
        tracep->fullIData(oldp+1812,(0x8005033U),32);
        tracep->fullIData(oldp+1813,(0x48006033U),32);
        tracep->fullIData(oldp+1814,(0x8006033U),32);
        tracep->fullIData(oldp+1815,(0x4005013U),32);
        tracep->fullIData(oldp+1816,(0x6001033U),32);
        tracep->fullIData(oldp+1817,(0x6005033U),32);
        tracep->fullIData(oldp+1818,(0x4001033U),32);
        tracep->fullIData(oldp+1819,(0x4005033U),32);
        tracep->fullIData(oldp+1820,(0x48007033U),32);
        tracep->fullIData(oldp+1821,(0xa001033U),32);
        tracep->fullIData(oldp+1822,(0xa002033U),32);
        tracep->fullIData(oldp+1823,(0xa003033U),32);
        tracep->fullIData(oldp+1824,(0x61001013U),32);
        tracep->fullIData(oldp+1825,(0x61101013U),32);
        tracep->fullIData(oldp+1826,(0x61201013U),32);
        tracep->fullIData(oldp+1827,(0x61801013U),32);
        tracep->fullIData(oldp+1828,(0x61901013U),32);
        tracep->fullIData(oldp+1829,(0x61a01013U),32);
        tracep->fullIData(oldp+1830,(3U),32);
        tracep->fullIData(oldp+1831,(0x23U),32);
        tracep->fullIData(oldp+1832,(0xfU),32);
        tracep->fullIData(oldp+1833,(0x100fU),32);
        tracep->fullSData(oldp+1834,(0U),16);
        tracep->fullSData(oldp+1835,(0x4000U),16);
        tracep->fullSData(oldp+1836,(0xc000U),16);
        tracep->fullSData(oldp+1837,(1U),16);
        tracep->fullSData(oldp+1838,(0x2001U),16);
        tracep->fullSData(oldp+1839,(0xa001U),16);
        tracep->fullSData(oldp+1840,(0x4001U),16);
        tracep->fullSData(oldp+1841,(0x6001U),16);
        tracep->fullSData(oldp+1842,(0xc001U),16);
        tracep->fullSData(oldp+1843,(0xe001U),16);
        tracep->fullSData(oldp+1844,(0x8001U),16);
        tracep->fullSData(oldp+1845,(0x8401U),16);
        tracep->fullSData(oldp+1846,(0x8801U),16);
        tracep->fullSData(oldp+1847,(0x8c01U),16);
        tracep->fullSData(oldp+1848,(0x8c21U),16);
        tracep->fullSData(oldp+1849,(0x8c41U),16);
        tracep->fullSData(oldp+1850,(0x8c61U),16);
        tracep->fullSData(oldp+1851,(2U),16);
        tracep->fullSData(oldp+1852,(0x4002U),16);
        tracep->fullSData(oldp+1853,(0xc002U),16);
        tracep->fullSData(oldp+1854,(0x8002U),16);
        tracep->fullSData(oldp+1855,(0x9002U),16);
        tracep->fullIData(oldp+1856,(0x10U),32);
        tracep->fullIData(oldp+1857,(8U),32);
        tracep->fullSData(oldp+1858,(0x3a0U),12);
        tracep->fullSData(oldp+1859,(0x3b0U),12);
        tracep->fullIData(oldp+1860,(7U),32);
        tracep->fullIData(oldp+1861,(0xbU),32);
        tracep->fullIData(oldp+1862,(0xcU),32);
        tracep->fullIData(oldp+1863,(0x11U),32);
        tracep->fullIData(oldp+1864,(0x15U),32);
        tracep->fullIData(oldp+1865,(0x1eU),32);
    }
}
