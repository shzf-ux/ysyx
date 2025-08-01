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
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+183,"top_pc", false,-1, 31,0);
    tracep->declBus(c+184,"top_inst", false,-1, 31,0);
    tracep->declBit(c+185,"top_valid", false,-1);
    tracep->declBit(c+186,"top_ready", false,-1);
    tracep->declBit(c+187,"inst_done", false,-1);
    tracep->pushNamePrefix("ysyx_25030085_top ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+183,"top_pc", false,-1, 31,0);
    tracep->declBus(c+184,"top_inst", false,-1, 31,0);
    tracep->declBit(c+185,"top_valid", false,-1);
    tracep->declBit(c+186,"top_ready", false,-1);
    tracep->declBit(c+187,"inst_done", false,-1);
    tracep->declBus(c+183,"next_pc", false,-1, 31,0);
    tracep->declBit(c+200,"wb_done", false,-1);
    tracep->declBit(c+26,"reg_wresp", false,-1);
    tracep->declBit(c+27,"wb_valid", false,-1);
    tracep->declBus(c+138,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+139,"if_id_pc", false,-1, 31,0);
    tracep->declBit(c+186,"id_if_ready", false,-1);
    tracep->declBit(c+140,"if_id_valid", false,-1);
    tracep->declBus(c+141,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+142,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+143,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+144,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+28,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+145,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+143,"id_ex_rs1", false,-1, 31,0);
    tracep->declBus(c+144,"id_ex_rs2", false,-1, 31,0);
    tracep->declBus(c+146,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+147,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+28,"id_ex_a5", false,-1, 31,0);
    tracep->declBus(c+148,"id_ex_ctrl", false,-1, 20,0);
    tracep->declBit(c+149,"id_ex_valid", false,-1);
    tracep->declBit(c+150,"ex_id_ready", false,-1);
    tracep->declBus(c+29,"ex_me_rd", false,-1, 4,0);
    tracep->declBus(c+188,"csr_data", false,-1, 31,0);
    tracep->declBus(c+30,"ex_me_ctrl", false,-1, 20,0);
    tracep->declBus(c+31,"ex_me_pc", false,-1, 31,0);
    tracep->declBus(c+32,"ex_me_imm", false,-1, 31,0);
    tracep->declBus(c+189,"ex_me_npc", false,-1, 31,0);
    tracep->declBus(c+33,"ex_me_rs2", false,-1, 31,0);
    tracep->declBus(c+151,"ex_me_alu", false,-1, 31,0);
    tracep->declBit(c+152,"ex_me_valid", false,-1);
    tracep->declBit(c+34,"me_ex_ready", false,-1);
    tracep->declBus(c+35,"me_wb_rd", false,-1, 4,0);
    tracep->declBus(c+36,"me_wb_ctrl", false,-1, 20,0);
    tracep->declBus(c+121,"me_wb_rdata", false,-1, 31,0);
    tracep->declBus(c+37,"me_wb_pc", false,-1, 31,0);
    tracep->declBus(c+38,"me_wb_imm", false,-1, 31,0);
    tracep->declBus(c+39,"me_wb_alu", false,-1, 31,0);
    tracep->declBus(c+40,"me_wb_npc", false,-1, 31,0);
    tracep->declBit(c+41,"me_wb_valid", false,-1);
    tracep->declBit(c+42,"wb_me_ready", false,-1);
    tracep->declBit(c+43,"reg_wen", false,-1);
    tracep->declBus(c+44,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+45,"reg_waddr", false,-1, 4,0);
    tracep->declBit(c+114,"if_axi4_arvalid", false,-1);
    tracep->declBit(c+122,"if_axi4_arready", false,-1);
    tracep->declBus(c+1,"if_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+123,"if_axi4_rvalid", false,-1);
    tracep->declBit(c+115,"if_axi4_rready", false,-1);
    tracep->declBus(c+124,"if_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+125,"if_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+116,"ls_axi4_arvalid", false,-1);
    tracep->declBit(c+126,"ls_axi4_arready", false,-1);
    tracep->declBus(c+2,"ls_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+127,"ls_axi4_rvalid", false,-1);
    tracep->declBit(c+117,"ls_axi4_rready", false,-1);
    tracep->declBus(c+128,"ls_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+129,"ls_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+130,"arb_mem_axi4_arvalid", false,-1);
    tracep->declBit(c+3,"arb_mem_axi4_arready", false,-1);
    tracep->declBus(c+131,"arb_mem_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+4,"arb_mem_axi4_rvalid", false,-1);
    tracep->declBit(c+132,"arb_mem_axi4_rready", false,-1);
    tracep->declBus(c+5,"arb_mem_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+6,"arb_mem_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+7,"ls_axi4_awvalid", false,-1);
    tracep->declBit(c+8,"ls_axi4_awready", false,-1);
    tracep->declBus(c+9,"ls_axi4_awaddr", false,-1, 31,0);
    tracep->declBit(c+10,"ls_axi4_wvalid", false,-1);
    tracep->declBit(c+11,"ls_axi4_wready", false,-1);
    tracep->declBus(c+12,"ls_axi4_wdata", false,-1, 31,0);
    tracep->declBus(c+13,"ls_axi4_wstrb", false,-1, 3,0);
    tracep->declBit(c+14,"ls_axi4_bvalid", false,-1);
    tracep->declBit(c+15,"ls_axi4_bready", false,-1);
    tracep->declBus(c+16,"ls_axi4_bresp", false,-1, 1,0);
    tracep->declBit(c+46,"if_req", false,-1);
    tracep->declBus(c+47,"if_addr", false,-1, 31,0);
    tracep->declBus(c+118,"biu_rdata_if", false,-1, 31,0);
    tracep->declBus(c+119,"biu_rresp_if", false,-1, 1,0);
    tracep->declBit(c+120,"biu_ready_if", false,-1);
    tracep->declBit(c+48,"lsu_req", false,-1);
    tracep->declBit(c+49,"lsu_wwe", false,-1);
    tracep->declBit(c+50,"lsu_rwe", false,-1);
    tracep->declBus(c+51,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+190,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+133,"lsu_strb", false,-1, 3,0);
    tracep->declBit(c+17,"biu_valid_ls", false,-1);
    tracep->declBus(c+18,"biu_rresp_ls", false,-1, 1,0);
    tracep->declBus(c+19,"biu_wresp_ls", false,-1, 1,0);
    tracep->declBus(c+20,"biu_rdata_ls", false,-1, 31,0);
    tracep->declBit(c+153,"is_jar_call", false,-1);
    tracep->declBit(c+154,"is_jalr_call", false,-1);
    tracep->declBit(c+155,"is_jalr_ret", false,-1);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBit(c+114,"m1_arvalid", false,-1);
    tracep->declBit(c+122,"m1_arready", false,-1);
    tracep->declBus(c+1,"m1_araddr", false,-1, 31,0);
    tracep->declBit(c+123,"m1_rvalid", false,-1);
    tracep->declBit(c+115,"m1_rready", false,-1);
    tracep->declBus(c+124,"m1_rdata", false,-1, 31,0);
    tracep->declBus(c+125,"m1_rresp", false,-1, 1,0);
    tracep->declBit(c+116,"m2_arvalid", false,-1);
    tracep->declBit(c+126,"m2_arready", false,-1);
    tracep->declBus(c+2,"m2_araddr", false,-1, 31,0);
    tracep->declBit(c+127,"m2_rvalid", false,-1);
    tracep->declBit(c+117,"m2_rready", false,-1);
    tracep->declBus(c+128,"m2_rdata", false,-1, 31,0);
    tracep->declBus(c+129,"m2_rresp", false,-1, 1,0);
    tracep->declBit(c+130,"s_arvalid", false,-1);
    tracep->declBit(c+3,"s_arready", false,-1);
    tracep->declBus(c+131,"s_araddr", false,-1, 31,0);
    tracep->declBit(c+4,"s_rvalid", false,-1);
    tracep->declBit(c+132,"s_rready", false,-1);
    tracep->declBus(c+5,"s_rdata", false,-1, 31,0);
    tracep->declBus(c+6,"s_rresp", false,-1, 1,0);
    tracep->declBus(c+201,"IDLE", false,-1, 31,0);
    tracep->declBus(c+202,"IF_MASTER", false,-1, 31,0);
    tracep->declBus(c+203,"LS_MASTER", false,-1, 31,0);
    tracep->declBus(c+52,"state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBit(c+149,"in_valid", false,-1);
    tracep->declBus(c+28,"in_a5", false,-1, 31,0);
    tracep->declBus(c+143,"in_rs1_data", false,-1, 31,0);
    tracep->declBus(c+144,"in_rs2_data", false,-1, 31,0);
    tracep->declBus(c+148,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+147,"in_imm", false,-1, 31,0);
    tracep->declBus(c+145,"in_rd", false,-1, 4,0);
    tracep->declBus(c+146,"in_pc", false,-1, 31,0);
    tracep->declBit(c+150,"in_ready", false,-1);
    tracep->declBit(c+152,"out_valid", false,-1);
    tracep->declBus(c+189,"out_next_pc", false,-1, 31,0);
    tracep->declBus(c+151,"out_Alu_Result", false,-1, 31,0);
    tracep->declBus(c+33,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+30,"out_ctrl", false,-1, 20,0);
    tracep->declBus(c+188,"csr_data", false,-1, 31,0);
    tracep->declBus(c+29,"rd_out", false,-1, 4,0);
    tracep->declBus(c+32,"imm_out", false,-1, 31,0);
    tracep->declBus(c+31,"pc_out", false,-1, 31,0);
    tracep->declBit(c+34,"out_ready", false,-1);
    tracep->declBus(c+201,"IDLE", false,-1, 31,0);
    tracep->declBus(c+202,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+203,"WAIT", false,-1, 31,0);
    tracep->declBus(c+156,"state", false,-1, 1,0);
    tracep->declBus(c+29,"rd", false,-1, 4,0);
    tracep->declBus(c+53,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+33,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+31,"pc", false,-1, 31,0);
    tracep->declBus(c+32,"imm", false,-1, 31,0);
    tracep->declBus(c+54,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+30,"ctrl", false,-1, 20,0);
    tracep->declBus(c+55,"B", false,-1, 31,0);
    tracep->declBus(c+56,"AluOp", false,-1, 3,0);
    tracep->declBit(c+57,"ALUSrc", false,-1);
    tracep->declBus(c+58,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+59,"is_ecall", false,-1);
    tracep->declBit(c+60,"is_mret", false,-1);
    tracep->declBit(c+61,"Branch", false,-1);
    tracep->declBus(c+62,"Jump", false,-1, 1,0);
    tracep->declBus(c+151,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+189,"next_pc", false,-1, 31,0);
    tracep->declBus(c+134,"mtvec", false,-1, 31,0);
    tracep->declBus(c+135,"mepc", false,-1, 31,0);
    tracep->pushNamePrefix("csr_regfile_init ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+31,"pc", false,-1, 31,0);
    tracep->declBus(c+54,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+59,"is_ecall", false,-1);
    tracep->declBit(c+60,"is_mret", false,-1);
    tracep->declBus(c+58,"csr_wen", false,-1, 1,0);
    tracep->declBus(c+63,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+53,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+188,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+134,"mtvec_out", false,-1, 31,0);
    tracep->declBus(c+135,"mepc_out", false,-1, 31,0);
    tracep->declBus(c+136,"mstatus", false,-1, 31,0);
    tracep->declBus(c+134,"mtvec", false,-1, 31,0);
    tracep->declBus(c+135,"mepc", false,-1, 31,0);
    tracep->declBus(c+137,"mcause", false,-1, 31,0);
    tracep->declBus(c+188,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+204,"MSTATUS_MPP_MASK", false,-1, 31,0);
    tracep->declBus(c+205,"MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+206,"MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBit(c+140,"in_valid", false,-1);
    tracep->declBus(c+138,"in_inst", false,-1, 31,0);
    tracep->declBus(c+139,"in_pc", false,-1, 31,0);
    tracep->declBit(c+186,"in_ready", false,-1);
    tracep->declBus(c+141,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+142,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+143,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+144,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+28,"in_reg_a5", false,-1, 31,0);
    tracep->declBit(c+149,"out_valid", false,-1);
    tracep->declBus(c+146,"pc_out", false,-1, 31,0);
    tracep->declBus(c+143,"out_rs1_data", false,-1, 31,0);
    tracep->declBus(c+144,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+148,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+147,"imm_out", false,-1, 31,0);
    tracep->declBus(c+28,"reg_a5_out", false,-1, 31,0);
    tracep->declBus(c+145,"rd_out", false,-1, 4,0);
    tracep->declBit(c+150,"out_ready", false,-1);
    tracep->declBus(c+201,"IDLE", false,-1, 31,0);
    tracep->declBus(c+202,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+203,"WAIT", false,-1, 31,0);
    tracep->declBus(c+157,"state", false,-1, 1,0);
    tracep->declBus(c+158,"inst", false,-1, 31,0);
    tracep->declBus(c+146,"pc", false,-1, 31,0);
    tracep->declBit(c+159,"invalid", false,-1);
    tracep->declBit(c+160,"is_ebreak", false,-1);
    tracep->declBus(c+161,"opcode", false,-1, 6,0);
    tracep->declBus(c+162,"func3", false,-1, 2,0);
    tracep->declBus(c+163,"func7", false,-1, 6,0);
    tracep->declBus(c+147,"imm", false,-1, 31,0);
    tracep->declBus(c+164,"immI", false,-1, 31,0);
    tracep->declBus(c+165,"immJ", false,-1, 31,0);
    tracep->declBus(c+166,"immU", false,-1, 31,0);
    tracep->declBus(c+167,"immS", false,-1, 31,0);
    tracep->declBus(c+168,"immB", false,-1, 31,0);
    tracep->declBus(c+145,"rd_addr", false,-1, 4,0);
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
    tracep->declBus(c+148,"ctrl_bus", false,-1, 20,0);
    tracep->declBus(c+207,"OP_LOAD", false,-1, 6,0);
    tracep->declBus(c+208,"OP_STORE", false,-1, 6,0);
    tracep->declBus(c+209,"OP_BRANCH", false,-1, 6,0);
    tracep->declBus(c+210,"OP_JAL", false,-1, 6,0);
    tracep->declBus(c+211,"OP_JALR", false,-1, 6,0);
    tracep->declBus(c+212,"OP_OP_IMM", false,-1, 6,0);
    tracep->declBus(c+213,"OP_OP", false,-1, 6,0);
    tracep->declBus(c+214,"OP_LUI", false,-1, 6,0);
    tracep->declBus(c+215,"OP_AUIPC", false,-1, 6,0);
    tracep->declBus(c+216,"OP_SYSTEM", false,-1, 6,0);
    tracep->declBus(c+217,"F3_ADD_SUB", false,-1, 2,0);
    tracep->declBus(c+218,"F3_SLL", false,-1, 2,0);
    tracep->declBus(c+219,"F3_SLT", false,-1, 2,0);
    tracep->declBus(c+220,"F3_SLTU", false,-1, 2,0);
    tracep->declBus(c+221,"F3_XOR", false,-1, 2,0);
    tracep->declBus(c+222,"F3_SR", false,-1, 2,0);
    tracep->declBus(c+223,"F3_OR", false,-1, 2,0);
    tracep->declBus(c+224,"F3_AND", false,-1, 2,0);
    tracep->declBus(c+225,"F7_SUB", false,-1, 6,0);
    tracep->declBus(c+225,"F7_SRA", false,-1, 6,0);
    tracep->declBus(c+226,"F7_DEFAULT", false,-1, 6,0);
    tracep->declBus(c+227,"ALU_ADD", false,-1, 3,0);
    tracep->declBus(c+228,"ALU_SLL", false,-1, 3,0);
    tracep->declBus(c+229,"ALU_SLT", false,-1, 3,0);
    tracep->declBus(c+230,"ALU_SLTU", false,-1, 3,0);
    tracep->declBus(c+231,"ALU_XOR", false,-1, 3,0);
    tracep->declBus(c+232,"ALU_SRA", false,-1, 3,0);
    tracep->declBus(c+233,"ALU_SRL", false,-1, 3,0);
    tracep->declBus(c+234,"ALU_OR", false,-1, 3,0);
    tracep->declBus(c+235,"ALU_AND", false,-1, 3,0);
    tracep->declBus(c+236,"ALU_SUB", false,-1, 3,0);
    tracep->declBus(c+237,"ALU_PCADD", false,-1, 3,0);
    tracep->declBus(c+238,"JUMP_NONE", false,-1, 1,0);
    tracep->declBus(c+239,"JUMP_JAL", false,-1, 1,0);
    tracep->declBus(c+240,"JUMP_JALR", false,-1, 1,0);
    tracep->declBus(c+217,"MTR_ALU", false,-1, 2,0);
    tracep->declBus(c+218,"MTR_MEM", false,-1, 2,0);
    tracep->declBus(c+219,"MTR_PCP4", false,-1, 2,0);
    tracep->declBus(c+220,"MTR_IMM", false,-1, 2,0);
    tracep->declBus(c+221,"MTR_CSR", false,-1, 2,0);
    tracep->declBus(c+217,"MEM_B", false,-1, 2,0);
    tracep->declBus(c+218,"MEM_H", false,-1, 2,0);
    tracep->declBus(c+219,"MEM_W", false,-1, 2,0);
    tracep->declBus(c+221,"MEM_BU", false,-1, 2,0);
    tracep->declBus(c+222,"MEM_HU", false,-1, 2,0);
    tracep->declBus(c+238,"CSR_NONE", false,-1, 1,0);
    tracep->declBus(c+239,"CSR_WRITE", false,-1, 1,0);
    tracep->declBus(c+240,"CSR_SET", false,-1, 1,0);
    tracep->declBus(c+241,"ECALL_CODE", false,-1, 11,0);
    tracep->declBus(c+242,"EBREAK_CODE", false,-1, 11,0);
    tracep->declBus(c+243,"MRET_CODE", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifbiu ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBit(c+46,"if_req", false,-1);
    tracep->declBus(c+47,"if_addr", false,-1, 31,0);
    tracep->declBus(c+118,"biu_rdata", false,-1, 31,0);
    tracep->declBit(c+120,"biu_ready", false,-1);
    tracep->declBus(c+119,"biu_rresp", false,-1, 1,0);
    tracep->declBus(c+1,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+114,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+122,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+124,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+125,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+123,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+115,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+191,"AR_active", false,-1);
    tracep->declBit(c+192,"R_active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBit(c+27,"wb_done", false,-1);
    tracep->declBus(c+183,"next_pc", false,-1, 31,0);
    tracep->declBit(c+120,"biu_ready", false,-1);
    tracep->declBus(c+118,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+47,"if_addr", false,-1, 31,0);
    tracep->declBit(c+46,"if_req", false,-1);
    tracep->declBit(c+140,"out_valid", false,-1);
    tracep->declBus(c+138,"inst", false,-1, 31,0);
    tracep->declBus(c+139,"pc", false,-1, 31,0);
    tracep->declBit(c+186,"out_ready", false,-1);
    tracep->declBus(c+64,"current_pc", false,-1, 31,0);
    tracep->declBus(c+65,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+66,"state", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsbiu ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+51,"lsu_addr", false,-1, 31,0);
    tracep->declBit(c+49,"lsu_wwe", false,-1);
    tracep->declBit(c+50,"lsu_rwe", false,-1);
    tracep->declBus(c+190,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+133,"lsu_strb", false,-1, 3,0);
    tracep->declBit(c+48,"lsu_req", false,-1);
    tracep->declBus(c+20,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+19,"biu_wresp", false,-1, 1,0);
    tracep->declBus(c+18,"biu_rresp", false,-1, 1,0);
    tracep->declBit(c+17,"biu_valid", false,-1);
    tracep->declBus(c+2,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+116,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+126,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+128,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+129,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+127,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+117,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+9,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+7,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+8,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+12,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+13,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+10,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+11,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+16,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+14,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+15,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+21,"AW_active", false,-1);
    tracep->declBit(c+22,"W_active", false,-1);
    tracep->declBit(c+23,"B_active", false,-1);
    tracep->declBit(c+193,"AR_active", false,-1);
    tracep->declBit(c+194,"R_active", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBit(c+152,"in_valid", false,-1);
    tracep->declBus(c+30,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+29,"in_rd", false,-1, 4,0);
    tracep->declBus(c+32,"in_imm", false,-1, 31,0);
    tracep->declBus(c+189,"in_npc", false,-1, 31,0);
    tracep->declBus(c+31,"in_pc", false,-1, 31,0);
    tracep->declBus(c+33,"in_lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+151,"in_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+34,"in_ready", false,-1);
    tracep->declBit(c+41,"out_valid", false,-1);
    tracep->declBus(c+121,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+36,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+38,"imm_out", false,-1, 31,0);
    tracep->declBus(c+40,"npc_out", false,-1, 31,0);
    tracep->declBus(c+37,"pc_out", false,-1, 31,0);
    tracep->declBus(c+35,"rd_out", false,-1, 4,0);
    tracep->declBus(c+39,"alu_result", false,-1, 31,0);
    tracep->declBit(c+42,"out_ready", false,-1);
    tracep->declBit(c+48,"lsu_req", false,-1);
    tracep->declBit(c+49,"lsu_wwe", false,-1);
    tracep->declBit(c+50,"lsu_rwe", false,-1);
    tracep->declBus(c+51,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+190,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+133,"lsu_strb", false,-1, 3,0);
    tracep->declBit(c+17,"biu_valid", false,-1);
    tracep->declBus(c+18,"biu_rresp", false,-1, 1,0);
    tracep->declBus(c+19,"biu_wresp", false,-1, 1,0);
    tracep->declBus(c+20,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+201,"IDLE", false,-1, 31,0);
    tracep->declBus(c+202,"STORE", false,-1, 31,0);
    tracep->declBus(c+203,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+217,"OP_LW", false,-1, 2,0);
    tracep->declBus(c+218,"OP_LH", false,-1, 2,0);
    tracep->declBus(c+219,"OP_LB", false,-1, 2,0);
    tracep->declBus(c+220,"OP_LHU", false,-1, 2,0);
    tracep->declBus(c+221,"OP_LBU", false,-1, 2,0);
    tracep->declBus(c+222,"OP_SW", false,-1, 2,0);
    tracep->declBus(c+223,"OP_SH", false,-1, 2,0);
    tracep->declBus(c+224,"OP_SB", false,-1, 2,0);
    tracep->declBus(c+67,"state", false,-1, 1,0);
    tracep->declBit(c+68,"has_data", false,-1);
    tracep->declBus(c+36,"ctrl", false,-1, 20,0);
    tracep->declBus(c+35,"rd", false,-1, 4,0);
    tracep->declBus(c+69,"wdata", false,-1, 31,0);
    tracep->declBus(c+39,"addr", false,-1, 31,0);
    tracep->declBus(c+37,"pc", false,-1, 31,0);
    tracep->declBus(c+38,"imm", false,-1, 31,0);
    tracep->declBus(c+40,"npc", false,-1, 31,0);
    tracep->declBus(c+121,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+49,"MemWrite", false,-1);
    tracep->declBit(c+50,"MemRead", false,-1);
    tracep->declBus(c+70,"MemOp", false,-1, 2,0);
    tracep->declBus(c+71,"offset", false,-1, 1,0);
    tracep->declBus(c+51,"aligned_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+141,"reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+142,"reg_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+143,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+144,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+43,"reg_wen", false,-1);
    tracep->declBit(c+27,"in_valid", false,-1);
    tracep->declBus(c+45,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+44,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+28,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+26,"w_resp", false,-1);
    tracep->declBus(c+244,"rs1", false,-1, 4,0);
    tracep->declBus(c+245,"rs2", false,-1, 4,0);
    tracep->declBus(c+246,"rd", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+72+i*1,"register", true,(i+0), 31,0);
    }
    tracep->declBit(c+195,"is_info_register", false,-1);
    tracep->declBit(c+196,"is_en_display", false,-1);
    tracep->declBus(c+197,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+104,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBus(c+131,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+130,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+3,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+5,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+6,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+4,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+132,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+9,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+7,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+8,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+12,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+13,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+10,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+11,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+16,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+14,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+15,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+247,"s_rdata", false,-1, 31,0);
    tracep->declBit(c+21,"AW_active", false,-1);
    tracep->declBit(c+22,"W_active", false,-1);
    tracep->declBit(c+23,"B_active", false,-1);
    tracep->declBit(c+198,"AR_active", false,-1);
    tracep->declBit(c+199,"R_active", false,-1);
    tracep->declBus(c+24,"write_addr_reg", false,-1, 31,0);
    tracep->declBus(c+25,"write_data_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+181,"clk", false,-1);
    tracep->declBit(c+182,"rst", false,-1);
    tracep->declBit(c+41,"in_valid", false,-1);
    tracep->declBus(c+39,"in_alu_result", false,-1, 31,0);
    tracep->declBus(c+121,"in_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+40,"in_npc", false,-1, 31,0);
    tracep->declBus(c+37,"in_pc", false,-1, 31,0);
    tracep->declBus(c+38,"in_imm", false,-1, 31,0);
    tracep->declBus(c+36,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+188,"in_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+35,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+42,"in_ready", false,-1);
    tracep->declBit(c+27,"out_valid", false,-1);
    tracep->declBus(c+183,"next_pc", false,-1, 31,0);
    tracep->declBit(c+43,"reg_wen", false,-1);
    tracep->declBus(c+45,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+44,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+201,"IDLE", false,-1, 31,0);
    tracep->declBus(c+202,"CHOOSE", false,-1, 31,0);
    tracep->declBus(c+203,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+248,"DONE", false,-1, 31,0);
    tracep->declBus(c+105,"state", false,-1, 1,0);
    tracep->declBit(c+249,"has_data", false,-1);
    tracep->declBus(c+106,"ctrl", false,-1, 20,0);
    tracep->declBus(c+45,"rd", false,-1, 4,0);
    tracep->declBus(c+107,"npc", false,-1, 31,0);
    tracep->declBus(c+108,"pc", false,-1, 31,0);
    tracep->declBus(c+109,"imm", false,-1, 31,0);
    tracep->declBus(c+110,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+111,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+112,"alu_result", false,-1, 31,0);
    tracep->declBit(c+250,"wen", false,-1);
    tracep->declBus(c+44,"wb_data", false,-1, 31,0);
    tracep->declBus(c+113,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+43,"RegWrite", false,-1);
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
    bufp->fullBit(oldp+7,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid));
    bufp->fullBit(oldp+8,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready));
    bufp->fullIData(oldp+9,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr),32);
    bufp->fullBit(oldp+10,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid));
    bufp->fullBit(oldp+11,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready));
    bufp->fullIData(oldp+12,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wdata),32);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wstrb),4);
    bufp->fullBit(oldp+14,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid));
    bufp->fullBit(oldp+15,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready));
    bufp->fullCData(oldp+16,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bresp),2);
    bufp->fullBit(oldp+17,(vlSelf->ysyx_25030085_top__DOT__biu_valid_ls));
    bufp->fullCData(oldp+18,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_ls),2);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_25030085_top__DOT__biu_wresp_ls),2);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls),32);
    bufp->fullBit(oldp+21,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid))));
    bufp->fullBit(oldp+22,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid))));
    bufp->fullBit(oldp+23,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid))));
    bufp->fullIData(oldp+24,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__write_addr_reg),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__write_data_reg),32);
    bufp->fullBit(oldp+26,(vlSelf->ysyx_25030085_top__DOT__reg_wresp));
    bufp->fullBit(oldp+27,(vlSelf->ysyx_25030085_top__DOT__wb_valid));
    bufp->fullIData(oldp+28,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                             [0xfU]),32);
    bufp->fullCData(oldp+29,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rd),5);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl),21);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data),32);
    bufp->fullBit(oldp+34,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
    bufp->fullCData(oldp+35,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rd),5);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl),21);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__pc),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__imm),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__npc),32);
    bufp->fullBit(oldp+41,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
    bufp->fullBit(oldp+42,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))));
    bufp->fullBit(oldp+43,((1U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                  >> 0x10U))));
    bufp->fullIData(oldp+44,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wb_data),32);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd),5);
    bufp->fullBit(oldp+46,(vlSelf->ysyx_25030085_top__DOT__if_req));
    bufp->fullIData(oldp+47,(vlSelf->ysyx_25030085_top__DOT__if_addr),32);
    bufp->fullBit(oldp+48,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
    bufp->fullBit(oldp+49,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                  >> 6U))));
    bufp->fullBit(oldp+50,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                  >> 5U))));
    bufp->fullIData(oldp+51,((0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),32);
    bufp->fullCData(oldp+52,(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state),2);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__reg_a5),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__B),32);
    bufp->fullCData(oldp+56,((0xfU & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                      >> 1U))),4);
    bufp->fullBit(oldp+57,((1U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)));
    bufp->fullCData(oldp+58,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                    >> 0x13U))),2);
    bufp->fullBit(oldp+59,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                  >> 0x11U))));
    bufp->fullBit(oldp+60,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                  >> 0x12U))));
    bufp->fullBit(oldp+61,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                  >> 0xdU))));
    bufp->fullCData(oldp+62,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                    >> 0xeU))),2);
    bufp->fullSData(oldp+63,((0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm)),12);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_reg),32);
    bufp->fullCData(oldp+66,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state),3);
    bufp->fullCData(oldp+67,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state),2);
    bufp->fullBit(oldp+68,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__has_data));
    bufp->fullIData(oldp+69,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__wdata),32);
    bufp->fullCData(oldp+70,((7U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                    >> 7U))),3);
    bufp->fullCData(oldp+71,((3U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),2);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[1]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[2]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[3]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[4]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[5]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[6]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[7]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[8]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[9]),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[10]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[11]),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[12]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[13]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[14]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[15]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[16]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[17]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[18]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[19]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[20]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[21]),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[22]),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[23]),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[24]),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[25]),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[26]),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[27]),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[28]),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[29]),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[30]),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[31]),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+105,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state),2);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl),21);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result),32);
    bufp->fullCData(oldp+113,((7U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                     >> 0xaU))),3);
    bufp->fullBit(oldp+114,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid));
    bufp->fullBit(oldp+115,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready));
    bufp->fullBit(oldp+116,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid));
    bufp->fullBit(oldp+117,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready));
    bufp->fullIData(oldp+118,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_if),32);
    bufp->fullCData(oldp+119,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_if),2);
    bufp->fullBit(oldp+120,(vlSelf->ysyx_25030085_top__DOT__biu_ready_if));
    bufp->fullIData(oldp+121,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__lsu_rdata),32);
    bufp->fullBit(oldp+122,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready));
    bufp->fullBit(oldp+123,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid));
    bufp->fullIData(oldp+124,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rdata),32);
    bufp->fullCData(oldp+125,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rresp),2);
    bufp->fullBit(oldp+126,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready));
    bufp->fullBit(oldp+127,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid));
    bufp->fullIData(oldp+128,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata),32);
    bufp->fullCData(oldp+129,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp),2);
    bufp->fullBit(oldp+130,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arvalid));
    bufp->fullIData(oldp+131,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_araddr),32);
    bufp->fullBit(oldp+132,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rready));
    bufp->fullCData(oldp+133,(vlSelf->ysyx_25030085_top__DOT__lsu_strb),4);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec),32);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc),32);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_25030085_top__DOT__if_id_inst),32);
    bufp->fullIData(oldp+139,(vlSelf->ysyx_25030085_top__DOT__if_id_pc),32);
    bufp->fullBit(oldp+140,(vlSelf->ysyx_25030085_top__DOT__if_id_valid));
    bufp->fullCData(oldp+141,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+142,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_25030085_top__DOT__rs1_data),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_25030085_top__DOT__rs2_data),32);
    bufp->fullCData(oldp+145,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm),32);
    bufp->fullIData(oldp+148,((((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen) 
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
    bufp->fullBit(oldp+149,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))));
    bufp->fullBit(oldp+150,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
    bufp->fullIData(oldp+151,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result),32);
    bufp->fullBit(oldp+152,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
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
    bufp->fullBit(oldp+181,(vlSelf->clk));
    bufp->fullBit(oldp+182,(vlSelf->rst));
    bufp->fullIData(oldp+183,(vlSelf->top_pc),32);
    bufp->fullIData(oldp+184,(vlSelf->top_inst),32);
    bufp->fullBit(oldp+185,(vlSelf->top_valid));
    bufp->fullBit(oldp+186,(vlSelf->top_ready));
    bufp->fullBit(oldp+187,(vlSelf->inst_done));
    bufp->fullIData(oldp+188,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
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
    bufp->fullIData(oldp+189,(((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
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
    bufp->fullIData(oldp+190,(vlSelf->ysyx_25030085_top__DOT__lsu_wdata),32);
    bufp->fullBit(oldp+191,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid))));
    bufp->fullBit(oldp+192,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid))));
    bufp->fullBit(oldp+193,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid))));
    bufp->fullBit(oldp+194,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid))));
    bufp->fullBit(oldp+195,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register));
    bufp->fullBit(oldp+196,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display));
    bufp->fullIData(oldp+197,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i),32);
    bufp->fullBit(oldp+198,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arvalid))));
    bufp->fullBit(oldp+199,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rvalid))));
    bufp->fullBit(oldp+200,(vlSelf->ysyx_25030085_top__DOT__wb_done));
    bufp->fullIData(oldp+201,(0U),32);
    bufp->fullIData(oldp+202,(1U),32);
    bufp->fullIData(oldp+203,(2U),32);
    bufp->fullIData(oldp+204,(0x1800U),32);
    bufp->fullIData(oldp+205,(0x80U),32);
    bufp->fullIData(oldp+206,(8U),32);
    bufp->fullCData(oldp+207,(3U),7);
    bufp->fullCData(oldp+208,(0x23U),7);
    bufp->fullCData(oldp+209,(0x63U),7);
    bufp->fullCData(oldp+210,(0x6fU),7);
    bufp->fullCData(oldp+211,(0x67U),7);
    bufp->fullCData(oldp+212,(0x13U),7);
    bufp->fullCData(oldp+213,(0x33U),7);
    bufp->fullCData(oldp+214,(0x37U),7);
    bufp->fullCData(oldp+215,(0x17U),7);
    bufp->fullCData(oldp+216,(0x73U),7);
    bufp->fullCData(oldp+217,(0U),3);
    bufp->fullCData(oldp+218,(1U),3);
    bufp->fullCData(oldp+219,(2U),3);
    bufp->fullCData(oldp+220,(3U),3);
    bufp->fullCData(oldp+221,(4U),3);
    bufp->fullCData(oldp+222,(5U),3);
    bufp->fullCData(oldp+223,(6U),3);
    bufp->fullCData(oldp+224,(7U),3);
    bufp->fullCData(oldp+225,(0x20U),7);
    bufp->fullCData(oldp+226,(0U),7);
    bufp->fullCData(oldp+227,(0U),4);
    bufp->fullCData(oldp+228,(1U),4);
    bufp->fullCData(oldp+229,(2U),4);
    bufp->fullCData(oldp+230,(3U),4);
    bufp->fullCData(oldp+231,(4U),4);
    bufp->fullCData(oldp+232,(5U),4);
    bufp->fullCData(oldp+233,(6U),4);
    bufp->fullCData(oldp+234,(7U),4);
    bufp->fullCData(oldp+235,(8U),4);
    bufp->fullCData(oldp+236,(0xaU),4);
    bufp->fullCData(oldp+237,(9U),4);
    bufp->fullCData(oldp+238,(0U),2);
    bufp->fullCData(oldp+239,(1U),2);
    bufp->fullCData(oldp+240,(2U),2);
    bufp->fullSData(oldp+241,(0U),12);
    bufp->fullSData(oldp+242,(1U),12);
    bufp->fullSData(oldp+243,(0x302U),12);
    bufp->fullCData(oldp+244,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs1),5);
    bufp->fullCData(oldp+245,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs2),5);
    bufp->fullCData(oldp+246,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rd),5);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__s_rdata),32);
    bufp->fullIData(oldp+248,(3U),32);
    bufp->fullBit(oldp+249,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__has_data));
    bufp->fullBit(oldp+250,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wen));
}
