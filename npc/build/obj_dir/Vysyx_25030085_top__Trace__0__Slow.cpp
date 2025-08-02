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
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBus(c+296,"top_pc", false,-1, 31,0);
    tracep->declBus(c+297,"top_inst", false,-1, 31,0);
    tracep->declBit(c+298,"top_valid", false,-1);
    tracep->declBit(c+299,"top_ready", false,-1);
    tracep->declBit(c+300,"inst_done", false,-1);
    tracep->pushNamePrefix("ysyx_25030085_top ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBus(c+296,"top_pc", false,-1, 31,0);
    tracep->declBus(c+297,"top_inst", false,-1, 31,0);
    tracep->declBit(c+298,"top_valid", false,-1);
    tracep->declBit(c+299,"top_ready", false,-1);
    tracep->declBit(c+300,"inst_done", false,-1);
    tracep->declBus(c+296,"next_pc", false,-1, 31,0);
    tracep->declBit(c+325,"wb_done", false,-1);
    tracep->declBit(c+44,"reg_wresp", false,-1);
    tracep->declBit(c+45,"wb_valid", false,-1);
    tracep->declBus(c+166,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+167,"if_id_pc", false,-1, 31,0);
    tracep->declBit(c+299,"id_if_ready", false,-1);
    tracep->declBit(c+168,"if_id_valid", false,-1);
    tracep->declBus(c+169,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+170,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+171,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+172,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+173,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+174,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+171,"id_ex_rs1", false,-1, 31,0);
    tracep->declBus(c+172,"id_ex_rs2", false,-1, 31,0);
    tracep->declBus(c+175,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+176,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+173,"id_ex_a5", false,-1, 31,0);
    tracep->declBus(c+177,"id_ex_ctrl", false,-1, 20,0);
    tracep->declBit(c+178,"id_ex_valid", false,-1);
    tracep->declBit(c+179,"ex_id_ready", false,-1);
    tracep->declBus(c+180,"ex_me_rd", false,-1, 4,0);
    tracep->declBus(c+301,"csr_data", false,-1, 31,0);
    tracep->declBus(c+181,"ex_me_ctrl", false,-1, 20,0);
    tracep->declBus(c+182,"ex_me_pc", false,-1, 31,0);
    tracep->declBus(c+183,"ex_me_imm", false,-1, 31,0);
    tracep->declBus(c+302,"ex_me_npc", false,-1, 31,0);
    tracep->declBus(c+184,"ex_me_rs2", false,-1, 31,0);
    tracep->declBus(c+185,"ex_me_alu", false,-1, 31,0);
    tracep->declBit(c+186,"ex_me_valid", false,-1);
    tracep->declBit(c+187,"me_ex_ready", false,-1);
    tracep->declBus(c+188,"me_wb_rd", false,-1, 4,0);
    tracep->declBus(c+189,"me_wb_ctrl", false,-1, 20,0);
    tracep->declBus(c+190,"me_wb_rdata", false,-1, 31,0);
    tracep->declBus(c+191,"me_wb_pc", false,-1, 31,0);
    tracep->declBus(c+192,"me_wb_imm", false,-1, 31,0);
    tracep->declBus(c+193,"me_wb_alu", false,-1, 31,0);
    tracep->declBus(c+194,"me_wb_npc", false,-1, 31,0);
    tracep->declBit(c+195,"me_wb_valid", false,-1);
    tracep->declBit(c+196,"wb_me_ready", false,-1);
    tracep->declBit(c+46,"reg_wen", false,-1);
    tracep->declBus(c+47,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+48,"reg_waddr", false,-1, 4,0);
    tracep->declBit(c+119,"if_axi4_arvalid", false,-1);
    tracep->declBit(c+131,"if_axi4_arready", false,-1);
    tracep->declBus(c+1,"if_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+132,"if_axi4_rvalid", false,-1);
    tracep->declBit(c+120,"if_axi4_rready", false,-1);
    tracep->declBus(c+133,"if_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+134,"if_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+121,"ls_axi4_arvalid", false,-1);
    tracep->declBit(c+135,"ls_axi4_arready", false,-1);
    tracep->declBus(c+2,"ls_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+284,"ls_axi4_rvalid", false,-1);
    tracep->declBit(c+279,"ls_axi4_rready", false,-1);
    tracep->declBus(c+285,"ls_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+286,"ls_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+136,"arb_sram_axi4_arvalid", false,-1);
    tracep->declBit(c+3,"arb_sram_axi4_arready", false,-1);
    tracep->declBus(c+137,"arb_sram_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+4,"arb_sram_axi4_rvalid", false,-1);
    tracep->declBit(c+287,"arb_sram_axi4_rready", false,-1);
    tracep->declBus(c+5,"arb_sram_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+6,"arb_sram_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+122,"ls_axi4_awvalid", false,-1);
    tracep->declBit(c+138,"ls_axi4_awready", false,-1);
    tracep->declBus(c+123,"ls_axi4_awaddr", false,-1, 31,0);
    tracep->declBit(c+7,"ls_axi4_wvalid", false,-1);
    tracep->declBit(c+139,"ls_axi4_wready", false,-1);
    tracep->declBus(c+8,"ls_axi4_wdata", false,-1, 31,0);
    tracep->declBus(c+9,"ls_axi4_wstrb", false,-1, 3,0);
    tracep->declBit(c+288,"ls_axi4_bvalid", false,-1);
    tracep->declBit(c+280,"ls_axi4_bready", false,-1);
    tracep->declBus(c+289,"ls_axi4_bresp", false,-1, 1,0);
    tracep->declBit(c+140,"uart_awvalid", false,-1);
    tracep->declBit(c+49,"uart_awready", false,-1);
    tracep->declBus(c+141,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+142,"uart_wvalid", false,-1);
    tracep->declBit(c+50,"uart_wready", false,-1);
    tracep->declBus(c+143,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+144,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+10,"uart_bvalid", false,-1);
    tracep->declBit(c+290,"uart_bready", false,-1);
    tracep->declBus(c+11,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+145,"sram_awvalid", false,-1);
    tracep->declBit(c+51,"sram_awready", false,-1);
    tracep->declBus(c+146,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+147,"sram_wvalid", false,-1);
    tracep->declBit(c+52,"sram_wready", false,-1);
    tracep->declBus(c+148,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+149,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+12,"sram_bvalid", false,-1);
    tracep->declBit(c+291,"sram_bready", false,-1);
    tracep->declBus(c+13,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+53,"if_req", false,-1);
    tracep->declBus(c+54,"if_addr", false,-1, 31,0);
    tracep->declBus(c+124,"biu_rdata_if", false,-1, 31,0);
    tracep->declBus(c+125,"biu_rresp_if", false,-1, 1,0);
    tracep->declBit(c+126,"biu_ready_if", false,-1);
    tracep->declBit(c+197,"lsu_req", false,-1);
    tracep->declBit(c+198,"lsu_wwe", false,-1);
    tracep->declBit(c+199,"lsu_rwe", false,-1);
    tracep->declBus(c+200,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+201,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+202,"lsu_strb", false,-1, 3,0);
    tracep->declBus(c+281,"biu_rresp_ls", false,-1, 1,0);
    tracep->declBus(c+282,"biu_wresp_ls", false,-1, 1,0);
    tracep->declBus(c+283,"biu_rdata_ls", false,-1, 31,0);
    tracep->declBit(c+203,"is_jar_call", false,-1);
    tracep->declBit(c+204,"is_jalr_call", false,-1);
    tracep->declBit(c+205,"is_jalr_ret", false,-1);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBit(c+119,"if_arvalid", false,-1);
    tracep->declBit(c+131,"if_arready", false,-1);
    tracep->declBus(c+1,"if_araddr", false,-1, 31,0);
    tracep->declBit(c+132,"if_rvalid", false,-1);
    tracep->declBit(c+120,"if_rready", false,-1);
    tracep->declBus(c+133,"if_rdata", false,-1, 31,0);
    tracep->declBus(c+134,"if_rresp", false,-1, 1,0);
    tracep->declBit(c+121,"ls_arvalid", false,-1);
    tracep->declBit(c+135,"ls_arready", false,-1);
    tracep->declBus(c+2,"ls_araddr", false,-1, 31,0);
    tracep->declBit(c+284,"ls_rvalid", false,-1);
    tracep->declBit(c+279,"ls_rready", false,-1);
    tracep->declBus(c+285,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+286,"ls_rresp", false,-1, 1,0);
    tracep->declBit(c+136,"s_arvalid", false,-1);
    tracep->declBit(c+3,"s_arready", false,-1);
    tracep->declBus(c+137,"s_araddr", false,-1, 31,0);
    tracep->declBit(c+4,"s_rvalid", false,-1);
    tracep->declBit(c+287,"s_rready", false,-1);
    tracep->declBus(c+5,"s_rdata", false,-1, 31,0);
    tracep->declBus(c+6,"s_rresp", false,-1, 1,0);
    tracep->declBus(c+326,"IDLE", false,-1, 31,0);
    tracep->declBus(c+327,"IF_MASTER", false,-1, 31,0);
    tracep->declBus(c+328,"LS_MASTER", false,-1, 31,0);
    tracep->declBus(c+55,"state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBit(c+178,"in_valid", false,-1);
    tracep->declBus(c+173,"in_a5", false,-1, 31,0);
    tracep->declBus(c+171,"in_rs1_data", false,-1, 31,0);
    tracep->declBus(c+172,"in_rs2_data", false,-1, 31,0);
    tracep->declBus(c+177,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+176,"in_imm", false,-1, 31,0);
    tracep->declBus(c+174,"in_rd", false,-1, 4,0);
    tracep->declBus(c+175,"in_pc", false,-1, 31,0);
    tracep->declBit(c+179,"in_ready", false,-1);
    tracep->declBit(c+186,"out_valid", false,-1);
    tracep->declBus(c+302,"out_next_pc", false,-1, 31,0);
    tracep->declBus(c+185,"out_Alu_Result", false,-1, 31,0);
    tracep->declBus(c+184,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+181,"out_ctrl", false,-1, 20,0);
    tracep->declBus(c+301,"csr_data", false,-1, 31,0);
    tracep->declBus(c+180,"rd_out", false,-1, 4,0);
    tracep->declBus(c+183,"imm_out", false,-1, 31,0);
    tracep->declBus(c+182,"pc_out", false,-1, 31,0);
    tracep->declBit(c+187,"out_ready", false,-1);
    tracep->declBus(c+326,"IDLE", false,-1, 31,0);
    tracep->declBus(c+327,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+328,"WAIT", false,-1, 31,0);
    tracep->declBus(c+206,"state", false,-1, 1,0);
    tracep->declBus(c+180,"rd", false,-1, 4,0);
    tracep->declBus(c+207,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+184,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+182,"pc", false,-1, 31,0);
    tracep->declBus(c+183,"imm", false,-1, 31,0);
    tracep->declBus(c+208,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+181,"ctrl", false,-1, 20,0);
    tracep->declBus(c+209,"B", false,-1, 31,0);
    tracep->declBus(c+210,"AluOp", false,-1, 3,0);
    tracep->declBit(c+211,"ALUSrc", false,-1);
    tracep->declBus(c+212,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+213,"is_ecall", false,-1);
    tracep->declBit(c+214,"is_mret", false,-1);
    tracep->declBit(c+215,"Branch", false,-1);
    tracep->declBus(c+216,"Jump", false,-1, 1,0);
    tracep->declBus(c+185,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+302,"next_pc", false,-1, 31,0);
    tracep->declBus(c+303,"mtvec", false,-1, 31,0);
    tracep->declBus(c+304,"mepc", false,-1, 31,0);
    tracep->pushNamePrefix("csr_regfile_init ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBus(c+182,"pc", false,-1, 31,0);
    tracep->declBus(c+208,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+213,"is_ecall", false,-1);
    tracep->declBit(c+214,"is_mret", false,-1);
    tracep->declBus(c+212,"csr_wen", false,-1, 1,0);
    tracep->declBus(c+217,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+207,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+301,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+303,"mtvec_out", false,-1, 31,0);
    tracep->declBus(c+304,"mepc_out", false,-1, 31,0);
    tracep->declBus(c+305,"mstatus", false,-1, 31,0);
    tracep->declBus(c+303,"mtvec", false,-1, 31,0);
    tracep->declBus(c+304,"mepc", false,-1, 31,0);
    tracep->declBus(c+306,"mcause", false,-1, 31,0);
    tracep->declBus(c+301,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+329,"MSTATUS_MPP_MASK", false,-1, 31,0);
    tracep->declBus(c+330,"MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+331,"MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBit(c+168,"in_valid", false,-1);
    tracep->declBus(c+166,"in_inst", false,-1, 31,0);
    tracep->declBus(c+167,"in_pc", false,-1, 31,0);
    tracep->declBit(c+299,"in_ready", false,-1);
    tracep->declBus(c+169,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+170,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+171,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+172,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+173,"in_reg_a5", false,-1, 31,0);
    tracep->declBit(c+178,"out_valid", false,-1);
    tracep->declBus(c+175,"pc_out", false,-1, 31,0);
    tracep->declBus(c+171,"out_rs1_data", false,-1, 31,0);
    tracep->declBus(c+172,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+177,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+176,"imm_out", false,-1, 31,0);
    tracep->declBus(c+173,"reg_a5_out", false,-1, 31,0);
    tracep->declBus(c+174,"rd_out", false,-1, 4,0);
    tracep->declBit(c+179,"out_ready", false,-1);
    tracep->declBus(c+326,"IDLE", false,-1, 31,0);
    tracep->declBus(c+327,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+328,"WAIT", false,-1, 31,0);
    tracep->declBus(c+218,"state", false,-1, 1,0);
    tracep->declBus(c+219,"inst", false,-1, 31,0);
    tracep->declBus(c+175,"pc", false,-1, 31,0);
    tracep->declBit(c+220,"invalid", false,-1);
    tracep->declBit(c+221,"is_ebreak", false,-1);
    tracep->declBus(c+222,"opcode", false,-1, 6,0);
    tracep->declBus(c+223,"func3", false,-1, 2,0);
    tracep->declBus(c+224,"func7", false,-1, 6,0);
    tracep->declBus(c+176,"imm", false,-1, 31,0);
    tracep->declBus(c+225,"immI", false,-1, 31,0);
    tracep->declBus(c+226,"immJ", false,-1, 31,0);
    tracep->declBus(c+227,"immU", false,-1, 31,0);
    tracep->declBus(c+228,"immS", false,-1, 31,0);
    tracep->declBus(c+229,"immB", false,-1, 31,0);
    tracep->declBus(c+174,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+230,"MemWrite", false,-1);
    tracep->declBit(c+231,"MemRead", false,-1);
    tracep->declBus(c+232,"MemOp", false,-1, 2,0);
    tracep->declBus(c+233,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+234,"RegWrite", false,-1);
    tracep->declBit(c+235,"Branch", false,-1);
    tracep->declBus(c+236,"Jump", false,-1, 1,0);
    tracep->declBit(c+237,"ALUSrc", false,-1);
    tracep->declBus(c+238,"AluOp", false,-1, 3,0);
    tracep->declBus(c+239,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+240,"is_ecall", false,-1);
    tracep->declBit(c+241,"is_mret", false,-1);
    tracep->declBus(c+177,"ctrl_bus", false,-1, 20,0);
    tracep->declBus(c+332,"OP_LOAD", false,-1, 6,0);
    tracep->declBus(c+333,"OP_STORE", false,-1, 6,0);
    tracep->declBus(c+334,"OP_BRANCH", false,-1, 6,0);
    tracep->declBus(c+335,"OP_JAL", false,-1, 6,0);
    tracep->declBus(c+336,"OP_JALR", false,-1, 6,0);
    tracep->declBus(c+337,"OP_OP_IMM", false,-1, 6,0);
    tracep->declBus(c+338,"OP_OP", false,-1, 6,0);
    tracep->declBus(c+339,"OP_LUI", false,-1, 6,0);
    tracep->declBus(c+340,"OP_AUIPC", false,-1, 6,0);
    tracep->declBus(c+341,"OP_SYSTEM", false,-1, 6,0);
    tracep->declBus(c+342,"F3_ADD_SUB", false,-1, 2,0);
    tracep->declBus(c+343,"F3_SLL", false,-1, 2,0);
    tracep->declBus(c+344,"F3_SLT", false,-1, 2,0);
    tracep->declBus(c+345,"F3_SLTU", false,-1, 2,0);
    tracep->declBus(c+346,"F3_XOR", false,-1, 2,0);
    tracep->declBus(c+347,"F3_SR", false,-1, 2,0);
    tracep->declBus(c+348,"F3_OR", false,-1, 2,0);
    tracep->declBus(c+349,"F3_AND", false,-1, 2,0);
    tracep->declBus(c+350,"F7_SUB", false,-1, 6,0);
    tracep->declBus(c+350,"F7_SRA", false,-1, 6,0);
    tracep->declBus(c+351,"F7_DEFAULT", false,-1, 6,0);
    tracep->declBus(c+352,"ALU_ADD", false,-1, 3,0);
    tracep->declBus(c+353,"ALU_SLL", false,-1, 3,0);
    tracep->declBus(c+354,"ALU_SLT", false,-1, 3,0);
    tracep->declBus(c+355,"ALU_SLTU", false,-1, 3,0);
    tracep->declBus(c+356,"ALU_XOR", false,-1, 3,0);
    tracep->declBus(c+357,"ALU_SRA", false,-1, 3,0);
    tracep->declBus(c+358,"ALU_SRL", false,-1, 3,0);
    tracep->declBus(c+359,"ALU_OR", false,-1, 3,0);
    tracep->declBus(c+360,"ALU_AND", false,-1, 3,0);
    tracep->declBus(c+361,"ALU_SUB", false,-1, 3,0);
    tracep->declBus(c+362,"ALU_PCADD", false,-1, 3,0);
    tracep->declBus(c+363,"JUMP_NONE", false,-1, 1,0);
    tracep->declBus(c+364,"JUMP_JAL", false,-1, 1,0);
    tracep->declBus(c+365,"JUMP_JALR", false,-1, 1,0);
    tracep->declBus(c+342,"MTR_ALU", false,-1, 2,0);
    tracep->declBus(c+343,"MTR_MEM", false,-1, 2,0);
    tracep->declBus(c+344,"MTR_PCP4", false,-1, 2,0);
    tracep->declBus(c+345,"MTR_IMM", false,-1, 2,0);
    tracep->declBus(c+346,"MTR_CSR", false,-1, 2,0);
    tracep->declBus(c+342,"OP_LW", false,-1, 2,0);
    tracep->declBus(c+343,"OP_LH", false,-1, 2,0);
    tracep->declBus(c+344,"OP_LB", false,-1, 2,0);
    tracep->declBus(c+345,"OP_LHU", false,-1, 2,0);
    tracep->declBus(c+346,"OP_LBU", false,-1, 2,0);
    tracep->declBus(c+347,"OP_SW", false,-1, 2,0);
    tracep->declBus(c+348,"OP_SH", false,-1, 2,0);
    tracep->declBus(c+349,"OP_SB", false,-1, 2,0);
    tracep->declBus(c+363,"CSR_NONE", false,-1, 1,0);
    tracep->declBus(c+364,"CSR_WRITE", false,-1, 1,0);
    tracep->declBus(c+365,"CSR_SET", false,-1, 1,0);
    tracep->declBus(c+366,"ECALL_CODE", false,-1, 11,0);
    tracep->declBus(c+367,"EBREAK_CODE", false,-1, 11,0);
    tracep->declBus(c+368,"MRET_CODE", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifbiu ");
    tracep->declBus(c+369,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+370,"LFSR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBit(c+53,"if_req", false,-1);
    tracep->declBus(c+54,"if_addr", false,-1, 31,0);
    tracep->declBus(c+124,"biu_rdata", false,-1, 31,0);
    tracep->declBit(c+126,"biu_ready", false,-1);
    tracep->declBus(c+125,"biu_rresp", false,-1, 1,0);
    tracep->declBus(c+1,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+119,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+131,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+133,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+134,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+132,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+120,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+307,"AR_active", false,-1);
    tracep->declBit(c+308,"R_active", false,-1);
    tracep->declBus(c+14,"read_cnt", false,-1, 7,0);
    tracep->declBit(c+15,"read_pending", false,-1);
    tracep->declBus(c+16,"lfsr", false,-1, 7,0);
    tracep->declBit(c+17,"lfsr_feedback", false,-1);
    tracep->declBus(c+371,"rand_delay", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBit(c+45,"wb_done", false,-1);
    tracep->declBus(c+296,"next_pc", false,-1, 31,0);
    tracep->declBit(c+126,"biu_ready", false,-1);
    tracep->declBus(c+124,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+54,"if_addr", false,-1, 31,0);
    tracep->declBit(c+53,"if_req", false,-1);
    tracep->declBit(c+168,"out_valid", false,-1);
    tracep->declBus(c+166,"inst", false,-1, 31,0);
    tracep->declBus(c+167,"pc", false,-1, 31,0);
    tracep->declBit(c+299,"out_ready", false,-1);
    tracep->declBus(c+56,"current_pc", false,-1, 31,0);
    tracep->declBus(c+57,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+58,"state", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsbiu ");
    tracep->declBus(c+372,"READ_MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+372,"WRITE_MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+370,"LFSR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBus(c+200,"lsu_addr", false,-1, 31,0);
    tracep->declBit(c+198,"lsu_wwe", false,-1);
    tracep->declBit(c+199,"lsu_rwe", false,-1);
    tracep->declBus(c+201,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+202,"lsu_strb", false,-1, 3,0);
    tracep->declBit(c+197,"lsu_req", false,-1);
    tracep->declBus(c+283,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+282,"biu_wresp", false,-1, 1,0);
    tracep->declBus(c+281,"biu_rresp", false,-1, 1,0);
    tracep->declBus(c+2,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+121,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+135,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+285,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+286,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+284,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+279,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+123,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+122,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+138,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+8,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+9,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+7,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+139,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+289,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+288,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+280,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+309,"AW_active", false,-1);
    tracep->declBit(c+310,"W_active", false,-1);
    tracep->declBit(c+311,"B_active", false,-1);
    tracep->declBit(c+312,"AR_active", false,-1);
    tracep->declBit(c+313,"R_active", false,-1);
    tracep->declBus(c+18,"strb_reg", false,-1, 3,0);
    tracep->declBus(c+19,"read_cnt", false,-1, 7,0);
    tracep->declBit(c+20,"read_pending", false,-1);
    tracep->declBus(c+127,"write_addr_cnt", false,-1, 7,0);
    tracep->declBit(c+128,"write_addr_pending", false,-1);
    tracep->declBus(c+21,"write_data_cnt", false,-1, 7,0);
    tracep->declBit(c+22,"write_data_pending", false,-1);
    tracep->declBus(c+23,"lfsr_addr", false,-1, 7,0);
    tracep->declBus(c+24,"lfsr_data", false,-1, 7,0);
    tracep->declBit(c+25,"lfsrr_feedback", false,-1);
    tracep->declBit(c+26,"lfsrw_feedback", false,-1);
    tracep->declBus(c+371,"read_rand_delay", false,-1, 7,0);
    tracep->declBus(c+371,"write_rand_delay", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBit(c+186,"in_valid", false,-1);
    tracep->declBus(c+181,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+180,"in_rd", false,-1, 4,0);
    tracep->declBus(c+183,"in_imm", false,-1, 31,0);
    tracep->declBus(c+302,"in_npc", false,-1, 31,0);
    tracep->declBus(c+182,"in_pc", false,-1, 31,0);
    tracep->declBus(c+184,"in_lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+185,"in_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+187,"in_ready", false,-1);
    tracep->declBit(c+195,"out_valid", false,-1);
    tracep->declBus(c+190,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+189,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+192,"imm_out", false,-1, 31,0);
    tracep->declBus(c+194,"npc_out", false,-1, 31,0);
    tracep->declBus(c+191,"pc_out", false,-1, 31,0);
    tracep->declBus(c+188,"rd_out", false,-1, 4,0);
    tracep->declBus(c+193,"alu_result", false,-1, 31,0);
    tracep->declBit(c+196,"out_ready", false,-1);
    tracep->declBit(c+197,"lsu_req", false,-1);
    tracep->declBit(c+198,"lsu_wwe", false,-1);
    tracep->declBit(c+199,"lsu_rwe", false,-1);
    tracep->declBus(c+200,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+201,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+202,"lsu_strb", false,-1, 3,0);
    tracep->declBus(c+281,"biu_rresp", false,-1, 1,0);
    tracep->declBus(c+282,"biu_wresp", false,-1, 1,0);
    tracep->declBus(c+283,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+326,"IDLE", false,-1, 31,0);
    tracep->declBus(c+327,"STORE", false,-1, 31,0);
    tracep->declBus(c+328,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+342,"OP_LW", false,-1, 2,0);
    tracep->declBus(c+343,"OP_LH", false,-1, 2,0);
    tracep->declBus(c+344,"OP_LB", false,-1, 2,0);
    tracep->declBus(c+345,"OP_LHU", false,-1, 2,0);
    tracep->declBus(c+346,"OP_LBU", false,-1, 2,0);
    tracep->declBus(c+347,"OP_SW", false,-1, 2,0);
    tracep->declBus(c+348,"OP_SH", false,-1, 2,0);
    tracep->declBus(c+349,"OP_SB", false,-1, 2,0);
    tracep->declBus(c+242,"state", false,-1, 1,0);
    tracep->declBit(c+59,"has_data", false,-1);
    tracep->declBus(c+189,"ctrl", false,-1, 20,0);
    tracep->declBus(c+188,"rd", false,-1, 4,0);
    tracep->declBus(c+243,"wdata", false,-1, 31,0);
    tracep->declBus(c+193,"addr", false,-1, 31,0);
    tracep->declBus(c+191,"pc", false,-1, 31,0);
    tracep->declBus(c+192,"imm", false,-1, 31,0);
    tracep->declBus(c+194,"npc", false,-1, 31,0);
    tracep->declBus(c+292,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+198,"MemWrite", false,-1);
    tracep->declBit(c+199,"MemRead", false,-1);
    tracep->declBus(c+244,"MemOp", false,-1, 2,0);
    tracep->declBus(c+245,"offset", false,-1, 1,0);
    tracep->declBus(c+200,"aligned_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBus(c+169,"reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+170,"reg_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+171,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+172,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+46,"reg_wen", false,-1);
    tracep->declBit(c+45,"in_valid", false,-1);
    tracep->declBus(c+48,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+47,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+173,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+44,"w_resp", false,-1);
    tracep->declBus(c+373,"rs1", false,-1, 4,0);
    tracep->declBus(c+374,"rs2", false,-1, 4,0);
    tracep->declBus(c+375,"rd", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+246+i*1,"register", true,(i+0), 31,0);
    }
    tracep->declBit(c+314,"is_info_register", false,-1);
    tracep->declBit(c+315,"is_en_display", false,-1);
    tracep->declBus(c+316,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+60,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBus(c+137,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+136,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+3,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+5,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+6,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+4,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+287,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+146,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+145,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+51,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+148,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+149,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+147,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+52,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+13,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+12,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+291,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+376,"s_rdata", false,-1, 31,0);
    tracep->declBit(c+317,"AW_active", false,-1);
    tracep->declBit(c+318,"W_active", false,-1);
    tracep->declBit(c+319,"B_active", false,-1);
    tracep->declBit(c+320,"AR_active", false,-1);
    tracep->declBit(c+321,"R_active", false,-1);
    tracep->declBit(c+150,"addr_full", false,-1);
    tracep->declBit(c+151,"data_full", false,-1);
    tracep->declBit(c+152,"addr_empty", false,-1);
    tracep->declBit(c+153,"data_empty", false,-1);
    tracep->declBit(c+154,"addr_wr_en", false,-1);
    tracep->declBit(c+155,"data_wr_en", false,-1);
    tracep->declBus(c+27,"fifo_addr_out", false,-1, 31,0);
    tracep->declQuad(c+28,"fifo_data_out", false,-1, 35,0);
    tracep->declBus(c+30,"fifo_wdata_out", false,-1, 31,0);
    tracep->declBus(c+31,"fifo_wstrb_out", false,-1, 3,0);
    tracep->declBit(c+156,"fifo_rd_en", false,-1);
    tracep->declBit(c+32,"data_process", false,-1);
    tracep->pushNamePrefix("addr_fifo ");
    tracep->declBus(c+377,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+370,"FIFO_DEPTH", false,-1, 31,0);
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBus(c+146,"din", false,-1, 31,0);
    tracep->declBit(c+154,"wr_en", false,-1);
    tracep->declBit(c+150,"full", false,-1);
    tracep->declBus(c+27,"dout", false,-1, 31,0);
    tracep->declBit(c+156,"rd_en", false,-1);
    tracep->declBit(c+152,"empty", false,-1);
    tracep->declBus(c+378,"PTR_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+61+i*1,"fifo_mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+69,"wr_ptr", false,-1, 3,0);
    tracep->declBus(c+33,"rd_ptr", false,-1, 3,0);
    tracep->declBus(c+70,"wr_addr", false,-1, 2,0);
    tracep->declBus(c+34,"rd_addr", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_fifo ");
    tracep->declBus(c+379,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+370,"FIFO_DEPTH", false,-1, 31,0);
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declQuad(c+157,"din", false,-1, 35,0);
    tracep->declBit(c+155,"wr_en", false,-1);
    tracep->declBit(c+151,"full", false,-1);
    tracep->declQuad(c+28,"dout", false,-1, 35,0);
    tracep->declBit(c+156,"rd_en", false,-1);
    tracep->declBit(c+153,"empty", false,-1);
    tracep->declBus(c+378,"PTR_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+71+i*2,"fifo_mem", true,(i+0), 35,0);
    }
    tracep->declBus(c+87,"wr_ptr", false,-1, 3,0);
    tracep->declBus(c+35,"rd_ptr", false,-1, 3,0);
    tracep->declBus(c+88,"wr_addr", false,-1, 2,0);
    tracep->declBus(c+36,"rd_addr", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("uart ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBus(c+141,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+140,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+49,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+143,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+144,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+142,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+50,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+11,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+10,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+290,"S_AXI_BREADY", false,-1);
    tracep->declBit(c+159,"addr_full", false,-1);
    tracep->declBit(c+160,"data_full", false,-1);
    tracep->declBit(c+161,"addr_empty", false,-1);
    tracep->declBit(c+162,"data_empty", false,-1);
    tracep->declBit(c+163,"addr_wr_en", false,-1);
    tracep->declBit(c+164,"data_wr_en", false,-1);
    tracep->declBus(c+37,"fifo_addr_out", false,-1, 31,0);
    tracep->declBus(c+38,"fifo_wdata_out", false,-1, 31,0);
    tracep->declBit(c+165,"fifo_rd_en", false,-1);
    tracep->declBit(c+322,"AW_active", false,-1);
    tracep->declBit(c+323,"W_active", false,-1);
    tracep->declBit(c+324,"B_active", false,-1);
    tracep->declBus(c+380,"write_data_reg", false,-1, 31,0);
    tracep->declBit(c+39,"data_process", false,-1);
    tracep->pushNamePrefix("addr_fifo_uart ");
    tracep->declBus(c+377,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+370,"FIFO_DEPTH", false,-1, 31,0);
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBus(c+141,"din", false,-1, 31,0);
    tracep->declBit(c+163,"wr_en", false,-1);
    tracep->declBit(c+159,"full", false,-1);
    tracep->declBus(c+37,"dout", false,-1, 31,0);
    tracep->declBit(c+165,"rd_en", false,-1);
    tracep->declBit(c+161,"empty", false,-1);
    tracep->declBus(c+378,"PTR_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+89+i*1,"fifo_mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+97,"wr_ptr", false,-1, 3,0);
    tracep->declBus(c+40,"rd_ptr", false,-1, 3,0);
    tracep->declBus(c+98,"wr_addr", false,-1, 2,0);
    tracep->declBus(c+41,"rd_addr", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_fifo_uart ");
    tracep->declBus(c+377,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+370,"FIFO_DEPTH", false,-1, 31,0);
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBus(c+143,"din", false,-1, 31,0);
    tracep->declBit(c+164,"wr_en", false,-1);
    tracep->declBit(c+160,"full", false,-1);
    tracep->declBus(c+38,"dout", false,-1, 31,0);
    tracep->declBit(c+165,"rd_en", false,-1);
    tracep->declBit(c+162,"empty", false,-1);
    tracep->declBus(c+378,"PTR_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+99+i*1,"fifo_mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+107,"wr_ptr", false,-1, 3,0);
    tracep->declBus(c+42,"rd_ptr", false,-1, 3,0);
    tracep->declBus(c+108,"wr_addr", false,-1, 2,0);
    tracep->declBus(c+43,"rd_addr", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBit(c+195,"in_valid", false,-1);
    tracep->declBus(c+193,"in_alu_result", false,-1, 31,0);
    tracep->declBus(c+190,"in_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+194,"in_npc", false,-1, 31,0);
    tracep->declBus(c+191,"in_pc", false,-1, 31,0);
    tracep->declBus(c+192,"in_imm", false,-1, 31,0);
    tracep->declBus(c+189,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+301,"in_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+188,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+196,"in_ready", false,-1);
    tracep->declBit(c+45,"out_valid", false,-1);
    tracep->declBus(c+296,"next_pc", false,-1, 31,0);
    tracep->declBit(c+46,"reg_wen", false,-1);
    tracep->declBus(c+48,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+47,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+326,"IDLE", false,-1, 31,0);
    tracep->declBus(c+327,"CHOOSE", false,-1, 31,0);
    tracep->declBus(c+328,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+378,"DONE", false,-1, 31,0);
    tracep->declBus(c+278,"state", false,-1, 1,0);
    tracep->declBit(c+381,"has_data", false,-1);
    tracep->declBus(c+109,"ctrl", false,-1, 20,0);
    tracep->declBus(c+48,"rd", false,-1, 4,0);
    tracep->declBus(c+110,"npc", false,-1, 31,0);
    tracep->declBus(c+111,"pc", false,-1, 31,0);
    tracep->declBus(c+112,"imm", false,-1, 31,0);
    tracep->declBus(c+113,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+114,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+115,"alu_result", false,-1, 31,0);
    tracep->declBit(c+382,"wen", false,-1);
    tracep->declBus(c+47,"wb_data", false,-1, 31,0);
    tracep->declBus(c+116,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+46,"RegWrite", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("xbar ");
    tracep->declBus(c+383,"UART_ADDR", false,-1, 31,0);
    tracep->declBus(c+384,"SRAM_ADDR_START", false,-1, 31,0);
    tracep->declBus(c+385,"SRAM_ADDR_END", false,-1, 31,0);
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBus(c+123,"m_awaddr", false,-1, 31,0);
    tracep->declBit(c+122,"m_awvalid", false,-1);
    tracep->declBit(c+138,"m_awready", false,-1);
    tracep->declBus(c+8,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+9,"m_wstrb", false,-1, 3,0);
    tracep->declBit(c+7,"m_wvalid", false,-1);
    tracep->declBit(c+139,"m_wready", false,-1);
    tracep->declBus(c+289,"m_bresp", false,-1, 1,0);
    tracep->declBit(c+288,"m_bvalid", false,-1);
    tracep->declBit(c+280,"m_bready", false,-1);
    tracep->declBus(c+141,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+140,"uart_awvalid", false,-1);
    tracep->declBit(c+49,"uart_awready", false,-1);
    tracep->declBus(c+143,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+144,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+142,"uart_wvalid", false,-1);
    tracep->declBit(c+50,"uart_wready", false,-1);
    tracep->declBus(c+11,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+10,"uart_bvalid", false,-1);
    tracep->declBit(c+290,"uart_bready", false,-1);
    tracep->declBus(c+146,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+145,"sram_awvalid", false,-1);
    tracep->declBit(c+51,"sram_awready", false,-1);
    tracep->declBus(c+148,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+149,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+147,"sram_wvalid", false,-1);
    tracep->declBit(c+52,"sram_wready", false,-1);
    tracep->declBus(c+13,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+12,"sram_bvalid", false,-1);
    tracep->declBit(c+291,"sram_bready", false,-1);
    tracep->declBus(c+363,"DEV_NONE", false,-1, 1,0);
    tracep->declBus(c+364,"DEV_SRAM", false,-1, 1,0);
    tracep->declBus(c+365,"DEV_UART", false,-1, 1,0);
    tracep->declBit(c+129,"is_uart", false,-1);
    tracep->declBit(c+130,"is_sram", false,-1);
    tracep->declBus(c+117,"target_dev", false,-1, 1,0);
    tracep->declBus(c+326,"IDLE", false,-1, 31,0);
    tracep->declBus(c+327,"AW", false,-1, 31,0);
    tracep->declBus(c+328,"W", false,-1, 31,0);
    tracep->declBus(c+378,"B", false,-1, 31,0);
    tracep->declBus(c+118,"state", false,-1, 2,0);
    tracep->declBus(c+293,"next_state", false,-1, 2,0);
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
    bufp->fullBit(oldp+3,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arready));
    bufp->fullBit(oldp+4,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rvalid));
    bufp->fullIData(oldp+5,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rdata),32);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rresp),2);
    bufp->fullBit(oldp+7,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid));
    bufp->fullIData(oldp+8,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wdata),32);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wstrb),4);
    bufp->fullBit(oldp+10,(vlSelf->ysyx_25030085_top__DOT__uart_bvalid));
    bufp->fullCData(oldp+11,(vlSelf->ysyx_25030085_top__DOT__uart_bresp),2);
    bufp->fullBit(oldp+12,(vlSelf->ysyx_25030085_top__DOT__sram_bvalid));
    bufp->fullCData(oldp+13,(vlSelf->ysyx_25030085_top__DOT__sram_bresp),2);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_cnt),8);
    bufp->fullBit(oldp+15,(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_pending));
    bufp->fullCData(oldp+16,(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr),8);
    bufp->fullBit(oldp+17,((1U & VL_REDXOR_8((0xb8U 
                                              & (IData)(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr))))));
    bufp->fullCData(oldp+18,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__strb_reg),4);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_cnt),8);
    bufp->fullBit(oldp+20,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_pending));
    bufp->fullCData(oldp+21,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_cnt),8);
    bufp->fullBit(oldp+22,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_pending));
    bufp->fullCData(oldp+23,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr),8);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data),8);
    bufp->fullBit(oldp+25,((1U & VL_REDXOR_8((0xb8U 
                                              & (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr))))));
    bufp->fullBit(oldp+26,((1U & VL_REDXOR_8((0x9cU 
                                              & (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data))))));
    bufp->fullIData(oldp+27,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_addr_out),32);
    bufp->fullQData(oldp+28,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_data_out),36);
    bufp->fullIData(oldp+30,((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_data_out)),32);
    bufp->fullCData(oldp+31,((0xfU & (IData)((vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_data_out 
                                              >> 0x20U)))),4);
    bufp->fullBit(oldp+32,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_process));
    bufp->fullCData(oldp+33,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr),4);
    bufp->fullCData(oldp+34,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr))),3);
    bufp->fullCData(oldp+35,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr),4);
    bufp->fullCData(oldp+36,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr))),3);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_addr_out),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_wdata_out),32);
    bufp->fullBit(oldp+39,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_process));
    bufp->fullCData(oldp+40,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr),4);
    bufp->fullCData(oldp+41,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr))),3);
    bufp->fullCData(oldp+42,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr),4);
    bufp->fullCData(oldp+43,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr))),3);
    bufp->fullBit(oldp+44,(vlSelf->ysyx_25030085_top__DOT__reg_wresp));
    bufp->fullBit(oldp+45,(vlSelf->ysyx_25030085_top__DOT__wb_valid));
    bufp->fullBit(oldp+46,((1U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                  >> 0x10U))));
    bufp->fullIData(oldp+47,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wb_data),32);
    bufp->fullCData(oldp+48,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd),5);
    bufp->fullBit(oldp+49,(vlSelf->ysyx_25030085_top__DOT__uart_awready));
    bufp->fullBit(oldp+50,(vlSelf->ysyx_25030085_top__DOT__uart_wready));
    bufp->fullBit(oldp+51,(vlSelf->ysyx_25030085_top__DOT__sram_awready));
    bufp->fullBit(oldp+52,(vlSelf->ysyx_25030085_top__DOT__sram_wready));
    bufp->fullBit(oldp+53,(vlSelf->ysyx_25030085_top__DOT__if_req));
    bufp->fullIData(oldp+54,(vlSelf->ysyx_25030085_top__DOT__if_addr),32);
    bufp->fullCData(oldp+55,(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state),2);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_reg),32);
    bufp->fullCData(oldp+58,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state),3);
    bufp->fullBit(oldp+59,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__has_data));
    bufp->fullIData(oldp+60,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[0]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[1]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[2]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[3]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[4]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[5]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[6]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[7]),32);
    bufp->fullCData(oldp+69,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr),4);
    bufp->fullCData(oldp+70,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr))),3);
    bufp->fullQData(oldp+71,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[0]),36);
    bufp->fullQData(oldp+73,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[1]),36);
    bufp->fullQData(oldp+75,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[2]),36);
    bufp->fullQData(oldp+77,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[3]),36);
    bufp->fullQData(oldp+79,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[4]),36);
    bufp->fullQData(oldp+81,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[5]),36);
    bufp->fullQData(oldp+83,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[6]),36);
    bufp->fullQData(oldp+85,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[7]),36);
    bufp->fullCData(oldp+87,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr),4);
    bufp->fullCData(oldp+88,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr))),3);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[0]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[1]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[2]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[3]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[4]),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[5]),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[6]),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[7]),32);
    bufp->fullCData(oldp+97,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr),4);
    bufp->fullCData(oldp+98,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr))),3);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[0]),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[1]),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[2]),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[3]),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[4]),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[5]),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[6]),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[7]),32);
    bufp->fullCData(oldp+107,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr),4);
    bufp->fullCData(oldp+108,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr))),3);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl),21);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result),32);
    bufp->fullCData(oldp+116,((7U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                     >> 0xaU))),3);
    bufp->fullCData(oldp+117,(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__target_dev),2);
    bufp->fullCData(oldp+118,(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__state),3);
    bufp->fullBit(oldp+119,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid));
    bufp->fullBit(oldp+120,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready));
    bufp->fullBit(oldp+121,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid));
    bufp->fullBit(oldp+122,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid));
    bufp->fullIData(oldp+123,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_if),32);
    bufp->fullCData(oldp+125,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_if),2);
    bufp->fullBit(oldp+126,(vlSelf->ysyx_25030085_top__DOT__biu_ready_if));
    bufp->fullCData(oldp+127,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_cnt),8);
    bufp->fullBit(oldp+128,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_pending));
    bufp->fullBit(oldp+129,((0xa00003f8U == vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr)));
    bufp->fullBit(oldp+130,(((0x80000000U <= vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr) 
                             & (0x87ffffffU >= vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr))));
    bufp->fullBit(oldp+131,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready));
    bufp->fullBit(oldp+132,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid));
    bufp->fullIData(oldp+133,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rdata),32);
    bufp->fullCData(oldp+134,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rresp),2);
    bufp->fullBit(oldp+135,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready));
    bufp->fullBit(oldp+136,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arvalid));
    bufp->fullIData(oldp+137,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_araddr),32);
    bufp->fullBit(oldp+138,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready));
    bufp->fullBit(oldp+139,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready));
    bufp->fullBit(oldp+140,(vlSelf->ysyx_25030085_top__DOT__uart_awvalid));
    bufp->fullIData(oldp+141,(vlSelf->ysyx_25030085_top__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+142,(vlSelf->ysyx_25030085_top__DOT__uart_wvalid));
    bufp->fullIData(oldp+143,(vlSelf->ysyx_25030085_top__DOT__uart_wdata),32);
    bufp->fullCData(oldp+144,(vlSelf->ysyx_25030085_top__DOT__uart_wstrb),4);
    bufp->fullBit(oldp+145,(vlSelf->ysyx_25030085_top__DOT__sram_awvalid));
    bufp->fullIData(oldp+146,(vlSelf->ysyx_25030085_top__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+147,(vlSelf->ysyx_25030085_top__DOT__sram_wvalid));
    bufp->fullIData(oldp+148,(vlSelf->ysyx_25030085_top__DOT__sram_wdata),32);
    bufp->fullCData(oldp+149,(vlSelf->ysyx_25030085_top__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+150,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_full));
    bufp->fullBit(oldp+151,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_full));
    bufp->fullBit(oldp+152,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_empty));
    bufp->fullBit(oldp+153,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_empty));
    bufp->fullBit(oldp+154,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_wr_en));
    bufp->fullBit(oldp+155,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_wr_en));
    bufp->fullBit(oldp+156,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_rd_en));
    bufp->fullQData(oldp+157,((((QData)((IData)(vlSelf->ysyx_25030085_top__DOT__sram_wstrb)) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_25030085_top__DOT__sram_wdata)))),36);
    bufp->fullBit(oldp+159,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_full));
    bufp->fullBit(oldp+160,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_full));
    bufp->fullBit(oldp+161,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_empty));
    bufp->fullBit(oldp+162,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_empty));
    bufp->fullBit(oldp+163,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_wr_en));
    bufp->fullBit(oldp+164,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_wr_en));
    bufp->fullBit(oldp+165,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_rd_en));
    bufp->fullIData(oldp+166,(vlSelf->ysyx_25030085_top__DOT__if_id_inst),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_25030085_top__DOT__if_id_pc),32);
    bufp->fullBit(oldp+168,(vlSelf->ysyx_25030085_top__DOT__if_id_valid));
    bufp->fullCData(oldp+169,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+170,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_25030085_top__DOT__rs1_data),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_25030085_top__DOT__rs2_data),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                              [0xfU]),32);
    bufp->fullCData(oldp+174,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm),32);
    bufp->fullIData(oldp+177,((((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen) 
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
    bufp->fullBit(oldp+178,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))));
    bufp->fullBit(oldp+179,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
    bufp->fullCData(oldp+180,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rd),5);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl),21);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result),32);
    bufp->fullBit(oldp+186,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
    bufp->fullBit(oldp+187,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
    bufp->fullCData(oldp+188,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rd),5);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl),21);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_25030085_top__DOT__me_wb_rdata),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__pc),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__imm),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__npc),32);
    bufp->fullBit(oldp+195,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
    bufp->fullBit(oldp+196,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))));
    bufp->fullBit(oldp+197,(vlSelf->ysyx_25030085_top__DOT__lsu_req));
    bufp->fullBit(oldp+198,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                   >> 6U))));
    bufp->fullBit(oldp+199,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                   >> 5U))));
    bufp->fullIData(oldp+200,((0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_25030085_top__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+202,(vlSelf->ysyx_25030085_top__DOT__lsu_strb),4);
    bufp->fullBit(oldp+203,((IData)(((0x80U == (0xf80U 
                                                & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                     & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullBit(oldp+204,((IData)(((0x80U == (0xf80U 
                                                & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                     & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullBit(oldp+205,((IData)(((0x8000U == (0xf8f80U 
                                                  & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                     & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullCData(oldp+206,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state),2);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__reg_a5),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__B),32);
    bufp->fullCData(oldp+210,((0xfU & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                       >> 1U))),4);
    bufp->fullBit(oldp+211,((1U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)));
    bufp->fullCData(oldp+212,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0x13U))),2);
    bufp->fullBit(oldp+213,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                   >> 0x11U))));
    bufp->fullBit(oldp+214,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                   >> 0x12U))));
    bufp->fullBit(oldp+215,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                   >> 0xdU))));
    bufp->fullCData(oldp+216,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0xeU))),2);
    bufp->fullSData(oldp+217,((0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm)),12);
    bufp->fullCData(oldp+218,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state),2);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst),32);
    bufp->fullBit(oldp+220,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid));
    bufp->fullBit(oldp+221,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak));
    bufp->fullCData(oldp+222,((0x7fU & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),7);
    bufp->fullCData(oldp+223,((7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+224,((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI),32);
    bufp->fullIData(oldp+226,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+227,((0xfffff000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),32);
    bufp->fullIData(oldp+228,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+229,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
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
    bufp->fullBit(oldp+230,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemWrite));
    bufp->fullBit(oldp+231,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemRead));
    bufp->fullCData(oldp+232,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp),3);
    bufp->fullCData(oldp+233,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg),3);
    bufp->fullBit(oldp+234,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite));
    bufp->fullBit(oldp+235,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Branch));
    bufp->fullCData(oldp+236,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump),2);
    bufp->fullBit(oldp+237,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc));
    bufp->fullCData(oldp+238,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp),4);
    bufp->fullCData(oldp+239,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen),2);
    bufp->fullBit(oldp+240,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall));
    bufp->fullBit(oldp+241,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret));
    bufp->fullCData(oldp+242,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state),2);
    bufp->fullIData(oldp+243,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__wdata),32);
    bufp->fullCData(oldp+244,((7U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                     >> 7U))),3);
    bufp->fullCData(oldp+245,((3U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),2);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0]),32);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[1]),32);
    bufp->fullIData(oldp+248,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[2]),32);
    bufp->fullIData(oldp+249,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[3]),32);
    bufp->fullIData(oldp+250,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[4]),32);
    bufp->fullIData(oldp+251,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[5]),32);
    bufp->fullIData(oldp+252,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[6]),32);
    bufp->fullIData(oldp+253,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[7]),32);
    bufp->fullIData(oldp+254,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[8]),32);
    bufp->fullIData(oldp+255,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[9]),32);
    bufp->fullIData(oldp+256,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[10]),32);
    bufp->fullIData(oldp+257,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[11]),32);
    bufp->fullIData(oldp+258,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[12]),32);
    bufp->fullIData(oldp+259,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[13]),32);
    bufp->fullIData(oldp+260,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[14]),32);
    bufp->fullIData(oldp+261,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[15]),32);
    bufp->fullIData(oldp+262,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[16]),32);
    bufp->fullIData(oldp+263,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[17]),32);
    bufp->fullIData(oldp+264,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[18]),32);
    bufp->fullIData(oldp+265,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[19]),32);
    bufp->fullIData(oldp+266,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[20]),32);
    bufp->fullIData(oldp+267,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[21]),32);
    bufp->fullIData(oldp+268,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[22]),32);
    bufp->fullIData(oldp+269,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[23]),32);
    bufp->fullIData(oldp+270,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[24]),32);
    bufp->fullIData(oldp+271,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[25]),32);
    bufp->fullIData(oldp+272,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[26]),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[27]),32);
    bufp->fullIData(oldp+274,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[28]),32);
    bufp->fullIData(oldp+275,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[29]),32);
    bufp->fullIData(oldp+276,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[30]),32);
    bufp->fullIData(oldp+277,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[31]),32);
    bufp->fullCData(oldp+278,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state),2);
    bufp->fullBit(oldp+279,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready));
    bufp->fullBit(oldp+280,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready));
    bufp->fullCData(oldp+281,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_ls),2);
    bufp->fullCData(oldp+282,(vlSelf->ysyx_25030085_top__DOT__biu_wresp_ls),2);
    bufp->fullIData(oldp+283,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls),32);
    bufp->fullBit(oldp+284,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid));
    bufp->fullIData(oldp+285,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata),32);
    bufp->fullCData(oldp+286,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp),2);
    bufp->fullBit(oldp+287,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rready));
    bufp->fullBit(oldp+288,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid));
    bufp->fullCData(oldp+289,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bresp),2);
    bufp->fullBit(oldp+290,(vlSelf->ysyx_25030085_top__DOT__uart_bready));
    bufp->fullBit(oldp+291,(vlSelf->ysyx_25030085_top__DOT__sram_bready));
    bufp->fullIData(oldp+292,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+293,(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__next_state),3);
    bufp->fullBit(oldp+294,(vlSelf->clk));
    bufp->fullBit(oldp+295,(vlSelf->rst));
    bufp->fullIData(oldp+296,(vlSelf->top_pc),32);
    bufp->fullIData(oldp+297,(vlSelf->top_inst),32);
    bufp->fullBit(oldp+298,(vlSelf->top_valid));
    bufp->fullBit(oldp+299,(vlSelf->top_ready));
    bufp->fullBit(oldp+300,(vlSelf->inst_done));
    bufp->fullIData(oldp+301,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
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
    bufp->fullIData(oldp+302,(((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
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
    bufp->fullIData(oldp+303,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus),32);
    bufp->fullIData(oldp+306,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause),32);
    bufp->fullBit(oldp+307,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid))));
    bufp->fullBit(oldp+308,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid))));
    bufp->fullBit(oldp+309,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid))));
    bufp->fullBit(oldp+310,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid))));
    bufp->fullBit(oldp+311,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid))));
    bufp->fullBit(oldp+312,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid))));
    bufp->fullBit(oldp+313,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid))));
    bufp->fullBit(oldp+314,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register));
    bufp->fullBit(oldp+315,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display));
    bufp->fullIData(oldp+316,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i),32);
    bufp->fullBit(oldp+317,(((IData)(vlSelf->ysyx_25030085_top__DOT__sram_awready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__sram_awvalid))));
    bufp->fullBit(oldp+318,(((IData)(vlSelf->ysyx_25030085_top__DOT__sram_wready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__sram_wvalid))));
    bufp->fullBit(oldp+319,(((IData)(vlSelf->ysyx_25030085_top__DOT__sram_bready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__sram_bvalid))));
    bufp->fullBit(oldp+320,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arvalid))));
    bufp->fullBit(oldp+321,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rvalid))));
    bufp->fullBit(oldp+322,(((IData)(vlSelf->ysyx_25030085_top__DOT__uart_awready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__uart_awvalid))));
    bufp->fullBit(oldp+323,(((IData)(vlSelf->ysyx_25030085_top__DOT__uart_wready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__uart_wvalid))));
    bufp->fullBit(oldp+324,(((IData)(vlSelf->ysyx_25030085_top__DOT__uart_bready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__uart_bvalid))));
    bufp->fullBit(oldp+325,(vlSelf->ysyx_25030085_top__DOT__wb_done));
    bufp->fullIData(oldp+326,(0U),32);
    bufp->fullIData(oldp+327,(1U),32);
    bufp->fullIData(oldp+328,(2U),32);
    bufp->fullIData(oldp+329,(0x1800U),32);
    bufp->fullIData(oldp+330,(0x80U),32);
    bufp->fullIData(oldp+331,(8U),32);
    bufp->fullCData(oldp+332,(3U),7);
    bufp->fullCData(oldp+333,(0x23U),7);
    bufp->fullCData(oldp+334,(0x63U),7);
    bufp->fullCData(oldp+335,(0x6fU),7);
    bufp->fullCData(oldp+336,(0x67U),7);
    bufp->fullCData(oldp+337,(0x13U),7);
    bufp->fullCData(oldp+338,(0x33U),7);
    bufp->fullCData(oldp+339,(0x37U),7);
    bufp->fullCData(oldp+340,(0x17U),7);
    bufp->fullCData(oldp+341,(0x73U),7);
    bufp->fullCData(oldp+342,(0U),3);
    bufp->fullCData(oldp+343,(1U),3);
    bufp->fullCData(oldp+344,(2U),3);
    bufp->fullCData(oldp+345,(3U),3);
    bufp->fullCData(oldp+346,(4U),3);
    bufp->fullCData(oldp+347,(5U),3);
    bufp->fullCData(oldp+348,(6U),3);
    bufp->fullCData(oldp+349,(7U),3);
    bufp->fullCData(oldp+350,(0x20U),7);
    bufp->fullCData(oldp+351,(0U),7);
    bufp->fullCData(oldp+352,(0U),4);
    bufp->fullCData(oldp+353,(1U),4);
    bufp->fullCData(oldp+354,(2U),4);
    bufp->fullCData(oldp+355,(3U),4);
    bufp->fullCData(oldp+356,(4U),4);
    bufp->fullCData(oldp+357,(5U),4);
    bufp->fullCData(oldp+358,(6U),4);
    bufp->fullCData(oldp+359,(7U),4);
    bufp->fullCData(oldp+360,(8U),4);
    bufp->fullCData(oldp+361,(0xaU),4);
    bufp->fullCData(oldp+362,(9U),4);
    bufp->fullCData(oldp+363,(0U),2);
    bufp->fullCData(oldp+364,(1U),2);
    bufp->fullCData(oldp+365,(2U),2);
    bufp->fullSData(oldp+366,(0U),12);
    bufp->fullSData(oldp+367,(1U),12);
    bufp->fullSData(oldp+368,(0x302U),12);
    bufp->fullIData(oldp+369,(0x14U),32);
    bufp->fullIData(oldp+370,(8U),32);
    bufp->fullCData(oldp+371,(0U),8);
    bufp->fullIData(oldp+372,(0xc8U),32);
    bufp->fullCData(oldp+373,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs1),5);
    bufp->fullCData(oldp+374,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs2),5);
    bufp->fullCData(oldp+375,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rd),5);
    bufp->fullIData(oldp+376,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__s_rdata),32);
    bufp->fullIData(oldp+377,(0x20U),32);
    bufp->fullIData(oldp+378,(3U),32);
    bufp->fullIData(oldp+379,(0x24U),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__write_data_reg),32);
    bufp->fullBit(oldp+381,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__has_data));
    bufp->fullBit(oldp+382,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wen));
    bufp->fullIData(oldp+383,(0xa00003f8U),32);
    bufp->fullIData(oldp+384,(0x80000000U),32);
    bufp->fullIData(oldp+385,(0x87ffffffU),32);
}
