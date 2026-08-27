// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIMM_GENERATOR_TB__SYMS_H_
#define VERILATED_VIMM_GENERATOR_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VImm_generator_tb.h"

// INCLUDE MODULE CLASSES
#include "VImm_generator_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VImm_generator_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VImm_generator_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VImm_generator_tb___024root    TOP;

    // CONSTRUCTORS
    VImm_generator_tb__Syms(VerilatedContext* contextp, const char* namep, VImm_generator_tb* modelp);
    ~VImm_generator_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
