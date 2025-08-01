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
        bufp->chgCData(oldp+6,(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_cnt),8);
        bufp->chgBit(oldp+7,(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_pending));
        bufp->chgCData(oldp+8,(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr),8);
        bufp->chgBit(oldp+9,((1U & VL_REDXOR_8((0xb8U 
                                                & (IData)(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr))))));
        bufp->chgCData(oldp+10,((1U & (IData)(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr))),8);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_cnt),8);
        bufp->chgBit(oldp+12,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_pending));
        bufp->chgBit(oldp+13,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_pending));
        bufp->chgCData(oldp+14,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_cnt),8);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr),8);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data),8);
        bufp->chgBit(oldp+17,((1U & VL_REDXOR_8((0xb8U 
                                                 & (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr))))));
        bufp->chgBit(oldp+18,((1U & VL_REDXOR_8((0x9cU 
                                                 & (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data))))));
        bufp->chgCData(oldp+19,((0xffU & VL_MODDIV_III(32, (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr), (IData)(0x14U)))),8);
        bufp->chgCData(oldp+20,((0xffU & VL_MODDIV_III(32, (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data), (IData)(0x28U)))),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+21,(vlSelf->ysyx_25030085_top__DOT__reg_wresp));
        bufp->chgBit(oldp+22,(vlSelf->ysyx_25030085_top__DOT__wb_valid));
        bufp->chgIData(oldp+23,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                [0xfU]),32);
        bufp->chgCData(oldp+24,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rd),5);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl),21);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data),32);
        bufp->chgBit(oldp+29,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
        bufp->chgCData(oldp+30,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rd),5);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_25030085_top__DOT__me_wb_rdata),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__pc),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__imm),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__npc),32);
        bufp->chgBit(oldp+36,((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))));
        bufp->chgBit(oldp+37,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))));
        bufp->chgBit(oldp+38,((1U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                     >> 0x10U))));
        bufp->chgIData(oldp+39,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wb_data),32);
        bufp->chgCData(oldp+40,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd),5);
        bufp->chgBit(oldp+41,(vlSelf->ysyx_25030085_top__DOT__if_req));
        bufp->chgIData(oldp+42,(vlSelf->ysyx_25030085_top__DOT__if_addr),32);
        bufp->chgIData(oldp+43,((0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),32);
        bufp->chgCData(oldp+44,(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state),2);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__reg_a5),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__B),32);
        bufp->chgCData(oldp+48,((0xfU & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                         >> 1U))),4);
        bufp->chgBit(oldp+49,((1U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)));
        bufp->chgCData(oldp+50,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                       >> 0x13U))),2);
        bufp->chgBit(oldp+51,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0x11U))));
        bufp->chgBit(oldp+52,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0x12U))));
        bufp->chgBit(oldp+53,((1U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0xdU))));
        bufp->chgCData(oldp+54,((3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                       >> 0xeU))),2);
        bufp->chgSData(oldp+55,((0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm)),12);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_reg),32);
        bufp->chgCData(oldp+58,(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state),3);
        bufp->chgCData(oldp+59,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state),2);
        bufp->chgBit(oldp+60,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__has_data));
        bufp->chgIData(oldp+61,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__wdata),32);
        bufp->chgCData(oldp+62,((3U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)),2);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0]),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[1]),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[2]),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[3]),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[4]),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[5]),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[6]),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[7]),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[8]),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[9]),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[10]),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[11]),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[12]),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[13]),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[14]),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[15]),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[16]),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[17]),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[18]),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[19]),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[20]),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[21]),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[22]),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[23]),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[24]),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[25]),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[26]),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[27]),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[28]),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[29]),32);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[30]),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[31]),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+96,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state),2);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl),21);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc),32);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm),32);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata),32);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result),32);
        bufp->chgCData(oldp+104,((7U & (vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                                        >> 0xaU))),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+105,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid));
        bufp->chgBit(oldp+106,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready));
        bufp->chgBit(oldp+107,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid));
        bufp->chgBit(oldp+108,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready));
        bufp->chgBit(oldp+109,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid));
        bufp->chgBit(oldp+110,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready));
        bufp->chgIData(oldp+111,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr),32);
        bufp->chgBit(oldp+112,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid));
        bufp->chgBit(oldp+113,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready));
        bufp->chgIData(oldp+114,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wdata),32);
        bufp->chgCData(oldp+115,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wstrb),4);
        bufp->chgBit(oldp+116,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid));
        bufp->chgBit(oldp+117,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready));
        bufp->chgCData(oldp+118,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bresp),2);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_if),32);
        bufp->chgCData(oldp+120,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_if),2);
        bufp->chgBit(oldp+121,(vlSelf->ysyx_25030085_top__DOT__biu_ready_if));
        bufp->chgBit(oldp+122,(vlSelf->ysyx_25030085_top__DOT__biu_valid_ls));
        bufp->chgCData(oldp+123,(vlSelf->ysyx_25030085_top__DOT__biu_rresp_ls),2);
        bufp->chgCData(oldp+124,(vlSelf->ysyx_25030085_top__DOT__biu_wresp_ls),2);
        bufp->chgIData(oldp+125,(vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls),32);
        bufp->chgBit(oldp+126,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready) 
                                & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid))));
        bufp->chgBit(oldp+127,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready) 
                                & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid))));
        bufp->chgBit(oldp+128,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready) 
                                & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid))));
        bufp->chgIData(oldp+129,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__write_addr_reg),32);
        bufp->chgIData(oldp+130,(vlSelf->ysyx_25030085_top__DOT__sram__DOT__write_data_reg),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+131,(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready));
        bufp->chgBit(oldp+132,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid));
        bufp->chgIData(oldp+133,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rdata),32);
        bufp->chgCData(oldp+134,(vlSelf->ysyx_25030085_top__DOT__if_axi4_rresp),2);
        bufp->chgBit(oldp+135,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready));
        bufp->chgBit(oldp+136,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid));
        bufp->chgIData(oldp+137,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata),32);
        bufp->chgCData(oldp+138,(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp),2);
        bufp->chgBit(oldp+139,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arvalid));
        bufp->chgIData(oldp+140,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_araddr),32);
        bufp->chgBit(oldp+141,(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rready));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+142,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec),32);
        bufp->chgIData(oldp+143,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc),32);
        bufp->chgIData(oldp+144,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus),32);
        bufp->chgIData(oldp+145,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+146,(vlSelf->ysyx_25030085_top__DOT__if_id_inst),32);
        bufp->chgIData(oldp+147,(vlSelf->ysyx_25030085_top__DOT__if_id_pc),32);
        bufp->chgBit(oldp+148,(vlSelf->ysyx_25030085_top__DOT__if_id_valid));
        bufp->chgCData(oldp+149,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+150,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+151,(vlSelf->ysyx_25030085_top__DOT__rs1_data),32);
        bufp->chgIData(oldp+152,(vlSelf->ysyx_25030085_top__DOT__rs2_data),32);
        bufp->chgCData(oldp+153,((0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                           >> 7U))),5);
        bufp->chgIData(oldp+154,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc),32);
        bufp->chgIData(oldp+155,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm),32);
        bufp->chgIData(oldp+156,((((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen) 
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
        bufp->chgBit(oldp+157,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))));
        bufp->chgBit(oldp+158,((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
        bufp->chgIData(oldp+159,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result),32);
        bufp->chgBit(oldp+160,((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))));
        bufp->chgIData(oldp+161,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl),21);
        bufp->chgBit(oldp+162,(vlSelf->ysyx_25030085_top__DOT__lsu_req));
        bufp->chgBit(oldp+163,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                      >> 6U))));
        bufp->chgBit(oldp+164,((1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                      >> 5U))));
        bufp->chgIData(oldp+165,(vlSelf->ysyx_25030085_top__DOT__lsu_wdata),32);
        bufp->chgCData(oldp+166,(vlSelf->ysyx_25030085_top__DOT__lsu_strb),4);
        bufp->chgBit(oldp+167,((IData)(((0x80U == (0xf80U 
                                                   & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                        & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
        bufp->chgBit(oldp+168,((IData)(((0x80U == (0xf80U 
                                                   & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                        & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
        bufp->chgBit(oldp+169,((IData)(((0x8000U == 
                                         (0xf8f80U 
                                          & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                                        & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))));
        bufp->chgCData(oldp+170,(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state),2);
        bufp->chgCData(oldp+171,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state),2);
        bufp->chgIData(oldp+172,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst),32);
        bufp->chgBit(oldp+173,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid));
        bufp->chgBit(oldp+174,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak));
        bufp->chgCData(oldp+175,((0x7fU & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),7);
        bufp->chgCData(oldp+176,((7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+177,((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+178,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI),32);
        bufp->chgIData(oldp+179,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                         >> 0x14U)))))),32);
        bufp->chgIData(oldp+180,((0xfffff000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)),32);
        bufp->chgIData(oldp+181,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+182,((((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
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
        bufp->chgBit(oldp+183,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemWrite));
        bufp->chgBit(oldp+184,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemRead));
        bufp->chgCData(oldp+185,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp),3);
        bufp->chgCData(oldp+186,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg),3);
        bufp->chgBit(oldp+187,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite));
        bufp->chgBit(oldp+188,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Branch));
        bufp->chgCData(oldp+189,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump),2);
        bufp->chgBit(oldp+190,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc));
        bufp->chgCData(oldp+191,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp),4);
        bufp->chgCData(oldp+192,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen),2);
        bufp->chgBit(oldp+193,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall));
        bufp->chgBit(oldp+194,(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret));
        bufp->chgCData(oldp+195,((7U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                        >> 7U))),3);
    }
    bufp->chgBit(oldp+196,(vlSelf->clk));
    bufp->chgBit(oldp+197,(vlSelf->rst));
    bufp->chgIData(oldp+198,(vlSelf->top_pc),32);
    bufp->chgIData(oldp+199,(vlSelf->top_inst),32);
    bufp->chgBit(oldp+200,(vlSelf->top_valid));
    bufp->chgBit(oldp+201,(vlSelf->top_ready));
    bufp->chgBit(oldp+202,(vlSelf->inst_done));
    bufp->chgIData(oldp+203,(((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
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
    bufp->chgIData(oldp+204,(((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
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
    bufp->chgBit(oldp+205,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid))));
    bufp->chgBit(oldp+206,(((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid))));
    bufp->chgBit(oldp+207,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid))));
    bufp->chgBit(oldp+208,(((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid))));
    bufp->chgIData(oldp+209,(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__lsu_rdata),32);
    bufp->chgBit(oldp+210,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register));
    bufp->chgBit(oldp+211,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display));
    bufp->chgIData(oldp+212,(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i),32);
    bufp->chgBit(oldp+213,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arready) 
                            & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_arvalid))));
    bufp->chgBit(oldp+214,(((IData)(vlSelf->ysyx_25030085_top__DOT__arb_mem_axi4_rready) 
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
