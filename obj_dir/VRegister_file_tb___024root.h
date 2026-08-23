// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegister_file_tb.h for the primary calling header

#ifndef VERILATED_VREGISTER_FILE_TB___024ROOT_H_
#define VERILATED_VREGISTER_FILE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VRegister_file_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegister_file_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ Register_file_tb__DOT__clk;
    CData/*0:0*/ Register_file_tb__DOT__rst_n;
    CData/*4:0*/ Register_file_tb__DOT__rs1_addr;
    CData/*4:0*/ Register_file_tb__DOT__rs2_addr;
    CData/*4:0*/ Register_file_tb__DOT__write_addr;
    CData/*0:0*/ Register_file_tb__DOT__write_enable;
    CData/*0:0*/ __Vdlyvval__Register_file_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__Register_file_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Register_file_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ Register_file_tb__DOT__rs1_data;
    IData/*31:0*/ Register_file_tb__DOT__rs2_data;
    IData/*31:0*/ Register_file_tb__DOT__write_data;
    IData/*31:0*/ Register_file_tb__DOT__pass_count;
    IData/*31:0*/ Register_file_tb__DOT__fail_count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> Register_file_tb__DOT__dut__DOT__register;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h08e3a151__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRegister_file_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRegister_file_tb___024root(VRegister_file_tb__Syms* symsp, const char* v__name);
    ~VRegister_file_tb___024root();
    VL_UNCOPYABLE(VRegister_file_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
