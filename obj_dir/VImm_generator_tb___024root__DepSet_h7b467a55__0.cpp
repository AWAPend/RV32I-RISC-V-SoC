// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VImm_generator_tb.h for the primary calling header

#include "VImm_generator_tb__pch.h"
#include "VImm_generator_tb___024root.h"

VlCoroutine VImm_generator_tb___024root___eval_initial__TOP__Vtiming__0(VImm_generator_tb___024root* vlSelf);

void VImm_generator_tb___024root___eval_initial(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___eval_initial\n"); );
    // Body
    VImm_generator_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine VImm_generator_tb___024root___eval_initial__TOP__Vtiming__0(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__0__actual;
    __Vtask_Imm_generator_tb__DOT__check__0__actual = 0;
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__0__expected;
    __Vtask_Imm_generator_tb__DOT__check__0__expected = 0;
    std::string __Vtask_Imm_generator_tb__DOT__check__0__name;
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__1__actual;
    __Vtask_Imm_generator_tb__DOT__check__1__actual = 0;
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__1__expected;
    __Vtask_Imm_generator_tb__DOT__check__1__expected = 0;
    std::string __Vtask_Imm_generator_tb__DOT__check__1__name;
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__2__actual;
    __Vtask_Imm_generator_tb__DOT__check__2__actual = 0;
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__2__expected;
    __Vtask_Imm_generator_tb__DOT__check__2__expected = 0;
    std::string __Vtask_Imm_generator_tb__DOT__check__2__name;
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__3__actual;
    __Vtask_Imm_generator_tb__DOT__check__3__actual = 0;
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__3__expected;
    __Vtask_Imm_generator_tb__DOT__check__3__expected = 0;
    std::string __Vtask_Imm_generator_tb__DOT__check__3__name;
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__4__actual;
    __Vtask_Imm_generator_tb__DOT__check__4__actual = 0;
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__4__expected;
    __Vtask_Imm_generator_tb__DOT__check__4__expected = 0;
    std::string __Vtask_Imm_generator_tb__DOT__check__4__name;
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__5__actual;
    __Vtask_Imm_generator_tb__DOT__check__5__actual = 0;
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__5__expected;
    __Vtask_Imm_generator_tb__DOT__check__5__expected = 0;
    std::string __Vtask_Imm_generator_tb__DOT__check__5__name;
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__6__actual;
    __Vtask_Imm_generator_tb__DOT__check__6__actual = 0;
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__6__expected;
    __Vtask_Imm_generator_tb__DOT__check__6__expected = 0;
    std::string __Vtask_Imm_generator_tb__DOT__check__6__name;
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__7__actual;
    __Vtask_Imm_generator_tb__DOT__check__7__actual = 0;
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__7__expected;
    __Vtask_Imm_generator_tb__DOT__check__7__expected = 0;
    std::string __Vtask_Imm_generator_tb__DOT__check__7__name;
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__8__actual;
    __Vtask_Imm_generator_tb__DOT__check__8__actual = 0;
    IData/*31:0*/ __Vtask_Imm_generator_tb__DOT__check__8__expected;
    __Vtask_Imm_generator_tb__DOT__check__8__expected = 0;
    std::string __Vtask_Imm_generator_tb__DOT__check__8__name;
    // Body
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       35);
    vlSelf->Imm_generator_tb__DOT__instruction_type = 0U;
    vlSelf->Imm_generator_tb__DOT__instruction = 0x12300000U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       39);
    __Vtask_Imm_generator_tb__DOT__check__0__name = 
        std::string{"I-type positive val "};
    __Vtask_Imm_generator_tb__DOT__check__0__expected = 0x123U;
    __Vtask_Imm_generator_tb__DOT__check__0__actual 
        = vlSelf->Imm_generator_tb__DOT__imm_out;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       23);
    if ((__Vtask_Imm_generator_tb__DOT__check__0__actual 
         != __Vtask_Imm_generator_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__0__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__0__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__0__actual);
        vlSelf->Imm_generator_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__0__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__0__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__0__actual);
        vlSelf->Imm_generator_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__pass_count);
    }
    vlSelf->Imm_generator_tb__DOT__instruction = 0x9ab00000U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       43);
    __Vtask_Imm_generator_tb__DOT__check__1__name = 
        std::string{"I-type negative val -1621"};
    __Vtask_Imm_generator_tb__DOT__check__1__expected = 0xfffff9abU;
    __Vtask_Imm_generator_tb__DOT__check__1__actual 
        = vlSelf->Imm_generator_tb__DOT__imm_out;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       23);
    if ((__Vtask_Imm_generator_tb__DOT__check__1__actual 
         != __Vtask_Imm_generator_tb__DOT__check__1__expected)) {
        VL_WRITEF("FAIL: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__1__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__1__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__1__actual);
        vlSelf->Imm_generator_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__1__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__1__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__1__actual);
        vlSelf->Imm_generator_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__pass_count);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       47);
    vlSelf->Imm_generator_tb__DOT__instruction_type = 1U;
    vlSelf->Imm_generator_tb__DOT__instruction = 0x700U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       51);
    __Vtask_Imm_generator_tb__DOT__check__2__name = 
        std::string{"S-type positive val 14"};
    __Vtask_Imm_generator_tb__DOT__check__2__expected = 0xeU;
    __Vtask_Imm_generator_tb__DOT__check__2__actual 
        = vlSelf->Imm_generator_tb__DOT__imm_out;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       23);
    if ((__Vtask_Imm_generator_tb__DOT__check__2__actual 
         != __Vtask_Imm_generator_tb__DOT__check__2__expected)) {
        VL_WRITEF("FAIL: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__2__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__2__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__2__actual);
        vlSelf->Imm_generator_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__2__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__2__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__2__actual);
        vlSelf->Imm_generator_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__pass_count);
    }
    vlSelf->Imm_generator_tb__DOT__instruction = 0xfe000f80U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       55);
    __Vtask_Imm_generator_tb__DOT__check__3__name = 
        std::string{"S-type both fields"};
    __Vtask_Imm_generator_tb__DOT__check__3__expected = 0xffffffffU;
    __Vtask_Imm_generator_tb__DOT__check__3__actual 
        = vlSelf->Imm_generator_tb__DOT__imm_out;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       23);
    if ((__Vtask_Imm_generator_tb__DOT__check__3__actual 
         != __Vtask_Imm_generator_tb__DOT__check__3__expected)) {
        VL_WRITEF("FAIL: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__3__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__3__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__3__actual);
        vlSelf->Imm_generator_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__3__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__3__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__3__actual);
        vlSelf->Imm_generator_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__pass_count);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       59);
    vlSelf->Imm_generator_tb__DOT__instruction_type = 2U;
    vlSelf->Imm_generator_tb__DOT__instruction = 0x400U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       63);
    __Vtask_Imm_generator_tb__DOT__check__4__name = 
        std::string{"B-type positive val +8"};
    __Vtask_Imm_generator_tb__DOT__check__4__expected = 8U;
    __Vtask_Imm_generator_tb__DOT__check__4__actual 
        = vlSelf->Imm_generator_tb__DOT__imm_out;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       23);
    if ((__Vtask_Imm_generator_tb__DOT__check__4__actual 
         != __Vtask_Imm_generator_tb__DOT__check__4__expected)) {
        VL_WRITEF("FAIL: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__4__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__4__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__4__actual);
        vlSelf->Imm_generator_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__4__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__4__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__4__actual);
        vlSelf->Imm_generator_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__pass_count);
    }
    vlSelf->Imm_generator_tb__DOT__instruction = 0x80000000U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       67);
    __Vtask_Imm_generator_tb__DOT__check__5__name = 
        std::string{"B-type sign extend -4096"};
    __Vtask_Imm_generator_tb__DOT__check__5__expected = 0xfffff000U;
    __Vtask_Imm_generator_tb__DOT__check__5__actual 
        = vlSelf->Imm_generator_tb__DOT__imm_out;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       23);
    if ((__Vtask_Imm_generator_tb__DOT__check__5__actual 
         != __Vtask_Imm_generator_tb__DOT__check__5__expected)) {
        VL_WRITEF("FAIL: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__5__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__5__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__5__actual);
        vlSelf->Imm_generator_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__5__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__5__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__5__actual);
        vlSelf->Imm_generator_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__pass_count);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       71);
    vlSelf->Imm_generator_tb__DOT__instruction_type = 3U;
    vlSelf->Imm_generator_tb__DOT__instruction = 0xfffff000U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       75);
    __Vtask_Imm_generator_tb__DOT__check__6__name = 
        std::string{"U-type"};
    __Vtask_Imm_generator_tb__DOT__check__6__expected = 0xfffff000U;
    __Vtask_Imm_generator_tb__DOT__check__6__actual 
        = vlSelf->Imm_generator_tb__DOT__imm_out;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       23);
    if ((__Vtask_Imm_generator_tb__DOT__check__6__actual 
         != __Vtask_Imm_generator_tb__DOT__check__6__expected)) {
        VL_WRITEF("FAIL: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__6__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__6__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__6__actual);
        vlSelf->Imm_generator_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__6__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__6__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__6__actual);
        vlSelf->Imm_generator_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__pass_count);
    }
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       79);
    vlSelf->Imm_generator_tb__DOT__instruction_type = 4U;
    vlSelf->Imm_generator_tb__DOT__instruction = 0x1000U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       83);
    __Vtask_Imm_generator_tb__DOT__check__7__name = 
        std::string{"J-type positive val 4096"};
    __Vtask_Imm_generator_tb__DOT__check__7__expected = 0x1000U;
    __Vtask_Imm_generator_tb__DOT__check__7__actual 
        = vlSelf->Imm_generator_tb__DOT__imm_out;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       23);
    if ((__Vtask_Imm_generator_tb__DOT__check__7__actual 
         != __Vtask_Imm_generator_tb__DOT__check__7__expected)) {
        VL_WRITEF("FAIL: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__7__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__7__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__7__actual);
        vlSelf->Imm_generator_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__7__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__7__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__7__actual);
        vlSelf->Imm_generator_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__pass_count);
    }
    vlSelf->Imm_generator_tb__DOT__instruction = 0x80000000U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       87);
    __Vtask_Imm_generator_tb__DOT__check__8__name = 
        std::string{"J-type negative val -1048576"};
    __Vtask_Imm_generator_tb__DOT__check__8__expected = 0xfff00000U;
    __Vtask_Imm_generator_tb__DOT__check__8__actual 
        = vlSelf->Imm_generator_tb__DOT__imm_out;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Imm_generator_tb.sv", 
                                       23);
    if ((__Vtask_Imm_generator_tb__DOT__check__8__actual 
         != __Vtask_Imm_generator_tb__DOT__check__8__expected)) {
        VL_WRITEF("FAIL: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__8__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__8__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__8__actual);
        vlSelf->Imm_generator_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ expected = %0# actual = %0#\n",
                  -1,&(__Vtask_Imm_generator_tb__DOT__check__8__name),
                  32,__Vtask_Imm_generator_tb__DOT__check__8__expected,
                  32,__Vtask_Imm_generator_tb__DOT__check__8__actual);
        vlSelf->Imm_generator_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Imm_generator_tb__DOT__pass_count);
    }
}

VL_INLINE_OPT void VImm_generator_tb___024root___act_sequent__TOP__0(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->Imm_generator_tb__DOT__imm_out = ((4U & (IData)(vlSelf->Imm_generator_tb__DOT__instruction_type))
                                               ? ((2U 
                                                   & (IData)(vlSelf->Imm_generator_tb__DOT__instruction_type))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->Imm_generator_tb__DOT__instruction_type))
                                                    ? 0U
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->Imm_generator_tb__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0x15U) 
                                                    | ((0x100000U 
                                                        & (vlSelf->Imm_generator_tb__DOT__instruction 
                                                           >> 0xbU)) 
                                                       | ((0xff000U 
                                                           & vlSelf->Imm_generator_tb__DOT__instruction) 
                                                          | ((0x800U 
                                                              & (vlSelf->Imm_generator_tb__DOT__instruction 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSelf->Imm_generator_tb__DOT__instruction 
                                                                   >> 0x14U))))))))
                                               : ((2U 
                                                   & (IData)(vlSelf->Imm_generator_tb__DOT__instruction_type))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->Imm_generator_tb__DOT__instruction_type))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelf->Imm_generator_tb__DOT__instruction)
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->Imm_generator_tb__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xdU) 
                                                    | ((0x1000U 
                                                        & (vlSelf->Imm_generator_tb__DOT__instruction 
                                                           >> 0x13U)) 
                                                       | ((0x800U 
                                                           & (vlSelf->Imm_generator_tb__DOT__instruction 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->Imm_generator_tb__DOT__instruction 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->Imm_generator_tb__DOT__instruction 
                                                                   >> 7U)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->Imm_generator_tb__DOT__instruction_type))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->Imm_generator_tb__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->Imm_generator_tb__DOT__instruction 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->Imm_generator_tb__DOT__instruction 
                                                             >> 7U))))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->Imm_generator_tb__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->Imm_generator_tb__DOT__instruction 
                                                       >> 0x14U)))));
}

void VImm_generator_tb___024root___eval_act(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VImm_generator_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VImm_generator_tb___024root___eval_nba(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VImm_generator_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VImm_generator_tb___024root___timing_resume(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VImm_generator_tb___024root___eval_triggers__act(VImm_generator_tb___024root* vlSelf);

bool VImm_generator_tb___024root___eval_phase__act(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VImm_generator_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VImm_generator_tb___024root___timing_resume(vlSelf);
        VImm_generator_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VImm_generator_tb___024root___eval_phase__nba(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VImm_generator_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VImm_generator_tb___024root___dump_triggers__nba(VImm_generator_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VImm_generator_tb___024root___dump_triggers__act(VImm_generator_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VImm_generator_tb___024root___eval(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VImm_generator_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/Imm_generator_tb.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VImm_generator_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/Imm_generator_tb.sv", 6, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VImm_generator_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VImm_generator_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VImm_generator_tb___024root___eval_debug_assertions(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
