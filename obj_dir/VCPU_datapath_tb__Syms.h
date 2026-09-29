// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCPU_DATAPATH_TB__SYMS_H_
#define VERILATED_VCPU_DATAPATH_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCPU_datapath_tb.h"

// INCLUDE MODULE CLASSES
#include "VCPU_datapath_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VCPU_datapath_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCPU_datapath_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCPU_datapath_tb___024root     TOP;

    // CONSTRUCTORS
    VCPU_datapath_tb__Syms(VerilatedContext* contextp, const char* namep, VCPU_datapath_tb* modelp);
    ~VCPU_datapath_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
