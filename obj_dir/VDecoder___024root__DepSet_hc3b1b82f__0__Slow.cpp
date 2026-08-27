// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoder.h for the primary calling header

#include "VDecoder__pch.h"
#include "VDecoder___024root.h"

VL_ATTR_COLD void VDecoder___024root___eval_static(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_static\n"); );
}

VL_ATTR_COLD void VDecoder___024root___eval_initial__TOP(VDecoder___024root* vlSelf);

VL_ATTR_COLD void VDecoder___024root___eval_initial(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_initial\n"); );
    // Body
    VDecoder___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VDecoder___024root___eval_initial__TOP(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->read_mem = 0U;
    vlSelf->write_mem = 0U;
    vlSelf->writeback_to_reg = 0U;
    vlSelf->branch = 0U;
    vlSelf->jump = 0U;
}

VL_ATTR_COLD void VDecoder___024root___eval_final(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecoder___024root___dump_triggers__stl(VDecoder___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VDecoder___024root___eval_phase__stl(VDecoder___024root* vlSelf);

VL_ATTR_COLD void VDecoder___024root___eval_settle(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_settle\n"); );
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
            VDecoder___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/Decoder.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VDecoder___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecoder___024root___dump_triggers__stl(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VDecoder___024root___ico_sequent__TOP__0(VDecoder___024root* vlSelf);

VL_ATTR_COLD void VDecoder___024root___eval_stl(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VDecoder___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VDecoder___024root___eval_triggers__stl(VDecoder___024root* vlSelf);

VL_ATTR_COLD bool VDecoder___024root___eval_phase__stl(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VDecoder___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VDecoder___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecoder___024root___dump_triggers__ico(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecoder___024root___dump_triggers__act(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecoder___024root___dump_triggers__nba(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VDecoder___024root___ctor_var_reset(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->instruction = VL_RAND_RESET_I(32);
    vlSelf->instruction_type = VL_RAND_RESET_I(3);
    vlSelf->alu_select = VL_RAND_RESET_I(4);
    vlSelf->rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->write_addr = VL_RAND_RESET_I(5);
    vlSelf->alu_src = VL_RAND_RESET_I(1);
    vlSelf->write_enable = VL_RAND_RESET_I(1);
    vlSelf->read_mem = VL_RAND_RESET_I(1);
    vlSelf->write_mem = VL_RAND_RESET_I(1);
    vlSelf->writeback_to_reg = VL_RAND_RESET_I(1);
    vlSelf->branch = VL_RAND_RESET_I(1);
    vlSelf->jump = VL_RAND_RESET_I(1);
}
