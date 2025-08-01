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
        bufp->chgIData(oldp+0,(vlSelf->ysyx_25030085_top__DOT__if_axi4_araddr),32);
        bufp->chgIData(oldp+1,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr),32);
        bufp->chgBit(oldp+2,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arready));
        bufp->chgBit(oldp+3,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rvalid));
        bufp->chgIData(oldp+4,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rdata),32);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rresp),2);
        bufp->chgBit(oldp+6,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid));
        bufp->chgBit(oldp+7,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready));
        bufp->chgIData(oldp+8,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr),32);
        bufp->chgBit(oldp+9,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid));
        bufp->chgBit(oldp+10,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready));
        bufp->chgIData(oldp+11,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wdata),32);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wstrb),4);
        bufp->chgBit(oldp+13,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid));
        bufp->chgBit(oldp+14,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready));
        bufp->chgCData(oldp+15,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bresp),2);
        bufp->chgBit(oldp+16,(vlSelf->ysyx_25030085_top__DOT__biu_valid_ls));
        bufp->chgCData(oldp+17,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_ls),2);
        bufp->chgCData(oldp+18,(vlSelf->ysyx_25030085_top__DOT__biu_wresp_ls),2);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls),32);
        bufp->chgBit(oldp+20,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready) 
                               & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid))));
        bufp->chgBit(oldp+21,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready) 
                               & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid))));
        bufp->chgBit(oldp+22,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready) 
                               & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid))));
        bufp->chgIData(oldp+23,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__write_addr_reg),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__write_data_reg),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+25,(vlSelf->ysyx_25030085_top__DOT__reg_wresp));
        bufp->chgBit(oldp+26,(vlSelf->ysyx_25030085_top__DOT__wb_valid));
        bufp->chgIData(oldp+27,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                [0xfU]),32);
        bufp->chgCData(oldp+28,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rd),5);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl),21);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data),32);
        bufp->chgBit(oldp+33,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
        bufp->chgCData(oldp+34,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rd),5);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl),21);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__pc),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__imm),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__npc),32);
        bufp->chgBit(oldp+40,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
        bufp->chgBit(oldp+41,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))));
        bufp->chgBit(oldp+42,((1U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                     >> 0x10U))));
        bufp->chgIData(oldp+43,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wb_data),32);
        bufp->chgCData(oldp+44,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd),5);
        bufp->chgBit(oldp+45,(vlSelf->ysyx_25030085_top__DOT__if_req));
        bufp->chgIData(oldp+46,(vlSelf->ysyx_25030085_top__DOT__if_addr),32);
        bufp->chgBit(oldp+47,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
        bufp->chgBit(oldp+48,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                     >> 6U))));
        bufp->chgBit(oldp+49,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                     >> 5U))));
        bufp->chgIData(oldp+50,((0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),32);
        bufp->chgCData(oldp+51,(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state),2);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__reg_a5),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__B),32);
        bufp->chgCData(oldp+55,((0xfU & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                         >> 1U))),4);
        bufp->chgBit(oldp+56,((1U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)));
        bufp->chgCData(oldp+57,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                       >> 0x13U))),2);
        bufp->chgBit(oldp+58,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0x11U))));
        bufp->chgBit(oldp+59,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0x12U))));
        bufp->chgBit(oldp+60,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0xdU))));
        bufp->chgCData(oldp+61,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                       >> 0xeU))),2);
        bufp->chgSData(oldp+62,((0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm)),12);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_reg),32);
        bufp->chgCData(oldp+65,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state),3);
        bufp->chgCData(oldp+66,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state),2);
        bufp->chgBit(oldp+67,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__has_data));
        bufp->chgIData(oldp+68,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__wdata),32);
        bufp->chgCData(oldp+69,((7U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                       >> 7U))),3);
        bufp->chgCData(oldp+70,((3U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),2);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0]),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[1]),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[2]),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[3]),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[4]),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[5]),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[6]),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[7]),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[8]),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[9]),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[10]),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[11]),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[12]),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[13]),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[14]),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[15]),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[16]),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[17]),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[18]),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[19]),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[20]),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[21]),32);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[22]),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[23]),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[24]),32);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[25]),32);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[26]),32);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[27]),32);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[28]),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[29]),32);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[30]),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[31]),32);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+104,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state),2);
        bufp->chgIData(oldp+105,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl),21);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc),32);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc),32);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm),32);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result),32);
        bufp->chgCData(oldp+112,((7U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                        >> 0xaU))),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+113,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid));
        bufp->chgBit(oldp+114,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready));
        bufp->chgBit(oldp+115,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid));
        bufp->chgBit(oldp+116,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready));
        bufp->chgIData(oldp+117,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_if),32);
        bufp->chgCData(oldp+118,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_if),2);
        bufp->chgBit(oldp+119,(vlSelf->ysyx_25030085_top__DOT__biu_ready_if));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+120,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__lsu_rdata),32);
        bufp->chgBit(oldp+121,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready));
        bufp->chgBit(oldp+122,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid));
        bufp->chgIData(oldp+123,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rdata),32);
        bufp->chgCData(oldp+124,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rresp),2);
        bufp->chgBit(oldp+125,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready));
        bufp->chgBit(oldp+126,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid));
        bufp->chgIData(oldp+127,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata),32);
        bufp->chgCData(oldp+128,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp),2);
        bufp->chgBit(oldp+129,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arvalid));
        bufp->chgIData(oldp+130,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_araddr),32);
        bufp->chgBit(oldp+131,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rready));
        bufp->chgCData(oldp+132,(vlSelf->ysyx_25030085_top__DOT__lsu_strb),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+133,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec),32);
        bufp->chgIData(oldp+134,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc),32);
        bufp->chgIData(oldp+135,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus),32);
        bufp->chgIData(oldp+136,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+137,(vlSelf->ysyx_25030085_top__DOT__if_id_inst),32);
        bufp->chgIData(oldp+138,(vlSelf->ysyx_25030085_top__DOT__if_id_pc),32);
        bufp->chgBit(oldp+139,(vlSelf->ysyx_25030085_top__DOT__if_id_valid));
        bufp->chgCData(oldp+140,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+141,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+142,(vlSelf->ysyx_25030085_top__DOT__rs1_data),32);
        bufp->chgIData(oldp+143,(vlSelf->ysyx_25030085_top__DOT__rs2_data),32);
        bufp->chgCData(oldp+144,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                           >> 7U))),5);
        bufp->chgIData(oldp+145,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc),32);
        bufp->chgIData(oldp+146,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm),32);
        bufp->chgIData(oldp+147,((((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen) 
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
        bufp->chgBit(oldp+148,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))));
        bufp->chgBit(oldp+149,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
        bufp->chgIData(oldp+150,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result),32);
        bufp->chgBit(oldp+151,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
        bufp->chgBit(oldp+152,((IData)(((0x80U == (0xf80U 
                                                   & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                        & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
        bufp->chgBit(oldp+153,((IData)(((0x80U == (0xf80U 
                                                   & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                        & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
        bufp->chgBit(oldp+154,((IData)(((0x8000U == 
                                         (0xf8f80U 
                                          & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                        & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
        bufp->chgCData(oldp+155,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state),2);
        bufp->chgCData(oldp+156,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state),2);
        bufp->chgIData(oldp+157,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst),32);
        bufp->chgBit(oldp+158,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid));
        bufp->chgBit(oldp+159,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak));
        bufp->chgCData(oldp+160,((0x7fU & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),7);
        bufp->chgCData(oldp+161,((7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+162,((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+163,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI),32);
        bufp->chgIData(oldp+164,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                         >> 0x14U)))))),32);
        bufp->chgIData(oldp+165,((0xfffff000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),32);
        bufp->chgIData(oldp+166,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+167,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
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
        bufp->chgBit(oldp+168,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemWrite));
        bufp->chgBit(oldp+169,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemRead));
        bufp->chgCData(oldp+170,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp),3);
        bufp->chgCData(oldp+171,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg),3);
        bufp->chgBit(oldp+172,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite));
        bufp->chgBit(oldp+173,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Branch));
        bufp->chgCData(oldp+174,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump),2);
        bufp->chgBit(oldp+175,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc));
        bufp->chgCData(oldp+176,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp),4);
        bufp->chgCData(oldp+177,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen),2);
        bufp->chgBit(oldp+178,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall));
        bufp->chgBit(oldp+179,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret));
    }
    bufp->chgBit(oldp+180,(vlSelf->clk));
    bufp->chgBit(oldp+181,(vlSelf->rst));
    bufp->chgIData(oldp+182,(vlSelf->top_pc),32);
    bufp->chgIData(oldp+183,(vlSelf->top_inst),32);
    bufp->chgBit(oldp+184,(vlSelf->top_valid));
    bufp->chgBit(oldp+185,(vlSelf->top_ready));
    bufp->chgBit(oldp+186,(vlSelf->inst_done));
    bufp->chgIData(oldp+187,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
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
    bufp->chgIData(oldp+188,(((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
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
    bufp->chgIData(oldp+189,(vlSelf->ysyx_25030085_top__DOT__lsu_wdata),32);
    bufp->chgBit(oldp+190,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid))));
    bufp->chgBit(oldp+191,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid))));
    bufp->chgBit(oldp+192,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid))));
    bufp->chgBit(oldp+193,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid))));
    bufp->chgBit(oldp+194,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register));
    bufp->chgBit(oldp+195,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display));
    bufp->chgIData(oldp+196,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i),32);
    bufp->chgBit(oldp+197,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arvalid))));
    bufp->chgBit(oldp+198,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rvalid))));
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
