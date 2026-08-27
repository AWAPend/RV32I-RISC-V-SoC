// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDecoder_tb__pch.h"

//============================================================
// Constructors

VDecoder_tb::VDecoder_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VDecoder_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VDecoder_tb::VDecoder_tb(const char* _vcname__)
    : VDecoder_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VDecoder_tb::~VDecoder_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VDecoder_tb___024root___eval_debug_assertions(VDecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG
void VDecoder_tb___024root___eval_static(VDecoder_tb___024root* vlSelf);
void VDecoder_tb___024root___eval_initial(VDecoder_tb___024root* vlSelf);
void VDecoder_tb___024root___eval_settle(VDecoder_tb___024root* vlSelf);
void VDecoder_tb___024root___eval(VDecoder_tb___024root* vlSelf);

void VDecoder_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDecoder_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDecoder_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VDecoder_tb___024root___eval_static(&(vlSymsp->TOP));
        VDecoder_tb___024root___eval_initial(&(vlSymsp->TOP));
        VDecoder_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VDecoder_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VDecoder_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VDecoder_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VDecoder_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VDecoder_tb___024root___eval_final(VDecoder_tb___024root* vlSelf);

VL_ATTR_COLD void VDecoder_tb::final() {
    VDecoder_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VDecoder_tb::hierName() const { return vlSymsp->name(); }
const char* VDecoder_tb::modelName() const { return "VDecoder_tb"; }
unsigned VDecoder_tb::threads() const { return 1; }
void VDecoder_tb::prepareClone() const { contextp()->prepareClone(); }
void VDecoder_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VDecoder_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VDecoder_tb::trace()' called on model that was Verilated without --trace option");
}
