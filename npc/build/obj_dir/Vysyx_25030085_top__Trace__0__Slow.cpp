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
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBus(c+316,"top_pc", false,-1, 31,0);
    tracep->declBus(c+317,"top_inst", false,-1, 31,0);
    tracep->declBit(c+318,"top_valid", false,-1);
    tracep->declBit(c+319,"top_ready", false,-1);
    tracep->declBit(c+320,"inst_done", false,-1);
    tracep->pushNamePrefix("ysyx_25030085_top ");
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBus(c+316,"top_pc", false,-1, 31,0);
    tracep->declBus(c+317,"top_inst", false,-1, 31,0);
    tracep->declBit(c+318,"top_valid", false,-1);
    tracep->declBit(c+319,"top_ready", false,-1);
    tracep->declBit(c+320,"inst_done", false,-1);
    tracep->declBus(c+316,"next_pc", false,-1, 31,0);
    tracep->declBit(c+340,"wb_done", false,-1);
    tracep->declBit(c+1,"reg_wresp", false,-1);
    tracep->declBit(c+93,"wb_valid", false,-1);
    tracep->declBus(c+94,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+95,"if_id_pc", false,-1, 31,0);
    tracep->declBit(c+319,"id_if_ready", false,-1);
    tracep->declBit(c+96,"if_id_valid", false,-1);
    tracep->declBus(c+97,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+98,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+99,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+100,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+101,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+102,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+99,"id_ex_rs1", false,-1, 31,0);
    tracep->declBus(c+100,"id_ex_rs2", false,-1, 31,0);
    tracep->declBus(c+103,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+104,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+101,"id_ex_a5", false,-1, 31,0);
    tracep->declBus(c+105,"id_ex_ctrl", false,-1, 20,0);
    tracep->declBit(c+106,"id_ex_valid", false,-1);
    tracep->declBit(c+107,"ex_id_ready", false,-1);
    tracep->declBus(c+108,"ex_me_rd", false,-1, 4,0);
    tracep->declBus(c+321,"csr_data", false,-1, 31,0);
    tracep->declBus(c+109,"ex_me_ctrl", false,-1, 20,0);
    tracep->declBus(c+110,"ex_me_pc", false,-1, 31,0);
    tracep->declBus(c+111,"ex_me_imm", false,-1, 31,0);
    tracep->declBus(c+322,"ex_me_npc", false,-1, 31,0);
    tracep->declBus(c+112,"ex_me_rs2", false,-1, 31,0);
    tracep->declBus(c+113,"ex_me_alu", false,-1, 31,0);
    tracep->declBit(c+114,"ex_me_valid", false,-1);
    tracep->declBit(c+115,"me_ex_ready", false,-1);
    tracep->declBus(c+116,"me_wb_rd", false,-1, 4,0);
    tracep->declBus(c+117,"me_wb_ctrl", false,-1, 20,0);
    tracep->declBus(c+118,"me_wb_rdata", false,-1, 31,0);
    tracep->declBus(c+119,"me_wb_pc", false,-1, 31,0);
    tracep->declBus(c+120,"me_wb_imm", false,-1, 31,0);
    tracep->declBus(c+121,"me_wb_alu", false,-1, 31,0);
    tracep->declBus(c+122,"me_wb_npc", false,-1, 31,0);
    tracep->declBit(c+123,"me_wb_valid", false,-1);
    tracep->declBit(c+124,"wb_me_ready", false,-1);
    tracep->declBit(c+2,"reg_wen", false,-1);
    tracep->declBus(c+3,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+4,"reg_waddr", false,-1, 4,0);
    tracep->declBit(c+31,"if_axi4_arvalid", false,-1);
    tracep->declBit(c+254,"if_axi4_arready", false,-1);
    tracep->declBus(c+32,"if_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+298,"if_axi4_rvalid", false,-1);
    tracep->declBit(c+289,"if_axi4_rready", false,-1);
    tracep->declBus(c+299,"if_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+300,"if_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+33,"ls_axi4_arvalid", false,-1);
    tracep->declBit(c+255,"ls_axi4_arready", false,-1);
    tracep->declBus(c+34,"ls_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+301,"ls_axi4_rvalid", false,-1);
    tracep->declBit(c+290,"ls_axi4_rready", false,-1);
    tracep->declBus(c+302,"ls_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+303,"ls_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+256,"arb_sram_axi4_arvalid", false,-1);
    tracep->declBit(c+35,"arb_sram_axi4_arready", false,-1);
    tracep->declBus(c+257,"arb_sram_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+36,"arb_sram_axi4_rvalid", false,-1);
    tracep->declBit(c+304,"arb_sram_axi4_rready", false,-1);
    tracep->declBus(c+37,"arb_sram_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+38,"arb_sram_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+258,"arb_rtc_axi4_arvalid", false,-1);
    tracep->declBit(c+39,"arb_rtc_axi4_arready", false,-1);
    tracep->declBus(c+259,"arb_rtc_axi4_araddr", false,-1, 31,0);
    tracep->declBit(c+40,"arb_rtc_axi4_rvalid", false,-1);
    tracep->declBit(c+305,"arb_rtc_axi4_rready", false,-1);
    tracep->declBus(c+41,"arb_rtc_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+42,"arb_rtc_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+43,"ls_axi4_awvalid", false,-1);
    tracep->declBit(c+260,"ls_axi4_awready", false,-1);
    tracep->declBus(c+44,"ls_axi4_awaddr", false,-1, 31,0);
    tracep->declBit(c+45,"ls_axi4_wvalid", false,-1);
    tracep->declBit(c+261,"ls_axi4_wready", false,-1);
    tracep->declBus(c+46,"ls_axi4_wdata", false,-1, 31,0);
    tracep->declBus(c+47,"ls_axi4_wstrb", false,-1, 3,0);
    tracep->declBit(c+306,"ls_axi4_bvalid", false,-1);
    tracep->declBit(c+291,"ls_axi4_bready", false,-1);
    tracep->declBus(c+307,"ls_axi4_bresp", false,-1, 1,0);
    tracep->declBit(c+262,"uart_awvalid", false,-1);
    tracep->declBit(c+5,"uart_awready", false,-1);
    tracep->declBus(c+263,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+264,"uart_wvalid", false,-1);
    tracep->declBit(c+6,"uart_wready", false,-1);
    tracep->declBus(c+265,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+266,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+48,"uart_bvalid", false,-1);
    tracep->declBit(c+308,"uart_bready", false,-1);
    tracep->declBus(c+49,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+267,"sram_awvalid", false,-1);
    tracep->declBit(c+7,"sram_awready", false,-1);
    tracep->declBus(c+268,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+269,"sram_wvalid", false,-1);
    tracep->declBit(c+8,"sram_wready", false,-1);
    tracep->declBus(c+270,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+271,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+50,"sram_bvalid", false,-1);
    tracep->declBit(c+309,"sram_bready", false,-1);
    tracep->declBus(c+51,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+125,"if_req", false,-1);
    tracep->declBus(c+126,"if_addr", false,-1, 31,0);
    tracep->declBus(c+292,"biu_rdata_if", false,-1, 31,0);
    tracep->declBus(c+293,"biu_rresp_if", false,-1, 1,0);
    tracep->declBit(c+294,"biu_ready_if", false,-1);
    tracep->declBit(c+127,"lsu_req", false,-1);
    tracep->declBit(c+128,"lsu_wwe", false,-1);
    tracep->declBit(c+129,"lsu_rwe", false,-1);
    tracep->declBus(c+130,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+131,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+132,"lsu_strb", false,-1, 3,0);
    tracep->declBus(c+295,"biu_rresp_ls", false,-1, 1,0);
    tracep->declBus(c+296,"biu_wresp_ls", false,-1, 1,0);
    tracep->declBus(c+297,"biu_rdata_ls", false,-1, 31,0);
    tracep->declBit(c+133,"is_jar_call", false,-1);
    tracep->declBit(c+134,"is_jalr_call", false,-1);
    tracep->declBit(c+135,"is_jalr_ret", false,-1);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBus(c+341,"RTC_ADDR", false,-1, 31,0);
    tracep->declBus(c+342,"SRAM_ADDR_START", false,-1, 31,0);
    tracep->declBus(c+343,"SRAM_ADDR_END", false,-1, 31,0);
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBit(c+31,"if_arvalid", false,-1);
    tracep->declBit(c+254,"if_arready", false,-1);
    tracep->declBus(c+32,"if_araddr", false,-1, 31,0);
    tracep->declBit(c+298,"if_rvalid", false,-1);
    tracep->declBit(c+289,"if_rready", false,-1);
    tracep->declBus(c+299,"if_rdata", false,-1, 31,0);
    tracep->declBus(c+300,"if_rresp", false,-1, 1,0);
    tracep->declBit(c+33,"ls_arvalid", false,-1);
    tracep->declBit(c+255,"ls_arready", false,-1);
    tracep->declBus(c+34,"ls_araddr", false,-1, 31,0);
    tracep->declBit(c+301,"ls_rvalid", false,-1);
    tracep->declBit(c+290,"ls_rready", false,-1);
    tracep->declBus(c+302,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+303,"ls_rresp", false,-1, 1,0);
    tracep->declBit(c+256,"sram_arvalid", false,-1);
    tracep->declBit(c+35,"sram_arready", false,-1);
    tracep->declBus(c+257,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+36,"sram_rvalid", false,-1);
    tracep->declBit(c+304,"sram_rready", false,-1);
    tracep->declBus(c+37,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+38,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+258,"rtc_arvalid", false,-1);
    tracep->declBit(c+39,"rtc_arready", false,-1);
    tracep->declBus(c+259,"rtc_araddr", false,-1, 31,0);
    tracep->declBit(c+40,"rtc_rvalid", false,-1);
    tracep->declBit(c+305,"rtc_rready", false,-1);
    tracep->declBus(c+41,"rtc_rdata", false,-1, 31,0);
    tracep->declBus(c+42,"rtc_rresp", false,-1, 1,0);
    tracep->declBus(c+344,"DEV_NONE", false,-1, 31,0);
    tracep->declBus(c+345,"DEV_SRAM", false,-1, 31,0);
    tracep->declBus(c+346,"DEV_RTC", false,-1, 31,0);
    tracep->declBus(c+344,"IDLE", false,-1, 31,0);
    tracep->declBus(c+345,"IF_MASTER", false,-1, 31,0);
    tracep->declBus(c+346,"LS_MASTER", false,-1, 31,0);
    tracep->declBus(c+9,"state", false,-1, 1,0);
    tracep->declBus(c+310,"next_state", false,-1, 1,0);
    tracep->declBit(c+52,"is_rtc", false,-1);
    tracep->declBit(c+53,"is_sram", false,-1);
    tracep->declBus(c+10,"target_dev", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint ");
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBus(c+259,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+258,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+39,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+41,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+42,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+40,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+305,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+272,"AR_active", false,-1);
    tracep->declBit(c+311,"R_active", false,-1);
    tracep->declQuad(c+136,"mtime", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBit(c+106,"in_valid", false,-1);
    tracep->declBus(c+101,"in_a5", false,-1, 31,0);
    tracep->declBus(c+99,"in_rs1_data", false,-1, 31,0);
    tracep->declBus(c+100,"in_rs2_data", false,-1, 31,0);
    tracep->declBus(c+105,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+104,"in_imm", false,-1, 31,0);
    tracep->declBus(c+102,"in_rd", false,-1, 4,0);
    tracep->declBus(c+103,"in_pc", false,-1, 31,0);
    tracep->declBit(c+107,"in_ready", false,-1);
    tracep->declBit(c+114,"out_valid", false,-1);
    tracep->declBus(c+322,"out_next_pc", false,-1, 31,0);
    tracep->declBus(c+113,"out_Alu_Result", false,-1, 31,0);
    tracep->declBus(c+112,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+109,"out_ctrl", false,-1, 20,0);
    tracep->declBus(c+321,"csr_data", false,-1, 31,0);
    tracep->declBus(c+108,"rd_out", false,-1, 4,0);
    tracep->declBus(c+111,"imm_out", false,-1, 31,0);
    tracep->declBus(c+110,"pc_out", false,-1, 31,0);
    tracep->declBit(c+115,"out_ready", false,-1);
    tracep->declBus(c+344,"IDLE", false,-1, 31,0);
    tracep->declBus(c+345,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+346,"WAIT", false,-1, 31,0);
    tracep->declBus(c+138,"state", false,-1, 1,0);
    tracep->declBus(c+108,"rd", false,-1, 4,0);
    tracep->declBus(c+139,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+112,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+110,"pc", false,-1, 31,0);
    tracep->declBus(c+111,"imm", false,-1, 31,0);
    tracep->declBus(c+140,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+109,"ctrl", false,-1, 20,0);
    tracep->declBus(c+141,"B", false,-1, 31,0);
    tracep->declBus(c+142,"AluOp", false,-1, 3,0);
    tracep->declBit(c+143,"ALUSrc", false,-1);
    tracep->declBus(c+144,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+145,"is_ecall", false,-1);
    tracep->declBit(c+146,"is_mret", false,-1);
    tracep->declBit(c+147,"Branch", false,-1);
    tracep->declBus(c+148,"Jump", false,-1, 1,0);
    tracep->declBus(c+113,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+322,"next_pc", false,-1, 31,0);
    tracep->declBus(c+323,"mtvec", false,-1, 31,0);
    tracep->declBus(c+324,"mepc", false,-1, 31,0);
    tracep->pushNamePrefix("csr_regfile_init ");
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBus(c+110,"pc", false,-1, 31,0);
    tracep->declBus(c+140,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+145,"is_ecall", false,-1);
    tracep->declBit(c+146,"is_mret", false,-1);
    tracep->declBus(c+144,"csr_wen", false,-1, 1,0);
    tracep->declBus(c+149,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+139,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+321,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+323,"mtvec_out", false,-1, 31,0);
    tracep->declBus(c+324,"mepc_out", false,-1, 31,0);
    tracep->declBus(c+325,"mstatus", false,-1, 31,0);
    tracep->declBus(c+323,"mtvec", false,-1, 31,0);
    tracep->declBus(c+324,"mepc", false,-1, 31,0);
    tracep->declBus(c+326,"mcause", false,-1, 31,0);
    tracep->declBus(c+321,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+347,"MSTATUS_MPP_MASK", false,-1, 31,0);
    tracep->declBus(c+348,"MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+349,"MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBit(c+96,"in_valid", false,-1);
    tracep->declBus(c+94,"in_inst", false,-1, 31,0);
    tracep->declBus(c+95,"in_pc", false,-1, 31,0);
    tracep->declBit(c+319,"in_ready", false,-1);
    tracep->declBus(c+97,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+98,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+99,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+100,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+101,"in_reg_a5", false,-1, 31,0);
    tracep->declBit(c+106,"out_valid", false,-1);
    tracep->declBus(c+103,"pc_out", false,-1, 31,0);
    tracep->declBus(c+99,"out_rs1_data", false,-1, 31,0);
    tracep->declBus(c+100,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+105,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+104,"imm_out", false,-1, 31,0);
    tracep->declBus(c+101,"reg_a5_out", false,-1, 31,0);
    tracep->declBus(c+102,"rd_out", false,-1, 4,0);
    tracep->declBit(c+107,"out_ready", false,-1);
    tracep->declBus(c+344,"IDLE", false,-1, 31,0);
    tracep->declBus(c+345,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+346,"WAIT", false,-1, 31,0);
    tracep->declBus(c+150,"state", false,-1, 1,0);
    tracep->declBus(c+151,"inst", false,-1, 31,0);
    tracep->declBus(c+103,"pc", false,-1, 31,0);
    tracep->declBit(c+152,"invalid", false,-1);
    tracep->declBit(c+153,"is_ebreak", false,-1);
    tracep->declBus(c+154,"opcode", false,-1, 6,0);
    tracep->declBus(c+155,"func3", false,-1, 2,0);
    tracep->declBus(c+156,"func7", false,-1, 6,0);
    tracep->declBus(c+104,"imm", false,-1, 31,0);
    tracep->declBus(c+157,"immI", false,-1, 31,0);
    tracep->declBus(c+158,"immJ", false,-1, 31,0);
    tracep->declBus(c+159,"immU", false,-1, 31,0);
    tracep->declBus(c+160,"immS", false,-1, 31,0);
    tracep->declBus(c+161,"immB", false,-1, 31,0);
    tracep->declBus(c+102,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+162,"MemWrite", false,-1);
    tracep->declBit(c+163,"MemRead", false,-1);
    tracep->declBus(c+164,"MemOp", false,-1, 2,0);
    tracep->declBus(c+165,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+166,"RegWrite", false,-1);
    tracep->declBit(c+167,"Branch", false,-1);
    tracep->declBus(c+168,"Jump", false,-1, 1,0);
    tracep->declBit(c+169,"ALUSrc", false,-1);
    tracep->declBus(c+170,"AluOp", false,-1, 3,0);
    tracep->declBus(c+171,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+172,"is_ecall", false,-1);
    tracep->declBit(c+173,"is_mret", false,-1);
    tracep->declBus(c+105,"ctrl_bus", false,-1, 20,0);
    tracep->declBus(c+350,"OP_LOAD", false,-1, 6,0);
    tracep->declBus(c+351,"OP_STORE", false,-1, 6,0);
    tracep->declBus(c+352,"OP_BRANCH", false,-1, 6,0);
    tracep->declBus(c+353,"OP_JAL", false,-1, 6,0);
    tracep->declBus(c+354,"OP_JALR", false,-1, 6,0);
    tracep->declBus(c+355,"OP_OP_IMM", false,-1, 6,0);
    tracep->declBus(c+356,"OP_OP", false,-1, 6,0);
    tracep->declBus(c+357,"OP_LUI", false,-1, 6,0);
    tracep->declBus(c+358,"OP_AUIPC", false,-1, 6,0);
    tracep->declBus(c+359,"OP_SYSTEM", false,-1, 6,0);
    tracep->declBus(c+360,"F3_ADD_SUB", false,-1, 2,0);
    tracep->declBus(c+361,"F3_SLL", false,-1, 2,0);
    tracep->declBus(c+362,"F3_SLT", false,-1, 2,0);
    tracep->declBus(c+363,"F3_SLTU", false,-1, 2,0);
    tracep->declBus(c+364,"F3_XOR", false,-1, 2,0);
    tracep->declBus(c+365,"F3_SR", false,-1, 2,0);
    tracep->declBus(c+366,"F3_OR", false,-1, 2,0);
    tracep->declBus(c+367,"F3_AND", false,-1, 2,0);
    tracep->declBus(c+368,"F7_SUB", false,-1, 6,0);
    tracep->declBus(c+368,"F7_SRA", false,-1, 6,0);
    tracep->declBus(c+369,"F7_DEFAULT", false,-1, 6,0);
    tracep->declBus(c+370,"ALU_ADD", false,-1, 3,0);
    tracep->declBus(c+371,"ALU_SLL", false,-1, 3,0);
    tracep->declBus(c+372,"ALU_SLT", false,-1, 3,0);
    tracep->declBus(c+373,"ALU_SLTU", false,-1, 3,0);
    tracep->declBus(c+374,"ALU_XOR", false,-1, 3,0);
    tracep->declBus(c+375,"ALU_SRA", false,-1, 3,0);
    tracep->declBus(c+376,"ALU_SRL", false,-1, 3,0);
    tracep->declBus(c+377,"ALU_OR", false,-1, 3,0);
    tracep->declBus(c+378,"ALU_AND", false,-1, 3,0);
    tracep->declBus(c+379,"ALU_SUB", false,-1, 3,0);
    tracep->declBus(c+380,"ALU_PCADD", false,-1, 3,0);
    tracep->declBus(c+381,"JUMP_NONE", false,-1, 1,0);
    tracep->declBus(c+382,"JUMP_JAL", false,-1, 1,0);
    tracep->declBus(c+383,"JUMP_JALR", false,-1, 1,0);
    tracep->declBus(c+360,"MTR_ALU", false,-1, 2,0);
    tracep->declBus(c+361,"MTR_MEM", false,-1, 2,0);
    tracep->declBus(c+362,"MTR_PCP4", false,-1, 2,0);
    tracep->declBus(c+363,"MTR_IMM", false,-1, 2,0);
    tracep->declBus(c+364,"MTR_CSR", false,-1, 2,0);
    tracep->declBus(c+360,"OP_LW", false,-1, 2,0);
    tracep->declBus(c+361,"OP_LH", false,-1, 2,0);
    tracep->declBus(c+362,"OP_LB", false,-1, 2,0);
    tracep->declBus(c+363,"OP_LHU", false,-1, 2,0);
    tracep->declBus(c+364,"OP_LBU", false,-1, 2,0);
    tracep->declBus(c+365,"OP_SW", false,-1, 2,0);
    tracep->declBus(c+366,"OP_SH", false,-1, 2,0);
    tracep->declBus(c+367,"OP_SB", false,-1, 2,0);
    tracep->declBus(c+381,"CSR_NONE", false,-1, 1,0);
    tracep->declBus(c+382,"CSR_WRITE", false,-1, 1,0);
    tracep->declBus(c+383,"CSR_SET", false,-1, 1,0);
    tracep->declBus(c+384,"ECALL_CODE", false,-1, 11,0);
    tracep->declBus(c+385,"EBREAK_CODE", false,-1, 11,0);
    tracep->declBus(c+386,"MRET_CODE", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifbiu ");
    tracep->declBus(c+387,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+388,"LFSR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBit(c+125,"if_req", false,-1);
    tracep->declBus(c+126,"if_addr", false,-1, 31,0);
    tracep->declBus(c+292,"biu_rdata", false,-1, 31,0);
    tracep->declBit(c+294,"biu_ready", false,-1);
    tracep->declBus(c+293,"biu_rresp", false,-1, 1,0);
    tracep->declBus(c+32,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+31,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+254,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+299,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+300,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+298,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+289,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+88,"AR_active", false,-1);
    tracep->declBit(c+327,"R_active", false,-1);
    tracep->declBus(c+54,"read_cnt", false,-1, 7,0);
    tracep->declBit(c+55,"read_pending", false,-1);
    tracep->declBus(c+56,"lfsr", false,-1, 7,0);
    tracep->declBit(c+57,"lfsr_feedback", false,-1);
    tracep->declBus(c+389,"rand_delay", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBit(c+93,"wb_done", false,-1);
    tracep->declBus(c+316,"next_pc", false,-1, 31,0);
    tracep->declBit(c+294,"biu_ready", false,-1);
    tracep->declBus(c+292,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+126,"if_addr", false,-1, 31,0);
    tracep->declBit(c+125,"if_req", false,-1);
    tracep->declBit(c+96,"out_valid", false,-1);
    tracep->declBus(c+94,"inst", false,-1, 31,0);
    tracep->declBus(c+95,"pc", false,-1, 31,0);
    tracep->declBit(c+319,"out_ready", false,-1);
    tracep->declBus(c+174,"current_pc", false,-1, 31,0);
    tracep->declBus(c+175,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+176,"state", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsbiu ");
    tracep->declBus(c+387,"READ_MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+387,"WRITE_MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+388,"LFSR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBus(c+130,"lsu_addr", false,-1, 31,0);
    tracep->declBit(c+128,"lsu_wwe", false,-1);
    tracep->declBit(c+129,"lsu_rwe", false,-1);
    tracep->declBus(c+131,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+132,"lsu_strb", false,-1, 3,0);
    tracep->declBit(c+127,"lsu_req", false,-1);
    tracep->declBus(c+297,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+296,"biu_wresp", false,-1, 1,0);
    tracep->declBus(c+295,"biu_rresp", false,-1, 1,0);
    tracep->declBus(c+34,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+33,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+255,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+302,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+303,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+301,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+290,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+44,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+43,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+260,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+46,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+47,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+45,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+261,"M_AXI_WREADY", false,-1);
    tracep->declBus(c+307,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+306,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+291,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+89,"AW_active", false,-1);
    tracep->declBit(c+90,"W_active", false,-1);
    tracep->declBit(c+328,"B_active", false,-1);
    tracep->declBit(c+91,"AR_active", false,-1);
    tracep->declBit(c+329,"R_active", false,-1);
    tracep->declBus(c+58,"strb_reg", false,-1, 3,0);
    tracep->declBus(c+59,"read_cnt", false,-1, 7,0);
    tracep->declBit(c+60,"read_pending", false,-1);
    tracep->declBus(c+61,"write_addr_cnt", false,-1, 7,0);
    tracep->declBit(c+62,"write_addr_pending", false,-1);
    tracep->declBus(c+63,"write_data_cnt", false,-1, 7,0);
    tracep->declBit(c+64,"write_data_pending", false,-1);
    tracep->declBus(c+65,"lfsr_addr", false,-1, 7,0);
    tracep->declBus(c+66,"lfsr_data", false,-1, 7,0);
    tracep->declBit(c+67,"lfsrr_feedback", false,-1);
    tracep->declBit(c+68,"lfsrw_feedback", false,-1);
    tracep->declBus(c+389,"read_rand_delay", false,-1, 7,0);
    tracep->declBus(c+389,"write_rand_delay", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBit(c+114,"in_valid", false,-1);
    tracep->declBus(c+109,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+108,"in_rd", false,-1, 4,0);
    tracep->declBus(c+111,"in_imm", false,-1, 31,0);
    tracep->declBus(c+322,"in_npc", false,-1, 31,0);
    tracep->declBus(c+110,"in_pc", false,-1, 31,0);
    tracep->declBus(c+112,"in_lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+113,"in_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+115,"in_ready", false,-1);
    tracep->declBit(c+123,"out_valid", false,-1);
    tracep->declBus(c+118,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+120,"imm_out", false,-1, 31,0);
    tracep->declBus(c+122,"npc_out", false,-1, 31,0);
    tracep->declBus(c+119,"pc_out", false,-1, 31,0);
    tracep->declBus(c+116,"rd_out", false,-1, 4,0);
    tracep->declBus(c+121,"alu_result", false,-1, 31,0);
    tracep->declBit(c+124,"out_ready", false,-1);
    tracep->declBit(c+127,"lsu_req", false,-1);
    tracep->declBit(c+128,"lsu_wwe", false,-1);
    tracep->declBit(c+129,"lsu_rwe", false,-1);
    tracep->declBus(c+130,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+131,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+132,"lsu_strb", false,-1, 3,0);
    tracep->declBus(c+295,"biu_rresp", false,-1, 1,0);
    tracep->declBus(c+296,"biu_wresp", false,-1, 1,0);
    tracep->declBus(c+297,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+344,"IDLE", false,-1, 31,0);
    tracep->declBus(c+345,"STORE", false,-1, 31,0);
    tracep->declBus(c+346,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+360,"OP_LW", false,-1, 2,0);
    tracep->declBus(c+361,"OP_LH", false,-1, 2,0);
    tracep->declBus(c+362,"OP_LB", false,-1, 2,0);
    tracep->declBus(c+363,"OP_LHU", false,-1, 2,0);
    tracep->declBus(c+364,"OP_LBU", false,-1, 2,0);
    tracep->declBus(c+365,"OP_SW", false,-1, 2,0);
    tracep->declBus(c+366,"OP_SH", false,-1, 2,0);
    tracep->declBus(c+367,"OP_SB", false,-1, 2,0);
    tracep->declBus(c+177,"state", false,-1, 1,0);
    tracep->declBit(c+11,"has_data", false,-1);
    tracep->declBus(c+117,"ctrl", false,-1, 20,0);
    tracep->declBus(c+116,"rd", false,-1, 4,0);
    tracep->declBus(c+178,"wdata", false,-1, 31,0);
    tracep->declBus(c+121,"addr", false,-1, 31,0);
    tracep->declBus(c+119,"pc", false,-1, 31,0);
    tracep->declBus(c+120,"imm", false,-1, 31,0);
    tracep->declBus(c+122,"npc", false,-1, 31,0);
    tracep->declBus(c+312,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+128,"MemWrite", false,-1);
    tracep->declBit(c+129,"MemRead", false,-1);
    tracep->declBus(c+179,"MemOp", false,-1, 2,0);
    tracep->declBus(c+180,"offset", false,-1, 1,0);
    tracep->declBus(c+130,"aligned_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBus(c+97,"reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+98,"reg_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+99,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+100,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+2,"reg_wen", false,-1);
    tracep->declBit(c+93,"in_valid", false,-1);
    tracep->declBus(c+4,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+3,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+101,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+1,"w_resp", false,-1);
    tracep->declBus(c+390,"rs1", false,-1, 4,0);
    tracep->declBus(c+391,"rs2", false,-1, 4,0);
    tracep->declBus(c+392,"rd", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+181+i*1,"register", true,(i+0), 31,0);
    }
    tracep->declBit(c+330,"is_info_register", false,-1);
    tracep->declBit(c+331,"is_en_display", false,-1);
    tracep->declBus(c+332,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+12,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram ");
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBus(c+257,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+256,"S_AXI_ARVALID", false,-1);
    tracep->declBit(c+35,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+37,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+38,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+36,"S_AXI_RVALID", false,-1);
    tracep->declBit(c+304,"S_AXI_RREADY", false,-1);
    tracep->declBus(c+268,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+267,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+7,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+270,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+271,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+269,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+8,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+51,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+50,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+309,"S_AXI_BREADY", false,-1);
    tracep->declBus(c+393,"s_rdata", false,-1, 31,0);
    tracep->declBit(c+333,"AW_active", false,-1);
    tracep->declBit(c+334,"W_active", false,-1);
    tracep->declBit(c+335,"B_active", false,-1);
    tracep->declBit(c+92,"AR_active", false,-1);
    tracep->declBit(c+336,"R_active", false,-1);
    tracep->declBit(c+273,"addr_full", false,-1);
    tracep->declBit(c+274,"data_full", false,-1);
    tracep->declBit(c+275,"addr_empty", false,-1);
    tracep->declBit(c+276,"data_empty", false,-1);
    tracep->declBit(c+277,"addr_wr_en", false,-1);
    tracep->declBit(c+278,"data_wr_en", false,-1);
    tracep->declBus(c+69,"fifo_addr_out", false,-1, 31,0);
    tracep->declQuad(c+70,"fifo_data_out", false,-1, 35,0);
    tracep->declBus(c+72,"fifo_wdata_out", false,-1, 31,0);
    tracep->declBus(c+73,"fifo_wstrb_out", false,-1, 3,0);
    tracep->declBit(c+279,"fifo_rd_en", false,-1);
    tracep->declBit(c+74,"data_process", false,-1);
    tracep->pushNamePrefix("addr_fifo ");
    tracep->declBus(c+394,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+388,"FIFO_DEPTH", false,-1, 31,0);
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBus(c+268,"din", false,-1, 31,0);
    tracep->declBit(c+277,"wr_en", false,-1);
    tracep->declBit(c+273,"full", false,-1);
    tracep->declBus(c+69,"dout", false,-1, 31,0);
    tracep->declBit(c+279,"rd_en", false,-1);
    tracep->declBit(c+275,"empty", false,-1);
    tracep->declBus(c+395,"PTR_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+213+i*1,"fifo_mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+13,"wr_ptr", false,-1, 3,0);
    tracep->declBus(c+75,"rd_ptr", false,-1, 3,0);
    tracep->declBus(c+14,"wr_addr", false,-1, 2,0);
    tracep->declBus(c+76,"rd_addr", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_fifo ");
    tracep->declBus(c+396,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+388,"FIFO_DEPTH", false,-1, 31,0);
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declQuad(c+280,"din", false,-1, 35,0);
    tracep->declBit(c+278,"wr_en", false,-1);
    tracep->declBit(c+274,"full", false,-1);
    tracep->declQuad(c+70,"dout", false,-1, 35,0);
    tracep->declBit(c+279,"rd_en", false,-1);
    tracep->declBit(c+276,"empty", false,-1);
    tracep->declBus(c+395,"PTR_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+221+i*2,"fifo_mem", true,(i+0), 35,0);
    }
    tracep->declBus(c+15,"wr_ptr", false,-1, 3,0);
    tracep->declBus(c+77,"rd_ptr", false,-1, 3,0);
    tracep->declBus(c+16,"wr_addr", false,-1, 2,0);
    tracep->declBus(c+78,"rd_addr", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("uart ");
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBus(c+263,"S_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+262,"S_AXI_AWVALID", false,-1);
    tracep->declBit(c+5,"S_AXI_AWREADY", false,-1);
    tracep->declBus(c+265,"S_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+266,"S_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+264,"S_AXI_WVALID", false,-1);
    tracep->declBit(c+6,"S_AXI_WREADY", false,-1);
    tracep->declBus(c+49,"S_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+48,"S_AXI_BVALID", false,-1);
    tracep->declBit(c+308,"S_AXI_BREADY", false,-1);
    tracep->declBit(c+282,"addr_full", false,-1);
    tracep->declBit(c+283,"data_full", false,-1);
    tracep->declBit(c+284,"addr_empty", false,-1);
    tracep->declBit(c+285,"data_empty", false,-1);
    tracep->declBit(c+286,"addr_wr_en", false,-1);
    tracep->declBit(c+287,"data_wr_en", false,-1);
    tracep->declBus(c+79,"fifo_addr_out", false,-1, 31,0);
    tracep->declBus(c+80,"fifo_wdata_out", false,-1, 31,0);
    tracep->declBit(c+288,"fifo_rd_en", false,-1);
    tracep->declBit(c+337,"AW_active", false,-1);
    tracep->declBit(c+338,"W_active", false,-1);
    tracep->declBit(c+339,"B_active", false,-1);
    tracep->declBus(c+397,"write_data_reg", false,-1, 31,0);
    tracep->declBit(c+81,"data_process", false,-1);
    tracep->pushNamePrefix("addr_fifo_uart ");
    tracep->declBus(c+394,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+388,"FIFO_DEPTH", false,-1, 31,0);
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBus(c+263,"din", false,-1, 31,0);
    tracep->declBit(c+286,"wr_en", false,-1);
    tracep->declBit(c+282,"full", false,-1);
    tracep->declBus(c+79,"dout", false,-1, 31,0);
    tracep->declBit(c+288,"rd_en", false,-1);
    tracep->declBit(c+284,"empty", false,-1);
    tracep->declBus(c+395,"PTR_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+237+i*1,"fifo_mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+17,"wr_ptr", false,-1, 3,0);
    tracep->declBus(c+82,"rd_ptr", false,-1, 3,0);
    tracep->declBus(c+18,"wr_addr", false,-1, 2,0);
    tracep->declBus(c+83,"rd_addr", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_fifo_uart ");
    tracep->declBus(c+394,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+388,"FIFO_DEPTH", false,-1, 31,0);
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBus(c+265,"din", false,-1, 31,0);
    tracep->declBit(c+287,"wr_en", false,-1);
    tracep->declBit(c+283,"full", false,-1);
    tracep->declBus(c+80,"dout", false,-1, 31,0);
    tracep->declBit(c+288,"rd_en", false,-1);
    tracep->declBit(c+285,"empty", false,-1);
    tracep->declBus(c+395,"PTR_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+245+i*1,"fifo_mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+19,"wr_ptr", false,-1, 3,0);
    tracep->declBus(c+84,"rd_ptr", false,-1, 3,0);
    tracep->declBus(c+20,"wr_addr", false,-1, 2,0);
    tracep->declBus(c+85,"rd_addr", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBit(c+123,"in_valid", false,-1);
    tracep->declBus(c+121,"in_alu_result", false,-1, 31,0);
    tracep->declBus(c+118,"in_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+122,"in_npc", false,-1, 31,0);
    tracep->declBus(c+119,"in_pc", false,-1, 31,0);
    tracep->declBus(c+120,"in_imm", false,-1, 31,0);
    tracep->declBus(c+117,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+321,"in_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+116,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+124,"in_ready", false,-1);
    tracep->declBit(c+93,"out_valid", false,-1);
    tracep->declBus(c+316,"next_pc", false,-1, 31,0);
    tracep->declBit(c+2,"reg_wen", false,-1);
    tracep->declBus(c+4,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+3,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+344,"IDLE", false,-1, 31,0);
    tracep->declBus(c+345,"CHOOSE", false,-1, 31,0);
    tracep->declBus(c+346,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+395,"DONE", false,-1, 31,0);
    tracep->declBus(c+253,"state", false,-1, 1,0);
    tracep->declBit(c+398,"has_data", false,-1);
    tracep->declBus(c+21,"ctrl", false,-1, 20,0);
    tracep->declBus(c+4,"rd", false,-1, 4,0);
    tracep->declBus(c+22,"npc", false,-1, 31,0);
    tracep->declBus(c+23,"pc", false,-1, 31,0);
    tracep->declBus(c+24,"imm", false,-1, 31,0);
    tracep->declBus(c+25,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+26,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+27,"alu_result", false,-1, 31,0);
    tracep->declBit(c+399,"wen", false,-1);
    tracep->declBus(c+3,"wb_data", false,-1, 31,0);
    tracep->declBus(c+28,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+2,"RegWrite", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("xbar ");
    tracep->declBus(c+400,"UART_ADDR", false,-1, 31,0);
    tracep->declBus(c+342,"SRAM_ADDR_START", false,-1, 31,0);
    tracep->declBus(c+343,"SRAM_ADDR_END", false,-1, 31,0);
    tracep->declBit(c+314,"clock", false,-1);
    tracep->declBit(c+315,"reset", false,-1);
    tracep->declBus(c+44,"m_awaddr", false,-1, 31,0);
    tracep->declBit(c+43,"m_awvalid", false,-1);
    tracep->declBit(c+260,"m_awready", false,-1);
    tracep->declBus(c+46,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+47,"m_wstrb", false,-1, 3,0);
    tracep->declBit(c+45,"m_wvalid", false,-1);
    tracep->declBit(c+261,"m_wready", false,-1);
    tracep->declBus(c+307,"m_bresp", false,-1, 1,0);
    tracep->declBit(c+306,"m_bvalid", false,-1);
    tracep->declBit(c+291,"m_bready", false,-1);
    tracep->declBus(c+263,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+262,"uart_awvalid", false,-1);
    tracep->declBit(c+5,"uart_awready", false,-1);
    tracep->declBus(c+265,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+266,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+264,"uart_wvalid", false,-1);
    tracep->declBit(c+6,"uart_wready", false,-1);
    tracep->declBus(c+49,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+48,"uart_bvalid", false,-1);
    tracep->declBit(c+308,"uart_bready", false,-1);
    tracep->declBus(c+268,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+267,"sram_awvalid", false,-1);
    tracep->declBit(c+7,"sram_awready", false,-1);
    tracep->declBus(c+270,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+271,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+269,"sram_wvalid", false,-1);
    tracep->declBit(c+8,"sram_wready", false,-1);
    tracep->declBus(c+51,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+50,"sram_bvalid", false,-1);
    tracep->declBit(c+309,"sram_bready", false,-1);
    tracep->declBus(c+381,"DEV_NONE", false,-1, 1,0);
    tracep->declBus(c+382,"DEV_SRAM", false,-1, 1,0);
    tracep->declBus(c+383,"DEV_UART", false,-1, 1,0);
    tracep->declBit(c+86,"is_uart", false,-1);
    tracep->declBit(c+87,"is_sram", false,-1);
    tracep->declBus(c+29,"target_dev", false,-1, 1,0);
    tracep->declBus(c+344,"IDLE", false,-1, 31,0);
    tracep->declBus(c+345,"AW", false,-1, 31,0);
    tracep->declBus(c+346,"W", false,-1, 31,0);
    tracep->declBus(c+395,"B", false,-1, 31,0);
    tracep->declBus(c+30,"state", false,-1, 2,0);
    tracep->declBus(c+313,"next_state", false,-1, 2,0);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyx_25030085_top__DOT__reg_wresp));
    bufp->fullBit(oldp+2,((1U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                 >> 0x10U))));
    bufp->fullIData(oldp+3,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wb_data),32);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd),5);
    bufp->fullBit(oldp+5,(vlSelf->ysyx_25030085_top__DOT__uart_awready));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_25030085_top__DOT__uart_wready));
    bufp->fullBit(oldp+7,(vlSelf->ysyx_25030085_top__DOT__sram_awready));
    bufp->fullBit(oldp+8,(vlSelf->ysyx_25030085_top__DOT__sram_wready));
    bufp->fullCData(oldp+9,(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state),2);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__target_dev),2);
    bufp->fullBit(oldp+11,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__has_data));
    bufp->fullIData(oldp+12,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr),4);
    bufp->fullCData(oldp+14,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr))),3);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr),4);
    bufp->fullCData(oldp+16,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr))),3);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr),4);
    bufp->fullCData(oldp+18,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr))),3);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr),4);
    bufp->fullCData(oldp+20,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr))),3);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl),21);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result),32);
    bufp->fullCData(oldp+28,((7U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                    >> 0xaU))),3);
    bufp->fullCData(oldp+29,(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__target_dev),2);
    bufp->fullCData(oldp+30,(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__state),3);
    bufp->fullBit(oldp+31,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid));
    bufp->fullIData(oldp+32,(vlSelf->ysyx_25030085_top__DOT__if_axi4_araddr),32);
    bufp->fullBit(oldp+33,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid));
    bufp->fullIData(oldp+34,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr),32);
    bufp->fullBit(oldp+35,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arready));
    bufp->fullBit(oldp+36,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rvalid));
    bufp->fullIData(oldp+37,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rdata),32);
    bufp->fullCData(oldp+38,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rresp),2);
    bufp->fullBit(oldp+39,(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_arready));
    bufp->fullBit(oldp+40,(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_rvalid));
    bufp->fullIData(oldp+41,(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_rdata),32);
    bufp->fullCData(oldp+42,(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_rresp),2);
    bufp->fullBit(oldp+43,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid));
    bufp->fullIData(oldp+44,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr),32);
    bufp->fullBit(oldp+45,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid));
    bufp->fullIData(oldp+46,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wdata),32);
    bufp->fullCData(oldp+47,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wstrb),4);
    bufp->fullBit(oldp+48,(vlSelf->ysyx_25030085_top__DOT__uart_bvalid));
    bufp->fullCData(oldp+49,(vlSelf->ysyx_25030085_top__DOT__uart_bresp),2);
    bufp->fullBit(oldp+50,(vlSelf->ysyx_25030085_top__DOT__sram_bvalid));
    bufp->fullCData(oldp+51,(vlSelf->ysyx_25030085_top__DOT__sram_bresp),2);
    bufp->fullBit(oldp+52,((0xa0000048U == vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr)));
    bufp->fullBit(oldp+53,(((0x80000000U <= vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr) 
                            & (0x87ffffffU >= vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr))));
    bufp->fullCData(oldp+54,(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_cnt),8);
    bufp->fullBit(oldp+55,(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_pending));
    bufp->fullCData(oldp+56,(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr),8);
    bufp->fullBit(oldp+57,((1U & VL_REDXOR_8((0xb8U 
                                              & (IData)(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr))))));
    bufp->fullCData(oldp+58,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__strb_reg),4);
    bufp->fullCData(oldp+59,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_cnt),8);
    bufp->fullBit(oldp+60,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_pending));
    bufp->fullCData(oldp+61,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_cnt),8);
    bufp->fullBit(oldp+62,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_pending));
    bufp->fullCData(oldp+63,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_cnt),8);
    bufp->fullBit(oldp+64,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_pending));
    bufp->fullCData(oldp+65,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr),8);
    bufp->fullCData(oldp+66,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data),8);
    bufp->fullBit(oldp+67,((1U & VL_REDXOR_8((0xb8U 
                                              & (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr))))));
    bufp->fullBit(oldp+68,((1U & VL_REDXOR_8((0x9cU 
                                              & (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data))))));
    bufp->fullIData(oldp+69,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_addr_out),32);
    bufp->fullQData(oldp+70,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_data_out),36);
    bufp->fullIData(oldp+72,((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_data_out)),32);
    bufp->fullCData(oldp+73,((0xfU & (IData)((vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_data_out 
                                              >> 0x20U)))),4);
    bufp->fullBit(oldp+74,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_process));
    bufp->fullCData(oldp+75,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr),4);
    bufp->fullCData(oldp+76,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr))),3);
    bufp->fullCData(oldp+77,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr),4);
    bufp->fullCData(oldp+78,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr))),3);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_addr_out),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_wdata_out),32);
    bufp->fullBit(oldp+81,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_process));
    bufp->fullCData(oldp+82,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr),4);
    bufp->fullCData(oldp+83,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr))),3);
    bufp->fullCData(oldp+84,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr),4);
    bufp->fullCData(oldp+85,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr))),3);
    bufp->fullBit(oldp+86,((0xa00003f8U == vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr)));
    bufp->fullBit(oldp+87,(((0x80000000U <= vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr) 
                            & (0x87ffffffU >= vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr))));
    bufp->fullBit(oldp+88,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid))));
    bufp->fullBit(oldp+89,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid))));
    bufp->fullBit(oldp+90,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid))));
    bufp->fullBit(oldp+91,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid))));
    bufp->fullBit(oldp+92,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arvalid))));
    bufp->fullBit(oldp+93,(vlSelf->ysyx_25030085_top__DOT__wb_valid));
    bufp->fullIData(oldp+94,(vlSelf->ysyx_25030085_top__DOT__if_id_inst),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_25030085_top__DOT__if_id_pc),32);
    bufp->fullBit(oldp+96,(vlSelf->ysyx_25030085_top__DOT__if_id_valid));
    bufp->fullCData(oldp+97,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+98,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_25030085_top__DOT__rs1_data),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_25030085_top__DOT__rs2_data),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                              [0xfU]),32);
    bufp->fullCData(oldp+102,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm),32);
    bufp->fullIData(oldp+105,((((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen) 
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
    bufp->fullBit(oldp+106,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))));
    bufp->fullBit(oldp+107,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
    bufp->fullCData(oldp+108,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rd),5);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl),21);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result),32);
    bufp->fullBit(oldp+114,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
    bufp->fullBit(oldp+115,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
    bufp->fullCData(oldp+116,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rd),5);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl),21);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_25030085_top__DOT__me_wb_rdata),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__pc),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__imm),32);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr),32);
    bufp->fullIData(oldp+122,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__npc),32);
    bufp->fullBit(oldp+123,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
    bufp->fullBit(oldp+124,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))));
    bufp->fullBit(oldp+125,(vlSelf->ysyx_25030085_top__DOT__if_req));
    bufp->fullIData(oldp+126,(vlSelf->ysyx_25030085_top__DOT__if_addr),32);
    bufp->fullBit(oldp+127,(vlSelf->ysyx_25030085_top__DOT__lsu_req));
    bufp->fullBit(oldp+128,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                   >> 6U))));
    bufp->fullBit(oldp+129,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                   >> 5U))));
    bufp->fullIData(oldp+130,((0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),32);
    bufp->fullIData(oldp+131,(vlSelf->ysyx_25030085_top__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+132,(vlSelf->ysyx_25030085_top__DOT__lsu_strb),4);
    bufp->fullBit(oldp+133,((IData)(((0x80U == (0xf80U 
                                                & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                     & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullBit(oldp+134,((IData)(((0x80U == (0xf80U 
                                                & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                     & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullBit(oldp+135,((IData)(((0x8000U == (0xf8f80U 
                                                  & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                     & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
    bufp->fullQData(oldp+136,(vlSelf->ysyx_25030085_top__DOT__clint__DOT__mtime),64);
    bufp->fullCData(oldp+138,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state),2);
    bufp->fullIData(oldp+139,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data),32);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__reg_a5),32);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__B),32);
    bufp->fullCData(oldp+142,((0xfU & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                       >> 1U))),4);
    bufp->fullBit(oldp+143,((1U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)));
    bufp->fullCData(oldp+144,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0x13U))),2);
    bufp->fullBit(oldp+145,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                   >> 0x11U))));
    bufp->fullBit(oldp+146,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                   >> 0x12U))));
    bufp->fullBit(oldp+147,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                   >> 0xdU))));
    bufp->fullCData(oldp+148,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0xeU))),2);
    bufp->fullSData(oldp+149,((0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm)),12);
    bufp->fullCData(oldp+150,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state),2);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst),32);
    bufp->fullBit(oldp+152,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid));
    bufp->fullBit(oldp+153,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak));
    bufp->fullCData(oldp+154,((0x7fU & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),7);
    bufp->fullCData(oldp+155,((7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+156,((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI),32);
    bufp->fullIData(oldp+158,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+159,((0xfffff000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),32);
    bufp->fullIData(oldp+160,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+161,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
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
    bufp->fullBit(oldp+162,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemWrite));
    bufp->fullBit(oldp+163,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemRead));
    bufp->fullCData(oldp+164,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp),3);
    bufp->fullCData(oldp+165,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg),3);
    bufp->fullBit(oldp+166,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite));
    bufp->fullBit(oldp+167,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Branch));
    bufp->fullCData(oldp+168,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump),2);
    bufp->fullBit(oldp+169,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc));
    bufp->fullCData(oldp+170,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp),4);
    bufp->fullCData(oldp+171,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen),2);
    bufp->fullBit(oldp+172,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall));
    bufp->fullBit(oldp+173,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret));
    bufp->fullIData(oldp+174,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_reg),32);
    bufp->fullCData(oldp+176,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state),3);
    bufp->fullCData(oldp+177,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state),2);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__wdata),32);
    bufp->fullCData(oldp+179,((7U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                     >> 7U))),3);
    bufp->fullCData(oldp+180,((3U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),2);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0]),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[1]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[2]),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[3]),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[4]),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[5]),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[6]),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[7]),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[8]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[9]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[10]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[11]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[12]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[13]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[14]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[15]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[16]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[17]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[18]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[19]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[20]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[21]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[22]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[23]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[24]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[25]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[26]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[27]),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[28]),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[29]),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[30]),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[31]),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[0]),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[1]),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[2]),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[3]),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[4]),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[5]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[6]),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[7]),32);
    bufp->fullQData(oldp+221,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[0]),36);
    bufp->fullQData(oldp+223,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[1]),36);
    bufp->fullQData(oldp+225,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[2]),36);
    bufp->fullQData(oldp+227,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[3]),36);
    bufp->fullQData(oldp+229,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[4]),36);
    bufp->fullQData(oldp+231,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[5]),36);
    bufp->fullQData(oldp+233,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[6]),36);
    bufp->fullQData(oldp+235,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[7]),36);
    bufp->fullIData(oldp+237,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[0]),32);
    bufp->fullIData(oldp+238,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[1]),32);
    bufp->fullIData(oldp+239,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[2]),32);
    bufp->fullIData(oldp+240,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[3]),32);
    bufp->fullIData(oldp+241,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[4]),32);
    bufp->fullIData(oldp+242,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[5]),32);
    bufp->fullIData(oldp+243,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[6]),32);
    bufp->fullIData(oldp+244,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[7]),32);
    bufp->fullIData(oldp+245,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[0]),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[1]),32);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[2]),32);
    bufp->fullIData(oldp+248,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[3]),32);
    bufp->fullIData(oldp+249,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[4]),32);
    bufp->fullIData(oldp+250,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[5]),32);
    bufp->fullIData(oldp+251,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[6]),32);
    bufp->fullIData(oldp+252,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[7]),32);
    bufp->fullCData(oldp+253,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state),2);
    bufp->fullBit(oldp+254,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready));
    bufp->fullBit(oldp+255,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready));
    bufp->fullBit(oldp+256,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arvalid));
    bufp->fullIData(oldp+257,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_araddr),32);
    bufp->fullBit(oldp+258,(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_arvalid));
    bufp->fullIData(oldp+259,(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_araddr),32);
    bufp->fullBit(oldp+260,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready));
    bufp->fullBit(oldp+261,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready));
    bufp->fullBit(oldp+262,(vlSelf->ysyx_25030085_top__DOT__uart_awvalid));
    bufp->fullIData(oldp+263,(vlSelf->ysyx_25030085_top__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+264,(vlSelf->ysyx_25030085_top__DOT__uart_wvalid));
    bufp->fullIData(oldp+265,(vlSelf->ysyx_25030085_top__DOT__uart_wdata),32);
    bufp->fullCData(oldp+266,(vlSelf->ysyx_25030085_top__DOT__uart_wstrb),4);
    bufp->fullBit(oldp+267,(vlSelf->ysyx_25030085_top__DOT__sram_awvalid));
    bufp->fullIData(oldp+268,(vlSelf->ysyx_25030085_top__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+269,(vlSelf->ysyx_25030085_top__DOT__sram_wvalid));
    bufp->fullIData(oldp+270,(vlSelf->ysyx_25030085_top__DOT__sram_wdata),32);
    bufp->fullCData(oldp+271,(vlSelf->ysyx_25030085_top__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+272,(vlSelf->ysyx_25030085_top__DOT__clint__DOT__AR_active));
    bufp->fullBit(oldp+273,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_full));
    bufp->fullBit(oldp+274,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_full));
    bufp->fullBit(oldp+275,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_empty));
    bufp->fullBit(oldp+276,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_empty));
    bufp->fullBit(oldp+277,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_wr_en));
    bufp->fullBit(oldp+278,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_wr_en));
    bufp->fullBit(oldp+279,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_rd_en));
    bufp->fullQData(oldp+280,((((QData)((IData)(vlSelf->ysyx_25030085_top__DOT__sram_wstrb)) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_25030085_top__DOT__sram_wdata)))),36);
    bufp->fullBit(oldp+282,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_full));
    bufp->fullBit(oldp+283,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_full));
    bufp->fullBit(oldp+284,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_empty));
    bufp->fullBit(oldp+285,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_empty));
    bufp->fullBit(oldp+286,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_wr_en));
    bufp->fullBit(oldp+287,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_wr_en));
    bufp->fullBit(oldp+288,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_rd_en));
    bufp->fullBit(oldp+289,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready));
    bufp->fullBit(oldp+290,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready));
    bufp->fullBit(oldp+291,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready));
    bufp->fullIData(oldp+292,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_if),32);
    bufp->fullCData(oldp+293,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_if),2);
    bufp->fullBit(oldp+294,(vlSelf->ysyx_25030085_top__DOT__biu_ready_if));
    bufp->fullCData(oldp+295,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_ls),2);
    bufp->fullCData(oldp+296,(vlSelf->ysyx_25030085_top__DOT__biu_wresp_ls),2);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls),32);
    bufp->fullBit(oldp+298,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid));
    bufp->fullIData(oldp+299,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rdata),32);
    bufp->fullCData(oldp+300,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rresp),2);
    bufp->fullBit(oldp+301,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid));
    bufp->fullIData(oldp+302,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata),32);
    bufp->fullCData(oldp+303,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp),2);
    bufp->fullBit(oldp+304,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rready));
    bufp->fullBit(oldp+305,(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_rready));
    bufp->fullBit(oldp+306,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid));
    bufp->fullCData(oldp+307,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bresp),2);
    bufp->fullBit(oldp+308,(vlSelf->ysyx_25030085_top__DOT__uart_bready));
    bufp->fullBit(oldp+309,(vlSelf->ysyx_25030085_top__DOT__sram_bready));
    bufp->fullCData(oldp+310,(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__next_state),2);
    bufp->fullBit(oldp+311,(vlSelf->ysyx_25030085_top__DOT__clint__DOT__R_active));
    bufp->fullIData(oldp+312,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+313,(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__next_state),3);
    bufp->fullBit(oldp+314,(vlSelf->clock));
    bufp->fullBit(oldp+315,(vlSelf->reset));
    bufp->fullIData(oldp+316,(vlSelf->top_pc),32);
    bufp->fullIData(oldp+317,(vlSelf->top_inst),32);
    bufp->fullBit(oldp+318,(vlSelf->top_valid));
    bufp->fullBit(oldp+319,(vlSelf->top_ready));
    bufp->fullBit(oldp+320,(vlSelf->inst_done));
    bufp->fullIData(oldp+321,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
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
    bufp->fullIData(oldp+322,(((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
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
    bufp->fullIData(oldp+323,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause),32);
    bufp->fullBit(oldp+327,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid))));
    bufp->fullBit(oldp+328,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid))));
    bufp->fullBit(oldp+329,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid))));
    bufp->fullBit(oldp+330,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register));
    bufp->fullBit(oldp+331,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display));
    bufp->fullIData(oldp+332,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i),32);
    bufp->fullBit(oldp+333,(((IData)(vlSelf->ysyx_25030085_top__DOT__sram_awready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__sram_awvalid))));
    bufp->fullBit(oldp+334,(((IData)(vlSelf->ysyx_25030085_top__DOT__sram_wready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__sram_wvalid))));
    bufp->fullBit(oldp+335,(((IData)(vlSelf->ysyx_25030085_top__DOT__sram_bready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__sram_bvalid))));
    bufp->fullBit(oldp+336,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rvalid))));
    bufp->fullBit(oldp+337,(((IData)(vlSelf->ysyx_25030085_top__DOT__uart_awready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__uart_awvalid))));
    bufp->fullBit(oldp+338,(((IData)(vlSelf->ysyx_25030085_top__DOT__uart_wready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__uart_wvalid))));
    bufp->fullBit(oldp+339,(((IData)(vlSelf->ysyx_25030085_top__DOT__uart_bready) 
                             & (IData)(vlSelf->ysyx_25030085_top__DOT__uart_bvalid))));
    bufp->fullBit(oldp+340,(vlSelf->ysyx_25030085_top__DOT__wb_done));
    bufp->fullIData(oldp+341,(0xa0000048U),32);
    bufp->fullIData(oldp+342,(0x80000000U),32);
    bufp->fullIData(oldp+343,(0x87ffffffU),32);
    bufp->fullIData(oldp+344,(0U),32);
    bufp->fullIData(oldp+345,(1U),32);
    bufp->fullIData(oldp+346,(2U),32);
    bufp->fullIData(oldp+347,(0x1800U),32);
    bufp->fullIData(oldp+348,(0x80U),32);
    bufp->fullIData(oldp+349,(8U),32);
    bufp->fullCData(oldp+350,(3U),7);
    bufp->fullCData(oldp+351,(0x23U),7);
    bufp->fullCData(oldp+352,(0x63U),7);
    bufp->fullCData(oldp+353,(0x6fU),7);
    bufp->fullCData(oldp+354,(0x67U),7);
    bufp->fullCData(oldp+355,(0x13U),7);
    bufp->fullCData(oldp+356,(0x33U),7);
    bufp->fullCData(oldp+357,(0x37U),7);
    bufp->fullCData(oldp+358,(0x17U),7);
    bufp->fullCData(oldp+359,(0x73U),7);
    bufp->fullCData(oldp+360,(0U),3);
    bufp->fullCData(oldp+361,(1U),3);
    bufp->fullCData(oldp+362,(2U),3);
    bufp->fullCData(oldp+363,(3U),3);
    bufp->fullCData(oldp+364,(4U),3);
    bufp->fullCData(oldp+365,(5U),3);
    bufp->fullCData(oldp+366,(6U),3);
    bufp->fullCData(oldp+367,(7U),3);
    bufp->fullCData(oldp+368,(0x20U),7);
    bufp->fullCData(oldp+369,(0U),7);
    bufp->fullCData(oldp+370,(0U),4);
    bufp->fullCData(oldp+371,(1U),4);
    bufp->fullCData(oldp+372,(2U),4);
    bufp->fullCData(oldp+373,(3U),4);
    bufp->fullCData(oldp+374,(4U),4);
    bufp->fullCData(oldp+375,(5U),4);
    bufp->fullCData(oldp+376,(6U),4);
    bufp->fullCData(oldp+377,(7U),4);
    bufp->fullCData(oldp+378,(8U),4);
    bufp->fullCData(oldp+379,(0xaU),4);
    bufp->fullCData(oldp+380,(9U),4);
    bufp->fullCData(oldp+381,(0U),2);
    bufp->fullCData(oldp+382,(1U),2);
    bufp->fullCData(oldp+383,(2U),2);
    bufp->fullSData(oldp+384,(0U),12);
    bufp->fullSData(oldp+385,(1U),12);
    bufp->fullSData(oldp+386,(0x302U),12);
    bufp->fullIData(oldp+387,(0x14U),32);
    bufp->fullIData(oldp+388,(8U),32);
    bufp->fullCData(oldp+389,(0U),8);
    bufp->fullCData(oldp+390,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs1),5);
    bufp->fullCData(oldp+391,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs2),5);
    bufp->fullCData(oldp+392,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rd),5);
    bufp->fullIData(oldp+393,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__s_rdata),32);
    bufp->fullIData(oldp+394,(0x20U),32);
    bufp->fullIData(oldp+395,(3U),32);
    bufp->fullIData(oldp+396,(0x24U),32);
    bufp->fullIData(oldp+397,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__write_data_reg),32);
    bufp->fullBit(oldp+398,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__has_data));
    bufp->fullBit(oldp+399,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wen));
    bufp->fullIData(oldp+400,(0xa00003f8U),32);
}
