// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister_file.h for the primary calling header

#include "VRegister_file__pch.h"
#include "VRegister_file__Syms.h"
#include "VRegister_file___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegister_file___024root___dump_triggers__stl(VRegister_file___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VRegister_file___024root___eval_triggers__stl(VRegister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister_file___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRegister_file___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
