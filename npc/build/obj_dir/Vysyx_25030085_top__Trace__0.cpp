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
        bufp->chgIData(oldp+0,(vlSelf->ysyx_25030085_top__DOT__ReadData),32);
        bufp->chgIData(oldp+1,(vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec),32);
        bufp->chgIData(oldp+2,(vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc),32);
        bufp->chgIData(oldp+3,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                               [0xfU]),32);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata),32);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__aligned_addr),32);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byte),8);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byteu),8);
        bufp->chgSData(oldp+8,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word),16);
        bufp->chgSData(oldp+9,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu),16);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0]),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[1]),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[2]),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[3]),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[4]),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[5]),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[6]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[7]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[8]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[9]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[10]),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[11]),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[12]),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[13]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[14]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[15]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[16]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[17]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[18]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[19]),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[20]),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[21]),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[22]),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[23]),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[24]),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[25]),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[26]),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[27]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[28]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[29]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[30]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+44,(vlSelf->ysyx_25030085_top__DOT__imm),32);
        bufp->chgBit(oldp+45,(vlSelf->ysyx_25030085_top__DOT__MemRead));
        bufp->chgCData(oldp+46,(vlSelf->ysyx_25030085_top__DOT__MemtoReg),3);
        bufp->chgBit(oldp+47,(vlSelf->ysyx_25030085_top__DOT__MemWrite));
        bufp->chgBit(oldp+48,(vlSelf->ysyx_25030085_top__DOT__RegWrite));
        bufp->chgCData(oldp+49,(vlSelf->ysyx_25030085_top__DOT__Jump),2);
        bufp->chgBit(oldp+50,(vlSelf->ysyx_25030085_top__DOT__ALUSrc));
        bufp->chgCData(oldp+51,(vlSelf->ysyx_25030085_top__DOT__AluOp),4);
        bufp->chgCData(oldp+52,(vlSelf->ysyx_25030085_top__DOT__MemOp),3);
        bufp->chgCData(oldp+53,(vlSelf->ysyx_25030085_top__DOT__csr_wen),2);
        bufp->chgBit(oldp+54,(vlSelf->ysyx_25030085_top__DOT__is_ecall));
        bufp->chgBit(oldp+55,(vlSelf->ysyx_25030085_top__DOT__is_mret));
        bufp->chgBit(oldp+56,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid));
        bufp->chgBit(oldp+57,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak));
        bufp->chgIData(oldp+58,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI),32);
        bufp->chgIData(oldp+59,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                        >> 0x14U)))))),32);
        bufp->chgIData(oldp+60,((0xfffff000U & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst)),32);
        bufp->chgIData(oldp+61,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+62,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0x800U 
                                               & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                       >> 7U)))))),32);
        bufp->chgSData(oldp+63,((0xfffU & vlSelf->ysyx_25030085_top__DOT__imm)),12);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst),32);
        bufp->chgBit(oldp+66,((IData)(((0x80U == (0xf80U 
                                                  & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst)) 
                                       & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump))))));
        bufp->chgBit(oldp+67,((IData)(((0x80U == (0xf80U 
                                                  & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst)) 
                                       & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump))))));
        bufp->chgBit(oldp+68,((IData)(((0x8000U == 
                                        (0xf8f80U & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst)) 
                                       & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump))))));
        bufp->chgCData(oldp+69,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+70,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+71,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                          >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+72,(vlSelf->ysyx_25030085_top__DOT__Alu_Result),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_25030085_top__DOT__Read_rs1),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_25030085_top__DOT__Read_rs2),32);
        bufp->chgBit(oldp+75,(vlSelf->ysyx_25030085_top__DOT__Branch));
        bufp->chgCData(oldp+76,((3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)),2);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__next_pc),32);
    }
    bufp->chgBit(oldp+79,(vlSelf->clk));
    bufp->chgBit(oldp+80,(vlSelf->rst));
    bufp->chgIData(oldp+81,(vlSelf->pc_out),32);
    bufp->chgIData(oldp+82,(vlSelf->inst),32);
    bufp->chgIData(oldp+83,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))
                              ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus
                              : ((0x305U == (0xfffU 
                                             & vlSelf->ysyx_25030085_top__DOT__imm))
                                  ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec
                                  : ((0x341U == (0xfffU 
                                                 & vlSelf->ysyx_25030085_top__DOT__imm))
                                      ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc
                                      : ((0x342U == 
                                          (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))
                                          ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause
                                          : 0U))))),32);
    bufp->chgCData(oldp+84,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+85,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+86,((vlSelf->inst >> 0x19U)),7);
    bufp->chgBit(oldp+87,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register));
    bufp->chgBit(oldp+88,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display));
    bufp->chgIData(oldp+89,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__i),32);
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
