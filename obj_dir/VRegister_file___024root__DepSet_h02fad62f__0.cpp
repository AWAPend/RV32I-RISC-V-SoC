// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister_file.h for the primary calling header

#include "VRegister_file__pch.h"
#include "VRegister_file___024root.h"

VL_INLINE_OPT void VRegister_file___024root___ico_sequent__TOP__0(VRegister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->rs1_data = ((0U == (IData)(vlSelf->rs1_addr))
                         ? 0U : vlSelf->Register_file__DOT__register
                        [vlSelf->rs1_addr]);
    vlSelf->rs2_data = ((0U == (IData)(vlSelf->rs2_addr))
                         ? 0U : vlSelf->Register_file__DOT__register
                        [vlSelf->rs2_addr]);
}

void VRegister_file___024root___eval_ico(VRegister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VRegister_file___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VRegister_file___024root___eval_triggers__ico(VRegister_file___024root* vlSelf);

bool VRegister_file___024root___eval_phase__ico(VRegister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VRegister_file___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VRegister_file___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VRegister_file___024root___eval_act(VRegister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file___024root___eval_act\n"); );
}

VL_INLINE_OPT void VRegister_file___024root___nba_sequent__TOP__0(VRegister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__Register_file__DOT__register__v0;
    __Vdlyvdim0__Register_file__DOT__register__v0 = 0;
    IData/*31:0*/ __Vdlyvval__Register_file__DOT__register__v0;
    __Vdlyvval__Register_file__DOT__register__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Register_file__DOT__register__v0;
    __Vdlyvset__Register_file__DOT__register__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Register_file__DOT__register__v1;
    __Vdlyvset__Register_file__DOT__register__v1 = 0;
    // Body
    __Vdlyvset__Register_file__DOT__register__v0 = 0U;
    __Vdlyvset__Register_file__DOT__register__v1 = 0U;
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->write_enable) & (0U != (IData)(vlSelf->write_addr)))) {
            __Vdlyvval__Register_file__DOT__register__v0 
                = vlSelf->write_data;
            __Vdlyvset__Register_file__DOT__register__v0 = 1U;
            __Vdlyvdim0__Register_file__DOT__register__v0 
                = vlSelf->write_addr;
        }
    } else {
        __Vdlyvset__Register_file__DOT__register__v1 = 1U;
    }
    if (__Vdlyvset__Register_file__DOT__register__v0) {
        vlSelf->Register_file__DOT__register[__Vdlyvdim0__Register_file__DOT__register__v0] 
            = __Vdlyvval__Register_file__DOT__register__v0;
    }
    if (__Vdlyvset__Register_file__DOT__register__v1) {
        vlSelf->Register_file__DOT__register[0U] = 0U;
        vlSelf->Register_file__DOT__register[1U] = 0U;
        vlSelf->Register_file__DOT__register[2U] = 0U;
        vlSelf->Register_file__DOT__register[3U] = 0U;
        vlSelf->Register_file__DOT__register[4U] = 0U;
        vlSelf->Register_file__DOT__register[5U] = 0U;
        vlSelf->Register_file__DOT__register[6U] = 0U;
        vlSelf->Register_file__DOT__register[7U] = 0U;
        vlSelf->Register_file__DOT__register[8U] = 0U;
        vlSelf->Register_file__DOT__register[9U] = 0U;
        vlSelf->Register_file__DOT__register[0xaU] = 0U;
        vlSelf->Register_file__DOT__register[0xbU] = 0U;
        vlSelf->Register_file__DOT__register[0xcU] = 0U;
        vlSelf->Register_file__DOT__register[0xdU] = 0U;
        vlSelf->Register_file__DOT__register[0xeU] = 0U;
        vlSelf->Register_file__DOT__register[0xfU] = 0U;
        vlSelf->Register_file__DOT__register[0x10U] = 0U;
        vlSelf->Register_file__DOT__register[0x11U] = 0U;
        vlSelf->Register_file__DOT__register[0x12U] = 0U;
        vlSelf->Register_file__DOT__register[0x13U] = 0U;
        vlSelf->Register_file__DOT__register[0x14U] = 0U;
        vlSelf->Register_file__DOT__register[0x15U] = 0U;
        vlSelf->Register_file__DOT__register[0x16U] = 0U;
        vlSelf->Register_file__DOT__register[0x17U] = 0U;
        vlSelf->Register_file__DOT__register[0x18U] = 0U;
        vlSelf->Register_file__DOT__register[0x19U] = 0U;
        vlSelf->Register_file__DOT__register[0x1aU] = 0U;
        vlSelf->Register_file__DOT__register[0x1bU] = 0U;
        vlSelf->Register_file__DOT__register[0x1cU] = 0U;
        vlSelf->Register_file__DOT__register[0x1dU] = 0U;
        vlSelf->Register_file__DOT__register[0x1eU] = 0U;
        vlSelf->Register_file__DOT__register[0x1fU] = 0U;
    }
    vlSelf->rs1_data = ((0U == (IData)(vlSelf->rs1_addr))
                         ? 0U : vlSelf->Register_file__DOT__register
                        [vlSelf->rs1_addr]);
    vlSelf->rs2_data = ((0U == (IData)(vlSelf->rs2_addr))
                         ? 0U : vlSelf->Register_file__DOT__register
                        [vlSelf->rs2_addr]);
}

void VRegister_file___024root___eval_nba(VRegister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRegister_file___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VRegister_file___024root___eval_triggers__act(VRegister_file___024root* vlSelf);

bool VRegister_file___024root___eval_phase__act(VRegister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VRegister_file___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VRegister_file___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VRegister_file___024root___eval_phase__nba(VRegister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VRegister_file___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegister_file___024root___dump_triggers__ico(VRegister_file___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRegister_file___024root___dump_triggers__nba(VRegister_file___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRegister_file___024root___dump_triggers__act(VRegister_file___024root* vlSelf);
#endif  // VL_DEBUG

void VRegister_file___024root___eval(VRegister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file___024root___eval\n"); );
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
            VRegister_file___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/Register_file.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VRegister_file___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VRegister_file___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/Register_file.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VRegister_file___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/Register_file.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VRegister_file___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VRegister_file___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VRegister_file___024root___eval_debug_assertions(VRegister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->rs1_addr & 0xe0U))) {
        Verilated::overWidthError("rs1_addr");}
    if (VL_UNLIKELY((vlSelf->rs2_addr & 0xe0U))) {
        Verilated::overWidthError("rs2_addr");}
    if (VL_UNLIKELY((vlSelf->write_addr & 0xe0U))) {
        Verilated::overWidthError("write_addr");}
    if (VL_UNLIKELY((vlSelf->write_enable & 0xfeU))) {
        Verilated::overWidthError("write_enable");}
}
#endif  // VL_DEBUG
