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
    tracep->declBit(c+236,"clk", false,-1);
    tracep->declBit(c+237,"rst", false,-1);
    tracep->declBus(c+238,"top_pc", false,-1, 31,0);
    tracep->declBus(c+239,"top_inst", false,-1, 31,0);
    tracep->declBit(c+240,"top_valid", false,-1);
    tracep->declBit(c+241,"top_ready", false,-1);
    tracep->declBit(c+242,"inst_done", false,-1);
    tracep->pushNamePrefix("ysyx_25030085_top ");
    tracep->declBit(c+236,"clk", false,-1);
    tracep->declBit(c+237,"rst", false,-1);
    tracep->declBus(c+238,"top_pc", false,-1, 31,0);
    tracep->declBus(c+239,"top_inst", false,-1, 31,0);
    tracep->declBit(c+240,"top_valid", false,-1);
    tracep->declBit(c+241,"top_ready", false,-1);
    tracep->declBit(c+242,"inst_done", false,-1);
    tracep->declBus(c+238,"next_pc", false,-1, 31,0);
    tracep->declBit(c+260,"wb_done", false,-1);
    tracep->declBit(c+17,"reg_wresp", false,-1);
    tracep->declBit(c+18,"wb_valid", false,-1);
    tracep->declBus(c+69,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+70,"if_id_pc", false,-1, 31,0);
    tracep->declBit(c+241,"id_if_ready", false,-1);
    tracep->declBit(c+71,"if_id_valid", false,-1);
    tracep->declBus(c+72,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+73,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+74,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+75,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+76,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+77,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+74,"id_ex_rs1", false,-1, 31,0);
    tracep->declBus(c+75,"id_ex_rs2", false,-1, 31,0);
    tracep->declBus(c+78,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+79,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+76,"id_ex_a5", false,-1, 31,0);
    tracep->declBus(c+80,"id_ex_ctrl", false,-1, 20,0);
    tracep->declBit(c+81,"id_ex_valid", false,-1);
    tracep->declBit(c+82,"ex_id_ready", false,-1);
    tracep->declBus(c+83,"ex_me_rd", false,-1, 4,0);
    tracep->declBus(c+243,"csr_data", false,-1, 31,0);
    tracep->declBus(c+84,"ex_me_ctrl", false,-1, 20,0);
    tracep->declBus(c+85,"ex_me_pc", false,-1, 31,0);
    tracep->declBus(c+86,"ex_me_imm", false,-1, 31,0);
    tracep->declBus(c+244,"ex_me_npc", false,-1, 31,0);
    tracep->declBus(c+87,"ex_me_rs2", false,-1, 31,0);
    tracep->declBus(c+88,"ex_me_alu", false,-1, 31,0);
    tracep->declBit(c+89,"ex_me_valid", false,-1);
    tracep->declBit(c+90,"me_ex_ready", false,-1);
    tracep->declBus(c+91,"me_wb_rd", false,-1, 4,0);
    tracep->declBus(c+92,"me_wb_ctrl", false,-1, 20,0);
    tracep->declBus(c+93,"me_wb_rdata", false,-1, 31,0);
    tracep->declBus(c+94,"me_wb_pc", false,-1, 31,0);
    tracep->declBus(c+95,"me_wb_imm", false,-1, 31,0);
    tracep->declBus(c+96,"me_wb_alu", false,-1, 31,0);
    tracep->declBus(c+97,"me_wb_npc", false,-1, 31,0);
    tracep->declBit(c+98,"me_wb_valid", false,-1);
    tracep->declBit(c+99,"wb_me_ready", false,-1);
    tracep->declBit(c+19,"reg_wen", false,-1);
    tracep->declBus(c+20,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+21,"reg_waddr", false,-1, 4,0);
    tracep->declBit(c+44,"if_axi4_arvalid", false,-1);
    tracep->declBit(c+62,"if_axi4_arready", false,-1);
    tracep->declBus(c+1,"if_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+63,"if_axi4_rvalid", false,-1);
    tracep->declBit(c+45,"if_axi4_rready", false,-1);
    tracep->declBus(c+64,"if_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"if_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+46,"ls_axi4_arvalid", false,-1);
    tracep->declBit(c+66,"ls_axi4_arready", false,-1);
    tracep->declBus(c+2,"ls_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+200,"ls_axi4_rvalid", false,-1);
    tracep->declBit(c+182,"ls_axi4_rready", false,-1);
    tracep->declBus(c+201,"ls_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+202,"ls_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+67,"arb_mem_axi4_arvalid", false,-1);
    tracep->declBit(c+3,"arb_mem_axi4_arready", false,-1);
    tracep->declBus(c+68,"arb_mem_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+4,"arb_mem_axi4_rvalid", false,-1);
    tracep->declBit(c+203,"arb_mem_axi4_rready", false,-1);
    tracep->declBus(c+5,"arb_mem_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+6,"arb_mem_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+47,"ls_axi4_awvalid", false,-1);
    tracep->declBit(c+22,"ls_axi4_awready", false,-1);
    tracep->declBus(c+48,"ls_axi4_awaddr", false,-1, 31,0);
    tracep->declBit(c+49,"ls_axi4_wvalid", false,-1);
    tracep->declBit(c+23,"ls_axi4_wready", false,-1);
    tracep->declBus(c+50,"ls_axi4_wdata", false,-1, 31,0);
    tracep->declBus(c+51,"ls_axi4_wstrb", false,-1, 3,0);
    tracep->declBit(c+183,"ls_axi4_bvalid", false,-1);
    tracep->declBit(c+184,"ls_axi4_bready", false,-1);
    tracep->declBus(c+185,"ls_axi4_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"if_req", false,-1);
    tracep->declBus(c+25,"if_addr", false,-1, 31,0);
    tracep->declBus(c+52,"biu_rdata_if", false,-1, 31,0);
    tracep->declBus(c+53,"biu_rresp_if", false,-1, 1,0);
    tracep->declBit(c+54,"biu_ready_if", false,-1);
    tracep->declBit(c+100,"lsu_req", false,-1);
    tracep->declBit(c+101,"lsu_wwe", false,-1);
    tracep->declBit(c+102,"lsu_rwe", false,-1);
    tracep->declBus(c+103,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+104,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+105,"lsu_strb", false,-1, 3,0);
    tracep->declBus(c+186,"biu_rresp_ls", false,-1, 1,0);
    tracep->declBus(c+187,"biu_wresp_ls", false,-1, 1,0);
    tracep->declBus(c+188,"biu_rdata_ls", false,-1, 31,0);
    tracep->declBit(c+106,"is_jar_call", false,-1);
    tracep->declBit(c+107,"is_jalr_call", false,-1);
    tracep->declBit(c+108,"is_jalr_ret", false,-1);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+236,"clk", false,-1);
    tracep->declBit(c+237,"rst", false,-1);
    tracep->declBit(c+44,"m1_arvalid", false,-1);
    tracep->declBit(c+62,"m1_arready", false,-1);
    tracep->declBus(c+1,"m1_araddr", false,-1, 31,0);
    tracep->declBit(c+63,"m1_rvalid", false,-1);
    tracep->declBit(c+45,"m1_rready", false,-1);
    tracep->declBus(c+64,"m1_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"m1_rresp", false,-1, 1,0);
    tracep->declBit(c+46,"m2_arvalid", false,-1);
    tracep->declBit(c+66,"m2_arready", false,-1);
    tracep->declBus(c+2,"m2_araddr", false,-1, 31,0);
    tracep->declBit(c+200,"m2_rvalid", false,-1);
    tracep->declBit(c+182,"m2_rready", false,-1);
    tracep->declBus(c+201,"m2_rdata", false,-1, 31,0);
    tracep->declBus(c+202,"m2_rresp", false,-1, 1,0);
    tracep->declBit(c+67,"s_arvalid", false,-1);
    tracep->declBit(c+3,"s_arready", false,-1);
    tracep->declBus(c+68,"s_araddr", false,-1, 31,0);
    tracep->declBit(c+4,"s_rvalid", false,-1);
    tracep->declBit(c+203,"s_rready", false,-1);
    tracep->declBus(c+5,"s_rdata", false,-1, 31,0);
    tracep->declBus(c+6,"s_rresp", false,-1, 1,0);
    tracep->declBus(c+261,"IDLE", false,-1, 31,0);
    tracep->declBus(c+262,"IF_MASTER", false,-1, 31,0);
    tracep->declBus(c+263,"LS_MASTER", false,-1, 31,0);
    tracep->declBus(c+26,"state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+236,"clk", false,-1);
    tracep->declBit(c+237,"rst", false,-1);
    tracep->declBit(c+81,"in_valid", false,-1);
    tracep->declBus(c+76,"in_a5", false,-1, 31,0);
    tracep->declBus(c+74,"in_rs1_data", false,-1, 31,0);
    tracep->declBus(c+75,"in_rs2_data", false,-1, 31,0);
    tracep->declBus(c+80,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+79,"in_imm", false,-1, 31,0);
    tracep->declBus(c+77,"in_rd", false,-1, 4,0);
    tracep->declBus(c+78,"in_pc", false,-1, 31,0);
    tracep->declBit(c+82,"in_ready", false,-1);
    tracep->declBit(c+89,"out_valid", false,-1);
    tracep->declBus(c+244,"out_next_pc", false,-1, 31,0);
    tracep->declBus(c+88,"out_Alu_Result", false,-1, 31,0);
    tracep->declBus(c+87,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+84,"out_ctrl", false,-1, 20,0);
    tracep->declBus(c+243,"csr_data", false,-1, 31,0);
    tracep->declBus(c+83,"rd_out", false,-1, 4,0);
    tracep->declBus(c+86,"imm_out", false,-1, 31,0);
    tracep->declBus(c+85,"pc_out", false,-1, 31,0);
    tracep->declBit(c+90,"out_ready", false,-1);
    tracep->declBus(c+261,"IDLE", false,-1, 31,0);
    tracep->declBus(c+262,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+263,"WAIT", false,-1, 31,0);
    tracep->declBus(c+109,"state", false,-1, 1,0);
    tracep->declBus(c+83,"rd", false,-1, 4,0);
    tracep->declBus(c+110,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+87,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+85,"pc", false,-1, 31,0);
    tracep->declBus(c+86,"imm", false,-1, 31,0);
    tracep->declBus(c+111,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+84,"ctrl", false,-1, 20,0);
    tracep->declBus(c+112,"B", false,-1, 31,0);
    tracep->declBus(c+113,"AluOp", false,-1, 3,0);
    tracep->declBit(c+114,"ALUSrc", false,-1);
    tracep->declBus(c+115,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+116,"is_ecall", false,-1);
    tracep->declBit(c+117,"is_mret", false,-1);
    tracep->declBit(c+118,"Branch", false,-1);
    tracep->declBus(c+119,"Jump", false,-1, 1,0);
    tracep->declBus(c+88,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+244,"next_pc", false,-1, 31,0);
    tracep->declBus(c+245,"mtvec", false,-1, 31,0);
    tracep->declBus(c+246,"mepc", false,-1, 31,0);
    tracep->pushNamePrefix("csr_regfile_init ");
    tracep->declBit(c+236,"clk", false,-1);
    tracep->declBit(c+237,"rst", false,-1);
    tracep->declBus(c+85,"pc", false,-1, 31,0);
    tracep->declBus(c+111,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+116,"is_ecall", false,-1);
    tracep->declBit(c+117,"is_mret", false,-1);
    tracep->declBus(c+115,"csr_wen", false,-1, 1,0);
    tracep->declBus(c+120,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+110,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+243,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+245,"mtvec_out", false,-1, 31,0);
    tracep->declBus(c+246,"mepc_out", false,-1, 31,0);
    tracep->declBus(c+247,"mstatus", false,-1, 31,0);
    tracep->declBus(c+245,"mtvec", false,-1, 31,0);
    tracep->declBus(c+246,"mepc", false,-1, 31,0);
    tracep->declBus(c+248,"mcause", false,-1, 31,0);
    tracep->declBus(c+243,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+264,"MSTATUS_MPP_MASK", false,-1, 31,0);
    tracep->declBus(c+265,"MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+266,"MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+236,"clk", false,-1);
    tracep->declBit(c+237,"rst", false,-1);
    tracep->declBit(c+71,"in_valid", false,-1);
    tracep->declBus(c+69,"in_inst", false,-1, 31,0);
    tracep->declBus(c+70,"in_pc", false,-1, 31,0);
    tracep->declBit(c+241,"in_ready", false,-1);
    tracep->declBus(c+72,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+73,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+74,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+75,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+76,"in_reg_a5", false,-1, 31,0);
    tracep->declBit(c+81,"out_valid", false,-1);
    tracep->declBus(c+78,"pc_out", false,-1, 31,0);
    tracep->declBus(c+74,"out_rs1_data", false,-1, 31,0);
    tracep->declBus(c+75,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+80,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+79,"imm_out", false,-1, 31,0);
    tracep->declBus(c+76,"reg_a5_out", false,-1, 31,0);
    tracep->declBus(c+77,"rd_out", false,-1, 4,0);
    tracep->declBit(c+82,"out_ready", false,-1);
    tracep->declBus(c+261,"IDLE", false,-1, 31,0);
    tracep->declBus(c+262,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+263,"WAIT", false,-1, 31,0);
    tracep->declBus(c+121,"state", false,-1, 1,0);
    tracep->declBus(c+122,"inst", false,-1, 31,0);
    tracep->declBus(c+78,"pc", false,-1, 31,0);
    tracep->declBit(c+123,"invalid", false,-1);
    tracep->declBit(c+124,"is_ebreak", false,-1);
    tracep->declBus(c+125,"opcode", false,-1, 6,0);
    tracep->declBus(c+126,"func3", false,-1, 2,0);
    tracep->declBus(c+127,"func7", false,-1, 6,0);
    tracep->declBus(c+79,"imm", false,-1, 31,0);
    tracep->declBus(c+128,"immI", false,-1, 31,0);
    tracep->declBus(c+129,"immJ", false,-1, 31,0);
    tracep->declBus(c+130,"immU", false,-1, 31,0);
    tracep->declBus(c+131,"immS", false,-1, 31,0);
    tracep->declBus(c+132,"immB", false,-1, 31,0);
    tracep->declBus(c+77,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+133,"MemWrite", false,-1);
    tracep->declBit(c+134,"MemRead", false,-1);
    tracep->declBus(c+135,"MemOp", false,-1, 2,0);
    tracep->declBus(c+136,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+137,"RegWrite", false,-1);
    tracep->declBit(c+138,"Branch", false,-1);
    tracep->declBus(c+139,"Jump", false,-1, 1,0);
    tracep->declBit(c+140,"ALUSrc", false,-1);
    tracep->declBus(c+141,"AluOp", false,-1, 3,0);
    tracep->declBus(c+142,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+143,"is_ecall", false,-1);
    tracep->declBit(c+144,"is_mret", false,-1);
    tracep->declBus(c+80,"ctrl_bus", false,-1, 20,0);
    tracep->declBus(c+267,"OP_LOAD", false,-1, 6,0);
    tracep->declBus(c+268,"OP_STORE", false,-1, 6,0);
    tracep->declBus(c+269,"OP_BRANCH", false,-1, 6,0);
    tracep->declBus(c+270,"OP_JAL", false,-1, 6,0);
    tracep->declBus(c+271,"OP_JALR", false,-1, 6,0);
    tracep->declBus(c+272,"OP_OP_IMM", false,-1, 6,0);
    tracep->declBus(c+273,"OP_OP", false,-1, 6,0);
    tracep->declBus(c+274,"OP_LUI", false,-1, 6,0);
    tracep->declBus(c+275,"OP_AUIPC", false,-1, 6,0);
    tracep->declBus(c+276,"OP_SYSTEM", false,-1, 6,0);
    tracep->declBus(c+277,"F3_ADD_SUB", false,-1, 2,0);
    tracep->declBus(c+278,"F3_SLL", false,-1, 2,0);
    tracep->declBus(c+279,"F3_SLT", false,-1, 2,0);
    tracep->declBus(c+280,"F3_SLTU", false,-1, 2,0);
    tracep->declBus(c+281,"F3_XOR", false,-1, 2,0);
    tracep->declBus(c+282,"F3_SR", false,-1, 2,0);
    tracep->declBus(c+283,"F3_OR", false,-1, 2,0);
    tracep->declBus(c+284,"F3_AND", false,-1, 2,0);
    tracep->declBus(c+285,"F7_SUB", false,-1, 6,0);
    tracep->declBus(c+285,"F7_SRA", false,-1, 6,0);
    tracep->declBus(c+286,"F7_DEFAULT", false,-1, 6,0);
    tracep->declBus(c+287,"ALU_ADD", false,-1, 3,0);
    tracep->declBus(c+288,"ALU_SLL", false,-1, 3,0);
    tracep->declBus(c+289,"ALU_SLT", false,-1, 3,0);
    tracep->declBus(c+290,"ALU_SLTU", false,-1, 3,0);
    tracep->declBus(c+291,"ALU_XOR", false,-1, 3,0);
    tracep->declBus(c+292,"ALU_SRA", false,-1, 3,0);
    tracep->declBus(c+293,"ALU_SRL", false,-1, 3,0);
    tracep->declBus(c+294,"ALU_OR", false,-1, 3,0);
    tracep->declBus(c+295,"ALU_AND", false,-1, 3,0);
    tracep->declBus(c+296,"ALU_SUB", false,-1, 3,0);
    tracep->declBus(c+297,"ALU_PCADD", false,-1, 3,0);
    tracep->declBus(c+298,"JUMP_NONE", false,-1, 1,0);
    tracep->declBus(c+299,"JUMP_JAL", false,-1, 1,0);
    tracep->declBus(c+300,"JUMP_JALR", false,-1, 1,0);
    tracep->declBus(c+277,"MTR_ALU", false,-1, 2,0);
    tracep->declBus(c+278,"MTR_MEM", false,-1, 2,0);
    tracep->declBus(c+279,"MTR_PCP4", false,-1, 2,0);
    tracep->declBus(c+280,"MTR_IMM", false,-1, 2,0);
    tracep->declBus(c+281,"MTR_CSR", false,-1, 2,0);
    tracep->declBus(c+277,"OP_LW", false,-1, 2,0);
    tracep->declBus(c+278,"OP_LH", false,-1, 2,0);
    tracep->declBus(c+279,"OP_LB", false,-1, 2,0);
    tracep->declBus(c+280,"OP_LHU", false,-1, 2,0);
    tracep->declBus(c+281,"OP_LBU", false,-1, 2,0);
    tracep->declBus(c+282,"OP_SW", false,-1, 2,0);
    tracep->declBus(c+283,"OP_SH", false,-1, 2,0);
    tracep->declBus(c+284,"OP_SB", false,-1, 2,0);
    tracep->declBus(c+298,"CSR_NONE", false,-1, 1,0);
    tracep->declBus(c+299,"CSR_WRITE", false,-1, 1,0);
    tracep->declBus(c+300,"CSR_SET", false,-1, 1,0);
    tracep->declBus(c+301,"ECALL_CODE", false,-1, 11,0);
    tracep->declBus(c+302,"EBREAK_CODE", false,-1, 11,0);
    tracep->declBus(c+303,"MRET_CODE", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifbiu ");
    tracep->declBus(c+304,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+305,"LFSR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+236,"clk", false,-1);
    tracep->declBit(c+237,"rst", false,-1);
    tracep->declBit(c+24,"if_req", false,-1);
    tracep->declBus(c+25,"if_addr", false,-1, 31,0);
    tracep->declBus(c+52,"biu_rdata", false,-1, 31,0);
    tracep->declBit(c+54,"biu_ready", false,-1);
    tracep->declBus(c+53,"biu_rresp", false,-1, 1,0);
    tracep->declBus(c+1,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+44,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+62,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+64,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+65,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+63,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+45,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+249,"AR_active", false,-1);
    tracep->declBit(c+250,"R_active", false,-1);
    tracep->declBus(c+7,"read_cnt", false,-1, 7,0);
    tracep->declBit(c+8,"read_pending", false,-1);
    tracep->declBus(c+9,"lfsr", false,-1, 7,0);
    tracep->declBit(c+10,"lfsr_feedback", false,-1);
    tracep->declBus(c+306,"rand_delay", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+236,"clk", false,-1);
    tracep->declBit(c+237,"rst", false,-1);
    tracep->declBit(c+18,"wb_done", false,-1);
    tracep->declBus(c+238,"next_pc", false,-1, 31,0);
    tracep->declBit(c+54,"biu_ready", false,-1);
    tracep->declBus(c+52,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+25,"if_addr", false,-1, 31,0);
    tracep->declBit(c+24,"if_req", false,-1);
    tracep->declBit(c+71,"out_valid", false,-1);
    tracep->declBus(c+69,"inst", false,-1, 31,0);
    tracep->declBus(c+70,"pc", false,-1, 31,0);
    tracep->declBit(c+241,"out_ready", false,-1);
    tracep->declBus(c+27,"current_pc", false,-1, 31,0);
    tracep->declBus(c+28,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+29,"state", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsbiu ");
    tracep->declBus(c+307,"READ_MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+307,"WRITE_MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+305,"LFSR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+236,"clk", false,-1);
    tracep->declBit(c+237,"rst", false,-1);
    tracep->declBus(c+103,"lsu_addr", false,-1, 31,0);
    tracep->declBit(c+101,"lsu_wwe", false,-1);
    tracep->declBit(c+102,"lsu_rwe", false,-1);
    tracep->declBus(c+104,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+105,"lsu_strb", false,-1, 3,0);
    tracep->declBit(c+100,"lsu_req", false,-1);
    tracep->declBus(c+188,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+187,"biu_wresp", false,-1, 1,0);
    tracep->declBus(c+186,"biu_rresp", false,-1, 1,0);
    tracep->declBus(c+2,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+46,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+66,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+201,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+202,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+200,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+182,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+48,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+47,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+22,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+50,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+51,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+49,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+23,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+185,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+183,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+184,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+251,"AW_active", false,-1);
    tracep->declBit(c+252,"W_active", false,-1);
    tracep->declBit(c+189,"B_active", false,-1);
    tracep->declBit(c+253,"AR_active", false,-1);
    tracep->declBit(c+254,"R_active", false,-1);
    tracep->declBus(c+55,"strb_reg", false,-1, 3,0);
    tracep->declBus(c+11,"read_cnt", false,-1, 7,0);
    tracep->declBit(c+12,"read_pending", false,-1);
    tracep->declBus(c+56,"write_addr_cnt", false,-1, 7,0);
    tracep->declBit(c+57,"write_addr_pending", false,-1);
    tracep->declBus(c+58,"write_data_cnt", false,-1, 7,0);
    tracep->declBit(c+59,"write_data_pending", false,-1);
    tracep->declBus(c+13,"lfsr_addr", false,-1, 7,0);
    tracep->declBus(c+14,"lfsr_data", false,-1, 7,0);
    tracep->declBit(c+15,"lfsrr_feedback", false,-1);
    tracep->declBit(c+16,"lfsrw_feedback", false,-1);
    tracep->declBus(c+306,"read_rand_delay", false,-1, 7,0);
    tracep->declBus(c+306,"write_rand_delay", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+236,"clk", false,-1);
    tracep->declBit(c+237,"rst", false,-1);
    tracep->declBit(c+89,"in_valid", false,-1);
    tracep->declBus(c+84,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+83,"in_rd", false,-1, 4,0);
    tracep->declBus(c+86,"in_imm", false,-1, 31,0);
    tracep->declBus(c+244,"in_npc", false,-1, 31,0);
    tracep->declBus(c+85,"in_pc", false,-1, 31,0);
    tracep->declBus(c+87,"in_lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+88,"in_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+90,"in_ready", false,-1);
    tracep->declBit(c+98,"out_valid", false,-1);
    tracep->declBus(c+93,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+92,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+95,"imm_out", false,-1, 31,0);
    tracep->declBus(c+97,"npc_out", false,-1, 31,0);
    tracep->declBus(c+94,"pc_out", false,-1, 31,0);
    tracep->declBus(c+91,"rd_out", false,-1, 4,0);
    tracep->declBus(c+96,"alu_result", false,-1, 31,0);
    tracep->declBit(c+99,"out_ready", false,-1);
    tracep->declBit(c+100,"lsu_req", false,-1);
    tracep->declBit(c+101,"lsu_wwe", false,-1);
    tracep->declBit(c+102,"lsu_rwe", false,-1);
    tracep->declBus(c+103,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+104,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+105,"lsu_strb", false,-1, 3,0);
    tracep->declBus(c+186,"biu_rresp", false,-1, 1,0);
    tracep->declBus(c+187,"biu_wresp", false,-1, 1,0);
    tracep->declBus(c+188,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+261,"IDLE", false,-1, 31,0);
    tracep->declBus(c+262,"STORE", false,-1, 31,0);
    tracep->declBus(c+263,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+277,"OP_LW", false,-1, 2,0);
    tracep->declBus(c+278,"OP_LH", false,-1, 2,0);
    tracep->declBus(c+279,"OP_LB", false,-1, 2,0);
    tracep->declBus(c+280,"OP_LHU", false,-1, 2,0);
    tracep->declBus(c+281,"OP_LBU", false,-1, 2,0);
    tracep->declBus(c+282,"OP_SW", false,-1, 2,0);
    tracep->declBus(c+283,"OP_SH", false,-1, 2,0);
    tracep->declBus(c+284,"OP_SB", false,-1, 2,0);
    tracep->declBus(c+145,"state", false,-1, 1,0);
    tracep->declBit(c+30,"has_data", false,-1);
    tracep->declBus(c+92,"ctrl", false,-1, 20,0);
    tracep->declBus(c+91,"rd", false,-1, 4,0);
    tracep->declBus(c+146,"wdata", false,-1, 31,0);
    tracep->declBus(c+96,"addr", false,-1, 31,0);
    tracep->declBus(c+94,"pc", false,-1, 31,0);
    tracep->declBus(c+95,"imm", false,-1, 31,0);
    tracep->declBus(c+97,"npc", false,-1, 31,0);
    tracep->declBus(c+204,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+101,"MemWrite", false,-1);
    tracep->declBit(c+102,"MemRead", false,-1);
    tracep->declBus(c+147,"MemOp", false,-1, 2,0);
    tracep->declBus(c+148,"offset", false,-1, 1,0);
    tracep->declBus(c+103,"aligned_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+236,"clk", false,-1);
    tracep->declBit(c+237,"rst", false,-1);
    tracep->declBus(c+72,"reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+73,"reg_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+74,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+75,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+19,"reg_wen", false,-1);
    tracep->declBit(c+18,"in_valid", false,-1);
    tracep->declBus(c+21,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+20,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+76,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+17,"w_resp", false,-1);
    tracep->declBus(c+308,"rs1", false,-1, 4,0);
    tracep->declBus(c+309,"rs2", false,-1, 4,0);
    tracep->declBus(c+310,"rd", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+149+i*1,"register", true,(i+0), 31,0);
    }
    tracep->declBit(c+255,"is_info_register", false,-1);
    tracep->declBit(c+256,"is_en_display", false,-1);
    tracep->declBus(c+257,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+31,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+236,"clk", false,-1);
    tracep->declBit(c+237,"rst", false,-1);
    tracep->declBus(c+68,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+67,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+3,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+5,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+6,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+4,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+203,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+48,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+47,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+22,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+50,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+51,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+49,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+23,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+185,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+183,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+184,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+311,"s_rdata", false,-1, 31,0);
    tracep->declBit(c+251,"AW_active", false,-1);
    tracep->declBit(c+252,"W_active", false,-1);
    tracep->declBit(c+189,"B_active", false,-1);
    tracep->declBit(c+258,"AR_active", false,-1);
    tracep->declBit(c+259,"R_active", false,-1);
    tracep->declBit(c+205,"addr_full", false,-1);
    tracep->declBit(c+206,"data_full", false,-1);
    tracep->declBit(c+207,"addr_empty", false,-1);
    tracep->declBit(c+208,"data_empty", false,-1);
    tracep->declBit(c+209,"addr_wr_en", false,-1);
    tracep->declBit(c+210,"data_wr_en", false,-1);
    tracep->declBus(c+190,"fifo_addr_out", false,-1, 31,0);
    tracep->declQuad(c+191,"fifo_data_out", false,-1, 35,0);
    tracep->declBus(c+193,"fifo_wdata_out", false,-1, 31,0);
    tracep->declBus(c+194,"fifo_wstrb_out", false,-1, 3,0);
    tracep->declBit(c+211,"fifo_rd_en", false,-1);
    tracep->declBit(c+195,"data_process", false,-1);
    tracep->pushNamePrefix("addr_fifo ");
    tracep->declBus(c+312,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+305,"FIFO_DEPTH", false,-1, 31,0);
    tracep->declBit(c+236,"clk", false,-1);
    tracep->declBit(c+237,"rst", false,-1);
    tracep->declBus(c+48,"din", false,-1, 31,0);
    tracep->declBit(c+209,"wr_en", false,-1);
    tracep->declBit(c+205,"full", false,-1);
    tracep->declBus(c+190,"dout", false,-1, 31,0);
    tracep->declBit(c+211,"rd_en", false,-1);
    tracep->declBit(c+207,"empty", false,-1);
    tracep->declBus(c+313,"PTR_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+212+i*1,"fifo_mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+32,"wr_ptr", false,-1, 3,0);
    tracep->declBus(c+196,"rd_ptr", false,-1, 3,0);
    tracep->declBus(c+33,"wr_addr", false,-1, 2,0);
    tracep->declBus(c+197,"rd_addr", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_fifo ");
    tracep->declBus(c+314,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+305,"FIFO_DEPTH", false,-1, 31,0);
    tracep->declBit(c+236,"clk", false,-1);
    tracep->declBit(c+237,"rst", false,-1);
    tracep->declQuad(c+60,"din", false,-1, 35,0);
    tracep->declBit(c+210,"wr_en", false,-1);
    tracep->declBit(c+206,"full", false,-1);
    tracep->declQuad(c+191,"dout", false,-1, 35,0);
    tracep->declBit(c+211,"rd_en", false,-1);
    tracep->declBit(c+208,"empty", false,-1);
    tracep->declBus(c+313,"PTR_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+220+i*2,"fifo_mem", true,(i+0), 35,0);
    }
    tracep->declBus(c+34,"wr_ptr", false,-1, 3,0);
    tracep->declBus(c+198,"rd_ptr", false,-1, 3,0);
    tracep->declBus(c+35,"wr_addr", false,-1, 2,0);
    tracep->declBus(c+199,"rd_addr", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+236,"clk", false,-1);
    tracep->declBit(c+237,"rst", false,-1);
    tracep->declBit(c+98,"in_valid", false,-1);
    tracep->declBus(c+96,"in_alu_result", false,-1, 31,0);
    tracep->declBus(c+93,"in_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+97,"in_npc", false,-1, 31,0);
    tracep->declBus(c+94,"in_pc", false,-1, 31,0);
    tracep->declBus(c+95,"in_imm", false,-1, 31,0);
    tracep->declBus(c+92,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+243,"in_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+91,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+99,"in_ready", false,-1);
    tracep->declBit(c+18,"out_valid", false,-1);
    tracep->declBus(c+238,"next_pc", false,-1, 31,0);
    tracep->declBit(c+19,"reg_wen", false,-1);
    tracep->declBus(c+21,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+20,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+261,"IDLE", false,-1, 31,0);
    tracep->declBus(c+262,"CHOOSE", false,-1, 31,0);
    tracep->declBus(c+263,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+313,"DONE", false,-1, 31,0);
    tracep->declBus(c+181,"state", false,-1, 1,0);
    tracep->declBit(c+315,"has_data", false,-1);
    tracep->declBus(c+36,"ctrl", false,-1, 20,0);
    tracep->declBus(c+21,"rd", false,-1, 4,0);
    tracep->declBus(c+37,"npc", false,-1, 31,0);
    tracep->declBus(c+38,"pc", false,-1, 31,0);
    tracep->declBus(c+39,"imm", false,-1, 31,0);
    tracep->declBus(c+40,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+41,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+42,"alu_result", false,-1, 31,0);
    tracep->declBit(c+316,"wen", false,-1);
    tracep->declBus(c+20,"wb_data", false,-1, 31,0);
    tracep->declBus(c+43,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+19,"RegWrite", false,-1);
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
    bufp->fullCData(oldp+11,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_cnt),8);
    bufp->fullBit(oldp+12,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_pending));
    bufp->fullCData(oldp+13,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr),8);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data),8);
    bufp->fullBit(oldp+15,((1U & VL_REDXOR_8((0xb8U 
                                              & (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr))))));
    bufp->fullBit(oldp+16,((1U & VL_REDXOR_8((0x9cU 
                                              & (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data))))));
    bufp->fullBit(oldp+17,(vlSelf->ysyx_25030085_top__DOT__reg_wresp));
    bufp->fullBit(oldp+18,(vlSelf->ysyx_25030085_top__DOT__wb_valid));
    bufp->fullBit(oldp+19,((1U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                  >> 0x10U))));
    bufp->fullIData(oldp+20,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wb_data),32);
    bufp->fullCData(oldp+21,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd),5);
    bufp->fullBit(oldp+22,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready));
    bufp->fullBit(oldp+23,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready));
    bufp->fullBit(oldp+24,(vlSelf->ysyx_25030085_top__DOT__if_req));
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25030085_top__DOT__if_addr),32);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state),2);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_reg),32);
    bufp->fullCData(oldp+29,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state),3);
    bufp->fullBit(oldp+30,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__has_data));
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+32,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr),4);
    bufp->fullCData(oldp+33,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr))),3);
    bufp->fullCData(oldp+34,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr),4);
    bufp->fullCData(oldp+35,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr))),3);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl),21);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result),32);
    bufp->fullCData(oldp+43,((7U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                    >> 0xaU))),3);
    bufp->fullBit(oldp+44,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid));
    bufp->fullBit(oldp+45,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready));
    bufp->fullBit(oldp+46,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid));
    bufp->fullBit(oldp+47,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid));
    bufp->fullIData(oldp+48,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr),32);
    bufp->fullBit(oldp+49,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid));
    bufp->fullIData(oldp+50,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wdata),32);
    bufp->fullCData(oldp+51,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wstrb),4);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_if),32);
    bufp->fullCData(oldp+53,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_if),2);
    bufp->fullBit(oldp+54,(vlSelf->ysyx_25030085_top__DOT__biu_ready_if));
    bufp->fullCData(oldp+55,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__strb_reg),4);
    bufp->fullCData(oldp+56,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_cnt),8);
    bufp->fullBit(oldp+57,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_pending));
    bufp->fullCData(oldp+58,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_cnt),8);
    bufp->fullBit(oldp+59,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_pending));
    bufp->fullQData(oldp+60,((((QData)((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wstrb)) 
                               << 0x20U) | (QData)((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wdata)))),36);
    bufp->fullBit(oldp+62,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready));
    bufp->fullBit(oldp+63,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid));
    bufp->fullIData(oldp+64,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rdata),32);
    bufp->fullCData(oldp+65,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rresp),2);
    bufp->fullBit(oldp+66,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arvalid));
    bufp->fullIData(oldp+68,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_araddr),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_25030085_top__DOT__if_id_inst),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_25030085_top__DOT__if_id_pc),32);
    bufp->fullBit(oldp+71,(vlSelf->ysyx_25030085_top__DOT__if_id_valid));
    bufp->fullCData(oldp+72,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+73,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25030085_top__DOT__rs1_data),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25030085_top__DOT__rs2_data),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                             [0xfU]),32);
    bufp->fullCData(oldp+77,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm),32);
    bufp->fullIData(oldp+80,((((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen) 
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
    bufp->fullBit(oldp+81,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))));
    bufp->fullBit(oldp+82,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
    bufp->fullCData(oldp+83,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rd),5);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl),21);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result),32);
    bufp->fullBit(oldp+89,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
    bufp->fullBit(oldp+90,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
    bufp->fullCData(oldp+91,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rd),5);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl),21);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_25030085_top__DOT__me_wb_rdata),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__pc),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__imm),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__npc),32);
    bufp->fullBit(oldp+98,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
    bufp->fullBit(oldp+99,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))));
    bufp->fullBit(oldp+100,(vlSelf->ysyx_25030085_top__DOT__lsu_req));
    bufp->fullBit(oldp+101,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                   >> 6U))));
    bufp->fullBit(oldp+102,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                   >> 5U))));
    bufp->fullIData(oldp+103,((0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_25030085_top__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+105,(vlSelf->ysyx_25030085_top__DOT__lsu_strb),4);
    bufp->fullBit(oldp+106,((IData)(((0x80U == (0xf80U 
                                                & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                     & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullBit(oldp+107,((IData)(((0x80U == (0xf80U 
                                                & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                     & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullBit(oldp+108,((IData)(((0x8000U == (0xf8f80U 
                                                  & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                     & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullCData(oldp+109,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state),2);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__reg_a5),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__B),32);
    bufp->fullCData(oldp+113,((0xfU & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                       >> 1U))),4);
    bufp->fullBit(oldp+114,((1U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)));
    bufp->fullCData(oldp+115,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0x13U))),2);
    bufp->fullBit(oldp+116,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                   >> 0x11U))));
    bufp->fullBit(oldp+117,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                   >> 0x12U))));
    bufp->fullBit(oldp+118,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                   >> 0xdU))));
    bufp->fullCData(oldp+119,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0xeU))),2);
    bufp->fullSData(oldp+120,((0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm)),12);
    bufp->fullCData(oldp+121,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state),2);
    bufp->fullIData(oldp+122,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst),32);
    bufp->fullBit(oldp+123,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid));
    bufp->fullBit(oldp+124,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak));
    bufp->fullCData(oldp+125,((0x7fU & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),7);
    bufp->fullCData(oldp+126,((7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+127,((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI),32);
    bufp->fullIData(oldp+129,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+130,((0xfffff000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),32);
    bufp->fullIData(oldp+131,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+132,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
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
    bufp->fullBit(oldp+133,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemWrite));
    bufp->fullBit(oldp+134,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemRead));
    bufp->fullCData(oldp+135,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp),3);
    bufp->fullCData(oldp+136,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg),3);
    bufp->fullBit(oldp+137,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite));
    bufp->fullBit(oldp+138,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Branch));
    bufp->fullCData(oldp+139,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump),2);
    bufp->fullBit(oldp+140,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc));
    bufp->fullCData(oldp+141,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp),4);
    bufp->fullCData(oldp+142,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen),2);
    bufp->fullBit(oldp+143,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall));
    bufp->fullBit(oldp+144,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret));
    bufp->fullCData(oldp+145,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state),2);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__wdata),32);
    bufp->fullCData(oldp+147,((7U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                     >> 7U))),3);
    bufp->fullCData(oldp+148,((3U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),2);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[1]),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[2]),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[3]),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[4]),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[5]),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[6]),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[7]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[8]),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[9]),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[10]),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[11]),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[12]),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[13]),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[14]),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[15]),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[16]),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[17]),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[18]),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[19]),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[20]),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[21]),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[22]),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[23]),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[24]),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[25]),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[26]),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[27]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[28]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[29]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[30]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[31]),32);
    bufp->fullCData(oldp+181,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state),2);
    bufp->fullBit(oldp+182,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready));
    bufp->fullBit(oldp+183,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid));
    bufp->fullBit(oldp+184,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready));
    bufp->fullCData(oldp+185,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bresp),2);
    bufp->fullCData(oldp+186,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_ls),2);
    bufp->fullCData(oldp+187,(vlSelf->ysyx_25030085_top__DOT__biu_wresp_ls),2);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls),32);
    bufp->fullBit(oldp+189,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid))));
    bufp->fullIData(oldp+190,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_addr_out),32);
    bufp->fullQData(oldp+191,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_data_out),36);
    bufp->fullIData(oldp+193,((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_data_out)),32);
    bufp->fullCData(oldp+194,((0xfU & (IData)((vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_data_out 
                                               >> 0x20U)))),4);
    bufp->fullBit(oldp+195,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_process));
    bufp->fullCData(oldp+196,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr),4);
    bufp->fullCData(oldp+197,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr))),3);
    bufp->fullCData(oldp+198,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr),4);
    bufp->fullCData(oldp+199,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr))),3);
    bufp->fullBit(oldp+200,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid));
    bufp->fullIData(oldp+201,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata),32);
    bufp->fullCData(oldp+202,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp),2);
    bufp->fullBit(oldp+203,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rready));
    bufp->fullIData(oldp+204,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__lsu_rdata),32);
    bufp->fullBit(oldp+205,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_full));
    bufp->fullBit(oldp+206,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_full));
    bufp->fullBit(oldp+207,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_empty));
    bufp->fullBit(oldp+208,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_empty));
    bufp->fullBit(oldp+209,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_wr_en));
    bufp->fullBit(oldp+210,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_wr_en));
    bufp->fullBit(oldp+211,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_rd_en));
    bufp->fullIData(oldp+212,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[0]),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[1]),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[2]),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[3]),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[4]),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[5]),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[6]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[7]),32);
    bufp->fullQData(oldp+220,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[0]),36);
    bufp->fullQData(oldp+222,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[1]),36);
    bufp->fullQData(oldp+224,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[2]),36);
    bufp->fullQData(oldp+226,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[3]),36);
    bufp->fullQData(oldp+228,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[4]),36);
    bufp->fullQData(oldp+230,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[5]),36);
    bufp->fullQData(oldp+232,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[6]),36);
    bufp->fullQData(oldp+234,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[7]),36);
    bufp->fullBit(oldp+236,(vlSelf->clk));
    bufp->fullBit(oldp+237,(vlSelf->rst));
    bufp->fullIData(oldp+238,(vlSelf->top_pc),32);
    bufp->fullIData(oldp+239,(vlSelf->top_inst),32);
    bufp->fullBit(oldp+240,(vlSelf->top_valid));
    bufp->fullBit(oldp+241,(vlSelf->top_ready));
    bufp->fullBit(oldp+242,(vlSelf->inst_done));
    bufp->fullIData(oldp+243,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
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
    bufp->fullIData(oldp+244,(((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
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
    bufp->fullIData(oldp+245,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc),32);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus),32);
    bufp->fullIData(oldp+248,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause),32);
    bufp->fullBit(oldp+249,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid))));
    bufp->fullBit(oldp+250,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid))));
    bufp->fullBit(oldp+251,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid))));
    bufp->fullBit(oldp+252,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid))));
    bufp->fullBit(oldp+253,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid))));
    bufp->fullBit(oldp+254,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid))));
    bufp->fullBit(oldp+255,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register));
    bufp->fullBit(oldp+256,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display));
    bufp->fullIData(oldp+257,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i),32);
    bufp->fullBit(oldp+258,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arvalid))));
    bufp->fullBit(oldp+259,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rvalid))));
    bufp->fullBit(oldp+260,(vlSelf->ysyx_25030085_top__DOT__wb_done));
    bufp->fullIData(oldp+261,(0U),32);
    bufp->fullIData(oldp+262,(1U),32);
    bufp->fullIData(oldp+263,(2U),32);
    bufp->fullIData(oldp+264,(0x1800U),32);
    bufp->fullIData(oldp+265,(0x80U),32);
    bufp->fullIData(oldp+266,(8U),32);
    bufp->fullCData(oldp+267,(3U),7);
    bufp->fullCData(oldp+268,(0x23U),7);
    bufp->fullCData(oldp+269,(0x63U),7);
    bufp->fullCData(oldp+270,(0x6fU),7);
    bufp->fullCData(oldp+271,(0x67U),7);
    bufp->fullCData(oldp+272,(0x13U),7);
    bufp->fullCData(oldp+273,(0x33U),7);
    bufp->fullCData(oldp+274,(0x37U),7);
    bufp->fullCData(oldp+275,(0x17U),7);
    bufp->fullCData(oldp+276,(0x73U),7);
    bufp->fullCData(oldp+277,(0U),3);
    bufp->fullCData(oldp+278,(1U),3);
    bufp->fullCData(oldp+279,(2U),3);
    bufp->fullCData(oldp+280,(3U),3);
    bufp->fullCData(oldp+281,(4U),3);
    bufp->fullCData(oldp+282,(5U),3);
    bufp->fullCData(oldp+283,(6U),3);
    bufp->fullCData(oldp+284,(7U),3);
    bufp->fullCData(oldp+285,(0x20U),7);
    bufp->fullCData(oldp+286,(0U),7);
    bufp->fullCData(oldp+287,(0U),4);
    bufp->fullCData(oldp+288,(1U),4);
    bufp->fullCData(oldp+289,(2U),4);
    bufp->fullCData(oldp+290,(3U),4);
    bufp->fullCData(oldp+291,(4U),4);
    bufp->fullCData(oldp+292,(5U),4);
    bufp->fullCData(oldp+293,(6U),4);
    bufp->fullCData(oldp+294,(7U),4);
    bufp->fullCData(oldp+295,(8U),4);
    bufp->fullCData(oldp+296,(0xaU),4);
    bufp->fullCData(oldp+297,(9U),4);
    bufp->fullCData(oldp+298,(0U),2);
    bufp->fullCData(oldp+299,(1U),2);
    bufp->fullCData(oldp+300,(2U),2);
    bufp->fullSData(oldp+301,(0U),12);
    bufp->fullSData(oldp+302,(1U),12);
    bufp->fullSData(oldp+303,(0x302U),12);
    bufp->fullIData(oldp+304,(0x14U),32);
    bufp->fullIData(oldp+305,(8U),32);
    bufp->fullCData(oldp+306,(0U),8);
    bufp->fullIData(oldp+307,(0xc8U),32);
    bufp->fullCData(oldp+308,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs1),5);
    bufp->fullCData(oldp+309,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs2),5);
    bufp->fullCData(oldp+310,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rd),5);
    bufp->fullIData(oldp+311,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__s_rdata),32);
    bufp->fullIData(oldp+312,(0x20U),32);
    bufp->fullIData(oldp+313,(3U),32);
    bufp->fullIData(oldp+314,(0x24U),32);
    bufp->fullBit(oldp+315,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__has_data));
    bufp->fullBit(oldp+316,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wen));
}
