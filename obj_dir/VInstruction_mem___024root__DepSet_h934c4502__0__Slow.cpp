// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstruction_mem.h for the primary calling header

#include "VInstruction_mem__pch.h"
#include "VInstruction_mem__Syms.h"
#include "VInstruction_mem___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VInstruction_mem___024root___dump_triggers__stl(VInstruction_mem___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VInstruction_mem___024root___eval_triggers__stl(VInstruction_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstruction_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstruction_mem___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VInstruction_mem___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
