// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC_tb.h for the primary calling header

#include "VPC_tb__pch.h"
#include "VPC_tb___024root.h"

VlCoroutine VPC_tb___024root___eval_initial__TOP__Vtiming__0(VPC_tb___024root* vlSelf);
VlCoroutine VPC_tb___024root___eval_initial__TOP__Vtiming__1(VPC_tb___024root* vlSelf);

void VPC_tb___024root___eval_initial(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___eval_initial\n"); );
    // Body
    VPC_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VPC_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__PC_tb__DOT__clk__0 
        = vlSelf->PC_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__PC_tb__DOT__rst_n__0 
        = vlSelf->PC_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine VPC_tb___024root___eval_initial__TOP__Vtiming__0(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_PC_tb__DOT__check__0__expected;
    __Vtask_PC_tb__DOT__check__0__expected = 0;
    std::string __Vtask_PC_tb__DOT__check__0__name;
    IData/*31:0*/ __Vtask_PC_tb__DOT__check__1__expected;
    __Vtask_PC_tb__DOT__check__1__expected = 0;
    std::string __Vtask_PC_tb__DOT__check__1__name;
    IData/*31:0*/ __Vtask_PC_tb__DOT__check__2__expected;
    __Vtask_PC_tb__DOT__check__2__expected = 0;
    std::string __Vtask_PC_tb__DOT__check__2__name;
    IData/*31:0*/ __Vtask_PC_tb__DOT__check__3__expected;
    __Vtask_PC_tb__DOT__check__3__expected = 0;
    std::string __Vtask_PC_tb__DOT__check__3__name;
    IData/*31:0*/ __Vtask_PC_tb__DOT__check__4__expected;
    __Vtask_PC_tb__DOT__check__4__expected = 0;
    std::string __Vtask_PC_tb__DOT__check__4__name;
    IData/*31:0*/ __Vtask_PC_tb__DOT__check__5__expected;
    __Vtask_PC_tb__DOT__check__5__expected = 0;
    std::string __Vtask_PC_tb__DOT__check__5__name;
    IData/*31:0*/ __Vtask_PC_tb__DOT__check__6__expected;
    __Vtask_PC_tb__DOT__check__6__expected = 0;
    std::string __Vtask_PC_tb__DOT__check__6__name;
    IData/*31:0*/ __Vtask_PC_tb__DOT__check__7__expected;
    __Vtask_PC_tb__DOT__check__7__expected = 0;
    std::string __Vtask_PC_tb__DOT__check__7__name;
    IData/*31:0*/ __Vtask_PC_tb__DOT__check__8__expected;
    __Vtask_PC_tb__DOT__check__8__expected = 0;
    std::string __Vtask_PC_tb__DOT__check__8__name;
    IData/*31:0*/ __Vtask_PC_tb__DOT__check__9__expected;
    __Vtask_PC_tb__DOT__check__9__expected = 0;
    std::string __Vtask_PC_tb__DOT__check__9__name;
    // Body
    vlSelf->PC_tb__DOT__clk = 0U;
    vlSelf->PC_tb__DOT__rst_n = 0U;
    vlSelf->PC_tb__DOT__branch_taken = 0U;
    vlSelf->PC_tb__DOT__branch_target = 0U;
    co_await vlSelf->__VtrigSched_he0ac934c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PC_tb.clk)", 
                                                       "testbench/PC_tb.sv", 
                                                       42);
    __Vtask_PC_tb__DOT__check__0__name = std::string{"reset holds PC at 0"};
    __Vtask_PC_tb__DOT__check__0__expected = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/PC_tb.sv", 
                                       25);
    if ((vlSelf->PC_tb__DOT__pc_addr != __Vtask_PC_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_PC_tb__DOT__check__0__name),
                  32,__Vtask_PC_tb__DOT__check__0__expected,
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__fail_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | pc_addr=0x%0x\n",-1,&(__Vtask_PC_tb__DOT__check__0__name),
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__pass_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__pass_count);
    }
    vlSelf->PC_tb__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_he0ac934c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PC_tb.clk)", 
                                                       "testbench/PC_tb.sv", 
                                                       47);
    __Vtask_PC_tb__DOT__check__1__name = std::string{"PC increments to 4 after reset released"};
    __Vtask_PC_tb__DOT__check__1__expected = 4U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/PC_tb.sv", 
                                       25);
    if ((vlSelf->PC_tb__DOT__pc_addr != __Vtask_PC_tb__DOT__check__1__expected)) {
        VL_WRITEF("FAIL: %@ | expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_PC_tb__DOT__check__1__name),
                  32,__Vtask_PC_tb__DOT__check__1__expected,
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__fail_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | pc_addr=0x%0x\n",-1,&(__Vtask_PC_tb__DOT__check__1__name),
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__pass_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_he0ac934c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PC_tb.clk)", 
                                                       "testbench/PC_tb.sv", 
                                                       49);
    __Vtask_PC_tb__DOT__check__2__name = std::string{"PC increments to 8"};
    __Vtask_PC_tb__DOT__check__2__expected = 8U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/PC_tb.sv", 
                                       25);
    if ((vlSelf->PC_tb__DOT__pc_addr != __Vtask_PC_tb__DOT__check__2__expected)) {
        VL_WRITEF("FAIL: %@ | expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_PC_tb__DOT__check__2__name),
                  32,__Vtask_PC_tb__DOT__check__2__expected,
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__fail_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | pc_addr=0x%0x\n",-1,&(__Vtask_PC_tb__DOT__check__2__name),
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__pass_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_he0ac934c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PC_tb.clk)", 
                                                       "testbench/PC_tb.sv", 
                                                       51);
    __Vtask_PC_tb__DOT__check__3__name = std::string{"PC increments to 12"};
    __Vtask_PC_tb__DOT__check__3__expected = 0xcU;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/PC_tb.sv", 
                                       25);
    if ((vlSelf->PC_tb__DOT__pc_addr != __Vtask_PC_tb__DOT__check__3__expected)) {
        VL_WRITEF("FAIL: %@ | expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_PC_tb__DOT__check__3__name),
                  32,__Vtask_PC_tb__DOT__check__3__expected,
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__fail_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | pc_addr=0x%0x\n",-1,&(__Vtask_PC_tb__DOT__check__3__name),
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__pass_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__pass_count);
    }
    vlSelf->PC_tb__DOT__branch_taken = 1U;
    vlSelf->PC_tb__DOT__branch_target = 0x1000U;
    co_await vlSelf->__VtrigSched_he0ac934c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PC_tb.clk)", 
                                                       "testbench/PC_tb.sv", 
                                                       57);
    __Vtask_PC_tb__DOT__check__4__name = std::string{"Branch redirects PC to target"};
    __Vtask_PC_tb__DOT__check__4__expected = 0x1000U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/PC_tb.sv", 
                                       25);
    if ((vlSelf->PC_tb__DOT__pc_addr != __Vtask_PC_tb__DOT__check__4__expected)) {
        VL_WRITEF("FAIL: %@ | expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_PC_tb__DOT__check__4__name),
                  32,__Vtask_PC_tb__DOT__check__4__expected,
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__fail_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | pc_addr=0x%0x\n",-1,&(__Vtask_PC_tb__DOT__check__4__name),
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__pass_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__pass_count);
    }
    vlSelf->PC_tb__DOT__branch_taken = 0U;
    co_await vlSelf->__VtrigSched_he0ac934c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PC_tb.clk)", 
                                                       "testbench/PC_tb.sv", 
                                                       62);
    __Vtask_PC_tb__DOT__check__5__name = std::string{"PC resumes +4 increment after branch"};
    __Vtask_PC_tb__DOT__check__5__expected = 0x1004U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/PC_tb.sv", 
                                       25);
    if ((vlSelf->PC_tb__DOT__pc_addr != __Vtask_PC_tb__DOT__check__5__expected)) {
        VL_WRITEF("FAIL: %@ | expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_PC_tb__DOT__check__5__name),
                  32,__Vtask_PC_tb__DOT__check__5__expected,
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__fail_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | pc_addr=0x%0x\n",-1,&(__Vtask_PC_tb__DOT__check__5__name),
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__pass_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__pass_count);
    }
    vlSelf->PC_tb__DOT__branch_taken = 1U;
    vlSelf->PC_tb__DOT__branch_target = 0x2000U;
    co_await vlSelf->__VtrigSched_he0ac934c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PC_tb.clk)", 
                                                       "testbench/PC_tb.sv", 
                                                       68);
    __Vtask_PC_tb__DOT__check__6__name = std::string{"First back-to-back branch"};
    __Vtask_PC_tb__DOT__check__6__expected = 0x2000U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/PC_tb.sv", 
                                       25);
    if ((vlSelf->PC_tb__DOT__pc_addr != __Vtask_PC_tb__DOT__check__6__expected)) {
        VL_WRITEF("FAIL: %@ | expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_PC_tb__DOT__check__6__name),
                  32,__Vtask_PC_tb__DOT__check__6__expected,
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__fail_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | pc_addr=0x%0x\n",-1,&(__Vtask_PC_tb__DOT__check__6__name),
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__pass_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__pass_count);
    }
    vlSelf->PC_tb__DOT__branch_target = 0x3000U;
    co_await vlSelf->__VtrigSched_he0ac934c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PC_tb.clk)", 
                                                       "testbench/PC_tb.sv", 
                                                       71);
    __Vtask_PC_tb__DOT__check__7__name = std::string{"Second back-to-back branch, new target"};
    __Vtask_PC_tb__DOT__check__7__expected = 0x3000U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/PC_tb.sv", 
                                       25);
    if ((vlSelf->PC_tb__DOT__pc_addr != __Vtask_PC_tb__DOT__check__7__expected)) {
        VL_WRITEF("FAIL: %@ | expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_PC_tb__DOT__check__7__name),
                  32,__Vtask_PC_tb__DOT__check__7__expected,
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__fail_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | pc_addr=0x%0x\n",-1,&(__Vtask_PC_tb__DOT__check__7__name),
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__pass_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__pass_count);
    }
    vlSelf->PC_tb__DOT__branch_taken = 0U;
    vlSelf->PC_tb__DOT__rst_n = 0U;
    co_await vlSelf->__VtrigSched_he0ac934c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PC_tb.clk)", 
                                                       "testbench/PC_tb.sv", 
                                                       77);
    __Vtask_PC_tb__DOT__check__8__name = std::string{"Mid-stream reset clears PC back to 0"};
    __Vtask_PC_tb__DOT__check__8__expected = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/PC_tb.sv", 
                                       25);
    if ((vlSelf->PC_tb__DOT__pc_addr != __Vtask_PC_tb__DOT__check__8__expected)) {
        VL_WRITEF("FAIL: %@ | expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_PC_tb__DOT__check__8__name),
                  32,__Vtask_PC_tb__DOT__check__8__expected,
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__fail_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | pc_addr=0x%0x\n",-1,&(__Vtask_PC_tb__DOT__check__8__name),
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__pass_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__pass_count);
    }
    vlSelf->PC_tb__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_he0ac934c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge PC_tb.clk)", 
                                                       "testbench/PC_tb.sv", 
                                                       81);
    __Vtask_PC_tb__DOT__check__9__name = std::string{"PC resumes normal increment after mid-stream reset"};
    __Vtask_PC_tb__DOT__check__9__expected = 4U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/PC_tb.sv", 
                                       25);
    if ((vlSelf->PC_tb__DOT__pc_addr != __Vtask_PC_tb__DOT__check__9__expected)) {
        VL_WRITEF("FAIL: %@ | expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_PC_tb__DOT__check__9__name),
                  32,__Vtask_PC_tb__DOT__check__9__expected,
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__fail_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | pc_addr=0x%0x\n",-1,&(__Vtask_PC_tb__DOT__check__9__name),
                  32,vlSelf->PC_tb__DOT__pc_addr);
        vlSelf->PC_tb__DOT__pass_count = ((IData)(1U) 
                                          + vlSelf->PC_tb__DOT__pass_count);
    }
    VL_WRITEF("\n---- %0d passed, %0d failed ----\n",
              32,vlSelf->PC_tb__DOT__pass_count,32,
              vlSelf->PC_tb__DOT__fail_count);
    VL_FINISH_MT("testbench/PC_tb.sv", 85, "");
}

VL_INLINE_OPT VlCoroutine VPC_tb___024root___eval_initial__TOP__Vtiming__1(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "testbench/PC_tb.sv", 
                                           22);
        vlSelf->__Vdlyvval__PC_tb__DOT__clk__v0 = (1U 
                                                   & (~ (IData)(vlSelf->PC_tb__DOT__clk)));
        vlSelf->__Vdlyvset__PC_tb__DOT__clk__v0 = 1U;
    }
}

void VPC_tb___024root___eval_act(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void VPC_tb___024root___nba_sequent__TOP__0(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->PC_tb__DOT__pc_addr = ((IData)(vlSelf->PC_tb__DOT__rst_n)
                                    ? ((IData)(vlSelf->PC_tb__DOT__branch_taken)
                                        ? vlSelf->PC_tb__DOT__branch_target
                                        : ((IData)(4U) 
                                           + vlSelf->PC_tb__DOT__pc_addr))
                                    : 0U);
}

VL_INLINE_OPT void VPC_tb___024root___nba_sequent__TOP__1(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__PC_tb__DOT__clk__v0) {
        vlSelf->PC_tb__DOT__clk = vlSelf->__Vdlyvval__PC_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__PC_tb__DOT__clk__v0 = 0U;
    }
}

void VPC_tb___024root___eval_nba(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VPC_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VPC_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VPC_tb___024root___timing_resume(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_he0ac934c__0.resume("@(posedge PC_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VPC_tb___024root___timing_commit(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_he0ac934c__0.commit("@(posedge PC_tb.clk)");
    }
}

void VPC_tb___024root___eval_triggers__act(VPC_tb___024root* vlSelf);

bool VPC_tb___024root___eval_phase__act(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VPC_tb___024root___eval_triggers__act(vlSelf);
    VPC_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VPC_tb___024root___timing_resume(vlSelf);
        VPC_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VPC_tb___024root___eval_phase__nba(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VPC_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPC_tb___024root___dump_triggers__nba(VPC_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPC_tb___024root___dump_triggers__act(VPC_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VPC_tb___024root___eval(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VPC_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/PC_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VPC_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/PC_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VPC_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VPC_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VPC_tb___024root___eval_debug_assertions(VPC_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
