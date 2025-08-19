// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25030085_top__Syms.h"


void Vysyx_25030085_top___024root__trace_chg_sub_0(Vysyx_25030085_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_25030085_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_25030085_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25030085_top___024root*>(voidSelf);
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25030085_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25030085_top___024root__trace_chg_sub_0(Vysyx_25030085_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->ysyx_25030085_top__DOT__MemWrite));
        bufp->chgBit(oldp+1,(vlSelf->ysyx_25030085_top__DOT__MemRead));
        bufp->chgCData(oldp+2,(vlSelf->ysyx_25030085_top__DOT__MemOp),2);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_25030085_top__DOT__MemtoReg),2);
        bufp->chgBit(oldp+4,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_jalr));
        bufp->chgIData(oldp+5,(vlSelf->ysyx_25030085_top__DOT__imm),32);
        bufp->chgBit(oldp+6,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_addi));
        bufp->chgBit(oldp+7,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lw));
        bufp->chgBit(oldp+8,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lbu));
        bufp->chgBit(oldp+9,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sw));
        bufp->chgBit(oldp+10,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sb));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+11,(vlSelf->ysyx_25030085_top__DOT__ReadData),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rdata),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+45,(vlSelf->clk));
    bufp->chgBit(oldp+46,(vlSelf->rst));
    bufp->chgIData(oldp+47,(vlSelf->instruction),32);
    bufp->chgIData(oldp+48,(vlSelf->pc_out),32);
    bufp->chgIData(oldp+49,(((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_jalr)
                              ? (0xfffffffeU & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                              : ((IData)(4U) + vlSelf->pc_out))),32);
    bufp->chgIData(oldp+50,(vlSelf->ysyx_25030085_top__DOT__Alu_Result),32);
    bufp->chgIData(oldp+51,(((2U & (IData)(vlSelf->ysyx_25030085_top__DOT__MemtoReg))
                              ? ((1U & (IData)(vlSelf->ysyx_25030085_top__DOT__MemtoReg))
                                  ? vlSelf->ysyx_25030085_top__DOT__imm
                                  : ((IData)(4U) + vlSelf->pc_out))
                              : ((1U & (IData)(vlSelf->ysyx_25030085_top__DOT__MemtoReg))
                                  ? vlSelf->ysyx_25030085_top__DOT__ReadData
                                  : vlSelf->ysyx_25030085_top__DOT__Alu_Result))),32);
    bufp->chgCData(oldp+52,((0x1fU & (vlSelf->instruction 
                                      >> 7U))),5);
    bufp->chgCData(oldp+53,((0x1fU & (vlSelf->instruction 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+54,((0x1fU & (vlSelf->instruction 
                                      >> 0x14U))),5);
    bufp->chgIData(oldp+55,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                            [(0x1fU & (vlSelf->instruction 
                                       >> 0xfU))]),32);
    bufp->chgIData(oldp+56,(vlSelf->ysyx_25030085_top__DOT__Read_rs2),32);
    bufp->chgBit(oldp+57,(((IData)((0x33U == (0xfe00707fU 
                                              & vlSelf->instruction))) 
                           | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_addi) 
                              | ((0x37U == (0x7fU & vlSelf->instruction)) 
                                 | (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT____VdfgTmp_h41f0f4ef__0))))));
    bufp->chgBit(oldp+58,(((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_addi) 
                           | ((0x37U == (0x7fU & vlSelf->instruction)) 
                              | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lw) 
                                 | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lbu) 
                                    | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sw) 
                                       | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sb) 
                                          | (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_jalr)))))))));
    bufp->chgIData(oldp+59,((((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_addi) 
                              | ((0x37U == (0x7fU & vlSelf->instruction)) 
                                 | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lw) 
                                    | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lbu) 
                                       | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sw) 
                                          | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sb) 
                                             | (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_jalr)))))))
                              ? vlSelf->ysyx_25030085_top__DOT__imm
                              : vlSelf->ysyx_25030085_top__DOT__Read_rs2)),32);
    bufp->chgCData(oldp+60,((0x7fU & vlSelf->instruction)),7);
    bufp->chgCData(oldp+61,((7U & (vlSelf->instruction 
                                   >> 0xcU))),3);
    bufp->chgCData(oldp+62,((vlSelf->instruction >> 0x19U)),7);
    bufp->chgSData(oldp+63,((vlSelf->instruction >> 0x14U)),12);
    bufp->chgBit(oldp+64,((IData)((0x33U == (0xfe00707fU 
                                             & vlSelf->instruction)))));
    bufp->chgBit(oldp+65,((0x37U == (0x7fU & vlSelf->instruction))));
    bufp->chgBit(oldp+66,((IData)((0x100073U == (0xfff0707fU 
                                                 & vlSelf->instruction)))));
    bufp->chgIData(oldp+67,((((- (IData)((vlSelf->instruction 
                                          >> 0x1fU))) 
                              << 0xcU) | (vlSelf->instruction 
                                          >> 0x14U))),32);
    bufp->chgIData(oldp+68,((0xfffff000U & vlSelf->instruction)),32);
    bufp->chgIData(oldp+69,((((- (IData)((vlSelf->instruction 
                                          >> 0x1fU))) 
                              << 0xcU) | ((0xfe0U & 
                                           (vlSelf->instruction 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSelf->instruction 
                                                >> 7U))))),32);
    bufp->chgIData(oldp+70,((0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__Alu_Result)),32);
    bufp->chgCData(oldp+71,((3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)),2);
    bufp->chgBit(oldp+72,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register));
    bufp->chgBit(oldp+73,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display));
    bufp->chgIData(oldp+74,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i),32);
}

void Vysyx_25030085_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25030085_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25030085_top___024root*>(voidSelf);
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
