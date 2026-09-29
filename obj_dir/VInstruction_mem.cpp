// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VInstruction_mem__pch.h"

//============================================================
// Constructors

VInstruction_mem::VInstruction_mem(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VInstruction_mem__Syms(contextp(), _vcname__, this)}
    , pc_addr{vlSymsp->TOP.pc_addr}
    , instruction_data{vlSymsp->TOP.instruction_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VInstruction_mem::VInstruction_mem(const char* _vcname__)
    : VInstruction_mem(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VInstruction_mem::~VInstruction_mem() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VInstruction_mem___024root___eval_debug_assertions(VInstruction_mem___024root* vlSelf);
#endif  // VL_DEBUG
void VInstruction_mem___024root___eval_static(VInstruction_mem___024root* vlSelf);
void VInstruction_mem___024root___eval_initial(VInstruction_mem___024root* vlSelf);
void VInstruction_mem___024root___eval_settle(VInstruction_mem___024root* vlSelf);
void VInstruction_mem___024root___eval(VInstruction_mem___024root* vlSelf);

void VInstruction_mem::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VInstruction_mem::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VInstruction_mem___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VInstruction_mem___024root___eval_static(&(vlSymsp->TOP));
        VInstruction_mem___024root___eval_initial(&(vlSymsp->TOP));
        VInstruction_mem___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VInstruction_mem___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VInstruction_mem::eventsPending() { return false; }

uint64_t VInstruction_mem::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VInstruction_mem::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VInstruction_mem___024root___eval_final(VInstruction_mem___024root* vlSelf);

VL_ATTR_COLD void VInstruction_mem::final() {
    VInstruction_mem___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VInstruction_mem::hierName() const { return vlSymsp->name(); }
const char* VInstruction_mem::modelName() const { return "VInstruction_mem"; }
unsigned VInstruction_mem::threads() const { return 1; }
void VInstruction_mem::prepareClone() const { contextp()->prepareClone(); }
void VInstruction_mem::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VInstruction_mem::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VInstruction_mem::trace()' called on model that was Verilated without --trace option");
}
