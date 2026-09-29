// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU_datapath.h for the primary calling header

#include "VCPU_datapath__pch.h"
#include "VCPU_datapath___024root.h"

VL_ATTR_COLD void VCPU_datapath___024root___eval_static(VCPU_datapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath___024root___eval_static\n"); );
}

VL_ATTR_COLD void VCPU_datapath___024root___eval_initial__TOP(VCPU_datapath___024root* vlSelf);

VL_ATTR_COLD void VCPU_datapath___024root___eval_initial(VCPU_datapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath___024root___eval_initial\n"); );
    // Body
    VCPU_datapath___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VCPU_datapath___024root___eval_initial__TOP(VCPU_datapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath___024root___eval_initial__TOP\n"); );
    // Init
    VlUnpacked<IData/*31:0*/, 1024> CPU_datapath__DOT__instruction_mem_dut__DOT__register;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        CPU_datapath__DOT__instruction_mem_dut__DOT__register[__Vi0] = 0;
    }
    // Body
    VL_READMEM_N(true, 32, 1024, 0, std::string{"software/Assembly_test.hex"}
                 ,  &(CPU_datapath__DOT__instruction_mem_dut__DOT__register)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VCPU_datapath___024root___eval_final(VCPU_datapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath___024root___eval_final\n"); );
}

VL_ATTR_COLD void VCPU_datapath___024root___eval_settle(VCPU_datapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU_datapath___024root___dump_triggers__act(VCPU_datapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU_datapath___024root___dump_triggers__nba(VCPU_datapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCPU_datapath___024root___ctor_var_reset(VCPU_datapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
}
