// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDecoder.h for the primary calling header

#ifndef VERILATED_VDECODER___024ROOT_H_
#define VERILATED_VDECODER___024ROOT_H_  // guard

#include "verilated.h"


class VDecoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) VDecoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(instruction_type,2,0);
    VL_OUT8(alu_select,3,0);
    VL_OUT8(rs1_addr,4,0);
    VL_OUT8(rs2_addr,4,0);
    VL_OUT8(write_addr,4,0);
    VL_OUT8(alu_src,0,0);
    VL_OUT8(write_enable,0,0);
    VL_OUT8(read_mem,0,0);
    VL_OUT8(write_mem,0,0);
    VL_OUT8(writeback_to_reg,0,0);
    VL_OUT8(branch,0,0);
    VL_OUT8(jump,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(instruction,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VDecoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    VDecoder___024root(VDecoder__Syms* symsp, const char* v__name);
    ~VDecoder___024root();
    VL_UNCOPYABLE(VDecoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
