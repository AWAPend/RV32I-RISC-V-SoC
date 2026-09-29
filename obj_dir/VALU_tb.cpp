// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VALU_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VALU_tb::VALU_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VALU_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VALU_tb::VALU_tb(const char* _vcname__)
    : VALU_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VALU_tb::~VALU_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VALU_tb___024root___eval_debug_assertions(VALU_tb___024root* vlSelf);
#endif  // VL_DEBUG
void VALU_tb___024root___eval_static(VALU_tb___024root* vlSelf);
void VALU_tb___024root___eval_initial(VALU_tb___024root* vlSelf);
void VALU_tb___024root___eval_settle(VALU_tb___024root* vlSelf);
void VALU_tb___024root___eval(VALU_tb___024root* vlSelf);

void VALU_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VALU_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VALU_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VALU_tb___024root___eval_static(&(vlSymsp->TOP));
        VALU_tb___024root___eval_initial(&(vlSymsp->TOP));
        VALU_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VALU_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VALU_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VALU_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VALU_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VALU_tb___024root___eval_final(VALU_tb___024root* vlSelf);

VL_ATTR_COLD void VALU_tb::final() {
    VALU_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VALU_tb::hierName() const { return vlSymsp->name(); }
const char* VALU_tb::modelName() const { return "VALU_tb"; }
unsigned VALU_tb::threads() const { return 1; }
void VALU_tb::prepareClone() const { contextp()->prepareClone(); }
void VALU_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VALU_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VALU_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void VALU_tb___024root__trace_init_top(VALU_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VALU_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_tb___024root*>(voidSelf);
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VALU_tb___024root__trace_decl_types(tracep);
    VALU_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VALU_tb___024root__trace_register(VALU_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VALU_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VALU_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VALU_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
