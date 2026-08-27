// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDecoder__pch.h"

//============================================================
// Constructors

VDecoder::VDecoder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VDecoder__Syms(contextp(), _vcname__, this)}
    , instruction_type{vlSymsp->TOP.instruction_type}
    , alu_select{vlSymsp->TOP.alu_select}
    , rs1_addr{vlSymsp->TOP.rs1_addr}
    , rs2_addr{vlSymsp->TOP.rs2_addr}
    , write_addr{vlSymsp->TOP.write_addr}
    , alu_src{vlSymsp->TOP.alu_src}
    , write_enable{vlSymsp->TOP.write_enable}
    , read_mem{vlSymsp->TOP.read_mem}
    , write_mem{vlSymsp->TOP.write_mem}
    , writeback_to_reg{vlSymsp->TOP.writeback_to_reg}
    , branch{vlSymsp->TOP.branch}
    , jump{vlSymsp->TOP.jump}
    , instruction{vlSymsp->TOP.instruction}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VDecoder::VDecoder(const char* _vcname__)
    : VDecoder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VDecoder::~VDecoder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VDecoder___024root___eval_debug_assertions(VDecoder___024root* vlSelf);
#endif  // VL_DEBUG
void VDecoder___024root___eval_static(VDecoder___024root* vlSelf);
void VDecoder___024root___eval_initial(VDecoder___024root* vlSelf);
void VDecoder___024root___eval_settle(VDecoder___024root* vlSelf);
void VDecoder___024root___eval(VDecoder___024root* vlSelf);

void VDecoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDecoder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDecoder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VDecoder___024root___eval_static(&(vlSymsp->TOP));
        VDecoder___024root___eval_initial(&(vlSymsp->TOP));
        VDecoder___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VDecoder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VDecoder::eventsPending() { return false; }

uint64_t VDecoder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VDecoder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VDecoder___024root___eval_final(VDecoder___024root* vlSelf);

VL_ATTR_COLD void VDecoder::final() {
    VDecoder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VDecoder::hierName() const { return vlSymsp->name(); }
const char* VDecoder::modelName() const { return "VDecoder"; }
unsigned VDecoder::threads() const { return 1; }
void VDecoder::prepareClone() const { contextp()->prepareClone(); }
void VDecoder::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VDecoder::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VDecoder::trace()' called on model that was Verilated without --trace option");
}
