// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VImm_generator_tb.h for the primary calling header

#ifndef VERILATED_VIMM_GENERATOR_TB___024ROOT_H_
#define VERILATED_VIMM_GENERATOR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VImm_generator_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VImm_generator_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ Imm_generator_tb__DOT__instruction_type;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ Imm_generator_tb__DOT__instruction;
    IData/*31:0*/ Imm_generator_tb__DOT__imm_out;
    IData/*31:0*/ Imm_generator_tb__DOT__pass_count;
    IData/*31:0*/ Imm_generator_tb__DOT__fail_count;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VImm_generator_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VImm_generator_tb___024root(VImm_generator_tb__Syms* symsp, const char* v__name);
    ~VImm_generator_tb___024root();
    VL_UNCOPYABLE(VImm_generator_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
