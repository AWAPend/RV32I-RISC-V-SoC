// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstruction_mem.h for the primary calling header

#include "VInstruction_mem__pch.h"
#include "VInstruction_mem__Syms.h"
#include "VInstruction_mem___024root.h"

void VInstruction_mem___024root___ctor_var_reset(VInstruction_mem___024root* vlSelf);

VInstruction_mem___024root::VInstruction_mem___024root(VInstruction_mem__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VInstruction_mem___024root___ctor_var_reset(this);
}

void VInstruction_mem___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VInstruction_mem___024root::~VInstruction_mem___024root() {
}
