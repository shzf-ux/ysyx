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
        bufp->chgIData(oldp+0,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl),21);
        bufp->chgIData(oldp+1,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ReadData),32);
        bufp->chgIData(oldp+2,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__pc),32);
        bufp->chgIData(oldp+3,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__imm),32);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr),32);
        bufp->chgBit(oldp+5,(vlSelf->ysyx_25030085_top__DOT__reg_wen));
        bufp->chgIData(oldp+6,(((0x1000U & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                                 ? ((0x800U & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                                     ? 0U : ((0x400U 
                                              & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                                              ? 0U : vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__csr_rdata))
                                 : ((0x800U & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                                     ? ((0x400U & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                                         ? vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__imm
                                         : ((IData)(4U) 
                                            + vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__pc))
                                     : ((0x400U & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                                         ? vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__mem_rdata
                                         : vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__alu_result)))),32);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_25030085_top__DOT__reg_waddr),5);
        bufp->chgIData(oldp+8,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_wdata),32);
        bufp->chgBit(oldp+9,((1U & (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl 
                                    >> 6U))));
        bufp->chgBit(oldp+10,((1U & (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl 
                                     >> 5U))));
        bufp->chgCData(oldp+11,((7U & (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl 
                                       >> 7U))),3);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byte),8);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byteu),8);
        bufp->chgSData(oldp+14,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word),16);
        bufp->chgSData(oldp+15,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu),16);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata),32);
        bufp->chgCData(oldp+17,((3U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr)),2);
        bufp->chgIData(oldp+18,((0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr)),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl),21);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__pc),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__imm),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__csr_rdata),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__mem_rdata),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__alu_result),32);
        bufp->chgCData(oldp+25,((7U & (vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl 
                                       >> 0xaU))),3);
        bufp->chgBit(oldp+26,((1U & (vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl 
                                     >> 0x10U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+27,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mtvec),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mcause),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__next_pc_reg),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst),32);
        bufp->chgBit(oldp+34,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__fetch_valid));
        bufp->chgCData(oldp+35,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                          >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+36,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__alu_reg),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_25030085_top__DOT__rs1_data),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_25030085_top__DOT__rs2_data),32);
        bufp->chgBit(oldp+39,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__state))));
        bufp->chgCData(oldp+40,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+41,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+42,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__state))));
        bufp->chgBit(oldp+43,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__state))));
        bufp->chgIData(oldp+44,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                [0xfU]),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__rs1_reg),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__rs2_reg),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__pc),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm_reg),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ctrl_reg),21);
        bufp->chgBit(oldp+50,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__state))));
        bufp->chgBit(oldp+51,((1U & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__has_data)))));
        bufp->chgIData(oldp+52,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc_reg),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs2_data),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl),21);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm),32);
        bufp->chgBit(oldp+57,(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__has_data));
        bufp->chgBit(oldp+58,((1U & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__has_data)))));
        bufp->chgBit(oldp+59,(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__has_data));
        bufp->chgCData(oldp+60,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__state),2);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__reg_a5),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B),32);
        bufp->chgCData(oldp+64,((0xfU & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                         >> 1U))),4);
        bufp->chgBit(oldp+65,((1U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)));
        bufp->chgCData(oldp+66,((3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                       >> 0x13U))),2);
        bufp->chgBit(oldp+67,((1U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                     >> 0x11U))));
        bufp->chgBit(oldp+68,((1U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                     >> 0x12U))));
        bufp->chgBit(oldp+69,((1U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                     >> 0xdU))));
        bufp->chgCData(oldp+70,((3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                       >> 0xeU))),2);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__Alu_Result),32);
        bufp->chgSData(oldp+72,((0xfffU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm)),12);
        bufp->chgCData(oldp+73,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__state),2);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst),32);
        bufp->chgBit(oldp+75,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid));
        bufp->chgBit(oldp+76,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak));
        bufp->chgCData(oldp+77,((0x7fU & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)),7);
        bufp->chgCData(oldp+78,((7U & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+79,((vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI),32);
        bufp->chgIData(oldp+82,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                        >> 0x14U)))))),32);
        bufp->chgIData(oldp+83,((0xfffff000U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)),32);
        bufp->chgIData(oldp+84,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+85,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0x800U 
                                               & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                       >> 7U)))))),32);
        bufp->chgBit(oldp+86,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemWrite));
        bufp->chgBit(oldp+87,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemRead));
        bufp->chgCData(oldp+88,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemOp),3);
        bufp->chgCData(oldp+89,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemtoReg),3);
        bufp->chgBit(oldp+90,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite));
        bufp->chgBit(oldp+91,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Branch));
        bufp->chgCData(oldp+92,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Jump),2);
        bufp->chgBit(oldp+93,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc));
        bufp->chgCData(oldp+94,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__AluOp),4);
        bufp->chgCData(oldp+95,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__csr_wen),2);
        bufp->chgBit(oldp+96,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ecall));
        bufp->chgBit(oldp+97,(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_mret));
        bufp->chgIData(oldp+98,((((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc) 
                                  << 0x14U) | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__AluOp) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemRead) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemWrite) 
                                                      << 0xeU) 
                                                     | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemOp) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemtoReg) 
                                                            << 8U) 
                                                           | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Branch) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Jump) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ecall) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_mret) 
                                                                           << 2U) 
                                                                          | (IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__csr_wen))))))))))))),21);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0]),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[1]),32);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[2]),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[3]),32);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[4]),32);
        bufp->chgIData(oldp+104,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[5]),32);
        bufp->chgIData(oldp+105,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[6]),32);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[7]),32);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[8]),32);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[9]),32);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[10]),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[11]),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[12]),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[13]),32);
        bufp->chgIData(oldp+113,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[14]),32);
        bufp->chgIData(oldp+114,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[15]),32);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[16]),32);
        bufp->chgIData(oldp+116,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[17]),32);
        bufp->chgIData(oldp+117,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[18]),32);
        bufp->chgIData(oldp+118,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[19]),32);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[20]),32);
        bufp->chgIData(oldp+120,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[21]),32);
        bufp->chgIData(oldp+121,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[22]),32);
        bufp->chgIData(oldp+122,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[23]),32);
        bufp->chgIData(oldp+123,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[24]),32);
        bufp->chgIData(oldp+124,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[25]),32);
        bufp->chgIData(oldp+125,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[26]),32);
        bufp->chgIData(oldp+126,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[27]),32);
        bufp->chgIData(oldp+127,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[28]),32);
        bufp->chgIData(oldp+128,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[29]),32);
        bufp->chgIData(oldp+129,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[30]),32);
        bufp->chgIData(oldp+130,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[31]),32);
    }
    bufp->chgBit(oldp+131,(vlSelf->clk));
    bufp->chgBit(oldp+132,(vlSelf->rst));
    bufp->chgIData(oldp+133,(vlSelf->pc_out),32);
    bufp->chgIData(oldp+134,(vlSelf->inst),32);
    bufp->chgBit(oldp+135,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__state))));
    bufp->chgIData(oldp+136,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))
                               ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus
                               : ((0x305U == (0xfffU 
                                              & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))
                                   ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mtvec
                                   : ((0x341U == (0xfffU 
                                                  & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))
                                       ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc
                                       : ((0x342U == 
                                           (0xfffU 
                                            & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))
                                           ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mcause
                                           : 0U))))),32);
    bufp->chgIData(oldp+137,(((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                            >> 0xeU)))
                               ? (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm 
                                  + vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc)
                               : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                                >> 0xeU)))
                                   ? (0xfffffffeU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__Alu_Result)
                                   : ((0x2000U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                                       ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__Alu_Result
                                       : ((0x20000U 
                                           & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                                           ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mtvec
                                           : ((0x40000U 
                                               & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                                               ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc
                                               : ((IData)(4U) 
                                                  + vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc))))))),32);
    bufp->chgCData(oldp+138,(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__state),2);
    bufp->chgBit(oldp+139,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register));
    bufp->chgBit(oldp+140,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display));
    bufp->chgIData(oldp+141,(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__i),32);
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
