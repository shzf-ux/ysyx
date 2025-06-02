// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25030085_top__Syms.h"


VL_ATTR_COLD void Vysyx_25030085_top___024root__trace_init_sub__TOP__0(Vysyx_25030085_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst", false,-1);
    tracep->declBus(c+67,"instruction", false,-1, 31,0);
    tracep->declBus(c+68,"pc_out", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_25030085_top ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst", false,-1);
    tracep->declBus(c+67,"instruction", false,-1, 31,0);
    tracep->declBus(c+68,"pc_out", false,-1, 31,0);
    tracep->declBus(c+69,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+70,"Read_rs1", false,-1, 31,0);
    tracep->declBus(c+71,"Read_rs2", false,-1, 31,0);
    tracep->declBus(c+5,"ReadData", false,-1, 31,0);
    tracep->declBus(c+51,"imm", false,-1, 31,0);
    tracep->declBit(c+52,"MemRead", false,-1);
    tracep->declBus(c+53,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+54,"MemWrite", false,-1);
    tracep->declBit(c+55,"RegWrite", false,-1);
    tracep->declBit(c+56,"Branch", false,-1);
    tracep->declBus(c+57,"Jump", false,-1, 1,0);
    tracep->declBit(c+58,"ALUSrc", false,-1);
    tracep->declBus(c+59,"AluOp", false,-1, 3,0);
    tracep->declBus(c+60,"MemOp", false,-1, 2,0);
    tracep->declBus(c+61,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+62,"is_ecall", false,-1);
    tracep->declBit(c+63,"is_mret", false,-1);
    tracep->declBus(c+72,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+6,"mtvec", false,-1, 31,0);
    tracep->declBus(c+7,"mepc", false,-1, 31,0);
    tracep->declBus(c+8,"value_a5", false,-1, 31,0);
    tracep->pushNamePrefix("DataMem ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+52,"MemRead", false,-1);
    tracep->declBit(c+54,"MemWrite", false,-1);
    tracep->declBus(c+60,"MemOp", false,-1, 2,0);
    tracep->declBus(c+71,"Read_rs2", false,-1, 31,0);
    tracep->declBus(c+69,"addr", false,-1, 31,0);
    tracep->declBus(c+5,"ReadData", false,-1, 31,0);
    tracep->declBus(c+9,"rdata", false,-1, 31,0);
    tracep->declBus(c+73,"offset", false,-1, 1,0);
    tracep->declBus(c+10,"aligned_addr", false,-1, 31,0);
    tracep->declBus(c+11,"read_byte", false,-1, 7,0);
    tracep->declBus(c+12,"read_byteu", false,-1, 7,0);
    tracep->declBus(c+13,"read_half_word", false,-1, 15,0);
    tracep->declBus(c+14,"read_half_wordu", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_init ");
    tracep->declBus(c+70,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+71,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+51,"imm", false,-1, 31,0);
    tracep->declBus(c+68,"pc", false,-1, 31,0);
    tracep->declBus(c+59,"AluOp", false,-1, 3,0);
    tracep->declBit(c+58,"ALUSrc", false,-1);
    tracep->declBus(c+69,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+74,"B", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control_init ");
    tracep->declBus(c+67,"inst", false,-1, 31,0);
    tracep->declBus(c+68,"pc", false,-1, 31,0);
    tracep->declBus(c+70,"Read_rs1", false,-1, 31,0);
    tracep->declBus(c+71,"Read_rs2", false,-1, 31,0);
    tracep->declBit(c+54,"MemWrite", false,-1);
    tracep->declBit(c+52,"MemRead", false,-1);
    tracep->declBus(c+60,"MemOp", false,-1, 2,0);
    tracep->declBus(c+53,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+55,"RegWrite", false,-1);
    tracep->declBit(c+56,"Branch", false,-1);
    tracep->declBus(c+57,"Jump", false,-1, 1,0);
    tracep->declBit(c+58,"ALUSrc", false,-1);
    tracep->declBus(c+59,"AluOp", false,-1, 3,0);
    tracep->declBus(c+51,"imm", false,-1, 31,0);
    tracep->declBus(c+61,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+62,"is_ecall", false,-1);
    tracep->declBit(c+63,"is_mret", false,-1);
    tracep->declBit(c+75,"invalid", false,-1);
    tracep->declBit(c+76,"is_ebreak", false,-1);
    tracep->declBus(c+77,"opcode", false,-1, 6,0);
    tracep->declBus(c+78,"func3", false,-1, 2,0);
    tracep->declBus(c+79,"func7", false,-1, 6,0);
    tracep->declBus(c+1,"immI", false,-1, 31,0);
    tracep->declBus(c+2,"immJ", false,-1, 31,0);
    tracep->declBus(c+80,"immU", false,-1, 31,0);
    tracep->declBus(c+3,"immS", false,-1, 31,0);
    tracep->declBus(c+4,"immB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_regfile_init ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBus(c+68,"pc", false,-1, 31,0);
    tracep->declBus(c+8,"value_a5", false,-1, 31,0);
    tracep->declBit(c+62,"is_ecall", false,-1);
    tracep->declBit(c+63,"is_mret", false,-1);
    tracep->declBus(c+64,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+61,"csr_wen", false,-1, 1,0);
    tracep->declBus(c+70,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+72,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+6,"ecall_mtvec", false,-1, 31,0);
    tracep->declBus(c+7,"mret_mepc", false,-1, 31,0);
    tracep->declBus(c+15,"mstatus", false,-1, 31,0);
    tracep->declBus(c+16,"mtvec", false,-1, 31,0);
    tracep->declBus(c+17,"mepc", false,-1, 31,0);
    tracep->declBus(c+18,"mcause", false,-1, 31,0);
    tracep->declBus(c+92,"MSTATUS_MPP_MASK", false,-1, 31,0);
    tracep->declBus(c+93,"MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+94,"MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_init ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst", false,-1);
    tracep->declBus(c+51,"imm", false,-1, 31,0);
    tracep->declBus(c+67,"inst", false,-1, 31,0);
    tracep->declBus(c+69,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+57,"Jump", false,-1, 1,0);
    tracep->declBit(c+56,"Branch", false,-1);
    tracep->declBus(c+6,"mtvec", false,-1, 31,0);
    tracep->declBus(c+7,"mepc", false,-1, 31,0);
    tracep->declBit(c+62,"is_ecall", false,-1);
    tracep->declBit(c+63,"is_mret", false,-1);
    tracep->declBus(c+68,"pc", false,-1, 31,0);
    tracep->declBus(c+81,"current_pc", false,-1, 31,0);
    tracep->declBus(c+82,"dnpc", false,-1, 31,0);
    tracep->declBit(c+83,"is_jar_call", false,-1);
    tracep->declBit(c+84,"is_jalr_call", false,-1);
    tracep->declBit(c+85,"is_jalr_ret", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_init ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst", false,-1);
    tracep->declBus(c+68,"pc_out", false,-1, 31,0);
    tracep->declBus(c+51,"imm", false,-1, 31,0);
    tracep->declBus(c+67,"instruction", false,-1, 31,0);
    tracep->declBit(c+55,"RegWrite", false,-1);
    tracep->declBus(c+53,"MemtoReg", false,-1, 2,0);
    tracep->declBus(c+5,"MemRead", false,-1, 31,0);
    tracep->declBus(c+69,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+72,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+70,"Read_rs1", false,-1, 31,0);
    tracep->declBus(c+71,"Read_rs2", false,-1, 31,0);
    tracep->declBus(c+8,"value_a5", false,-1, 31,0);
    tracep->declBus(c+86,"rs1", false,-1, 4,0);
    tracep->declBus(c+87,"rs2", false,-1, 4,0);
    tracep->declBus(c+88,"rd", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+19+i*1,"register", true,(i+0), 31,0);
    }
    tracep->declBit(c+89,"is_info_register", false,-1);
    tracep->declBit(c+90,"is_en_display", false,-1);
    tracep->declBus(c+91,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_25030085_top___024root__trace_init_top(Vysyx_25030085_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_25030085_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25030085_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25030085_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25030085_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_25030085_top___024root__trace_register(Vysyx_25030085_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_25030085_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_25030085_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_25030085_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25030085_top___024root__trace_full_sub_0(Vysyx_25030085_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25030085_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_25030085_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25030085_top___024root*>(voidSelf);
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25030085_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25030085_top___024root__trace_full_sub_0(Vysyx_25030085_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immJ),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immS),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immB),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_25030085_top__DOT__ReadData),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_25030085_top__DOT__mtvec),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_25030085_top__DOT__mepc),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                            [0xfU]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__aligned_addr),32);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byte),8);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byteu),8);
    bufp->fullSData(oldp+13,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word),16);
    bufp->fullSData(oldp+14,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu),16);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[1]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[2]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[3]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[4]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[5]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[6]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[7]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[8]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[9]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[10]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[11]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[12]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[13]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[14]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[15]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[16]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[17]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[18]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[19]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[20]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[21]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[22]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[23]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[24]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[25]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[26]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[27]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[28]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[29]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[30]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[31]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_25030085_top__DOT__imm),32);
    bufp->fullBit(oldp+52,(vlSelf->ysyx_25030085_top__DOT__MemRead));
    bufp->fullCData(oldp+53,(vlSelf->ysyx_25030085_top__DOT__MemtoReg),3);
    bufp->fullBit(oldp+54,(vlSelf->ysyx_25030085_top__DOT__MemWrite));
    bufp->fullBit(oldp+55,(vlSelf->ysyx_25030085_top__DOT__RegWrite));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_25030085_top__DOT__Branch));
    bufp->fullCData(oldp+57,(vlSelf->ysyx_25030085_top__DOT__Jump),2);
    bufp->fullBit(oldp+58,(vlSelf->ysyx_25030085_top__DOT__ALUSrc));
    bufp->fullCData(oldp+59,(vlSelf->ysyx_25030085_top__DOT__AluOp),4);
    bufp->fullCData(oldp+60,(vlSelf->ysyx_25030085_top__DOT__MemOp),3);
    bufp->fullCData(oldp+61,(vlSelf->ysyx_25030085_top__DOT__csr_wen),2);
    bufp->fullBit(oldp+62,(vlSelf->ysyx_25030085_top__DOT__is_ecall));
    bufp->fullBit(oldp+63,(vlSelf->ysyx_25030085_top__DOT__is_mret));
    bufp->fullSData(oldp+64,((0xfffU & vlSelf->ysyx_25030085_top__DOT__imm)),12);
    bufp->fullBit(oldp+65,(vlSelf->clk));
    bufp->fullBit(oldp+66,(vlSelf->rst));
    bufp->fullIData(oldp+67,(vlSelf->instruction),32);
    bufp->fullIData(oldp+68,(vlSelf->pc_out),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_25030085_top__DOT__Alu_Result),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_25030085_top__DOT__Read_rs1),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_25030085_top__DOT__Read_rs2),32);
    bufp->fullIData(oldp+72,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))
                               ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus
                               : ((0x305U == (0xfffU 
                                              & vlSelf->ysyx_25030085_top__DOT__imm))
                                   ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec
                                   : ((0x341U == (0xfffU 
                                                  & vlSelf->ysyx_25030085_top__DOT__imm))
                                       ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc
                                       : ((0x342U == 
                                           (0xfffU 
                                            & vlSelf->ysyx_25030085_top__DOT__imm))
                                           ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause
                                           : 0U))))),32);
    bufp->fullCData(oldp+73,((3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)),2);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B),32);
    bufp->fullBit(oldp+75,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid));
    bufp->fullBit(oldp+76,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak));
    bufp->fullCData(oldp+77,((0x7fU & vlSelf->instruction)),7);
    bufp->fullCData(oldp+78,((7U & (vlSelf->instruction 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+79,((vlSelf->instruction >> 0x19U)),7);
    bufp->fullIData(oldp+80,((0xfffff000U & vlSelf->instruction)),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__dnpc),32);
    bufp->fullBit(oldp+83,((IData)(((0x80U == (0xf80U 
                                               & vlSelf->instruction)) 
                                    & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump))))));
    bufp->fullBit(oldp+84,((IData)(((0x80U == (0xf80U 
                                               & vlSelf->instruction)) 
                                    & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump))))));
    bufp->fullBit(oldp+85,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__is_jalr_ret));
    bufp->fullCData(oldp+86,((0x1fU & (vlSelf->instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+87,((0x1fU & (vlSelf->instruction 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+88,((0x1fU & (vlSelf->instruction 
                                       >> 7U))),5);
    bufp->fullBit(oldp+89,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register));
    bufp->fullBit(oldp+90,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display));
    bufp->fullIData(oldp+91,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__i),32);
    bufp->fullIData(oldp+92,(0x1800U),32);
    bufp->fullIData(oldp+93,(0x80U),32);
    bufp->fullIData(oldp+94,(8U),32);
}
