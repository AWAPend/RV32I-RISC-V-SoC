// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU_datapath_tb.h for the primary calling header

#ifndef VERILATED_VCPU_DATAPATH_TB___024ROOT_H_
#define VERILATED_VCPU_DATAPATH_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VCPU_datapath_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_datapath_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ CPU_datapath_tb__DOT__clk;
    CData/*0:0*/ CPU_datapath_tb__DOT__rst_n;
    CData/*0:0*/ CPU_datapath_tb__DOT__dut__DOT__write_enable;
    CData/*0:0*/ __Vdlyvval__CPU_datapath_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__CPU_datapath_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CPU_datapath_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CPU_datapath_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ CPU_datapath_tb__DOT__dut__DOT__pc_addr;
    IData/*31:0*/ CPU_datapath_tb__DOT__dut__DOT__instruction;
    IData/*31:0*/ CPU_datapath_tb__DOT__dut__DOT__result;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> CPU_datapath_tb__DOT__dut__DOT__instruction_mem_dut__DOT__register;
    VlUnpacked<IData/*31:0*/, 32> CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha0a7f75e__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCPU_datapath_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_datapath_tb___024root(VCPU_datapath_tb__Syms* symsp, const char* v__name);
    ~VCPU_datapath_tb___024root();
    VL_UNCOPYABLE(VCPU_datapath_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
