// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VData_memory_tb__Syms.h"


void VData_memory_tb___024root__trace_chg_0_sub_0(VData_memory_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VData_memory_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root__trace_chg_0\n"); );
    // Init
    VData_memory_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VData_memory_tb___024root*>(voidSelf);
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VData_memory_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VData_memory_tb___024root__trace_chg_0_sub_0(VData_memory_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->Data_memory_tb__DOT__address),32);
        bufp->chgIData(oldp+1,(vlSelf->Data_memory_tb__DOT__write_data),32);
        bufp->chgBit(oldp+2,(vlSelf->Data_memory_tb__DOT__read_mem));
        bufp->chgBit(oldp+3,(vlSelf->Data_memory_tb__DOT__write_mem));
        bufp->chgCData(oldp+4,(vlSelf->Data_memory_tb__DOT__funct3),3);
        bufp->chgIData(oldp+5,(vlSelf->Data_memory_tb__DOT__pass_count),32);
        bufp->chgIData(oldp+6,(vlSelf->Data_memory_tb__DOT__fail_count),32);
    }
    bufp->chgBit(oldp+7,(vlSelf->Data_memory_tb__DOT__clk));
    bufp->chgIData(oldp+8,(vlSelf->Data_memory_tb__DOT__read_data),32);
}

void VData_memory_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root__trace_cleanup\n"); );
    // Init
    VData_memory_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VData_memory_tb___024root*>(voidSelf);
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
