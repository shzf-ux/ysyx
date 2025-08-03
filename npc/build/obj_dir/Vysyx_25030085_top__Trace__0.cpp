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
        bufp->chgBit(oldp+0,(vlSelf->ysyx_25030085_top__DOT__reg_wresp));
        bufp->chgBit(oldp+1,((1U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                    >> 0x10U))));
        bufp->chgIData(oldp+2,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wb_data),32);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd),5);
        bufp->chgBit(oldp+4,(vlSelf->ysyx_25030085_top__DOT__uart_awready));
        bufp->chgBit(oldp+5,(vlSelf->ysyx_25030085_top__DOT__uart_wready));
        bufp->chgBit(oldp+6,(vlSelf->ysyx_25030085_top__DOT__sram_awready));
        bufp->chgBit(oldp+7,(vlSelf->ysyx_25030085_top__DOT__sram_wready));
        bufp->chgCData(oldp+8,(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state),2);
        bufp->chgCData(oldp+9,(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__target_dev),2);
        bufp->chgBit(oldp+10,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__has_data));
        bufp->chgIData(oldp+11,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr),4);
        bufp->chgCData(oldp+13,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr))),3);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr),4);
        bufp->chgCData(oldp+15,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr))),3);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr),4);
        bufp->chgCData(oldp+17,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr))),3);
        bufp->chgCData(oldp+18,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr),4);
        bufp->chgCData(oldp+19,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr))),3);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl),21);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result),32);
        bufp->chgCData(oldp+27,((7U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                       >> 0xaU))),3);
        bufp->chgCData(oldp+28,(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__target_dev),2);
        bufp->chgCData(oldp+29,(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__state),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+30,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid));
        bufp->chgIData(oldp+31,(vlSelf->ysyx_25030085_top__DOT__if_axi4_araddr),32);
        bufp->chgBit(oldp+32,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid));
        bufp->chgIData(oldp+33,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr),32);
        bufp->chgBit(oldp+34,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arready));
        bufp->chgBit(oldp+35,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rvalid));
        bufp->chgIData(oldp+36,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rdata),32);
        bufp->chgCData(oldp+37,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rresp),2);
        bufp->chgBit(oldp+38,(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_arready));
        bufp->chgBit(oldp+39,(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_rvalid));
        bufp->chgIData(oldp+40,(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_rdata),32);
        bufp->chgCData(oldp+41,(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_rresp),2);
        bufp->chgBit(oldp+42,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid));
        bufp->chgIData(oldp+43,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr),32);
        bufp->chgBit(oldp+44,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid));
        bufp->chgIData(oldp+45,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wdata),32);
        bufp->chgCData(oldp+46,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wstrb),4);
        bufp->chgBit(oldp+47,(vlSelf->ysyx_25030085_top__DOT__uart_bvalid));
        bufp->chgCData(oldp+48,(vlSelf->ysyx_25030085_top__DOT__uart_bresp),2);
        bufp->chgBit(oldp+49,(vlSelf->ysyx_25030085_top__DOT__sram_bvalid));
        bufp->chgCData(oldp+50,(vlSelf->ysyx_25030085_top__DOT__sram_bresp),2);
        bufp->chgBit(oldp+51,((0xa0000048U == vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr)));
        bufp->chgBit(oldp+52,(((0x80000000U <= vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr) 
                               & (0x87ffffffU >= vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr))));
        bufp->chgCData(oldp+53,(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_cnt),8);
        bufp->chgBit(oldp+54,(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_pending));
        bufp->chgCData(oldp+55,(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr),8);
        bufp->chgBit(oldp+56,((1U & VL_REDXOR_8((0xb8U 
                                                 & (IData)(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr))))));
        bufp->chgCData(oldp+57,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__strb_reg),4);
        bufp->chgCData(oldp+58,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_cnt),8);
        bufp->chgBit(oldp+59,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_pending));
        bufp->chgCData(oldp+60,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_cnt),8);
        bufp->chgBit(oldp+61,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_pending));
        bufp->chgCData(oldp+62,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_cnt),8);
        bufp->chgBit(oldp+63,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_pending));
        bufp->chgCData(oldp+64,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr),8);
        bufp->chgCData(oldp+65,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data),8);
        bufp->chgBit(oldp+66,((1U & VL_REDXOR_8((0xb8U 
                                                 & (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr))))));
        bufp->chgBit(oldp+67,((1U & VL_REDXOR_8((0x9cU 
                                                 & (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data))))));
        bufp->chgIData(oldp+68,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_addr_out),32);
        bufp->chgQData(oldp+69,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_data_out),36);
        bufp->chgIData(oldp+71,((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_data_out)),32);
        bufp->chgCData(oldp+72,((0xfU & (IData)((vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_data_out 
                                                 >> 0x20U)))),4);
        bufp->chgBit(oldp+73,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_process));
        bufp->chgCData(oldp+74,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr),4);
        bufp->chgCData(oldp+75,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr))),3);
        bufp->chgCData(oldp+76,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr),4);
        bufp->chgCData(oldp+77,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr))),3);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_addr_out),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_wdata_out),32);
        bufp->chgBit(oldp+80,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_process));
        bufp->chgCData(oldp+81,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr),4);
        bufp->chgCData(oldp+82,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr))),3);
        bufp->chgCData(oldp+83,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr),4);
        bufp->chgCData(oldp+84,((7U & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr))),3);
        bufp->chgBit(oldp+85,((0xa00003f8U == vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr)));
        bufp->chgBit(oldp+86,(((0x80000000U <= vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr) 
                               & (0x87ffffffU >= vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+87,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready) 
                               & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid))));
        bufp->chgBit(oldp+88,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready) 
                               & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid))));
        bufp->chgBit(oldp+89,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready) 
                               & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid))));
        bufp->chgBit(oldp+90,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready) 
                               & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid))));
        bufp->chgBit(oldp+91,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arready) 
                               & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arvalid))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+92,(vlSelf->ysyx_25030085_top__DOT__wb_valid));
        bufp->chgIData(oldp+93,(vlSelf->ysyx_25030085_top__DOT__if_id_inst),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_25030085_top__DOT__if_id_pc),32);
        bufp->chgBit(oldp+95,(vlSelf->ysyx_25030085_top__DOT__if_id_valid));
        bufp->chgCData(oldp+96,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+97,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_25030085_top__DOT__rs1_data),32);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_25030085_top__DOT__rs2_data),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                 [0xfU]),32);
        bufp->chgCData(oldp+101,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                           >> 7U))),5);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc),32);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm),32);
        bufp->chgIData(oldp+104,((((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen) 
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
        bufp->chgBit(oldp+105,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))));
        bufp->chgBit(oldp+106,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
        bufp->chgCData(oldp+107,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rd),5);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl),21);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result),32);
        bufp->chgBit(oldp+113,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
        bufp->chgBit(oldp+114,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
        bufp->chgCData(oldp+115,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rd),5);
        bufp->chgIData(oldp+116,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl),21);
        bufp->chgIData(oldp+117,(vlSelf->ysyx_25030085_top__DOT__me_wb_rdata),32);
        bufp->chgIData(oldp+118,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__pc),32);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__imm),32);
        bufp->chgIData(oldp+120,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr),32);
        bufp->chgIData(oldp+121,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__npc),32);
        bufp->chgBit(oldp+122,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
        bufp->chgBit(oldp+123,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))));
        bufp->chgBit(oldp+124,(vlSelf->ysyx_25030085_top__DOT__if_req));
        bufp->chgIData(oldp+125,(vlSelf->ysyx_25030085_top__DOT__if_addr),32);
        bufp->chgBit(oldp+126,(vlSelf->ysyx_25030085_top__DOT__lsu_req));
        bufp->chgBit(oldp+127,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                      >> 6U))));
        bufp->chgBit(oldp+128,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                      >> 5U))));
        bufp->chgIData(oldp+129,((0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),32);
        bufp->chgIData(oldp+130,(vlSelf->ysyx_25030085_top__DOT__lsu_wdata),32);
        bufp->chgCData(oldp+131,(vlSelf->ysyx_25030085_top__DOT__lsu_strb),4);
        bufp->chgBit(oldp+132,((IData)(((0x80U == (0xf80U 
                                                   & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                        & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
        bufp->chgBit(oldp+133,((IData)(((0x80U == (0xf80U 
                                                   & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                        & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
        bufp->chgBit(oldp+134,((IData)(((0x8000U == 
                                         (0xf8f80U 
                                          & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                        & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
        bufp->chgQData(oldp+135,(vlSelf->ysyx_25030085_top__DOT__clint__DOT__mtime),64);
        bufp->chgCData(oldp+137,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state),2);
        bufp->chgIData(oldp+138,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data),32);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__reg_a5),32);
        bufp->chgIData(oldp+140,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__B),32);
        bufp->chgCData(oldp+141,((0xfU & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                          >> 1U))),4);
        bufp->chgBit(oldp+142,((1U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)));
        bufp->chgCData(oldp+143,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                        >> 0x13U))),2);
        bufp->chgBit(oldp+144,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                      >> 0x11U))));
        bufp->chgBit(oldp+145,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                      >> 0x12U))));
        bufp->chgBit(oldp+146,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                      >> 0xdU))));
        bufp->chgCData(oldp+147,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                        >> 0xeU))),2);
        bufp->chgSData(oldp+148,((0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm)),12);
        bufp->chgCData(oldp+149,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state),2);
        bufp->chgIData(oldp+150,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst),32);
        bufp->chgBit(oldp+151,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid));
        bufp->chgBit(oldp+152,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak));
        bufp->chgCData(oldp+153,((0x7fU & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),7);
        bufp->chgCData(oldp+154,((7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+155,((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+156,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI),32);
        bufp->chgIData(oldp+157,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                         >> 0x14U)))))),32);
        bufp->chgIData(oldp+158,((0xfffff000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),32);
        bufp->chgIData(oldp+159,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+160,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
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
        bufp->chgBit(oldp+161,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemWrite));
        bufp->chgBit(oldp+162,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemRead));
        bufp->chgCData(oldp+163,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp),3);
        bufp->chgCData(oldp+164,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg),3);
        bufp->chgBit(oldp+165,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite));
        bufp->chgBit(oldp+166,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Branch));
        bufp->chgCData(oldp+167,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump),2);
        bufp->chgBit(oldp+168,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc));
        bufp->chgCData(oldp+169,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp),4);
        bufp->chgCData(oldp+170,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen),2);
        bufp->chgBit(oldp+171,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall));
        bufp->chgBit(oldp+172,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret));
        bufp->chgIData(oldp+173,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc),32);
        bufp->chgIData(oldp+174,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_reg),32);
        bufp->chgCData(oldp+175,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state),3);
        bufp->chgCData(oldp+176,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state),2);
        bufp->chgIData(oldp+177,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__wdata),32);
        bufp->chgCData(oldp+178,((7U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                        >> 7U))),3);
        bufp->chgCData(oldp+179,((3U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),2);
        bufp->chgIData(oldp+180,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0]),32);
        bufp->chgIData(oldp+181,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[1]),32);
        bufp->chgIData(oldp+182,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[2]),32);
        bufp->chgIData(oldp+183,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[3]),32);
        bufp->chgIData(oldp+184,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[4]),32);
        bufp->chgIData(oldp+185,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[5]),32);
        bufp->chgIData(oldp+186,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[6]),32);
        bufp->chgIData(oldp+187,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[7]),32);
        bufp->chgIData(oldp+188,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[8]),32);
        bufp->chgIData(oldp+189,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[9]),32);
        bufp->chgIData(oldp+190,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[10]),32);
        bufp->chgIData(oldp+191,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[11]),32);
        bufp->chgIData(oldp+192,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[12]),32);
        bufp->chgIData(oldp+193,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[13]),32);
        bufp->chgIData(oldp+194,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[14]),32);
        bufp->chgIData(oldp+195,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[15]),32);
        bufp->chgIData(oldp+196,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[16]),32);
        bufp->chgIData(oldp+197,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[17]),32);
        bufp->chgIData(oldp+198,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[18]),32);
        bufp->chgIData(oldp+199,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[19]),32);
        bufp->chgIData(oldp+200,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[20]),32);
        bufp->chgIData(oldp+201,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[21]),32);
        bufp->chgIData(oldp+202,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[22]),32);
        bufp->chgIData(oldp+203,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[23]),32);
        bufp->chgIData(oldp+204,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[24]),32);
        bufp->chgIData(oldp+205,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[25]),32);
        bufp->chgIData(oldp+206,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[26]),32);
        bufp->chgIData(oldp+207,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[27]),32);
        bufp->chgIData(oldp+208,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[28]),32);
        bufp->chgIData(oldp+209,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[29]),32);
        bufp->chgIData(oldp+210,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[30]),32);
        bufp->chgIData(oldp+211,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[31]),32);
        bufp->chgIData(oldp+212,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[0]),32);
        bufp->chgIData(oldp+213,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[1]),32);
        bufp->chgIData(oldp+214,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[2]),32);
        bufp->chgIData(oldp+215,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[3]),32);
        bufp->chgIData(oldp+216,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[4]),32);
        bufp->chgIData(oldp+217,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[5]),32);
        bufp->chgIData(oldp+218,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[6]),32);
        bufp->chgIData(oldp+219,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[7]),32);
        bufp->chgQData(oldp+220,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[0]),36);
        bufp->chgQData(oldp+222,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[1]),36);
        bufp->chgQData(oldp+224,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[2]),36);
        bufp->chgQData(oldp+226,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[3]),36);
        bufp->chgQData(oldp+228,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[4]),36);
        bufp->chgQData(oldp+230,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[5]),36);
        bufp->chgQData(oldp+232,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[6]),36);
        bufp->chgQData(oldp+234,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[7]),36);
        bufp->chgIData(oldp+236,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[0]),32);
        bufp->chgIData(oldp+237,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[1]),32);
        bufp->chgIData(oldp+238,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[2]),32);
        bufp->chgIData(oldp+239,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[3]),32);
        bufp->chgIData(oldp+240,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[4]),32);
        bufp->chgIData(oldp+241,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[5]),32);
        bufp->chgIData(oldp+242,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[6]),32);
        bufp->chgIData(oldp+243,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[7]),32);
        bufp->chgIData(oldp+244,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[0]),32);
        bufp->chgIData(oldp+245,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[1]),32);
        bufp->chgIData(oldp+246,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[2]),32);
        bufp->chgIData(oldp+247,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[3]),32);
        bufp->chgIData(oldp+248,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[4]),32);
        bufp->chgIData(oldp+249,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[5]),32);
        bufp->chgIData(oldp+250,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[6]),32);
        bufp->chgIData(oldp+251,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[7]),32);
        bufp->chgCData(oldp+252,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+253,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready));
        bufp->chgBit(oldp+254,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready));
        bufp->chgBit(oldp+255,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arvalid));
        bufp->chgIData(oldp+256,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_araddr),32);
        bufp->chgBit(oldp+257,(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_arvalid));
        bufp->chgIData(oldp+258,(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_araddr),32);
        bufp->chgBit(oldp+259,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready));
        bufp->chgBit(oldp+260,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready));
        bufp->chgBit(oldp+261,(vlSelf->ysyx_25030085_top__DOT__uart_awvalid));
        bufp->chgIData(oldp+262,(vlSelf->ysyx_25030085_top__DOT__uart_awaddr),32);
        bufp->chgBit(oldp+263,(vlSelf->ysyx_25030085_top__DOT__uart_wvalid));
        bufp->chgIData(oldp+264,(vlSelf->ysyx_25030085_top__DOT__uart_wdata),32);
        bufp->chgCData(oldp+265,(vlSelf->ysyx_25030085_top__DOT__uart_wstrb),4);
        bufp->chgBit(oldp+266,(vlSelf->ysyx_25030085_top__DOT__sram_awvalid));
        bufp->chgIData(oldp+267,(vlSelf->ysyx_25030085_top__DOT__sram_awaddr),32);
        bufp->chgBit(oldp+268,(vlSelf->ysyx_25030085_top__DOT__sram_wvalid));
        bufp->chgIData(oldp+269,(vlSelf->ysyx_25030085_top__DOT__sram_wdata),32);
        bufp->chgCData(oldp+270,(vlSelf->ysyx_25030085_top__DOT__sram_wstrb),4);
        bufp->chgBit(oldp+271,(vlSelf->ysyx_25030085_top__DOT__clint__DOT__AR_active));
        bufp->chgBit(oldp+272,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_full));
        bufp->chgBit(oldp+273,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_full));
        bufp->chgBit(oldp+274,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_empty));
        bufp->chgBit(oldp+275,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_empty));
        bufp->chgBit(oldp+276,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_wr_en));
        bufp->chgBit(oldp+277,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_wr_en));
        bufp->chgBit(oldp+278,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_rd_en));
        bufp->chgQData(oldp+279,((((QData)((IData)(vlSelf->ysyx_25030085_top__DOT__sram_wstrb)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->ysyx_25030085_top__DOT__sram_wdata)))),36);
        bufp->chgBit(oldp+281,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_full));
        bufp->chgBit(oldp+282,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_full));
        bufp->chgBit(oldp+283,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_empty));
        bufp->chgBit(oldp+284,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_empty));
        bufp->chgBit(oldp+285,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_wr_en));
        bufp->chgBit(oldp+286,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_wr_en));
        bufp->chgBit(oldp+287,(vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_rd_en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+288,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready));
        bufp->chgBit(oldp+289,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready));
        bufp->chgBit(oldp+290,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready));
        bufp->chgIData(oldp+291,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_if),32);
        bufp->chgCData(oldp+292,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_if),2);
        bufp->chgBit(oldp+293,(vlSelf->ysyx_25030085_top__DOT__biu_ready_if));
        bufp->chgCData(oldp+294,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_ls),2);
        bufp->chgCData(oldp+295,(vlSelf->ysyx_25030085_top__DOT__biu_wresp_ls),2);
        bufp->chgIData(oldp+296,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+297,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid));
        bufp->chgIData(oldp+298,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rdata),32);
        bufp->chgCData(oldp+299,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rresp),2);
        bufp->chgBit(oldp+300,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid));
        bufp->chgIData(oldp+301,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata),32);
        bufp->chgCData(oldp+302,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp),2);
        bufp->chgBit(oldp+303,(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rready));
        bufp->chgBit(oldp+304,(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_rready));
        bufp->chgBit(oldp+305,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid));
        bufp->chgCData(oldp+306,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bresp),2);
        bufp->chgBit(oldp+307,(vlSelf->ysyx_25030085_top__DOT__uart_bready));
        bufp->chgBit(oldp+308,(vlSelf->ysyx_25030085_top__DOT__sram_bready));
        bufp->chgCData(oldp+309,(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__next_state),2);
        bufp->chgBit(oldp+310,(vlSelf->ysyx_25030085_top__DOT__clint__DOT__R_active));
        bufp->chgIData(oldp+311,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__lsu_rdata),32);
        bufp->chgCData(oldp+312,(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__next_state),3);
    }
    bufp->chgBit(oldp+313,(vlSelf->clk));
    bufp->chgBit(oldp+314,(vlSelf->rst));
    bufp->chgIData(oldp+315,(vlSelf->top_pc),32);
    bufp->chgIData(oldp+316,(vlSelf->top_inst),32);
    bufp->chgBit(oldp+317,(vlSelf->top_valid));
    bufp->chgBit(oldp+318,(vlSelf->top_ready));
    bufp->chgBit(oldp+319,(vlSelf->inst_done));
    bufp->chgIData(oldp+320,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
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
    bufp->chgIData(oldp+321,(((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
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
    bufp->chgIData(oldp+322,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec),32);
    bufp->chgIData(oldp+323,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc),32);
    bufp->chgIData(oldp+324,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus),32);
    bufp->chgIData(oldp+325,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause),32);
    bufp->chgBit(oldp+326,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid))));
    bufp->chgBit(oldp+327,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid))));
    bufp->chgBit(oldp+328,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid))));
    bufp->chgBit(oldp+329,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register));
    bufp->chgBit(oldp+330,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display));
    bufp->chgIData(oldp+331,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i),32);
    bufp->chgBit(oldp+332,(((IData)(vlSelf->ysyx_25030085_top__DOT__sram_awready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__sram_awvalid))));
    bufp->chgBit(oldp+333,(((IData)(vlSelf->ysyx_25030085_top__DOT__sram_wready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__sram_wvalid))));
    bufp->chgBit(oldp+334,(((IData)(vlSelf->ysyx_25030085_top__DOT__sram_bready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__sram_bvalid))));
    bufp->chgBit(oldp+335,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rvalid))));
    bufp->chgBit(oldp+336,(((IData)(vlSelf->ysyx_25030085_top__DOT__uart_awready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__uart_awvalid))));
    bufp->chgBit(oldp+337,(((IData)(vlSelf->ysyx_25030085_top__DOT__uart_wready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__uart_wvalid))));
    bufp->chgBit(oldp+338,(((IData)(vlSelf->ysyx_25030085_top__DOT__uart_bready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__uart_bvalid))));
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
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
