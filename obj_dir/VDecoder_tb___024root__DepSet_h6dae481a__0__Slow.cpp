// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoder_tb.h for the primary calling header

#include "VDecoder_tb__pch.h"
#include "VDecoder_tb___024root.h"

VL_ATTR_COLD void VDecoder_tb___024root___eval_static(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void VDecoder_tb___024root___eval_initial(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VDecoder_tb___024root___eval_final(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void VDecoder_tb___024root___eval_settle(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecoder_tb___024root___dump_triggers__act(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecoder_tb___024root___dump_triggers__nba(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VDecoder_tb___024root___ctor_var_reset(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___ctor_var_reset\n"); );
}
