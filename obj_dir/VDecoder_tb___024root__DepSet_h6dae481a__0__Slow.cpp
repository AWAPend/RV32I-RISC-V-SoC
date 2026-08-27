// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoder_tb.h for the primary calling header

#include "VDecoder_tb__pch.h"
#include "VDecoder_tb___024root.h"

VL_ATTR_COLD void VDecoder_tb___024root___eval_static__TOP(VDecoder_tb___024root* vlSelf);

VL_ATTR_COLD void VDecoder_tb___024root___eval_static(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_static\n"); );
    // Body
    VDecoder_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void VDecoder_tb___024root___eval_static__TOP(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->Decoder_tb__DOT__pass_count = 0U;
    vlSelf->Decoder_tb__DOT__fail_count = 0U;
}

VL_ATTR_COLD void VDecoder_tb___024root___eval_final(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecoder_tb___024root___dump_triggers__stl(VDecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VDecoder_tb___024root___eval_phase__stl(VDecoder_tb___024root* vlSelf);

VL_ATTR_COLD void VDecoder_tb___024root___eval_settle(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VDecoder_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench/Decoder_tb.sv", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VDecoder_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecoder_tb___024root___dump_triggers__stl(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VDecoder_tb___024root___act_comb__TOP__0(VDecoder_tb___024root* vlSelf);

VL_ATTR_COLD void VDecoder_tb___024root___eval_stl(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VDecoder_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VDecoder_tb___024root___eval_triggers__stl(VDecoder_tb___024root* vlSelf);

VL_ATTR_COLD bool VDecoder_tb___024root___eval_phase__stl(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VDecoder_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VDecoder_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
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
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge Decoder_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge Decoder_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VDecoder_tb___024root___ctor_var_reset(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Decoder_tb__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->Decoder_tb__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->Decoder_tb__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->Decoder_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->Decoder_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->Decoder_tb__DOT__pass_count = 0;
    vlSelf->Decoder_tb__DOT__fail_count = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vdlyvval__Decoder_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__Decoder_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__Decoder_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
}
