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
    tracep->declBit(c+136,"clk", false,-1);
    tracep->declBit(c+137,"rst", false,-1);
    tracep->declBus(c+138,"top_pc", false,-1, 31,0);
    tracep->declBus(c+139,"top_inst", false,-1, 31,0);
    tracep->declBit(c+140,"top_valid", false,-1);
    tracep->declBit(c+141,"top_ready", false,-1);
    tracep->declBit(c+142,"inst_done", false,-1);
    tracep->pushNamePrefix("ysyx_25030085_top ");
    tracep->declBit(c+136,"clk", false,-1);
    tracep->declBit(c+137,"rst", false,-1);
    tracep->declBus(c+138,"top_pc", false,-1, 31,0);
    tracep->declBus(c+139,"top_inst", false,-1, 31,0);
    tracep->declBit(c+140,"top_valid", false,-1);
    tracep->declBit(c+141,"top_ready", false,-1);
    tracep->declBit(c+142,"inst_done", false,-1);
    tracep->declBus(c+138,"next_pc", false,-1, 31,0);
    tracep->declBit(c+142,"wb_done", false,-1);
    tracep->declBus(c+139,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+143,"if_id_pc", false,-1, 31,0);
    tracep->declBit(c+141,"id_if_ready", false,-1);
    tracep->declBit(c+140,"if_id_valid", false,-1);
    tracep->declBus(c+95,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+96,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+97,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+98,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+5,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+99,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+100,"id_ex_rs1", false,-1, 31,0);
    tracep->declBus(c+101,"id_ex_rs2", false,-1, 31,0);
    tracep->declBus(c+102,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+103,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+5,"id_ex_a5", false,-1, 31,0);
    tracep->declBus(c+104,"id_ex_ctrl", false,-1, 20,0);
    tracep->declBit(c+105,"id_ex_valid", false,-1);
    tracep->declBit(c+106,"ex_id_ready", false,-1);
    tracep->declBus(c+6,"ex_me_rd", false,-1, 4,0);
    tracep->declBus(c+144,"csr_data", false,-1, 31,0);
    tracep->declBus(c+7,"ex_me_ctrl", false,-1, 20,0);
    tracep->declBus(c+8,"ex_me_pc", false,-1, 31,0);
    tracep->declBus(c+9,"ex_me_imm", false,-1, 31,0);
    tracep->declBus(c+10,"ex_me_npc", false,-1, 31,0);
    tracep->declBus(c+11,"ex_me_rs2", false,-1, 31,0);
    tracep->declBus(c+12,"ex_me_alu", false,-1, 31,0);
    tracep->declBit(c+107,"ex_me_valid", false,-1);
    tracep->declBit(c+13,"me_ex_ready", false,-1);
    tracep->declBus(c+14,"me_wb_rd", false,-1, 4,0);
    tracep->declBus(c+15,"me_wb_ctrl", false,-1, 20,0);
    tracep->declBus(c+16,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+17,"me_wb_pc", false,-1, 31,0);
    tracep->declBus(c+18,"me_wb_imm", false,-1, 31,0);
    tracep->declBus(c+19,"me_wb_alu", false,-1, 31,0);
    tracep->declBus(c+20,"me_wb_npc", false,-1, 31,0);
    tracep->declBit(c+21,"me_wb_valid", false,-1);
    tracep->declBit(c+22,"wb_me_ready", false,-1);
    tracep->declBit(c+23,"reg_wen", false,-1);
    tracep->declBus(c+24,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+25,"reg_waddr", false,-1, 4,0);
    tracep->declBit(c+145,"is_jar_call", false,-1);
    tracep->declBit(c+146,"is_jalr_call", false,-1);
    tracep->declBit(c+147,"is_jalr_ret", false,-1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+136,"clk", false,-1);
    tracep->declBit(c+137,"rst", false,-1);
    tracep->declBit(c+105,"in_valid", false,-1);
    tracep->declBus(c+5,"in_a5", false,-1, 31,0);
    tracep->declBus(c+100,"in_rs1_data", false,-1, 31,0);
    tracep->declBus(c+101,"in_rs2_data", false,-1, 31,0);
    tracep->declBus(c+104,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+103,"in_imm", false,-1, 31,0);
    tracep->declBus(c+99,"in_rd", false,-1, 4,0);
    tracep->declBus(c+102,"in_pc", false,-1, 31,0);
    tracep->declBit(c+106,"in_ready", false,-1);
    tracep->declBit(c+107,"out_valid", false,-1);
    tracep->declBus(c+10,"out_next_pc", false,-1, 31,0);
    tracep->declBus(c+12,"out_Alu_Result", false,-1, 31,0);
    tracep->declBus(c+11,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+7,"out_ctrl", false,-1, 20,0);
    tracep->declBus(c+144,"csr_data", false,-1, 31,0);
    tracep->declBus(c+6,"rd_out", false,-1, 4,0);
    tracep->declBus(c+9,"imm_out", false,-1, 31,0);
    tracep->declBus(c+8,"pc_out", false,-1, 31,0);
    tracep->declBit(c+13,"out_ready", false,-1);
    tracep->declBus(c+152,"IDLE", false,-1, 31,0);
    tracep->declBus(c+153,"CACULATE", false,-1, 31,0);
    tracep->declBus(c+154,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+108,"state", false,-1, 1,0);
    tracep->declBus(c+6,"rd", false,-1, 4,0);
    tracep->declBus(c+26,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+11,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+8,"pc", false,-1, 31,0);
    tracep->declBus(c+9,"imm", false,-1, 31,0);
    tracep->declBus(c+27,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+7,"ctrl", false,-1, 20,0);
    tracep->declBus(c+10,"pc_reg", false,-1, 31,0);
    tracep->declBus(c+12,"alu_reg", false,-1, 31,0);
    tracep->declBus(c+28,"B", false,-1, 31,0);
    tracep->declBus(c+29,"AluOp", false,-1, 3,0);
    tracep->declBit(c+30,"ALUSrc", false,-1);
    tracep->declBus(c+31,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+32,"is_ecall", false,-1);
    tracep->declBit(c+33,"is_mret", false,-1);
    tracep->declBit(c+34,"Branch", false,-1);
    tracep->declBus(c+35,"Jump", false,-1, 1,0);
    tracep->declBus(c+109,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+148,"next_pc", false,-1, 31,0);
    tracep->declBus(c+91,"mtvec", false,-1, 31,0);
    tracep->declBus(c+92,"mepc", false,-1, 31,0);
    tracep->pushNamePrefix("csr_regfile_init ");
    tracep->declBit(c+136,"clk", false,-1);
    tracep->declBit(c+137,"rst", false,-1);
    tracep->declBus(c+8,"pc", false,-1, 31,0);
    tracep->declBus(c+27,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+32,"is_ecall", false,-1);
    tracep->declBit(c+33,"is_mret", false,-1);
    tracep->declBus(c+31,"csr_wen", false,-1, 1,0);
    tracep->declBus(c+36,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+26,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+144,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+91,"mtvec_out", false,-1, 31,0);
    tracep->declBus(c+92,"mepc_out", false,-1, 31,0);
    tracep->declBus(c+93,"mstatus", false,-1, 31,0);
    tracep->declBus(c+91,"mtvec", false,-1, 31,0);
    tracep->declBus(c+92,"mepc", false,-1, 31,0);
    tracep->declBus(c+94,"mcause", false,-1, 31,0);
    tracep->declBus(c+144,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+155,"MSTATUS_MPP_MASK", false,-1, 31,0);
    tracep->declBus(c+156,"MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+157,"MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+136,"clk", false,-1);
    tracep->declBit(c+137,"rst", false,-1);
    tracep->declBit(c+140,"in_valid", false,-1);
    tracep->declBus(c+139,"in_inst", false,-1, 31,0);
    tracep->declBus(c+143,"in_pc", false,-1, 31,0);
    tracep->declBit(c+141,"in_ready", false,-1);
    tracep->declBus(c+95,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+96,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+97,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+98,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+5,"in_reg_a5", false,-1, 31,0);
    tracep->declBit(c+105,"out_valid", false,-1);
    tracep->declBus(c+102,"pc_out", false,-1, 31,0);
    tracep->declBus(c+100,"out_rs1_data", false,-1, 31,0);
    tracep->declBus(c+101,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+104,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+103,"imm_out", false,-1, 31,0);
    tracep->declBus(c+5,"reg_a5_out", false,-1, 31,0);
    tracep->declBus(c+99,"rd_out", false,-1, 4,0);
    tracep->declBit(c+106,"out_ready", false,-1);
    tracep->declBus(c+152,"IDLE", false,-1, 31,0);
    tracep->declBus(c+153,"DECODE", false,-1, 31,0);
    tracep->declBus(c+154,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+110,"state", false,-1, 1,0);
    tracep->declBus(c+111,"inst", false,-1, 31,0);
    tracep->declBus(c+102,"pc", false,-1, 31,0);
    tracep->declBus(c+103,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+100,"rs1_reg", false,-1, 31,0);
    tracep->declBus(c+101,"rs2_reg", false,-1, 31,0);
    tracep->declBus(c+104,"ctrl_reg", false,-1, 20,0);
    tracep->declBit(c+112,"invalid", false,-1);
    tracep->declBit(c+113,"is_ebreak", false,-1);
    tracep->declBus(c+114,"opcode", false,-1, 6,0);
    tracep->declBus(c+115,"func3", false,-1, 2,0);
    tracep->declBus(c+116,"func7", false,-1, 6,0);
    tracep->declBus(c+117,"imm", false,-1, 31,0);
    tracep->declBus(c+118,"immI", false,-1, 31,0);
    tracep->declBus(c+119,"immJ", false,-1, 31,0);
    tracep->declBus(c+120,"immU", false,-1, 31,0);
    tracep->declBus(c+121,"immS", false,-1, 31,0);
    tracep->declBus(c+122,"immB", false,-1, 31,0);
    tracep->declBus(c+99,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+123,"MemWrite", false,-1);
    tracep->declBit(c+124,"MemRead", false,-1);
    tracep->declBus(c+125,"MemOp", false,-1, 2,0);
    tracep->declBus(c+126,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+127,"RegWrite", false,-1);
    tracep->declBit(c+128,"Branch", false,-1);
    tracep->declBus(c+129,"Jump", false,-1, 1,0);
    tracep->declBit(c+130,"ALUSrc", false,-1);
    tracep->declBus(c+131,"AluOp", false,-1, 3,0);
    tracep->declBus(c+132,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+133,"is_ecall", false,-1);
    tracep->declBit(c+134,"is_mret", false,-1);
    tracep->declBus(c+135,"ctrl_bus", false,-1, 20,0);
    tracep->declBus(c+158,"OP_LOAD", false,-1, 6,0);
    tracep->declBus(c+159,"OP_STORE", false,-1, 6,0);
    tracep->declBus(c+160,"OP_BRANCH", false,-1, 6,0);
    tracep->declBus(c+161,"OP_JAL", false,-1, 6,0);
    tracep->declBus(c+162,"OP_JALR", false,-1, 6,0);
    tracep->declBus(c+163,"OP_OP_IMM", false,-1, 6,0);
    tracep->declBus(c+164,"OP_OP", false,-1, 6,0);
    tracep->declBus(c+165,"OP_LUI", false,-1, 6,0);
    tracep->declBus(c+166,"OP_AUIPC", false,-1, 6,0);
    tracep->declBus(c+167,"OP_SYSTEM", false,-1, 6,0);
    tracep->declBus(c+168,"F3_ADD_SUB", false,-1, 2,0);
    tracep->declBus(c+169,"F3_SLL", false,-1, 2,0);
    tracep->declBus(c+170,"F3_SLT", false,-1, 2,0);
    tracep->declBus(c+171,"F3_SLTU", false,-1, 2,0);
    tracep->declBus(c+172,"F3_XOR", false,-1, 2,0);
    tracep->declBus(c+173,"F3_SR", false,-1, 2,0);
    tracep->declBus(c+174,"F3_OR", false,-1, 2,0);
    tracep->declBus(c+175,"F3_AND", false,-1, 2,0);
    tracep->declBus(c+176,"F7_SUB", false,-1, 6,0);
    tracep->declBus(c+176,"F7_SRA", false,-1, 6,0);
    tracep->declBus(c+177,"F7_DEFAULT", false,-1, 6,0);
    tracep->declBus(c+178,"ALU_ADD", false,-1, 3,0);
    tracep->declBus(c+179,"ALU_SLL", false,-1, 3,0);
    tracep->declBus(c+180,"ALU_SLT", false,-1, 3,0);
    tracep->declBus(c+181,"ALU_SLTU", false,-1, 3,0);
    tracep->declBus(c+182,"ALU_XOR", false,-1, 3,0);
    tracep->declBus(c+183,"ALU_SRA", false,-1, 3,0);
    tracep->declBus(c+184,"ALU_SRL", false,-1, 3,0);
    tracep->declBus(c+185,"ALU_OR", false,-1, 3,0);
    tracep->declBus(c+186,"ALU_AND", false,-1, 3,0);
    tracep->declBus(c+187,"ALU_SUB", false,-1, 3,0);
    tracep->declBus(c+188,"ALU_PCADD", false,-1, 3,0);
    tracep->declBus(c+189,"JUMP_NONE", false,-1, 1,0);
    tracep->declBus(c+190,"JUMP_JAL", false,-1, 1,0);
    tracep->declBus(c+191,"JUMP_JALR", false,-1, 1,0);
    tracep->declBus(c+168,"MTR_ALU", false,-1, 2,0);
    tracep->declBus(c+169,"MTR_MEM", false,-1, 2,0);
    tracep->declBus(c+170,"MTR_PCP4", false,-1, 2,0);
    tracep->declBus(c+171,"MTR_IMM", false,-1, 2,0);
    tracep->declBus(c+172,"MTR_CSR", false,-1, 2,0);
    tracep->declBus(c+168,"MEM_B", false,-1, 2,0);
    tracep->declBus(c+169,"MEM_H", false,-1, 2,0);
    tracep->declBus(c+170,"MEM_W", false,-1, 2,0);
    tracep->declBus(c+172,"MEM_BU", false,-1, 2,0);
    tracep->declBus(c+173,"MEM_HU", false,-1, 2,0);
    tracep->declBus(c+189,"CSR_NONE", false,-1, 1,0);
    tracep->declBus(c+190,"CSR_WRITE", false,-1, 1,0);
    tracep->declBus(c+191,"CSR_SET", false,-1, 1,0);
    tracep->declBus(c+192,"ECALL_CODE", false,-1, 11,0);
    tracep->declBus(c+193,"EBREAK_CODE", false,-1, 11,0);
    tracep->declBus(c+194,"MRET_CODE", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+136,"clk", false,-1);
    tracep->declBit(c+137,"rst", false,-1);
    tracep->declBit(c+142,"wb_done", false,-1);
    tracep->declBus(c+138,"next_pc", false,-1, 31,0);
    tracep->declBit(c+140,"out_valid", false,-1);
    tracep->declBus(c+139,"inst", false,-1, 31,0);
    tracep->declBus(c+143,"pc", false,-1, 31,0);
    tracep->declBit(c+141,"out_ready", false,-1);
    tracep->declBus(c+152,"IDLE", false,-1, 31,0);
    tracep->declBus(c+153,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+154,"WAIT", false,-1, 31,0);
    tracep->declBus(c+1,"state", false,-1, 1,0);
    tracep->declBus(c+143,"current_pc", false,-1, 31,0);
    tracep->declBus(c+2,"next_pc_reg", false,-1, 31,0);
    tracep->declBus(c+3,"if_inst", false,-1, 31,0);
    tracep->declBit(c+4,"fetch_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+136,"clk", false,-1);
    tracep->declBit(c+137,"rst", false,-1);
    tracep->declBit(c+107,"in_valid", false,-1);
    tracep->declBus(c+7,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+11,"in_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+12,"in_sram_addr", false,-1, 31,0);
    tracep->declBus(c+6,"in_rd", false,-1, 4,0);
    tracep->declBus(c+9,"in_imm", false,-1, 31,0);
    tracep->declBus(c+10,"in_npc", false,-1, 31,0);
    tracep->declBus(c+8,"in_pc", false,-1, 31,0);
    tracep->declBit(c+13,"in_ready", false,-1);
    tracep->declBit(c+21,"out_valid", false,-1);
    tracep->declBus(c+16,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+15,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+18,"imm_out", false,-1, 31,0);
    tracep->declBus(c+20,"npc_out", false,-1, 31,0);
    tracep->declBus(c+17,"pc_out", false,-1, 31,0);
    tracep->declBus(c+14,"rd_out", false,-1, 4,0);
    tracep->declBus(c+19,"alu_result", false,-1, 31,0);
    tracep->declBit(c+22,"out_ready", false,-1);
    tracep->declBus(c+152,"IDLE", false,-1, 31,0);
    tracep->declBus(c+153,"STORE", false,-1, 31,0);
    tracep->declBus(c+154,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+37,"state", false,-1, 1,0);
    tracep->declBit(c+38,"has_data", false,-1);
    tracep->declBus(c+15,"ctrl", false,-1, 20,0);
    tracep->declBus(c+14,"rd", false,-1, 4,0);
    tracep->declBus(c+39,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+19,"sram_addr", false,-1, 31,0);
    tracep->declBus(c+17,"pc", false,-1, 31,0);
    tracep->declBus(c+18,"imm", false,-1, 31,0);
    tracep->declBus(c+20,"npc", false,-1, 31,0);
    tracep->declBit(c+40,"MemWrite", false,-1);
    tracep->declBit(c+41,"MemRead", false,-1);
    tracep->declBus(c+42,"MemOp", false,-1, 2,0);
    tracep->declBus(c+16,"ReadData", false,-1, 31,0);
    tracep->declBus(c+43,"rdata", false,-1, 31,0);
    tracep->declBus(c+44,"offset", false,-1, 1,0);
    tracep->declBus(c+45,"aligned_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+136,"clk", false,-1);
    tracep->declBit(c+137,"rst", false,-1);
    tracep->declBus(c+95,"reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+96,"reg_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+97,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+98,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+23,"reg_wen", false,-1);
    tracep->declBus(c+25,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+24,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+5,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+195,"rs1", false,-1, 4,0);
    tracep->declBus(c+196,"rs2", false,-1, 4,0);
    tracep->declBus(c+197,"rd", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+46+i*1,"register", true,(i+0), 31,0);
    }
    tracep->declBit(c+149,"is_info_register", false,-1);
    tracep->declBit(c+150,"is_en_display", false,-1);
    tracep->declBus(c+151,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+78,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+136,"clk", false,-1);
    tracep->declBit(c+137,"rst", false,-1);
    tracep->declBit(c+21,"in_valid", false,-1);
    tracep->declBus(c+19,"in_alu_result", false,-1, 31,0);
    tracep->declBus(c+16,"in_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+20,"in_npc", false,-1, 31,0);
    tracep->declBus(c+17,"in_pc", false,-1, 31,0);
    tracep->declBus(c+18,"in_imm", false,-1, 31,0);
    tracep->declBus(c+15,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+144,"in_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+14,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+22,"in_ready", false,-1);
    tracep->declBit(c+142,"out_valid", false,-1);
    tracep->declBus(c+138,"next_pc", false,-1, 31,0);
    tracep->declBit(c+23,"reg_wen", false,-1);
    tracep->declBus(c+25,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+24,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+152,"IDLE", false,-1, 31,0);
    tracep->declBus(c+153,"CHOOSE", false,-1, 31,0);
    tracep->declBus(c+154,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+198,"DONE", false,-1, 31,0);
    tracep->declBus(c+79,"state", false,-1, 1,0);
    tracep->declBit(c+199,"has_data", false,-1);
    tracep->declBus(c+80,"ctrl", false,-1, 20,0);
    tracep->declBus(c+81,"rd", false,-1, 4,0);
    tracep->declBus(c+25,"addr_reg", false,-1, 4,0);
    tracep->declBus(c+82,"npc", false,-1, 31,0);
    tracep->declBus(c+83,"pc", false,-1, 31,0);
    tracep->declBus(c+84,"imm", false,-1, 31,0);
    tracep->declBus(c+85,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+86,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+87,"alu_result", false,-1, 31,0);
    tracep->declBit(c+23,"wen", false,-1);
    tracep->declBus(c+24,"data_reg", false,-1, 31,0);
    tracep->declBus(c+88,"wb_data", false,-1, 31,0);
    tracep->declBus(c+89,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+90,"RegWrite", false,-1);
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
    bufp->fullCData(oldp+1,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state),2);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__next_pc_reg),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst),32);
    bufp->fullBit(oldp+4,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__fetch_valid));
    bufp->fullIData(oldp+5,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                            [0xfU]),32);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rd),5);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl),21);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc_reg),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__alu_reg),32);
    bufp->fullBit(oldp+13,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__mem__DOT__state))));
    bufp->fullCData(oldp+14,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__rd),5);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl),21);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__ReadData),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__pc),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__imm),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__npc),32);
    bufp->fullBit(oldp+21,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__mem__DOT__state))));
    bufp->fullBit(oldp+22,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))));
    bufp->fullBit(oldp+23,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wen));
    bufp->fullIData(oldp+24,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__data_reg),32);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__addr_reg),5);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__reg_a5),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__B),32);
    bufp->fullCData(oldp+29,((0xfU & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                      >> 1U))),4);
    bufp->fullBit(oldp+30,((1U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)));
    bufp->fullCData(oldp+31,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                    >> 0x13U))),2);
    bufp->fullBit(oldp+32,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                  >> 0x11U))));
    bufp->fullBit(oldp+33,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                  >> 0x12U))));
    bufp->fullBit(oldp+34,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                  >> 0xdU))));
    bufp->fullCData(oldp+35,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                    >> 0xeU))),2);
    bufp->fullSData(oldp+36,((0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm)),12);
    bufp->fullCData(oldp+37,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__state),2);
    bufp->fullBit(oldp+38,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__has_data));
    bufp->fullIData(oldp+39,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_wdata),32);
    bufp->fullBit(oldp+40,((1U & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl 
                                  >> 6U))));
    bufp->fullBit(oldp+41,((1U & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl 
                                  >> 5U))));
    bufp->fullCData(oldp+42,((7U & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl 
                                    >> 7U))),3);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata),32);
    bufp->fullCData(oldp+44,((3U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr)),2);
    bufp->fullIData(oldp+45,((0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr)),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[1]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[2]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[3]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[4]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[5]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[6]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[7]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[8]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[9]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[10]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[11]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[12]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[13]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[14]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[15]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[16]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[17]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[18]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[19]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[20]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[21]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[22]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[23]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[24]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[25]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[26]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[27]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[28]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[29]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[30]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[31]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+79,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state),2);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl),21);
    bufp->fullCData(oldp+81,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd),5);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result),32);
    bufp->fullIData(oldp+88,(((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))
                               ? ((0x1000U & vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl)
                                   ? ((0x800U & vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl)
                                       ? 0U : ((0x400U 
                                                & vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl)
                                                ? 0U
                                                : vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata))
                                   : ((0x800U & vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl)
                                       ? ((0x400U & vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl)
                                           ? vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm
                                           : ((IData)(4U) 
                                              + vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc))
                                       : ((0x400U & vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl)
                                           ? vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata
                                           : vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result)))
                               : 0U)),32);
    bufp->fullCData(oldp+89,((7U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                    >> 0xaU))),3);
    bufp->fullBit(oldp+90,((1U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                  >> 0x10U))));
    bufp->fullIData(oldp+91,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause),32);
    bufp->fullCData(oldp+95,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+96,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_25030085_top__DOT__rs1_data),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_25030085_top__DOT__rs2_data),32);
    bufp->fullCData(oldp+99,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__rs1_reg),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__rs2_reg),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm_reg),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__ctrl_reg),21);
    bufp->fullBit(oldp+105,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))));
    bufp->fullBit(oldp+106,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
    bufp->fullBit(oldp+107,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
    bufp->fullCData(oldp+108,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state),2);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result),32);
    bufp->fullCData(oldp+110,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state),2);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst),32);
    bufp->fullBit(oldp+112,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid));
    bufp->fullBit(oldp+113,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak));
    bufp->fullCData(oldp+114,((0x7fU & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),7);
    bufp->fullCData(oldp+115,((7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+116,((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI),32);
    bufp->fullIData(oldp+119,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+120,((0xfffff000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),32);
    bufp->fullIData(oldp+121,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+122,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                     >> 7U)))))),32);
    bufp->fullBit(oldp+123,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemWrite));
    bufp->fullBit(oldp+124,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemRead));
    bufp->fullCData(oldp+125,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp),3);
    bufp->fullCData(oldp+126,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg),3);
    bufp->fullBit(oldp+127,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite));
    bufp->fullBit(oldp+128,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Branch));
    bufp->fullCData(oldp+129,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump),2);
    bufp->fullBit(oldp+130,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc));
    bufp->fullCData(oldp+131,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp),4);
    bufp->fullCData(oldp+132,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen),2);
    bufp->fullBit(oldp+133,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall));
    bufp->fullBit(oldp+134,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret));
    bufp->fullIData(oldp+135,((((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen) 
                                << 0x13U) | (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall) 
                                                 << 0x11U) 
                                                | (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite) 
                                                    << 0x10U) 
                                                   | (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump) 
                                                       << 0xeU) 
                                                      | (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Branch) 
                                                          << 0xdU) 
                                                         | (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemWrite) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemRead) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc))))))))))))),21);
    bufp->fullBit(oldp+136,(vlSelf->clk));
    bufp->fullBit(oldp+137,(vlSelf->rst));
    bufp->fullIData(oldp+138,(vlSelf->top_pc),32);
    bufp->fullIData(oldp+139,(vlSelf->top_inst),32);
    bufp->fullBit(oldp+140,(vlSelf->top_valid));
    bufp->fullBit(oldp+141,(vlSelf->top_ready));
    bufp->fullBit(oldp+142,(vlSelf->inst_done));
    bufp->fullIData(oldp+143,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc),32);
    bufp->fullIData(oldp+144,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
                                ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus
                                : ((0x305U == (0xfffU 
                                               & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
                                    ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec
                                    : ((0x341U == (0xfffU 
                                                   & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
                                        ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
                                            ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause
                                            : 0U))))),32);
    bufp->fullBit(oldp+145,((IData)(((0x80U == (0xf80U 
                                                & vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst)) 
                                     & (0x4000U == 
                                        (0xc000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__ctrl_reg))))));
    bufp->fullBit(oldp+146,((IData)(((0x80U == (0xf80U 
                                                & vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst)) 
                                     & (0x8000U == 
                                        (0xc000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__ctrl_reg))))));
    bufp->fullBit(oldp+147,((IData)(((0x8000U == (0xf8f80U 
                                                  & vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst)) 
                                     & (0x8000U == 
                                        (0xc000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__ctrl_reg))))));
    bufp->fullIData(oldp+148,(((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                             >> 0xeU)))
                                ? (vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm 
                                   + vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc)
                                : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                                 >> 0xeU)))
                                    ? (0xfffffffeU 
                                       & vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result)
                                    : ((0x2000U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                                        ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result
                                        : ((0x20000U 
                                            & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                                            ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec
                                            : ((0x40000U 
                                                & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                                                ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc
                                                : ((IData)(4U) 
                                                   + vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc))))))),32);
    bufp->fullBit(oldp+149,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register));
    bufp->fullBit(oldp+150,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display));
    bufp->fullIData(oldp+151,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i),32);
    bufp->fullIData(oldp+152,(0U),32);
    bufp->fullIData(oldp+153,(1U),32);
    bufp->fullIData(oldp+154,(2U),32);
    bufp->fullIData(oldp+155,(0x1800U),32);
    bufp->fullIData(oldp+156,(0x80U),32);
    bufp->fullIData(oldp+157,(8U),32);
    bufp->fullCData(oldp+158,(3U),7);
    bufp->fullCData(oldp+159,(0x23U),7);
    bufp->fullCData(oldp+160,(0x63U),7);
    bufp->fullCData(oldp+161,(0x6fU),7);
    bufp->fullCData(oldp+162,(0x67U),7);
    bufp->fullCData(oldp+163,(0x13U),7);
    bufp->fullCData(oldp+164,(0x33U),7);
    bufp->fullCData(oldp+165,(0x37U),7);
    bufp->fullCData(oldp+166,(0x17U),7);
    bufp->fullCData(oldp+167,(0x73U),7);
    bufp->fullCData(oldp+168,(0U),3);
    bufp->fullCData(oldp+169,(1U),3);
    bufp->fullCData(oldp+170,(2U),3);
    bufp->fullCData(oldp+171,(3U),3);
    bufp->fullCData(oldp+172,(4U),3);
    bufp->fullCData(oldp+173,(5U),3);
    bufp->fullCData(oldp+174,(6U),3);
    bufp->fullCData(oldp+175,(7U),3);
    bufp->fullCData(oldp+176,(0x20U),7);
    bufp->fullCData(oldp+177,(0U),7);
    bufp->fullCData(oldp+178,(0U),4);
    bufp->fullCData(oldp+179,(1U),4);
    bufp->fullCData(oldp+180,(2U),4);
    bufp->fullCData(oldp+181,(3U),4);
    bufp->fullCData(oldp+182,(4U),4);
    bufp->fullCData(oldp+183,(5U),4);
    bufp->fullCData(oldp+184,(6U),4);
    bufp->fullCData(oldp+185,(7U),4);
    bufp->fullCData(oldp+186,(8U),4);
    bufp->fullCData(oldp+187,(0xaU),4);
    bufp->fullCData(oldp+188,(9U),4);
    bufp->fullCData(oldp+189,(0U),2);
    bufp->fullCData(oldp+190,(1U),2);
    bufp->fullCData(oldp+191,(2U),2);
    bufp->fullSData(oldp+192,(0U),12);
    bufp->fullSData(oldp+193,(1U),12);
    bufp->fullSData(oldp+194,(0x302U),12);
    bufp->fullCData(oldp+195,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs1),5);
    bufp->fullCData(oldp+196,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs2),5);
    bufp->fullCData(oldp+197,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rd),5);
    bufp->fullIData(oldp+198,(3U),32);
    bufp->fullBit(oldp+199,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__has_data));
}
