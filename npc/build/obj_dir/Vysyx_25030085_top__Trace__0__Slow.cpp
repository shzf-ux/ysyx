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
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+81,"rst", false,-1);
    tracep->declBus(c+82,"pc_out", false,-1, 31,0);
    tracep->declBus(c+83,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_25030085_top ");
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+81,"rst", false,-1);
    tracep->declBus(c+82,"pc_out", false,-1, 31,0);
    tracep->declBus(c+83,"inst", false,-1, 31,0);
    tracep->declBus(c+83,"instruction", false,-1, 31,0);
    tracep->declBus(c+73,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+74,"Read_rs1", false,-1, 31,0);
    tracep->declBus(c+75,"Read_rs2", false,-1, 31,0);
    tracep->declBus(c+1,"ReadData", false,-1, 31,0);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBit(c+46,"MemRead", false,-1);
    tracep->declBus(c+47,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+48,"MemWrite", false,-1);
    tracep->declBit(c+49,"RegWrite", false,-1);
    tracep->declBit(c+76,"Branch", false,-1);
    tracep->declBus(c+50,"Jump", false,-1, 1,0);
    tracep->declBit(c+51,"ALUSrc", false,-1);
    tracep->declBus(c+52,"AluOp", false,-1, 3,0);
    tracep->declBus(c+53,"MemOp", false,-1, 2,0);
    tracep->declBus(c+54,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+55,"is_ecall", false,-1);
    tracep->declBit(c+56,"is_mret", false,-1);
    tracep->declBus(c+84,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+2,"mtvec", false,-1, 31,0);
    tracep->declBus(c+3,"mepc", false,-1, 31,0);
    tracep->declBus(c+4,"value_a5", false,-1, 31,0);
    tracep->pushNamePrefix("DataMem ");
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+46,"MemRead", false,-1);
    tracep->declBit(c+48,"MemWrite", false,-1);
    tracep->declBus(c+53,"MemOp", false,-1, 2,0);
    tracep->declBus(c+75,"Read_rs2", false,-1, 31,0);
    tracep->declBus(c+73,"addr", false,-1, 31,0);
    tracep->declBus(c+1,"ReadData", false,-1, 31,0);
    tracep->declBus(c+5,"rdata", false,-1, 31,0);
    tracep->declBus(c+77,"offset", false,-1, 1,0);
    tracep->declBus(c+6,"aligned_addr", false,-1, 31,0);
    tracep->declBus(c+7,"read_byte", false,-1, 7,0);
    tracep->declBus(c+8,"read_byteu", false,-1, 7,0);
    tracep->declBus(c+9,"read_half_word", false,-1, 15,0);
    tracep->declBus(c+10,"read_half_wordu", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_init ");
    tracep->declBus(c+74,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+75,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBus(c+82,"pc", false,-1, 31,0);
    tracep->declBus(c+52,"AluOp", false,-1, 3,0);
    tracep->declBit(c+51,"ALUSrc", false,-1);
    tracep->declBus(c+73,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+78,"B", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control_init ");
    tracep->declBus(c+83,"inst", false,-1, 31,0);
    tracep->declBus(c+82,"pc", false,-1, 31,0);
    tracep->declBus(c+74,"Read_rs1", false,-1, 31,0);
    tracep->declBus(c+75,"Read_rs2", false,-1, 31,0);
    tracep->declBit(c+48,"MemWrite", false,-1);
    tracep->declBit(c+46,"MemRead", false,-1);
    tracep->declBus(c+53,"MemOp", false,-1, 2,0);
    tracep->declBus(c+47,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+49,"RegWrite", false,-1);
    tracep->declBit(c+76,"Branch", false,-1);
    tracep->declBus(c+50,"Jump", false,-1, 1,0);
    tracep->declBit(c+51,"ALUSrc", false,-1);
    tracep->declBus(c+52,"AluOp", false,-1, 3,0);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBus(c+54,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+55,"is_ecall", false,-1);
    tracep->declBit(c+56,"is_mret", false,-1);
    tracep->declBit(c+57,"invalid", false,-1);
    tracep->declBit(c+58,"is_ebreak", false,-1);
    tracep->declBus(c+85,"opcode", false,-1, 6,0);
    tracep->declBus(c+86,"func3", false,-1, 2,0);
    tracep->declBus(c+87,"func7", false,-1, 6,0);
    tracep->declBus(c+59,"immI", false,-1, 31,0);
    tracep->declBus(c+60,"immJ", false,-1, 31,0);
    tracep->declBus(c+61,"immU", false,-1, 31,0);
    tracep->declBus(c+62,"immS", false,-1, 31,0);
    tracep->declBus(c+63,"immB", false,-1, 31,0);
    tracep->declBus(c+91,"OP_LOAD", false,-1, 6,0);
    tracep->declBus(c+92,"OP_STORE", false,-1, 6,0);
    tracep->declBus(c+93,"OP_BRANCH", false,-1, 6,0);
    tracep->declBus(c+94,"OP_JAL", false,-1, 6,0);
    tracep->declBus(c+95,"OP_JALR", false,-1, 6,0);
    tracep->declBus(c+96,"OP_OP_IMM", false,-1, 6,0);
    tracep->declBus(c+97,"OP_OP", false,-1, 6,0);
    tracep->declBus(c+98,"OP_LUI", false,-1, 6,0);
    tracep->declBus(c+99,"OP_AUIPC", false,-1, 6,0);
    tracep->declBus(c+100,"OP_SYSTEM", false,-1, 6,0);
    tracep->declBus(c+101,"F3_ADD_SUB", false,-1, 2,0);
    tracep->declBus(c+102,"F3_SLL", false,-1, 2,0);
    tracep->declBus(c+103,"F3_SLT", false,-1, 2,0);
    tracep->declBus(c+104,"F3_SLTU", false,-1, 2,0);
    tracep->declBus(c+105,"F3_XOR", false,-1, 2,0);
    tracep->declBus(c+106,"F3_SR", false,-1, 2,0);
    tracep->declBus(c+107,"F3_OR", false,-1, 2,0);
    tracep->declBus(c+108,"F3_AND", false,-1, 2,0);
    tracep->declBus(c+109,"F7_SUB", false,-1, 6,0);
    tracep->declBus(c+109,"F7_SRA", false,-1, 6,0);
    tracep->declBus(c+110,"F7_DEFAULT", false,-1, 6,0);
    tracep->declBus(c+111,"ALU_ADD", false,-1, 3,0);
    tracep->declBus(c+112,"ALU_SLL", false,-1, 3,0);
    tracep->declBus(c+113,"ALU_SLT", false,-1, 3,0);
    tracep->declBus(c+114,"ALU_SLTU", false,-1, 3,0);
    tracep->declBus(c+115,"ALU_XOR", false,-1, 3,0);
    tracep->declBus(c+116,"ALU_SRA", false,-1, 3,0);
    tracep->declBus(c+117,"ALU_SRL", false,-1, 3,0);
    tracep->declBus(c+118,"ALU_OR", false,-1, 3,0);
    tracep->declBus(c+119,"ALU_AND", false,-1, 3,0);
    tracep->declBus(c+120,"ALU_SUB", false,-1, 3,0);
    tracep->declBus(c+121,"ALU_PCADD", false,-1, 3,0);
    tracep->declBus(c+122,"JUMP_NONE", false,-1, 1,0);
    tracep->declBus(c+123,"JUMP_JAL", false,-1, 1,0);
    tracep->declBus(c+124,"JUMP_JALR", false,-1, 1,0);
    tracep->declBus(c+101,"MTR_ALU", false,-1, 2,0);
    tracep->declBus(c+102,"MTR_MEM", false,-1, 2,0);
    tracep->declBus(c+103,"MTR_PCP4", false,-1, 2,0);
    tracep->declBus(c+104,"MTR_IMM", false,-1, 2,0);
    tracep->declBus(c+105,"MTR_CSR", false,-1, 2,0);
    tracep->declBus(c+101,"MEM_B", false,-1, 2,0);
    tracep->declBus(c+102,"MEM_H", false,-1, 2,0);
    tracep->declBus(c+103,"MEM_W", false,-1, 2,0);
    tracep->declBus(c+105,"MEM_BU", false,-1, 2,0);
    tracep->declBus(c+106,"MEM_HU", false,-1, 2,0);
    tracep->declBus(c+122,"CSR_NONE", false,-1, 1,0);
    tracep->declBus(c+123,"CSR_WRITE", false,-1, 1,0);
    tracep->declBus(c+124,"CSR_SET", false,-1, 1,0);
    tracep->declBus(c+125,"ECALL_CODE", false,-1, 11,0);
    tracep->declBus(c+126,"EBREAK_CODE", false,-1, 11,0);
    tracep->declBus(c+127,"MRET_CODE", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_regfile_init ");
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBus(c+82,"pc", false,-1, 31,0);
    tracep->declBus(c+4,"value_a5", false,-1, 31,0);
    tracep->declBit(c+55,"is_ecall", false,-1);
    tracep->declBit(c+56,"is_mret", false,-1);
    tracep->declBus(c+64,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+54,"csr_wen", false,-1, 1,0);
    tracep->declBus(c+74,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+84,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+2,"ecall_mtvec", false,-1, 31,0);
    tracep->declBus(c+3,"mret_mepc", false,-1, 31,0);
    tracep->declBus(c+11,"mstatus", false,-1, 31,0);
    tracep->declBus(c+2,"mtvec", false,-1, 31,0);
    tracep->declBus(c+3,"mepc", false,-1, 31,0);
    tracep->declBus(c+12,"mcause", false,-1, 31,0);
    tracep->declBus(c+128,"MSTATUS_MPP_MASK", false,-1, 31,0);
    tracep->declBus(c+129,"MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+130,"MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_init ");
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+81,"rst", false,-1);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBus(c+73,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+50,"Jump", false,-1, 1,0);
    tracep->declBit(c+76,"Branch", false,-1);
    tracep->declBus(c+2,"mtvec", false,-1, 31,0);
    tracep->declBus(c+3,"mepc", false,-1, 31,0);
    tracep->declBit(c+55,"is_ecall", false,-1);
    tracep->declBit(c+56,"is_mret", false,-1);
    tracep->declBus(c+83,"inst", false,-1, 31,0);
    tracep->declBus(c+82,"pc", false,-1, 31,0);
    tracep->declBus(c+65,"current_pc", false,-1, 31,0);
    tracep->declBus(c+66,"if_inst", false,-1, 31,0);
    tracep->declBus(c+79,"next_pc", false,-1, 31,0);
    tracep->declBit(c+67,"is_jar_call", false,-1);
    tracep->declBit(c+68,"is_jalr_call", false,-1);
    tracep->declBit(c+69,"is_jalr_ret", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_init ");
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+81,"rst", false,-1);
    tracep->declBus(c+82,"pc_out", false,-1, 31,0);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBus(c+83,"instruction", false,-1, 31,0);
    tracep->declBit(c+49,"RegWrite", false,-1);
    tracep->declBus(c+47,"MemtoReg", false,-1, 2,0);
    tracep->declBus(c+1,"MemRead", false,-1, 31,0);
    tracep->declBus(c+73,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+84,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+74,"Read_rs1", false,-1, 31,0);
    tracep->declBus(c+75,"Read_rs2", false,-1, 31,0);
    tracep->declBus(c+4,"value_a5", false,-1, 31,0);
    tracep->declBus(c+70,"rs1", false,-1, 4,0);
    tracep->declBus(c+71,"rs2", false,-1, 4,0);
    tracep->declBus(c+72,"rd", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+13+i*1,"register", true,(i+0), 31,0);
    }
    tracep->declBit(c+88,"is_info_register", false,-1);
    tracep->declBit(c+89,"is_en_display", false,-1);
    tracep->declBus(c+90,"i", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyx_25030085_top__DOT__ReadData),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                            [0xfU]),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__aligned_addr),32);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byte),8);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byteu),8);
    bufp->fullSData(oldp+9,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word),16);
    bufp->fullSData(oldp+10,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu),16);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[1]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[2]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[3]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[4]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[5]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[6]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[7]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[8]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[9]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[10]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[11]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[12]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[13]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[14]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[15]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[16]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[17]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[18]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[19]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[20]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[21]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[22]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[23]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[24]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[25]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[26]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[27]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[28]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[29]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[30]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[31]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_25030085_top__DOT__imm),32);
    bufp->fullBit(oldp+46,(vlSelf->ysyx_25030085_top__DOT__MemRead));
    bufp->fullCData(oldp+47,(vlSelf->ysyx_25030085_top__DOT__MemtoReg),3);
    bufp->fullBit(oldp+48,(vlSelf->ysyx_25030085_top__DOT__MemWrite));
    bufp->fullBit(oldp+49,(vlSelf->ysyx_25030085_top__DOT__RegWrite));
    bufp->fullCData(oldp+50,(vlSelf->ysyx_25030085_top__DOT__Jump),2);
    bufp->fullBit(oldp+51,(vlSelf->ysyx_25030085_top__DOT__ALUSrc));
    bufp->fullCData(oldp+52,(vlSelf->ysyx_25030085_top__DOT__AluOp),4);
    bufp->fullCData(oldp+53,(vlSelf->ysyx_25030085_top__DOT__MemOp),3);
    bufp->fullCData(oldp+54,(vlSelf->ysyx_25030085_top__DOT__csr_wen),2);
    bufp->fullBit(oldp+55,(vlSelf->ysyx_25030085_top__DOT__is_ecall));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_25030085_top__DOT__is_mret));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak));
    bufp->fullIData(oldp+59,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI),32);
    bufp->fullIData(oldp+60,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                     >> 0x14U)))))),32);
    bufp->fullIData(oldp+61,((0xfffff000U & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst)),32);
    bufp->fullIData(oldp+62,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+63,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                    >> 7U)))))),32);
    bufp->fullSData(oldp+64,((0xfffU & vlSelf->ysyx_25030085_top__DOT__imm)),12);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst),32);
    bufp->fullBit(oldp+67,((IData)(((0x80U == (0xf80U 
                                               & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst)) 
                                    & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump))))));
    bufp->fullBit(oldp+68,((IData)(((0x80U == (0xf80U 
                                               & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst)) 
                                    & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump))))));
    bufp->fullBit(oldp+69,((IData)(((0x8000U == (0xf8f80U 
                                                 & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst)) 
                                    & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump))))));
    bufp->fullCData(oldp+70,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+71,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+72,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25030085_top__DOT__Alu_Result),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25030085_top__DOT__Read_rs1),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25030085_top__DOT__Read_rs2),32);
    bufp->fullBit(oldp+76,(vlSelf->ysyx_25030085_top__DOT__Branch));
    bufp->fullCData(oldp+77,((3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)),2);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__next_pc),32);
    bufp->fullBit(oldp+80,(vlSelf->clk));
    bufp->fullBit(oldp+81,(vlSelf->rst));
    bufp->fullIData(oldp+82,(vlSelf->pc_out),32);
    bufp->fullIData(oldp+83,(vlSelf->inst),32);
    bufp->fullIData(oldp+84,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))
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
    bufp->fullCData(oldp+85,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+86,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+87,((vlSelf->inst >> 0x19U)),7);
    bufp->fullBit(oldp+88,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register));
    bufp->fullBit(oldp+89,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display));
    bufp->fullIData(oldp+90,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__i),32);
    bufp->fullCData(oldp+91,(3U),7);
    bufp->fullCData(oldp+92,(0x23U),7);
    bufp->fullCData(oldp+93,(0x63U),7);
    bufp->fullCData(oldp+94,(0x6fU),7);
    bufp->fullCData(oldp+95,(0x67U),7);
    bufp->fullCData(oldp+96,(0x13U),7);
    bufp->fullCData(oldp+97,(0x33U),7);
    bufp->fullCData(oldp+98,(0x37U),7);
    bufp->fullCData(oldp+99,(0x17U),7);
    bufp->fullCData(oldp+100,(0x73U),7);
    bufp->fullCData(oldp+101,(0U),3);
    bufp->fullCData(oldp+102,(1U),3);
    bufp->fullCData(oldp+103,(2U),3);
    bufp->fullCData(oldp+104,(3U),3);
    bufp->fullCData(oldp+105,(4U),3);
    bufp->fullCData(oldp+106,(5U),3);
    bufp->fullCData(oldp+107,(6U),3);
    bufp->fullCData(oldp+108,(7U),3);
    bufp->fullCData(oldp+109,(0x20U),7);
    bufp->fullCData(oldp+110,(0U),7);
    bufp->fullCData(oldp+111,(0U),4);
    bufp->fullCData(oldp+112,(1U),4);
    bufp->fullCData(oldp+113,(2U),4);
    bufp->fullCData(oldp+114,(3U),4);
    bufp->fullCData(oldp+115,(4U),4);
    bufp->fullCData(oldp+116,(5U),4);
    bufp->fullCData(oldp+117,(6U),4);
    bufp->fullCData(oldp+118,(7U),4);
    bufp->fullCData(oldp+119,(8U),4);
    bufp->fullCData(oldp+120,(0xaU),4);
    bufp->fullCData(oldp+121,(9U),4);
    bufp->fullCData(oldp+122,(0U),2);
    bufp->fullCData(oldp+123,(1U),2);
    bufp->fullCData(oldp+124,(2U),2);
    bufp->fullSData(oldp+125,(0U),12);
    bufp->fullSData(oldp+126,(1U),12);
    bufp->fullSData(oldp+127,(0x302U),12);
    bufp->fullIData(oldp+128,(0x1800U),32);
    bufp->fullIData(oldp+129,(0x80U),32);
    bufp->fullIData(oldp+130,(8U),32);
}
