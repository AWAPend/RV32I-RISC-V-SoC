// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoder.h for the primary calling header

#include "VDecoder__pch.h"
#include "VDecoder__Syms.h"
#include "VDecoder___024root.h"

void VDecoder___024root___ctor_var_reset(VDecoder___024root* vlSelf);

VDecoder___024root::VDecoder___024root(VDecoder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VDecoder___024root___ctor_var_reset(this);
}

void VDecoder___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VDecoder___024root::~VDecoder___024root() {
}
