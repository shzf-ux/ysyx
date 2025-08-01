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
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBus(c+199,"top_pc", false,-1, 31,0);
    tracep->declBus(c+200,"top_inst", false,-1, 31,0);
    tracep->declBit(c+201,"top_valid", false,-1);
    tracep->declBit(c+202,"top_ready", false,-1);
    tracep->declBit(c+203,"inst_done", false,-1);
    tracep->pushNamePrefix("ysyx_25030085_top ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBus(c+199,"top_pc", false,-1, 31,0);
    tracep->declBus(c+200,"top_inst", false,-1, 31,0);
    tracep->declBit(c+201,"top_valid", false,-1);
    tracep->declBit(c+202,"top_ready", false,-1);
    tracep->declBit(c+203,"inst_done", false,-1);
    tracep->declBus(c+199,"next_pc", false,-1, 31,0);
    tracep->declBit(c+216,"wb_done", false,-1);
    tracep->declBit(c+22,"reg_wresp", false,-1);
    tracep->declBit(c+23,"wb_valid", false,-1);
    tracep->declBus(c+147,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+148,"if_id_pc", false,-1, 31,0);
    tracep->declBit(c+202,"id_if_ready", false,-1);
    tracep->declBit(c+149,"if_id_valid", false,-1);
    tracep->declBus(c+150,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+151,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+152,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+153,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+24,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+154,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+152,"id_ex_rs1", false,-1, 31,0);
    tracep->declBus(c+153,"id_ex_rs2", false,-1, 31,0);
    tracep->declBus(c+155,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+156,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+24,"id_ex_a5", false,-1, 31,0);
    tracep->declBus(c+157,"id_ex_ctrl", false,-1, 20,0);
    tracep->declBit(c+158,"id_ex_valid", false,-1);
    tracep->declBit(c+159,"ex_id_ready", false,-1);
    tracep->declBus(c+25,"ex_me_rd", false,-1, 4,0);
    tracep->declBus(c+204,"csr_data", false,-1, 31,0);
    tracep->declBus(c+26,"ex_me_ctrl", false,-1, 20,0);
    tracep->declBus(c+27,"ex_me_pc", false,-1, 31,0);
    tracep->declBus(c+28,"ex_me_imm", false,-1, 31,0);
    tracep->declBus(c+205,"ex_me_npc", false,-1, 31,0);
    tracep->declBus(c+29,"ex_me_rs2", false,-1, 31,0);
    tracep->declBus(c+160,"ex_me_alu", false,-1, 31,0);
    tracep->declBit(c+161,"ex_me_valid", false,-1);
    tracep->declBit(c+30,"me_ex_ready", false,-1);
    tracep->declBus(c+31,"me_wb_rd", false,-1, 4,0);
    tracep->declBus(c+162,"me_wb_ctrl", false,-1, 20,0);
    tracep->declBus(c+32,"me_wb_rdata", false,-1, 31,0);
    tracep->declBus(c+33,"me_wb_pc", false,-1, 31,0);
    tracep->declBus(c+34,"me_wb_imm", false,-1, 31,0);
    tracep->declBus(c+35,"me_wb_alu", false,-1, 31,0);
    tracep->declBus(c+36,"me_wb_npc", false,-1, 31,0);
    tracep->declBit(c+37,"me_wb_valid", false,-1);
    tracep->declBit(c+38,"wb_me_ready", false,-1);
    tracep->declBit(c+39,"reg_wen", false,-1);
    tracep->declBus(c+40,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+41,"reg_waddr", false,-1, 4,0);
    tracep->declBit(c+106,"if_axi4_arvalid", false,-1);
    tracep->declBit(c+132,"if_axi4_arready", false,-1);
    tracep->declBus(c+1,"if_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+133,"if_axi4_rvalid", false,-1);
    tracep->declBit(c+107,"if_axi4_rready", false,-1);
    tracep->declBus(c+134,"if_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+135,"if_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+108,"ls_axi4_arvalid", false,-1);
    tracep->declBit(c+136,"ls_axi4_arready", false,-1);
    tracep->declBus(c+2,"ls_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+137,"ls_axi4_rvalid", false,-1);
    tracep->declBit(c+109,"ls_axi4_rready", false,-1);
    tracep->declBus(c+138,"ls_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+139,"ls_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+140,"arb_mem_axi4_arvalid", false,-1);
    tracep->declBit(c+3,"arb_mem_axi4_arready", false,-1);
    tracep->declBus(c+141,"arb_mem_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+4,"arb_mem_axi4_rvalid", false,-1);
    tracep->declBit(c+142,"arb_mem_axi4_rready", false,-1);
    tracep->declBus(c+5,"arb_mem_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+6,"arb_mem_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+110,"ls_axi4_awvalid", false,-1);
    tracep->declBit(c+111,"ls_axi4_awready", false,-1);
    tracep->declBus(c+112,"ls_axi4_awaddr", false,-1, 31,0);
    tracep->declBit(c+113,"ls_axi4_wvalid", false,-1);
    tracep->declBit(c+114,"ls_axi4_wready", false,-1);
    tracep->declBus(c+115,"ls_axi4_wdata", false,-1, 31,0);
    tracep->declBus(c+116,"ls_axi4_wstrb", false,-1, 3,0);
    tracep->declBit(c+117,"ls_axi4_bvalid", false,-1);
    tracep->declBit(c+118,"ls_axi4_bready", false,-1);
    tracep->declBus(c+119,"ls_axi4_bresp", false,-1, 1,0);
    tracep->declBit(c+42,"if_req", false,-1);
    tracep->declBus(c+43,"if_addr", false,-1, 31,0);
    tracep->declBus(c+120,"biu_rdata_if", false,-1, 31,0);
    tracep->declBus(c+121,"biu_rresp_if", false,-1, 1,0);
    tracep->declBit(c+122,"biu_ready_if", false,-1);
    tracep->declBit(c+163,"lsu_req", false,-1);
    tracep->declBit(c+164,"lsu_wwe", false,-1);
    tracep->declBit(c+165,"lsu_rwe", false,-1);
    tracep->declBus(c+44,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+166,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+167,"lsu_strb", false,-1, 3,0);
    tracep->declBit(c+123,"biu_valid_ls", false,-1);
    tracep->declBus(c+124,"biu_rresp_ls", false,-1, 1,0);
    tracep->declBus(c+125,"biu_wresp_ls", false,-1, 1,0);
    tracep->declBus(c+126,"biu_rdata_ls", false,-1, 31,0);
    tracep->declBit(c+168,"is_jar_call", false,-1);
    tracep->declBit(c+169,"is_jalr_call", false,-1);
    tracep->declBit(c+170,"is_jalr_ret", false,-1);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+106,"m1_arvalid", false,-1);
    tracep->declBit(c+132,"m1_arready", false,-1);
    tracep->declBus(c+1,"m1_araddr", false,-1, 31,0);
    tracep->declBit(c+133,"m1_rvalid", false,-1);
    tracep->declBit(c+107,"m1_rready", false,-1);
    tracep->declBus(c+134,"m1_rdata", false,-1, 31,0);
    tracep->declBus(c+135,"m1_rresp", false,-1, 1,0);
    tracep->declBit(c+108,"m2_arvalid", false,-1);
    tracep->declBit(c+136,"m2_arready", false,-1);
    tracep->declBus(c+2,"m2_araddr", false,-1, 31,0);
    tracep->declBit(c+137,"m2_rvalid", false,-1);
    tracep->declBit(c+109,"m2_rready", false,-1);
    tracep->declBus(c+138,"m2_rdata", false,-1, 31,0);
    tracep->declBus(c+139,"m2_rresp", false,-1, 1,0);
    tracep->declBit(c+140,"s_arvalid", false,-1);
    tracep->declBit(c+3,"s_arready", false,-1);
    tracep->declBus(c+141,"s_araddr", false,-1, 31,0);
    tracep->declBit(c+4,"s_rvalid", false,-1);
    tracep->declBit(c+142,"s_rready", false,-1);
    tracep->declBus(c+5,"s_rdata", false,-1, 31,0);
    tracep->declBus(c+6,"s_rresp", false,-1, 1,0);
    tracep->declBus(c+217,"IDLE", false,-1, 31,0);
    tracep->declBus(c+218,"IF_MASTER", false,-1, 31,0);
    tracep->declBus(c+219,"LS_MASTER", false,-1, 31,0);
    tracep->declBus(c+45,"state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+158,"in_valid", false,-1);
    tracep->declBus(c+24,"in_a5", false,-1, 31,0);
    tracep->declBus(c+152,"in_rs1_data", false,-1, 31,0);
    tracep->declBus(c+153,"in_rs2_data", false,-1, 31,0);
    tracep->declBus(c+157,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+156,"in_imm", false,-1, 31,0);
    tracep->declBus(c+154,"in_rd", false,-1, 4,0);
    tracep->declBus(c+155,"in_pc", false,-1, 31,0);
    tracep->declBit(c+159,"in_ready", false,-1);
    tracep->declBit(c+161,"out_valid", false,-1);
    tracep->declBus(c+205,"out_next_pc", false,-1, 31,0);
    tracep->declBus(c+160,"out_Alu_Result", false,-1, 31,0);
    tracep->declBus(c+29,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+26,"out_ctrl", false,-1, 20,0);
    tracep->declBus(c+204,"csr_data", false,-1, 31,0);
    tracep->declBus(c+25,"rd_out", false,-1, 4,0);
    tracep->declBus(c+28,"imm_out", false,-1, 31,0);
    tracep->declBus(c+27,"pc_out", false,-1, 31,0);
    tracep->declBit(c+30,"out_ready", false,-1);
    tracep->declBus(c+217,"IDLE", false,-1, 31,0);
    tracep->declBus(c+218,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+219,"WAIT", false,-1, 31,0);
    tracep->declBus(c+171,"state", false,-1, 1,0);
    tracep->declBus(c+25,"rd", false,-1, 4,0);
    tracep->declBus(c+46,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+29,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+27,"pc", false,-1, 31,0);
    tracep->declBus(c+28,"imm", false,-1, 31,0);
    tracep->declBus(c+47,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+26,"ctrl", false,-1, 20,0);
    tracep->declBus(c+48,"B", false,-1, 31,0);
    tracep->declBus(c+49,"AluOp", false,-1, 3,0);
    tracep->declBit(c+50,"ALUSrc", false,-1);
    tracep->declBus(c+51,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+52,"is_ecall", false,-1);
    tracep->declBit(c+53,"is_mret", false,-1);
    tracep->declBit(c+54,"Branch", false,-1);
    tracep->declBus(c+55,"Jump", false,-1, 1,0);
    tracep->declBus(c+160,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+205,"next_pc", false,-1, 31,0);
    tracep->declBus(c+143,"mtvec", false,-1, 31,0);
    tracep->declBus(c+144,"mepc", false,-1, 31,0);
    tracep->pushNamePrefix("csr_regfile_init ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBus(c+27,"pc", false,-1, 31,0);
    tracep->declBus(c+47,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+52,"is_ecall", false,-1);
    tracep->declBit(c+53,"is_mret", false,-1);
    tracep->declBus(c+51,"csr_wen", false,-1, 1,0);
    tracep->declBus(c+56,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+46,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+204,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+143,"mtvec_out", false,-1, 31,0);
    tracep->declBus(c+144,"mepc_out", false,-1, 31,0);
    tracep->declBus(c+145,"mstatus", false,-1, 31,0);
    tracep->declBus(c+143,"mtvec", false,-1, 31,0);
    tracep->declBus(c+144,"mepc", false,-1, 31,0);
    tracep->declBus(c+146,"mcause", false,-1, 31,0);
    tracep->declBus(c+204,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+220,"MSTATUS_MPP_MASK", false,-1, 31,0);
    tracep->declBus(c+221,"MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+222,"MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+149,"in_valid", false,-1);
    tracep->declBus(c+147,"in_inst", false,-1, 31,0);
    tracep->declBus(c+148,"in_pc", false,-1, 31,0);
    tracep->declBit(c+202,"in_ready", false,-1);
    tracep->declBus(c+150,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+151,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+152,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+153,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+24,"in_reg_a5", false,-1, 31,0);
    tracep->declBit(c+158,"out_valid", false,-1);
    tracep->declBus(c+155,"pc_out", false,-1, 31,0);
    tracep->declBus(c+152,"out_rs1_data", false,-1, 31,0);
    tracep->declBus(c+153,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+157,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+156,"imm_out", false,-1, 31,0);
    tracep->declBus(c+24,"reg_a5_out", false,-1, 31,0);
    tracep->declBus(c+154,"rd_out", false,-1, 4,0);
    tracep->declBit(c+159,"out_ready", false,-1);
    tracep->declBus(c+217,"IDLE", false,-1, 31,0);
    tracep->declBus(c+218,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+219,"WAIT", false,-1, 31,0);
    tracep->declBus(c+172,"state", false,-1, 1,0);
    tracep->declBus(c+173,"inst", false,-1, 31,0);
    tracep->declBus(c+155,"pc", false,-1, 31,0);
    tracep->declBit(c+174,"invalid", false,-1);
    tracep->declBit(c+175,"is_ebreak", false,-1);
    tracep->declBus(c+176,"opcode", false,-1, 6,0);
    tracep->declBus(c+177,"func3", false,-1, 2,0);
    tracep->declBus(c+178,"func7", false,-1, 6,0);
    tracep->declBus(c+156,"imm", false,-1, 31,0);
    tracep->declBus(c+179,"immI", false,-1, 31,0);
    tracep->declBus(c+180,"immJ", false,-1, 31,0);
    tracep->declBus(c+181,"immU", false,-1, 31,0);
    tracep->declBus(c+182,"immS", false,-1, 31,0);
    tracep->declBus(c+183,"immB", false,-1, 31,0);
    tracep->declBus(c+154,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+184,"MemWrite", false,-1);
    tracep->declBit(c+185,"MemRead", false,-1);
    tracep->declBus(c+186,"MemOp", false,-1, 2,0);
    tracep->declBus(c+187,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+188,"RegWrite", false,-1);
    tracep->declBit(c+189,"Branch", false,-1);
    tracep->declBus(c+190,"Jump", false,-1, 1,0);
    tracep->declBit(c+191,"ALUSrc", false,-1);
    tracep->declBus(c+192,"AluOp", false,-1, 3,0);
    tracep->declBus(c+193,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+194,"is_ecall", false,-1);
    tracep->declBit(c+195,"is_mret", false,-1);
    tracep->declBus(c+157,"ctrl_bus", false,-1, 20,0);
    tracep->declBus(c+223,"OP_LOAD", false,-1, 6,0);
    tracep->declBus(c+224,"OP_STORE", false,-1, 6,0);
    tracep->declBus(c+225,"OP_BRANCH", false,-1, 6,0);
    tracep->declBus(c+226,"OP_JAL", false,-1, 6,0);
    tracep->declBus(c+227,"OP_JALR", false,-1, 6,0);
    tracep->declBus(c+228,"OP_OP_IMM", false,-1, 6,0);
    tracep->declBus(c+229,"OP_OP", false,-1, 6,0);
    tracep->declBus(c+230,"OP_LUI", false,-1, 6,0);
    tracep->declBus(c+231,"OP_AUIPC", false,-1, 6,0);
    tracep->declBus(c+232,"OP_SYSTEM", false,-1, 6,0);
    tracep->declBus(c+233,"F3_ADD_SUB", false,-1, 2,0);
    tracep->declBus(c+234,"F3_SLL", false,-1, 2,0);
    tracep->declBus(c+235,"F3_SLT", false,-1, 2,0);
    tracep->declBus(c+236,"F3_SLTU", false,-1, 2,0);
    tracep->declBus(c+237,"F3_XOR", false,-1, 2,0);
    tracep->declBus(c+238,"F3_SR", false,-1, 2,0);
    tracep->declBus(c+239,"F3_OR", false,-1, 2,0);
    tracep->declBus(c+240,"F3_AND", false,-1, 2,0);
    tracep->declBus(c+241,"F7_SUB", false,-1, 6,0);
    tracep->declBus(c+241,"F7_SRA", false,-1, 6,0);
    tracep->declBus(c+242,"F7_DEFAULT", false,-1, 6,0);
    tracep->declBus(c+243,"ALU_ADD", false,-1, 3,0);
    tracep->declBus(c+244,"ALU_SLL", false,-1, 3,0);
    tracep->declBus(c+245,"ALU_SLT", false,-1, 3,0);
    tracep->declBus(c+246,"ALU_SLTU", false,-1, 3,0);
    tracep->declBus(c+247,"ALU_XOR", false,-1, 3,0);
    tracep->declBus(c+248,"ALU_SRA", false,-1, 3,0);
    tracep->declBus(c+249,"ALU_SRL", false,-1, 3,0);
    tracep->declBus(c+250,"ALU_OR", false,-1, 3,0);
    tracep->declBus(c+251,"ALU_AND", false,-1, 3,0);
    tracep->declBus(c+252,"ALU_SUB", false,-1, 3,0);
    tracep->declBus(c+253,"ALU_PCADD", false,-1, 3,0);
    tracep->declBus(c+254,"JUMP_NONE", false,-1, 1,0);
    tracep->declBus(c+255,"JUMP_JAL", false,-1, 1,0);
    tracep->declBus(c+256,"JUMP_JALR", false,-1, 1,0);
    tracep->declBus(c+233,"MTR_ALU", false,-1, 2,0);
    tracep->declBus(c+234,"MTR_MEM", false,-1, 2,0);
    tracep->declBus(c+235,"MTR_PCP4", false,-1, 2,0);
    tracep->declBus(c+236,"MTR_IMM", false,-1, 2,0);
    tracep->declBus(c+237,"MTR_CSR", false,-1, 2,0);
    tracep->declBus(c+233,"OP_LW", false,-1, 2,0);
    tracep->declBus(c+234,"OP_LH", false,-1, 2,0);
    tracep->declBus(c+235,"OP_LB", false,-1, 2,0);
    tracep->declBus(c+236,"OP_LHU", false,-1, 2,0);
    tracep->declBus(c+237,"OP_LBU", false,-1, 2,0);
    tracep->declBus(c+238,"OP_SW", false,-1, 2,0);
    tracep->declBus(c+239,"OP_SH", false,-1, 2,0);
    tracep->declBus(c+240,"OP_SB", false,-1, 2,0);
    tracep->declBus(c+254,"CSR_NONE", false,-1, 1,0);
    tracep->declBus(c+255,"CSR_WRITE", false,-1, 1,0);
    tracep->declBus(c+256,"CSR_SET", false,-1, 1,0);
    tracep->declBus(c+257,"ECALL_CODE", false,-1, 11,0);
    tracep->declBus(c+258,"EBREAK_CODE", false,-1, 11,0);
    tracep->declBus(c+259,"MRET_CODE", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifbiu ");
    tracep->declBus(c+218,"READ_DELAY", false,-1, 31,0);
    tracep->declBus(c+219,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+260,"LFSR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+42,"if_req", false,-1);
    tracep->declBus(c+43,"if_addr", false,-1, 31,0);
    tracep->declBus(c+120,"biu_rdata", false,-1, 31,0);
    tracep->declBit(c+122,"biu_ready", false,-1);
    tracep->declBus(c+121,"biu_rresp", false,-1, 1,0);
    tracep->declBus(c+1,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+106,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+132,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+134,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+135,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+133,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+107,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+206,"AR_active", false,-1);
    tracep->declBit(c+207,"R_active", false,-1);
    tracep->declBus(c+7,"read_cnt", false,-1, 7,0);
    tracep->declBit(c+8,"read_pending", false,-1);
    tracep->declBus(c+9,"lfsr", false,-1, 7,0);
    tracep->declBit(c+10,"lfsr_feedback", false,-1);
    tracep->declBus(c+11,"rand_delay", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+23,"wb_done", false,-1);
    tracep->declBus(c+199,"next_pc", false,-1, 31,0);
    tracep->declBit(c+122,"biu_ready", false,-1);
    tracep->declBus(c+120,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+43,"if_addr", false,-1, 31,0);
    tracep->declBit(c+42,"if_req", false,-1);
    tracep->declBit(c+149,"out_valid", false,-1);
    tracep->declBus(c+147,"inst", false,-1, 31,0);
    tracep->declBus(c+148,"pc", false,-1, 31,0);
    tracep->declBit(c+202,"out_ready", false,-1);
    tracep->declBus(c+57,"current_pc", false,-1, 31,0);
    tracep->declBus(c+58,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+59,"state", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsbiu ");
    tracep->declBus(c+261,"READ_MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+262,"WRITE_MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+260,"LFSR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBus(c+44,"lsu_addr", false,-1, 31,0);
    tracep->declBit(c+164,"lsu_wwe", false,-1);
    tracep->declBit(c+165,"lsu_rwe", false,-1);
    tracep->declBus(c+166,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+167,"lsu_strb", false,-1, 3,0);
    tracep->declBit(c+163,"lsu_req", false,-1);
    tracep->declBus(c+126,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+125,"biu_wresp", false,-1, 1,0);
    tracep->declBus(c+124,"biu_rresp", false,-1, 1,0);
    tracep->declBit(c+123,"biu_valid", false,-1);
    tracep->declBus(c+2,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+108,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+136,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+138,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+139,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+137,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+109,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+112,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+110,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+111,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+115,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+116,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+113,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+114,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+119,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+117,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+118,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+127,"AW_active", false,-1);
    tracep->declBit(c+128,"W_active", false,-1);
    tracep->declBit(c+129,"B_active", false,-1);
    tracep->declBit(c+208,"AR_active", false,-1);
    tracep->declBit(c+209,"R_active", false,-1);
    tracep->declBus(c+12,"read_cnt", false,-1, 7,0);
    tracep->declBit(c+13,"read_pending", false,-1);
    tracep->declBus(c+263,"write_addr_cnt", false,-1, 7,0);
    tracep->declBit(c+14,"write_addr_pending", false,-1);
    tracep->declBus(c+15,"write_data_cnt", false,-1, 7,0);
    tracep->declBit(c+264,"write_data_pending", false,-1);
    tracep->declBus(c+16,"lfsr_addr", false,-1, 7,0);
    tracep->declBus(c+17,"lfsr_data", false,-1, 7,0);
    tracep->declBit(c+18,"lfsrr_feedback", false,-1);
    tracep->declBit(c+19,"lfsrw_feedback", false,-1);
    tracep->declBus(c+20,"read_rand_delay", false,-1, 7,0);
    tracep->declBus(c+21,"write_rand_delay", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+161,"in_valid", false,-1);
    tracep->declBus(c+26,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+25,"in_rd", false,-1, 4,0);
    tracep->declBus(c+28,"in_imm", false,-1, 31,0);
    tracep->declBus(c+205,"in_npc", false,-1, 31,0);
    tracep->declBus(c+27,"in_pc", false,-1, 31,0);
    tracep->declBus(c+29,"in_lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+160,"in_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+30,"in_ready", false,-1);
    tracep->declBit(c+37,"out_valid", false,-1);
    tracep->declBus(c+32,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+162,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+34,"imm_out", false,-1, 31,0);
    tracep->declBus(c+36,"npc_out", false,-1, 31,0);
    tracep->declBus(c+33,"pc_out", false,-1, 31,0);
    tracep->declBus(c+31,"rd_out", false,-1, 4,0);
    tracep->declBus(c+35,"alu_result", false,-1, 31,0);
    tracep->declBit(c+38,"out_ready", false,-1);
    tracep->declBit(c+163,"lsu_req", false,-1);
    tracep->declBit(c+164,"lsu_wwe", false,-1);
    tracep->declBit(c+165,"lsu_rwe", false,-1);
    tracep->declBus(c+44,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+166,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+167,"lsu_strb", false,-1, 3,0);
    tracep->declBit(c+123,"biu_valid", false,-1);
    tracep->declBus(c+124,"biu_rresp", false,-1, 1,0);
    tracep->declBus(c+125,"biu_wresp", false,-1, 1,0);
    tracep->declBus(c+126,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+217,"IDLE", false,-1, 31,0);
    tracep->declBus(c+218,"STORE", false,-1, 31,0);
    tracep->declBus(c+219,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+233,"OP_LW", false,-1, 2,0);
    tracep->declBus(c+234,"OP_LH", false,-1, 2,0);
    tracep->declBus(c+235,"OP_LB", false,-1, 2,0);
    tracep->declBus(c+236,"OP_LHU", false,-1, 2,0);
    tracep->declBus(c+237,"OP_LBU", false,-1, 2,0);
    tracep->declBus(c+238,"OP_SW", false,-1, 2,0);
    tracep->declBus(c+239,"OP_SH", false,-1, 2,0);
    tracep->declBus(c+240,"OP_SB", false,-1, 2,0);
    tracep->declBus(c+60,"state", false,-1, 1,0);
    tracep->declBit(c+61,"has_data", false,-1);
    tracep->declBus(c+162,"ctrl", false,-1, 20,0);
    tracep->declBus(c+31,"rd", false,-1, 4,0);
    tracep->declBus(c+62,"wdata", false,-1, 31,0);
    tracep->declBus(c+35,"addr", false,-1, 31,0);
    tracep->declBus(c+33,"pc", false,-1, 31,0);
    tracep->declBus(c+34,"imm", false,-1, 31,0);
    tracep->declBus(c+36,"npc", false,-1, 31,0);
    tracep->declBus(c+210,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+164,"MemWrite", false,-1);
    tracep->declBit(c+165,"MemRead", false,-1);
    tracep->declBus(c+196,"MemOp", false,-1, 2,0);
    tracep->declBus(c+63,"offset", false,-1, 1,0);
    tracep->declBus(c+44,"aligned_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBus(c+150,"reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+151,"reg_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+152,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+153,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+39,"reg_wen", false,-1);
    tracep->declBit(c+23,"in_valid", false,-1);
    tracep->declBus(c+41,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+40,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+24,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+22,"w_resp", false,-1);
    tracep->declBus(c+265,"rs1", false,-1, 4,0);
    tracep->declBus(c+266,"rs2", false,-1, 4,0);
    tracep->declBus(c+267,"rd", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+64+i*1,"register", true,(i+0), 31,0);
    }
    tracep->declBit(c+211,"is_info_register", false,-1);
    tracep->declBit(c+212,"is_en_display", false,-1);
    tracep->declBus(c+213,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+96,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBus(c+141,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+140,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+3,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+5,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+6,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+4,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+142,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+112,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+110,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+111,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+115,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+116,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+113,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+114,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+119,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+117,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+118,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+268,"s_rdata", false,-1, 31,0);
    tracep->declBit(c+127,"AW_active", false,-1);
    tracep->declBit(c+128,"W_active", false,-1);
    tracep->declBit(c+129,"B_active", false,-1);
    tracep->declBit(c+214,"AR_active", false,-1);
    tracep->declBit(c+215,"R_active", false,-1);
    tracep->declBus(c+130,"write_addr_reg", false,-1, 31,0);
    tracep->declBus(c+131,"write_data_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+37,"in_valid", false,-1);
    tracep->declBus(c+35,"in_alu_result", false,-1, 31,0);
    tracep->declBus(c+32,"in_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+36,"in_npc", false,-1, 31,0);
    tracep->declBus(c+33,"in_pc", false,-1, 31,0);
    tracep->declBus(c+34,"in_imm", false,-1, 31,0);
    tracep->declBus(c+162,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+204,"in_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+31,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+38,"in_ready", false,-1);
    tracep->declBit(c+23,"out_valid", false,-1);
    tracep->declBus(c+199,"next_pc", false,-1, 31,0);
    tracep->declBit(c+39,"reg_wen", false,-1);
    tracep->declBus(c+41,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+40,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+217,"IDLE", false,-1, 31,0);
    tracep->declBus(c+218,"CHOOSE", false,-1, 31,0);
    tracep->declBus(c+219,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+269,"DONE", false,-1, 31,0);
    tracep->declBus(c+97,"state", false,-1, 1,0);
    tracep->declBit(c+270,"has_data", false,-1);
    tracep->declBus(c+98,"ctrl", false,-1, 20,0);
    tracep->declBus(c+41,"rd", false,-1, 4,0);
    tracep->declBus(c+99,"npc", false,-1, 31,0);
    tracep->declBus(c+100,"pc", false,-1, 31,0);
    tracep->declBus(c+101,"imm", false,-1, 31,0);
    tracep->declBus(c+102,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+103,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+104,"alu_result", false,-1, 31,0);
    tracep->declBit(c+271,"wen", false,-1);
    tracep->declBus(c+40,"wb_data", false,-1, 31,0);
    tracep->declBus(c+105,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+39,"RegWrite", false,-1);
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
    bufp->fullCData(oldp+7,(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_cnt),8);
    bufp->fullBit(oldp+8,(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_pending));
    bufp->fullCData(oldp+9,(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr),8);
    bufp->fullBit(oldp+10,((1U & VL_REDXOR_8((0xb8U 
                                              & (IData)(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr))))));
    bufp->fullCData(oldp+11,((1U & (IData)(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr))),8);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_cnt),8);
    bufp->fullBit(oldp+13,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_pending));
    bufp->fullBit(oldp+14,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_pending));
    bufp->fullCData(oldp+15,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_cnt),8);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr),8);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data),8);
    bufp->fullBit(oldp+18,((1U & VL_REDXOR_8((0xb8U 
                                              & (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr))))));
    bufp->fullBit(oldp+19,((1U & VL_REDXOR_8((0x9cU 
                                              & (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data))))));
    bufp->fullCData(oldp+20,((0xffU & VL_MODDIV_III(32, (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr), (IData)(0x14U)))),8);
    bufp->fullCData(oldp+21,((0xffU & VL_MODDIV_III(32, (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data), (IData)(0x28U)))),8);
    bufp->fullBit(oldp+22,(vlSelf->ysyx_25030085_top__DOT__reg_wresp));
    bufp->fullBit(oldp+23,(vlSelf->ysyx_25030085_top__DOT__wb_valid));
    bufp->fullIData(oldp+24,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                             [0xfU]),32);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rd),5);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl),21);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data),32);
    bufp->fullBit(oldp+30,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
    bufp->fullCData(oldp+31,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rd),5);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_25030085_top__DOT__me_wb_rdata),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__pc),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__imm),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__npc),32);
    bufp->fullBit(oldp+37,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
    bufp->fullBit(oldp+38,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))));
    bufp->fullBit(oldp+39,((1U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                  >> 0x10U))));
    bufp->fullIData(oldp+40,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wb_data),32);
    bufp->fullCData(oldp+41,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd),5);
    bufp->fullBit(oldp+42,(vlSelf->ysyx_25030085_top__DOT__if_req));
    bufp->fullIData(oldp+43,(vlSelf->ysyx_25030085_top__DOT__if_addr),32);
    bufp->fullIData(oldp+44,((0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),32);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state),2);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__reg_a5),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__B),32);
    bufp->fullCData(oldp+49,((0xfU & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                      >> 1U))),4);
    bufp->fullBit(oldp+50,((1U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)));
    bufp->fullCData(oldp+51,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                    >> 0x13U))),2);
    bufp->fullBit(oldp+52,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                  >> 0x11U))));
    bufp->fullBit(oldp+53,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                  >> 0x12U))));
    bufp->fullBit(oldp+54,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                  >> 0xdU))));
    bufp->fullCData(oldp+55,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                    >> 0xeU))),2);
    bufp->fullSData(oldp+56,((0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm)),12);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_reg),32);
    bufp->fullCData(oldp+59,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state),3);
    bufp->fullCData(oldp+60,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state),2);
    bufp->fullBit(oldp+61,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__has_data));
    bufp->fullIData(oldp+62,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__wdata),32);
    bufp->fullCData(oldp+63,((3U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),2);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[1]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[2]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[3]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[4]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[5]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[6]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[7]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[8]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[9]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[10]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[11]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[12]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[13]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[14]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[15]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[16]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[17]),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[18]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[19]),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[20]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[21]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[22]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[23]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[24]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[25]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[26]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[27]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[28]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[29]),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[30]),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[31]),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+97,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state),2);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl),21);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result),32);
    bufp->fullCData(oldp+105,((7U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                     >> 0xaU))),3);
    bufp->fullBit(oldp+106,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid));
    bufp->fullBit(oldp+107,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready));
    bufp->fullBit(oldp+108,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid));
    bufp->fullBit(oldp+109,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready));
    bufp->fullBit(oldp+110,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid));
    bufp->fullBit(oldp+111,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready));
    bufp->fullIData(oldp+112,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr),32);
    bufp->fullBit(oldp+113,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid));
    bufp->fullBit(oldp+114,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready));
    bufp->fullIData(oldp+115,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wdata),32);
    bufp->fullCData(oldp+116,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wstrb),4);
    bufp->fullBit(oldp+117,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid));
    bufp->fullBit(oldp+118,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready));
    bufp->fullCData(oldp+119,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bresp),2);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_if),32);
    bufp->fullCData(oldp+121,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_if),2);
    bufp->fullBit(oldp+122,(vlSelf->ysyx_25030085_top__DOT__biu_ready_if));
    bufp->fullBit(oldp+123,(vlSelf->ysyx_25030085_top__DOT__biu_valid_ls));
    bufp->fullCData(oldp+124,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_ls),2);
    bufp->fullCData(oldp+125,(vlSelf->ysyx_25030085_top__DOT__biu_wresp_ls),2);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls),32);
    bufp->fullBit(oldp+127,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid))));
    bufp->fullBit(oldp+128,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid))));
    bufp->fullBit(oldp+129,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid))));
    bufp->fullIData(oldp+130,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__write_addr_reg),32);
    bufp->fullIData(oldp+131,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__write_data_reg),32);
    bufp->fullBit(oldp+132,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready));
    bufp->fullBit(oldp+133,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid));
    bufp->fullIData(oldp+134,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rdata),32);
    bufp->fullCData(oldp+135,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rresp),2);
    bufp->fullBit(oldp+136,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready));
    bufp->fullBit(oldp+137,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid));
    bufp->fullIData(oldp+138,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata),32);
    bufp->fullCData(oldp+139,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp),2);
    bufp->fullBit(oldp+140,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arvalid));
    bufp->fullIData(oldp+141,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_araddr),32);
    bufp->fullBit(oldp+142,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rready));
    bufp->fullIData(oldp+143,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_25030085_top__DOT__if_id_inst),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_25030085_top__DOT__if_id_pc),32);
    bufp->fullBit(oldp+149,(vlSelf->ysyx_25030085_top__DOT__if_id_valid));
    bufp->fullCData(oldp+150,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+151,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_25030085_top__DOT__rs1_data),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_25030085_top__DOT__rs2_data),32);
    bufp->fullCData(oldp+154,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm),32);
    bufp->fullIData(oldp+157,((((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen) 
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
    bufp->fullBit(oldp+158,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))));
    bufp->fullBit(oldp+159,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
    bufp->fullIData(oldp+160,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result),32);
    bufp->fullBit(oldp+161,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
    bufp->fullIData(oldp+162,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl),21);
    bufp->fullBit(oldp+163,(vlSelf->ysyx_25030085_top__DOT__lsu_req));
    bufp->fullBit(oldp+164,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                   >> 6U))));
    bufp->fullBit(oldp+165,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                   >> 5U))));
    bufp->fullIData(oldp+166,(vlSelf->ysyx_25030085_top__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+167,(vlSelf->ysyx_25030085_top__DOT__lsu_strb),4);
    bufp->fullBit(oldp+168,((IData)(((0x80U == (0xf80U 
                                                & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                     & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullBit(oldp+169,((IData)(((0x80U == (0xf80U 
                                                & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                     & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullBit(oldp+170,((IData)(((0x8000U == (0xf8f80U 
                                                  & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                     & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullCData(oldp+171,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state),2);
    bufp->fullCData(oldp+172,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state),2);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst),32);
    bufp->fullBit(oldp+174,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid));
    bufp->fullBit(oldp+175,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak));
    bufp->fullCData(oldp+176,((0x7fU & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),7);
    bufp->fullCData(oldp+177,((7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+178,((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI),32);
    bufp->fullIData(oldp+180,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+181,((0xfffff000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),32);
    bufp->fullIData(oldp+182,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+183,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
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
    bufp->fullBit(oldp+184,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemWrite));
    bufp->fullBit(oldp+185,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemRead));
    bufp->fullCData(oldp+186,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp),3);
    bufp->fullCData(oldp+187,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg),3);
    bufp->fullBit(oldp+188,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite));
    bufp->fullBit(oldp+189,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Branch));
    bufp->fullCData(oldp+190,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump),2);
    bufp->fullBit(oldp+191,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc));
    bufp->fullCData(oldp+192,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp),4);
    bufp->fullCData(oldp+193,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen),2);
    bufp->fullBit(oldp+194,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall));
    bufp->fullBit(oldp+195,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret));
    bufp->fullCData(oldp+196,((7U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                     >> 7U))),3);
    bufp->fullBit(oldp+197,(vlSelf->clk));
    bufp->fullBit(oldp+198,(vlSelf->rst));
    bufp->fullIData(oldp+199,(vlSelf->top_pc),32);
    bufp->fullIData(oldp+200,(vlSelf->top_inst),32);
    bufp->fullBit(oldp+201,(vlSelf->top_valid));
    bufp->fullBit(oldp+202,(vlSelf->top_ready));
    bufp->fullBit(oldp+203,(vlSelf->inst_done));
    bufp->fullIData(oldp+204,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
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
    bufp->fullIData(oldp+205,(((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
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
    bufp->fullBit(oldp+206,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid))));
    bufp->fullBit(oldp+207,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid))));
    bufp->fullBit(oldp+208,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid))));
    bufp->fullBit(oldp+209,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid))));
    bufp->fullIData(oldp+210,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__lsu_rdata),32);
    bufp->fullBit(oldp+211,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register));
    bufp->fullBit(oldp+212,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display));
    bufp->fullIData(oldp+213,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i),32);
    bufp->fullBit(oldp+214,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arvalid))));
    bufp->fullBit(oldp+215,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rvalid))));
    bufp->fullBit(oldp+216,(vlSelf->ysyx_25030085_top__DOT__wb_done));
    bufp->fullIData(oldp+217,(0U),32);
    bufp->fullIData(oldp+218,(1U),32);
    bufp->fullIData(oldp+219,(2U),32);
    bufp->fullIData(oldp+220,(0x1800U),32);
    bufp->fullIData(oldp+221,(0x80U),32);
    bufp->fullIData(oldp+222,(8U),32);
    bufp->fullCData(oldp+223,(3U),7);
    bufp->fullCData(oldp+224,(0x23U),7);
    bufp->fullCData(oldp+225,(0x63U),7);
    bufp->fullCData(oldp+226,(0x6fU),7);
    bufp->fullCData(oldp+227,(0x67U),7);
    bufp->fullCData(oldp+228,(0x13U),7);
    bufp->fullCData(oldp+229,(0x33U),7);
    bufp->fullCData(oldp+230,(0x37U),7);
    bufp->fullCData(oldp+231,(0x17U),7);
    bufp->fullCData(oldp+232,(0x73U),7);
    bufp->fullCData(oldp+233,(0U),3);
    bufp->fullCData(oldp+234,(1U),3);
    bufp->fullCData(oldp+235,(2U),3);
    bufp->fullCData(oldp+236,(3U),3);
    bufp->fullCData(oldp+237,(4U),3);
    bufp->fullCData(oldp+238,(5U),3);
    bufp->fullCData(oldp+239,(6U),3);
    bufp->fullCData(oldp+240,(7U),3);
    bufp->fullCData(oldp+241,(0x20U),7);
    bufp->fullCData(oldp+242,(0U),7);
    bufp->fullCData(oldp+243,(0U),4);
    bufp->fullCData(oldp+244,(1U),4);
    bufp->fullCData(oldp+245,(2U),4);
    bufp->fullCData(oldp+246,(3U),4);
    bufp->fullCData(oldp+247,(4U),4);
    bufp->fullCData(oldp+248,(5U),4);
    bufp->fullCData(oldp+249,(6U),4);
    bufp->fullCData(oldp+250,(7U),4);
    bufp->fullCData(oldp+251,(8U),4);
    bufp->fullCData(oldp+252,(0xaU),4);
    bufp->fullCData(oldp+253,(9U),4);
    bufp->fullCData(oldp+254,(0U),2);
    bufp->fullCData(oldp+255,(1U),2);
    bufp->fullCData(oldp+256,(2U),2);
    bufp->fullSData(oldp+257,(0U),12);
    bufp->fullSData(oldp+258,(1U),12);
    bufp->fullSData(oldp+259,(0x302U),12);
    bufp->fullIData(oldp+260,(8U),32);
    bufp->fullIData(oldp+261,(0x14U),32);
    bufp->fullIData(oldp+262,(0x28U),32);
    bufp->fullCData(oldp+263,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_cnt),8);
    bufp->fullBit(oldp+264,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_pending));
    bufp->fullCData(oldp+265,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs1),5);
    bufp->fullCData(oldp+266,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs2),5);
    bufp->fullCData(oldp+267,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rd),5);
    bufp->fullIData(oldp+268,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__s_rdata),32);
    bufp->fullIData(oldp+269,(3U),32);
    bufp->fullBit(oldp+270,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__has_data));
    bufp->fullBit(oldp+271,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wen));
}
