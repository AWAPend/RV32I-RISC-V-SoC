// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VImm_generator_tb.h for the primary calling header

#include "VImm_generator_tb__pch.h"
#include "VImm_generator_tb__Syms.h"
#include "VImm_generator_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VImm_generator_tb___024root___dump_triggers__act(VImm_generator_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VImm_generator_tb___024root___eval_triggers__act(VImm_generator_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VImm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VImm_generator_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VImm_generator_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
