// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VImm_generator.h for the primary calling header

#include "VImm_generator__pch.h"
#include "VImm_generator___024root.h"

VL_INLINE_OPT void VImm_generator___024root___ico_sequent__TOP__0(VImm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->imm_out = ((4U & (IData)(vlSelf->instruction_type))
                        ? ((2U & (IData)(vlSelf->instruction_type))
                            ? 0U : ((1U & (IData)(vlSelf->instruction_type))
                                     ? 0U : (((- (IData)(
                                                         (vlSelf->instruction 
                                                          >> 0x1fU))) 
                                              << 0x15U) 
                                             | ((0x100000U 
                                                 & (vlSelf->instruction 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->instruction) 
                                                   | ((0x800U 
                                                       & (vlSelf->instruction 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->instruction 
                                                            >> 0x14U))))))))
                        : ((2U & (IData)(vlSelf->instruction_type))
                            ? ((1U & (IData)(vlSelf->instruction_type))
                                ? (0xfffff000U & vlSelf->instruction)
                                : (((- (IData)((vlSelf->instruction 
                                                >> 0x1fU))) 
                                    << 0xdU) | ((0x1000U 
                                                 & (vlSelf->instruction 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->instruction 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->instruction 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->instruction 
                                                            >> 7U)))))))
                            : ((1U & (IData)(vlSelf->instruction_type))
                                ? (((- (IData)((vlSelf->instruction 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->instruction 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->instruction 
                                                      >> 7U))))
                                : (((- (IData)((vlSelf->instruction 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->instruction 
                                                >> 0x14U)))));
}

void VImm_generator___024root___eval_ico(VImm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VImm_generator___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VImm_generator___024root___eval_triggers__ico(VImm_generator___024root* vlSelf);

bool VImm_generator___024root___eval_phase__ico(VImm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VImm_generator___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VImm_generator___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VImm_generator___024root___eval_act(VImm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator___024root___eval_act\n"); );
}

void VImm_generator___024root___eval_nba(VImm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator___024root___eval_nba\n"); );
}

void VImm_generator___024root___eval_triggers__act(VImm_generator___024root* vlSelf);

bool VImm_generator___024root___eval_phase__act(VImm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VImm_generator___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VImm_generator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VImm_generator___024root___eval_phase__nba(VImm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VImm_generator___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VImm_generator___024root___dump_triggers__ico(VImm_generator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VImm_generator___024root___dump_triggers__nba(VImm_generator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VImm_generator___024root___dump_triggers__act(VImm_generator___024root* vlSelf);
#endif  // VL_DEBUG

void VImm_generator___024root___eval(VImm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator___024root___eval\n"); );
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
            VImm_generator___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/Imm_generator.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VImm_generator___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VImm_generator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/Imm_generator.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VImm_generator___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/Imm_generator.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VImm_generator___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VImm_generator___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VImm_generator___024root___eval_debug_assertions(VImm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->instruction_type & 0xf8U))) {
        Verilated::overWidthError("instruction_type");}
}
#endif  // VL_DEBUG
