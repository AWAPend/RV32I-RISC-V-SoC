// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VInstruction_mem__pch.h"
#include "VInstruction_mem.h"
#include "VInstruction_mem___024root.h"

// FUNCTIONS
VInstruction_mem__Syms::~VInstruction_mem__Syms()
{
}

VInstruction_mem__Syms::VInstruction_mem__Syms(VerilatedContext* contextp, const char* namep, VInstruction_mem* modelp)
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
