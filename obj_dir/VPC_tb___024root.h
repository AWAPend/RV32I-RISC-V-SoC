// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPC_tb.h for the primary calling header

#ifndef VERILATED_VPC_TB___024ROOT_H_
#define VERILATED_VPC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VPC_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPC_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ PC_tb__DOT__clk;
    CData/*0:0*/ PC_tb__DOT__rst_n;
    CData/*0:0*/ PC_tb__DOT__branch_taken;
    CData/*0:0*/ __Vdlyvval__PC_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__PC_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__PC_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__PC_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ PC_tb__DOT__pc_addr;
    IData/*31:0*/ PC_tb__DOT__branch_target;
    IData/*31:0*/ PC_tb__DOT__pass_count;
    IData/*31:0*/ PC_tb__DOT__fail_count;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he0ac934c__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPC_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPC_tb___024root(VPC_tb__Syms* symsp, const char* v__name);
    ~VPC_tb___024root();
    VL_UNCOPYABLE(VPC_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
