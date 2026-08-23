// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister_file_tb.h for the primary calling header

#include "VRegister_file_tb__pch.h"
#include "VRegister_file_tb___024root.h"

VlCoroutine VRegister_file_tb___024root___eval_initial__TOP__Vtiming__0(VRegister_file_tb___024root* vlSelf);
VlCoroutine VRegister_file_tb___024root___eval_initial__TOP__Vtiming__1(VRegister_file_tb___024root* vlSelf);

void VRegister_file_tb___024root___eval_initial(VRegister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file_tb___024root___eval_initial\n"); );
    // Body
    VRegister_file_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VRegister_file_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__Register_file_tb__DOT__clk__0 
        = vlSelf->Register_file_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine VRegister_file_tb___024root___eval_initial__TOP__Vtiming__0(VRegister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__check__0__actual;
    __Vtask_Register_file_tb__DOT__check__0__actual = 0;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__check__0__expected;
    __Vtask_Register_file_tb__DOT__check__0__expected = 0;
    std::string __Vtask_Register_file_tb__DOT__check__0__name;
    CData/*4:0*/ __Vtask_Register_file_tb__DOT__synchronous_write__1__addr;
    __Vtask_Register_file_tb__DOT__synchronous_write__1__addr = 0;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__synchronous_write__1__data;
    __Vtask_Register_file_tb__DOT__synchronous_write__1__data = 0;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__check__2__actual;
    __Vtask_Register_file_tb__DOT__check__2__actual = 0;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__check__2__expected;
    __Vtask_Register_file_tb__DOT__check__2__expected = 0;
    std::string __Vtask_Register_file_tb__DOT__check__2__name;
    CData/*4:0*/ __Vtask_Register_file_tb__DOT__synchronous_write__3__addr;
    __Vtask_Register_file_tb__DOT__synchronous_write__3__addr = 0;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__synchronous_write__3__data;
    __Vtask_Register_file_tb__DOT__synchronous_write__3__data = 0;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__check__4__actual;
    __Vtask_Register_file_tb__DOT__check__4__actual = 0;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__check__4__expected;
    __Vtask_Register_file_tb__DOT__check__4__expected = 0;
    std::string __Vtask_Register_file_tb__DOT__check__4__name;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__check__5__actual;
    __Vtask_Register_file_tb__DOT__check__5__actual = 0;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__check__5__expected;
    __Vtask_Register_file_tb__DOT__check__5__expected = 0;
    std::string __Vtask_Register_file_tb__DOT__check__5__name;
    CData/*4:0*/ __Vtask_Register_file_tb__DOT__synchronous_write__6__addr;
    __Vtask_Register_file_tb__DOT__synchronous_write__6__addr = 0;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__synchronous_write__6__data;
    __Vtask_Register_file_tb__DOT__synchronous_write__6__data = 0;
    CData/*4:0*/ __Vtask_Register_file_tb__DOT__synchronous_write__7__addr;
    __Vtask_Register_file_tb__DOT__synchronous_write__7__addr = 0;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__synchronous_write__7__data;
    __Vtask_Register_file_tb__DOT__synchronous_write__7__data = 0;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__check__8__actual;
    __Vtask_Register_file_tb__DOT__check__8__actual = 0;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__check__8__expected;
    __Vtask_Register_file_tb__DOT__check__8__expected = 0;
    std::string __Vtask_Register_file_tb__DOT__check__8__name;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__check__9__actual;
    __Vtask_Register_file_tb__DOT__check__9__actual = 0;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__check__9__expected;
    __Vtask_Register_file_tb__DOT__check__9__expected = 0;
    std::string __Vtask_Register_file_tb__DOT__check__9__name;
    CData/*4:0*/ __Vtask_Register_file_tb__DOT__synchronous_write__10__addr;
    __Vtask_Register_file_tb__DOT__synchronous_write__10__addr = 0;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__synchronous_write__10__data;
    __Vtask_Register_file_tb__DOT__synchronous_write__10__data = 0;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__check__11__actual;
    __Vtask_Register_file_tb__DOT__check__11__actual = 0;
    IData/*31:0*/ __Vtask_Register_file_tb__DOT__check__11__expected;
    __Vtask_Register_file_tb__DOT__check__11__expected = 0;
    std::string __Vtask_Register_file_tb__DOT__check__11__name;
    // Body
    vlSelf->Register_file_tb__DOT__clk = 0U;
    vlSelf->Register_file_tb__DOT__rs1_addr = 0U;
    vlSelf->Register_file_tb__DOT__rs2_addr = 0U;
    vlSelf->Register_file_tb__DOT__write_addr = 0U;
    vlSelf->Register_file_tb__DOT__write_data = 0U;
    vlSelf->Register_file_tb__DOT__write_enable = 0U;
    vlSelf->Register_file_tb__DOT__rst_n = 0U;
    co_await vlSelf->__VtrigSched_h08e3a151__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Register_file_tb.clk)", 
                                                       "testbench/Register_file_tb.sv", 
                                                       70);
    vlSelf->Register_file_tb__DOT__rst_n = 1U;
    vlSelf->Register_file_tb__DOT__rs1_addr = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 0 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 1 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 2U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 2 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 3U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 3 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 4U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 4 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 5U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 5 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 6U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 6 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 7U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 7 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 8U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 8 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 9U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 9 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0xaU;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 10 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0xbU;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 11 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0xcU;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 12 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0xdU;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 13 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0xeU;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 14 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0xfU;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 15 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0x10U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 16 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0x11U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 17 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0x12U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 18 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0x13U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 19 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0x14U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 20 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0x15U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 21 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0x16U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 22 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0x17U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 23 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0x18U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 24 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0x19U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 25 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0x1aU;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 26 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0x1bU;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 27 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0x1cU;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 28 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0x1dU;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 29 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0x1eU;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 30 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__rs1_addr = 0x1fU;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       76);
    __Vtask_Register_file_tb__DOT__check__0__name = 
        std::string{"Rst_n test, register 31 is 0"};
    __Vtask_Register_file_tb__DOT__check__0__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__0__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__0__actual 
         != __Vtask_Register_file_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__0__name),
                  32,__Vtask_Register_file_tb__DOT__check__0__expected,
                  32,__Vtask_Register_file_tb__DOT__check__0__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    __Vtask_Register_file_tb__DOT__synchronous_write__1__data = 0xadcdef12U;
    __Vtask_Register_file_tb__DOT__synchronous_write__1__addr = 5U;
    vlSelf->Register_file_tb__DOT__write_addr = __Vtask_Register_file_tb__DOT__synchronous_write__1__addr;
    vlSelf->Register_file_tb__DOT__write_data = __Vtask_Register_file_tb__DOT__synchronous_write__1__data;
    vlSelf->Register_file_tb__DOT__write_enable = 1U;
    co_await vlSelf->__VtrigSched_h08e3a151__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Register_file_tb.clk)", 
                                                       "testbench/Register_file_tb.sv", 
                                                       52);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       53);
    vlSelf->Register_file_tb__DOT__write_enable = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       82);
    vlSelf->Register_file_tb__DOT__rs1_addr = 5U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       84);
    __Vtask_Register_file_tb__DOT__check__2__name = VL_SFORMATF_NX("Write then read test, register 5 is: %0#",
                                                                   32,
                                                                   vlSelf->Register_file_tb__DOT__rs1_data) ;
    __Vtask_Register_file_tb__DOT__check__2__expected = 0xadcdef12U;
    __Vtask_Register_file_tb__DOT__check__2__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__2__actual 
         != __Vtask_Register_file_tb__DOT__check__2__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__2__name),
                  32,__Vtask_Register_file_tb__DOT__check__2__expected,
                  32,__Vtask_Register_file_tb__DOT__check__2__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__2__name),
                  32,__Vtask_Register_file_tb__DOT__check__2__expected,
                  32,__Vtask_Register_file_tb__DOT__check__2__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    __Vtask_Register_file_tb__DOT__synchronous_write__3__data = 0xffffffffU;
    __Vtask_Register_file_tb__DOT__synchronous_write__3__addr = 0U;
    vlSelf->Register_file_tb__DOT__write_addr = __Vtask_Register_file_tb__DOT__synchronous_write__3__addr;
    vlSelf->Register_file_tb__DOT__write_data = __Vtask_Register_file_tb__DOT__synchronous_write__3__data;
    vlSelf->Register_file_tb__DOT__write_enable = 1U;
    co_await vlSelf->__VtrigSched_h08e3a151__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Register_file_tb.clk)", 
                                                       "testbench/Register_file_tb.sv", 
                                                       52);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       53);
    vlSelf->Register_file_tb__DOT__write_enable = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       89);
    vlSelf->Register_file_tb__DOT__rs1_addr = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       91);
    __Vtask_Register_file_tb__DOT__check__4__name = 
        std::string{"x0 stays 0 after write attempt"};
    __Vtask_Register_file_tb__DOT__check__4__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__4__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__4__actual 
         != __Vtask_Register_file_tb__DOT__check__4__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__4__name),
                  32,__Vtask_Register_file_tb__DOT__check__4__expected,
                  32,__Vtask_Register_file_tb__DOT__check__4__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__4__name),
                  32,__Vtask_Register_file_tb__DOT__check__4__expected,
                  32,__Vtask_Register_file_tb__DOT__check__4__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    vlSelf->Register_file_tb__DOT__write_enable = 0U;
    vlSelf->Register_file_tb__DOT__write_addr = 0xaU;
    vlSelf->Register_file_tb__DOT__write_data = 0x12345678U;
    co_await vlSelf->__VtrigSched_h08e3a151__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Register_file_tb.clk)", 
                                                       "testbench/Register_file_tb.sv", 
                                                       98);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       99);
    vlSelf->Register_file_tb__DOT__rs1_addr = 0xaU;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       101);
    __Vtask_Register_file_tb__DOT__check__5__name = 
        std::string{"no write when write_enable=0"};
    __Vtask_Register_file_tb__DOT__check__5__expected = 0U;
    __Vtask_Register_file_tb__DOT__check__5__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__5__actual 
         != __Vtask_Register_file_tb__DOT__check__5__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__5__name),
                  32,__Vtask_Register_file_tb__DOT__check__5__expected,
                  32,__Vtask_Register_file_tb__DOT__check__5__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__5__name),
                  32,__Vtask_Register_file_tb__DOT__check__5__expected,
                  32,__Vtask_Register_file_tb__DOT__check__5__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    __Vtask_Register_file_tb__DOT__synchronous_write__6__data = 0xaaaa0000U;
    __Vtask_Register_file_tb__DOT__synchronous_write__6__addr = 3U;
    vlSelf->Register_file_tb__DOT__write_addr = __Vtask_Register_file_tb__DOT__synchronous_write__6__addr;
    vlSelf->Register_file_tb__DOT__write_data = __Vtask_Register_file_tb__DOT__synchronous_write__6__data;
    vlSelf->Register_file_tb__DOT__write_enable = 1U;
    co_await vlSelf->__VtrigSched_h08e3a151__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Register_file_tb.clk)", 
                                                       "testbench/Register_file_tb.sv", 
                                                       52);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       53);
    vlSelf->Register_file_tb__DOT__write_enable = 0U;
    __Vtask_Register_file_tb__DOT__synchronous_write__7__data = 0xbbbbU;
    __Vtask_Register_file_tb__DOT__synchronous_write__7__addr = 4U;
    vlSelf->Register_file_tb__DOT__write_addr = __Vtask_Register_file_tb__DOT__synchronous_write__7__addr;
    vlSelf->Register_file_tb__DOT__write_data = __Vtask_Register_file_tb__DOT__synchronous_write__7__data;
    vlSelf->Register_file_tb__DOT__write_enable = 1U;
    co_await vlSelf->__VtrigSched_h08e3a151__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Register_file_tb.clk)", 
                                                       "testbench/Register_file_tb.sv", 
                                                       52);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       53);
    vlSelf->Register_file_tb__DOT__write_enable = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       107);
    vlSelf->Register_file_tb__DOT__rs1_addr = 3U;
    vlSelf->Register_file_tb__DOT__rs2_addr = 4U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       110);
    __Vtask_Register_file_tb__DOT__check__8__name = 
        std::string{"dual read: rs1"};
    __Vtask_Register_file_tb__DOT__check__8__expected = 0xaaaa0000U;
    __Vtask_Register_file_tb__DOT__check__8__actual 
        = vlSelf->Register_file_tb__DOT__rs1_data;
    if ((__Vtask_Register_file_tb__DOT__check__8__actual 
         != __Vtask_Register_file_tb__DOT__check__8__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__8__name),
                  32,__Vtask_Register_file_tb__DOT__check__8__expected,
                  32,__Vtask_Register_file_tb__DOT__check__8__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__8__name),
                  32,__Vtask_Register_file_tb__DOT__check__8__expected,
                  32,__Vtask_Register_file_tb__DOT__check__8__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    __Vtask_Register_file_tb__DOT__check__9__name = 
        std::string{"dual read: rs2"};
    __Vtask_Register_file_tb__DOT__check__9__expected = 0xbbbbU;
    __Vtask_Register_file_tb__DOT__check__9__actual 
        = vlSelf->Register_file_tb__DOT__rs2_data;
    if ((__Vtask_Register_file_tb__DOT__check__9__actual 
         != __Vtask_Register_file_tb__DOT__check__9__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__9__name),
                  32,__Vtask_Register_file_tb__DOT__check__9__expected,
                  32,__Vtask_Register_file_tb__DOT__check__9__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__9__name),
                  32,__Vtask_Register_file_tb__DOT__check__9__expected,
                  32,__Vtask_Register_file_tb__DOT__check__9__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    __Vtask_Register_file_tb__DOT__synchronous_write__10__data = 0x11111111U;
    __Vtask_Register_file_tb__DOT__synchronous_write__10__addr = 3U;
    vlSelf->Register_file_tb__DOT__write_addr = __Vtask_Register_file_tb__DOT__synchronous_write__10__addr;
    vlSelf->Register_file_tb__DOT__write_data = __Vtask_Register_file_tb__DOT__synchronous_write__10__data;
    vlSelf->Register_file_tb__DOT__write_enable = 1U;
    co_await vlSelf->__VtrigSched_h08e3a151__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Register_file_tb.clk)", 
                                                       "testbench/Register_file_tb.sv", 
                                                       52);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       53);
    vlSelf->Register_file_tb__DOT__write_enable = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       116);
    vlSelf->Register_file_tb__DOT__rs2_addr = 3U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Register_file_tb.sv", 
                                       118);
    __Vtask_Register_file_tb__DOT__check__11__name = 
        std::string{"overwrite reg3"};
    __Vtask_Register_file_tb__DOT__check__11__expected = 0x11111111U;
    __Vtask_Register_file_tb__DOT__check__11__actual 
        = vlSelf->Register_file_tb__DOT__rs2_data;
    if ((__Vtask_Register_file_tb__DOT__check__11__actual 
         != __Vtask_Register_file_tb__DOT__check__11__expected)) {
        VL_WRITEF("FAIL: %@ | expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__11__name),
                  32,__Vtask_Register_file_tb__DOT__check__11__expected,
                  32,__Vtask_Register_file_tb__DOT__check__11__actual);
        vlSelf->Register_file_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@| expected = %0# got %0#\n",
                  -1,&(__Vtask_Register_file_tb__DOT__check__11__name),
                  32,__Vtask_Register_file_tb__DOT__check__11__expected,
                  32,__Vtask_Register_file_tb__DOT__check__11__actual);
        vlSelf->Register_file_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelf->Register_file_tb__DOT__pass_count);
    }
    VL_WRITEF("\n---- %0d passed, %0d failed ----\n",
              32,vlSelf->Register_file_tb__DOT__pass_count,
              32,vlSelf->Register_file_tb__DOT__fail_count);
    VL_FINISH_MT("testbench/Register_file_tb.sv", 122, "");
}

VL_INLINE_OPT VlCoroutine VRegister_file_tb___024root___eval_initial__TOP__Vtiming__1(VRegister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xc350ULL, 
                                           nullptr, 
                                           "testbench/Register_file_tb.sv", 
                                           30);
        vlSelf->__Vdlyvval__Register_file_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->Register_file_tb__DOT__clk)));
        vlSelf->__Vdlyvset__Register_file_tb__DOT__clk__v0 = 1U;
    }
}

VL_INLINE_OPT void VRegister_file_tb___024root___act_comb__TOP__0(VRegister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file_tb___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->Register_file_tb__DOT__rs1_data = ((0U 
                                                == (IData)(vlSelf->Register_file_tb__DOT__rs1_addr))
                                                ? 0U
                                                : vlSelf->Register_file_tb__DOT__dut__DOT__register
                                               [vlSelf->Register_file_tb__DOT__rs1_addr]);
    vlSelf->Register_file_tb__DOT__rs2_data = ((0U 
                                                == (IData)(vlSelf->Register_file_tb__DOT__rs2_addr))
                                                ? 0U
                                                : vlSelf->Register_file_tb__DOT__dut__DOT__register
                                               [vlSelf->Register_file_tb__DOT__rs2_addr]);
}

void VRegister_file_tb___024root___eval_act(VRegister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file_tb___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        VRegister_file_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VRegister_file_tb___024root___nba_sequent__TOP__0(VRegister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__Register_file_tb__DOT__dut__DOT__register__v0;
    __Vdlyvdim0__Register_file_tb__DOT__dut__DOT__register__v0 = 0;
    IData/*31:0*/ __Vdlyvval__Register_file_tb__DOT__dut__DOT__register__v0;
    __Vdlyvval__Register_file_tb__DOT__dut__DOT__register__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Register_file_tb__DOT__dut__DOT__register__v0;
    __Vdlyvset__Register_file_tb__DOT__dut__DOT__register__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Register_file_tb__DOT__dut__DOT__register__v1;
    __Vdlyvset__Register_file_tb__DOT__dut__DOT__register__v1 = 0;
    // Body
    __Vdlyvset__Register_file_tb__DOT__dut__DOT__register__v0 = 0U;
    __Vdlyvset__Register_file_tb__DOT__dut__DOT__register__v1 = 0U;
    if (vlSelf->Register_file_tb__DOT__rst_n) {
        if (((IData)(vlSelf->Register_file_tb__DOT__write_enable) 
             & (0U != (IData)(vlSelf->Register_file_tb__DOT__write_addr)))) {
            __Vdlyvval__Register_file_tb__DOT__dut__DOT__register__v0 
                = vlSelf->Register_file_tb__DOT__write_data;
            __Vdlyvset__Register_file_tb__DOT__dut__DOT__register__v0 = 1U;
            __Vdlyvdim0__Register_file_tb__DOT__dut__DOT__register__v0 
                = vlSelf->Register_file_tb__DOT__write_addr;
        }
    } else {
        __Vdlyvset__Register_file_tb__DOT__dut__DOT__register__v1 = 1U;
    }
    if (__Vdlyvset__Register_file_tb__DOT__dut__DOT__register__v0) {
        vlSelf->Register_file_tb__DOT__dut__DOT__register[__Vdlyvdim0__Register_file_tb__DOT__dut__DOT__register__v0] 
            = __Vdlyvval__Register_file_tb__DOT__dut__DOT__register__v0;
    }
    if (__Vdlyvset__Register_file_tb__DOT__dut__DOT__register__v1) {
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[1U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[2U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[3U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[4U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[5U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[6U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[7U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[8U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[9U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0xaU] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0xbU] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0xcU] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0xdU] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0xeU] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0xfU] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0x10U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0x11U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0x12U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0x13U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0x14U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0x15U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0x16U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0x17U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0x18U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0x19U] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0x1aU] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0x1bU] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0x1cU] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0x1dU] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0x1eU] = 0U;
        vlSelf->Register_file_tb__DOT__dut__DOT__register[0x1fU] = 0U;
    }
}

VL_INLINE_OPT void VRegister_file_tb___024root___nba_sequent__TOP__1(VRegister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__Register_file_tb__DOT__clk__v0) {
        vlSelf->Register_file_tb__DOT__clk = vlSelf->__Vdlyvval__Register_file_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__Register_file_tb__DOT__clk__v0 = 0U;
    }
}

void VRegister_file_tb___024root___eval_nba(VRegister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRegister_file_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRegister_file_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRegister_file_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void VRegister_file_tb___024root___timing_resume(VRegister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h08e3a151__0.resume("@(posedge Register_file_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VRegister_file_tb___024root___timing_commit(VRegister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h08e3a151__0.commit("@(posedge Register_file_tb.clk)");
    }
}

void VRegister_file_tb___024root___eval_triggers__act(VRegister_file_tb___024root* vlSelf);

bool VRegister_file_tb___024root___eval_phase__act(VRegister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VRegister_file_tb___024root___eval_triggers__act(vlSelf);
    VRegister_file_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VRegister_file_tb___024root___timing_resume(vlSelf);
        VRegister_file_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VRegister_file_tb___024root___eval_phase__nba(VRegister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VRegister_file_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegister_file_tb___024root___dump_triggers__nba(VRegister_file_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRegister_file_tb___024root___dump_triggers__act(VRegister_file_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VRegister_file_tb___024root___eval(VRegister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VRegister_file_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/Register_file_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VRegister_file_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/Register_file_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VRegister_file_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VRegister_file_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VRegister_file_tb___024root___eval_debug_assertions(VRegister_file_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
