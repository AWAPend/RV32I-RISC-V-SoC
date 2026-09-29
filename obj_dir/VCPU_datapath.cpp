// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCPU_datapath__pch.h"

//============================================================
// Constructors

VCPU_datapath::VCPU_datapath(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCPU_datapath__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VCPU_datapath::VCPU_datapath(const char* _vcname__)
    : VCPU_datapath(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCPU_datapath::~VCPU_datapath() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCPU_datapath___024root___eval_debug_assertions(VCPU_datapath___024root* vlSelf);
#endif  // VL_DEBUG
void VCPU_datapath___024root___eval_static(VCPU_datapath___024root* vlSelf);
void VCPU_datapath___024root___eval_initial(VCPU_datapath___024root* vlSelf);
void VCPU_datapath___024root___eval_settle(VCPU_datapath___024root* vlSelf);
void VCPU_datapath___024root___eval(VCPU_datapath___024root* vlSelf);

void VCPU_datapath::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCPU_datapath::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCPU_datapath___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCPU_datapath___024root___eval_static(&(vlSymsp->TOP));
        VCPU_datapath___024root___eval_initial(&(vlSymsp->TOP));
        VCPU_datapath___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCPU_datapath___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCPU_datapath::eventsPending() { return false; }

uint64_t VCPU_datapath::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCPU_datapath::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCPU_datapath___024root___eval_final(VCPU_datapath___024root* vlSelf);

VL_ATTR_COLD void VCPU_datapath::final() {
    VCPU_datapath___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCPU_datapath::hierName() const { return vlSymsp->name(); }
const char* VCPU_datapath::modelName() const { return "VCPU_datapath"; }
unsigned VCPU_datapath::threads() const { return 1; }
void VCPU_datapath::prepareClone() const { contextp()->prepareClone(); }
void VCPU_datapath::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VCPU_datapath::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VCPU_datapath::trace()' called on model that was Verilated without --trace option");
}
