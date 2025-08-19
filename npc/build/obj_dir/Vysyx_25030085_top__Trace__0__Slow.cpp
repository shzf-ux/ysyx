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
    tracep->declBit(c+46,"clk", false,-1);
    tracep->declBit(c+47,"rst", false,-1);
    tracep->declBus(c+48,"instruction", false,-1, 31,0);
    tracep->declBus(c+49,"pc_out", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_25030085_top ");
    tracep->declBit(c+46,"clk", false,-1);
    tracep->declBit(c+47,"rst", false,-1);
    tracep->declBus(c+48,"instruction", false,-1, 31,0);
    tracep->declBus(c+49,"pc_out", false,-1, 31,0);
    tracep->declBus(c+50,"next_pc", false,-1, 31,0);
    tracep->declBus(c+51,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+12,"ReadData", false,-1, 31,0);
    tracep->declBus(c+52,"wb_data", false,-1, 31,0);
    tracep->declBus(c+53,"waddr", false,-1, 4,0);
    tracep->declBus(c+54,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+55,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+56,"Read_rs1", false,-1, 31,0);
    tracep->declBus(c+57,"Read_rs2", false,-1, 31,0);
    tracep->declBit(c+1,"MemWrite", false,-1);
    tracep->declBit(c+2,"MemRead", false,-1);
    tracep->declBus(c+3,"MemOp", false,-1, 1,0);
    tracep->declBus(c+4,"MemtoReg", false,-1, 1,0);
    tracep->declBit(c+58,"RegWrite", false,-1);
    tracep->declBit(c+5,"Jump", false,-1);
    tracep->declBit(c+59,"ALUSrc", false,-1);
    tracep->declBus(c+6,"imm", false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+56,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+57,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+6,"imm", false,-1, 31,0);
    tracep->declBus(c+49,"pc", false,-1, 31,0);
    tracep->declBit(c+5,"Jump", false,-1);
    tracep->declBit(c+59,"ALUSrc", false,-1);
    tracep->declBus(c+51,"alu_result", false,-1, 31,0);
    tracep->declBus(c+50,"next_pc", false,-1, 31,0);
    tracep->declBus(c+60,"B", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+48,"inst", false,-1, 31,0);
    tracep->declBus(c+49,"pc", false,-1, 31,0);
    tracep->declBus(c+54,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+55,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+53,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1,"MemWrite", false,-1);
    tracep->declBit(c+2,"MemRead", false,-1);
    tracep->declBus(c+3,"MemOp", false,-1, 1,0);
    tracep->declBus(c+4,"MemtoReg", false,-1, 1,0);
    tracep->declBit(c+58,"RegWrite", false,-1);
    tracep->declBit(c+5,"Jump", false,-1);
    tracep->declBit(c+59,"ALUSrc", false,-1);
    tracep->declBus(c+6,"imm", false,-1, 31,0);
    tracep->declBus(c+61,"opcode", false,-1, 6,0);
    tracep->declBus(c+62,"func3", false,-1, 2,0);
    tracep->declBus(c+63,"func7", false,-1, 6,0);
    tracep->declBus(c+64,"csr_imm", false,-1, 11,0);
    tracep->declBit(c+65,"is_add", false,-1);
    tracep->declBit(c+7,"is_addi", false,-1);
    tracep->declBit(c+66,"is_lui", false,-1);
    tracep->declBit(c+8,"is_lw", false,-1);
    tracep->declBit(c+9,"is_lbu", false,-1);
    tracep->declBit(c+10,"is_sw", false,-1);
    tracep->declBit(c+11,"is_sb", false,-1);
    tracep->declBit(c+5,"is_jalr", false,-1);
    tracep->declBit(c+67,"is_ebreak", false,-1);
    tracep->declBus(c+68,"immI", false,-1, 31,0);
    tracep->declBus(c+69,"immU", false,-1, 31,0);
    tracep->declBus(c+70,"immS", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+46,"clk", false,-1);
    tracep->declBit(c+47,"rst", false,-1);
    tracep->declBus(c+50,"next_pc", false,-1, 31,0);
    tracep->declBus(c+49,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+46,"clk", false,-1);
    tracep->declBit(c+47,"rst", false,-1);
    tracep->declBit(c+2,"MemRead", false,-1);
    tracep->declBit(c+1,"MemWrite", false,-1);
    tracep->declBus(c+3,"MemOp", false,-1, 1,0);
    tracep->declBus(c+57,"Read_rs2", false,-1, 31,0);
    tracep->declBus(c+51,"addr", false,-1, 31,0);
    tracep->declBus(c+12,"ReadData", false,-1, 31,0);
    tracep->declBus(c+71,"aligned_addr", false,-1, 31,0);
    tracep->declBus(c+72,"offset", false,-1, 1,0);
    tracep->declBus(c+13,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+76,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+77,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+46,"clk", false,-1);
    tracep->declBus(c+52,"wdata", false,-1, 31,0);
    tracep->declBus(c+53,"waddr", false,-1, 4,0);
    tracep->declBit(c+58,"wen", false,-1);
    tracep->declBus(c+54,"arrs1", false,-1, 4,0);
    tracep->declBus(c+55,"arrs2", false,-1, 4,0);
    tracep->declBus(c+56,"rdata1", false,-1, 31,0);
    tracep->declBus(c+57,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+14+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBit(c+73,"is_info_register", false,-1);
    tracep->declBit(c+74,"is_en_display", false,-1);
    tracep->declBus(c+75,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBus(c+4,"MemtoReg", false,-1, 1,0);
    tracep->declBus(c+51,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+12,"ReadData", false,-1, 31,0);
    tracep->declBus(c+49,"pc", false,-1, 31,0);
    tracep->declBus(c+6,"imm", false,-1, 31,0);
    tracep->declBus(c+52,"wb_data", false,-1, 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyx_25030085_top__DOT__MemWrite));
    bufp->fullBit(oldp+2,(vlSelf->ysyx_25030085_top__DOT__MemRead));
    bufp->fullCData(oldp+3,(vlSelf->ysyx_25030085_top__DOT__MemOp),2);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_25030085_top__DOT__MemtoReg),2);
    bufp->fullBit(oldp+5,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_jalr));
    bufp->fullIData(oldp+6,(vlSelf->ysyx_25030085_top__DOT__imm),32);
    bufp->fullBit(oldp+7,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_addi));
    bufp->fullBit(oldp+8,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lw));
    bufp->fullBit(oldp+9,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lbu));
    bufp->fullBit(oldp+10,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sw));
    bufp->fullBit(oldp+11,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sb));
    bufp->fullIData(oldp+12,(vlSelf->ysyx_25030085_top__DOT__ReadData),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rdata),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+46,(vlSelf->clk));
    bufp->fullBit(oldp+47,(vlSelf->rst));
    bufp->fullIData(oldp+48,(vlSelf->instruction),32);
    bufp->fullIData(oldp+49,(vlSelf->pc_out),32);
    bufp->fullIData(oldp+50,(((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_jalr)
                               ? (0xfffffffeU & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                               : ((IData)(4U) + vlSelf->pc_out))),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_25030085_top__DOT__Alu_Result),32);
    bufp->fullIData(oldp+52,(((2U & (IData)(vlSelf->ysyx_25030085_top__DOT__MemtoReg))
                               ? ((1U & (IData)(vlSelf->ysyx_25030085_top__DOT__MemtoReg))
                                   ? vlSelf->ysyx_25030085_top__DOT__imm
                                   : ((IData)(4U) + vlSelf->pc_out))
                               : ((1U & (IData)(vlSelf->ysyx_25030085_top__DOT__MemtoReg))
                                   ? vlSelf->ysyx_25030085_top__DOT__ReadData
                                   : vlSelf->ysyx_25030085_top__DOT__Alu_Result))),32);
    bufp->fullCData(oldp+53,((0x1fU & (vlSelf->instruction 
                                       >> 7U))),5);
    bufp->fullCData(oldp+54,((0x1fU & (vlSelf->instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+55,((0x1fU & (vlSelf->instruction 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                             [(0x1fU & (vlSelf->instruction 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_25030085_top__DOT__Read_rs2),32);
    bufp->fullBit(oldp+58,(((IData)((0x33U == (0xfe00707fU 
                                               & vlSelf->instruction))) 
                            | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_addi) 
                               | ((0x37U == (0x7fU 
                                             & vlSelf->instruction)) 
                                  | (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT____VdfgTmp_h41f0f4ef__0))))));
    bufp->fullBit(oldp+59,(((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_addi) 
                            | ((0x37U == (0x7fU & vlSelf->instruction)) 
                               | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lw) 
                                  | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lbu) 
                                     | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sw) 
                                        | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sb) 
                                           | (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_jalr)))))))));
    bufp->fullIData(oldp+60,((((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_addi) 
                               | ((0x37U == (0x7fU 
                                             & vlSelf->instruction)) 
                                  | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lw) 
                                     | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lbu) 
                                        | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sw) 
                                           | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sb) 
                                              | (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_jalr)))))))
                               ? vlSelf->ysyx_25030085_top__DOT__imm
                               : vlSelf->ysyx_25030085_top__DOT__Read_rs2)),32);
    bufp->fullCData(oldp+61,((0x7fU & vlSelf->instruction)),7);
    bufp->fullCData(oldp+62,((7U & (vlSelf->instruction 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+63,((vlSelf->instruction >> 0x19U)),7);
    bufp->fullSData(oldp+64,((vlSelf->instruction >> 0x14U)),12);
    bufp->fullBit(oldp+65,((IData)((0x33U == (0xfe00707fU 
                                              & vlSelf->instruction)))));
    bufp->fullBit(oldp+66,((0x37U == (0x7fU & vlSelf->instruction))));
    bufp->fullBit(oldp+67,((IData)((0x100073U == (0xfff0707fU 
                                                  & vlSelf->instruction)))));
    bufp->fullIData(oldp+68,((((- (IData)((vlSelf->instruction 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->instruction 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+69,((0xfffff000U & vlSelf->instruction)),32);
    bufp->fullIData(oldp+70,((((- (IData)((vlSelf->instruction 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->instruction 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->instruction 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+71,((0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__Alu_Result)),32);
    bufp->fullCData(oldp+72,((3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)),2);
    bufp->fullBit(oldp+73,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register));
    bufp->fullBit(oldp+74,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display));
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i),32);
    bufp->fullIData(oldp+76,(5U),32);
    bufp->fullIData(oldp+77,(0x20U),32);
}
