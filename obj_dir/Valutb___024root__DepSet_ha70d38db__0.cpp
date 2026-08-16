// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valutb.h for the primary calling header

#include "Valutb__pch.h"
#include "Valutb___024root.h"

VlCoroutine Valutb___024root___eval_initial__TOP__Vtiming__0(Valutb___024root* vlSelf);

void Valutb___024root___eval_initial(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval_initial\n"); );
    // Body
    Valutb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Valutb___024root___eval_initial__TOP__Vtiming__0(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->alutb__DOT__a = 0xfU;
    vlSelf->alutb__DOT__b = 9U;
    vlSelf->alutb__DOT__alu_select = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       28);
    if ((0x18U != vlSelf->alutb__DOT__result)) {
        VL_WRITEF("Add failed, exepcted 21, got %10# \n",
                  32,vlSelf->alutb__DOT__result);
    } else {
        VL_WRITEF("Add passed\n");
    }
    VL_FINISH_MT("testbench/ALU_tb.sv", 35, "");
}

VL_INLINE_OPT void Valutb___024root___act_sequent__TOP__0(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->alutb__DOT__result = ((8U & (IData)(vlSelf->alutb__DOT__alu_select))
                                   ? 0U : ((4U & (IData)(vlSelf->alutb__DOT__alu_select))
                                            ? 0U : 
                                           ((2U & (IData)(vlSelf->alutb__DOT__alu_select))
                                             ? ((1U 
                                                 & (IData)(vlSelf->alutb__DOT__alu_select))
                                                 ? 
                                                (vlSelf->alutb__DOT__a 
                                                 | vlSelf->alutb__DOT__b)
                                                 : 
                                                (vlSelf->alutb__DOT__a 
                                                 & vlSelf->alutb__DOT__b))
                                             : ((1U 
                                                 & (IData)(vlSelf->alutb__DOT__alu_select))
                                                 ? 
                                                (vlSelf->alutb__DOT__a 
                                                 - vlSelf->alutb__DOT__b)
                                                 : 
                                                (vlSelf->alutb__DOT__a 
                                                 + vlSelf->alutb__DOT__b)))));
}

void Valutb___024root___eval_act(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Valutb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Valutb___024root___eval_nba(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Valutb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Valutb___024root___timing_resume(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Valutb___024root___eval_triggers__act(Valutb___024root* vlSelf);

bool Valutb___024root___eval_phase__act(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Valutb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Valutb___024root___timing_resume(vlSelf);
        Valutb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Valutb___024root___eval_phase__nba(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Valutb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valutb___024root___dump_triggers__nba(Valutb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valutb___024root___dump_triggers__act(Valutb___024root* vlSelf);
#endif  // VL_DEBUG

void Valutb___024root___eval(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Valutb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/ALU_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Valutb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/ALU_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Valutb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Valutb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Valutb___024root___eval_debug_assertions(Valutb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valutb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valutb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
