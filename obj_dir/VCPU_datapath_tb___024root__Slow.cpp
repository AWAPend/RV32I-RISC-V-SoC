// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU_datapath_tb.h for the primary calling header

#include "VCPU_datapath_tb__pch.h"
#include "VCPU_datapath_tb__Syms.h"
#include "VCPU_datapath_tb___024root.h"

void VCPU_datapath_tb___024root___ctor_var_reset(VCPU_datapath_tb___024root* vlSelf);

VCPU_datapath_tb___024root::VCPU_datapath_tb___024root(VCPU_datapath_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_datapath_tb___024root___ctor_var_reset(this);
}

void VCPU_datapath_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCPU_datapath_tb___024root::~VCPU_datapath_tb___024root() {
}
