// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister_file_tb.h for the primary calling header

#include "VRegister_file_tb__pch.h"
#include "VRegister_file_tb__Syms.h"
#include "VRegister_file_tb___024root.h"

void VRegister_file_tb___024root___ctor_var_reset(VRegister_file_tb___024root* vlSelf);

VRegister_file_tb___024root::VRegister_file_tb___024root(VRegister_file_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRegister_file_tb___024root___ctor_var_reset(this);
}

void VRegister_file_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRegister_file_tb___024root::~VRegister_file_tb___024root() {
}
