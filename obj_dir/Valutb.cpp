// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Valutb__pch.h"

//============================================================
// Constructors

Valutb::Valutb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Valutb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Valutb::Valutb(const char* _vcname__)
    : Valutb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Valutb::~Valutb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Valutb___024root___eval_debug_assertions(Valutb___024root* vlSelf);
#endif  // VL_DEBUG
void Valutb___024root___eval_static(Valutb___024root* vlSelf);
void Valutb___024root___eval_initial(Valutb___024root* vlSelf);
void Valutb___024root___eval_settle(Valutb___024root* vlSelf);
void Valutb___024root___eval(Valutb___024root* vlSelf);

void Valutb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valutb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Valutb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Valutb___024root___eval_static(&(vlSymsp->TOP));
        Valutb___024root___eval_initial(&(vlSymsp->TOP));
        Valutb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Valutb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Valutb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Valutb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Valutb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Valutb___024root___eval_final(Valutb___024root* vlSelf);

VL_ATTR_COLD void Valutb::final() {
    Valutb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Valutb::hierName() const { return vlSymsp->name(); }
const char* Valutb::modelName() const { return "Valutb"; }
unsigned Valutb::threads() const { return 1; }
void Valutb::prepareClone() const { contextp()->prepareClone(); }
void Valutb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Valutb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Valutb::trace()' called on model that was Verilated without --trace option");
}
