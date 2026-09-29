// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstruction_mem.h for the primary calling header

#include "VInstruction_mem__pch.h"
#include "VInstruction_mem___024root.h"

VL_ATTR_COLD void VInstruction_mem___024root___eval_static(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___eval_static\n"); );
}

VL_ATTR_COLD void VInstruction_mem___024root___eval_initial__TOP(VInstruction_mem___024root* vlSelf);

VL_ATTR_COLD void VInstruction_mem___024root___eval_initial(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___eval_initial\n"); );
    // Body
    VInstruction_mem___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VInstruction_mem___024root___eval_initial__TOP(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___eval_initial__TOP\n"); );
    // Body
    VL_READMEM_N(true, 32, 1024, 0, std::string{"RV32I-RISCV-SoC/software/Assembly_test.hex"}
                 ,  &(vlSelf->Instruction_mem__DOT__register)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VInstruction_mem___024root___eval_final(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VInstruction_mem___024root___dump_triggers__stl(VInstruction_mem___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VInstruction_mem___024root___eval_phase__stl(VInstruction_mem___024root* vlSelf);

VL_ATTR_COLD void VInstruction_mem___024root___eval_settle(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___eval_settle\n"); );
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
            VInstruction_mem___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/Instruction_mem.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VInstruction_mem___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VInstruction_mem___024root___dump_triggers__stl(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VInstruction_mem___024root___ico_sequent__TOP__0(VInstruction_mem___024root* vlSelf);

VL_ATTR_COLD void VInstruction_mem___024root___eval_stl(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VInstruction_mem___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VInstruction_mem___024root___eval_triggers__stl(VInstruction_mem___024root* vlSelf);

VL_ATTR_COLD bool VInstruction_mem___024root___eval_phase__stl(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VInstruction_mem___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VInstruction_mem___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VInstruction_mem___024root___dump_triggers__ico(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VInstruction_mem___024root___dump_triggers__act(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VInstruction_mem___024root___dump_triggers__nba(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VInstruction_mem___024root___ctor_var_reset(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->pc_addr = VL_RAND_RESET_I(32);
    vlSelf->instruction_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->Instruction_mem__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
}
