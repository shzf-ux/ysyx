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
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"rst", false,-1);
    tracep->declBus(c+184,"top_pc", false,-1, 31,0);
    tracep->declBus(c+185,"top_inst", false,-1, 31,0);
    tracep->declBit(c+186,"top_valid", false,-1);
    tracep->declBit(c+187,"top_ready", false,-1);
    tracep->declBit(c+188,"inst_done", false,-1);
    tracep->pushNamePrefix("ysyx_25030085_top ");
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"rst", false,-1);
    tracep->declBus(c+184,"top_pc", false,-1, 31,0);
    tracep->declBus(c+185,"top_inst", false,-1, 31,0);
    tracep->declBit(c+186,"top_valid", false,-1);
    tracep->declBit(c+187,"top_ready", false,-1);
    tracep->declBit(c+188,"inst_done", false,-1);
    tracep->declBus(c+184,"next_pc", false,-1, 31,0);
    tracep->declBit(c+201,"wb_done", false,-1);
    tracep->declBit(c+7,"reg_wresp", false,-1);
    tracep->declBit(c+8,"wb_valid", false,-1);
    tracep->declBus(c+132,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+133,"if_id_pc", false,-1, 31,0);
    tracep->declBit(c+187,"id_if_ready", false,-1);
    tracep->declBit(c+134,"if_id_valid", false,-1);
    tracep->declBus(c+135,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+136,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+137,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+138,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+9,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+139,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+137,"id_ex_rs1", false,-1, 31,0);
    tracep->declBus(c+138,"id_ex_rs2", false,-1, 31,0);
    tracep->declBus(c+140,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+141,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+9,"id_ex_a5", false,-1, 31,0);
    tracep->declBus(c+142,"id_ex_ctrl", false,-1, 20,0);
    tracep->declBit(c+143,"id_ex_valid", false,-1);
    tracep->declBit(c+144,"ex_id_ready", false,-1);
    tracep->declBus(c+10,"ex_me_rd", false,-1, 4,0);
    tracep->declBus(c+189,"csr_data", false,-1, 31,0);
    tracep->declBus(c+11,"ex_me_ctrl", false,-1, 20,0);
    tracep->declBus(c+12,"ex_me_pc", false,-1, 31,0);
    tracep->declBus(c+13,"ex_me_imm", false,-1, 31,0);
    tracep->declBus(c+190,"ex_me_npc", false,-1, 31,0);
    tracep->declBus(c+14,"ex_me_rs2", false,-1, 31,0);
    tracep->declBus(c+145,"ex_me_alu", false,-1, 31,0);
    tracep->declBit(c+146,"ex_me_valid", false,-1);
    tracep->declBit(c+15,"me_ex_ready", false,-1);
    tracep->declBus(c+16,"me_wb_rd", false,-1, 4,0);
    tracep->declBus(c+147,"me_wb_ctrl", false,-1, 20,0);
    tracep->declBus(c+17,"me_wb_rdata", false,-1, 31,0);
    tracep->declBus(c+18,"me_wb_pc", false,-1, 31,0);
    tracep->declBus(c+19,"me_wb_imm", false,-1, 31,0);
    tracep->declBus(c+20,"me_wb_alu", false,-1, 31,0);
    tracep->declBus(c+21,"me_wb_npc", false,-1, 31,0);
    tracep->declBit(c+22,"me_wb_valid", false,-1);
    tracep->declBit(c+23,"wb_me_ready", false,-1);
    tracep->declBit(c+24,"reg_wen", false,-1);
    tracep->declBus(c+25,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+26,"reg_waddr", false,-1, 4,0);
    tracep->declBit(c+91,"if_axi4_arvalid", false,-1);
    tracep->declBit(c+117,"if_axi4_arready", false,-1);
    tracep->declBus(c+1,"if_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+118,"if_axi4_rvalid", false,-1);
    tracep->declBit(c+92,"if_axi4_rready", false,-1);
    tracep->declBus(c+119,"if_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+120,"if_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+93,"ls_axi4_arvalid", false,-1);
    tracep->declBit(c+121,"ls_axi4_arready", false,-1);
    tracep->declBus(c+2,"ls_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+122,"ls_axi4_rvalid", false,-1);
    tracep->declBit(c+94,"ls_axi4_rready", false,-1);
    tracep->declBus(c+123,"ls_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+124,"ls_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+125,"arb_mem_axi4_arvalid", false,-1);
    tracep->declBit(c+3,"arb_mem_axi4_arready", false,-1);
    tracep->declBus(c+126,"arb_mem_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+4,"arb_mem_axi4_rvalid", false,-1);
    tracep->declBit(c+127,"arb_mem_axi4_rready", false,-1);
    tracep->declBus(c+5,"arb_mem_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+6,"arb_mem_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+95,"ls_axi4_awvalid", false,-1);
    tracep->declBit(c+96,"ls_axi4_awready", false,-1);
    tracep->declBus(c+97,"ls_axi4_awaddr", false,-1, 31,0);
    tracep->declBit(c+98,"ls_axi4_wvalid", false,-1);
    tracep->declBit(c+99,"ls_axi4_wready", false,-1);
    tracep->declBus(c+100,"ls_axi4_wdata", false,-1, 31,0);
    tracep->declBus(c+101,"ls_axi4_wstrb", false,-1, 3,0);
    tracep->declBit(c+102,"ls_axi4_bvalid", false,-1);
    tracep->declBit(c+103,"ls_axi4_bready", false,-1);
    tracep->declBus(c+104,"ls_axi4_bresp", false,-1, 1,0);
    tracep->declBit(c+27,"if_req", false,-1);
    tracep->declBus(c+28,"if_addr", false,-1, 31,0);
    tracep->declBus(c+105,"biu_rdata_if", false,-1, 31,0);
    tracep->declBus(c+106,"biu_rresp_if", false,-1, 1,0);
    tracep->declBit(c+107,"biu_ready_if", false,-1);
    tracep->declBit(c+148,"lsu_req", false,-1);
    tracep->declBit(c+149,"lsu_wwe", false,-1);
    tracep->declBit(c+150,"lsu_rwe", false,-1);
    tracep->declBus(c+29,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+151,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+152,"lsu_strb", false,-1, 3,0);
    tracep->declBit(c+108,"biu_valid_ls", false,-1);
    tracep->declBus(c+109,"biu_rresp_ls", false,-1, 1,0);
    tracep->declBus(c+110,"biu_wresp_ls", false,-1, 1,0);
    tracep->declBus(c+111,"biu_rdata_ls", false,-1, 31,0);
    tracep->declBit(c+153,"is_jar_call", false,-1);
    tracep->declBit(c+154,"is_jalr_call", false,-1);
    tracep->declBit(c+155,"is_jalr_ret", false,-1);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"rst", false,-1);
    tracep->declBit(c+91,"m1_arvalid", false,-1);
    tracep->declBit(c+117,"m1_arready", false,-1);
    tracep->declBus(c+1,"m1_araddr", false,-1, 31,0);
    tracep->declBit(c+118,"m1_rvalid", false,-1);
    tracep->declBit(c+92,"m1_rready", false,-1);
    tracep->declBus(c+119,"m1_rdata", false,-1, 31,0);
    tracep->declBus(c+120,"m1_rresp", false,-1, 1,0);
    tracep->declBit(c+93,"m2_arvalid", false,-1);
    tracep->declBit(c+121,"m2_arready", false,-1);
    tracep->declBus(c+2,"m2_araddr", false,-1, 31,0);
    tracep->declBit(c+122,"m2_rvalid", false,-1);
    tracep->declBit(c+94,"m2_rready", false,-1);
    tracep->declBus(c+123,"m2_rdata", false,-1, 31,0);
    tracep->declBus(c+124,"m2_rresp", false,-1, 1,0);
    tracep->declBit(c+125,"s_arvalid", false,-1);
    tracep->declBit(c+3,"s_arready", false,-1);
    tracep->declBus(c+126,"s_araddr", false,-1, 31,0);
    tracep->declBit(c+4,"s_rvalid", false,-1);
    tracep->declBit(c+127,"s_rready", false,-1);
    tracep->declBus(c+5,"s_rdata", false,-1, 31,0);
    tracep->declBus(c+6,"s_rresp", false,-1, 1,0);
    tracep->declBus(c+202,"IDLE", false,-1, 31,0);
    tracep->declBus(c+203,"IF_MASTER", false,-1, 31,0);
    tracep->declBus(c+204,"LS_MASTER", false,-1, 31,0);
    tracep->declBus(c+30,"state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"rst", false,-1);
    tracep->declBit(c+143,"in_valid", false,-1);
    tracep->declBus(c+9,"in_a5", false,-1, 31,0);
    tracep->declBus(c+137,"in_rs1_data", false,-1, 31,0);
    tracep->declBus(c+138,"in_rs2_data", false,-1, 31,0);
    tracep->declBus(c+142,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+141,"in_imm", false,-1, 31,0);
    tracep->declBus(c+139,"in_rd", false,-1, 4,0);
    tracep->declBus(c+140,"in_pc", false,-1, 31,0);
    tracep->declBit(c+144,"in_ready", false,-1);
    tracep->declBit(c+146,"out_valid", false,-1);
    tracep->declBus(c+190,"out_next_pc", false,-1, 31,0);
    tracep->declBus(c+145,"out_Alu_Result", false,-1, 31,0);
    tracep->declBus(c+14,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+11,"out_ctrl", false,-1, 20,0);
    tracep->declBus(c+189,"csr_data", false,-1, 31,0);
    tracep->declBus(c+10,"rd_out", false,-1, 4,0);
    tracep->declBus(c+13,"imm_out", false,-1, 31,0);
    tracep->declBus(c+12,"pc_out", false,-1, 31,0);
    tracep->declBit(c+15,"out_ready", false,-1);
    tracep->declBus(c+202,"IDLE", false,-1, 31,0);
    tracep->declBus(c+203,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+204,"WAIT", false,-1, 31,0);
    tracep->declBus(c+156,"state", false,-1, 1,0);
    tracep->declBus(c+10,"rd", false,-1, 4,0);
    tracep->declBus(c+31,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+14,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+12,"pc", false,-1, 31,0);
    tracep->declBus(c+13,"imm", false,-1, 31,0);
    tracep->declBus(c+32,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+11,"ctrl", false,-1, 20,0);
    tracep->declBus(c+33,"B", false,-1, 31,0);
    tracep->declBus(c+34,"AluOp", false,-1, 3,0);
    tracep->declBit(c+35,"ALUSrc", false,-1);
    tracep->declBus(c+36,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+37,"is_ecall", false,-1);
    tracep->declBit(c+38,"is_mret", false,-1);
    tracep->declBit(c+39,"Branch", false,-1);
    tracep->declBus(c+40,"Jump", false,-1, 1,0);
    tracep->declBus(c+145,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+190,"next_pc", false,-1, 31,0);
    tracep->declBus(c+128,"mtvec", false,-1, 31,0);
    tracep->declBus(c+129,"mepc", false,-1, 31,0);
    tracep->pushNamePrefix("csr_regfile_init ");
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"rst", false,-1);
    tracep->declBus(c+12,"pc", false,-1, 31,0);
    tracep->declBus(c+32,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+37,"is_ecall", false,-1);
    tracep->declBit(c+38,"is_mret", false,-1);
    tracep->declBus(c+36,"csr_wen", false,-1, 1,0);
    tracep->declBus(c+41,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+31,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+189,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+128,"mtvec_out", false,-1, 31,0);
    tracep->declBus(c+129,"mepc_out", false,-1, 31,0);
    tracep->declBus(c+130,"mstatus", false,-1, 31,0);
    tracep->declBus(c+128,"mtvec", false,-1, 31,0);
    tracep->declBus(c+129,"mepc", false,-1, 31,0);
    tracep->declBus(c+131,"mcause", false,-1, 31,0);
    tracep->declBus(c+189,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+205,"MSTATUS_MPP_MASK", false,-1, 31,0);
    tracep->declBus(c+206,"MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+207,"MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"rst", false,-1);
    tracep->declBit(c+134,"in_valid", false,-1);
    tracep->declBus(c+132,"in_inst", false,-1, 31,0);
    tracep->declBus(c+133,"in_pc", false,-1, 31,0);
    tracep->declBit(c+187,"in_ready", false,-1);
    tracep->declBus(c+135,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+136,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+137,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+138,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+9,"in_reg_a5", false,-1, 31,0);
    tracep->declBit(c+143,"out_valid", false,-1);
    tracep->declBus(c+140,"pc_out", false,-1, 31,0);
    tracep->declBus(c+137,"out_rs1_data", false,-1, 31,0);
    tracep->declBus(c+138,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+142,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+141,"imm_out", false,-1, 31,0);
    tracep->declBus(c+9,"reg_a5_out", false,-1, 31,0);
    tracep->declBus(c+139,"rd_out", false,-1, 4,0);
    tracep->declBit(c+144,"out_ready", false,-1);
    tracep->declBus(c+202,"IDLE", false,-1, 31,0);
    tracep->declBus(c+203,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+204,"WAIT", false,-1, 31,0);
    tracep->declBus(c+157,"state", false,-1, 1,0);
    tracep->declBus(c+158,"inst", false,-1, 31,0);
    tracep->declBus(c+140,"pc", false,-1, 31,0);
    tracep->declBit(c+159,"invalid", false,-1);
    tracep->declBit(c+160,"is_ebreak", false,-1);
    tracep->declBus(c+161,"opcode", false,-1, 6,0);
    tracep->declBus(c+162,"func3", false,-1, 2,0);
    tracep->declBus(c+163,"func7", false,-1, 6,0);
    tracep->declBus(c+141,"imm", false,-1, 31,0);
    tracep->declBus(c+164,"immI", false,-1, 31,0);
    tracep->declBus(c+165,"immJ", false,-1, 31,0);
    tracep->declBus(c+166,"immU", false,-1, 31,0);
    tracep->declBus(c+167,"immS", false,-1, 31,0);
    tracep->declBus(c+168,"immB", false,-1, 31,0);
    tracep->declBus(c+139,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+169,"MemWrite", false,-1);
    tracep->declBit(c+170,"MemRead", false,-1);
    tracep->declBus(c+171,"MemOp", false,-1, 2,0);
    tracep->declBus(c+172,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+173,"RegWrite", false,-1);
    tracep->declBit(c+174,"Branch", false,-1);
    tracep->declBus(c+175,"Jump", false,-1, 1,0);
    tracep->declBit(c+176,"ALUSrc", false,-1);
    tracep->declBus(c+177,"AluOp", false,-1, 3,0);
    tracep->declBus(c+178,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+179,"is_ecall", false,-1);
    tracep->declBit(c+180,"is_mret", false,-1);
    tracep->declBus(c+142,"ctrl_bus", false,-1, 20,0);
    tracep->declBus(c+208,"OP_LOAD", false,-1, 6,0);
    tracep->declBus(c+209,"OP_STORE", false,-1, 6,0);
    tracep->declBus(c+210,"OP_BRANCH", false,-1, 6,0);
    tracep->declBus(c+211,"OP_JAL", false,-1, 6,0);
    tracep->declBus(c+212,"OP_JALR", false,-1, 6,0);
    tracep->declBus(c+213,"OP_OP_IMM", false,-1, 6,0);
    tracep->declBus(c+214,"OP_OP", false,-1, 6,0);
    tracep->declBus(c+215,"OP_LUI", false,-1, 6,0);
    tracep->declBus(c+216,"OP_AUIPC", false,-1, 6,0);
    tracep->declBus(c+217,"OP_SYSTEM", false,-1, 6,0);
    tracep->declBus(c+218,"F3_ADD_SUB", false,-1, 2,0);
    tracep->declBus(c+219,"F3_SLL", false,-1, 2,0);
    tracep->declBus(c+220,"F3_SLT", false,-1, 2,0);
    tracep->declBus(c+221,"F3_SLTU", false,-1, 2,0);
    tracep->declBus(c+222,"F3_XOR", false,-1, 2,0);
    tracep->declBus(c+223,"F3_SR", false,-1, 2,0);
    tracep->declBus(c+224,"F3_OR", false,-1, 2,0);
    tracep->declBus(c+225,"F3_AND", false,-1, 2,0);
    tracep->declBus(c+226,"F7_SUB", false,-1, 6,0);
    tracep->declBus(c+226,"F7_SRA", false,-1, 6,0);
    tracep->declBus(c+227,"F7_DEFAULT", false,-1, 6,0);
    tracep->declBus(c+228,"ALU_ADD", false,-1, 3,0);
    tracep->declBus(c+229,"ALU_SLL", false,-1, 3,0);
    tracep->declBus(c+230,"ALU_SLT", false,-1, 3,0);
    tracep->declBus(c+231,"ALU_SLTU", false,-1, 3,0);
    tracep->declBus(c+232,"ALU_XOR", false,-1, 3,0);
    tracep->declBus(c+233,"ALU_SRA", false,-1, 3,0);
    tracep->declBus(c+234,"ALU_SRL", false,-1, 3,0);
    tracep->declBus(c+235,"ALU_OR", false,-1, 3,0);
    tracep->declBus(c+236,"ALU_AND", false,-1, 3,0);
    tracep->declBus(c+237,"ALU_SUB", false,-1, 3,0);
    tracep->declBus(c+238,"ALU_PCADD", false,-1, 3,0);
    tracep->declBus(c+239,"JUMP_NONE", false,-1, 1,0);
    tracep->declBus(c+240,"JUMP_JAL", false,-1, 1,0);
    tracep->declBus(c+241,"JUMP_JALR", false,-1, 1,0);
    tracep->declBus(c+218,"MTR_ALU", false,-1, 2,0);
    tracep->declBus(c+219,"MTR_MEM", false,-1, 2,0);
    tracep->declBus(c+220,"MTR_PCP4", false,-1, 2,0);
    tracep->declBus(c+221,"MTR_IMM", false,-1, 2,0);
    tracep->declBus(c+222,"MTR_CSR", false,-1, 2,0);
    tracep->declBus(c+218,"OP_LW", false,-1, 2,0);
    tracep->declBus(c+219,"OP_LH", false,-1, 2,0);
    tracep->declBus(c+220,"OP_LB", false,-1, 2,0);
    tracep->declBus(c+221,"OP_LHU", false,-1, 2,0);
    tracep->declBus(c+222,"OP_LBU", false,-1, 2,0);
    tracep->declBus(c+223,"OP_SW", false,-1, 2,0);
    tracep->declBus(c+224,"OP_SH", false,-1, 2,0);
    tracep->declBus(c+225,"OP_SB", false,-1, 2,0);
    tracep->declBus(c+239,"CSR_NONE", false,-1, 1,0);
    tracep->declBus(c+240,"CSR_WRITE", false,-1, 1,0);
    tracep->declBus(c+241,"CSR_SET", false,-1, 1,0);
    tracep->declBus(c+242,"ECALL_CODE", false,-1, 11,0);
    tracep->declBus(c+243,"EBREAK_CODE", false,-1, 11,0);
    tracep->declBus(c+244,"MRET_CODE", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifbiu ");
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"rst", false,-1);
    tracep->declBit(c+27,"if_req", false,-1);
    tracep->declBus(c+28,"if_addr", false,-1, 31,0);
    tracep->declBus(c+105,"biu_rdata", false,-1, 31,0);
    tracep->declBit(c+107,"biu_ready", false,-1);
    tracep->declBus(c+106,"biu_rresp", false,-1, 1,0);
    tracep->declBus(c+1,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+91,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+117,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+119,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+120,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+118,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+92,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+191,"AR_active", false,-1);
    tracep->declBit(c+192,"R_active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"rst", false,-1);
    tracep->declBit(c+8,"wb_done", false,-1);
    tracep->declBus(c+184,"next_pc", false,-1, 31,0);
    tracep->declBit(c+107,"biu_ready", false,-1);
    tracep->declBus(c+105,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+28,"if_addr", false,-1, 31,0);
    tracep->declBit(c+27,"if_req", false,-1);
    tracep->declBit(c+134,"out_valid", false,-1);
    tracep->declBus(c+132,"inst", false,-1, 31,0);
    tracep->declBus(c+133,"pc", false,-1, 31,0);
    tracep->declBit(c+187,"out_ready", false,-1);
    tracep->declBus(c+42,"current_pc", false,-1, 31,0);
    tracep->declBus(c+43,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+44,"state", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsbiu ");
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"rst", false,-1);
    tracep->declBus(c+29,"lsu_addr", false,-1, 31,0);
    tracep->declBit(c+149,"lsu_wwe", false,-1);
    tracep->declBit(c+150,"lsu_rwe", false,-1);
    tracep->declBus(c+151,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+152,"lsu_strb", false,-1, 3,0);
    tracep->declBit(c+148,"lsu_req", false,-1);
    tracep->declBus(c+111,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+110,"biu_wresp", false,-1, 1,0);
    tracep->declBus(c+109,"biu_rresp", false,-1, 1,0);
    tracep->declBit(c+108,"biu_valid", false,-1);
    tracep->declBus(c+2,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+93,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+121,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+123,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+124,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+122,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+94,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+97,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+95,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+96,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+100,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+101,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+98,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+99,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+104,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+102,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+103,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+112,"AW_active", false,-1);
    tracep->declBit(c+113,"W_active", false,-1);
    tracep->declBit(c+114,"B_active", false,-1);
    tracep->declBit(c+193,"AR_active", false,-1);
    tracep->declBit(c+194,"R_active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"rst", false,-1);
    tracep->declBit(c+146,"in_valid", false,-1);
    tracep->declBus(c+11,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+10,"in_rd", false,-1, 4,0);
    tracep->declBus(c+13,"in_imm", false,-1, 31,0);
    tracep->declBus(c+190,"in_npc", false,-1, 31,0);
    tracep->declBus(c+12,"in_pc", false,-1, 31,0);
    tracep->declBus(c+14,"in_lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+145,"in_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+15,"in_ready", false,-1);
    tracep->declBit(c+22,"out_valid", false,-1);
    tracep->declBus(c+17,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+147,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+19,"imm_out", false,-1, 31,0);
    tracep->declBus(c+21,"npc_out", false,-1, 31,0);
    tracep->declBus(c+18,"pc_out", false,-1, 31,0);
    tracep->declBus(c+16,"rd_out", false,-1, 4,0);
    tracep->declBus(c+20,"alu_result", false,-1, 31,0);
    tracep->declBit(c+23,"out_ready", false,-1);
    tracep->declBit(c+148,"lsu_req", false,-1);
    tracep->declBit(c+149,"lsu_wwe", false,-1);
    tracep->declBit(c+150,"lsu_rwe", false,-1);
    tracep->declBus(c+29,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+151,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+152,"lsu_strb", false,-1, 3,0);
    tracep->declBit(c+108,"biu_valid", false,-1);
    tracep->declBus(c+109,"biu_rresp", false,-1, 1,0);
    tracep->declBus(c+110,"biu_wresp", false,-1, 1,0);
    tracep->declBus(c+111,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+202,"IDLE", false,-1, 31,0);
    tracep->declBus(c+203,"STORE", false,-1, 31,0);
    tracep->declBus(c+204,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+218,"OP_LW", false,-1, 2,0);
    tracep->declBus(c+219,"OP_LH", false,-1, 2,0);
    tracep->declBus(c+220,"OP_LB", false,-1, 2,0);
    tracep->declBus(c+221,"OP_LHU", false,-1, 2,0);
    tracep->declBus(c+222,"OP_LBU", false,-1, 2,0);
    tracep->declBus(c+223,"OP_SW", false,-1, 2,0);
    tracep->declBus(c+224,"OP_SH", false,-1, 2,0);
    tracep->declBus(c+225,"OP_SB", false,-1, 2,0);
    tracep->declBus(c+45,"state", false,-1, 1,0);
    tracep->declBit(c+46,"has_data", false,-1);
    tracep->declBus(c+147,"ctrl", false,-1, 20,0);
    tracep->declBus(c+16,"rd", false,-1, 4,0);
    tracep->declBus(c+47,"wdata", false,-1, 31,0);
    tracep->declBus(c+20,"addr", false,-1, 31,0);
    tracep->declBus(c+18,"pc", false,-1, 31,0);
    tracep->declBus(c+19,"imm", false,-1, 31,0);
    tracep->declBus(c+21,"npc", false,-1, 31,0);
    tracep->declBus(c+195,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+149,"MemWrite", false,-1);
    tracep->declBit(c+150,"MemRead", false,-1);
    tracep->declBus(c+181,"MemOp", false,-1, 2,0);
    tracep->declBus(c+48,"offset", false,-1, 1,0);
    tracep->declBus(c+29,"aligned_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"rst", false,-1);
    tracep->declBus(c+135,"reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+136,"reg_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+137,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+138,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+24,"reg_wen", false,-1);
    tracep->declBit(c+8,"in_valid", false,-1);
    tracep->declBus(c+26,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+25,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+9,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+7,"w_resp", false,-1);
    tracep->declBus(c+245,"rs1", false,-1, 4,0);
    tracep->declBus(c+246,"rs2", false,-1, 4,0);
    tracep->declBus(c+247,"rd", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+49+i*1,"register", true,(i+0), 31,0);
    }
    tracep->declBit(c+196,"is_info_register", false,-1);
    tracep->declBit(c+197,"is_en_display", false,-1);
    tracep->declBus(c+198,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+81,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"rst", false,-1);
    tracep->declBus(c+126,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+125,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+3,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+5,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+6,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+4,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+127,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+97,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+95,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+96,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+100,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+101,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+98,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+99,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+104,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+102,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+103,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+248,"s_rdata", false,-1, 31,0);
    tracep->declBit(c+112,"AW_active", false,-1);
    tracep->declBit(c+113,"W_active", false,-1);
    tracep->declBit(c+114,"B_active", false,-1);
    tracep->declBit(c+199,"AR_active", false,-1);
    tracep->declBit(c+200,"R_active", false,-1);
    tracep->declBus(c+115,"write_addr_reg", false,-1, 31,0);
    tracep->declBus(c+116,"write_data_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"rst", false,-1);
    tracep->declBit(c+22,"in_valid", false,-1);
    tracep->declBus(c+20,"in_alu_result", false,-1, 31,0);
    tracep->declBus(c+17,"in_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+21,"in_npc", false,-1, 31,0);
    tracep->declBus(c+18,"in_pc", false,-1, 31,0);
    tracep->declBus(c+19,"in_imm", false,-1, 31,0);
    tracep->declBus(c+147,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+189,"in_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+16,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+23,"in_ready", false,-1);
    tracep->declBit(c+8,"out_valid", false,-1);
    tracep->declBus(c+184,"next_pc", false,-1, 31,0);
    tracep->declBit(c+24,"reg_wen", false,-1);
    tracep->declBus(c+26,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+25,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+202,"IDLE", false,-1, 31,0);
    tracep->declBus(c+203,"CHOOSE", false,-1, 31,0);
    tracep->declBus(c+204,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+249,"DONE", false,-1, 31,0);
    tracep->declBus(c+82,"state", false,-1, 1,0);
    tracep->declBit(c+250,"has_data", false,-1);
    tracep->declBus(c+83,"ctrl", false,-1, 20,0);
    tracep->declBus(c+26,"rd", false,-1, 4,0);
    tracep->declBus(c+84,"npc", false,-1, 31,0);
    tracep->declBus(c+85,"pc", false,-1, 31,0);
    tracep->declBus(c+86,"imm", false,-1, 31,0);
    tracep->declBus(c+87,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+88,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+89,"alu_result", false,-1, 31,0);
    tracep->declBit(c+251,"wen", false,-1);
    tracep->declBus(c+25,"wb_data", false,-1, 31,0);
    tracep->declBus(c+90,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+24,"RegWrite", false,-1);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyx_25030085_top__DOT__if_axi4_araddr),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr),32);
    bufp->fullBit(oldp+3,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arready));
    bufp->fullBit(oldp+4,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rvalid));
    bufp->fullIData(oldp+5,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rdata),32);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rresp),2);
    bufp->fullBit(oldp+7,(vlSelf->ysyx_25030085_top__DOT__reg_wresp));
    bufp->fullBit(oldp+8,(vlSelf->ysyx_25030085_top__DOT__wb_valid));
    bufp->fullIData(oldp+9,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                            [0xfU]),32);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rd),5);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl),21);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data),32);
    bufp->fullBit(oldp+15,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
    bufp->fullCData(oldp+16,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rd),5);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_25030085_top__DOT__me_wb_rdata),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__pc),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__imm),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__npc),32);
    bufp->fullBit(oldp+22,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
    bufp->fullBit(oldp+23,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))));
    bufp->fullBit(oldp+24,((1U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                  >> 0x10U))));
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wb_data),32);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd),5);
    bufp->fullBit(oldp+27,(vlSelf->ysyx_25030085_top__DOT__if_req));
    bufp->fullIData(oldp+28,(vlSelf->ysyx_25030085_top__DOT__if_addr),32);
    bufp->fullIData(oldp+29,((0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),32);
    bufp->fullCData(oldp+30,(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state),2);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__reg_a5),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__B),32);
    bufp->fullCData(oldp+34,((0xfU & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                      >> 1U))),4);
    bufp->fullBit(oldp+35,((1U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)));
    bufp->fullCData(oldp+36,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                    >> 0x13U))),2);
    bufp->fullBit(oldp+37,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                  >> 0x11U))));
    bufp->fullBit(oldp+38,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                  >> 0x12U))));
    bufp->fullBit(oldp+39,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                  >> 0xdU))));
    bufp->fullCData(oldp+40,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                    >> 0xeU))),2);
    bufp->fullSData(oldp+41,((0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm)),12);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_reg),32);
    bufp->fullCData(oldp+44,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state),3);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state),2);
    bufp->fullBit(oldp+46,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__has_data));
    bufp->fullIData(oldp+47,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__wdata),32);
    bufp->fullCData(oldp+48,((3U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),2);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[1]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[2]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[3]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[4]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[5]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[6]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[7]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[8]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[9]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[10]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[11]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[12]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[13]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[14]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[15]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[16]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[17]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[18]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[19]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[20]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[21]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[22]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[23]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[24]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[25]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[26]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[27]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[28]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[29]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[30]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[31]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+82,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state),2);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl),21);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result),32);
    bufp->fullCData(oldp+90,((7U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                    >> 0xaU))),3);
    bufp->fullBit(oldp+91,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid));
    bufp->fullBit(oldp+92,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready));
    bufp->fullBit(oldp+93,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid));
    bufp->fullBit(oldp+94,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready));
    bufp->fullBit(oldp+95,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid));
    bufp->fullBit(oldp+96,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready));
    bufp->fullIData(oldp+97,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr),32);
    bufp->fullBit(oldp+98,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid));
    bufp->fullBit(oldp+99,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready));
    bufp->fullIData(oldp+100,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wdata),32);
    bufp->fullCData(oldp+101,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wstrb),4);
    bufp->fullBit(oldp+102,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid));
    bufp->fullBit(oldp+103,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready));
    bufp->fullCData(oldp+104,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bresp),2);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_if),32);
    bufp->fullCData(oldp+106,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_if),2);
    bufp->fullBit(oldp+107,(vlSelf->ysyx_25030085_top__DOT__biu_ready_if));
    bufp->fullBit(oldp+108,(vlSelf->ysyx_25030085_top__DOT__biu_valid_ls));
    bufp->fullCData(oldp+109,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_ls),2);
    bufp->fullCData(oldp+110,(vlSelf->ysyx_25030085_top__DOT__biu_wresp_ls),2);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls),32);
    bufp->fullBit(oldp+112,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid))));
    bufp->fullBit(oldp+113,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid))));
    bufp->fullBit(oldp+114,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid))));
    bufp->fullIData(oldp+115,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__write_addr_reg),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__write_data_reg),32);
    bufp->fullBit(oldp+117,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready));
    bufp->fullBit(oldp+118,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid));
    bufp->fullIData(oldp+119,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rdata),32);
    bufp->fullCData(oldp+120,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rresp),2);
    bufp->fullBit(oldp+121,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready));
    bufp->fullBit(oldp+122,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid));
    bufp->fullIData(oldp+123,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata),32);
    bufp->fullCData(oldp+124,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp),2);
    bufp->fullBit(oldp+125,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arvalid));
    bufp->fullIData(oldp+126,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_araddr),32);
    bufp->fullBit(oldp+127,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rready));
    bufp->fullIData(oldp+128,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc),32);
    bufp->fullIData(oldp+130,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus),32);
    bufp->fullIData(oldp+131,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause),32);
    bufp->fullIData(oldp+132,(vlSelf->ysyx_25030085_top__DOT__if_id_inst),32);
    bufp->fullIData(oldp+133,(vlSelf->ysyx_25030085_top__DOT__if_id_pc),32);
    bufp->fullBit(oldp+134,(vlSelf->ysyx_25030085_top__DOT__if_id_valid));
    bufp->fullCData(oldp+135,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+136,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_25030085_top__DOT__rs1_data),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_25030085_top__DOT__rs2_data),32);
    bufp->fullCData(oldp+139,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc),32);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm),32);
    bufp->fullIData(oldp+142,((((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen) 
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
    bufp->fullBit(oldp+143,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))));
    bufp->fullBit(oldp+144,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
    bufp->fullIData(oldp+145,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result),32);
    bufp->fullBit(oldp+146,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
    bufp->fullIData(oldp+147,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl),21);
    bufp->fullBit(oldp+148,(vlSelf->ysyx_25030085_top__DOT__lsu_req));
    bufp->fullBit(oldp+149,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                   >> 6U))));
    bufp->fullBit(oldp+150,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                   >> 5U))));
    bufp->fullIData(oldp+151,(vlSelf->ysyx_25030085_top__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+152,(vlSelf->ysyx_25030085_top__DOT__lsu_strb),4);
    bufp->fullBit(oldp+153,((IData)(((0x80U == (0xf80U 
                                                & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                     & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullBit(oldp+154,((IData)(((0x80U == (0xf80U 
                                                & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                     & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullBit(oldp+155,((IData)(((0x8000U == (0xf8f80U 
                                                  & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                     & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullCData(oldp+156,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state),2);
    bufp->fullCData(oldp+157,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state),2);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst),32);
    bufp->fullBit(oldp+159,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid));
    bufp->fullBit(oldp+160,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak));
    bufp->fullCData(oldp+161,((0x7fU & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),7);
    bufp->fullCData(oldp+162,((7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+163,((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI),32);
    bufp->fullIData(oldp+165,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+166,((0xfffff000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),32);
    bufp->fullIData(oldp+167,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+168,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
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
    bufp->fullBit(oldp+169,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemWrite));
    bufp->fullBit(oldp+170,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemRead));
    bufp->fullCData(oldp+171,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp),3);
    bufp->fullCData(oldp+172,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg),3);
    bufp->fullBit(oldp+173,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite));
    bufp->fullBit(oldp+174,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Branch));
    bufp->fullCData(oldp+175,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump),2);
    bufp->fullBit(oldp+176,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc));
    bufp->fullCData(oldp+177,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp),4);
    bufp->fullCData(oldp+178,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen),2);
    bufp->fullBit(oldp+179,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall));
    bufp->fullBit(oldp+180,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret));
    bufp->fullCData(oldp+181,((7U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                     >> 7U))),3);
    bufp->fullBit(oldp+182,(vlSelf->clk));
    bufp->fullBit(oldp+183,(vlSelf->rst));
    bufp->fullIData(oldp+184,(vlSelf->top_pc),32);
    bufp->fullIData(oldp+185,(vlSelf->top_inst),32);
    bufp->fullBit(oldp+186,(vlSelf->top_valid));
    bufp->fullBit(oldp+187,(vlSelf->top_ready));
    bufp->fullBit(oldp+188,(vlSelf->inst_done));
    bufp->fullIData(oldp+189,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
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
    bufp->fullIData(oldp+190,(((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
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
    bufp->fullBit(oldp+191,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid))));
    bufp->fullBit(oldp+192,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid))));
    bufp->fullBit(oldp+193,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid))));
    bufp->fullBit(oldp+194,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid))));
    bufp->fullIData(oldp+195,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__lsu_rdata),32);
    bufp->fullBit(oldp+196,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register));
    bufp->fullBit(oldp+197,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display));
    bufp->fullIData(oldp+198,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i),32);
    bufp->fullBit(oldp+199,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arvalid))));
    bufp->fullBit(oldp+200,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rvalid))));
    bufp->fullBit(oldp+201,(vlSelf->ysyx_25030085_top__DOT__wb_done));
    bufp->fullIData(oldp+202,(0U),32);
    bufp->fullIData(oldp+203,(1U),32);
    bufp->fullIData(oldp+204,(2U),32);
    bufp->fullIData(oldp+205,(0x1800U),32);
    bufp->fullIData(oldp+206,(0x80U),32);
    bufp->fullIData(oldp+207,(8U),32);
    bufp->fullCData(oldp+208,(3U),7);
    bufp->fullCData(oldp+209,(0x23U),7);
    bufp->fullCData(oldp+210,(0x63U),7);
    bufp->fullCData(oldp+211,(0x6fU),7);
    bufp->fullCData(oldp+212,(0x67U),7);
    bufp->fullCData(oldp+213,(0x13U),7);
    bufp->fullCData(oldp+214,(0x33U),7);
    bufp->fullCData(oldp+215,(0x37U),7);
    bufp->fullCData(oldp+216,(0x17U),7);
    bufp->fullCData(oldp+217,(0x73U),7);
    bufp->fullCData(oldp+218,(0U),3);
    bufp->fullCData(oldp+219,(1U),3);
    bufp->fullCData(oldp+220,(2U),3);
    bufp->fullCData(oldp+221,(3U),3);
    bufp->fullCData(oldp+222,(4U),3);
    bufp->fullCData(oldp+223,(5U),3);
    bufp->fullCData(oldp+224,(6U),3);
    bufp->fullCData(oldp+225,(7U),3);
    bufp->fullCData(oldp+226,(0x20U),7);
    bufp->fullCData(oldp+227,(0U),7);
    bufp->fullCData(oldp+228,(0U),4);
    bufp->fullCData(oldp+229,(1U),4);
    bufp->fullCData(oldp+230,(2U),4);
    bufp->fullCData(oldp+231,(3U),4);
    bufp->fullCData(oldp+232,(4U),4);
    bufp->fullCData(oldp+233,(5U),4);
    bufp->fullCData(oldp+234,(6U),4);
    bufp->fullCData(oldp+235,(7U),4);
    bufp->fullCData(oldp+236,(8U),4);
    bufp->fullCData(oldp+237,(0xaU),4);
    bufp->fullCData(oldp+238,(9U),4);
    bufp->fullCData(oldp+239,(0U),2);
    bufp->fullCData(oldp+240,(1U),2);
    bufp->fullCData(oldp+241,(2U),2);
    bufp->fullSData(oldp+242,(0U),12);
    bufp->fullSData(oldp+243,(1U),12);
    bufp->fullSData(oldp+244,(0x302U),12);
    bufp->fullCData(oldp+245,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs1),5);
    bufp->fullCData(oldp+246,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs2),5);
    bufp->fullCData(oldp+247,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rd),5);
    bufp->fullIData(oldp+248,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__s_rdata),32);
    bufp->fullIData(oldp+249,(3U),32);
    bufp->fullBit(oldp+250,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__has_data));
    bufp->fullBit(oldp+251,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wen));
}
