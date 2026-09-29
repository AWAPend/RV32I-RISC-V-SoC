// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VData_memory_tb.h for the primary calling header

#include "VData_memory_tb__pch.h"
#include "VData_memory_tb___024root.h"

VlCoroutine VData_memory_tb___024root___eval_initial__TOP__Vtiming__0(VData_memory_tb___024root* vlSelf);
VlCoroutine VData_memory_tb___024root___eval_initial__TOP__Vtiming__1(VData_memory_tb___024root* vlSelf);

void VData_memory_tb___024root___eval_initial(VData_memory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root___eval_initial\n"); );
    // Body
    VData_memory_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VData_memory_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__Data_memory_tb__DOT__clk__0 
        = vlSelf->Data_memory_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine VData_memory_tb___024root___eval_initial__TOP__Vtiming__0(VData_memory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__1__addr;
    __Vtask_Data_memory_tb__DOT__check_read__1__addr = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__check_read__1__f3;
    __Vtask_Data_memory_tb__DOT__check_read__1__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__1__expected;
    __Vtask_Data_memory_tb__DOT__check_read__1__expected = 0;
    std::string __Vtask_Data_memory_tb__DOT__check_read__1__name;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__2__addr;
    __Vtask_Data_memory_tb__DOT__do_write__2__addr = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__2__data;
    __Vtask_Data_memory_tb__DOT__do_write__2__data = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__do_write__2__f3;
    __Vtask_Data_memory_tb__DOT__do_write__2__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__3__addr;
    __Vtask_Data_memory_tb__DOT__check_read__3__addr = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__check_read__3__f3;
    __Vtask_Data_memory_tb__DOT__check_read__3__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__3__expected;
    __Vtask_Data_memory_tb__DOT__check_read__3__expected = 0;
    std::string __Vtask_Data_memory_tb__DOT__check_read__3__name;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__4__addr;
    __Vtask_Data_memory_tb__DOT__do_write__4__addr = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__4__data;
    __Vtask_Data_memory_tb__DOT__do_write__4__data = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__do_write__4__f3;
    __Vtask_Data_memory_tb__DOT__do_write__4__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__5__addr;
    __Vtask_Data_memory_tb__DOT__check_read__5__addr = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__check_read__5__f3;
    __Vtask_Data_memory_tb__DOT__check_read__5__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__5__expected;
    __Vtask_Data_memory_tb__DOT__check_read__5__expected = 0;
    std::string __Vtask_Data_memory_tb__DOT__check_read__5__name;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__6__addr;
    __Vtask_Data_memory_tb__DOT__check_read__6__addr = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__check_read__6__f3;
    __Vtask_Data_memory_tb__DOT__check_read__6__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__6__expected;
    __Vtask_Data_memory_tb__DOT__check_read__6__expected = 0;
    std::string __Vtask_Data_memory_tb__DOT__check_read__6__name;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__7__addr;
    __Vtask_Data_memory_tb__DOT__do_write__7__addr = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__7__data;
    __Vtask_Data_memory_tb__DOT__do_write__7__data = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__do_write__7__f3;
    __Vtask_Data_memory_tb__DOT__do_write__7__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__8__addr;
    __Vtask_Data_memory_tb__DOT__do_write__8__addr = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__8__data;
    __Vtask_Data_memory_tb__DOT__do_write__8__data = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__do_write__8__f3;
    __Vtask_Data_memory_tb__DOT__do_write__8__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__9__addr;
    __Vtask_Data_memory_tb__DOT__do_write__9__addr = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__9__data;
    __Vtask_Data_memory_tb__DOT__do_write__9__data = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__do_write__9__f3;
    __Vtask_Data_memory_tb__DOT__do_write__9__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__10__addr;
    __Vtask_Data_memory_tb__DOT__do_write__10__addr = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__10__data;
    __Vtask_Data_memory_tb__DOT__do_write__10__data = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__do_write__10__f3;
    __Vtask_Data_memory_tb__DOT__do_write__10__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__11__addr;
    __Vtask_Data_memory_tb__DOT__check_read__11__addr = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__check_read__11__f3;
    __Vtask_Data_memory_tb__DOT__check_read__11__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__11__expected;
    __Vtask_Data_memory_tb__DOT__check_read__11__expected = 0;
    std::string __Vtask_Data_memory_tb__DOT__check_read__11__name;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__12__addr;
    __Vtask_Data_memory_tb__DOT__check_read__12__addr = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__check_read__12__f3;
    __Vtask_Data_memory_tb__DOT__check_read__12__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__12__expected;
    __Vtask_Data_memory_tb__DOT__check_read__12__expected = 0;
    std::string __Vtask_Data_memory_tb__DOT__check_read__12__name;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__13__addr;
    __Vtask_Data_memory_tb__DOT__check_read__13__addr = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__check_read__13__f3;
    __Vtask_Data_memory_tb__DOT__check_read__13__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__13__expected;
    __Vtask_Data_memory_tb__DOT__check_read__13__expected = 0;
    std::string __Vtask_Data_memory_tb__DOT__check_read__13__name;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__14__addr;
    __Vtask_Data_memory_tb__DOT__check_read__14__addr = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__check_read__14__f3;
    __Vtask_Data_memory_tb__DOT__check_read__14__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__14__expected;
    __Vtask_Data_memory_tb__DOT__check_read__14__expected = 0;
    std::string __Vtask_Data_memory_tb__DOT__check_read__14__name;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__15__addr;
    __Vtask_Data_memory_tb__DOT__check_read__15__addr = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__check_read__15__f3;
    __Vtask_Data_memory_tb__DOT__check_read__15__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__15__expected;
    __Vtask_Data_memory_tb__DOT__check_read__15__expected = 0;
    std::string __Vtask_Data_memory_tb__DOT__check_read__15__name;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__16__addr;
    __Vtask_Data_memory_tb__DOT__do_write__16__addr = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__16__data;
    __Vtask_Data_memory_tb__DOT__do_write__16__data = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__do_write__16__f3;
    __Vtask_Data_memory_tb__DOT__do_write__16__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__17__addr;
    __Vtask_Data_memory_tb__DOT__check_read__17__addr = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__check_read__17__f3;
    __Vtask_Data_memory_tb__DOT__check_read__17__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__17__expected;
    __Vtask_Data_memory_tb__DOT__check_read__17__expected = 0;
    std::string __Vtask_Data_memory_tb__DOT__check_read__17__name;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__18__addr;
    __Vtask_Data_memory_tb__DOT__check_read__18__addr = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__check_read__18__f3;
    __Vtask_Data_memory_tb__DOT__check_read__18__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__18__expected;
    __Vtask_Data_memory_tb__DOT__check_read__18__expected = 0;
    std::string __Vtask_Data_memory_tb__DOT__check_read__18__name;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__19__addr;
    __Vtask_Data_memory_tb__DOT__do_write__19__addr = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__19__data;
    __Vtask_Data_memory_tb__DOT__do_write__19__data = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__do_write__19__f3;
    __Vtask_Data_memory_tb__DOT__do_write__19__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__20__addr;
    __Vtask_Data_memory_tb__DOT__check_read__20__addr = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__check_read__20__f3;
    __Vtask_Data_memory_tb__DOT__check_read__20__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__20__expected;
    __Vtask_Data_memory_tb__DOT__check_read__20__expected = 0;
    std::string __Vtask_Data_memory_tb__DOT__check_read__20__name;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__21__addr;
    __Vtask_Data_memory_tb__DOT__check_read__21__addr = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__check_read__21__f3;
    __Vtask_Data_memory_tb__DOT__check_read__21__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__21__expected;
    __Vtask_Data_memory_tb__DOT__check_read__21__expected = 0;
    std::string __Vtask_Data_memory_tb__DOT__check_read__21__name;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__22__addr;
    __Vtask_Data_memory_tb__DOT__do_write__22__addr = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__22__data;
    __Vtask_Data_memory_tb__DOT__do_write__22__data = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__do_write__22__f3;
    __Vtask_Data_memory_tb__DOT__do_write__22__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__23__addr;
    __Vtask_Data_memory_tb__DOT__do_write__23__addr = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__do_write__23__data;
    __Vtask_Data_memory_tb__DOT__do_write__23__data = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__do_write__23__f3;
    __Vtask_Data_memory_tb__DOT__do_write__23__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__24__addr;
    __Vtask_Data_memory_tb__DOT__check_read__24__addr = 0;
    CData/*2:0*/ __Vtask_Data_memory_tb__DOT__check_read__24__f3;
    __Vtask_Data_memory_tb__DOT__check_read__24__f3 = 0;
    IData/*31:0*/ __Vtask_Data_memory_tb__DOT__check_read__24__expected;
    __Vtask_Data_memory_tb__DOT__check_read__24__expected = 0;
    std::string __Vtask_Data_memory_tb__DOT__check_read__24__name;
    // Body
    vlSelf->Data_memory_tb__DOT__clk = 0U;
    vlSelf->Data_memory_tb__DOT__address = 0U;
    vlSelf->Data_memory_tb__DOT__write_data = 0xdeadbeefU;
    vlSelf->Data_memory_tb__DOT__funct3 = 2U;
    vlSelf->Data_memory_tb__DOT__write_mem = 1U;
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    co_await vlSelf->__VtrigSched_hc25e54c7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Data_memory_tb.clk)", 
                                                       "testbench/Data_memory_tb.sv", 
                                                       80);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       81);
    vlSelf->Data_memory_tb__DOT__write_mem = 0U;
    __Vtask_Data_memory_tb__DOT__check_read__1__name = 
        std::string{"SW/LW round trip"};
    __Vtask_Data_memory_tb__DOT__check_read__1__expected = 0xdeadbeefU;
    __Vtask_Data_memory_tb__DOT__check_read__1__f3 = 2U;
    __Vtask_Data_memory_tb__DOT__check_read__1__addr = 0U;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__check_read__1__addr;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__check_read__1__f3;
    vlSelf->Data_memory_tb__DOT__read_mem = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       89);
    if ((vlSelf->Data_memory_tb__DOT__read_data != __Vtask_Data_memory_tb__DOT__check_read__1__expected)) {
        VL_WRITEF("FAIL: %@ | addr=0x%0x f3=%b expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__1__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__1__addr,
                  3,(IData)(__Vtask_Data_memory_tb__DOT__check_read__1__f3),
                  32,__Vtask_Data_memory_tb__DOT__check_read__1__expected,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | addr=0x%0x data=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__1__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__1__addr,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__pass_count);
    }
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    __Vtask_Data_memory_tb__DOT__do_write__2__f3 = 1U;
    __Vtask_Data_memory_tb__DOT__do_write__2__data = 0xabcdU;
    __Vtask_Data_memory_tb__DOT__do_write__2__addr = 4U;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__do_write__2__addr;
    vlSelf->Data_memory_tb__DOT__write_data = __Vtask_Data_memory_tb__DOT__do_write__2__data;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__do_write__2__f3;
    vlSelf->Data_memory_tb__DOT__write_mem = 1U;
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    co_await vlSelf->__VtrigSched_hc25e54c7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Data_memory_tb.clk)", 
                                                       "testbench/Data_memory_tb.sv", 
                                                       80);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       81);
    vlSelf->Data_memory_tb__DOT__write_mem = 0U;
    __Vtask_Data_memory_tb__DOT__check_read__3__name = 
        std::string{"SH/LHU lower half"};
    __Vtask_Data_memory_tb__DOT__check_read__3__expected = 0xabcdU;
    __Vtask_Data_memory_tb__DOT__check_read__3__f3 = 5U;
    __Vtask_Data_memory_tb__DOT__check_read__3__addr = 4U;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__check_read__3__addr;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__check_read__3__f3;
    vlSelf->Data_memory_tb__DOT__read_mem = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       89);
    if ((vlSelf->Data_memory_tb__DOT__read_data != __Vtask_Data_memory_tb__DOT__check_read__3__expected)) {
        VL_WRITEF("FAIL: %@ | addr=0x%0x f3=%b expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__3__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__3__addr,
                  3,(IData)(__Vtask_Data_memory_tb__DOT__check_read__3__f3),
                  32,__Vtask_Data_memory_tb__DOT__check_read__3__expected,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | addr=0x%0x data=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__3__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__3__addr,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__pass_count);
    }
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    __Vtask_Data_memory_tb__DOT__do_write__4__f3 = 1U;
    __Vtask_Data_memory_tb__DOT__do_write__4__data = 0x1234U;
    __Vtask_Data_memory_tb__DOT__do_write__4__addr = 6U;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__do_write__4__addr;
    vlSelf->Data_memory_tb__DOT__write_data = __Vtask_Data_memory_tb__DOT__do_write__4__data;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__do_write__4__f3;
    vlSelf->Data_memory_tb__DOT__write_mem = 1U;
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    co_await vlSelf->__VtrigSched_hc25e54c7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Data_memory_tb.clk)", 
                                                       "testbench/Data_memory_tb.sv", 
                                                       80);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       81);
    vlSelf->Data_memory_tb__DOT__write_mem = 0U;
    __Vtask_Data_memory_tb__DOT__check_read__5__name = 
        std::string{"SH/LHU upper half"};
    __Vtask_Data_memory_tb__DOT__check_read__5__expected = 0x1234U;
    __Vtask_Data_memory_tb__DOT__check_read__5__f3 = 5U;
    __Vtask_Data_memory_tb__DOT__check_read__5__addr = 6U;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__check_read__5__addr;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__check_read__5__f3;
    vlSelf->Data_memory_tb__DOT__read_mem = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       89);
    if ((vlSelf->Data_memory_tb__DOT__read_data != __Vtask_Data_memory_tb__DOT__check_read__5__expected)) {
        VL_WRITEF("FAIL: %@ | addr=0x%0x f3=%b expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__5__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__5__addr,
                  3,(IData)(__Vtask_Data_memory_tb__DOT__check_read__5__f3),
                  32,__Vtask_Data_memory_tb__DOT__check_read__5__expected,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | addr=0x%0x data=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__5__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__5__addr,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__pass_count);
    }
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    __Vtask_Data_memory_tb__DOT__check_read__6__name = 
        std::string{"lower half untouched after storing upper half"};
    __Vtask_Data_memory_tb__DOT__check_read__6__expected = 0xabcdU;
    __Vtask_Data_memory_tb__DOT__check_read__6__f3 = 5U;
    __Vtask_Data_memory_tb__DOT__check_read__6__addr = 4U;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__check_read__6__addr;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__check_read__6__f3;
    vlSelf->Data_memory_tb__DOT__read_mem = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       89);
    if ((vlSelf->Data_memory_tb__DOT__read_data != __Vtask_Data_memory_tb__DOT__check_read__6__expected)) {
        VL_WRITEF("FAIL: %@ | addr=0x%0x f3=%b expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__6__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__6__addr,
                  3,(IData)(__Vtask_Data_memory_tb__DOT__check_read__6__f3),
                  32,__Vtask_Data_memory_tb__DOT__check_read__6__expected,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | addr=0x%0x data=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__6__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__6__addr,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__pass_count);
    }
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    __Vtask_Data_memory_tb__DOT__do_write__7__f3 = 0U;
    __Vtask_Data_memory_tb__DOT__do_write__7__data = 0xaaU;
    __Vtask_Data_memory_tb__DOT__do_write__7__addr = 8U;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__do_write__7__addr;
    vlSelf->Data_memory_tb__DOT__write_data = __Vtask_Data_memory_tb__DOT__do_write__7__data;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__do_write__7__f3;
    vlSelf->Data_memory_tb__DOT__write_mem = 1U;
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    co_await vlSelf->__VtrigSched_hc25e54c7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Data_memory_tb.clk)", 
                                                       "testbench/Data_memory_tb.sv", 
                                                       80);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       81);
    vlSelf->Data_memory_tb__DOT__write_mem = 0U;
    __Vtask_Data_memory_tb__DOT__do_write__8__f3 = 0U;
    __Vtask_Data_memory_tb__DOT__do_write__8__data = 0xbbU;
    __Vtask_Data_memory_tb__DOT__do_write__8__addr = 9U;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__do_write__8__addr;
    vlSelf->Data_memory_tb__DOT__write_data = __Vtask_Data_memory_tb__DOT__do_write__8__data;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__do_write__8__f3;
    vlSelf->Data_memory_tb__DOT__write_mem = 1U;
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    co_await vlSelf->__VtrigSched_hc25e54c7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Data_memory_tb.clk)", 
                                                       "testbench/Data_memory_tb.sv", 
                                                       80);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       81);
    vlSelf->Data_memory_tb__DOT__write_mem = 0U;
    __Vtask_Data_memory_tb__DOT__do_write__9__f3 = 0U;
    __Vtask_Data_memory_tb__DOT__do_write__9__data = 0xccU;
    __Vtask_Data_memory_tb__DOT__do_write__9__addr = 0xaU;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__do_write__9__addr;
    vlSelf->Data_memory_tb__DOT__write_data = __Vtask_Data_memory_tb__DOT__do_write__9__data;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__do_write__9__f3;
    vlSelf->Data_memory_tb__DOT__write_mem = 1U;
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    co_await vlSelf->__VtrigSched_hc25e54c7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Data_memory_tb.clk)", 
                                                       "testbench/Data_memory_tb.sv", 
                                                       80);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       81);
    vlSelf->Data_memory_tb__DOT__write_mem = 0U;
    __Vtask_Data_memory_tb__DOT__do_write__10__f3 = 0U;
    __Vtask_Data_memory_tb__DOT__do_write__10__data = 0xddU;
    __Vtask_Data_memory_tb__DOT__do_write__10__addr = 0xbU;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__do_write__10__addr;
    vlSelf->Data_memory_tb__DOT__write_data = __Vtask_Data_memory_tb__DOT__do_write__10__data;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__do_write__10__f3;
    vlSelf->Data_memory_tb__DOT__write_mem = 1U;
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    co_await vlSelf->__VtrigSched_hc25e54c7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Data_memory_tb.clk)", 
                                                       "testbench/Data_memory_tb.sv", 
                                                       80);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       81);
    vlSelf->Data_memory_tb__DOT__write_mem = 0U;
    __Vtask_Data_memory_tb__DOT__check_read__11__name = 
        std::string{"SB/LBU byte 0"};
    __Vtask_Data_memory_tb__DOT__check_read__11__expected = 0xaaU;
    __Vtask_Data_memory_tb__DOT__check_read__11__f3 = 4U;
    __Vtask_Data_memory_tb__DOT__check_read__11__addr = 8U;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__check_read__11__addr;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__check_read__11__f3;
    vlSelf->Data_memory_tb__DOT__read_mem = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       89);
    if ((vlSelf->Data_memory_tb__DOT__read_data != __Vtask_Data_memory_tb__DOT__check_read__11__expected)) {
        VL_WRITEF("FAIL: %@ | addr=0x%0x f3=%b expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__11__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__11__addr,
                  3,(IData)(__Vtask_Data_memory_tb__DOT__check_read__11__f3),
                  32,__Vtask_Data_memory_tb__DOT__check_read__11__expected,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | addr=0x%0x data=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__11__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__11__addr,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__pass_count);
    }
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    __Vtask_Data_memory_tb__DOT__check_read__12__name = 
        std::string{"SB/LBU byte 1"};
    __Vtask_Data_memory_tb__DOT__check_read__12__expected = 0xbbU;
    __Vtask_Data_memory_tb__DOT__check_read__12__f3 = 4U;
    __Vtask_Data_memory_tb__DOT__check_read__12__addr = 9U;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__check_read__12__addr;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__check_read__12__f3;
    vlSelf->Data_memory_tb__DOT__read_mem = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       89);
    if ((vlSelf->Data_memory_tb__DOT__read_data != __Vtask_Data_memory_tb__DOT__check_read__12__expected)) {
        VL_WRITEF("FAIL: %@ | addr=0x%0x f3=%b expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__12__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__12__addr,
                  3,(IData)(__Vtask_Data_memory_tb__DOT__check_read__12__f3),
                  32,__Vtask_Data_memory_tb__DOT__check_read__12__expected,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | addr=0x%0x data=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__12__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__12__addr,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__pass_count);
    }
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    __Vtask_Data_memory_tb__DOT__check_read__13__name = 
        std::string{"SB/LBU byte 2"};
    __Vtask_Data_memory_tb__DOT__check_read__13__expected = 0xccU;
    __Vtask_Data_memory_tb__DOT__check_read__13__f3 = 4U;
    __Vtask_Data_memory_tb__DOT__check_read__13__addr = 0xaU;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__check_read__13__addr;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__check_read__13__f3;
    vlSelf->Data_memory_tb__DOT__read_mem = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       89);
    if ((vlSelf->Data_memory_tb__DOT__read_data != __Vtask_Data_memory_tb__DOT__check_read__13__expected)) {
        VL_WRITEF("FAIL: %@ | addr=0x%0x f3=%b expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__13__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__13__addr,
                  3,(IData)(__Vtask_Data_memory_tb__DOT__check_read__13__f3),
                  32,__Vtask_Data_memory_tb__DOT__check_read__13__expected,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | addr=0x%0x data=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__13__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__13__addr,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__pass_count);
    }
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    __Vtask_Data_memory_tb__DOT__check_read__14__name = 
        std::string{"SB/LBU byte 3"};
    __Vtask_Data_memory_tb__DOT__check_read__14__expected = 0xddU;
    __Vtask_Data_memory_tb__DOT__check_read__14__f3 = 4U;
    __Vtask_Data_memory_tb__DOT__check_read__14__addr = 0xbU;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__check_read__14__addr;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__check_read__14__f3;
    vlSelf->Data_memory_tb__DOT__read_mem = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       89);
    if ((vlSelf->Data_memory_tb__DOT__read_data != __Vtask_Data_memory_tb__DOT__check_read__14__expected)) {
        VL_WRITEF("FAIL: %@ | addr=0x%0x f3=%b expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__14__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__14__addr,
                  3,(IData)(__Vtask_Data_memory_tb__DOT__check_read__14__f3),
                  32,__Vtask_Data_memory_tb__DOT__check_read__14__expected,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | addr=0x%0x data=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__14__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__14__addr,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__pass_count);
    }
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    __Vtask_Data_memory_tb__DOT__check_read__15__name = 
        std::string{"full word correctly assembled from 4 byte stores"};
    __Vtask_Data_memory_tb__DOT__check_read__15__expected = 0xddccbbaaU;
    __Vtask_Data_memory_tb__DOT__check_read__15__f3 = 2U;
    __Vtask_Data_memory_tb__DOT__check_read__15__addr = 8U;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__check_read__15__addr;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__check_read__15__f3;
    vlSelf->Data_memory_tb__DOT__read_mem = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       89);
    if ((vlSelf->Data_memory_tb__DOT__read_data != __Vtask_Data_memory_tb__DOT__check_read__15__expected)) {
        VL_WRITEF("FAIL: %@ | addr=0x%0x f3=%b expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__15__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__15__addr,
                  3,(IData)(__Vtask_Data_memory_tb__DOT__check_read__15__f3),
                  32,__Vtask_Data_memory_tb__DOT__check_read__15__expected,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | addr=0x%0x data=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__15__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__15__addr,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__pass_count);
    }
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    __Vtask_Data_memory_tb__DOT__do_write__16__f3 = 2U;
    __Vtask_Data_memory_tb__DOT__do_write__16__data = 0xffffff80U;
    __Vtask_Data_memory_tb__DOT__do_write__16__addr = 0xcU;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__do_write__16__addr;
    vlSelf->Data_memory_tb__DOT__write_data = __Vtask_Data_memory_tb__DOT__do_write__16__data;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__do_write__16__f3;
    vlSelf->Data_memory_tb__DOT__write_mem = 1U;
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    co_await vlSelf->__VtrigSched_hc25e54c7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Data_memory_tb.clk)", 
                                                       "testbench/Data_memory_tb.sv", 
                                                       80);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       81);
    vlSelf->Data_memory_tb__DOT__write_mem = 0U;
    __Vtask_Data_memory_tb__DOT__check_read__17__name = 
        std::string{"LB sign-extends negative byte (0x80 -> -128)"};
    __Vtask_Data_memory_tb__DOT__check_read__17__expected = 0xffffff80U;
    __Vtask_Data_memory_tb__DOT__check_read__17__f3 = 0U;
    __Vtask_Data_memory_tb__DOT__check_read__17__addr = 0xcU;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__check_read__17__addr;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__check_read__17__f3;
    vlSelf->Data_memory_tb__DOT__read_mem = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       89);
    if ((vlSelf->Data_memory_tb__DOT__read_data != __Vtask_Data_memory_tb__DOT__check_read__17__expected)) {
        VL_WRITEF("FAIL: %@ | addr=0x%0x f3=%b expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__17__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__17__addr,
                  3,(IData)(__Vtask_Data_memory_tb__DOT__check_read__17__f3),
                  32,__Vtask_Data_memory_tb__DOT__check_read__17__expected,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | addr=0x%0x data=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__17__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__17__addr,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__pass_count);
    }
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    __Vtask_Data_memory_tb__DOT__check_read__18__name = 
        std::string{"LBU zero-extends same byte (0x80 -> 128)"};
    __Vtask_Data_memory_tb__DOT__check_read__18__expected = 0x80U;
    __Vtask_Data_memory_tb__DOT__check_read__18__f3 = 4U;
    __Vtask_Data_memory_tb__DOT__check_read__18__addr = 0xcU;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__check_read__18__addr;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__check_read__18__f3;
    vlSelf->Data_memory_tb__DOT__read_mem = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       89);
    if ((vlSelf->Data_memory_tb__DOT__read_data != __Vtask_Data_memory_tb__DOT__check_read__18__expected)) {
        VL_WRITEF("FAIL: %@ | addr=0x%0x f3=%b expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__18__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__18__addr,
                  3,(IData)(__Vtask_Data_memory_tb__DOT__check_read__18__f3),
                  32,__Vtask_Data_memory_tb__DOT__check_read__18__expected,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | addr=0x%0x data=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__18__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__18__addr,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__pass_count);
    }
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    __Vtask_Data_memory_tb__DOT__do_write__19__f3 = 2U;
    __Vtask_Data_memory_tb__DOT__do_write__19__data = 0xffff8000U;
    __Vtask_Data_memory_tb__DOT__do_write__19__addr = 0x10U;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__do_write__19__addr;
    vlSelf->Data_memory_tb__DOT__write_data = __Vtask_Data_memory_tb__DOT__do_write__19__data;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__do_write__19__f3;
    vlSelf->Data_memory_tb__DOT__write_mem = 1U;
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    co_await vlSelf->__VtrigSched_hc25e54c7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Data_memory_tb.clk)", 
                                                       "testbench/Data_memory_tb.sv", 
                                                       80);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       81);
    vlSelf->Data_memory_tb__DOT__write_mem = 0U;
    __Vtask_Data_memory_tb__DOT__check_read__20__name = 
        std::string{"LH sign-extends negative halfword"};
    __Vtask_Data_memory_tb__DOT__check_read__20__expected = 0xffff8000U;
    __Vtask_Data_memory_tb__DOT__check_read__20__f3 = 1U;
    __Vtask_Data_memory_tb__DOT__check_read__20__addr = 0x10U;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__check_read__20__addr;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__check_read__20__f3;
    vlSelf->Data_memory_tb__DOT__read_mem = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       89);
    if ((vlSelf->Data_memory_tb__DOT__read_data != __Vtask_Data_memory_tb__DOT__check_read__20__expected)) {
        VL_WRITEF("FAIL: %@ | addr=0x%0x f3=%b expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__20__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__20__addr,
                  3,(IData)(__Vtask_Data_memory_tb__DOT__check_read__20__f3),
                  32,__Vtask_Data_memory_tb__DOT__check_read__20__expected,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | addr=0x%0x data=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__20__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__20__addr,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__pass_count);
    }
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    __Vtask_Data_memory_tb__DOT__check_read__21__name = 
        std::string{"LHU zero-extends same halfword"};
    __Vtask_Data_memory_tb__DOT__check_read__21__expected = 0x8000U;
    __Vtask_Data_memory_tb__DOT__check_read__21__f3 = 5U;
    __Vtask_Data_memory_tb__DOT__check_read__21__addr = 0x10U;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__check_read__21__addr;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__check_read__21__f3;
    vlSelf->Data_memory_tb__DOT__read_mem = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       89);
    if ((vlSelf->Data_memory_tb__DOT__read_data != __Vtask_Data_memory_tb__DOT__check_read__21__expected)) {
        VL_WRITEF("FAIL: %@ | addr=0x%0x f3=%b expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__21__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__21__addr,
                  3,(IData)(__Vtask_Data_memory_tb__DOT__check_read__21__f3),
                  32,__Vtask_Data_memory_tb__DOT__check_read__21__expected,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | addr=0x%0x data=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__21__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__21__addr,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__pass_count);
    }
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    __Vtask_Data_memory_tb__DOT__do_write__22__f3 = 2U;
    __Vtask_Data_memory_tb__DOT__do_write__22__data = 0xaaaaaaaaU;
    __Vtask_Data_memory_tb__DOT__do_write__22__addr = 0x14U;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__do_write__22__addr;
    vlSelf->Data_memory_tb__DOT__write_data = __Vtask_Data_memory_tb__DOT__do_write__22__data;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__do_write__22__f3;
    vlSelf->Data_memory_tb__DOT__write_mem = 1U;
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    co_await vlSelf->__VtrigSched_hc25e54c7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Data_memory_tb.clk)", 
                                                       "testbench/Data_memory_tb.sv", 
                                                       80);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       81);
    vlSelf->Data_memory_tb__DOT__write_mem = 0U;
    __Vtask_Data_memory_tb__DOT__do_write__23__f3 = 0U;
    __Vtask_Data_memory_tb__DOT__do_write__23__data = 0U;
    __Vtask_Data_memory_tb__DOT__do_write__23__addr = 0x15U;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__do_write__23__addr;
    vlSelf->Data_memory_tb__DOT__write_data = __Vtask_Data_memory_tb__DOT__do_write__23__data;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__do_write__23__f3;
    vlSelf->Data_memory_tb__DOT__write_mem = 1U;
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    co_await vlSelf->__VtrigSched_hc25e54c7__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Data_memory_tb.clk)", 
                                                       "testbench/Data_memory_tb.sv", 
                                                       80);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       81);
    vlSelf->Data_memory_tb__DOT__write_mem = 0U;
    __Vtask_Data_memory_tb__DOT__check_read__24__name = 
        std::string{"byte store only overwrites its own byte, leaves rest intact"};
    __Vtask_Data_memory_tb__DOT__check_read__24__expected = 0xaaaa00aaU;
    __Vtask_Data_memory_tb__DOT__check_read__24__f3 = 2U;
    __Vtask_Data_memory_tb__DOT__check_read__24__addr = 0x14U;
    vlSelf->Data_memory_tb__DOT__address = __Vtask_Data_memory_tb__DOT__check_read__24__addr;
    vlSelf->Data_memory_tb__DOT__funct3 = __Vtask_Data_memory_tb__DOT__check_read__24__f3;
    vlSelf->Data_memory_tb__DOT__read_mem = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       89);
    if ((vlSelf->Data_memory_tb__DOT__read_data != __Vtask_Data_memory_tb__DOT__check_read__24__expected)) {
        VL_WRITEF("FAIL: %@ | addr=0x%0x f3=%b expected=0x%0x got=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__24__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__24__addr,
                  3,(IData)(__Vtask_Data_memory_tb__DOT__check_read__24__f3),
                  32,__Vtask_Data_memory_tb__DOT__check_read__24__expected,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | addr=0x%0x data=0x%0x\n",
                  -1,&(__Vtask_Data_memory_tb__DOT__check_read__24__name),
                  32,__Vtask_Data_memory_tb__DOT__check_read__24__addr,
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__pass_count);
    }
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    vlSelf->Data_memory_tb__DOT__address = 0U;
    vlSelf->Data_memory_tb__DOT__read_mem = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Data_memory_tb.sv", 
                                       147);
    if ((0U != vlSelf->Data_memory_tb__DOT__read_data)) {
        VL_WRITEF("FAIL: read_data should be 0 when read_mem=0 | got=0x%0x\n",
                  32,vlSelf->Data_memory_tb__DOT__read_data);
        vlSelf->Data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: read_data is 0 when read_mem=0\n");
        vlSelf->Data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->Data_memory_tb__DOT__pass_count);
    }
    VL_WRITEF("\n---- %0d passed, %0d failed ----\n",
              32,vlSelf->Data_memory_tb__DOT__pass_count,
              32,vlSelf->Data_memory_tb__DOT__fail_count);
    VL_FINISH_MT("testbench/Data_memory_tb.sv", 157, "");
}

VL_INLINE_OPT VlCoroutine VData_memory_tb___024root___eval_initial__TOP__Vtiming__1(VData_memory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "testbench/Data_memory_tb.sv", 
                                           28);
        vlSelf->__Vdlyvval__Data_memory_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->Data_memory_tb__DOT__clk)));
        vlSelf->__Vdlyvset__Data_memory_tb__DOT__clk__v0 = 1U;
    }
}

VL_INLINE_OPT void VData_memory_tb___024root___act_comb__TOP__0(VData_memory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->Data_memory_tb__DOT__read_data = 0U;
    if (vlSelf->Data_memory_tb__DOT__read_mem) {
        if ((4U & (IData)(vlSelf->Data_memory_tb__DOT__funct3))) {
            if ((2U & (IData)(vlSelf->Data_memory_tb__DOT__funct3))) {
                vlSelf->Data_memory_tb__DOT__read_data = 0U;
            } else if ((1U & (IData)(vlSelf->Data_memory_tb__DOT__funct3))) {
                if ((2U & vlSelf->Data_memory_tb__DOT__address)) {
                    if ((2U & vlSelf->Data_memory_tb__DOT__address)) {
                        vlSelf->Data_memory_tb__DOT__read_data 
                            = (vlSelf->Data_memory_tb__DOT__dut__DOT__register
                               [(0x3ffU & (vlSelf->Data_memory_tb__DOT__address 
                                           >> 2U))] 
                               >> 0x10U);
                    }
                } else {
                    vlSelf->Data_memory_tb__DOT__read_data 
                        = (0xffffU & vlSelf->Data_memory_tb__DOT__dut__DOT__register
                           [(0x3ffU & (vlSelf->Data_memory_tb__DOT__address 
                                       >> 2U))]);
                }
            } else {
                vlSelf->Data_memory_tb__DOT__read_data 
                    = ((2U & vlSelf->Data_memory_tb__DOT__address)
                        ? ((1U & vlSelf->Data_memory_tb__DOT__address)
                            ? (vlSelf->Data_memory_tb__DOT__dut__DOT__register
                               [(0x3ffU & (vlSelf->Data_memory_tb__DOT__address 
                                           >> 2U))] 
                               >> 0x18U) : (0xffU & 
                                            (vlSelf->Data_memory_tb__DOT__dut__DOT__register
                                             [(0x3ffU 
                                               & (vlSelf->Data_memory_tb__DOT__address 
                                                  >> 2U))] 
                                             >> 0x10U)))
                        : ((1U & vlSelf->Data_memory_tb__DOT__address)
                            ? (0xffU & (vlSelf->Data_memory_tb__DOT__dut__DOT__register
                                        [(0x3ffU & 
                                          (vlSelf->Data_memory_tb__DOT__address 
                                           >> 2U))] 
                                        >> 8U)) : (0xffU 
                                                   & vlSelf->Data_memory_tb__DOT__dut__DOT__register
                                                   [
                                                   (0x3ffU 
                                                    & (vlSelf->Data_memory_tb__DOT__address 
                                                       >> 2U))])));
            }
        } else if ((2U & (IData)(vlSelf->Data_memory_tb__DOT__funct3))) {
            vlSelf->Data_memory_tb__DOT__read_data 
                = ((1U & (IData)(vlSelf->Data_memory_tb__DOT__funct3))
                    ? 0U : vlSelf->Data_memory_tb__DOT__dut__DOT__register
                   [(0x3ffU & (vlSelf->Data_memory_tb__DOT__address 
                               >> 2U))]);
        } else if ((1U & (IData)(vlSelf->Data_memory_tb__DOT__funct3))) {
            if ((2U & vlSelf->Data_memory_tb__DOT__address)) {
                if ((2U & vlSelf->Data_memory_tb__DOT__address)) {
                    vlSelf->Data_memory_tb__DOT__read_data 
                        = (((- (IData)((vlSelf->Data_memory_tb__DOT__dut__DOT__register
                                        [(0x3ffU & 
                                          (vlSelf->Data_memory_tb__DOT__address 
                                           >> 2U))] 
                                        >> 0x1fU))) 
                            << 0x10U) | (vlSelf->Data_memory_tb__DOT__dut__DOT__register
                                         [(0x3ffU & 
                                           (vlSelf->Data_memory_tb__DOT__address 
                                            >> 2U))] 
                                         >> 0x10U));
                }
            } else {
                vlSelf->Data_memory_tb__DOT__read_data 
                    = (((- (IData)((1U & (vlSelf->Data_memory_tb__DOT__dut__DOT__register
                                          [(0x3ffU 
                                            & (vlSelf->Data_memory_tb__DOT__address 
                                               >> 2U))] 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelf->Data_memory_tb__DOT__dut__DOT__register
                                     [(0x3ffU & (vlSelf->Data_memory_tb__DOT__address 
                                                 >> 2U))]));
            }
        } else {
            vlSelf->Data_memory_tb__DOT__read_data 
                = ((2U & vlSelf->Data_memory_tb__DOT__address)
                    ? ((1U & vlSelf->Data_memory_tb__DOT__address)
                        ? (((- (IData)((vlSelf->Data_memory_tb__DOT__dut__DOT__register
                                        [(0x3ffU & 
                                          (vlSelf->Data_memory_tb__DOT__address 
                                           >> 2U))] 
                                        >> 0x1fU))) 
                            << 8U) | (vlSelf->Data_memory_tb__DOT__dut__DOT__register
                                      [(0x3ffU & (vlSelf->Data_memory_tb__DOT__address 
                                                  >> 2U))] 
                                      >> 0x18U)) : 
                       (((- (IData)((1U & (vlSelf->Data_memory_tb__DOT__dut__DOT__register
                                           [(0x3ffU 
                                             & (vlSelf->Data_memory_tb__DOT__address 
                                                >> 2U))] 
                                           >> 0x17U)))) 
                         << 8U) | (0xffU & (vlSelf->Data_memory_tb__DOT__dut__DOT__register
                                            [(0x3ffU 
                                              & (vlSelf->Data_memory_tb__DOT__address 
                                                 >> 2U))] 
                                            >> 0x10U))))
                    : ((1U & vlSelf->Data_memory_tb__DOT__address)
                        ? (((- (IData)((1U & (vlSelf->Data_memory_tb__DOT__dut__DOT__register
                                              [(0x3ffU 
                                                & (vlSelf->Data_memory_tb__DOT__address 
                                                   >> 2U))] 
                                              >> 0xfU)))) 
                            << 8U) | (0xffU & (vlSelf->Data_memory_tb__DOT__dut__DOT__register
                                               [(0x3ffU 
                                                 & (vlSelf->Data_memory_tb__DOT__address 
                                                    >> 2U))] 
                                               >> 8U)))
                        : (((- (IData)((1U & (vlSelf->Data_memory_tb__DOT__dut__DOT__register
                                              [(0x3ffU 
                                                & (vlSelf->Data_memory_tb__DOT__address 
                                                   >> 2U))] 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelf->Data_memory_tb__DOT__dut__DOT__register
                                      [(0x3ffU & (vlSelf->Data_memory_tb__DOT__address 
                                                  >> 2U))]))));
        }
    }
}

void VData_memory_tb___024root___eval_act(VData_memory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        VData_memory_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VData_memory_tb___024root___nba_sequent__TOP__0(VData_memory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v0;
    __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v0;
    __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v0 = 0;
    CData/*7:0*/ __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v0;
    __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v0;
    __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v1;
    __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v1;
    __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v1 = 0;
    CData/*7:0*/ __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v1;
    __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v1;
    __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v1 = 0;
    SData/*9:0*/ __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v2;
    __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v2;
    __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v2 = 0;
    CData/*7:0*/ __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v2;
    __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v2 = 0;
    CData/*0:0*/ __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v2;
    __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v2 = 0;
    SData/*9:0*/ __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v3;
    __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v3;
    __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v3 = 0;
    CData/*7:0*/ __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v3;
    __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v3 = 0;
    CData/*0:0*/ __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v3;
    __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v3 = 0;
    SData/*9:0*/ __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v4;
    __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v4 = 0;
    CData/*4:0*/ __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v4;
    __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v4 = 0;
    SData/*15:0*/ __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v4;
    __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v4 = 0;
    CData/*0:0*/ __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v4;
    __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v4 = 0;
    SData/*9:0*/ __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v5;
    __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v5 = 0;
    CData/*4:0*/ __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v5;
    __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v5 = 0;
    SData/*15:0*/ __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v5;
    __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v5 = 0;
    CData/*0:0*/ __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v5;
    __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v5 = 0;
    SData/*9:0*/ __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v6;
    __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v6 = 0;
    IData/*31:0*/ __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v6;
    __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v6 = 0;
    CData/*0:0*/ __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v6;
    __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v6 = 0;
    // Body
    __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v0 = 0U;
    __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v1 = 0U;
    __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v2 = 0U;
    __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v3 = 0U;
    __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v4 = 0U;
    __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v5 = 0U;
    __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v6 = 0U;
    if (vlSelf->Data_memory_tb__DOT__write_mem) {
        if ((0U == (IData)(vlSelf->Data_memory_tb__DOT__funct3))) {
            if ((2U & vlSelf->Data_memory_tb__DOT__address)) {
                if ((1U & vlSelf->Data_memory_tb__DOT__address)) {
                    __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v0 
                        = (0xffU & vlSelf->Data_memory_tb__DOT__write_data);
                    __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v0 = 1U;
                    __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v0 = 0x18U;
                    __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v0 
                        = (0x3ffU & (vlSelf->Data_memory_tb__DOT__address 
                                     >> 2U));
                } else {
                    __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v1 
                        = (0xffU & vlSelf->Data_memory_tb__DOT__write_data);
                    __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v1 = 1U;
                    __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v1 = 0x10U;
                    __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v1 
                        = (0x3ffU & (vlSelf->Data_memory_tb__DOT__address 
                                     >> 2U));
                }
            } else if ((1U & vlSelf->Data_memory_tb__DOT__address)) {
                __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v2 
                    = (0xffU & vlSelf->Data_memory_tb__DOT__write_data);
                __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v2 = 1U;
                __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v2 = 8U;
                __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v2 
                    = (0x3ffU & (vlSelf->Data_memory_tb__DOT__address 
                                 >> 2U));
            } else {
                __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v3 
                    = (0xffU & vlSelf->Data_memory_tb__DOT__write_data);
                __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v3 = 1U;
                __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v3 = 0U;
                __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v3 
                    = (0x3ffU & (vlSelf->Data_memory_tb__DOT__address 
                                 >> 2U));
            }
        } else if ((1U == (IData)(vlSelf->Data_memory_tb__DOT__funct3))) {
            if ((2U & vlSelf->Data_memory_tb__DOT__address)) {
                if ((2U & vlSelf->Data_memory_tb__DOT__address)) {
                    __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v4 
                        = (0xffffU & vlSelf->Data_memory_tb__DOT__write_data);
                    __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v4 = 1U;
                    __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v4 = 0x10U;
                    __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v4 
                        = (0x3ffU & (vlSelf->Data_memory_tb__DOT__address 
                                     >> 2U));
                }
            } else {
                __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v5 
                    = (0xffffU & vlSelf->Data_memory_tb__DOT__write_data);
                __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v5 = 1U;
                __Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v5 = 0U;
                __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v5 
                    = (0x3ffU & (vlSelf->Data_memory_tb__DOT__address 
                                 >> 2U));
            }
        } else if ((2U == (IData)(vlSelf->Data_memory_tb__DOT__funct3))) {
            __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v6 
                = vlSelf->Data_memory_tb__DOT__write_data;
            __Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v6 = 1U;
            __Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v6 
                = (0x3ffU & (vlSelf->Data_memory_tb__DOT__address 
                             >> 2U));
        }
    }
    if (__Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v0) {
        vlSelf->Data_memory_tb__DOT__dut__DOT__register[__Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v0))) 
                & vlSelf->Data_memory_tb__DOT__dut__DOT__register
                [__Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v0) 
                                   << (IData)(__Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v0))));
    }
    if (__Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v1) {
        vlSelf->Data_memory_tb__DOT__dut__DOT__register[__Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v1))) 
                & vlSelf->Data_memory_tb__DOT__dut__DOT__register
                [__Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v1) 
                                   << (IData)(__Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v1))));
    }
    if (__Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v2) {
        vlSelf->Data_memory_tb__DOT__dut__DOT__register[__Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v2))) 
                & vlSelf->Data_memory_tb__DOT__dut__DOT__register
                [__Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v2) 
                                   << (IData)(__Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v2))));
    }
    if (__Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v3) {
        vlSelf->Data_memory_tb__DOT__dut__DOT__register[__Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v3))) 
                & vlSelf->Data_memory_tb__DOT__dut__DOT__register
                [__Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v3) 
                                   << (IData)(__Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v3))));
    }
    if (__Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v4) {
        vlSelf->Data_memory_tb__DOT__dut__DOT__register[__Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v4] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v4))) 
                & vlSelf->Data_memory_tb__DOT__dut__DOT__register
                [__Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v4]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v4) 
                                   << (IData)(__Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v4))));
    }
    if (__Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v5) {
        vlSelf->Data_memory_tb__DOT__dut__DOT__register[__Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v5] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v5))) 
                & vlSelf->Data_memory_tb__DOT__dut__DOT__register
                [__Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v5]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v5) 
                                   << (IData)(__Vdlyvlsb__Data_memory_tb__DOT__dut__DOT__register__v5))));
    }
    if (__Vdlyvset__Data_memory_tb__DOT__dut__DOT__register__v6) {
        vlSelf->Data_memory_tb__DOT__dut__DOT__register[__Vdlyvdim0__Data_memory_tb__DOT__dut__DOT__register__v6] 
            = __Vdlyvval__Data_memory_tb__DOT__dut__DOT__register__v6;
    }
}

VL_INLINE_OPT void VData_memory_tb___024root___nba_sequent__TOP__1(VData_memory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__Data_memory_tb__DOT__clk__v0) {
        vlSelf->Data_memory_tb__DOT__clk = vlSelf->__Vdlyvval__Data_memory_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__Data_memory_tb__DOT__clk__v0 = 0U;
    }
}

void VData_memory_tb___024root___eval_nba(VData_memory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VData_memory_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VData_memory_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VData_memory_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void VData_memory_tb___024root___timing_resume(VData_memory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hc25e54c7__0.resume("@(posedge Data_memory_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VData_memory_tb___024root___timing_commit(VData_memory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hc25e54c7__0.commit("@(posedge Data_memory_tb.clk)");
    }
}

void VData_memory_tb___024root___eval_triggers__act(VData_memory_tb___024root* vlSelf);

bool VData_memory_tb___024root___eval_phase__act(VData_memory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VData_memory_tb___024root___eval_triggers__act(vlSelf);
    VData_memory_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VData_memory_tb___024root___timing_resume(vlSelf);
        VData_memory_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VData_memory_tb___024root___eval_phase__nba(VData_memory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VData_memory_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VData_memory_tb___024root___dump_triggers__nba(VData_memory_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VData_memory_tb___024root___dump_triggers__act(VData_memory_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VData_memory_tb___024root___eval(VData_memory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VData_memory_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/Data_memory_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VData_memory_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/Data_memory_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VData_memory_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VData_memory_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VData_memory_tb___024root___eval_debug_assertions(VData_memory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VData_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VData_memory_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
