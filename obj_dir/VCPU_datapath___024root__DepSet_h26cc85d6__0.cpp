// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU_datapath.h for the primary calling header

#include "VCPU_datapath__pch.h"
#include "VCPU_datapath___024root.h"

void VCPU_datapath___024root___eval_act(VCPU_datapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath___024root___eval_act\n"); );
}

void VCPU_datapath___024root___eval_nba(VCPU_datapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath___024root___eval_nba\n"); );
}

void VCPU_datapath___024root___eval_triggers__act(VCPU_datapath___024root* vlSelf);

bool VCPU_datapath___024root___eval_phase__act(VCPU_datapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VCPU_datapath___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VCPU_datapath___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VCPU_datapath___024root___eval_phase__nba(VCPU_datapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VCPU_datapath___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU_datapath___024root___dump_triggers__nba(VCPU_datapath___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU_datapath___024root___dump_triggers__act(VCPU_datapath___024root* vlSelf);
#endif  // VL_DEBUG

void VCPU_datapath___024root___eval(VCPU_datapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VCPU_datapath___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/CPU_datapath.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VCPU_datapath___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/CPU_datapath.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VCPU_datapath___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VCPU_datapath___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VCPU_datapath___024root___eval_debug_assertions(VCPU_datapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
