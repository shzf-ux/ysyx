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
        bufp->chgIData(oldp+0,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                               [0xfU]),32);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rd),5);
        bufp->chgIData(oldp+2,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl),21);
        bufp->chgIData(oldp+3,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc),32);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm),32);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data),32);
        bufp->chgBit(oldp+6,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__mem__DOT__state))));
        bufp->chgCData(oldp+7,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__rd),5);
        bufp->chgIData(oldp+8,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl),21);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__ReadData),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__pc),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__imm),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__npc),32);
        bufp->chgBit(oldp+14,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__mem__DOT__state))));
        bufp->chgBit(oldp+15,((1U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                     >> 0x10U))));
        bufp->chgIData(oldp+16,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wb_data),32);
        bufp->chgCData(oldp+17,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd),5);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__reg_a5),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__B),32);
        bufp->chgCData(oldp+21,((0xfU & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                         >> 1U))),4);
        bufp->chgBit(oldp+22,((1U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)));
        bufp->chgCData(oldp+23,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                       >> 0x13U))),2);
        bufp->chgBit(oldp+24,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0x11U))));
        bufp->chgBit(oldp+25,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0x12U))));
        bufp->chgBit(oldp+26,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0xdU))));
        bufp->chgCData(oldp+27,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                       >> 0xeU))),2);
        bufp->chgSData(oldp+28,((0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm)),12);
        bufp->chgCData(oldp+29,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__state),2);
        bufp->chgBit(oldp+30,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__has_data));
        bufp->chgIData(oldp+31,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_wdata),32);
        bufp->chgBit(oldp+32,((1U & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl 
                                     >> 6U))));
        bufp->chgBit(oldp+33,((1U & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl 
                                     >> 5U))));
        bufp->chgCData(oldp+34,((7U & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl 
                                       >> 7U))),3);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata),32);
        bufp->chgCData(oldp+36,((3U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr)),2);
        bufp->chgIData(oldp+37,((0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr)),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0]),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[1]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[2]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[3]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[4]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[5]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[6]),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[7]),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[8]),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[9]),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[10]),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[11]),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[12]),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[13]),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[14]),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[15]),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[16]),32);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[17]),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[18]),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[19]),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[20]),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[21]),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[22]),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[23]),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[24]),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[25]),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[26]),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[27]),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[28]),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[29]),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[30]),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[31]),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl),21);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result),32);
        bufp->chgCData(oldp+78,((7U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                       >> 0xaU))),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+79,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+83,((3U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))));
        bufp->chgIData(oldp+84,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc),32);
        bufp->chgCData(oldp+85,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+86,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_25030085_top__DOT__rs1_data),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_25030085_top__DOT__rs2_data),32);
        bufp->chgCData(oldp+89,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                          >> 7U))),5);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm),32);
        bufp->chgIData(oldp+92,((((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen) 
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
        bufp->chgBit(oldp+93,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))));
        bufp->chgBit(oldp+94,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
        bufp->chgIData(oldp+95,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result),32);
        bufp->chgBit(oldp+96,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
        bufp->chgBit(oldp+97,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))));
        bufp->chgBit(oldp+98,((IData)(((0x80U == (0xf80U 
                                                  & vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst)) 
                                       & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
        bufp->chgBit(oldp+99,((IData)(((0x80U == (0xf80U 
                                                  & vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst)) 
                                       & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
        bufp->chgBit(oldp+100,((IData)(((0x8000U == 
                                         (0xf8f80U 
                                          & vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst)) 
                                        & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
        bufp->chgCData(oldp+101,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state),2);
        bufp->chgCData(oldp+102,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state),2);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst),32);
        bufp->chgBit(oldp+104,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid));
        bufp->chgBit(oldp+105,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak));
        bufp->chgCData(oldp+106,((0x7fU & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),7);
        bufp->chgCData(oldp+107,((7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+108,((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI),32);
        bufp->chgIData(oldp+110,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                         >> 0x14U)))))),32);
        bufp->chgIData(oldp+111,((0xfffff000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),32);
        bufp->chgIData(oldp+112,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+113,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
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
        bufp->chgBit(oldp+114,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemWrite));
        bufp->chgBit(oldp+115,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemRead));
        bufp->chgCData(oldp+116,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp),3);
        bufp->chgCData(oldp+117,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg),3);
        bufp->chgBit(oldp+118,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite));
        bufp->chgBit(oldp+119,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Branch));
        bufp->chgCData(oldp+120,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump),2);
        bufp->chgBit(oldp+121,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc));
        bufp->chgCData(oldp+122,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp),4);
        bufp->chgCData(oldp+123,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen),2);
        bufp->chgBit(oldp+124,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall));
        bufp->chgBit(oldp+125,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret));
        bufp->chgIData(oldp+126,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst),32);
        bufp->chgBit(oldp+127,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_valid));
        bufp->chgCData(oldp+128,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state),2);
    }
    bufp->chgBit(oldp+129,(vlSelf->clk));
    bufp->chgBit(oldp+130,(vlSelf->rst));
    bufp->chgIData(oldp+131,(vlSelf->top_pc),32);
    bufp->chgIData(oldp+132,(vlSelf->top_inst),32);
    bufp->chgBit(oldp+133,(vlSelf->top_valid));
    bufp->chgBit(oldp+134,(vlSelf->top_ready));
    bufp->chgBit(oldp+135,(vlSelf->inst_done));
    bufp->chgIData(oldp+136,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
                               ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus
                               : ((0x305U == (0xfffU 
                                              & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
                                   ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec
                                   : ((0x341U == (0xfffU 
                                                  & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
                                       ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc
                                       : ((0x342U == 
                                           (0xfffU 
                                            & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
                                           ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause
                                           : 0U))))),32);
    bufp->chgIData(oldp+137,(((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                            >> 0xeU)))
                               ? (vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm 
                                  + vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc)
                               : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                                >> 0xeU)))
                                   ? (0xfffffffeU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result)
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
    bufp->chgBit(oldp+138,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register));
    bufp->chgBit(oldp+139,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display));
    bufp->chgIData(oldp+140,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i),32);
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
