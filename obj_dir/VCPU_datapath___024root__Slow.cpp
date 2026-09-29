// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU_datapath.h for the primary calling header

#include "VCPU_datapath__pch.h"
#include "VCPU_datapath__Syms.h"
#include "VCPU_datapath___024root.h"

void VCPU_datapath___024root___ctor_var_reset(VCPU_datapath___024root* vlSelf);

VCPU_datapath___024root::VCPU_datapath___024root(VCPU_datapath__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_datapath___024root___ctor_var_reset(this);
}

void VCPU_datapath___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCPU_datapath___024root::~VCPU_datapath___024root() {
}
