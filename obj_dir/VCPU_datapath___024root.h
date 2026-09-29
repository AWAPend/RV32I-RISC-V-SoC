// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU_datapath.h for the primary calling header

#ifndef VERILATED_VCPU_DATAPATH___024ROOT_H_
#define VERILATED_VCPU_DATAPATH___024ROOT_H_  // guard

#include "verilated.h"


class VCPU_datapath__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_datapath___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCPU_datapath__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_datapath___024root(VCPU_datapath__Syms* symsp, const char* v__name);
    ~VCPU_datapath___024root();
    VL_UNCOPYABLE(VCPU_datapath___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
