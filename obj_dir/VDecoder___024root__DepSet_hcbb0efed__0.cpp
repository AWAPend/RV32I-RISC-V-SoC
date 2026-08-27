// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoder.h for the primary calling header

#include "VDecoder__pch.h"
#include "VDecoder__Syms.h"
#include "VDecoder___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecoder___024root___dump_triggers__ico(VDecoder___024root* vlSelf);
#endif  // VL_DEBUG

void VDecoder___024root___eval_triggers__ico(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VDecoder___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecoder___024root___dump_triggers__act(VDecoder___024root* vlSelf);
#endif  // VL_DEBUG

void VDecoder___024root___eval_triggers__act(VDecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VDecoder___024root___dump_triggers__act(vlSelf);
    }
#endif
}
