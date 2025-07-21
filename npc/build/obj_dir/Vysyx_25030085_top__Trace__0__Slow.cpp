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
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+134,"rst", false,-1);
    tracep->declBus(c+135,"top_pc", false,-1, 31,0);
    tracep->declBus(c+136,"top_inst", false,-1, 31,0);
    tracep->declBit(c+137,"top_valid", false,-1);
    tracep->declBit(c+138,"top_ready", false,-1);
    tracep->pushNamePrefix("ysyx_25030085_top ");
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+134,"rst", false,-1);
    tracep->declBus(c+135,"top_pc", false,-1, 31,0);
    tracep->declBus(c+136,"top_inst", false,-1, 31,0);
    tracep->declBit(c+137,"top_valid", false,-1);
    tracep->declBit(c+138,"top_ready", false,-1);
    tracep->declBus(c+136,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+135,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+39,"ex_me_alu", false,-1, 31,0);
    tracep->declBus(c+40,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+41,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+144,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+145,"is_ecall", false,-1);
    tracep->declBit(c+146,"is_mret", false,-1);
    tracep->declBit(c+138,"id_if_ready", false,-1);
    tracep->declBit(c+137,"if_id_valid", false,-1);
    tracep->declBus(c+42,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+43,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+44,"id_ex_valid", false,-1);
    tracep->declBit(c+45,"ex_id_ready", false,-1);
    tracep->declBus(c+147,"ctrl", false,-1, 20,0);
    tracep->declBus(c+46,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+46,"id_ex_a5", false,-1, 31,0);
    tracep->declBus(c+47,"id_ex_rs1", false,-1, 31,0);
    tracep->declBus(c+48,"id_ex_rs2", false,-1, 31,0);
    tracep->declBus(c+49,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+50,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+51,"id_ex_ctrl", false,-1, 20,0);
    tracep->declBus(c+139,"csr_data", false,-1, 31,0);
    tracep->declBit(c+52,"ex_me_valid", false,-1);
    tracep->declBit(c+53,"me_ex_ready", false,-1);
    tracep->declBus(c+54,"next_pc", false,-1, 31,0);
    tracep->declBus(c+55,"ex_me_rs2", false,-1, 31,0);
    tracep->declBus(c+56,"ex_me_ctrl", false,-1, 20,0);
    tracep->declBus(c+57,"ex_me_pc", false,-1, 31,0);
    tracep->declBus(c+58,"ex_me_imm", false,-1, 31,0);
    tracep->declBit(c+59,"me_wb_valid", false,-1);
    tracep->declBit(c+60,"wb_me_ready", false,-1);
    tracep->declBus(c+1,"ex_wb_ctrl", false,-1, 20,0);
    tracep->declBus(c+2,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+3,"ex_wb_pc", false,-1, 31,0);
    tracep->declBus(c+4,"ex_wb_imm", false,-1, 31,0);
    tracep->declBus(c+5,"ex_wb_alu", false,-1, 31,0);
    tracep->declBit(c+61,"wb_done", false,-1);
    tracep->declBit(c+6,"reg_wen", false,-1);
    tracep->declBus(c+7,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+8,"reg_waddr", false,-1, 4,0);
    tracep->pushNamePrefix("DataMem ");
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+134,"rst", false,-1);
    tracep->declBit(c+52,"in_valid", false,-1);
    tracep->declBus(c+56,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+55,"in_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+39,"in_sram_addr", false,-1, 31,0);
    tracep->declBus(c+58,"in_imm", false,-1, 31,0);
    tracep->declBus(c+57,"in_pc", false,-1, 31,0);
    tracep->declBit(c+53,"in_ready", false,-1);
    tracep->declBit(c+59,"out_valid", false,-1);
    tracep->declBus(c+2,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+1,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+4,"imm_out", false,-1, 31,0);
    tracep->declBus(c+3,"pc_out", false,-1, 31,0);
    tracep->declBus(c+5,"alu_result", false,-1, 31,0);
    tracep->declBit(c+60,"out_ready", false,-1);
    tracep->declBit(c+59,"has_data", false,-1);
    tracep->declBus(c+1,"ctrl", false,-1, 20,0);
    tracep->declBus(c+9,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+5,"sram_addr", false,-1, 31,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+4,"imm", false,-1, 31,0);
    tracep->declBit(c+10,"MemWrite", false,-1);
    tracep->declBit(c+11,"MemRead", false,-1);
    tracep->declBus(c+12,"MemOp", false,-1, 2,0);
    tracep->declBus(c+2,"ReadData", false,-1, 31,0);
    tracep->declBus(c+13,"read_byte", false,-1, 7,0);
    tracep->declBus(c+14,"read_byteu", false,-1, 7,0);
    tracep->declBus(c+15,"read_half_word", false,-1, 15,0);
    tracep->declBus(c+16,"read_half_wordu", false,-1, 15,0);
    tracep->declBus(c+17,"rdata", false,-1, 31,0);
    tracep->declBus(c+18,"offset", false,-1, 1,0);
    tracep->declBus(c+19,"aligned_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_init ");
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+134,"rst", false,-1);
    tracep->declBit(c+44,"in_valid", false,-1);
    tracep->declBus(c+46,"in_a5", false,-1, 31,0);
    tracep->declBus(c+47,"in_rs1_data", false,-1, 31,0);
    tracep->declBus(c+48,"in_rs2_data", false,-1, 31,0);
    tracep->declBus(c+51,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+50,"in_imm", false,-1, 31,0);
    tracep->declBus(c+49,"in_pc", false,-1, 31,0);
    tracep->declBit(c+45,"in_ready", false,-1);
    tracep->declBit(c+52,"out_valid", false,-1);
    tracep->declBus(c+54,"out_next_pc", false,-1, 31,0);
    tracep->declBus(c+39,"out_Alu_Result", false,-1, 31,0);
    tracep->declBus(c+55,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+56,"out_ctrl", false,-1, 20,0);
    tracep->declBus(c+139,"csr_data", false,-1, 31,0);
    tracep->declBus(c+58,"imm_out", false,-1, 31,0);
    tracep->declBus(c+57,"pc_out", false,-1, 31,0);
    tracep->declBit(c+53,"out_ready", false,-1);
    tracep->declBus(c+148,"IDLE", false,-1, 31,0);
    tracep->declBus(c+149,"CACULATE", false,-1, 31,0);
    tracep->declBus(c+150,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+62,"state", false,-1, 1,0);
    tracep->declBus(c+63,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+55,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+57,"pc", false,-1, 31,0);
    tracep->declBus(c+58,"imm", false,-1, 31,0);
    tracep->declBus(c+64,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+56,"ctrl", false,-1, 20,0);
    tracep->declBus(c+54,"pc_reg", false,-1, 31,0);
    tracep->declBus(c+39,"alu_reg", false,-1, 31,0);
    tracep->declBus(c+65,"B", false,-1, 31,0);
    tracep->declBus(c+66,"AluOp", false,-1, 3,0);
    tracep->declBit(c+67,"ALUSrc", false,-1);
    tracep->declBus(c+68,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+69,"is_ecall", false,-1);
    tracep->declBit(c+70,"is_mret", false,-1);
    tracep->declBit(c+71,"Branch", false,-1);
    tracep->declBus(c+72,"Jump", false,-1, 1,0);
    tracep->declBus(c+73,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+140,"next_pc", false,-1, 31,0);
    tracep->declBus(c+28,"mtvec", false,-1, 31,0);
    tracep->declBus(c+29,"mepc", false,-1, 31,0);
    tracep->declBit(c+151,"is_jar_call", false,-1);
    tracep->declBit(c+152,"is_jalr_call", false,-1);
    tracep->declBit(c+153,"is_jalr_ret", false,-1);
    tracep->pushNamePrefix("csr_regfile_init ");
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+134,"rst", false,-1);
    tracep->declBus(c+57,"pc", false,-1, 31,0);
    tracep->declBus(c+64,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+69,"is_ecall", false,-1);
    tracep->declBit(c+70,"is_mret", false,-1);
    tracep->declBus(c+68,"csr_wen", false,-1, 1,0);
    tracep->declBus(c+74,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+63,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+139,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+28,"mtvec_out", false,-1, 31,0);
    tracep->declBus(c+29,"mepc_out", false,-1, 31,0);
    tracep->declBus(c+30,"mstatus", false,-1, 31,0);
    tracep->declBus(c+28,"mtvec", false,-1, 31,0);
    tracep->declBus(c+29,"mepc", false,-1, 31,0);
    tracep->declBus(c+31,"mcause", false,-1, 31,0);
    tracep->declBus(c+139,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+154,"MSTATUS_MPP_MASK", false,-1, 31,0);
    tracep->declBus(c+155,"MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+156,"MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("control_init ");
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+134,"rst", false,-1);
    tracep->declBit(c+137,"in_valid", false,-1);
    tracep->declBus(c+136,"in_inst", false,-1, 31,0);
    tracep->declBus(c+135,"in_pc", false,-1, 31,0);
    tracep->declBit(c+138,"in_ready", false,-1);
    tracep->declBus(c+42,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+43,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+40,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+41,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+46,"in_reg_a5", false,-1, 31,0);
    tracep->declBit(c+44,"out_valid", false,-1);
    tracep->declBus(c+49,"pc_out", false,-1, 31,0);
    tracep->declBus(c+47,"out_rs1_data", false,-1, 31,0);
    tracep->declBus(c+48,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+51,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+50,"imm_out", false,-1, 31,0);
    tracep->declBus(c+46,"reg_a5_out", false,-1, 31,0);
    tracep->declBit(c+45,"out_ready", false,-1);
    tracep->declBus(c+148,"IDLE", false,-1, 31,0);
    tracep->declBus(c+149,"DECODE", false,-1, 31,0);
    tracep->declBus(c+150,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+75,"state", false,-1, 1,0);
    tracep->declBus(c+76,"inst", false,-1, 31,0);
    tracep->declBus(c+49,"pc", false,-1, 31,0);
    tracep->declBus(c+50,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+47,"rs1_reg", false,-1, 31,0);
    tracep->declBus(c+48,"rs2_reg", false,-1, 31,0);
    tracep->declBus(c+51,"ctrl_reg", false,-1, 20,0);
    tracep->declBit(c+77,"invalid", false,-1);
    tracep->declBit(c+78,"is_ebreak", false,-1);
    tracep->declBus(c+79,"opcode", false,-1, 6,0);
    tracep->declBus(c+80,"func3", false,-1, 2,0);
    tracep->declBus(c+81,"func7", false,-1, 6,0);
    tracep->declBus(c+82,"imm", false,-1, 31,0);
    tracep->declBus(c+83,"immI", false,-1, 31,0);
    tracep->declBus(c+84,"immJ", false,-1, 31,0);
    tracep->declBus(c+85,"immU", false,-1, 31,0);
    tracep->declBus(c+86,"immS", false,-1, 31,0);
    tracep->declBus(c+87,"immB", false,-1, 31,0);
    tracep->declBit(c+88,"MemWrite", false,-1);
    tracep->declBit(c+89,"MemRead", false,-1);
    tracep->declBus(c+90,"MemOp", false,-1, 2,0);
    tracep->declBus(c+91,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+92,"RegWrite", false,-1);
    tracep->declBit(c+93,"Branch", false,-1);
    tracep->declBus(c+94,"Jump", false,-1, 1,0);
    tracep->declBit(c+95,"ALUSrc", false,-1);
    tracep->declBus(c+96,"AluOp", false,-1, 3,0);
    tracep->declBus(c+97,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+98,"is_ecall", false,-1);
    tracep->declBit(c+99,"is_mret", false,-1);
    tracep->declBus(c+100,"ctrl_bus", false,-1, 20,0);
    tracep->declBus(c+157,"OP_LOAD", false,-1, 6,0);
    tracep->declBus(c+158,"OP_STORE", false,-1, 6,0);
    tracep->declBus(c+159,"OP_BRANCH", false,-1, 6,0);
    tracep->declBus(c+160,"OP_JAL", false,-1, 6,0);
    tracep->declBus(c+161,"OP_JALR", false,-1, 6,0);
    tracep->declBus(c+162,"OP_OP_IMM", false,-1, 6,0);
    tracep->declBus(c+163,"OP_OP", false,-1, 6,0);
    tracep->declBus(c+164,"OP_LUI", false,-1, 6,0);
    tracep->declBus(c+165,"OP_AUIPC", false,-1, 6,0);
    tracep->declBus(c+166,"OP_SYSTEM", false,-1, 6,0);
    tracep->declBus(c+167,"F3_ADD_SUB", false,-1, 2,0);
    tracep->declBus(c+168,"F3_SLL", false,-1, 2,0);
    tracep->declBus(c+169,"F3_SLT", false,-1, 2,0);
    tracep->declBus(c+170,"F3_SLTU", false,-1, 2,0);
    tracep->declBus(c+171,"F3_XOR", false,-1, 2,0);
    tracep->declBus(c+172,"F3_SR", false,-1, 2,0);
    tracep->declBus(c+173,"F3_OR", false,-1, 2,0);
    tracep->declBus(c+174,"F3_AND", false,-1, 2,0);
    tracep->declBus(c+175,"F7_SUB", false,-1, 6,0);
    tracep->declBus(c+175,"F7_SRA", false,-1, 6,0);
    tracep->declBus(c+176,"F7_DEFAULT", false,-1, 6,0);
    tracep->declBus(c+177,"ALU_ADD", false,-1, 3,0);
    tracep->declBus(c+178,"ALU_SLL", false,-1, 3,0);
    tracep->declBus(c+179,"ALU_SLT", false,-1, 3,0);
    tracep->declBus(c+180,"ALU_SLTU", false,-1, 3,0);
    tracep->declBus(c+181,"ALU_XOR", false,-1, 3,0);
    tracep->declBus(c+182,"ALU_SRA", false,-1, 3,0);
    tracep->declBus(c+183,"ALU_SRL", false,-1, 3,0);
    tracep->declBus(c+184,"ALU_OR", false,-1, 3,0);
    tracep->declBus(c+185,"ALU_AND", false,-1, 3,0);
    tracep->declBus(c+186,"ALU_SUB", false,-1, 3,0);
    tracep->declBus(c+187,"ALU_PCADD", false,-1, 3,0);
    tracep->declBus(c+188,"JUMP_NONE", false,-1, 1,0);
    tracep->declBus(c+189,"JUMP_JAL", false,-1, 1,0);
    tracep->declBus(c+190,"JUMP_JALR", false,-1, 1,0);
    tracep->declBus(c+167,"MTR_ALU", false,-1, 2,0);
    tracep->declBus(c+168,"MTR_MEM", false,-1, 2,0);
    tracep->declBus(c+169,"MTR_PCP4", false,-1, 2,0);
    tracep->declBus(c+170,"MTR_IMM", false,-1, 2,0);
    tracep->declBus(c+171,"MTR_CSR", false,-1, 2,0);
    tracep->declBus(c+167,"MEM_B", false,-1, 2,0);
    tracep->declBus(c+168,"MEM_H", false,-1, 2,0);
    tracep->declBus(c+169,"MEM_W", false,-1, 2,0);
    tracep->declBus(c+171,"MEM_BU", false,-1, 2,0);
    tracep->declBus(c+172,"MEM_HU", false,-1, 2,0);
    tracep->declBus(c+188,"CSR_NONE", false,-1, 1,0);
    tracep->declBus(c+189,"CSR_WRITE", false,-1, 1,0);
    tracep->declBus(c+190,"CSR_SET", false,-1, 1,0);
    tracep->declBus(c+191,"ECALL_CODE", false,-1, 11,0);
    tracep->declBus(c+192,"EBREAK_CODE", false,-1, 11,0);
    tracep->declBus(c+193,"MRET_CODE", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_init ");
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+134,"rst", false,-1);
    tracep->declBit(c+61,"wb_done", false,-1);
    tracep->declBus(c+54,"next_pc", false,-1, 31,0);
    tracep->declBit(c+137,"out_valid", false,-1);
    tracep->declBus(c+136,"inst", false,-1, 31,0);
    tracep->declBus(c+135,"pc", false,-1, 31,0);
    tracep->declBit(c+138,"out_ready", false,-1);
    tracep->declBus(c+148,"IDLE", false,-1, 31,0);
    tracep->declBus(c+149,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+150,"WAIT", false,-1, 31,0);
    tracep->declBus(c+32,"state", false,-1, 1,0);
    tracep->declBus(c+33,"current_pc", false,-1, 31,0);
    tracep->declBus(c+34,"next_pc_reg", false,-1, 31,0);
    tracep->declBus(c+35,"if_inst", false,-1, 31,0);
    tracep->declBus(c+36,"if_reg", false,-1, 31,0);
    tracep->declBit(c+37,"fetch_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_init ");
    tracep->declBus(c+42,"reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+43,"reg_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+40,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+41,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+6,"reg_wen", false,-1);
    tracep->declBus(c+8,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+7,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+46,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+194,"rs1", false,-1, 4,0);
    tracep->declBus(c+195,"rs2", false,-1, 4,0);
    tracep->declBus(c+196,"rd", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+101+i*1,"register", true,(i+0), 31,0);
    }
    tracep->declBit(c+141,"is_info_register", false,-1);
    tracep->declBit(c+142,"is_en_display", false,-1);
    tracep->declBus(c+143,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_init ");
    tracep->declBit(c+133,"clk", false,-1);
    tracep->declBit(c+134,"rst", false,-1);
    tracep->declBit(c+59,"in_valid", false,-1);
    tracep->declBus(c+5,"in_alu_result", false,-1, 31,0);
    tracep->declBus(c+2,"in_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+3,"in_pc", false,-1, 31,0);
    tracep->declBus(c+4,"in_imm", false,-1, 31,0);
    tracep->declBus(c+1,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+139,"in_csr_rdata", false,-1, 31,0);
    tracep->declBit(c+60,"in_ready", false,-1);
    tracep->declBus(c+38,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+61,"out_valid", false,-1);
    tracep->declBit(c+6,"reg_wen", false,-1);
    tracep->declBus(c+8,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+7,"reg_wdata", false,-1, 31,0);
    tracep->declBit(c+61,"has_data", false,-1);
    tracep->declBus(c+20,"ctrl", false,-1, 20,0);
    tracep->declBus(c+21,"pc", false,-1, 31,0);
    tracep->declBus(c+22,"imm", false,-1, 31,0);
    tracep->declBus(c+23,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+24,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+25,"alu_result", false,-1, 31,0);
    tracep->declBus(c+26,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+27,"RegWrite", false,-1);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl),21);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ReadData),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__pc),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__imm),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr),32);
    bufp->fullBit(oldp+6,(vlSelf->ysyx_25030085_top__DOT__reg_wen));
    bufp->fullIData(oldp+7,(((0x1000U & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                              ? ((0x800U & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                                  ? 0U : ((0x400U & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                                           ? 0U : vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__csr_rdata))
                              : ((0x800U & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                                  ? ((0x400U & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                                      ? vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__imm
                                      : ((IData)(4U) 
                                         + vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__pc))
                                  : ((0x400U & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                                      ? vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__mem_rdata
                                      : vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__alu_result)))),32);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_25030085_top__DOT__reg_waddr),5);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_wdata),32);
    bufp->fullBit(oldp+10,((1U & (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl 
                                  >> 6U))));
    bufp->fullBit(oldp+11,((1U & (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl 
                                  >> 5U))));
    bufp->fullCData(oldp+12,((7U & (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl 
                                    >> 7U))),3);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byte),8);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byteu),8);
    bufp->fullSData(oldp+15,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word),16);
    bufp->fullSData(oldp+16,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu),16);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata),32);
    bufp->fullCData(oldp+18,((3U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr)),2);
    bufp->fullIData(oldp+19,((0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr)),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl),21);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__pc),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__imm),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__csr_rdata),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__mem_rdata),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__alu_result),32);
    bufp->fullCData(oldp+26,((7U & (vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl 
                                    >> 0xaU))),3);
    bufp->fullBit(oldp+27,((1U & (vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl 
                                  >> 0x10U))));
    bufp->fullIData(oldp+28,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mtvec),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mcause),32);
    bufp->fullCData(oldp+32,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__state),2);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__next_pc_reg),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_reg),32);
    bufp->fullBit(oldp+37,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__fetch_valid));
    bufp->fullCData(oldp+38,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__alu_reg),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_25030085_top__DOT__rs1_data),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_25030085_top__DOT__rs2_data),32);
    bufp->fullCData(oldp+42,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+43,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+44,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__state))));
    bufp->fullBit(oldp+45,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__state))));
    bufp->fullIData(oldp+46,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                             [0xfU]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__rs1_reg),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__rs2_reg),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__pc),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm_reg),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ctrl_reg),21);
    bufp->fullBit(oldp+52,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__state))));
    bufp->fullBit(oldp+53,((1U & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__has_data)))));
    bufp->fullIData(oldp+54,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc_reg),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs2_data),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl),21);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm),32);
    bufp->fullBit(oldp+59,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__has_data));
    bufp->fullBit(oldp+60,((1U & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__has_data)))));
    bufp->fullBit(oldp+61,(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__has_data));
    bufp->fullCData(oldp+62,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__state),2);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__reg_a5),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B),32);
    bufp->fullCData(oldp+66,((0xfU & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                      >> 1U))),4);
    bufp->fullBit(oldp+67,((1U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)));
    bufp->fullCData(oldp+68,((3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                    >> 0x13U))),2);
    bufp->fullBit(oldp+69,((1U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                  >> 0x11U))));
    bufp->fullBit(oldp+70,((1U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                  >> 0x12U))));
    bufp->fullBit(oldp+71,((1U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                  >> 0xdU))));
    bufp->fullCData(oldp+72,((3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                    >> 0xeU))),2);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__Alu_Result),32);
    bufp->fullSData(oldp+74,((0xfffU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm)),12);
    bufp->fullCData(oldp+75,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__state),2);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst),32);
    bufp->fullBit(oldp+77,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid));
    bufp->fullBit(oldp+78,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak));
    bufp->fullCData(oldp+79,((0x7fU & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)),7);
    bufp->fullCData(oldp+80,((7U & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+81,((vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI),32);
    bufp->fullIData(oldp+84,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                     >> 0x14U)))))),32);
    bufp->fullIData(oldp+85,((0xfffff000U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)),32);
    bufp->fullIData(oldp+86,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+87,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                    >> 7U)))))),32);
    bufp->fullBit(oldp+88,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemWrite));
    bufp->fullBit(oldp+89,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemRead));
    bufp->fullCData(oldp+90,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemOp),3);
    bufp->fullCData(oldp+91,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemtoReg),3);
    bufp->fullBit(oldp+92,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite));
    bufp->fullBit(oldp+93,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Branch));
    bufp->fullCData(oldp+94,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Jump),2);
    bufp->fullBit(oldp+95,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc));
    bufp->fullCData(oldp+96,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__AluOp),4);
    bufp->fullCData(oldp+97,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__csr_wen),2);
    bufp->fullBit(oldp+98,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ecall));
    bufp->fullBit(oldp+99,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_mret));
    bufp->fullIData(oldp+100,((((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__csr_wen) 
                                << 0x13U) | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_mret) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ecall) 
                                                 << 0x11U) 
                                                | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite) 
                                                    << 0x10U) 
                                                   | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Jump) 
                                                       << 0xeU) 
                                                      | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Branch) 
                                                          << 0xdU) 
                                                         | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemtoReg) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemOp) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemWrite) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemRead) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__AluOp) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc))))))))))))),21);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0]),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[1]),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[2]),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[3]),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[4]),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[5]),32);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[6]),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[7]),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[8]),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[9]),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[10]),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[11]),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[12]),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[13]),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[14]),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[15]),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[16]),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[17]),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[18]),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[19]),32);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[20]),32);
    bufp->fullIData(oldp+122,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[21]),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[22]),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[23]),32);
    bufp->fullIData(oldp+125,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[24]),32);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[25]),32);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[26]),32);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[27]),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[28]),32);
    bufp->fullIData(oldp+130,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[29]),32);
    bufp->fullIData(oldp+131,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[30]),32);
    bufp->fullIData(oldp+132,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[31]),32);
    bufp->fullBit(oldp+133,(vlSelf->clk));
    bufp->fullBit(oldp+134,(vlSelf->rst));
    bufp->fullIData(oldp+135,(vlSelf->top_pc),32);
    bufp->fullIData(oldp+136,(vlSelf->top_inst),32);
    bufp->fullBit(oldp+137,(vlSelf->top_valid));
    bufp->fullBit(oldp+138,(vlSelf->top_ready));
    bufp->fullIData(oldp+139,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))
                                ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus
                                : ((0x305U == (0xfffU 
                                               & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))
                                    ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mtvec
                                    : ((0x341U == (0xfffU 
                                                   & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))
                                        ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))
                                            ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mcause
                                            : 0U))))),32);
    bufp->fullIData(oldp+140,(((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                             >> 0xeU)))
                                ? (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm 
                                   + vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc)
                                : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                                 >> 0xeU)))
                                    ? (0xfffffffeU 
                                       & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__Alu_Result)
                                    : ((0x2000U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                                        ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__Alu_Result
                                        : ((0x20000U 
                                            & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                                            ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mtvec
                                            : ((0x40000U 
                                                & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                                                ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc
                                                : ((IData)(4U) 
                                                   + vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc))))))),32);
    bufp->fullBit(oldp+141,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register));
    bufp->fullBit(oldp+142,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display));
    bufp->fullIData(oldp+143,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__i),32);
    bufp->fullCData(oldp+144,(vlSelf->ysyx_25030085_top__DOT__csr_wen),2);
    bufp->fullBit(oldp+145,(vlSelf->ysyx_25030085_top__DOT__is_ecall));
    bufp->fullBit(oldp+146,(vlSelf->ysyx_25030085_top__DOT__is_mret));
    bufp->fullIData(oldp+147,(vlSelf->ysyx_25030085_top__DOT__ctrl),21);
    bufp->fullIData(oldp+148,(0U),32);
    bufp->fullIData(oldp+149,(1U),32);
    bufp->fullIData(oldp+150,(2U),32);
    bufp->fullBit(oldp+151,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__is_jar_call));
    bufp->fullBit(oldp+152,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__is_jalr_call));
    bufp->fullBit(oldp+153,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__is_jalr_ret));
    bufp->fullIData(oldp+154,(0x1800U),32);
    bufp->fullIData(oldp+155,(0x80U),32);
    bufp->fullIData(oldp+156,(8U),32);
    bufp->fullCData(oldp+157,(3U),7);
    bufp->fullCData(oldp+158,(0x23U),7);
    bufp->fullCData(oldp+159,(0x63U),7);
    bufp->fullCData(oldp+160,(0x6fU),7);
    bufp->fullCData(oldp+161,(0x67U),7);
    bufp->fullCData(oldp+162,(0x13U),7);
    bufp->fullCData(oldp+163,(0x33U),7);
    bufp->fullCData(oldp+164,(0x37U),7);
    bufp->fullCData(oldp+165,(0x17U),7);
    bufp->fullCData(oldp+166,(0x73U),7);
    bufp->fullCData(oldp+167,(0U),3);
    bufp->fullCData(oldp+168,(1U),3);
    bufp->fullCData(oldp+169,(2U),3);
    bufp->fullCData(oldp+170,(3U),3);
    bufp->fullCData(oldp+171,(4U),3);
    bufp->fullCData(oldp+172,(5U),3);
    bufp->fullCData(oldp+173,(6U),3);
    bufp->fullCData(oldp+174,(7U),3);
    bufp->fullCData(oldp+175,(0x20U),7);
    bufp->fullCData(oldp+176,(0U),7);
    bufp->fullCData(oldp+177,(0U),4);
    bufp->fullCData(oldp+178,(1U),4);
    bufp->fullCData(oldp+179,(2U),4);
    bufp->fullCData(oldp+180,(3U),4);
    bufp->fullCData(oldp+181,(4U),4);
    bufp->fullCData(oldp+182,(5U),4);
    bufp->fullCData(oldp+183,(6U),4);
    bufp->fullCData(oldp+184,(7U),4);
    bufp->fullCData(oldp+185,(8U),4);
    bufp->fullCData(oldp+186,(0xaU),4);
    bufp->fullCData(oldp+187,(9U),4);
    bufp->fullCData(oldp+188,(0U),2);
    bufp->fullCData(oldp+189,(1U),2);
    bufp->fullCData(oldp+190,(2U),2);
    bufp->fullSData(oldp+191,(0U),12);
    bufp->fullSData(oldp+192,(1U),12);
    bufp->fullSData(oldp+193,(0x302U),12);
    bufp->fullCData(oldp+194,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__rs1),5);
    bufp->fullCData(oldp+195,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__rs2),5);
    bufp->fullCData(oldp+196,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__rd),5);
}
