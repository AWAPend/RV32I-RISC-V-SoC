// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU_datapath.h for the primary calling header

#include "VCPU_datapath__pch.h"
#include "VCPU_datapath__Syms.h"
#include "VCPU_datapath___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU_datapath___024root___dump_triggers__act(VCPU_datapath___024root* vlSelf);
#endif  // VL_DEBUG

void VCPU_datapath___024root___eval_triggers__act(VCPU_datapath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCPU_datapath___024root___dump_triggers__act(vlSelf);
    }
#endif
}
