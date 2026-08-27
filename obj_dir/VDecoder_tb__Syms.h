// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDECODER_TB__SYMS_H_
#define VERILATED_VDECODER_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VDecoder_tb.h"

// INCLUDE MODULE CLASSES
#include "VDecoder_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VDecoder_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VDecoder_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VDecoder_tb___024root          TOP;

    // CONSTRUCTORS
    VDecoder_tb__Syms(VerilatedContext* contextp, const char* namep, VDecoder_tb* modelp);
    ~VDecoder_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
