// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VData_memory_tb__pch.h"
#include "VData_memory_tb.h"
#include "VData_memory_tb___024root.h"

// FUNCTIONS
VData_memory_tb__Syms::~VData_memory_tb__Syms()
{
}

VData_memory_tb__Syms::VData_memory_tb__Syms(VerilatedContext* contextp, const char* namep, VData_memory_tb* modelp)
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
