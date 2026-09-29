// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU_tb__Syms.h"


void VALU_tb___024root__trace_chg_0_sub_0(VALU_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VALU_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root__trace_chg_0\n"); );
    // Init
    VALU_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_tb___024root*>(voidSelf);
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VALU_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VALU_tb___024root__trace_chg_0_sub_0(VALU_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->ALU_tb__DOT__a),32);
        bufp->chgIData(oldp+1,(vlSelf->ALU_tb__DOT__b),32);
        bufp->chgCData(oldp+2,(vlSelf->ALU_tb__DOT__alu_select),4);
        bufp->chgIData(oldp+3,(vlSelf->ALU_tb__DOT__pass_count),32);
        bufp->chgIData(oldp+4,(vlSelf->ALU_tb__DOT__fail_count),32);
    }
    bufp->chgIData(oldp+5,(vlSelf->ALU_tb__DOT__result),32);
    bufp->chgBit(oldp+6,((0U == vlSelf->ALU_tb__DOT__result)));
}

void VALU_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root__trace_cleanup\n"); );
    // Init
    VALU_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_tb___024root*>(voidSelf);
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
