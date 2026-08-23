// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRegister_file_tb__pch.h"

//============================================================
// Constructors

VRegister_file_tb::VRegister_file_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRegister_file_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRegister_file_tb::VRegister_file_tb(const char* _vcname__)
    : VRegister_file_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRegister_file_tb::~VRegister_file_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRegister_file_tb___024root___eval_debug_assertions(VRegister_file_tb___024root* vlSelf);
#endif  // VL_DEBUG
void VRegister_file_tb___024root___eval_static(VRegister_file_tb___024root* vlSelf);
void VRegister_file_tb___024root___eval_initial(VRegister_file_tb___024root* vlSelf);
void VRegister_file_tb___024root___eval_settle(VRegister_file_tb___024root* vlSelf);
void VRegister_file_tb___024root___eval(VRegister_file_tb___024root* vlSelf);

void VRegister_file_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegister_file_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRegister_file_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRegister_file_tb___024root___eval_static(&(vlSymsp->TOP));
        VRegister_file_tb___024root___eval_initial(&(vlSymsp->TOP));
        VRegister_file_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRegister_file_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRegister_file_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VRegister_file_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VRegister_file_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRegister_file_tb___024root___eval_final(VRegister_file_tb___024root* vlSelf);

VL_ATTR_COLD void VRegister_file_tb::final() {
    VRegister_file_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRegister_file_tb::hierName() const { return vlSymsp->name(); }
const char* VRegister_file_tb::modelName() const { return "VRegister_file_tb"; }
unsigned VRegister_file_tb::threads() const { return 1; }
void VRegister_file_tb::prepareClone() const { contextp()->prepareClone(); }
void VRegister_file_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VRegister_file_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VRegister_file_tb::trace()' called on model that was Verilated without --trace option");
}
