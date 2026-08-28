// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC_tb.h for the primary calling header

#include "VPC_tb__pch.h"
#include "VPC_tb___024root.h"

VL_ATTR_COLD void VPC_tb___024root___eval_static__TOP(VPC_tb___024root* vlSelf);

VL_ATTR_COLD void VPC_tb___024root___eval_static(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___eval_static\n"); );
    // Body
    VPC_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void VPC_tb___024root___eval_static__TOP(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->PC_tb__DOT__pass_count = 0U;
    vlSelf->PC_tb__DOT__fail_count = 0U;
}

VL_ATTR_COLD void VPC_tb___024root___eval_final(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void VPC_tb___024root___eval_settle(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPC_tb___024root___dump_triggers__act(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge PC_tb.clk or negedge PC_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge PC_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPC_tb___024root___dump_triggers__nba(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge PC_tb.clk or negedge PC_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge PC_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPC_tb___024root___ctor_var_reset(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->PC_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->PC_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->PC_tb__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->PC_tb__DOT__pc_addr = VL_RAND_RESET_I(32);
    vlSelf->PC_tb__DOT__branch_target = VL_RAND_RESET_I(32);
    vlSelf->PC_tb__DOT__pass_count = 0;
    vlSelf->PC_tb__DOT__fail_count = 0;
    vlSelf->__Vdlyvval__PC_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__PC_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__PC_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__PC_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
}
