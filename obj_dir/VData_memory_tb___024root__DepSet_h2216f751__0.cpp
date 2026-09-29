// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VData_memory_tb.h for the primary calling header

#include "VData_memory_tb__pch.h"
#include "VData_memory_tb__Syms.h"
#include "VData_memory_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VData_memory_tb___024root___dump_triggers__act(VData_memory_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VData_memory_tb___024root___eval_triggers__act(VData_memory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->Data_memory_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Data_memory_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__Data_memory_tb__DOT__clk__0 
        = vlSelf->Data_memory_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VData_memory_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
