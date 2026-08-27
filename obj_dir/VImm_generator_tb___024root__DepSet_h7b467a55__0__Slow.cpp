// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VImm_generator_tb.h for the primary calling header

#include "VImm_generator_tb__pch.h"
#include "VImm_generator_tb___024root.h"

VL_ATTR_COLD void VImm_generator_tb___024root___eval_static__TOP(VImm_generator_tb___024root* vlSelf);

VL_ATTR_COLD void VImm_generator_tb___024root___eval_static(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___eval_static\n"); );
    // Body
    VImm_generator_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void VImm_generator_tb___024root___eval_static__TOP(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->Imm_generator_tb__DOT__pass_count = 0U;
    vlSelf->Imm_generator_tb__DOT__fail_count = 0U;
}

VL_ATTR_COLD void VImm_generator_tb___024root___eval_final(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VImm_generator_tb___024root___dump_triggers__stl(VImm_generator_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VImm_generator_tb___024root___eval_phase__stl(VImm_generator_tb___024root* vlSelf);

VL_ATTR_COLD void VImm_generator_tb___024root___eval_settle(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___eval_settle\n"); );
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
            VImm_generator_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench/Imm_generator_tb.sv", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VImm_generator_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VImm_generator_tb___024root___dump_triggers__stl(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VImm_generator_tb___024root___act_sequent__TOP__0(VImm_generator_tb___024root* vlSelf);

VL_ATTR_COLD void VImm_generator_tb___024root___eval_stl(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VImm_generator_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VImm_generator_tb___024root___eval_triggers__stl(VImm_generator_tb___024root* vlSelf);

VL_ATTR_COLD bool VImm_generator_tb___024root___eval_phase__stl(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VImm_generator_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VImm_generator_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VImm_generator_tb___024root___dump_triggers__act(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VImm_generator_tb___024root___dump_triggers__nba(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VImm_generator_tb___024root___ctor_var_reset(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Imm_generator_tb__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->Imm_generator_tb__DOT__instruction_type = VL_RAND_RESET_I(3);
    vlSelf->Imm_generator_tb__DOT__imm_out = VL_RAND_RESET_I(32);
    vlSelf->Imm_generator_tb__DOT__pass_count = 0;
    vlSelf->Imm_generator_tb__DOT__fail_count = 0;
    }
