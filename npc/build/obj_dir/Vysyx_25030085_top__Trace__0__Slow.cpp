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
    tracep->declBit(c+130,"clk", false,-1);
    tracep->declBit(c+131,"rst", false,-1);
    tracep->declBus(c+132,"top_pc", false,-1, 31,0);
    tracep->declBus(c+133,"top_inst", false,-1, 31,0);
    tracep->declBit(c+134,"top_valid", false,-1);
    tracep->declBit(c+135,"top_ready", false,-1);
    tracep->declBit(c+136,"inst_done", false,-1);
    tracep->pushNamePrefix("ysyx_25030085_top ");
    tracep->declBit(c+130,"clk", false,-1);
    tracep->declBit(c+131,"rst", false,-1);
    tracep->declBus(c+132,"top_pc", false,-1, 31,0);
    tracep->declBus(c+133,"top_inst", false,-1, 31,0);
    tracep->declBit(c+134,"top_valid", false,-1);
    tracep->declBit(c+135,"top_ready", false,-1);
    tracep->declBit(c+136,"inst_done", false,-1);
    tracep->declBus(c+132,"next_pc", false,-1, 31,0);
    tracep->declBit(c+84,"wb_done", false,-1);
    tracep->declBus(c+133,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+85,"if_id_pc", false,-1, 31,0);
    tracep->declBit(c+135,"id_if_ready", false,-1);
    tracep->declBit(c+134,"if_id_valid", false,-1);
    tracep->declBus(c+86,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+87,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+88,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+89,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+1,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+90,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+88,"id_ex_rs1", false,-1, 31,0);
    tracep->declBus(c+89,"id_ex_rs2", false,-1, 31,0);
    tracep->declBus(c+91,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+92,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+1,"id_ex_a5", false,-1, 31,0);
    tracep->declBus(c+93,"id_ex_ctrl", false,-1, 20,0);
    tracep->declBit(c+94,"id_ex_valid", false,-1);
    tracep->declBit(c+95,"ex_id_ready", false,-1);
    tracep->declBus(c+2,"ex_me_rd", false,-1, 4,0);
    tracep->declBus(c+137,"csr_data", false,-1, 31,0);
    tracep->declBus(c+3,"ex_me_ctrl", false,-1, 20,0);
    tracep->declBus(c+4,"ex_me_pc", false,-1, 31,0);
    tracep->declBus(c+5,"ex_me_imm", false,-1, 31,0);
    tracep->declBus(c+138,"ex_me_npc", false,-1, 31,0);
    tracep->declBus(c+6,"ex_me_rs2", false,-1, 31,0);
    tracep->declBus(c+96,"ex_me_alu", false,-1, 31,0);
    tracep->declBit(c+97,"ex_me_valid", false,-1);
    tracep->declBit(c+7,"me_ex_ready", false,-1);
    tracep->declBus(c+8,"me_wb_rd", false,-1, 4,0);
    tracep->declBus(c+9,"me_wb_ctrl", false,-1, 20,0);
    tracep->declBus(c+10,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+11,"me_wb_pc", false,-1, 31,0);
    tracep->declBus(c+12,"me_wb_imm", false,-1, 31,0);
    tracep->declBus(c+13,"me_wb_alu", false,-1, 31,0);
    tracep->declBus(c+14,"me_wb_npc", false,-1, 31,0);
    tracep->declBit(c+15,"me_wb_valid", false,-1);
    tracep->declBit(c+98,"wb_me_ready", false,-1);
    tracep->declBit(c+16,"reg_wen", false,-1);
    tracep->declBus(c+17,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+18,"reg_waddr", false,-1, 4,0);
    tracep->declBit(c+99,"is_jar_call", false,-1);
    tracep->declBit(c+100,"is_jalr_call", false,-1);
    tracep->declBit(c+101,"is_jalr_ret", false,-1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+130,"clk", false,-1);
    tracep->declBit(c+131,"rst", false,-1);
    tracep->declBit(c+94,"in_valid", false,-1);
    tracep->declBus(c+1,"in_a5", false,-1, 31,0);
    tracep->declBus(c+88,"in_rs1_data", false,-1, 31,0);
    tracep->declBus(c+89,"in_rs2_data", false,-1, 31,0);
    tracep->declBus(c+93,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+92,"in_imm", false,-1, 31,0);
    tracep->declBus(c+90,"in_rd", false,-1, 4,0);
    tracep->declBus(c+91,"in_pc", false,-1, 31,0);
    tracep->declBit(c+95,"in_ready", false,-1);
    tracep->declBit(c+97,"out_valid", false,-1);
    tracep->declBus(c+138,"out_next_pc", false,-1, 31,0);
    tracep->declBus(c+96,"out_Alu_Result", false,-1, 31,0);
    tracep->declBus(c+6,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+3,"out_ctrl", false,-1, 20,0);
    tracep->declBus(c+137,"csr_data", false,-1, 31,0);
    tracep->declBus(c+2,"rd_out", false,-1, 4,0);
    tracep->declBus(c+5,"imm_out", false,-1, 31,0);
    tracep->declBus(c+4,"pc_out", false,-1, 31,0);
    tracep->declBit(c+7,"out_ready", false,-1);
    tracep->declBus(c+142,"IDLE", false,-1, 31,0);
    tracep->declBus(c+143,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+144,"WAIT", false,-1, 31,0);
    tracep->declBus(c+102,"state", false,-1, 1,0);
    tracep->declBus(c+2,"rd", false,-1, 4,0);
    tracep->declBus(c+19,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+6,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+4,"pc", false,-1, 31,0);
    tracep->declBus(c+5,"imm", false,-1, 31,0);
    tracep->declBus(c+20,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+3,"ctrl", false,-1, 20,0);
    tracep->declBus(c+21,"B", false,-1, 31,0);
    tracep->declBus(c+22,"AluOp", false,-1, 3,0);
    tracep->declBit(c+23,"ALUSrc", false,-1);
    tracep->declBus(c+24,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+25,"is_ecall", false,-1);
    tracep->declBit(c+26,"is_mret", false,-1);
    tracep->declBit(c+27,"Branch", false,-1);
    tracep->declBus(c+28,"Jump", false,-1, 1,0);
    tracep->declBus(c+96,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+138,"next_pc", false,-1, 31,0);
    tracep->declBus(c+80,"mtvec", false,-1, 31,0);
    tracep->declBus(c+81,"mepc", false,-1, 31,0);
    tracep->pushNamePrefix("csr_regfile_init ");
    tracep->declBit(c+130,"clk", false,-1);
    tracep->declBit(c+131,"rst", false,-1);
    tracep->declBus(c+4,"pc", false,-1, 31,0);
    tracep->declBus(c+20,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+25,"is_ecall", false,-1);
    tracep->declBit(c+26,"is_mret", false,-1);
    tracep->declBus(c+24,"csr_wen", false,-1, 1,0);
    tracep->declBus(c+29,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+19,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+137,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+80,"mtvec_out", false,-1, 31,0);
    tracep->declBus(c+81,"mepc_out", false,-1, 31,0);
    tracep->declBus(c+82,"mstatus", false,-1, 31,0);
    tracep->declBus(c+80,"mtvec", false,-1, 31,0);
    tracep->declBus(c+81,"mepc", false,-1, 31,0);
    tracep->declBus(c+83,"mcause", false,-1, 31,0);
    tracep->declBus(c+137,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+145,"MSTATUS_MPP_MASK", false,-1, 31,0);
    tracep->declBus(c+146,"MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+147,"MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+130,"clk", false,-1);
    tracep->declBit(c+131,"rst", false,-1);
    tracep->declBit(c+134,"in_valid", false,-1);
    tracep->declBus(c+133,"in_inst", false,-1, 31,0);
    tracep->declBus(c+85,"in_pc", false,-1, 31,0);
    tracep->declBit(c+135,"in_ready", false,-1);
    tracep->declBus(c+86,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+87,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+88,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+89,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+1,"in_reg_a5", false,-1, 31,0);
    tracep->declBit(c+94,"out_valid", false,-1);
    tracep->declBus(c+91,"pc_out", false,-1, 31,0);
    tracep->declBus(c+88,"out_rs1_data", false,-1, 31,0);
    tracep->declBus(c+89,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+93,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+92,"imm_out", false,-1, 31,0);
    tracep->declBus(c+1,"reg_a5_out", false,-1, 31,0);
    tracep->declBus(c+90,"rd_out", false,-1, 4,0);
    tracep->declBit(c+95,"out_ready", false,-1);
    tracep->declBus(c+142,"IDLE", false,-1, 31,0);
    tracep->declBus(c+143,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+144,"WAIT", false,-1, 31,0);
    tracep->declBus(c+103,"state", false,-1, 1,0);
    tracep->declBus(c+104,"inst", false,-1, 31,0);
    tracep->declBus(c+91,"pc", false,-1, 31,0);
    tracep->declBit(c+105,"invalid", false,-1);
    tracep->declBit(c+106,"is_ebreak", false,-1);
    tracep->declBus(c+107,"opcode", false,-1, 6,0);
    tracep->declBus(c+108,"func3", false,-1, 2,0);
    tracep->declBus(c+109,"func7", false,-1, 6,0);
    tracep->declBus(c+92,"imm", false,-1, 31,0);
    tracep->declBus(c+110,"immI", false,-1, 31,0);
    tracep->declBus(c+111,"immJ", false,-1, 31,0);
    tracep->declBus(c+112,"immU", false,-1, 31,0);
    tracep->declBus(c+113,"immS", false,-1, 31,0);
    tracep->declBus(c+114,"immB", false,-1, 31,0);
    tracep->declBus(c+90,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+115,"MemWrite", false,-1);
    tracep->declBit(c+116,"MemRead", false,-1);
    tracep->declBus(c+117,"MemOp", false,-1, 2,0);
    tracep->declBus(c+118,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+119,"RegWrite", false,-1);
    tracep->declBit(c+120,"Branch", false,-1);
    tracep->declBus(c+121,"Jump", false,-1, 1,0);
    tracep->declBit(c+122,"ALUSrc", false,-1);
    tracep->declBus(c+123,"AluOp", false,-1, 3,0);
    tracep->declBus(c+124,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+125,"is_ecall", false,-1);
    tracep->declBit(c+126,"is_mret", false,-1);
    tracep->declBus(c+93,"ctrl_bus", false,-1, 20,0);
    tracep->declBus(c+148,"OP_LOAD", false,-1, 6,0);
    tracep->declBus(c+149,"OP_STORE", false,-1, 6,0);
    tracep->declBus(c+150,"OP_BRANCH", false,-1, 6,0);
    tracep->declBus(c+151,"OP_JAL", false,-1, 6,0);
    tracep->declBus(c+152,"OP_JALR", false,-1, 6,0);
    tracep->declBus(c+153,"OP_OP_IMM", false,-1, 6,0);
    tracep->declBus(c+154,"OP_OP", false,-1, 6,0);
    tracep->declBus(c+155,"OP_LUI", false,-1, 6,0);
    tracep->declBus(c+156,"OP_AUIPC", false,-1, 6,0);
    tracep->declBus(c+157,"OP_SYSTEM", false,-1, 6,0);
    tracep->declBus(c+158,"F3_ADD_SUB", false,-1, 2,0);
    tracep->declBus(c+159,"F3_SLL", false,-1, 2,0);
    tracep->declBus(c+160,"F3_SLT", false,-1, 2,0);
    tracep->declBus(c+161,"F3_SLTU", false,-1, 2,0);
    tracep->declBus(c+162,"F3_XOR", false,-1, 2,0);
    tracep->declBus(c+163,"F3_SR", false,-1, 2,0);
    tracep->declBus(c+164,"F3_OR", false,-1, 2,0);
    tracep->declBus(c+165,"F3_AND", false,-1, 2,0);
    tracep->declBus(c+166,"F7_SUB", false,-1, 6,0);
    tracep->declBus(c+166,"F7_SRA", false,-1, 6,0);
    tracep->declBus(c+167,"F7_DEFAULT", false,-1, 6,0);
    tracep->declBus(c+168,"ALU_ADD", false,-1, 3,0);
    tracep->declBus(c+169,"ALU_SLL", false,-1, 3,0);
    tracep->declBus(c+170,"ALU_SLT", false,-1, 3,0);
    tracep->declBus(c+171,"ALU_SLTU", false,-1, 3,0);
    tracep->declBus(c+172,"ALU_XOR", false,-1, 3,0);
    tracep->declBus(c+173,"ALU_SRA", false,-1, 3,0);
    tracep->declBus(c+174,"ALU_SRL", false,-1, 3,0);
    tracep->declBus(c+175,"ALU_OR", false,-1, 3,0);
    tracep->declBus(c+176,"ALU_AND", false,-1, 3,0);
    tracep->declBus(c+177,"ALU_SUB", false,-1, 3,0);
    tracep->declBus(c+178,"ALU_PCADD", false,-1, 3,0);
    tracep->declBus(c+179,"JUMP_NONE", false,-1, 1,0);
    tracep->declBus(c+180,"JUMP_JAL", false,-1, 1,0);
    tracep->declBus(c+181,"JUMP_JALR", false,-1, 1,0);
    tracep->declBus(c+158,"MTR_ALU", false,-1, 2,0);
    tracep->declBus(c+159,"MTR_MEM", false,-1, 2,0);
    tracep->declBus(c+160,"MTR_PCP4", false,-1, 2,0);
    tracep->declBus(c+161,"MTR_IMM", false,-1, 2,0);
    tracep->declBus(c+162,"MTR_CSR", false,-1, 2,0);
    tracep->declBus(c+158,"MEM_B", false,-1, 2,0);
    tracep->declBus(c+159,"MEM_H", false,-1, 2,0);
    tracep->declBus(c+160,"MEM_W", false,-1, 2,0);
    tracep->declBus(c+162,"MEM_BU", false,-1, 2,0);
    tracep->declBus(c+163,"MEM_HU", false,-1, 2,0);
    tracep->declBus(c+179,"CSR_NONE", false,-1, 1,0);
    tracep->declBus(c+180,"CSR_WRITE", false,-1, 1,0);
    tracep->declBus(c+181,"CSR_SET", false,-1, 1,0);
    tracep->declBus(c+182,"ECALL_CODE", false,-1, 11,0);
    tracep->declBus(c+183,"EBREAK_CODE", false,-1, 11,0);
    tracep->declBus(c+184,"MRET_CODE", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+130,"clk", false,-1);
    tracep->declBit(c+131,"rst", false,-1);
    tracep->declBit(c+84,"wb_done", false,-1);
    tracep->declBus(c+132,"next_pc", false,-1, 31,0);
    tracep->declBit(c+134,"out_valid", false,-1);
    tracep->declBus(c+133,"inst", false,-1, 31,0);
    tracep->declBus(c+85,"pc", false,-1, 31,0);
    tracep->declBit(c+135,"out_ready", false,-1);
    tracep->declBus(c+85,"current_pc", false,-1, 31,0);
    tracep->declBus(c+127,"if_inst", false,-1, 31,0);
    tracep->declBit(c+128,"inst_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+130,"clk", false,-1);
    tracep->declBit(c+131,"rst", false,-1);
    tracep->declBit(c+97,"in_valid", false,-1);
    tracep->declBus(c+3,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+6,"in_sram_wdata", false,-1, 31,0);
    tracep->declBus(c+96,"in_sram_addr", false,-1, 31,0);
    tracep->declBus(c+2,"in_rd", false,-1, 4,0);
    tracep->declBus(c+5,"in_imm", false,-1, 31,0);
    tracep->declBus(c+138,"in_npc", false,-1, 31,0);
    tracep->declBus(c+4,"in_pc", false,-1, 31,0);
    tracep->declBit(c+7,"in_ready", false,-1);
    tracep->declBit(c+15,"out_valid", false,-1);
    tracep->declBus(c+10,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+9,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+12,"imm_out", false,-1, 31,0);
    tracep->declBus(c+14,"npc_out", false,-1, 31,0);
    tracep->declBus(c+11,"pc_out", false,-1, 31,0);
    tracep->declBus(c+8,"rd_out", false,-1, 4,0);
    tracep->declBus(c+13,"alu_result", false,-1, 31,0);
    tracep->declBit(c+98,"out_ready", false,-1);
    tracep->declBus(c+142,"IDLE", false,-1, 31,0);
    tracep->declBus(c+143,"STORE", false,-1, 31,0);
    tracep->declBus(c+144,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+30,"state", false,-1, 1,0);
    tracep->declBit(c+31,"has_data", false,-1);
    tracep->declBus(c+9,"ctrl", false,-1, 20,0);
    tracep->declBus(c+8,"rd", false,-1, 4,0);
    tracep->declBus(c+32,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+13,"sram_addr", false,-1, 31,0);
    tracep->declBus(c+11,"pc", false,-1, 31,0);
    tracep->declBus(c+12,"imm", false,-1, 31,0);
    tracep->declBus(c+14,"npc", false,-1, 31,0);
    tracep->declBit(c+33,"MemWrite", false,-1);
    tracep->declBit(c+34,"MemRead", false,-1);
    tracep->declBus(c+35,"MemOp", false,-1, 2,0);
    tracep->declBus(c+10,"ReadData", false,-1, 31,0);
    tracep->declBus(c+36,"rdata", false,-1, 31,0);
    tracep->declBus(c+37,"offset", false,-1, 1,0);
    tracep->declBus(c+38,"aligned_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+130,"clk", false,-1);
    tracep->declBit(c+131,"rst", false,-1);
    tracep->declBus(c+86,"reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+87,"reg_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+88,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+89,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+16,"reg_wen", false,-1);
    tracep->declBus(c+18,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+17,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+1,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+185,"rs1", false,-1, 4,0);
    tracep->declBus(c+186,"rs2", false,-1, 4,0);
    tracep->declBus(c+187,"rd", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+39+i*1,"register", true,(i+0), 31,0);
    }
    tracep->declBit(c+139,"is_info_register", false,-1);
    tracep->declBit(c+140,"is_en_display", false,-1);
    tracep->declBus(c+141,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+71,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+130,"clk", false,-1);
    tracep->declBit(c+131,"rst", false,-1);
    tracep->declBit(c+15,"in_valid", false,-1);
    tracep->declBus(c+13,"in_alu_result", false,-1, 31,0);
    tracep->declBus(c+10,"in_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+14,"in_npc", false,-1, 31,0);
    tracep->declBus(c+11,"in_pc", false,-1, 31,0);
    tracep->declBus(c+12,"in_imm", false,-1, 31,0);
    tracep->declBus(c+9,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+137,"in_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+8,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+98,"in_ready", false,-1);
    tracep->declBit(c+84,"out_valid", false,-1);
    tracep->declBus(c+132,"next_pc", false,-1, 31,0);
    tracep->declBit(c+16,"reg_wen", false,-1);
    tracep->declBus(c+18,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+17,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+142,"IDLE", false,-1, 31,0);
    tracep->declBus(c+143,"CHOOSE", false,-1, 31,0);
    tracep->declBus(c+144,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+188,"DONE", false,-1, 31,0);
    tracep->declBus(c+129,"state", false,-1, 1,0);
    tracep->declBit(c+189,"has_data", false,-1);
    tracep->declBus(c+72,"ctrl", false,-1, 20,0);
    tracep->declBus(c+18,"rd", false,-1, 4,0);
    tracep->declBus(c+73,"npc", false,-1, 31,0);
    tracep->declBus(c+74,"pc", false,-1, 31,0);
    tracep->declBus(c+75,"imm", false,-1, 31,0);
    tracep->declBus(c+76,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+77,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+78,"alu_result", false,-1, 31,0);
    tracep->declBit(c+190,"wen", false,-1);
    tracep->declBus(c+17,"wb_data", false,-1, 31,0);
    tracep->declBus(c+79,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+16,"RegWrite", false,-1);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                            [0xfU]),32);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rd),5);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl),21);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data),32);
    bufp->fullBit(oldp+7,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__mem__DOT__state))));
    bufp->fullCData(oldp+8,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__rd),5);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl),21);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__ReadData),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__pc),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__imm),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__npc),32);
    bufp->fullBit(oldp+15,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__mem__DOT__state))));
    bufp->fullBit(oldp+16,((1U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                  >> 0x10U))));
    bufp->fullIData(oldp+17,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wb_data),32);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd),5);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__reg_a5),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__B),32);
    bufp->fullCData(oldp+22,((0xfU & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                      >> 1U))),4);
    bufp->fullBit(oldp+23,((1U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)));
    bufp->fullCData(oldp+24,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                    >> 0x13U))),2);
    bufp->fullBit(oldp+25,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                  >> 0x11U))));
    bufp->fullBit(oldp+26,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                  >> 0x12U))));
    bufp->fullBit(oldp+27,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                  >> 0xdU))));
    bufp->fullCData(oldp+28,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                    >> 0xeU))),2);
    bufp->fullSData(oldp+29,((0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm)),12);
    bufp->fullCData(oldp+30,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__state),2);
    bufp->fullBit(oldp+31,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__has_data));
    bufp->fullIData(oldp+32,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_wdata),32);
    bufp->fullBit(oldp+33,((1U & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl 
                                  >> 6U))));
    bufp->fullBit(oldp+34,((1U & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl 
                                  >> 5U))));
    bufp->fullCData(oldp+35,((7U & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl 
                                    >> 7U))),3);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata),32);
    bufp->fullCData(oldp+37,((3U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr)),2);
    bufp->fullIData(oldp+38,((0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr)),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[1]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[2]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[3]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[4]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[5]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[6]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[7]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[8]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[9]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[10]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[11]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[12]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[13]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[14]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[15]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[16]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[17]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[18]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[19]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[20]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[21]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[22]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[23]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[24]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[25]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[26]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[27]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[28]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[29]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[30]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[31]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl),21);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result),32);
    bufp->fullCData(oldp+79,((7U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                    >> 0xaU))),3);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause),32);
    bufp->fullBit(oldp+84,((3U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))));
    bufp->fullIData(oldp+85,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc),32);
    bufp->fullCData(oldp+86,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+87,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_25030085_top__DOT__rs1_data),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_25030085_top__DOT__rs2_data),32);
    bufp->fullCData(oldp+90,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm),32);
    bufp->fullIData(oldp+93,((((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen) 
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
    bufp->fullBit(oldp+94,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))));
    bufp->fullBit(oldp+95,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
    bufp->fullIData(oldp+96,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result),32);
    bufp->fullBit(oldp+97,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
    bufp->fullBit(oldp+98,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))));
    bufp->fullBit(oldp+99,((IData)(((0x80U == (0xf80U 
                                               & vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst)) 
                                    & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullBit(oldp+100,((IData)(((0x80U == (0xf80U 
                                                & vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst)) 
                                     & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullBit(oldp+101,((IData)(((0x8000U == (0xf8f80U 
                                                  & vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst)) 
                                     & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullCData(oldp+102,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state),2);
    bufp->fullCData(oldp+103,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state),2);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst),32);
    bufp->fullBit(oldp+105,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid));
    bufp->fullBit(oldp+106,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak));
    bufp->fullCData(oldp+107,((0x7fU & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),7);
    bufp->fullCData(oldp+108,((7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+109,((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI),32);
    bufp->fullIData(oldp+111,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+112,((0xfffff000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),32);
    bufp->fullIData(oldp+113,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+114,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
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
    bufp->fullBit(oldp+115,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemWrite));
    bufp->fullBit(oldp+116,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemRead));
    bufp->fullCData(oldp+117,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp),3);
    bufp->fullCData(oldp+118,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg),3);
    bufp->fullBit(oldp+119,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite));
    bufp->fullBit(oldp+120,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Branch));
    bufp->fullCData(oldp+121,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump),2);
    bufp->fullBit(oldp+122,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc));
    bufp->fullCData(oldp+123,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp),4);
    bufp->fullCData(oldp+124,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen),2);
    bufp->fullBit(oldp+125,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall));
    bufp->fullBit(oldp+126,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret));
    bufp->fullIData(oldp+127,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst),32);
    bufp->fullBit(oldp+128,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_valid));
    bufp->fullCData(oldp+129,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state),2);
    bufp->fullBit(oldp+130,(vlSelf->clk));
    bufp->fullBit(oldp+131,(vlSelf->rst));
    bufp->fullIData(oldp+132,(vlSelf->top_pc),32);
    bufp->fullIData(oldp+133,(vlSelf->top_inst),32);
    bufp->fullBit(oldp+134,(vlSelf->top_valid));
    bufp->fullBit(oldp+135,(vlSelf->top_ready));
    bufp->fullBit(oldp+136,(vlSelf->inst_done));
    bufp->fullIData(oldp+137,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
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
    bufp->fullIData(oldp+138,(((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
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
    bufp->fullBit(oldp+139,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register));
    bufp->fullBit(oldp+140,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display));
    bufp->fullIData(oldp+141,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i),32);
    bufp->fullIData(oldp+142,(0U),32);
    bufp->fullIData(oldp+143,(1U),32);
    bufp->fullIData(oldp+144,(2U),32);
    bufp->fullIData(oldp+145,(0x1800U),32);
    bufp->fullIData(oldp+146,(0x80U),32);
    bufp->fullIData(oldp+147,(8U),32);
    bufp->fullCData(oldp+148,(3U),7);
    bufp->fullCData(oldp+149,(0x23U),7);
    bufp->fullCData(oldp+150,(0x63U),7);
    bufp->fullCData(oldp+151,(0x6fU),7);
    bufp->fullCData(oldp+152,(0x67U),7);
    bufp->fullCData(oldp+153,(0x13U),7);
    bufp->fullCData(oldp+154,(0x33U),7);
    bufp->fullCData(oldp+155,(0x37U),7);
    bufp->fullCData(oldp+156,(0x17U),7);
    bufp->fullCData(oldp+157,(0x73U),7);
    bufp->fullCData(oldp+158,(0U),3);
    bufp->fullCData(oldp+159,(1U),3);
    bufp->fullCData(oldp+160,(2U),3);
    bufp->fullCData(oldp+161,(3U),3);
    bufp->fullCData(oldp+162,(4U),3);
    bufp->fullCData(oldp+163,(5U),3);
    bufp->fullCData(oldp+164,(6U),3);
    bufp->fullCData(oldp+165,(7U),3);
    bufp->fullCData(oldp+166,(0x20U),7);
    bufp->fullCData(oldp+167,(0U),7);
    bufp->fullCData(oldp+168,(0U),4);
    bufp->fullCData(oldp+169,(1U),4);
    bufp->fullCData(oldp+170,(2U),4);
    bufp->fullCData(oldp+171,(3U),4);
    bufp->fullCData(oldp+172,(4U),4);
    bufp->fullCData(oldp+173,(5U),4);
    bufp->fullCData(oldp+174,(6U),4);
    bufp->fullCData(oldp+175,(7U),4);
    bufp->fullCData(oldp+176,(8U),4);
    bufp->fullCData(oldp+177,(0xaU),4);
    bufp->fullCData(oldp+178,(9U),4);
    bufp->fullCData(oldp+179,(0U),2);
    bufp->fullCData(oldp+180,(1U),2);
    bufp->fullCData(oldp+181,(2U),2);
    bufp->fullSData(oldp+182,(0U),12);
    bufp->fullSData(oldp+183,(1U),12);
    bufp->fullSData(oldp+184,(0x302U),12);
    bufp->fullCData(oldp+185,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs1),5);
    bufp->fullCData(oldp+186,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs2),5);
    bufp->fullCData(oldp+187,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rd),5);
    bufp->fullIData(oldp+188,(3U),32);
    bufp->fullBit(oldp+189,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__has_data));
    bufp->fullBit(oldp+190,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wen));
}
