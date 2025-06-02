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
        bufp->chgIData(oldp+0,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI),32);
        bufp->chgIData(oldp+1,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immJ),32);
        bufp->chgIData(oldp+2,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immS),32);
        bufp->chgIData(oldp+3,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immB),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+4,(vlSelf->ysyx_25030085_top__DOT__ReadData),32);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_25030085_top__DOT__mtvec),32);
        bufp->chgIData(oldp+6,(vlSelf->ysyx_25030085_top__DOT__mepc),32);
        bufp->chgIData(oldp+7,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                               [0xfU]),32);
        bufp->chgIData(oldp+8,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata),32);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__aligned_addr),32);
        bufp->chgCData(oldp+10,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byte),8);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byteu),8);
        bufp->chgSData(oldp+12,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word),16);
        bufp->chgSData(oldp+13,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu),16);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[1]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[2]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[3]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[4]),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[5]),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[6]),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[7]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[8]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[9]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[10]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[11]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[12]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[13]),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[14]),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[15]),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[16]),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[17]),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[18]),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[19]),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[20]),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[21]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[22]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[23]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[24]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[25]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[26]),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[27]),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[28]),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[29]),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[30]),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+50,(vlSelf->ysyx_25030085_top__DOT__imm),32);
        bufp->chgBit(oldp+51,(vlSelf->ysyx_25030085_top__DOT__MemRead));
        bufp->chgCData(oldp+52,(vlSelf->ysyx_25030085_top__DOT__MemtoReg),3);
        bufp->chgBit(oldp+53,(vlSelf->ysyx_25030085_top__DOT__MemWrite));
        bufp->chgBit(oldp+54,(vlSelf->ysyx_25030085_top__DOT__RegWrite));
        bufp->chgBit(oldp+55,(vlSelf->ysyx_25030085_top__DOT__Branch));
        bufp->chgCData(oldp+56,(vlSelf->ysyx_25030085_top__DOT__Jump),2);
        bufp->chgBit(oldp+57,(vlSelf->ysyx_25030085_top__DOT__ALUSrc));
        bufp->chgCData(oldp+58,(vlSelf->ysyx_25030085_top__DOT__AluOp),4);
        bufp->chgCData(oldp+59,(vlSelf->ysyx_25030085_top__DOT__MemOp),3);
        bufp->chgCData(oldp+60,(vlSelf->ysyx_25030085_top__DOT__csr_wen),2);
        bufp->chgBit(oldp+61,(vlSelf->ysyx_25030085_top__DOT__is_ecall));
        bufp->chgBit(oldp+62,(vlSelf->ysyx_25030085_top__DOT__is_mret));
        bufp->chgSData(oldp+63,((0xfffU & vlSelf->ysyx_25030085_top__DOT__imm)),12);
    }
    bufp->chgBit(oldp+64,(vlSelf->clk));
    bufp->chgBit(oldp+65,(vlSelf->rst));
    bufp->chgIData(oldp+66,(vlSelf->instruction),32);
    bufp->chgIData(oldp+67,(vlSelf->pc_out),32);
    bufp->chgIData(oldp+68,(vlSelf->ysyx_25030085_top__DOT__Alu_Result),32);
    bufp->chgIData(oldp+69,(vlSelf->ysyx_25030085_top__DOT__Read_rs1),32);
    bufp->chgIData(oldp+70,(vlSelf->ysyx_25030085_top__DOT__Read_rs2),32);
    bufp->chgIData(oldp+71,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))
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
    bufp->chgCData(oldp+72,((3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)),2);
    bufp->chgIData(oldp+73,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B),32);
    bufp->chgBit(oldp+74,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid));
    bufp->chgBit(oldp+75,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak));
    bufp->chgCData(oldp+76,((0x7fU & vlSelf->instruction)),7);
    bufp->chgCData(oldp+77,((7U & (vlSelf->instruction 
                                   >> 0xcU))),3);
    bufp->chgCData(oldp+78,((vlSelf->instruction >> 0x19U)),7);
    bufp->chgIData(oldp+79,((0xfffff000U & vlSelf->instruction)),32);
    bufp->chgIData(oldp+80,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc),32);
    bufp->chgIData(oldp+81,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__dnpc),32);
    bufp->chgBit(oldp+82,((IData)(((0x80U == (0xf80U 
                                              & vlSelf->instruction)) 
                                   & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump))))));
    bufp->chgBit(oldp+83,((IData)(((0x80U == (0xf80U 
                                              & vlSelf->instruction)) 
                                   & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump))))));
    bufp->chgBit(oldp+84,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__is_jalr_ret));
    bufp->chgCData(oldp+85,((0x1fU & (vlSelf->instruction 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+86,((0x1fU & (vlSelf->instruction 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+87,((0x1fU & (vlSelf->instruction 
                                      >> 7U))),5);
    bufp->chgBit(oldp+88,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register));
    bufp->chgBit(oldp+89,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display));
    bufp->chgIData(oldp+90,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__i),32);
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
