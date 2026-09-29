// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VInstruction_mem.h for the primary calling header

#ifndef VERILATED_VINSTRUCTION_MEM___024ROOT_H_
#define VERILATED_VINSTRUCTION_MEM___024ROOT_H_  // guard

#include "verilated.h"


class VInstruction_mem__Syms;

class alignas(VL_CACHE_LINE_BYTES) VInstruction_mem___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(pc_addr,31,0);
    VL_OUT(instruction_data,31,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> Instruction_mem__DOT__register;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VInstruction_mem__Syms* const vlSymsp;

    // CONSTRUCTORS
    VInstruction_mem___024root(VInstruction_mem__Syms* symsp, const char* v__name);
    ~VInstruction_mem___024root();
    VL_UNCOPYABLE(VInstruction_mem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
