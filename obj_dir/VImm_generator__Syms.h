// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIMM_GENERATOR__SYMS_H_
#define VERILATED_VIMM_GENERATOR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VImm_generator.h"

// INCLUDE MODULE CLASSES
#include "VImm_generator___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VImm_generator__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VImm_generator* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VImm_generator___024root       TOP;

    // CONSTRUCTORS
    VImm_generator__Syms(VerilatedContext* contextp, const char* namep, VImm_generator* modelp);
    ~VImm_generator__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
