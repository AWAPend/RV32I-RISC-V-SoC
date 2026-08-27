// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VImm_generator_tb__pch.h"
#include "VImm_generator_tb.h"
#include "VImm_generator_tb___024root.h"

// FUNCTIONS
VImm_generator_tb__Syms::~VImm_generator_tb__Syms()
{
}

VImm_generator_tb__Syms::VImm_generator_tb__Syms(VerilatedContext* contextp, const char* namep, VImm_generator_tb* modelp)
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
