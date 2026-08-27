// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoder_tb.h for the primary calling header

#include "VDecoder_tb__pch.h"
#include "VDecoder_tb__Syms.h"
#include "VDecoder_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecoder_tb___024root___dump_triggers__act(VDecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VDecoder_tb___024root___eval_triggers__act(VDecoder_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->Decoder_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Decoder_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__Decoder_tb__DOT__clk__0 
        = vlSelf->Decoder_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VDecoder_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
