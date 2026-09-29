// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU_datapath_tb__Syms.h"


void VCPU_datapath_tb___024root__trace_chg_0_sub_0(VCPU_datapath_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCPU_datapath_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root__trace_chg_0\n"); );
    // Init
    VCPU_datapath_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU_datapath_tb___024root*>(voidSelf);
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCPU_datapath_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VCPU_datapath_tb___024root__trace_chg_0_sub_0(VCPU_datapath_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__pc_addr),32);
        bufp->chgIData(oldp+1,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction),32);
        bufp->chgIData(oldp+2,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__imm_out),32);
        bufp->chgIData(oldp+3,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__rs1_data),32);
        bufp->chgIData(oldp+4,(((0U == (0x1fU & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                                 >> 0x14U)))
                                 ? 0U : vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register
                                [(0x1fU & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                           >> 0x14U))])),32);
        bufp->chgIData(oldp+5,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__result),32);
        bufp->chgCData(oldp+6,((0x1fU & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+8,((0x1fU & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                         >> 7U))),5);
        bufp->chgCData(oldp+9,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__alu_select),4);
        bufp->chgCData(oldp+10,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction_type),3);
        bufp->chgBit(oldp+11,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__alu_src));
        bufp->chgBit(oldp+12,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__write_enable));
        bufp->chgBit(oldp+13,((0U == vlSelf->CPU_datapath_tb__DOT__dut__DOT__result)));
        bufp->chgIData(oldp+14,(vlSelf->CPU_datapath_tb__DOT__dut__DOT____Vcellinp__alu_dut__b),32);
        bufp->chgCData(oldp+15,((0x7fU & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)),7);
        bufp->chgCData(oldp+16,((7U & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+17,((vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+18,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0]),32);
        bufp->chgIData(oldp+19,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[1]),32);
        bufp->chgIData(oldp+20,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[2]),32);
        bufp->chgIData(oldp+21,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[3]),32);
        bufp->chgIData(oldp+22,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[4]),32);
        bufp->chgIData(oldp+23,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[5]),32);
        bufp->chgIData(oldp+24,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[6]),32);
        bufp->chgIData(oldp+25,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[7]),32);
        bufp->chgIData(oldp+26,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[8]),32);
        bufp->chgIData(oldp+27,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[9]),32);
        bufp->chgIData(oldp+28,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[10]),32);
        bufp->chgIData(oldp+29,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[11]),32);
        bufp->chgIData(oldp+30,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[12]),32);
        bufp->chgIData(oldp+31,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[13]),32);
        bufp->chgIData(oldp+32,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[14]),32);
        bufp->chgIData(oldp+33,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[15]),32);
        bufp->chgIData(oldp+34,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[16]),32);
        bufp->chgIData(oldp+35,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[17]),32);
        bufp->chgIData(oldp+36,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[18]),32);
        bufp->chgIData(oldp+37,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[19]),32);
        bufp->chgIData(oldp+38,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[20]),32);
        bufp->chgIData(oldp+39,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[21]),32);
        bufp->chgIData(oldp+40,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[22]),32);
        bufp->chgIData(oldp+41,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[23]),32);
        bufp->chgIData(oldp+42,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[24]),32);
        bufp->chgIData(oldp+43,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[25]),32);
        bufp->chgIData(oldp+44,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[26]),32);
        bufp->chgIData(oldp+45,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[27]),32);
        bufp->chgIData(oldp+46,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[28]),32);
        bufp->chgIData(oldp+47,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[29]),32);
        bufp->chgIData(oldp+48,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[30]),32);
        bufp->chgIData(oldp+49,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[31]),32);
        bufp->chgIData(oldp+50,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+51,(vlSelf->CPU_datapath_tb__DOT__clk));
    bufp->chgBit(oldp+52,(vlSelf->CPU_datapath_tb__DOT__rst_n));
    bufp->chgIData(oldp+53,(vlSelf->CPU_datapath_tb__DOT__unnamedblk1__DOT__i),32);
}

void VCPU_datapath_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root__trace_cleanup\n"); );
    // Init
    VCPU_datapath_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU_datapath_tb___024root*>(voidSelf);
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
