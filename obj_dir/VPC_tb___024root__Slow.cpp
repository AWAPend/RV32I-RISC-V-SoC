// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC_tb.h for the primary calling header

#include "VPC_tb__pch.h"
#include "VPC_tb__Syms.h"
#include "VPC_tb___024root.h"

void VPC_tb___024root___ctor_var_reset(VPC_tb___024root* vlSelf);

VPC_tb___024root::VPC_tb___024root(VPC_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPC_tb___024root___ctor_var_reset(this);
}

void VPC_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPC_tb___024root::~VPC_tb___024root() {
}
