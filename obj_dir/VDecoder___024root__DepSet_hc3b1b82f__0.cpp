// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoder.h for the primary calling header

#include "VDecoder__pch.h"
#include "VDecoder___024root.h"

VL_INLINE_OPT void VDecoder___024root___ico_sequent__TOP__0(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->instruction_type = 0U;
    if ((0x33U != (0x7fU & vlSelf->instruction))) {
        if ((0x13U == (0x7fU & vlSelf->instruction))) {
            vlSelf->instruction_type = 0U;
        }
    }
    vlSelf->alu_select = 0U;
    vlSelf->alu_src = 0U;
    vlSelf->write_enable = 0U;
    if ((0x33U == (0x7fU & vlSelf->instruction))) {
        vlSelf->alu_select = ((0x4000U & vlSelf->instruction)
                               ? ((0x2000U & vlSelf->instruction)
                                   ? ((0x1000U & vlSelf->instruction)
                                       ? 2U : 3U) : 
                                  ((0x1000U & vlSelf->instruction)
                                    ? ((0x40000000U 
                                        & vlSelf->instruction)
                                        ? 7U : 6U) : 4U))
                               : ((0x2000U & vlSelf->instruction)
                                   ? ((0x1000U & vlSelf->instruction)
                                       ? 9U : 8U) : 
                                  ((0x1000U & vlSelf->instruction)
                                    ? 5U : ((0x40000000U 
                                             & vlSelf->instruction)
                                             ? 1U : 0U))));
        vlSelf->alu_src = 0U;
        vlSelf->write_enable = 1U;
    } else if ((0x13U == (0x7fU & vlSelf->instruction))) {
        vlSelf->alu_select = ((0x4000U & vlSelf->instruction)
                               ? ((0x2000U & vlSelf->instruction)
                                   ? ((0x1000U & vlSelf->instruction)
                                       ? 2U : 3U) : 
                                  ((0x1000U & vlSelf->instruction)
                                    ? ((0x40000000U 
                                        & vlSelf->instruction)
                                        ? 6U : 7U) : 4U))
                               : ((0x2000U & vlSelf->instruction)
                                   ? ((0x1000U & vlSelf->instruction)
                                       ? 9U : 8U) : 
                                  ((0x1000U & vlSelf->instruction)
                                    ? 5U : 0U)));
        vlSelf->alu_src = 1U;
        vlSelf->write_enable = 1U;
    }
    vlSelf->rs1_addr = (0x1fU & (vlSelf->instruction 
                                 >> 0xfU));
    vlSelf->rs2_addr = (0x1fU & (vlSelf->instruction 
                                 >> 0x14U));
    vlSelf->write_addr = (0x1fU & (vlSelf->instruction 
                                   >> 7U));
}

void VDecoder___024root___eval_ico(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VDecoder___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VDecoder___024root___eval_triggers__ico(VDecoder___024root* vlSelf);

bool VDecoder___024root___eval_phase__ico(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VDecoder___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VDecoder___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VDecoder___024root___eval_act(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_act\n"); );
}

void VDecoder___024root___eval_nba(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_nba\n"); );
}

void VDecoder___024root___eval_triggers__act(VDecoder___024root* vlSelf);

bool VDecoder___024root___eval_phase__act(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VDecoder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VDecoder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VDecoder___024root___eval_phase__nba(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VDecoder___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecoder___024root___dump_triggers__ico(VDecoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VDecoder___024root___dump_triggers__nba(VDecoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VDecoder___024root___dump_triggers__act(VDecoder___024root* vlSelf);
#endif  // VL_DEBUG

void VDecoder___024root___eval(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval\n"); );
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
            VDecoder___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/Decoder.sv", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VDecoder___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VDecoder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/Decoder.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VDecoder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/Decoder.sv", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VDecoder___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VDecoder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VDecoder___024root___eval_debug_assertions(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
