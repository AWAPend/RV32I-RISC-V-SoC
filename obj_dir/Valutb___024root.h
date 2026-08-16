// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valutb.h for the primary calling header

#ifndef VERILATED_VALUTB___024ROOT_H_
#define VERILATED_VALUTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Valutb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valutb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ alutb__DOT__alu_select;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ alutb__DOT__a;
    IData/*31:0*/ alutb__DOT__b;
    IData/*31:0*/ alutb__DOT__result;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valutb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valutb___024root(Valutb__Syms* symsp, const char* v__name);
    ~Valutb___024root();
    VL_UNCOPYABLE(Valutb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
