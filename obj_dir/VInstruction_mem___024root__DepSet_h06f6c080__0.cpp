// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstruction_mem.h for the primary calling header

#include "VInstruction_mem__pch.h"
#include "VInstruction_mem___024root.h"

VL_INLINE_OPT void VInstruction_mem___024root___ico_sequent__TOP__0(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->instruction_data = vlSelf->Instruction_mem__DOT__register
        [(0x3ffU & (vlSelf->pc_addr >> 2U))];
}

void VInstruction_mem___024root___eval_ico(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VInstruction_mem___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VInstruction_mem___024root___eval_triggers__ico(VInstruction_mem___024root* vlSelf);

bool VInstruction_mem___024root___eval_phase__ico(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VInstruction_mem___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VInstruction_mem___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VInstruction_mem___024root___eval_act(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___eval_act\n"); );
}

void VInstruction_mem___024root___eval_nba(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___eval_nba\n"); );
}

void VInstruction_mem___024root___eval_triggers__act(VInstruction_mem___024root* vlSelf);

bool VInstruction_mem___024root___eval_phase__act(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VInstruction_mem___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VInstruction_mem___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VInstruction_mem___024root___eval_phase__nba(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VInstruction_mem___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VInstruction_mem___024root___dump_triggers__ico(VInstruction_mem___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VInstruction_mem___024root___dump_triggers__nba(VInstruction_mem___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VInstruction_mem___024root___dump_triggers__act(VInstruction_mem___024root* vlSelf);
#endif  // VL_DEBUG

void VInstruction_mem___024root___eval(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VInstruction_mem___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/Instruction_mem.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VInstruction_mem___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VInstruction_mem___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/Instruction_mem.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VInstruction_mem___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/Instruction_mem.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VInstruction_mem___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VInstruction_mem___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VInstruction_mem___024root___eval_debug_assertions(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
