// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoder_tb.h for the primary calling header

#include "VDecoder_tb__pch.h"
#include "VDecoder_tb___024root.h"

VlCoroutine VDecoder_tb___024root___eval_initial__TOP__Vtiming__0(VDecoder_tb___024root* vlSelf);
VlCoroutine VDecoder_tb___024root___eval_initial__TOP__Vtiming__1(VDecoder_tb___024root* vlSelf);

void VDecoder_tb___024root___eval_initial(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_initial\n"); );
    // Body
    VDecoder_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VDecoder_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__Decoder_tb__DOT__clk__0 
        = vlSelf->Decoder_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine VDecoder_tb___024root___eval_initial__TOP__Vtiming__0(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__0__actual_instr;
    __Vtask_Decoder_tb__DOT__check__0__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__0__expected_reg;
    __Vtask_Decoder_tb__DOT__check__0__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__0__expected_result;
    __Vtask_Decoder_tb__DOT__check__0__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__0__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__1__actual_instr;
    __Vtask_Decoder_tb__DOT__check__1__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__1__expected_reg;
    __Vtask_Decoder_tb__DOT__check__1__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__1__expected_result;
    __Vtask_Decoder_tb__DOT__check__1__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__1__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__2__actual_instr;
    __Vtask_Decoder_tb__DOT__check__2__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__2__expected_reg;
    __Vtask_Decoder_tb__DOT__check__2__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__2__expected_result;
    __Vtask_Decoder_tb__DOT__check__2__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__2__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__3__actual_instr;
    __Vtask_Decoder_tb__DOT__check__3__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__3__expected_reg;
    __Vtask_Decoder_tb__DOT__check__3__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__3__expected_result;
    __Vtask_Decoder_tb__DOT__check__3__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__3__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__4__actual_instr;
    __Vtask_Decoder_tb__DOT__check__4__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__4__expected_reg;
    __Vtask_Decoder_tb__DOT__check__4__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__4__expected_result;
    __Vtask_Decoder_tb__DOT__check__4__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__4__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__5__actual_instr;
    __Vtask_Decoder_tb__DOT__check__5__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__5__expected_reg;
    __Vtask_Decoder_tb__DOT__check__5__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__5__expected_result;
    __Vtask_Decoder_tb__DOT__check__5__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__5__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__6__actual_instr;
    __Vtask_Decoder_tb__DOT__check__6__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__6__expected_reg;
    __Vtask_Decoder_tb__DOT__check__6__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__6__expected_result;
    __Vtask_Decoder_tb__DOT__check__6__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__6__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__7__actual_instr;
    __Vtask_Decoder_tb__DOT__check__7__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__7__expected_reg;
    __Vtask_Decoder_tb__DOT__check__7__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__7__expected_result;
    __Vtask_Decoder_tb__DOT__check__7__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__7__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__8__actual_instr;
    __Vtask_Decoder_tb__DOT__check__8__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__8__expected_reg;
    __Vtask_Decoder_tb__DOT__check__8__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__8__expected_result;
    __Vtask_Decoder_tb__DOT__check__8__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__8__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__9__actual_instr;
    __Vtask_Decoder_tb__DOT__check__9__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__9__expected_reg;
    __Vtask_Decoder_tb__DOT__check__9__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__9__expected_result;
    __Vtask_Decoder_tb__DOT__check__9__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__9__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__10__actual_instr;
    __Vtask_Decoder_tb__DOT__check__10__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__10__expected_reg;
    __Vtask_Decoder_tb__DOT__check__10__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__10__expected_result;
    __Vtask_Decoder_tb__DOT__check__10__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__10__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__11__actual_instr;
    __Vtask_Decoder_tb__DOT__check__11__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__11__expected_reg;
    __Vtask_Decoder_tb__DOT__check__11__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__11__expected_result;
    __Vtask_Decoder_tb__DOT__check__11__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__11__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__12__actual_instr;
    __Vtask_Decoder_tb__DOT__check__12__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__12__expected_reg;
    __Vtask_Decoder_tb__DOT__check__12__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__12__expected_result;
    __Vtask_Decoder_tb__DOT__check__12__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__12__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__13__actual_instr;
    __Vtask_Decoder_tb__DOT__check__13__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__13__expected_reg;
    __Vtask_Decoder_tb__DOT__check__13__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__13__expected_result;
    __Vtask_Decoder_tb__DOT__check__13__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__13__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__14__actual_instr;
    __Vtask_Decoder_tb__DOT__check__14__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__14__expected_reg;
    __Vtask_Decoder_tb__DOT__check__14__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__14__expected_result;
    __Vtask_Decoder_tb__DOT__check__14__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__14__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__15__actual_instr;
    __Vtask_Decoder_tb__DOT__check__15__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__15__expected_reg;
    __Vtask_Decoder_tb__DOT__check__15__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__15__expected_result;
    __Vtask_Decoder_tb__DOT__check__15__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__15__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__16__actual_instr;
    __Vtask_Decoder_tb__DOT__check__16__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__16__expected_reg;
    __Vtask_Decoder_tb__DOT__check__16__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__16__expected_result;
    __Vtask_Decoder_tb__DOT__check__16__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__16__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__17__actual_instr;
    __Vtask_Decoder_tb__DOT__check__17__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__17__expected_reg;
    __Vtask_Decoder_tb__DOT__check__17__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__17__expected_result;
    __Vtask_Decoder_tb__DOT__check__17__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__17__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__18__actual_instr;
    __Vtask_Decoder_tb__DOT__check__18__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__18__expected_reg;
    __Vtask_Decoder_tb__DOT__check__18__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__18__expected_result;
    __Vtask_Decoder_tb__DOT__check__18__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__18__name;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__19__actual_instr;
    __Vtask_Decoder_tb__DOT__check__19__actual_instr = 0;
    CData/*4:0*/ __Vtask_Decoder_tb__DOT__check__19__expected_reg;
    __Vtask_Decoder_tb__DOT__check__19__expected_reg = 0;
    IData/*31:0*/ __Vtask_Decoder_tb__DOT__check__19__expected_result;
    __Vtask_Decoder_tb__DOT__check__19__expected_result = 0;
    std::string __Vtask_Decoder_tb__DOT__check__19__name;
    // Body
    vlSelf->Decoder_tb__DOT__clk = 0U;
    vlSelf->Decoder_tb__DOT__rst_n = 0U;
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       159);
    vlSelf->Decoder_tb__DOT__rst_n = 1U;
    vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[1U] = 0xbU;
    vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[2U] = 0x15U;
    vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0x1fU] = 0xffffffffU;
    __Vtask_Decoder_tb__DOT__check__0__name = std::string{"ADD_x3_x1_x2"};
    __Vtask_Decoder_tb__DOT__check__0__expected_result 
        = (vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
           [1U] + vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
           [2U]);
    __Vtask_Decoder_tb__DOT__check__0__expected_reg = 3U;
    __Vtask_Decoder_tb__DOT__check__0__actual_instr = 0x2081b3U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__0__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__0__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__0__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__0__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__0__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__0__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__0__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__0__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__0__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__0__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__0__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__1__name = std::string{"SUB_x4_x2_x1"};
    __Vtask_Decoder_tb__DOT__check__1__expected_result 
        = (vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
           [2U] - vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
           [1U]);
    __Vtask_Decoder_tb__DOT__check__1__expected_reg = 4U;
    __Vtask_Decoder_tb__DOT__check__1__actual_instr = 0x40110233U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__1__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__1__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__1__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__1__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__1__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__1__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__1__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__1__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__1__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__1__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__1__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__2__name = std::string{"AND_x5_x1_x2"};
    __Vtask_Decoder_tb__DOT__check__2__expected_result 
        = (vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
           [1U] & vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
           [2U]);
    __Vtask_Decoder_tb__DOT__check__2__expected_reg = 5U;
    __Vtask_Decoder_tb__DOT__check__2__actual_instr = 0x20f2b3U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__2__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__2__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__2__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__2__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__2__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__2__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__2__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__2__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__2__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__2__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__2__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__3__name = std::string{"OR_x6_x1_x2"};
    __Vtask_Decoder_tb__DOT__check__3__expected_result 
        = (vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
           [1U] | vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
           [2U]);
    __Vtask_Decoder_tb__DOT__check__3__expected_reg = 6U;
    __Vtask_Decoder_tb__DOT__check__3__actual_instr = 0x20e333U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__3__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__3__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__3__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__3__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__3__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__3__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__3__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__3__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__3__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__3__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__3__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__4__name = std::string{"XOR_x7_x1_x2"};
    __Vtask_Decoder_tb__DOT__check__4__expected_result 
        = (vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
           [1U] ^ vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
           [2U]);
    __Vtask_Decoder_tb__DOT__check__4__expected_reg = 7U;
    __Vtask_Decoder_tb__DOT__check__4__actual_instr = 0x20c3b3U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__4__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__4__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__4__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__4__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__4__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__4__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__4__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__4__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__4__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__4__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__4__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__5__name = std::string{"SLL_x8_x1_x2"};
    __Vtask_Decoder_tb__DOT__check__5__expected_result 
        = (vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
           [1U] << (0x1fU & vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                    [2U]));
    __Vtask_Decoder_tb__DOT__check__5__expected_reg = 8U;
    __Vtask_Decoder_tb__DOT__check__5__actual_instr = 0x209433U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__5__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__5__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__5__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__5__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__5__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__5__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__5__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__5__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__5__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__5__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__5__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__6__name = std::string{"SRL_x9_x1_x2"};
    __Vtask_Decoder_tb__DOT__check__6__expected_result 
        = (vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
           [1U] >> (0x1fU & vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                    [2U]));
    __Vtask_Decoder_tb__DOT__check__6__expected_reg = 9U;
    __Vtask_Decoder_tb__DOT__check__6__actual_instr = 0x20d4b3U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__6__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__6__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__6__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__6__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__6__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__6__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__6__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__6__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__6__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__6__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__6__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__7__name = std::string{"SRA_x10_x1_x2"};
    __Vtask_Decoder_tb__DOT__check__7__expected_result 
        = VL_SHIFTRS_III(32,32,5, vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                         [1U], (0x1fU & vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                                [2U]));
    __Vtask_Decoder_tb__DOT__check__7__expected_reg = 0xaU;
    __Vtask_Decoder_tb__DOT__check__7__actual_instr = 0x4020d533U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__7__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__7__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__7__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__7__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__7__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__7__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__7__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__7__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__7__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__7__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__7__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__8__name = std::string{"SLT_x11_x31_x2, x31(-1) < x2(21) is true"};
    __Vtask_Decoder_tb__DOT__check__8__expected_result 
        = (VL_LTS_III(32, vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                      [0x1fU], vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                      [2U]) ? 1U : 0U);
    __Vtask_Decoder_tb__DOT__check__8__expected_reg = 0xbU;
    __Vtask_Decoder_tb__DOT__check__8__actual_instr = 0x2fa5b3U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__8__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__8__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__8__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__8__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__8__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__8__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__8__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__8__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__8__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__8__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__8__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__9__name = std::string{"SLTU_x12_x31_x2, x31(4billion) < x2(21) is false"};
    __Vtask_Decoder_tb__DOT__check__9__expected_result 
        = ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
            [0x1fU] < vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
            [2U]) ? 1U : 0U);
    __Vtask_Decoder_tb__DOT__check__9__expected_reg = 0xcU;
    __Vtask_Decoder_tb__DOT__check__9__actual_instr = 0x2fb633U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__9__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__9__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__9__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__9__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__9__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__9__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__9__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__9__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__9__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__9__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__9__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__10__name = std::string{"ADD writing to x0 stays 0"};
    __Vtask_Decoder_tb__DOT__check__10__expected_result = 0U;
    __Vtask_Decoder_tb__DOT__check__10__expected_reg = 0U;
    __Vtask_Decoder_tb__DOT__check__10__actual_instr = 0x208033U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__10__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__10__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__10__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__10__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__10__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__10__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__10__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__10__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__10__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__10__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__10__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__11__name = std::string{"ADDI_x13_x1_58"};
    __Vtask_Decoder_tb__DOT__check__11__expected_result = 0x45U;
    __Vtask_Decoder_tb__DOT__check__11__expected_reg = 0xdU;
    __Vtask_Decoder_tb__DOT__check__11__actual_instr = 0x3a08693U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__11__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__11__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__11__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__11__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__11__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__11__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__11__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__11__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__11__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__11__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__11__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__12__name = std::string{"SLLI_x14_x1_4"};
    __Vtask_Decoder_tb__DOT__check__12__expected_result = 0xb0U;
    __Vtask_Decoder_tb__DOT__check__12__expected_reg = 0xeU;
    __Vtask_Decoder_tb__DOT__check__12__actual_instr = 0x409713U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__12__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__12__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__12__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__12__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__12__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__12__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__12__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__12__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__12__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__12__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__12__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__13__name = std::string{"SLTI_x15_x1_21, 11(x1) < 21(imm)"};
    __Vtask_Decoder_tb__DOT__check__13__expected_result = 1U;
    __Vtask_Decoder_tb__DOT__check__13__expected_reg = 0xfU;
    __Vtask_Decoder_tb__DOT__check__13__actual_instr = 0x150a793U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__13__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__13__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__13__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__13__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__13__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__13__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__13__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__13__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__13__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__13__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__13__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__14__name = std::string{"SLTIU_x16_x1_7, 11(x1) !< 7(imm)"};
    __Vtask_Decoder_tb__DOT__check__14__expected_result = 0U;
    __Vtask_Decoder_tb__DOT__check__14__expected_reg = 0x10U;
    __Vtask_Decoder_tb__DOT__check__14__actual_instr = 0x70b813U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__14__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__14__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__14__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__14__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__14__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__14__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__14__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__14__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__14__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__14__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__14__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__15__name = std::string{"XORI_x17_x1_34"};
    __Vtask_Decoder_tb__DOT__check__15__expected_result = 0x29U;
    __Vtask_Decoder_tb__DOT__check__15__expected_reg = 0x11U;
    __Vtask_Decoder_tb__DOT__check__15__actual_instr = 0x220c893U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__15__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__15__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__15__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__15__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__15__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__15__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__15__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__15__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__15__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__15__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__15__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__16__name = std::string{"SRLI_x18_x2_30"};
    __Vtask_Decoder_tb__DOT__check__16__expected_result = 2U;
    __Vtask_Decoder_tb__DOT__check__16__expected_reg = 0x12U;
    __Vtask_Decoder_tb__DOT__check__16__actual_instr = 0x315913U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__16__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__16__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__16__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__16__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__16__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__16__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__16__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__16__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__16__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__16__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__16__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__17__name = std::string{"SRAI_x19_x2_31"};
    __Vtask_Decoder_tb__DOT__check__17__expected_result = 5U;
    __Vtask_Decoder_tb__DOT__check__17__expected_reg = 0x13U;
    __Vtask_Decoder_tb__DOT__check__17__actual_instr = 0x40215993U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__17__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__17__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__17__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__17__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__17__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__17__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__17__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__17__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__17__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__17__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__17__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__18__name = std::string{"ORI_x20_x1_14"};
    __Vtask_Decoder_tb__DOT__check__18__expected_result = 0xfU;
    __Vtask_Decoder_tb__DOT__check__18__expected_reg = 0x14U;
    __Vtask_Decoder_tb__DOT__check__18__actual_instr = 0xe0ea13U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__18__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__18__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__18__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__18__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__18__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__18__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__18__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__18__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__18__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__18__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__18__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    __Vtask_Decoder_tb__DOT__check__19__name = std::string{"ANDI_x21_x1_100"};
    __Vtask_Decoder_tb__DOT__check__19__expected_result = 0U;
    __Vtask_Decoder_tb__DOT__check__19__expected_reg = 0x15U;
    __Vtask_Decoder_tb__DOT__check__19__actual_instr = 0x640fa93U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       93);
    vlSelf->Decoder_tb__DOT__instruction = __Vtask_Decoder_tb__DOT__check__19__actual_instr;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       98);
    co_await vlSelf->__VtrigSched_h20d378d2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Decoder_tb.clk)", 
                                                       "testbench/Decoder_tb.sv", 
                                                       99);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "testbench/Decoder_tb.sv", 
                                       100);
    if ((vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
         [__Vtask_Decoder_tb__DOT__check__19__expected_reg] 
         != __Vtask_Decoder_tb__DOT__check__19__expected_result)) {
        VL_WRITEF("FAIL: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__19__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__19__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__19__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__19__expected_reg]);
        vlSelf->Decoder_tb__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__fail_count);
    } else {
        VL_WRITEF("PASS: %@ | expected: x%0# = %0# got %0#\n",
                  -1,&(__Vtask_Decoder_tb__DOT__check__19__name),
                  5,(IData)(__Vtask_Decoder_tb__DOT__check__19__expected_reg),
                  32,__Vtask_Decoder_tb__DOT__check__19__expected_result,
                  32,vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                  [__Vtask_Decoder_tb__DOT__check__19__expected_reg]);
        vlSelf->Decoder_tb__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->Decoder_tb__DOT__pass_count);
    }
    VL_WRITEF("\n---- %0d passed, %0d failed ----\n",
              32,vlSelf->Decoder_tb__DOT__pass_count,
              32,vlSelf->Decoder_tb__DOT__fail_count);
    VL_FINISH_MT("testbench/Decoder_tb.sv", 194, "");
}

VL_INLINE_OPT VlCoroutine VDecoder_tb___024root___eval_initial__TOP__Vtiming__1(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "testbench/Decoder_tb.sv", 
                                           36);
        vlSelf->__Vdlyvval__Decoder_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->Decoder_tb__DOT__clk)));
        vlSelf->__Vdlyvset__Decoder_tb__DOT__clk__v0 = 1U;
    }
}

VL_INLINE_OPT void VDecoder_tb___024root___act_comb__TOP__0(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*2:0*/ Decoder_tb__DOT__instruction_type;
    Decoder_tb__DOT__instruction_type = 0;
    CData/*3:0*/ Decoder_tb__DOT__alu_select;
    Decoder_tb__DOT__alu_select = 0;
    CData/*0:0*/ Decoder_tb__DOT__alu_src;
    Decoder_tb__DOT__alu_src = 0;
    IData/*31:0*/ Decoder_tb__DOT__a;
    Decoder_tb__DOT__a = 0;
    IData/*31:0*/ Decoder_tb__DOT__b;
    Decoder_tb__DOT__b = 0;
    IData/*31:0*/ Decoder_tb__DOT__imm_out;
    Decoder_tb__DOT__imm_out = 0;
    // Body
    vlSelf->Decoder_tb__DOT__write_enable = 0U;
    Decoder_tb__DOT__alu_select = 0U;
    Decoder_tb__DOT__a = ((0U == (0x1fU & (vlSelf->Decoder_tb__DOT__instruction 
                                           >> 0xfU)))
                           ? 0U : vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                          [(0x1fU & (vlSelf->Decoder_tb__DOT__instruction 
                                     >> 0xfU))]);
    Decoder_tb__DOT__alu_src = 0U;
    if ((0x33U == (0x7fU & vlSelf->Decoder_tb__DOT__instruction))) {
        vlSelf->Decoder_tb__DOT__write_enable = 1U;
        Decoder_tb__DOT__alu_select = ((0x4000U & vlSelf->Decoder_tb__DOT__instruction)
                                        ? ((0x2000U 
                                            & vlSelf->Decoder_tb__DOT__instruction)
                                            ? ((0x1000U 
                                                & vlSelf->Decoder_tb__DOT__instruction)
                                                ? 2U
                                                : 3U)
                                            : ((0x1000U 
                                                & vlSelf->Decoder_tb__DOT__instruction)
                                                ? (
                                                   (0x40000000U 
                                                    & vlSelf->Decoder_tb__DOT__instruction)
                                                    ? 7U
                                                    : 6U)
                                                : 4U))
                                        : ((0x2000U 
                                            & vlSelf->Decoder_tb__DOT__instruction)
                                            ? ((0x1000U 
                                                & vlSelf->Decoder_tb__DOT__instruction)
                                                ? 9U
                                                : 8U)
                                            : ((0x1000U 
                                                & vlSelf->Decoder_tb__DOT__instruction)
                                                ? 5U
                                                : (
                                                   (0x40000000U 
                                                    & vlSelf->Decoder_tb__DOT__instruction)
                                                    ? 1U
                                                    : 0U))));
        Decoder_tb__DOT__alu_src = 0U;
    } else if ((0x13U == (0x7fU & vlSelf->Decoder_tb__DOT__instruction))) {
        vlSelf->Decoder_tb__DOT__write_enable = 1U;
        Decoder_tb__DOT__alu_select = ((0x4000U & vlSelf->Decoder_tb__DOT__instruction)
                                        ? ((0x2000U 
                                            & vlSelf->Decoder_tb__DOT__instruction)
                                            ? ((0x1000U 
                                                & vlSelf->Decoder_tb__DOT__instruction)
                                                ? 2U
                                                : 3U)
                                            : ((0x1000U 
                                                & vlSelf->Decoder_tb__DOT__instruction)
                                                ? (
                                                   (0x40000000U 
                                                    & vlSelf->Decoder_tb__DOT__instruction)
                                                    ? 6U
                                                    : 7U)
                                                : 4U))
                                        : ((0x2000U 
                                            & vlSelf->Decoder_tb__DOT__instruction)
                                            ? ((0x1000U 
                                                & vlSelf->Decoder_tb__DOT__instruction)
                                                ? 9U
                                                : 8U)
                                            : ((0x1000U 
                                                & vlSelf->Decoder_tb__DOT__instruction)
                                                ? 5U
                                                : 0U)));
        Decoder_tb__DOT__alu_src = 1U;
    }
    Decoder_tb__DOT__instruction_type = 0U;
    if ((0x33U != (0x7fU & vlSelf->Decoder_tb__DOT__instruction))) {
        if ((0x13U == (0x7fU & vlSelf->Decoder_tb__DOT__instruction))) {
            Decoder_tb__DOT__instruction_type = 0U;
        }
    }
    Decoder_tb__DOT__imm_out = ((4U & (IData)(Decoder_tb__DOT__instruction_type))
                                 ? ((2U & (IData)(Decoder_tb__DOT__instruction_type))
                                     ? 0U : ((1U & (IData)(Decoder_tb__DOT__instruction_type))
                                              ? 0U : 
                                             (((- (IData)(
                                                          (vlSelf->Decoder_tb__DOT__instruction 
                                                           >> 0x1fU))) 
                                               << 0x15U) 
                                              | ((0x100000U 
                                                  & (vlSelf->Decoder_tb__DOT__instruction 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->Decoder_tb__DOT__instruction) 
                                                    | ((0x800U 
                                                        & (vlSelf->Decoder_tb__DOT__instruction 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->Decoder_tb__DOT__instruction 
                                                             >> 0x14U))))))))
                                 : ((2U & (IData)(Decoder_tb__DOT__instruction_type))
                                     ? ((1U & (IData)(Decoder_tb__DOT__instruction_type))
                                         ? (0xfffff000U 
                                            & vlSelf->Decoder_tb__DOT__instruction)
                                         : (((- (IData)(
                                                        (vlSelf->Decoder_tb__DOT__instruction 
                                                         >> 0x1fU))) 
                                             << 0xdU) 
                                            | ((0x1000U 
                                                & (vlSelf->Decoder_tb__DOT__instruction 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSelf->Decoder_tb__DOT__instruction 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->Decoder_tb__DOT__instruction 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->Decoder_tb__DOT__instruction 
                                                           >> 7U)))))))
                                     : ((1U & (IData)(Decoder_tb__DOT__instruction_type))
                                         ? (((- (IData)(
                                                        (vlSelf->Decoder_tb__DOT__instruction 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0xfe0U 
                                                & (vlSelf->Decoder_tb__DOT__instruction 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->Decoder_tb__DOT__instruction 
                                                     >> 7U))))
                                         : (((- (IData)(
                                                        (vlSelf->Decoder_tb__DOT__instruction 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelf->Decoder_tb__DOT__instruction 
                                               >> 0x14U)))));
    Decoder_tb__DOT__b = ((IData)(Decoder_tb__DOT__alu_src)
                           ? Decoder_tb__DOT__imm_out
                           : ((0U == (0x1fU & (vlSelf->Decoder_tb__DOT__instruction 
                                               >> 0x14U)))
                               ? 0U : vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                              [(0x1fU & (vlSelf->Decoder_tb__DOT__instruction 
                                         >> 0x14U))]));
    vlSelf->Decoder_tb__DOT__result = ((8U & (IData)(Decoder_tb__DOT__alu_select))
                                        ? ((4U & (IData)(Decoder_tb__DOT__alu_select))
                                            ? 0U : 
                                           ((2U & (IData)(Decoder_tb__DOT__alu_select))
                                             ? 0U : 
                                            ((1U & (IData)(Decoder_tb__DOT__alu_select))
                                              ? ((Decoder_tb__DOT__a 
                                                  < Decoder_tb__DOT__b)
                                                  ? 1U
                                                  : 0U)
                                              : (VL_LTS_III(32, Decoder_tb__DOT__a, Decoder_tb__DOT__b)
                                                  ? 1U
                                                  : 0U))))
                                        : ((4U & (IData)(Decoder_tb__DOT__alu_select))
                                            ? ((2U 
                                                & (IData)(Decoder_tb__DOT__alu_select))
                                                ? (
                                                   (1U 
                                                    & (IData)(Decoder_tb__DOT__alu_select))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, Decoder_tb__DOT__a, 
                                                                  (0x1fU 
                                                                   & Decoder_tb__DOT__b))
                                                    : 
                                                   (Decoder_tb__DOT__a 
                                                    >> 
                                                    (0x1fU 
                                                     & Decoder_tb__DOT__b)))
                                                : (
                                                   (1U 
                                                    & (IData)(Decoder_tb__DOT__alu_select))
                                                    ? 
                                                   (Decoder_tb__DOT__a 
                                                    << 
                                                    (0x1fU 
                                                     & Decoder_tb__DOT__b))
                                                    : 
                                                   (Decoder_tb__DOT__a 
                                                    ^ Decoder_tb__DOT__b)))
                                            : ((2U 
                                                & (IData)(Decoder_tb__DOT__alu_select))
                                                ? (
                                                   (1U 
                                                    & (IData)(Decoder_tb__DOT__alu_select))
                                                    ? 
                                                   (Decoder_tb__DOT__a 
                                                    | Decoder_tb__DOT__b)
                                                    : 
                                                   (Decoder_tb__DOT__a 
                                                    & Decoder_tb__DOT__b))
                                                : (
                                                   (1U 
                                                    & (IData)(Decoder_tb__DOT__alu_select))
                                                    ? 
                                                   (Decoder_tb__DOT__a 
                                                    - Decoder_tb__DOT__b)
                                                    : 
                                                   (Decoder_tb__DOT__a 
                                                    + Decoder_tb__DOT__b)))));
}

void VDecoder_tb___024root___eval_act(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        VDecoder_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VDecoder_tb___024root___nba_sequent__TOP__0(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__Decoder_tb__DOT__reg_file_dut__DOT__register__v0;
    __Vdlyvdim0__Decoder_tb__DOT__reg_file_dut__DOT__register__v0 = 0;
    IData/*31:0*/ __Vdlyvval__Decoder_tb__DOT__reg_file_dut__DOT__register__v0;
    __Vdlyvval__Decoder_tb__DOT__reg_file_dut__DOT__register__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Decoder_tb__DOT__reg_file_dut__DOT__register__v0;
    __Vdlyvset__Decoder_tb__DOT__reg_file_dut__DOT__register__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Decoder_tb__DOT__reg_file_dut__DOT__register__v1;
    __Vdlyvset__Decoder_tb__DOT__reg_file_dut__DOT__register__v1 = 0;
    // Body
    __Vdlyvset__Decoder_tb__DOT__reg_file_dut__DOT__register__v0 = 0U;
    __Vdlyvset__Decoder_tb__DOT__reg_file_dut__DOT__register__v1 = 0U;
    if (vlSelf->Decoder_tb__DOT__rst_n) {
        if (((IData)(vlSelf->Decoder_tb__DOT__write_enable) 
             & (0U != (0x1fU & (vlSelf->Decoder_tb__DOT__instruction 
                                >> 7U))))) {
            __Vdlyvval__Decoder_tb__DOT__reg_file_dut__DOT__register__v0 
                = vlSelf->Decoder_tb__DOT__result;
            __Vdlyvset__Decoder_tb__DOT__reg_file_dut__DOT__register__v0 = 1U;
            __Vdlyvdim0__Decoder_tb__DOT__reg_file_dut__DOT__register__v0 
                = (0x1fU & (vlSelf->Decoder_tb__DOT__instruction 
                            >> 7U));
        }
    } else {
        __Vdlyvset__Decoder_tb__DOT__reg_file_dut__DOT__register__v1 = 1U;
    }
    if (__Vdlyvset__Decoder_tb__DOT__reg_file_dut__DOT__register__v0) {
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[__Vdlyvdim0__Decoder_tb__DOT__reg_file_dut__DOT__register__v0] 
            = __Vdlyvval__Decoder_tb__DOT__reg_file_dut__DOT__register__v0;
    }
    if (__Vdlyvset__Decoder_tb__DOT__reg_file_dut__DOT__register__v1) {
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[1U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[2U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[3U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[4U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[5U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[6U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[7U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[8U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[9U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0xaU] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0xbU] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0xcU] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0xdU] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0xeU] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0xfU] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0x10U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0x11U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0x12U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0x13U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0x14U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0x15U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0x16U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0x17U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0x18U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0x19U] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0x1aU] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0x1bU] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0x1cU] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0x1dU] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0x1eU] = 0U;
        vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register[0x1fU] = 0U;
    }
}

VL_INLINE_OPT void VDecoder_tb___024root___nba_sequent__TOP__1(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__Decoder_tb__DOT__clk__v0) {
        vlSelf->Decoder_tb__DOT__clk = vlSelf->__Vdlyvval__Decoder_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__Decoder_tb__DOT__clk__v0 = 0U;
    }
}

VL_INLINE_OPT void VDecoder_tb___024root___nba_comb__TOP__0(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*2:0*/ Decoder_tb__DOT__instruction_type;
    Decoder_tb__DOT__instruction_type = 0;
    CData/*3:0*/ Decoder_tb__DOT__alu_select;
    Decoder_tb__DOT__alu_select = 0;
    CData/*0:0*/ Decoder_tb__DOT__alu_src;
    Decoder_tb__DOT__alu_src = 0;
    IData/*31:0*/ Decoder_tb__DOT__a;
    Decoder_tb__DOT__a = 0;
    IData/*31:0*/ Decoder_tb__DOT__b;
    Decoder_tb__DOT__b = 0;
    IData/*31:0*/ Decoder_tb__DOT__imm_out;
    Decoder_tb__DOT__imm_out = 0;
    // Body
    Decoder_tb__DOT__alu_select = 0U;
    Decoder_tb__DOT__alu_src = 0U;
    Decoder_tb__DOT__instruction_type = 0U;
    if ((0x33U != (0x7fU & vlSelf->Decoder_tb__DOT__instruction))) {
        if ((0x13U == (0x7fU & vlSelf->Decoder_tb__DOT__instruction))) {
            Decoder_tb__DOT__instruction_type = 0U;
        }
    }
    vlSelf->Decoder_tb__DOT__write_enable = 0U;
    if ((0x33U == (0x7fU & vlSelf->Decoder_tb__DOT__instruction))) {
        Decoder_tb__DOT__alu_select = ((0x4000U & vlSelf->Decoder_tb__DOT__instruction)
                                        ? ((0x2000U 
                                            & vlSelf->Decoder_tb__DOT__instruction)
                                            ? ((0x1000U 
                                                & vlSelf->Decoder_tb__DOT__instruction)
                                                ? 2U
                                                : 3U)
                                            : ((0x1000U 
                                                & vlSelf->Decoder_tb__DOT__instruction)
                                                ? (
                                                   (0x40000000U 
                                                    & vlSelf->Decoder_tb__DOT__instruction)
                                                    ? 7U
                                                    : 6U)
                                                : 4U))
                                        : ((0x2000U 
                                            & vlSelf->Decoder_tb__DOT__instruction)
                                            ? ((0x1000U 
                                                & vlSelf->Decoder_tb__DOT__instruction)
                                                ? 9U
                                                : 8U)
                                            : ((0x1000U 
                                                & vlSelf->Decoder_tb__DOT__instruction)
                                                ? 5U
                                                : (
                                                   (0x40000000U 
                                                    & vlSelf->Decoder_tb__DOT__instruction)
                                                    ? 1U
                                                    : 0U))));
        Decoder_tb__DOT__alu_src = 0U;
        vlSelf->Decoder_tb__DOT__write_enable = 1U;
    } else if ((0x13U == (0x7fU & vlSelf->Decoder_tb__DOT__instruction))) {
        Decoder_tb__DOT__alu_select = ((0x4000U & vlSelf->Decoder_tb__DOT__instruction)
                                        ? ((0x2000U 
                                            & vlSelf->Decoder_tb__DOT__instruction)
                                            ? ((0x1000U 
                                                & vlSelf->Decoder_tb__DOT__instruction)
                                                ? 2U
                                                : 3U)
                                            : ((0x1000U 
                                                & vlSelf->Decoder_tb__DOT__instruction)
                                                ? (
                                                   (0x40000000U 
                                                    & vlSelf->Decoder_tb__DOT__instruction)
                                                    ? 6U
                                                    : 7U)
                                                : 4U))
                                        : ((0x2000U 
                                            & vlSelf->Decoder_tb__DOT__instruction)
                                            ? ((0x1000U 
                                                & vlSelf->Decoder_tb__DOT__instruction)
                                                ? 9U
                                                : 8U)
                                            : ((0x1000U 
                                                & vlSelf->Decoder_tb__DOT__instruction)
                                                ? 5U
                                                : 0U)));
        Decoder_tb__DOT__alu_src = 1U;
        vlSelf->Decoder_tb__DOT__write_enable = 1U;
    }
    Decoder_tb__DOT__a = ((0U == (0x1fU & (vlSelf->Decoder_tb__DOT__instruction 
                                           >> 0xfU)))
                           ? 0U : vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                          [(0x1fU & (vlSelf->Decoder_tb__DOT__instruction 
                                     >> 0xfU))]);
    Decoder_tb__DOT__imm_out = ((4U & (IData)(Decoder_tb__DOT__instruction_type))
                                 ? ((2U & (IData)(Decoder_tb__DOT__instruction_type))
                                     ? 0U : ((1U & (IData)(Decoder_tb__DOT__instruction_type))
                                              ? 0U : 
                                             (((- (IData)(
                                                          (vlSelf->Decoder_tb__DOT__instruction 
                                                           >> 0x1fU))) 
                                               << 0x15U) 
                                              | ((0x100000U 
                                                  & (vlSelf->Decoder_tb__DOT__instruction 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->Decoder_tb__DOT__instruction) 
                                                    | ((0x800U 
                                                        & (vlSelf->Decoder_tb__DOT__instruction 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->Decoder_tb__DOT__instruction 
                                                             >> 0x14U))))))))
                                 : ((2U & (IData)(Decoder_tb__DOT__instruction_type))
                                     ? ((1U & (IData)(Decoder_tb__DOT__instruction_type))
                                         ? (0xfffff000U 
                                            & vlSelf->Decoder_tb__DOT__instruction)
                                         : (((- (IData)(
                                                        (vlSelf->Decoder_tb__DOT__instruction 
                                                         >> 0x1fU))) 
                                             << 0xdU) 
                                            | ((0x1000U 
                                                & (vlSelf->Decoder_tb__DOT__instruction 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSelf->Decoder_tb__DOT__instruction 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->Decoder_tb__DOT__instruction 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->Decoder_tb__DOT__instruction 
                                                           >> 7U)))))))
                                     : ((1U & (IData)(Decoder_tb__DOT__instruction_type))
                                         ? (((- (IData)(
                                                        (vlSelf->Decoder_tb__DOT__instruction 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0xfe0U 
                                                & (vlSelf->Decoder_tb__DOT__instruction 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->Decoder_tb__DOT__instruction 
                                                     >> 7U))))
                                         : (((- (IData)(
                                                        (vlSelf->Decoder_tb__DOT__instruction 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelf->Decoder_tb__DOT__instruction 
                                               >> 0x14U)))));
    Decoder_tb__DOT__b = ((IData)(Decoder_tb__DOT__alu_src)
                           ? Decoder_tb__DOT__imm_out
                           : ((0U == (0x1fU & (vlSelf->Decoder_tb__DOT__instruction 
                                               >> 0x14U)))
                               ? 0U : vlSelf->Decoder_tb__DOT__reg_file_dut__DOT__register
                              [(0x1fU & (vlSelf->Decoder_tb__DOT__instruction 
                                         >> 0x14U))]));
    vlSelf->Decoder_tb__DOT__result = ((8U & (IData)(Decoder_tb__DOT__alu_select))
                                        ? ((4U & (IData)(Decoder_tb__DOT__alu_select))
                                            ? 0U : 
                                           ((2U & (IData)(Decoder_tb__DOT__alu_select))
                                             ? 0U : 
                                            ((1U & (IData)(Decoder_tb__DOT__alu_select))
                                              ? ((Decoder_tb__DOT__a 
                                                  < Decoder_tb__DOT__b)
                                                  ? 1U
                                                  : 0U)
                                              : (VL_LTS_III(32, Decoder_tb__DOT__a, Decoder_tb__DOT__b)
                                                  ? 1U
                                                  : 0U))))
                                        : ((4U & (IData)(Decoder_tb__DOT__alu_select))
                                            ? ((2U 
                                                & (IData)(Decoder_tb__DOT__alu_select))
                                                ? (
                                                   (1U 
                                                    & (IData)(Decoder_tb__DOT__alu_select))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, Decoder_tb__DOT__a, 
                                                                  (0x1fU 
                                                                   & Decoder_tb__DOT__b))
                                                    : 
                                                   (Decoder_tb__DOT__a 
                                                    >> 
                                                    (0x1fU 
                                                     & Decoder_tb__DOT__b)))
                                                : (
                                                   (1U 
                                                    & (IData)(Decoder_tb__DOT__alu_select))
                                                    ? 
                                                   (Decoder_tb__DOT__a 
                                                    << 
                                                    (0x1fU 
                                                     & Decoder_tb__DOT__b))
                                                    : 
                                                   (Decoder_tb__DOT__a 
                                                    ^ Decoder_tb__DOT__b)))
                                            : ((2U 
                                                & (IData)(Decoder_tb__DOT__alu_select))
                                                ? (
                                                   (1U 
                                                    & (IData)(Decoder_tb__DOT__alu_select))
                                                    ? 
                                                   (Decoder_tb__DOT__a 
                                                    | Decoder_tb__DOT__b)
                                                    : 
                                                   (Decoder_tb__DOT__a 
                                                    & Decoder_tb__DOT__b))
                                                : (
                                                   (1U 
                                                    & (IData)(Decoder_tb__DOT__alu_select))
                                                    ? 
                                                   (Decoder_tb__DOT__a 
                                                    - Decoder_tb__DOT__b)
                                                    : 
                                                   (Decoder_tb__DOT__a 
                                                    + Decoder_tb__DOT__b)))));
}

void VDecoder_tb___024root___eval_nba(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDecoder_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDecoder_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDecoder_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VDecoder_tb___024root___timing_resume(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h20d378d2__0.resume("@(posedge Decoder_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VDecoder_tb___024root___timing_commit(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h20d378d2__0.commit("@(posedge Decoder_tb.clk)");
    }
}

void VDecoder_tb___024root___eval_triggers__act(VDecoder_tb___024root* vlSelf);

bool VDecoder_tb___024root___eval_phase__act(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VDecoder_tb___024root___eval_triggers__act(vlSelf);
    VDecoder_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VDecoder_tb___024root___timing_resume(vlSelf);
        VDecoder_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VDecoder_tb___024root___eval_phase__nba(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VDecoder_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecoder_tb___024root___dump_triggers__nba(VDecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VDecoder_tb___024root___dump_triggers__act(VDecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VDecoder_tb___024root___eval(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VDecoder_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/Decoder_tb.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VDecoder_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/Decoder_tb.sv", 6, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VDecoder_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VDecoder_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VDecoder_tb___024root___eval_debug_assertions(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
