// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCPU_datapath__pch.h"
#include "VCPU_datapath.h"
#include "VCPU_datapath___024root.h"

// FUNCTIONS
VCPU_datapath__Syms::~VCPU_datapath__Syms()
{
}

VCPU_datapath__Syms::VCPU_datapath__Syms(VerilatedContext* contextp, const char* namep, VCPU_datapath* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
