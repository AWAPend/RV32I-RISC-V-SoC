// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VData_memory_tb.h for the primary calling header

#ifndef VERILATED_VDATA_MEMORY_TB___024ROOT_H_
#define VERILATED_VDATA_MEMORY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VData_memory_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VData_memory_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ Data_memory_tb__DOT__clk;
    CData/*0:0*/ Data_memory_tb__DOT__read_mem;
    CData/*0:0*/ Data_memory_tb__DOT__write_mem;
    CData/*2:0*/ Data_memory_tb__DOT__funct3;
    CData/*0:0*/ __Vdlyvval__Data_memory_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__Data_memory_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Data_memory_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ Data_memory_tb__DOT__address;
    IData/*31:0*/ Data_memory_tb__DOT__write_data;
    IData/*31:0*/ Data_memory_tb__DOT__read_data;
    IData/*31:0*/ Data_memory_tb__DOT__pass_count;
    IData/*31:0*/ Data_memory_tb__DOT__fail_count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> Data_memory_tb__DOT__dut__DOT__register;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc25e54c7__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VData_memory_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VData_memory_tb___024root(VData_memory_tb__Syms* symsp, const char* v__name);
    ~VData_memory_tb___024root();
    VL_UNCOPYABLE(VData_memory_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
