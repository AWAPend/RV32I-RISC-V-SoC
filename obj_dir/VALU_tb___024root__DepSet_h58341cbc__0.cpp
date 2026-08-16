// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_tb.h for the primary calling header

#include "VALU_tb__pch.h"
#include "VALU_tb___024root.h"

VlCoroutine VALU_tb___024root___eval_initial__TOP__Vtiming__0(VALU_tb___024root* vlSelf);

void VALU_tb___024root___eval_initial(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_initial\n"); );
    // Body
    VALU_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine VALU_tb___024root___eval_initial__TOP__Vtiming__0(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->ALU_tb__DOT__a = 0xfU;
    vlSelf->ALU_tb__DOT__b = 9U;
    vlSelf->ALU_tb__DOT__alu_select = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       27);
    if ((0x18U != vlSelf->ALU_tb__DOT__result)) {
        VL_WRITEF("Add failed, exepcted 21, got %10# \n",
                  32,vlSelf->ALU_tb__DOT__result);
    } else {
        VL_WRITEF("Add passed, zero flag = %b\n",1,
                  (0U == vlSelf->ALU_tb__DOT__result));
    }
    VL_WRITEF("Words here for fun\n");
    VL_FINISH_MT("testbench/ALU_tb.sv", 36, "");
}

VL_INLINE_OPT void VALU_tb___024root___act_sequent__TOP__0(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->ALU_tb__DOT__result = ((8U & (IData)(vlSelf->ALU_tb__DOT__alu_select))
                                    ? 0U : ((4U & (IData)(vlSelf->ALU_tb__DOT__alu_select))
                                             ? 0U : 
                                            ((2U & (IData)(vlSelf->ALU_tb__DOT__alu_select))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ALU_tb__DOT__alu_select))
                                                  ? 
                                                 (vlSelf->ALU_tb__DOT__a 
                                                  | vlSelf->ALU_tb__DOT__b)
                                                  : 
                                                 (vlSelf->ALU_tb__DOT__a 
                                                  & vlSelf->ALU_tb__DOT__b))
                                              : ((1U 
                                                  & (IData)(vlSelf->ALU_tb__DOT__alu_select))
                                                  ? 
                                                 (vlSelf->ALU_tb__DOT__a 
                                                  - vlSelf->ALU_tb__DOT__b)
                                                  : 
                                                 (vlSelf->ALU_tb__DOT__a 
                                                  + vlSelf->ALU_tb__DOT__b)))));
}

void VALU_tb___024root___eval_act(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VALU_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VALU_tb___024root___eval_nba(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VALU_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VALU_tb___024root___timing_resume(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VALU_tb___024root___eval_triggers__act(VALU_tb___024root* vlSelf);

bool VALU_tb___024root___eval_phase__act(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VALU_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VALU_tb___024root___timing_resume(vlSelf);
        VALU_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VALU_tb___024root___eval_phase__nba(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VALU_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU_tb___024root___dump_triggers__nba(VALU_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU_tb___024root___dump_triggers__act(VALU_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VALU_tb___024root___eval(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VALU_tb___024root___dump_triggers__nba(vlSelf);
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
                VALU_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/ALU_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VALU_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VALU_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VALU_tb___024root___eval_debug_assertions(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
