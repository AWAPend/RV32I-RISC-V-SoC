// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDATA_MEMORY_TB__SYMS_H_
#define VERILATED_VDATA_MEMORY_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VData_memory_tb.h"

// INCLUDE MODULE CLASSES
#include "VData_memory_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VData_memory_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VData_memory_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VData_memory_tb___024root      TOP;

    // CONSTRUCTORS
    VData_memory_tb__Syms(VerilatedContext* contextp, const char* namep, VData_memory_tb* modelp);
    ~VData_memory_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
