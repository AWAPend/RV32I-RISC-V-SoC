// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoder_tb.h for the primary calling header

#include "VDecoder_tb__pch.h"
#include "VDecoder_tb__Syms.h"
#include "VDecoder_tb___024root.h"

void VDecoder_tb___024root___ctor_var_reset(VDecoder_tb___024root* vlSelf);

VDecoder_tb___024root::VDecoder_tb___024root(VDecoder_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VDecoder_tb___024root___ctor_var_reset(this);
}

void VDecoder_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VDecoder_tb___024root::~VDecoder_tb___024root() {
}
