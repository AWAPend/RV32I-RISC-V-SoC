// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU_datapath_tb__Syms.h"


VL_ATTR_COLD void VCPU_datapath_tb___024root__trace_init_sub__TOP__0(VCPU_datapath_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("CPU_datapath_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+52,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+52,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"pc_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"imm_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"write_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"alu_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"instruction_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+12,0,"alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"read_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"write_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"writeback_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"branch_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"alu_select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("decoder_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"instruction_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"alu_select",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"write_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+12,0,"alu_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"read_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"write_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"writeback_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+17,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("imm_gen_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"instruction_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"imm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instruction_mem_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"pc_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"instruction_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+52,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"branch_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"pc_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+52,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"write_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+19+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+54,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPU_datapath_tb___024root__trace_init_top(VCPU_datapath_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root__trace_init_top\n"); );
    // Body
    VCPU_datapath_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCPU_datapath_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VCPU_datapath_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU_datapath_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU_datapath_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCPU_datapath_tb___024root__trace_register(VCPU_datapath_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VCPU_datapath_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VCPU_datapath_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VCPU_datapath_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VCPU_datapath_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCPU_datapath_tb___024root__trace_const_0_sub_0(VCPU_datapath_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPU_datapath_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root__trace_const_0\n"); );
    // Init
    VCPU_datapath_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU_datapath_tb___024root*>(voidSelf);
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPU_datapath_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPU_datapath_tb___024root__trace_const_0_sub_0(VCPU_datapath_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+55,(0U));
    bufp->fullBit(oldp+56,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__branch_taken));
    bufp->fullIData(oldp+57,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__branch_target),32);
    bufp->fullIData(oldp+58,(0U),32);
}

VL_ATTR_COLD void VCPU_datapath_tb___024root__trace_full_0_sub_0(VCPU_datapath_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPU_datapath_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root__trace_full_0\n"); );
    // Init
    VCPU_datapath_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU_datapath_tb___024root*>(voidSelf);
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPU_datapath_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPU_datapath_tb___024root__trace_full_0_sub_0(VCPU_datapath_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU_datapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU_datapath_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__pc_addr),32);
    bufp->fullIData(oldp+2,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction),32);
    bufp->fullIData(oldp+3,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__imm_out),32);
    bufp->fullIData(oldp+4,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__rs1_data),32);
    bufp->fullIData(oldp+5,(((0U == (0x1fU & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                              >> 0x14U)))
                              ? 0U : vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register
                             [(0x1fU & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                        >> 0x14U))])),32);
    bufp->fullIData(oldp+6,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__result),32);
    bufp->fullCData(oldp+7,((0x1fU & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+8,((0x1fU & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+9,((0x1fU & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                      >> 7U))),5);
    bufp->fullCData(oldp+10,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__alu_select),4);
    bufp->fullCData(oldp+11,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction_type),3);
    bufp->fullBit(oldp+12,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__alu_src));
    bufp->fullBit(oldp+13,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__write_enable));
    bufp->fullBit(oldp+14,((0U == vlSelf->CPU_datapath_tb__DOT__dut__DOT__result)));
    bufp->fullIData(oldp+15,(vlSelf->CPU_datapath_tb__DOT__dut__DOT____Vcellinp__alu_dut__b),32);
    bufp->fullCData(oldp+16,((0x7fU & vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction)),7);
    bufp->fullCData(oldp+17,((7U & (vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+18,((vlSelf->CPU_datapath_tb__DOT__dut__DOT__instruction 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+19,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[0]),32);
    bufp->fullIData(oldp+20,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[1]),32);
    bufp->fullIData(oldp+21,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[2]),32);
    bufp->fullIData(oldp+22,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[3]),32);
    bufp->fullIData(oldp+23,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[4]),32);
    bufp->fullIData(oldp+24,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[5]),32);
    bufp->fullIData(oldp+25,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[6]),32);
    bufp->fullIData(oldp+26,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[7]),32);
    bufp->fullIData(oldp+27,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[8]),32);
    bufp->fullIData(oldp+28,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[9]),32);
    bufp->fullIData(oldp+29,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[10]),32);
    bufp->fullIData(oldp+30,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[11]),32);
    bufp->fullIData(oldp+31,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[12]),32);
    bufp->fullIData(oldp+32,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[13]),32);
    bufp->fullIData(oldp+33,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[14]),32);
    bufp->fullIData(oldp+34,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[15]),32);
    bufp->fullIData(oldp+35,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[16]),32);
    bufp->fullIData(oldp+36,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[17]),32);
    bufp->fullIData(oldp+37,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[18]),32);
    bufp->fullIData(oldp+38,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[19]),32);
    bufp->fullIData(oldp+39,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[20]),32);
    bufp->fullIData(oldp+40,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[21]),32);
    bufp->fullIData(oldp+41,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[22]),32);
    bufp->fullIData(oldp+42,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[23]),32);
    bufp->fullIData(oldp+43,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[24]),32);
    bufp->fullIData(oldp+44,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[25]),32);
    bufp->fullIData(oldp+45,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[26]),32);
    bufp->fullIData(oldp+46,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[27]),32);
    bufp->fullIData(oldp+47,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[28]),32);
    bufp->fullIData(oldp+48,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[29]),32);
    bufp->fullIData(oldp+49,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[30]),32);
    bufp->fullIData(oldp+50,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__register[31]),32);
    bufp->fullIData(oldp+51,(vlSelf->CPU_datapath_tb__DOT__dut__DOT__reg_file_dut__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+52,(vlSelf->CPU_datapath_tb__DOT__clk));
    bufp->fullBit(oldp+53,(vlSelf->CPU_datapath_tb__DOT__rst_n));
    bufp->fullIData(oldp+54,(vlSelf->CPU_datapath_tb__DOT__unnamedblk1__DOT__i),32);
}
