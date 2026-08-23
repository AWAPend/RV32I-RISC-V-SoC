// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegister_file.h for the primary calling header

#ifndef VERILATED_VREGISTER_FILE___024ROOT_H_
#define VERILATED_VREGISTER_FILE___024ROOT_H_  // guard

#include "verilated.h"


class VRegister_file__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegister_file___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(rs1_addr,4,0);
    VL_IN8(rs2_addr,4,0);
    VL_IN8(write_addr,4,0);
    VL_IN8(write_enable,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(rs1_data,31,0);
    VL_OUT(rs2_data,31,0);
    VL_IN(write_data,31,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> Register_file__DOT__register;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRegister_file__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRegister_file___024root(VRegister_file__Syms* symsp, const char* v__name);
    ~VRegister_file___024root();
    VL_UNCOPYABLE(VRegister_file___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
