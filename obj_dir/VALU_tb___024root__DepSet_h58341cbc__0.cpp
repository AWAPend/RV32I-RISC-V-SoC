// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_tb.h for the primary calling header

#include "VALU_tb__pch.h"
#include "VALU_tb___024root.h"

VlCoroutine VALU_tb___024root___eval_initial__TOP__Vtiming__0(VALU_tb___024root* vlSelf);

void VALU_tb___024root___eval_initial(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_initial\n"); );
    // Body
    VALU_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine VALU_tb___024root___eval_initial__TOP__Vtiming__0(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__0__a_in;
    __Vtask_ALU_tb__DOT__check__0__a_in = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__0__b_in;
    __Vtask_ALU_tb__DOT__check__0__b_in = 0;
    CData/*3:0*/ __Vtask_ALU_tb__DOT__check__0__sel;
    __Vtask_ALU_tb__DOT__check__0__sel = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__0__expected;
    __Vtask_ALU_tb__DOT__check__0__expected = 0;
    std::string __Vtask_ALU_tb__DOT__check__0__name;
    CData/*0:0*/ __Vtask_ALU_tb__DOT__check__0__expected_zero;
    __Vtask_ALU_tb__DOT__check__0__expected_zero = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__1__a_in;
    __Vtask_ALU_tb__DOT__check__1__a_in = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__1__b_in;
    __Vtask_ALU_tb__DOT__check__1__b_in = 0;
    CData/*3:0*/ __Vtask_ALU_tb__DOT__check__1__sel;
    __Vtask_ALU_tb__DOT__check__1__sel = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__1__expected;
    __Vtask_ALU_tb__DOT__check__1__expected = 0;
    std::string __Vtask_ALU_tb__DOT__check__1__name;
    CData/*0:0*/ __Vtask_ALU_tb__DOT__check__1__expected_zero;
    __Vtask_ALU_tb__DOT__check__1__expected_zero = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__2__a_in;
    __Vtask_ALU_tb__DOT__check__2__a_in = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__2__b_in;
    __Vtask_ALU_tb__DOT__check__2__b_in = 0;
    CData/*3:0*/ __Vtask_ALU_tb__DOT__check__2__sel;
    __Vtask_ALU_tb__DOT__check__2__sel = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__2__expected;
    __Vtask_ALU_tb__DOT__check__2__expected = 0;
    std::string __Vtask_ALU_tb__DOT__check__2__name;
    CData/*0:0*/ __Vtask_ALU_tb__DOT__check__2__expected_zero;
    __Vtask_ALU_tb__DOT__check__2__expected_zero = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__3__a_in;
    __Vtask_ALU_tb__DOT__check__3__a_in = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__3__b_in;
    __Vtask_ALU_tb__DOT__check__3__b_in = 0;
    CData/*3:0*/ __Vtask_ALU_tb__DOT__check__3__sel;
    __Vtask_ALU_tb__DOT__check__3__sel = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__3__expected;
    __Vtask_ALU_tb__DOT__check__3__expected = 0;
    std::string __Vtask_ALU_tb__DOT__check__3__name;
    CData/*0:0*/ __Vtask_ALU_tb__DOT__check__3__expected_zero;
    __Vtask_ALU_tb__DOT__check__3__expected_zero = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__4__a_in;
    __Vtask_ALU_tb__DOT__check__4__a_in = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__4__b_in;
    __Vtask_ALU_tb__DOT__check__4__b_in = 0;
    CData/*3:0*/ __Vtask_ALU_tb__DOT__check__4__sel;
    __Vtask_ALU_tb__DOT__check__4__sel = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__4__expected;
    __Vtask_ALU_tb__DOT__check__4__expected = 0;
    std::string __Vtask_ALU_tb__DOT__check__4__name;
    CData/*0:0*/ __Vtask_ALU_tb__DOT__check__4__expected_zero;
    __Vtask_ALU_tb__DOT__check__4__expected_zero = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__5__a_in;
    __Vtask_ALU_tb__DOT__check__5__a_in = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__5__b_in;
    __Vtask_ALU_tb__DOT__check__5__b_in = 0;
    CData/*3:0*/ __Vtask_ALU_tb__DOT__check__5__sel;
    __Vtask_ALU_tb__DOT__check__5__sel = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__5__expected;
    __Vtask_ALU_tb__DOT__check__5__expected = 0;
    std::string __Vtask_ALU_tb__DOT__check__5__name;
    CData/*0:0*/ __Vtask_ALU_tb__DOT__check__5__expected_zero;
    __Vtask_ALU_tb__DOT__check__5__expected_zero = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__6__a_in;
    __Vtask_ALU_tb__DOT__check__6__a_in = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__6__b_in;
    __Vtask_ALU_tb__DOT__check__6__b_in = 0;
    CData/*3:0*/ __Vtask_ALU_tb__DOT__check__6__sel;
    __Vtask_ALU_tb__DOT__check__6__sel = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__6__expected;
    __Vtask_ALU_tb__DOT__check__6__expected = 0;
    std::string __Vtask_ALU_tb__DOT__check__6__name;
    CData/*0:0*/ __Vtask_ALU_tb__DOT__check__6__expected_zero;
    __Vtask_ALU_tb__DOT__check__6__expected_zero = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__7__a_in;
    __Vtask_ALU_tb__DOT__check__7__a_in = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__7__b_in;
    __Vtask_ALU_tb__DOT__check__7__b_in = 0;
    CData/*3:0*/ __Vtask_ALU_tb__DOT__check__7__sel;
    __Vtask_ALU_tb__DOT__check__7__sel = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__7__expected;
    __Vtask_ALU_tb__DOT__check__7__expected = 0;
    std::string __Vtask_ALU_tb__DOT__check__7__name;
    CData/*0:0*/ __Vtask_ALU_tb__DOT__check__7__expected_zero;
    __Vtask_ALU_tb__DOT__check__7__expected_zero = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__8__a_in;
    __Vtask_ALU_tb__DOT__check__8__a_in = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__8__b_in;
    __Vtask_ALU_tb__DOT__check__8__b_in = 0;
    CData/*3:0*/ __Vtask_ALU_tb__DOT__check__8__sel;
    __Vtask_ALU_tb__DOT__check__8__sel = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__8__expected;
    __Vtask_ALU_tb__DOT__check__8__expected = 0;
    std::string __Vtask_ALU_tb__DOT__check__8__name;
    CData/*0:0*/ __Vtask_ALU_tb__DOT__check__8__expected_zero;
    __Vtask_ALU_tb__DOT__check__8__expected_zero = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__9__a_in;
    __Vtask_ALU_tb__DOT__check__9__a_in = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__9__b_in;
    __Vtask_ALU_tb__DOT__check__9__b_in = 0;
    CData/*3:0*/ __Vtask_ALU_tb__DOT__check__9__sel;
    __Vtask_ALU_tb__DOT__check__9__sel = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__9__expected;
    __Vtask_ALU_tb__DOT__check__9__expected = 0;
    std::string __Vtask_ALU_tb__DOT__check__9__name;
    CData/*0:0*/ __Vtask_ALU_tb__DOT__check__9__expected_zero;
    __Vtask_ALU_tb__DOT__check__9__expected_zero = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__10__a_in;
    __Vtask_ALU_tb__DOT__check__10__a_in = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__10__b_in;
    __Vtask_ALU_tb__DOT__check__10__b_in = 0;
    CData/*3:0*/ __Vtask_ALU_tb__DOT__check__10__sel;
    __Vtask_ALU_tb__DOT__check__10__sel = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__10__expected;
    __Vtask_ALU_tb__DOT__check__10__expected = 0;
    std::string __Vtask_ALU_tb__DOT__check__10__name;
    CData/*0:0*/ __Vtask_ALU_tb__DOT__check__10__expected_zero;
    __Vtask_ALU_tb__DOT__check__10__expected_zero = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__11__a_in;
    __Vtask_ALU_tb__DOT__check__11__a_in = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__11__b_in;
    __Vtask_ALU_tb__DOT__check__11__b_in = 0;
    CData/*3:0*/ __Vtask_ALU_tb__DOT__check__11__sel;
    __Vtask_ALU_tb__DOT__check__11__sel = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__11__expected;
    __Vtask_ALU_tb__DOT__check__11__expected = 0;
    std::string __Vtask_ALU_tb__DOT__check__11__name;
    CData/*0:0*/ __Vtask_ALU_tb__DOT__check__11__expected_zero;
    __Vtask_ALU_tb__DOT__check__11__expected_zero = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__12__a_in;
    __Vtask_ALU_tb__DOT__check__12__a_in = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__12__b_in;
    __Vtask_ALU_tb__DOT__check__12__b_in = 0;
    CData/*3:0*/ __Vtask_ALU_tb__DOT__check__12__sel;
    __Vtask_ALU_tb__DOT__check__12__sel = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__12__expected;
    __Vtask_ALU_tb__DOT__check__12__expected = 0;
    std::string __Vtask_ALU_tb__DOT__check__12__name;
    CData/*0:0*/ __Vtask_ALU_tb__DOT__check__12__expected_zero;
    __Vtask_ALU_tb__DOT__check__12__expected_zero = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__13__a_in;
    __Vtask_ALU_tb__DOT__check__13__a_in = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__13__b_in;
    __Vtask_ALU_tb__DOT__check__13__b_in = 0;
    CData/*3:0*/ __Vtask_ALU_tb__DOT__check__13__sel;
    __Vtask_ALU_tb__DOT__check__13__sel = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__13__expected;
    __Vtask_ALU_tb__DOT__check__13__expected = 0;
    std::string __Vtask_ALU_tb__DOT__check__13__name;
    CData/*0:0*/ __Vtask_ALU_tb__DOT__check__13__expected_zero;
    __Vtask_ALU_tb__DOT__check__13__expected_zero = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__14__a_in;
    __Vtask_ALU_tb__DOT__check__14__a_in = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__14__b_in;
    __Vtask_ALU_tb__DOT__check__14__b_in = 0;
    CData/*3:0*/ __Vtask_ALU_tb__DOT__check__14__sel;
    __Vtask_ALU_tb__DOT__check__14__sel = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__14__expected;
    __Vtask_ALU_tb__DOT__check__14__expected = 0;
    std::string __Vtask_ALU_tb__DOT__check__14__name;
    CData/*0:0*/ __Vtask_ALU_tb__DOT__check__14__expected_zero;
    __Vtask_ALU_tb__DOT__check__14__expected_zero = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__15__a_in;
    __Vtask_ALU_tb__DOT__check__15__a_in = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__15__b_in;
    __Vtask_ALU_tb__DOT__check__15__b_in = 0;
    CData/*3:0*/ __Vtask_ALU_tb__DOT__check__15__sel;
    __Vtask_ALU_tb__DOT__check__15__sel = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check__15__expected;
    __Vtask_ALU_tb__DOT__check__15__expected = 0;
    std::string __Vtask_ALU_tb__DOT__check__15__name;
    CData/*0:0*/ __Vtask_ALU_tb__DOT__check__15__expected_zero;
    __Vtask_ALU_tb__DOT__check__15__expected_zero = 0;
    // Body
    __Vtask_ALU_tb__DOT__check__0__expected_zero = 0U;
    __Vtask_ALU_tb__DOT__check__0__name = std::string{"ADD base case"};
    __Vtask_ALU_tb__DOT__check__0__expected = 0x18U;
    __Vtask_ALU_tb__DOT__check__0__sel = 0U;
    __Vtask_ALU_tb__DOT__check__0__b_in = 9U;
    __Vtask_ALU_tb__DOT__check__0__a_in = 0xfU;
    vlSelf->ALU_tb__DOT__a = 0xfU;
    vlSelf->ALU_tb__DOT__b = 9U;
    vlSelf->ALU_tb__DOT__alu_select = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       37);
    if (VL_UNLIKELY((vlSelf->ALU_tb__DOT__result != __Vtask_ALU_tb__DOT__check__0__expected))) {
        VL_WRITEF("FAIL: %@ | a=%0# b=%0# sel=%b | expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__0__name),
                  32,__Vtask_ALU_tb__DOT__check__0__a_in,
                  32,__Vtask_ALU_tb__DOT__check__0__b_in,
                  4,(IData)(__Vtask_ALU_tb__DOT__check__0__sel),
                  32,__Vtask_ALU_tb__DOT__check__0__expected,
                  32,vlSelf->ALU_tb__DOT__result);
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else if (((0U == vlSelf->ALU_tb__DOT__result) 
                != (IData)(__Vtask_ALU_tb__DOT__check__0__expected_zero))) {
        VL_WRITEF("FAIL: %@ | zero flag: expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__0__name),
                  1,(IData)(__Vtask_ALU_tb__DOT__check__0__expected_zero),
                  1,(0U == vlSelf->ALU_tb__DOT__result));
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_ALU_tb__DOT__check__0__name));
        vlSelf->ALU_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__pass_count);
    }
    __Vtask_ALU_tb__DOT__check__1__expected_zero = 0U;
    __Vtask_ALU_tb__DOT__check__1__name = std::string{"ADD overflow"};
    __Vtask_ALU_tb__DOT__check__1__expected = 0x80000000U;
    __Vtask_ALU_tb__DOT__check__1__sel = 0U;
    __Vtask_ALU_tb__DOT__check__1__b_in = 1U;
    __Vtask_ALU_tb__DOT__check__1__a_in = 0x7fffffffU;
    vlSelf->ALU_tb__DOT__a = __Vtask_ALU_tb__DOT__check__1__a_in;
    vlSelf->ALU_tb__DOT__b = __Vtask_ALU_tb__DOT__check__1__b_in;
    vlSelf->ALU_tb__DOT__alu_select = __Vtask_ALU_tb__DOT__check__1__sel;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       37);
    if (VL_UNLIKELY((vlSelf->ALU_tb__DOT__result != __Vtask_ALU_tb__DOT__check__1__expected))) {
        VL_WRITEF("FAIL: %@ | a=%0# b=%0# sel=%b | expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__1__name),
                  32,__Vtask_ALU_tb__DOT__check__1__a_in,
                  32,__Vtask_ALU_tb__DOT__check__1__b_in,
                  4,(IData)(__Vtask_ALU_tb__DOT__check__1__sel),
                  32,__Vtask_ALU_tb__DOT__check__1__expected,
                  32,vlSelf->ALU_tb__DOT__result);
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else if (((0U == vlSelf->ALU_tb__DOT__result) 
                != (IData)(__Vtask_ALU_tb__DOT__check__1__expected_zero))) {
        VL_WRITEF("FAIL: %@ | zero flag: expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__1__name),
                  1,(IData)(__Vtask_ALU_tb__DOT__check__1__expected_zero),
                  1,(0U == vlSelf->ALU_tb__DOT__result));
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_ALU_tb__DOT__check__1__name));
        vlSelf->ALU_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__pass_count);
    }
    __Vtask_ALU_tb__DOT__check__2__expected_zero = 0U;
    __Vtask_ALU_tb__DOT__check__2__name = std::string{"SUB base case"};
    __Vtask_ALU_tb__DOT__check__2__expected = 6U;
    __Vtask_ALU_tb__DOT__check__2__sel = 1U;
    __Vtask_ALU_tb__DOT__check__2__b_in = 9U;
    __Vtask_ALU_tb__DOT__check__2__a_in = 0xfU;
    vlSelf->ALU_tb__DOT__a = __Vtask_ALU_tb__DOT__check__2__a_in;
    vlSelf->ALU_tb__DOT__b = __Vtask_ALU_tb__DOT__check__2__b_in;
    vlSelf->ALU_tb__DOT__alu_select = __Vtask_ALU_tb__DOT__check__2__sel;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       37);
    if (VL_UNLIKELY((vlSelf->ALU_tb__DOT__result != __Vtask_ALU_tb__DOT__check__2__expected))) {
        VL_WRITEF("FAIL: %@ | a=%0# b=%0# sel=%b | expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__2__name),
                  32,__Vtask_ALU_tb__DOT__check__2__a_in,
                  32,__Vtask_ALU_tb__DOT__check__2__b_in,
                  4,(IData)(__Vtask_ALU_tb__DOT__check__2__sel),
                  32,__Vtask_ALU_tb__DOT__check__2__expected,
                  32,vlSelf->ALU_tb__DOT__result);
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else if (((0U == vlSelf->ALU_tb__DOT__result) 
                != (IData)(__Vtask_ALU_tb__DOT__check__2__expected_zero))) {
        VL_WRITEF("FAIL: %@ | zero flag: expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__2__name),
                  1,(IData)(__Vtask_ALU_tb__DOT__check__2__expected_zero),
                  1,(0U == vlSelf->ALU_tb__DOT__result));
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_ALU_tb__DOT__check__2__name));
        vlSelf->ALU_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__pass_count);
    }
    __Vtask_ALU_tb__DOT__check__3__expected_zero = 0U;
    __Vtask_ALU_tb__DOT__check__3__name = std::string{"SUB neg result"};
    __Vtask_ALU_tb__DOT__check__3__expected = 0xfffffffbU;
    __Vtask_ALU_tb__DOT__check__3__sel = 1U;
    __Vtask_ALU_tb__DOT__check__3__b_in = 0xaU;
    __Vtask_ALU_tb__DOT__check__3__a_in = 5U;
    vlSelf->ALU_tb__DOT__a = __Vtask_ALU_tb__DOT__check__3__a_in;
    vlSelf->ALU_tb__DOT__b = __Vtask_ALU_tb__DOT__check__3__b_in;
    vlSelf->ALU_tb__DOT__alu_select = __Vtask_ALU_tb__DOT__check__3__sel;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       37);
    if (VL_UNLIKELY((vlSelf->ALU_tb__DOT__result != __Vtask_ALU_tb__DOT__check__3__expected))) {
        VL_WRITEF("FAIL: %@ | a=%0# b=%0# sel=%b | expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__3__name),
                  32,__Vtask_ALU_tb__DOT__check__3__a_in,
                  32,__Vtask_ALU_tb__DOT__check__3__b_in,
                  4,(IData)(__Vtask_ALU_tb__DOT__check__3__sel),
                  32,__Vtask_ALU_tb__DOT__check__3__expected,
                  32,vlSelf->ALU_tb__DOT__result);
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else if (((0U == vlSelf->ALU_tb__DOT__result) 
                != (IData)(__Vtask_ALU_tb__DOT__check__3__expected_zero))) {
        VL_WRITEF("FAIL: %@ | zero flag: expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__3__name),
                  1,(IData)(__Vtask_ALU_tb__DOT__check__3__expected_zero),
                  1,(0U == vlSelf->ALU_tb__DOT__result));
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_ALU_tb__DOT__check__3__name));
        vlSelf->ALU_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__pass_count);
    }
    __Vtask_ALU_tb__DOT__check__4__expected_zero = 1U;
    __Vtask_ALU_tb__DOT__check__4__name = std::string{"SUB zero flag case"};
    __Vtask_ALU_tb__DOT__check__4__expected = 0U;
    __Vtask_ALU_tb__DOT__check__4__sel = 1U;
    __Vtask_ALU_tb__DOT__check__4__b_in = 9U;
    __Vtask_ALU_tb__DOT__check__4__a_in = 9U;
    vlSelf->ALU_tb__DOT__a = __Vtask_ALU_tb__DOT__check__4__a_in;
    vlSelf->ALU_tb__DOT__b = __Vtask_ALU_tb__DOT__check__4__b_in;
    vlSelf->ALU_tb__DOT__alu_select = __Vtask_ALU_tb__DOT__check__4__sel;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       37);
    if (VL_UNLIKELY((vlSelf->ALU_tb__DOT__result != __Vtask_ALU_tb__DOT__check__4__expected))) {
        VL_WRITEF("FAIL: %@ | a=%0# b=%0# sel=%b | expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__4__name),
                  32,__Vtask_ALU_tb__DOT__check__4__a_in,
                  32,__Vtask_ALU_tb__DOT__check__4__b_in,
                  4,(IData)(__Vtask_ALU_tb__DOT__check__4__sel),
                  32,__Vtask_ALU_tb__DOT__check__4__expected,
                  32,vlSelf->ALU_tb__DOT__result);
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else if (((0U == vlSelf->ALU_tb__DOT__result) 
                != (IData)(__Vtask_ALU_tb__DOT__check__4__expected_zero))) {
        VL_WRITEF("FAIL: %@ | zero flag: expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__4__name),
                  1,(IData)(__Vtask_ALU_tb__DOT__check__4__expected_zero),
                  1,(0U == vlSelf->ALU_tb__DOT__result));
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_ALU_tb__DOT__check__4__name));
        vlSelf->ALU_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__pass_count);
    }
    __Vtask_ALU_tb__DOT__check__5__expected_zero = 1U;
    __Vtask_ALU_tb__DOT__check__5__name = std::string{"AND"};
    __Vtask_ALU_tb__DOT__check__5__expected = 0U;
    __Vtask_ALU_tb__DOT__check__5__sel = 2U;
    __Vtask_ALU_tb__DOT__check__5__b_in = 0xf0f0f0fU;
    __Vtask_ALU_tb__DOT__check__5__a_in = 0xf0f0f0f0U;
    vlSelf->ALU_tb__DOT__a = __Vtask_ALU_tb__DOT__check__5__a_in;
    vlSelf->ALU_tb__DOT__b = __Vtask_ALU_tb__DOT__check__5__b_in;
    vlSelf->ALU_tb__DOT__alu_select = __Vtask_ALU_tb__DOT__check__5__sel;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       37);
    if (VL_UNLIKELY((vlSelf->ALU_tb__DOT__result != __Vtask_ALU_tb__DOT__check__5__expected))) {
        VL_WRITEF("FAIL: %@ | a=%0# b=%0# sel=%b | expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__5__name),
                  32,__Vtask_ALU_tb__DOT__check__5__a_in,
                  32,__Vtask_ALU_tb__DOT__check__5__b_in,
                  4,(IData)(__Vtask_ALU_tb__DOT__check__5__sel),
                  32,__Vtask_ALU_tb__DOT__check__5__expected,
                  32,vlSelf->ALU_tb__DOT__result);
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else if (((0U == vlSelf->ALU_tb__DOT__result) 
                != (IData)(__Vtask_ALU_tb__DOT__check__5__expected_zero))) {
        VL_WRITEF("FAIL: %@ | zero flag: expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__5__name),
                  1,(IData)(__Vtask_ALU_tb__DOT__check__5__expected_zero),
                  1,(0U == vlSelf->ALU_tb__DOT__result));
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_ALU_tb__DOT__check__5__name));
        vlSelf->ALU_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__pass_count);
    }
    __Vtask_ALU_tb__DOT__check__6__expected_zero = 0U;
    __Vtask_ALU_tb__DOT__check__6__name = std::string{"OR"};
    __Vtask_ALU_tb__DOT__check__6__expected = 0xffffffffU;
    __Vtask_ALU_tb__DOT__check__6__sel = 3U;
    __Vtask_ALU_tb__DOT__check__6__b_in = 0xf0f0f0fU;
    __Vtask_ALU_tb__DOT__check__6__a_in = 0xf0f0f0f0U;
    vlSelf->ALU_tb__DOT__a = __Vtask_ALU_tb__DOT__check__6__a_in;
    vlSelf->ALU_tb__DOT__b = __Vtask_ALU_tb__DOT__check__6__b_in;
    vlSelf->ALU_tb__DOT__alu_select = __Vtask_ALU_tb__DOT__check__6__sel;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       37);
    if (VL_UNLIKELY((vlSelf->ALU_tb__DOT__result != __Vtask_ALU_tb__DOT__check__6__expected))) {
        VL_WRITEF("FAIL: %@ | a=%0# b=%0# sel=%b | expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__6__name),
                  32,__Vtask_ALU_tb__DOT__check__6__a_in,
                  32,__Vtask_ALU_tb__DOT__check__6__b_in,
                  4,(IData)(__Vtask_ALU_tb__DOT__check__6__sel),
                  32,__Vtask_ALU_tb__DOT__check__6__expected,
                  32,vlSelf->ALU_tb__DOT__result);
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else if (((0U == vlSelf->ALU_tb__DOT__result) 
                != (IData)(__Vtask_ALU_tb__DOT__check__6__expected_zero))) {
        VL_WRITEF("FAIL: %@ | zero flag: expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__6__name),
                  1,(IData)(__Vtask_ALU_tb__DOT__check__6__expected_zero),
                  1,(0U == vlSelf->ALU_tb__DOT__result));
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_ALU_tb__DOT__check__6__name));
        vlSelf->ALU_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__pass_count);
    }
    __Vtask_ALU_tb__DOT__check__7__expected_zero = 0U;
    __Vtask_ALU_tb__DOT__check__7__name = std::string{"XOR"};
    __Vtask_ALU_tb__DOT__check__7__expected = 0xff00ffU;
    __Vtask_ALU_tb__DOT__check__7__sel = 4U;
    __Vtask_ALU_tb__DOT__check__7__b_in = 0xffffffffU;
    __Vtask_ALU_tb__DOT__check__7__a_in = 0xff00ff00U;
    vlSelf->ALU_tb__DOT__a = __Vtask_ALU_tb__DOT__check__7__a_in;
    vlSelf->ALU_tb__DOT__b = __Vtask_ALU_tb__DOT__check__7__b_in;
    vlSelf->ALU_tb__DOT__alu_select = __Vtask_ALU_tb__DOT__check__7__sel;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       37);
    if (VL_UNLIKELY((vlSelf->ALU_tb__DOT__result != __Vtask_ALU_tb__DOT__check__7__expected))) {
        VL_WRITEF("FAIL: %@ | a=%0# b=%0# sel=%b | expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__7__name),
                  32,__Vtask_ALU_tb__DOT__check__7__a_in,
                  32,__Vtask_ALU_tb__DOT__check__7__b_in,
                  4,(IData)(__Vtask_ALU_tb__DOT__check__7__sel),
                  32,__Vtask_ALU_tb__DOT__check__7__expected,
                  32,vlSelf->ALU_tb__DOT__result);
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else if (((0U == vlSelf->ALU_tb__DOT__result) 
                != (IData)(__Vtask_ALU_tb__DOT__check__7__expected_zero))) {
        VL_WRITEF("FAIL: %@ | zero flag: expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__7__name),
                  1,(IData)(__Vtask_ALU_tb__DOT__check__7__expected_zero),
                  1,(0U == vlSelf->ALU_tb__DOT__result));
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_ALU_tb__DOT__check__7__name));
        vlSelf->ALU_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__pass_count);
    }
    __Vtask_ALU_tb__DOT__check__8__expected_zero = 0U;
    __Vtask_ALU_tb__DOT__check__8__name = std::string{"SLL by 4"};
    __Vtask_ALU_tb__DOT__check__8__expected = 0x10U;
    __Vtask_ALU_tb__DOT__check__8__sel = 5U;
    __Vtask_ALU_tb__DOT__check__8__b_in = 4U;
    __Vtask_ALU_tb__DOT__check__8__a_in = 1U;
    vlSelf->ALU_tb__DOT__a = __Vtask_ALU_tb__DOT__check__8__a_in;
    vlSelf->ALU_tb__DOT__b = __Vtask_ALU_tb__DOT__check__8__b_in;
    vlSelf->ALU_tb__DOT__alu_select = __Vtask_ALU_tb__DOT__check__8__sel;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       37);
    if (VL_UNLIKELY((vlSelf->ALU_tb__DOT__result != __Vtask_ALU_tb__DOT__check__8__expected))) {
        VL_WRITEF("FAIL: %@ | a=%0# b=%0# sel=%b | expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__8__name),
                  32,__Vtask_ALU_tb__DOT__check__8__a_in,
                  32,__Vtask_ALU_tb__DOT__check__8__b_in,
                  4,(IData)(__Vtask_ALU_tb__DOT__check__8__sel),
                  32,__Vtask_ALU_tb__DOT__check__8__expected,
                  32,vlSelf->ALU_tb__DOT__result);
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else if (((0U == vlSelf->ALU_tb__DOT__result) 
                != (IData)(__Vtask_ALU_tb__DOT__check__8__expected_zero))) {
        VL_WRITEF("FAIL: %@ | zero flag: expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__8__name),
                  1,(IData)(__Vtask_ALU_tb__DOT__check__8__expected_zero),
                  1,(0U == vlSelf->ALU_tb__DOT__result));
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_ALU_tb__DOT__check__8__name));
        vlSelf->ALU_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__pass_count);
    }
    __Vtask_ALU_tb__DOT__check__9__expected_zero = 0U;
    __Vtask_ALU_tb__DOT__check__9__name = std::string{"SLL by 0"};
    __Vtask_ALU_tb__DOT__check__9__expected = 1U;
    __Vtask_ALU_tb__DOT__check__9__sel = 5U;
    __Vtask_ALU_tb__DOT__check__9__b_in = 0U;
    __Vtask_ALU_tb__DOT__check__9__a_in = 1U;
    vlSelf->ALU_tb__DOT__a = __Vtask_ALU_tb__DOT__check__9__a_in;
    vlSelf->ALU_tb__DOT__b = __Vtask_ALU_tb__DOT__check__9__b_in;
    vlSelf->ALU_tb__DOT__alu_select = __Vtask_ALU_tb__DOT__check__9__sel;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       37);
    if (VL_UNLIKELY((vlSelf->ALU_tb__DOT__result != __Vtask_ALU_tb__DOT__check__9__expected))) {
        VL_WRITEF("FAIL: %@ | a=%0# b=%0# sel=%b | expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__9__name),
                  32,__Vtask_ALU_tb__DOT__check__9__a_in,
                  32,__Vtask_ALU_tb__DOT__check__9__b_in,
                  4,(IData)(__Vtask_ALU_tb__DOT__check__9__sel),
                  32,__Vtask_ALU_tb__DOT__check__9__expected,
                  32,vlSelf->ALU_tb__DOT__result);
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else if (((0U == vlSelf->ALU_tb__DOT__result) 
                != (IData)(__Vtask_ALU_tb__DOT__check__9__expected_zero))) {
        VL_WRITEF("FAIL: %@ | zero flag: expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__9__name),
                  1,(IData)(__Vtask_ALU_tb__DOT__check__9__expected_zero),
                  1,(0U == vlSelf->ALU_tb__DOT__result));
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_ALU_tb__DOT__check__9__name));
        vlSelf->ALU_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__pass_count);
    }
    __Vtask_ALU_tb__DOT__check__10__expected_zero = 0U;
    __Vtask_ALU_tb__DOT__check__10__name = std::string{"SRL by 1"};
    __Vtask_ALU_tb__DOT__check__10__expected = 0x40000000U;
    __Vtask_ALU_tb__DOT__check__10__sel = 6U;
    __Vtask_ALU_tb__DOT__check__10__b_in = 1U;
    __Vtask_ALU_tb__DOT__check__10__a_in = 0x80000000U;
    vlSelf->ALU_tb__DOT__a = __Vtask_ALU_tb__DOT__check__10__a_in;
    vlSelf->ALU_tb__DOT__b = __Vtask_ALU_tb__DOT__check__10__b_in;
    vlSelf->ALU_tb__DOT__alu_select = __Vtask_ALU_tb__DOT__check__10__sel;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       37);
    if (VL_UNLIKELY((vlSelf->ALU_tb__DOT__result != __Vtask_ALU_tb__DOT__check__10__expected))) {
        VL_WRITEF("FAIL: %@ | a=%0# b=%0# sel=%b | expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__10__name),
                  32,__Vtask_ALU_tb__DOT__check__10__a_in,
                  32,__Vtask_ALU_tb__DOT__check__10__b_in,
                  4,(IData)(__Vtask_ALU_tb__DOT__check__10__sel),
                  32,__Vtask_ALU_tb__DOT__check__10__expected,
                  32,vlSelf->ALU_tb__DOT__result);
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else if (((0U == vlSelf->ALU_tb__DOT__result) 
                != (IData)(__Vtask_ALU_tb__DOT__check__10__expected_zero))) {
        VL_WRITEF("FAIL: %@ | zero flag: expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__10__name),
                  1,(IData)(__Vtask_ALU_tb__DOT__check__10__expected_zero),
                  1,(0U == vlSelf->ALU_tb__DOT__result));
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_ALU_tb__DOT__check__10__name));
        vlSelf->ALU_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__pass_count);
    }
    __Vtask_ALU_tb__DOT__check__11__expected_zero = 0U;
    __Vtask_ALU_tb__DOT__check__11__name = std::string{"SRA sign extend success"};
    __Vtask_ALU_tb__DOT__check__11__expected = 0xffffffffU;
    __Vtask_ALU_tb__DOT__check__11__sel = 7U;
    __Vtask_ALU_tb__DOT__check__11__b_in = 1U;
    __Vtask_ALU_tb__DOT__check__11__a_in = 0xffffffffU;
    vlSelf->ALU_tb__DOT__a = __Vtask_ALU_tb__DOT__check__11__a_in;
    vlSelf->ALU_tb__DOT__b = __Vtask_ALU_tb__DOT__check__11__b_in;
    vlSelf->ALU_tb__DOT__alu_select = __Vtask_ALU_tb__DOT__check__11__sel;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       37);
    if (VL_UNLIKELY((vlSelf->ALU_tb__DOT__result != __Vtask_ALU_tb__DOT__check__11__expected))) {
        VL_WRITEF("FAIL: %@ | a=%0# b=%0# sel=%b | expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__11__name),
                  32,__Vtask_ALU_tb__DOT__check__11__a_in,
                  32,__Vtask_ALU_tb__DOT__check__11__b_in,
                  4,(IData)(__Vtask_ALU_tb__DOT__check__11__sel),
                  32,__Vtask_ALU_tb__DOT__check__11__expected,
                  32,vlSelf->ALU_tb__DOT__result);
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else if (((0U == vlSelf->ALU_tb__DOT__result) 
                != (IData)(__Vtask_ALU_tb__DOT__check__11__expected_zero))) {
        VL_WRITEF("FAIL: %@ | zero flag: expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__11__name),
                  1,(IData)(__Vtask_ALU_tb__DOT__check__11__expected_zero),
                  1,(0U == vlSelf->ALU_tb__DOT__result));
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_ALU_tb__DOT__check__11__name));
        vlSelf->ALU_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__pass_count);
    }
    __Vtask_ALU_tb__DOT__check__12__expected_zero = 0U;
    __Vtask_ALU_tb__DOT__check__12__name = std::string{"SRA positive"};
    __Vtask_ALU_tb__DOT__check__12__expected = 0x3fffffffU;
    __Vtask_ALU_tb__DOT__check__12__sel = 7U;
    __Vtask_ALU_tb__DOT__check__12__b_in = 1U;
    __Vtask_ALU_tb__DOT__check__12__a_in = 0x7fffffffU;
    vlSelf->ALU_tb__DOT__a = __Vtask_ALU_tb__DOT__check__12__a_in;
    vlSelf->ALU_tb__DOT__b = __Vtask_ALU_tb__DOT__check__12__b_in;
    vlSelf->ALU_tb__DOT__alu_select = __Vtask_ALU_tb__DOT__check__12__sel;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       37);
    if (VL_UNLIKELY((vlSelf->ALU_tb__DOT__result != __Vtask_ALU_tb__DOT__check__12__expected))) {
        VL_WRITEF("FAIL: %@ | a=%0# b=%0# sel=%b | expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__12__name),
                  32,__Vtask_ALU_tb__DOT__check__12__a_in,
                  32,__Vtask_ALU_tb__DOT__check__12__b_in,
                  4,(IData)(__Vtask_ALU_tb__DOT__check__12__sel),
                  32,__Vtask_ALU_tb__DOT__check__12__expected,
                  32,vlSelf->ALU_tb__DOT__result);
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else if (((0U == vlSelf->ALU_tb__DOT__result) 
                != (IData)(__Vtask_ALU_tb__DOT__check__12__expected_zero))) {
        VL_WRITEF("FAIL: %@ | zero flag: expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__12__name),
                  1,(IData)(__Vtask_ALU_tb__DOT__check__12__expected_zero),
                  1,(0U == vlSelf->ALU_tb__DOT__result));
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_ALU_tb__DOT__check__12__name));
        vlSelf->ALU_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__pass_count);
    }
    __Vtask_ALU_tb__DOT__check__13__expected_zero = 0U;
    __Vtask_ALU_tb__DOT__check__13__name = std::string{"SLT: -1 < 1 (signed)"};
    __Vtask_ALU_tb__DOT__check__13__expected = 1U;
    __Vtask_ALU_tb__DOT__check__13__sel = 8U;
    __Vtask_ALU_tb__DOT__check__13__b_in = 1U;
    __Vtask_ALU_tb__DOT__check__13__a_in = 0xffffffffU;
    vlSelf->ALU_tb__DOT__a = __Vtask_ALU_tb__DOT__check__13__a_in;
    vlSelf->ALU_tb__DOT__b = __Vtask_ALU_tb__DOT__check__13__b_in;
    vlSelf->ALU_tb__DOT__alu_select = __Vtask_ALU_tb__DOT__check__13__sel;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       37);
    if (VL_UNLIKELY((vlSelf->ALU_tb__DOT__result != __Vtask_ALU_tb__DOT__check__13__expected))) {
        VL_WRITEF("FAIL: %@ | a=%0# b=%0# sel=%b | expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__13__name),
                  32,__Vtask_ALU_tb__DOT__check__13__a_in,
                  32,__Vtask_ALU_tb__DOT__check__13__b_in,
                  4,(IData)(__Vtask_ALU_tb__DOT__check__13__sel),
                  32,__Vtask_ALU_tb__DOT__check__13__expected,
                  32,vlSelf->ALU_tb__DOT__result);
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else if (((0U == vlSelf->ALU_tb__DOT__result) 
                != (IData)(__Vtask_ALU_tb__DOT__check__13__expected_zero))) {
        VL_WRITEF("FAIL: %@ | zero flag: expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__13__name),
                  1,(IData)(__Vtask_ALU_tb__DOT__check__13__expected_zero),
                  1,(0U == vlSelf->ALU_tb__DOT__result));
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_ALU_tb__DOT__check__13__name));
        vlSelf->ALU_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__pass_count);
    }
    __Vtask_ALU_tb__DOT__check__14__expected_zero = 1U;
    __Vtask_ALU_tb__DOT__check__14__name = std::string{"SLTU: big_unsigned < 1 is false"};
    __Vtask_ALU_tb__DOT__check__14__expected = 0U;
    __Vtask_ALU_tb__DOT__check__14__sel = 9U;
    __Vtask_ALU_tb__DOT__check__14__b_in = 1U;
    __Vtask_ALU_tb__DOT__check__14__a_in = 0xffffffffU;
    vlSelf->ALU_tb__DOT__a = __Vtask_ALU_tb__DOT__check__14__a_in;
    vlSelf->ALU_tb__DOT__b = __Vtask_ALU_tb__DOT__check__14__b_in;
    vlSelf->ALU_tb__DOT__alu_select = __Vtask_ALU_tb__DOT__check__14__sel;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       37);
    if (VL_UNLIKELY((vlSelf->ALU_tb__DOT__result != __Vtask_ALU_tb__DOT__check__14__expected))) {
        VL_WRITEF("FAIL: %@ | a=%0# b=%0# sel=%b | expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__14__name),
                  32,__Vtask_ALU_tb__DOT__check__14__a_in,
                  32,__Vtask_ALU_tb__DOT__check__14__b_in,
                  4,(IData)(__Vtask_ALU_tb__DOT__check__14__sel),
                  32,__Vtask_ALU_tb__DOT__check__14__expected,
                  32,vlSelf->ALU_tb__DOT__result);
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else if (((0U == vlSelf->ALU_tb__DOT__result) 
                != (IData)(__Vtask_ALU_tb__DOT__check__14__expected_zero))) {
        VL_WRITEF("FAIL: %@ | zero flag: expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__14__name),
                  1,(IData)(__Vtask_ALU_tb__DOT__check__14__expected_zero),
                  1,(0U == vlSelf->ALU_tb__DOT__result));
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_ALU_tb__DOT__check__14__name));
        vlSelf->ALU_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__pass_count);
    }
    __Vtask_ALU_tb__DOT__check__15__expected_zero = 1U;
    __Vtask_ALU_tb__DOT__check__15__name = std::string{"invalid select -> 0"};
    __Vtask_ALU_tb__DOT__check__15__expected = 0U;
    __Vtask_ALU_tb__DOT__check__15__sel = 0xfU;
    __Vtask_ALU_tb__DOT__check__15__b_in = 5U;
    __Vtask_ALU_tb__DOT__check__15__a_in = 5U;
    vlSelf->ALU_tb__DOT__a = __Vtask_ALU_tb__DOT__check__15__a_in;
    vlSelf->ALU_tb__DOT__b = __Vtask_ALU_tb__DOT__check__15__b_in;
    vlSelf->ALU_tb__DOT__alu_select = __Vtask_ALU_tb__DOT__check__15__sel;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "testbench/ALU_tb.sv", 
                                       37);
    if (VL_UNLIKELY((vlSelf->ALU_tb__DOT__result != __Vtask_ALU_tb__DOT__check__15__expected))) {
        VL_WRITEF("FAIL: %@ | a=%0# b=%0# sel=%b | expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__15__name),
                  32,__Vtask_ALU_tb__DOT__check__15__a_in,
                  32,__Vtask_ALU_tb__DOT__check__15__b_in,
                  4,(IData)(__Vtask_ALU_tb__DOT__check__15__sel),
                  32,__Vtask_ALU_tb__DOT__check__15__expected,
                  32,vlSelf->ALU_tb__DOT__result);
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else if (((0U == vlSelf->ALU_tb__DOT__result) 
                != (IData)(__Vtask_ALU_tb__DOT__check__15__expected_zero))) {
        VL_WRITEF("FAIL: %@ | zero flag: expected=%0# got=%0#\n",
                  -1,&(__Vtask_ALU_tb__DOT__check__15__name),
                  1,(IData)(__Vtask_ALU_tb__DOT__check__15__expected_zero),
                  1,(0U == vlSelf->ALU_tb__DOT__result));
        vlSelf->ALU_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_ALU_tb__DOT__check__15__name));
        vlSelf->ALU_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->ALU_tb__DOT__pass_count);
    }
    VL_WRITEF("\n---- %0d passed, %0d failed ----\n",
              32,vlSelf->ALU_tb__DOT__pass_count,32,
              vlSelf->ALU_tb__DOT__fail_count);
    VL_FINISH_MT("testbench/ALU_tb.sv", 93, "");
}

VL_INLINE_OPT void VALU_tb___024root___act_sequent__TOP__0(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->ALU_tb__DOT__result = ((8U & (IData)(vlSelf->ALU_tb__DOT__alu_select))
                                    ? ((4U & (IData)(vlSelf->ALU_tb__DOT__alu_select))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelf->ALU_tb__DOT__alu_select))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ALU_tb__DOT__alu_select))
                                                  ? 
                                                 ((vlSelf->ALU_tb__DOT__a 
                                                   < vlSelf->ALU_tb__DOT__b)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 (VL_LTS_III(32, vlSelf->ALU_tb__DOT__a, vlSelf->ALU_tb__DOT__b)
                                                   ? 1U
                                                   : 0U))))
                                    : ((4U & (IData)(vlSelf->ALU_tb__DOT__alu_select))
                                        ? ((2U & (IData)(vlSelf->ALU_tb__DOT__alu_select))
                                            ? ((1U 
                                                & (IData)(vlSelf->ALU_tb__DOT__alu_select))
                                                ? VL_SHIFTRS_III(32,32,5, vlSelf->ALU_tb__DOT__a, 
                                                                 (0x1fU 
                                                                  & vlSelf->ALU_tb__DOT__b))
                                                : (vlSelf->ALU_tb__DOT__a 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->ALU_tb__DOT__b)))
                                            : ((1U 
                                                & (IData)(vlSelf->ALU_tb__DOT__alu_select))
                                                ? (vlSelf->ALU_tb__DOT__a 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelf->ALU_tb__DOT__b))
                                                : (vlSelf->ALU_tb__DOT__a 
                                                   ^ vlSelf->ALU_tb__DOT__b)))
                                        : ((2U & (IData)(vlSelf->ALU_tb__DOT__alu_select))
                                            ? ((1U 
                                                & (IData)(vlSelf->ALU_tb__DOT__alu_select))
                                                ? (vlSelf->ALU_tb__DOT__a 
                                                   | vlSelf->ALU_tb__DOT__b)
                                                : (vlSelf->ALU_tb__DOT__a 
                                                   & vlSelf->ALU_tb__DOT__b))
                                            : ((1U 
                                                & (IData)(vlSelf->ALU_tb__DOT__alu_select))
                                                ? (vlSelf->ALU_tb__DOT__a 
                                                   - vlSelf->ALU_tb__DOT__b)
                                                : (vlSelf->ALU_tb__DOT__a 
                                                   + vlSelf->ALU_tb__DOT__b)))));
}

void VALU_tb___024root___eval_act(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VALU_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VALU_tb___024root___eval_nba(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VALU_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VALU_tb___024root___timing_resume(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VALU_tb___024root___eval_triggers__act(VALU_tb___024root* vlSelf);

bool VALU_tb___024root___eval_phase__act(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VALU_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VALU_tb___024root___timing_resume(vlSelf);
        VALU_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VALU_tb___024root___eval_phase__nba(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VALU_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU_tb___024root___dump_triggers__nba(VALU_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU_tb___024root___dump_triggers__act(VALU_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VALU_tb___024root___eval(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VALU_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/ALU_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VALU_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/ALU_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VALU_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VALU_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VALU_tb___024root___eval_debug_assertions(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
