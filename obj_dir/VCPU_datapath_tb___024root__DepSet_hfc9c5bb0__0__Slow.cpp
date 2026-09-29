// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU_datapath_tb.h for the primary calling header

#include "VCPU_datapath_tb__pch.h"
#include "VCPU_datapath_tb___024root.h"

VL_ATTR_COLD void VCPU_datapath_tb___024root___eval_static(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void VCPU_datapath_tb___024root___eval_initial__TOP(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___eval_initial__TOP\n"); );
    // Body
    VL_READMEM_N(true, 32, 1024, 0, std::string{"software/Assembly_test.hex"}
                 ,  &(vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction_mem_dut__DOT__register)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VCPU_datapath_tb___024root___eval_final(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU_datapath_tb___024root___dump_triggers__stl(VCPU_datapath_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VCPU_datapath_tb___024root___eval_phase__stl(VCPU_datapath_tb___024root* vlSelf);

VL_ATTR_COLD void VCPU_datapath_tb___024root___eval_settle(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___eval_settle\n"); );
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
            VCPU_datapath_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench/CPU_datapath_tb.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VCPU_datapath_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU_datapath_tb___024root___dump_triggers__stl(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*0:0*/, 128> VCPU_datapath_tb__ConstPool__TABLE_h7565b13f_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCPU_datapath_tb__ConstPool__TABLE_hdee45af2_0;
extern const VlUnpacked<CData/*2:0*/, 128> VCPU_datapath_tb__ConstPool__TABLE_hcac52b57_0;

VL_ATTR_COLD void VCPU_datapath_tb___024root___stl_sequent__TOP__0(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ CPU_datapath_tb__DOT__dut__DOT__imm_out;
    CPU_datapath_tb__DOT__dut__DOT__imm_out = 0;
    IData/*31:0*/ CPU_datapath_tb__DOT__dut__DOT__rs1_data;
    CPU_datapath_tb__DOT__dut__DOT__rs1_data = 0;
    CData/*3:0*/ CPU_datapath_tb__DOT__dut__DOT__alu_select;
    CPU_datapath_tb__DOT__dut__DOT__alu_select = 0;
    CData/*2:0*/ CPU_datapath_tb__DOT__dut__DOT__instruction_type;
    CPU_datapath_tb__DOT__dut__DOT__instruction_type = 0;
    CData/*0:0*/ CPU_datapath_tb__DOT__dut__DOT__alu_src;
    CPU_datapath_tb__DOT__dut__DOT__alu_src = 0;
    IData/*31:0*/ CPU_datapath_tb__DOT__dut__DOT____Vcellinp__alu_dut__b;
    CPU_datapath_tb__DOT__dut__DOT____Vcellinp__alu_dut__b = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
        = vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction_mem_dut__DOT__register
        [(0x3ffU & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__pc_addr 
                    >> 2U))];
    CPU_datapath_tb__DOT__dut__DOT__alu_select = ((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction))
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                      ? 2U
                                                      : 3U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                       ? 7U
                                                       : 6U)
                                                      : 4U))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                      ? 9U
                                                      : 8U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                      ? 5U
                                                      : 
                                                     ((0x40000000U 
                                                       & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                       ? 1U
                                                       : 0U))))
                                                   : 
                                                  ((0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction))
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                       ? 2U
                                                       : 3U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                       ? 
                                                      ((0x40000000U 
                                                        & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                        ? 7U
                                                        : 6U)
                                                       : 4U))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                       ? 9U
                                                       : 8U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                       ? 5U
                                                       : 0U)))
                                                    : 0U));
    CPU_datapath_tb__DOT__dut__DOT__rs1_data = ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                                     >> 0xfU)))
                                                 ? 0U
                                                 : 
                                                vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register
                                                [(0x1fU 
                                                  & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                                     >> 0xfU))]);
    __Vtableidx2 = (0x7fU & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction);
    CPU_datapath_tb__DOT__dut__DOT__alu_src = VCPU_datapath_tb__ConstPool__TABLE_h7565b13f_0
        [__Vtableidx2];
    vlSelf->CPU_datapath_tb__DOT__dut__DOT__write_enable 
        = VCPU_datapath_tb__ConstPool__TABLE_hdee45af2_0
        [__Vtableidx2];
    __Vtableidx1 = (0x7fU & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction);
    CPU_datapath_tb__DOT__dut__DOT__instruction_type 
        = VCPU_datapath_tb__ConstPool__TABLE_hcac52b57_0
        [__Vtableidx1];
    CPU_datapath_tb__DOT__dut__DOT__imm_out = ((4U 
                                                & (IData)(CPU_datapath_tb__DOT__dut__DOT__instruction_type))
                                                ? (
                                                   (2U 
                                                    & (IData)(CPU_datapath_tb__DOT__dut__DOT__instruction_type))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(CPU_datapath_tb__DOT__dut__DOT__instruction_type))
                                                     ? 0U
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0x15U) 
                                                     | ((0x100000U 
                                                         & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                                            >> 0xbU)) 
                                                        | ((0xff000U 
                                                            & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction) 
                                                           | ((0x800U 
                                                               & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                                                    >> 0x14U))))))))
                                                : (
                                                   (2U 
                                                    & (IData)(CPU_datapath_tb__DOT__dut__DOT__instruction_type))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(CPU_datapath_tb__DOT__dut__DOT__instruction_type))
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xdU) 
                                                     | ((0x1000U 
                                                         & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                                                    >> 7U)))))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(CPU_datapath_tb__DOT__dut__DOT__instruction_type))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                                              >> 7U))))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                                        >> 0x14U)))));
    CPU_datapath_tb__DOT__dut__DOT____Vcellinp__alu_dut__b 
        = ((IData)(CPU_datapath_tb__DOT__dut__DOT__alu_src)
            ? CPU_datapath_tb__DOT__dut__DOT__imm_out
            : ((0U == (0x1fU & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                >> 0x14U))) ? 0U : 
               vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register
               [(0x1fU & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                          >> 0x14U))]));
    vlSelf->CPU_datapath_tb__DOT__dut__DOT__result 
        = ((8U & (IData)(CPU_datapath_tb__DOT__dut__DOT__alu_select))
            ? ((4U & (IData)(CPU_datapath_tb__DOT__dut__DOT__alu_select))
                ? 0U : ((2U & (IData)(CPU_datapath_tb__DOT__dut__DOT__alu_select))
                         ? 0U : ((1U & (IData)(CPU_datapath_tb__DOT__dut__DOT__alu_select))
                                  ? ((CPU_datapath_tb__DOT__dut__DOT__rs1_data 
                                      < CPU_datapath_tb__DOT__dut__DOT____Vcellinp__alu_dut__b)
                                      ? 1U : 0U) : 
                                 (VL_LTS_III(32, CPU_datapath_tb__DOT__dut__DOT__rs1_data, CPU_datapath_tb__DOT__dut__DOT____Vcellinp__alu_dut__b)
                                   ? 1U : 0U)))) : 
           ((4U & (IData)(CPU_datapath_tb__DOT__dut__DOT__alu_select))
             ? ((2U & (IData)(CPU_datapath_tb__DOT__dut__DOT__alu_select))
                 ? ((1U & (IData)(CPU_datapath_tb__DOT__dut__DOT__alu_select))
                     ? VL_SHIFTRS_III(32,32,5, CPU_datapath_tb__DOT__dut__DOT__rs1_data, 
                                      (0x1fU & CPU_datapath_tb__DOT__dut__DOT____Vcellinp__alu_dut__b))
                     : (CPU_datapath_tb__DOT__dut__DOT__rs1_data 
                        >> (0x1fU & CPU_datapath_tb__DOT__dut__DOT____Vcellinp__alu_dut__b)))
                 : ((1U & (IData)(CPU_datapath_tb__DOT__dut__DOT__alu_select))
                     ? (CPU_datapath_tb__DOT__dut__DOT__rs1_data 
                        << (0x1fU & CPU_datapath_tb__DOT__dut__DOT____Vcellinp__alu_dut__b))
                     : (CPU_datapath_tb__DOT__dut__DOT__rs1_data 
                        ^ CPU_datapath_tb__DOT__dut__DOT____Vcellinp__alu_dut__b)))
             : ((2U & (IData)(CPU_datapath_tb__DOT__dut__DOT__alu_select))
                 ? ((1U & (IData)(CPU_datapath_tb__DOT__dut__DOT__alu_select))
                     ? (CPU_datapath_tb__DOT__dut__DOT__rs1_data 
                        | CPU_datapath_tb__DOT__dut__DOT____Vcellinp__alu_dut__b)
                     : (CPU_datapath_tb__DOT__dut__DOT__rs1_data 
                        & CPU_datapath_tb__DOT__dut__DOT____Vcellinp__alu_dut__b))
                 : ((1U & (IData)(CPU_datapath_tb__DOT__dut__DOT__alu_select))
                     ? (CPU_datapath_tb__DOT__dut__DOT__rs1_data 
                        - CPU_datapath_tb__DOT__dut__DOT____Vcellinp__alu_dut__b)
                     : (CPU_datapath_tb__DOT__dut__DOT__rs1_data 
                        + CPU_datapath_tb__DOT__dut__DOT____Vcellinp__alu_dut__b)))));
}

VL_ATTR_COLD void VCPU_datapath_tb___024root___eval_stl(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VCPU_datapath_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VCPU_datapath_tb___024root___eval_triggers__stl(VCPU_datapath_tb___024root* vlSelf);

VL_ATTR_COLD bool VCPU_datapath_tb___024root___eval_phase__stl(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VCPU_datapath_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VCPU_datapath_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU_datapath_tb___024root___dump_triggers__act(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge CPU_datapath_tb.clk or negedge CPU_datapath_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge CPU_datapath_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU_datapath_tb___024root___dump_triggers__nba(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CPU_datapath_tb.clk or negedge CPU_datapath_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge CPU_datapath_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCPU_datapath_tb___024root___ctor_var_reset(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CPU_datapath_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->CPU_datapath_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->CPU_datapath_tb__DOT__dut__DOT__pc_addr = VL_RAND_RESET_I(32);
    vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->CPU_datapath_tb__DOT__dut__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->CPU_datapath_tb__DOT__dut__DOT__write_enable = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction_mem_dut__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vdlyvval__CPU_datapath_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__CPU_datapath_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CPU_datapath_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CPU_datapath_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
}
