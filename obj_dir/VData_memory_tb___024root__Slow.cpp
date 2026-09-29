// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VData_memory_tb.h for the primary calling header

#include "VData_memory_tb__pch.h"
#include "VData_memory_tb__Syms.h"
#include "VData_memory_tb___024root.h"

void VData_memory_tb___024root___ctor_var_reset(VData_memory_tb___024root* vlSelf);

VData_memory_tb___024root::VData_memory_tb___024root(VData_memory_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VData_memory_tb___024root___ctor_var_reset(this);
}

void VData_memory_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VData_memory_tb___024root::~VData_memory_tb___024root() {
}
