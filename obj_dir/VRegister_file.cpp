// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRegister_file__pch.h"

//============================================================
// Constructors

VRegister_file::VRegister_file(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRegister_file__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , rs1_addr{vlSymsp->TOP.rs1_addr}
    , rs2_addr{vlSymsp->TOP.rs2_addr}
    , write_addr{vlSymsp->TOP.write_addr}
    , write_enable{vlSymsp->TOP.write_enable}
    , rs1_data{vlSymsp->TOP.rs1_data}
    , rs2_data{vlSymsp->TOP.rs2_data}
    , write_data{vlSymsp->TOP.write_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRegister_file::VRegister_file(const char* _vcname__)
    : VRegister_file(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRegister_file::~VRegister_file() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRegister_file___024root___eval_debug_assertions(VRegister_file___024root* vlSelf);
#endif  // VL_DEBUG
void VRegister_file___024root___eval_static(VRegister_file___024root* vlSelf);
void VRegister_file___024root___eval_initial(VRegister_file___024root* vlSelf);
void VRegister_file___024root___eval_settle(VRegister_file___024root* vlSelf);
void VRegister_file___024root___eval(VRegister_file___024root* vlSelf);

void VRegister_file::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegister_file::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRegister_file___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRegister_file___024root___eval_static(&(vlSymsp->TOP));
        VRegister_file___024root___eval_initial(&(vlSymsp->TOP));
        VRegister_file___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRegister_file___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRegister_file::eventsPending() { return false; }

uint64_t VRegister_file::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRegister_file::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRegister_file___024root___eval_final(VRegister_file___024root* vlSelf);

VL_ATTR_COLD void VRegister_file::final() {
    VRegister_file___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRegister_file::hierName() const { return vlSymsp->name(); }
const char* VRegister_file::modelName() const { return "VRegister_file"; }
unsigned VRegister_file::threads() const { return 1; }
void VRegister_file::prepareClone() const { contextp()->prepareClone(); }
void VRegister_file::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VRegister_file::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VRegister_file::trace()' called on model that was Verilated without --trace option");
}
