// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VData_memory_tb__pch.h"

//============================================================
// Constructors

VData_memory_tb::VData_memory_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VData_memory_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VData_memory_tb::VData_memory_tb(const char* _vcname__)
    : VData_memory_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VData_memory_tb::~VData_memory_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VData_memory_tb___024root___eval_debug_assertions(VData_memory_tb___024root* vlSelf);
#endif  // VL_DEBUG
void VData_memory_tb___024root___eval_static(VData_memory_tb___024root* vlSelf);
void VData_memory_tb___024root___eval_initial(VData_memory_tb___024root* vlSelf);
void VData_memory_tb___024root___eval_settle(VData_memory_tb___024root* vlSelf);
void VData_memory_tb___024root___eval(VData_memory_tb___024root* vlSelf);

void VData_memory_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VData_memory_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VData_memory_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VData_memory_tb___024root___eval_static(&(vlSymsp->TOP));
        VData_memory_tb___024root___eval_initial(&(vlSymsp->TOP));
        VData_memory_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VData_memory_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VData_memory_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VData_memory_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VData_memory_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VData_memory_tb___024root___eval_final(VData_memory_tb___024root* vlSelf);

VL_ATTR_COLD void VData_memory_tb::final() {
    VData_memory_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VData_memory_tb::hierName() const { return vlSymsp->name(); }
const char* VData_memory_tb::modelName() const { return "VData_memory_tb"; }
unsigned VData_memory_tb::threads() const { return 1; }
void VData_memory_tb::prepareClone() const { contextp()->prepareClone(); }
void VData_memory_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VData_memory_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VData_memory_tb::trace()' called on model that was Verilated without --trace option");
}
