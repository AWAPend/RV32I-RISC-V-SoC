// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU_datapath_tb.h for the primary calling header

#include "VCPU_datapath_tb__pch.h"
#include "VCPU_datapath_tb___024root.h"

VL_ATTR_COLD void VCPU_datapath_tb___024root___eval_initial__TOP(VCPU_datapath_tb___024root* vlSelf);
VlCoroutine VCPU_datapath_tb___024root___eval_initial__TOP__Vtiming__0(VCPU_datapath_tb___024root* vlSelf);
VlCoroutine VCPU_datapath_tb___024root___eval_initial__TOP__Vtiming__1(VCPU_datapath_tb___024root* vlSelf);

void VCPU_datapath_tb___024root___eval_initial(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___eval_initial\n"); );
    // Body
    VCPU_datapath_tb___024root___eval_initial__TOP(vlSelf);
    VCPU_datapath_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VCPU_datapath_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__CPU_datapath_tb__DOT__clk__0 
        = vlSelf->CPU_datapath_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__CPU_datapath_tb__DOT__rst_n__0 
        = vlSelf->CPU_datapath_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine VCPU_datapath_tb___024root___eval_initial__TOP__Vtiming__1(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "testbench/CPU_datapath_tb.sv", 
                                           14);
        vlSelf->__Vdlyvval__CPU_datapath_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->CPU_datapath_tb__DOT__clk)));
        vlSelf->__Vdlyvset__CPU_datapath_tb__DOT__clk__v0 = 1U;
    }
}

void VCPU_datapath_tb___024root___eval_act(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*0:0*/, 128> VCPU_datapath_tb__ConstPool__TABLE_h7565b13f_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCPU_datapath_tb__ConstPool__TABLE_hdee45af2_0;
extern const VlUnpacked<CData/*2:0*/, 128> VCPU_datapath_tb__ConstPool__TABLE_hcac52b57_0;

VL_INLINE_OPT void VCPU_datapath_tb___024root___nba_sequent__TOP__0(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___nba_sequent__TOP__0\n"); );
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
    CData/*4:0*/ __Vdlyvdim0__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v0;
    __Vdlyvdim0__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v0 = 0;
    IData/*31:0*/ __Vdlyvval__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v0;
    __Vdlyvval__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v0;
    __Vdlyvset__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v1;
    __Vdlyvset__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v1 = 0;
    // Body
    __Vdlyvset__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v0 = 0U;
    __Vdlyvset__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v1 = 0U;
    if (vlSelf->CPU_datapath_tb__DOT__rst_n) {
        if (((IData)(vlSelf->CPU_datapath_tb__DOT__dut__DOT__write_enable) 
             & (0U != (0x1fU & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                >> 7U))))) {
            __Vdlyvval__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v0 
                = vlSelf->CPU_datapath_tb__DOT__dut__DOT__result;
            __Vdlyvset__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v0 = 1U;
            __Vdlyvdim0__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v0 
                = (0x1fU & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                            >> 7U));
        }
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__pc_addr 
            = ((IData)(4U) + vlSelf->CPU_datapath_tb__DOT__dut__DOT__pc_addr);
    } else {
        __Vdlyvset__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v1 = 1U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__pc_addr = 0U;
    }
    if (__Vdlyvset__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v0) {
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[__Vdlyvdim0__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v0] 
            = __Vdlyvval__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v0;
    }
    if (__Vdlyvset__CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register__v1) {
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[1U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[2U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[3U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[4U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[5U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[6U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[7U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[8U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[9U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0xaU] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0xbU] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0xcU] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0xdU] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0xeU] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0xfU] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0x10U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0x11U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0x12U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0x13U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0x14U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0x15U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0x16U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0x17U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0x18U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0x19U] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0x1aU] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0x1bU] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0x1cU] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0x1dU] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0x1eU] = 0U;
        vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0x1fU] = 0U;
    }
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

VL_INLINE_OPT void VCPU_datapath_tb___024root___nba_sequent__TOP__1(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__CPU_datapath_tb__DOT__clk__v0) {
        vlSelf->CPU_datapath_tb__DOT__clk = vlSelf->__Vdlyvval__CPU_datapath_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__CPU_datapath_tb__DOT__clk__v0 = 0U;
    }
}

void VCPU_datapath_tb___024root___eval_nba(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCPU_datapath_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCPU_datapath_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VCPU_datapath_tb___024root___timing_resume(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_ha0a7f75e__0.resume("@(posedge CPU_datapath_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VCPU_datapath_tb___024root___timing_commit(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_ha0a7f75e__0.commit("@(posedge CPU_datapath_tb.clk)");
    }
}

void VCPU_datapath_tb___024root___eval_triggers__act(VCPU_datapath_tb___024root* vlSelf);

bool VCPU_datapath_tb___024root___eval_phase__act(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VCPU_datapath_tb___024root___eval_triggers__act(vlSelf);
    VCPU_datapath_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VCPU_datapath_tb___024root___timing_resume(vlSelf);
        VCPU_datapath_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VCPU_datapath_tb___024root___eval_phase__nba(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VCPU_datapath_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU_datapath_tb___024root___dump_triggers__nba(VCPU_datapath_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU_datapath_tb___024root___dump_triggers__act(VCPU_datapath_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VCPU_datapath_tb___024root___eval(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VCPU_datapath_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/CPU_datapath_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VCPU_datapath_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/CPU_datapath_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VCPU_datapath_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VCPU_datapath_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VCPU_datapath_tb___024root___eval_debug_assertions(VCPU_datapath_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
