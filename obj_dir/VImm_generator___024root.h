// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VImm_generator.h for the primary calling header

#ifndef VERILATED_VIMM_GENERATOR___024ROOT_H_
#define VERILATED_VIMM_GENERATOR___024ROOT_H_  // guard

#include "verilated.h"


class VImm_generator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VImm_generator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(instruction_type,2,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(instruction,31,0);
    VL_OUT(imm_out,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VImm_generator__Syms* const vlSymsp;

    // CONSTRUCTORS
    VImm_generator___024root(VImm_generator__Syms* symsp, const char* v__name);
    ~VImm_generator___024root();
    VL_UNCOPYABLE(VImm_generator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
