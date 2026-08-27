// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDecoder_tb.h for the primary calling header

#ifndef VERILATED_VDECODER_TB___024ROOT_H_
#define VERILATED_VDECODER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VDecoder_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VDecoder_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ Decoder_tb__DOT__clk;
    CData/*0:0*/ Decoder_tb__DOT__write_enable;
    CData/*0:0*/ Decoder_tb__DOT__rst_n;
    CData/*0:0*/ __Vdlyvval__Decoder_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__Decoder_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Decoder_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ Decoder_tb__DOT__instruction;
    IData/*31:0*/ Decoder_tb__DOT__result;
    IData/*31:0*/ Decoder_tb__DOT__pass_count;
    IData/*31:0*/ Decoder_tb__DOT__fail_count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> Decoder_tb__DOT__reg_file_dut__DOT__register;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h20d378d2__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VDecoder_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VDecoder_tb___024root(VDecoder_tb__Syms* symsp, const char* v__name);
    ~VDecoder_tb___024root();
    VL_UNCOPYABLE(VDecoder_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
