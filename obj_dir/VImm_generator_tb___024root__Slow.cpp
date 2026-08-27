// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VImm_generator_tb.h for the primary calling header

#include "VImm_generator_tb__pch.h"
#include "VImm_generator_tb__Syms.h"
#include "VImm_generator_tb___024root.h"

void VImm_generator_tb___024root___ctor_var_reset(VImm_generator_tb___024root* vlSelf);

VImm_generator_tb___024root::VImm_generator_tb___024root(VImm_generator_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VImm_generator_tb___024root___ctor_var_reset(this);
}

void VImm_generator_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VImm_generator_tb___024root::~VImm_generator_tb___024root() {
}
