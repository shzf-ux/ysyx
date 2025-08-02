// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25030085_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25030085_top___024root.h"

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_static(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_initial__TOP(Vysyx_25030085_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_initial(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_initial\n"); );
    // Body
    Vysyx_25030085_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__idu__DOT__invalid 
        = vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__idu__DOT__is_ebreak 
        = vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__regfile__DOT__is_info_register = 0U;
}

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_initial__TOP(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register = 0U;
}

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_final(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_triggers__stl(Vysyx_25030085_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030085_top___024root___dump_triggers__stl(Vysyx_25030085_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_stl(Vysyx_25030085_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_settle(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_25030085_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25030085_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/zzy/ysyx-workbench/npc/vsrc/ysyx_25030085_top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_25030085_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030085_top___024root___dump_triggers__stl(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_25030085_top__ConstPool__TABLE_hccb843b1_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vysyx_25030085_top__ConstPool__TABLE_hfa0e9702_0;

VL_ATTR_COLD void Vysyx_25030085_top___024root___stl_sequent__TOP__0(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->top_pc = vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc;
    vlSelf->top_ready = (0U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state));
    vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr_feedback 
        = (1U & VL_REDXOR_8((0xb8U & (IData)(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr))));
    vlSelf->ysyx_25030085_top__DOT__ex_id_ready = (0U 
                                                   == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state));
    vlSelf->ysyx_25030085_top__DOT__me_ex_ready = (0U 
                                                   == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state));
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__MemWrite 
        = (1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                 >> 6U));
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__MemRead 
        = (1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                 >> 5U));
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsrr_feedback 
        = (1U & VL_REDXOR_8((0xb8U & (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr))));
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsrw_feedback 
        = (1U & VL_REDXOR_8((0x9cU & (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data))));
    vlSelf->ysyx_25030085_top__DOT__wb_me_ready = (0U 
                                                   == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state));
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemWrite = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemRead = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp = 0U;
    if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state))) {
        vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid 
            = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rvalid;
        vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp = 0U;
        vlSelf->ysyx_25030085_top__DOT__if_axi4_rdata 
            = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rdata;
        vlSelf->ysyx_25030085_top__DOT__if_axi4_rresp 
            = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rresp;
        vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata = 0U;
        vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arvalid 
            = vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid;
        vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_araddr 
            = vlSelf->ysyx_25030085_top__DOT__if_axi4_araddr;
        vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rready 
            = vlSelf->ysyx_25030085_top__DOT__if_axi4_rready;
    } else {
        vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid = 0U;
        if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state))) {
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp 
                = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rresp;
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata 
                = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rdata;
            vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_araddr 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr;
            vlSelf->ysyx_25030085_top__DOT__if_axi4_rdata = 0U;
            vlSelf->ysyx_25030085_top__DOT__if_axi4_rresp = 0U;
            vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arvalid 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid;
            vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rready 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready;
        } else {
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp = 0U;
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata = 0U;
            vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_araddr = 0U;
            vlSelf->ysyx_25030085_top__DOT__if_axi4_rdata = 0U;
            vlSelf->ysyx_25030085_top__DOT__if_axi4_rresp = 0U;
            vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arvalid = 0U;
            vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rready = 0U;
        }
    }
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid 
        = ((1U != (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state)) 
           & ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state)) 
              & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rvalid)));
    vlSelf->ysyx_25030085_top__DOT__lsu_wdata = vlSelf->ysyx_25030085_top__DOT__lsu__DOT__wdata;
    vlSelf->ysyx_25030085_top__DOT__if_id_valid = 0U;
    if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state))) {
        vlSelf->ysyx_25030085_top__DOT__if_id_pc = vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc;
        vlSelf->ysyx_25030085_top__DOT__if_id_valid = 1U;
        vlSelf->ysyx_25030085_top__DOT__if_id_inst 
            = vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_reg;
    }
    vlSelf->ysyx_25030085_top__DOT__lsu_strb = 0U;
    if ((((IData)(vlSelf->ysyx_25030085_top__DOT__lsu_req) 
          & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
             >> 6U)) & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state)))) {
        vlSelf->ysyx_25030085_top__DOT__lsu_strb = 
            ((5U == (7U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                           >> 7U))) ? 0xfU : ((6U == 
                                               (7U 
                                                & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                                   >> 7U)))
                                               ? ((2U 
                                                   & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)
                                                   ? 0xcU
                                                   : 3U)
                                               : ((7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                                                       >> 7U)))
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)
                                                     ? 8U
                                                     : 4U)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)
                                                     ? 2U
                                                     : 1U))
                                                   : 0U)));
    }
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__lsu_rdata = 0U;
    if (((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state)) 
         & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__biu_rresp_ls)))) {
        vlSelf->ysyx_25030085_top__DOT__lsu__DOT__lsu_rdata 
            = ((0x200U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl)
                ? ((0x100U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl)
                    ? 0U : ((0x80U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl)
                             ? 0U : ((2U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)
                                      ? ((1U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)
                                          ? (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                             >> 0x18U)
                                          : (0xffU 
                                             & (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                                >> 0x10U)))
                                      : ((1U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)
                                          ? (0xffU 
                                             & (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                                >> 8U))
                                          : (0xffU 
                                             & vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls)))))
                : ((0x100U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl)
                    ? ((0x80U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl)
                        ? ((2U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)
                            ? (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                               >> 0x10U) : (0xffffU 
                                            & vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls))
                        : ((2U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)
                            ? ((1U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)
                                ? (((- (IData)((vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                                >> 0x1fU))) 
                                    << 8U) | (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                              >> 0x18U))
                                : (((- (IData)((1U 
                                                & (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                                   >> 0x17U)))) 
                                    << 8U) | (0xffU 
                                              & (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                                 >> 0x10U))))
                            : ((1U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)
                                ? (((- (IData)((1U 
                                                & (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                                   >> 0xfU)))) 
                                    << 8U) | (0xffU 
                                              & (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                                 >> 8U)))
                                : (((- (IData)((1U 
                                                & (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                                   >> 7U)))) 
                                    << 8U) | (0xffU 
                                              & vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls)))))
                    : ((0x80U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl)
                        ? ((2U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)
                            ? (((- (IData)((vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                            >> 0x1fU))) 
                                << 0x10U) | (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                             >> 0x10U))
                            : (((- (IData)((1U & (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls)))
                        : vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls)));
    }
    vlSelf->ysyx_25030085_top__DOT__if_axi4_arready 
        = ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state)) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arready));
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready 
        = ((1U != (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state)) 
           & ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state)) 
              & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arready)));
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_empty 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr) 
           == (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr));
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_full 
        = (((1U & ((IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr) 
                   >> 3U)) != (1U & ((IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr) 
                                     >> 3U))) & ((7U 
                                                  & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr)) 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr))));
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_empty 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr) 
           == (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr));
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_full 
        = (((1U & ((IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr) 
                   >> 3U)) != (1U & ((IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr) 
                                     >> 3U))) & ((7U 
                                                  & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr)) 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr))));
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_empty 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr) 
           == (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr));
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_full 
        = (((1U & ((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr) 
                   >> 3U)) != (1U & ((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr) 
                                     >> 3U))) & ((7U 
                                                  & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr)) 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr))));
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_empty 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr) 
           == (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr));
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_full 
        = (((1U & ((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr) 
                   >> 3U)) != (1U & ((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr) 
                                     >> 3U))) & ((7U 
                                                  & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr)) 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr))));
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI 
        = (((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                >> 0x14U));
    vlSelf->ysyx_25030085_top__DOT__rs1_data = ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                     >> 0xfU)))
                                                 ? 0U
                                                 : 
                                                vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                [(0x1fU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                     >> 0xfU))]);
    vlSelf->ysyx_25030085_top__DOT__rs2_data = ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                     >> 0x14U)))
                                                 ? 0U
                                                 : 
                                                vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                [(0x1fU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                     >> 0x14U))]);
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__B = (
                                                   (1U 
                                                    & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                                                    ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm
                                                    : vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data);
    vlSelf->ysyx_25030085_top__DOT__uart_bready = 0U;
    vlSelf->ysyx_25030085_top__DOT__sram_bready = 0U;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid = 0U;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_bresp = 0U;
    if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))) {
        if ((0x40U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
            if ((0x20U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                if ((0x10U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                    if ((0U != (7U 
                                                & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                   >> 0xcU)))) {
                                        if ((1U == 
                                             (7U & 
                                              (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                               >> 0xcU)))) {
                                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen = 1U;
                                        } else if (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                        >> 0xcU)))) {
                                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen = 2U;
                                        }
                                    }
                                    if ((0U == (7U 
                                                & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                   >> 0xcU)))) {
                                        if ((1U == 
                                             (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                              >> 0x14U))) {
                                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak = 1U;
                                        }
                                        if ((1U != 
                                             (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                              >> 0x14U))) {
                                            if ((0U 
                                                 != 
                                                 (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                  >> 0x14U))) {
                                                if (
                                                    (0x302U 
                                                     == 
                                                     (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                      >> 0x14U))) {
                                                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret = 1U;
                                                }
                                            }
                                            if ((0U 
                                                 == 
                                                 (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                  >> 0x14U))) {
                                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall = 1U;
                                            }
                                        }
                                    }
                                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite 
                                        = (0U != (7U 
                                                  & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                     >> 0xcU)));
                                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg = 4U;
                                }
                            }
                        }
                    }
                    if ((8U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                    } else if ((4U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                    } else if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            if ((0U == (7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                              >> 0xcU)))) {
                                if ((1U != (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x14U))) {
                                    if ((0U != (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                >> 0x14U))) {
                                        if ((0x302U 
                                             != (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                 >> 0x14U))) {
                                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                                        }
                                    }
                                }
                            } else if ((1U != (7U & 
                                               (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                >> 0xcU)))) {
                                if ((2U != (7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                  >> 0xcU)))) {
                                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                                }
                            }
                        } else {
                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                    }
                } else if ((8U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    if ((4U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite = 1U;
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg = 2U;
                            }
                            if ((1U & (~ vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst))) {
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                            }
                        } else {
                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                    }
                } else if ((4U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite = 1U;
                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg = 2U;
                        }
                        if ((1U & (~ vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst))) {
                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                    }
                } else if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                      >> 0xeU)))) {
                            if ((0x2000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                            }
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                }
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                              >> 4U)))) {
                    if ((8U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((4U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump = 1U;
                                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc = 1U;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump = 2U;
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc = 1U;
                            }
                        }
                    } else if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc = 1U;
                        }
                    }
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp = 9U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
            }
        } else if ((0x20U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
            if ((0x10U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                              >> 3U)))) {
                    if ((4U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite = 1U;
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg = 3U;
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc = 1U;
                            }
                        }
                    } else if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite = 1U;
                        }
                    }
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp 
                                    = ((0x4000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                        ? ((0x2000U 
                                            & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                            ? ((0x1000U 
                                                & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                                ? 8U
                                                : 7U)
                                            : ((0x1000U 
                                                & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                                ? (
                                                   (0x20U 
                                                    == 
                                                    (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                     >> 0x19U))
                                                    ? 5U
                                                    : 6U)
                                                : 4U))
                                        : ((0x2000U 
                                            & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                            ? ((0x1000U 
                                                & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                                ? 3U
                                                : 2U)
                                            : ((0x1000U 
                                                & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                                ? 1U
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                     >> 0x19U))
                                                    ? 0xaU
                                                    : 0U))));
                            }
                        }
                    }
                }
                if ((8U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                } else if ((4U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((1U & (~ vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst))) {
                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                    }
                } else if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    if ((1U & (~ vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst))) {
                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                }
            } else {
                if ((8U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                } else if ((4U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                } else if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((0U != (7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                          >> 0xcU)))) {
                            if ((1U != (7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                              >> 0xcU)))) {
                                if ((2U != (7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                  >> 0xcU)))) {
                                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                                }
                            }
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                }
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                              >> 3U)))) {
                    if ((4U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite = 1U;
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc = 1U;
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp = 9U;
                            }
                        }
                    } else if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite = 1U;
                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc = 1U;
                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp 
                                = ((0x4000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                    ? ((0x2000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                        ? ((0x1000U 
                                            & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                            ? 8U : 7U)
                                        : ((0x1000U 
                                            & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                            ? ((0x20U 
                                                == 
                                                (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                 >> 0x19U))
                                                ? 5U
                                                : 6U)
                                            : 4U)) : 
                                   ((0x2000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                     ? ((0x1000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                         ? 3U : 2U)
                                     : ((0x1000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                         ? 1U : 0U)));
                        }
                    }
                }
                if ((8U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                } else if ((4U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((1U & (~ vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst))) {
                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                    }
                } else if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    if ((1U & (~ vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst))) {
                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                }
            } else {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite = 1U;
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                } else if ((4U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                } else if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((0x4000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            if ((0x2000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                            }
                        } else if ((0x2000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            if ((0x1000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                            }
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 1U;
                }
            }
            if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                      >> 6U)))) {
            if ((0x20U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemWrite = 1U;
                                    if ((0U == (7U 
                                                & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                   >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp = 7U;
                                    } else if ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                    >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp = 6U;
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                    >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp = 5U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                 >> 4U)))) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                if ((0x4000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                  >> 0xdU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp 
                                            = ((0x1000U 
                                                & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                                ? 3U
                                                : 4U);
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                  >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp = 0U;
                                    }
                                } else {
                                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp 
                                        = ((0x1000U 
                                            & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                            ? 1U : 2U);
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                          >> 5U)))) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemRead = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((3U == (IData)(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__state))) {
        if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__target_dev))) {
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid 
                = vlSelf->ysyx_25030085_top__DOT__sram_bvalid;
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_bresp 
                = vlSelf->ysyx_25030085_top__DOT__sram_bresp;
            vlSelf->ysyx_25030085_top__DOT__sram_bready 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready;
        } else if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__target_dev))) {
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid 
                = vlSelf->ysyx_25030085_top__DOT__uart_bvalid;
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_bresp 
                = vlSelf->ysyx_25030085_top__DOT__uart_bresp;
            vlSelf->ysyx_25030085_top__DOT__uart_bready 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready;
        } else if (VL_UNLIKELY((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__target_dev)))) {
            VL_WRITEF("out-of bound\n");
        }
    }
    vlSelf->ysyx_25030085_top__DOT__uart_awvalid = 0U;
    vlSelf->ysyx_25030085_top__DOT__uart_awaddr = 0U;
    vlSelf->ysyx_25030085_top__DOT__sram_awvalid = 0U;
    vlSelf->ysyx_25030085_top__DOT__sram_awaddr = 0U;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready = 0U;
    if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__state))) {
        if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__target_dev))) {
            vlSelf->ysyx_25030085_top__DOT__sram_awvalid 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid;
            vlSelf->ysyx_25030085_top__DOT__sram_awaddr 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr;
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready 
                = vlSelf->ysyx_25030085_top__DOT__sram_awready;
        } else if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__target_dev))) {
            vlSelf->ysyx_25030085_top__DOT__uart_awvalid 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid;
            vlSelf->ysyx_25030085_top__DOT__uart_awaddr 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr;
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready 
                = vlSelf->ysyx_25030085_top__DOT__uart_awready;
        } else if (VL_UNLIKELY((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__target_dev)))) {
            VL_WRITEF("out-of bound\n");
        }
    }
    vlSelf->ysyx_25030085_top__DOT__uart_wvalid = 0U;
    vlSelf->ysyx_25030085_top__DOT__uart_wdata = 0U;
    vlSelf->ysyx_25030085_top__DOT__uart_wstrb = 0U;
    vlSelf->ysyx_25030085_top__DOT__sram_wvalid = 0U;
    vlSelf->ysyx_25030085_top__DOT__sram_wdata = 0U;
    vlSelf->ysyx_25030085_top__DOT__sram_wstrb = 0U;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready = 0U;
    if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__state))) {
        if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__target_dev))) {
            vlSelf->ysyx_25030085_top__DOT__sram_wvalid 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid;
            vlSelf->ysyx_25030085_top__DOT__sram_wdata 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_wdata;
            vlSelf->ysyx_25030085_top__DOT__sram_wstrb 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_wstrb;
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready 
                = vlSelf->ysyx_25030085_top__DOT__sram_wready;
        } else if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__target_dev))) {
            vlSelf->ysyx_25030085_top__DOT__uart_wvalid 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid;
            vlSelf->ysyx_25030085_top__DOT__uart_wdata 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_wdata;
            vlSelf->ysyx_25030085_top__DOT__uart_wstrb 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_wstrb;
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready 
                = vlSelf->ysyx_25030085_top__DOT__uart_wready;
        } else if (VL_UNLIKELY((0U != (IData)(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__target_dev)))) {
            VL_WRITEF("out-of bound\n");
        }
    }
    vlSelf->top_valid = vlSelf->ysyx_25030085_top__DOT__if_id_valid;
    vlSelf->top_inst = vlSelf->ysyx_25030085_top__DOT__if_id_inst;
    vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__AR_active 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid));
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__AR_active 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid));
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_rd_en 
        = (1U & (~ ((IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_empty) 
                    | (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_empty))));
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_rd_en 
        = (1U & (~ ((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_empty) 
                    | (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_empty))));
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__R_active 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rready) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rvalid));
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__Branch = 0U;
    if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))) {
        if ((0x40U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
            if ((0x20U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                if ((0x10U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm 
                                        = vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI;
                                }
                            }
                        }
                    }
                } else if ((8U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    if ((4U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                    >> 0x1fU))) 
                                        << 0x14U) | 
                                       ((0xff000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst) 
                                        | ((0x800U 
                                            & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                 >> 0x14U)))));
                            }
                        }
                    }
                } else if ((4U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm 
                                = vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI;
                        }
                    }
                } else if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm 
                            = (((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                     >> 7U)))));
                    }
                }
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                    if ((0x4000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__Branch 
                                            = ((0x2000U 
                                                & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                                    ? 
                                                   (vlSelf->ysyx_25030085_top__DOT__rs1_data 
                                                    >= vlSelf->ysyx_25030085_top__DOT__rs2_data)
                                                    : 
                                                   (vlSelf->ysyx_25030085_top__DOT__rs1_data 
                                                    < vlSelf->ysyx_25030085_top__DOT__rs2_data))
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                                    ? 
                                                   VL_GTES_III(32, vlSelf->ysyx_25030085_top__DOT__rs1_data, vlSelf->ysyx_25030085_top__DOT__rs2_data)
                                                    : 
                                                   VL_LTS_III(32, vlSelf->ysyx_25030085_top__DOT__rs1_data, vlSelf->ysyx_25030085_top__DOT__rs2_data)));
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                    >> 0xdU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__Branch 
                                            = ((0x1000U 
                                                & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                                ? (vlSelf->ysyx_25030085_top__DOT__rs1_data 
                                                   != vlSelf->ysyx_25030085_top__DOT__rs2_data)
                                                : (vlSelf->ysyx_25030085_top__DOT__rs1_data 
                                                   == vlSelf->ysyx_25030085_top__DOT__rs2_data));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
            if ((0x10U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                              >> 3U)))) {
                    if ((4U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm 
                                    = (0xfffff000U 
                                       & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst);
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm 
                                = (((- (IData)((vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                      >> 7U))));
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
            if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                          >> 3U)))) {
                if ((4U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm 
                                = (0xfffff000U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst);
                        }
                    }
                } else if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm 
                            = (((1U == (7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                              >> 0xcU))) 
                                | (5U == (7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                >> 0xcU))))
                                ? (0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 0x14U))
                                : vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI);
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm 
                            = vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result 
        = ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))
            ? ((0x10U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                ? ((8U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                    ? 0U : ((4U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                             ? ((2U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                                 ? 0U : (vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data 
                                         - vlSelf->ysyx_25030085_top__DOT__exu__DOT__B))
                             : ((2U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                                 ? (vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc 
                                    + vlSelf->ysyx_25030085_top__DOT__exu__DOT__B)
                                 : (vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data 
                                    & vlSelf->ysyx_25030085_top__DOT__exu__DOT__B))))
                : ((8U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                    ? ((4U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                        ? ((2U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                            ? (vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data 
                               | vlSelf->ysyx_25030085_top__DOT__exu__DOT__B)
                            : (vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data 
                               >> (0x1fU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__B)))
                        : ((2U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                            ? VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data, 
                                             (0x1fU 
                                              & vlSelf->ysyx_25030085_top__DOT__exu__DOT__B))
                            : (vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data 
                               ^ vlSelf->ysyx_25030085_top__DOT__exu__DOT__B)))
                    : ((4U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                        ? ((2U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                            ? ((vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data 
                                < vlSelf->ysyx_25030085_top__DOT__exu__DOT__B)
                                ? 1U : 0U) : (((vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data 
                                                >> 0x1fU) 
                                               != (vlSelf->ysyx_25030085_top__DOT__exu__DOT__B 
                                                   >> 0x1fU))
                                               ? ((vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data 
                                                   >> 0x1fU)
                                                   ? 1U
                                                   : 0U)
                                               : ((
                                                   (0x7fffffffU 
                                                    & vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data) 
                                                   < 
                                                   (0x7fffffffU 
                                                    & vlSelf->ysyx_25030085_top__DOT__exu__DOT__B))
                                                   ? 1U
                                                   : 0U)))
                        : ((2U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                            ? (vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data 
                               << (0x1fU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__B))
                            : (vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data 
                               + vlSelf->ysyx_25030085_top__DOT__exu__DOT__B)))))
            : 0U);
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__B_active 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__uart_bready) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__uart_bvalid));
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__B_active 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__sram_bready) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__sram_bvalid));
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_wr_en 
        = ((~ (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_full)) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__uart_awvalid));
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_wr_en 
        = ((~ (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_full)) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__sram_awvalid));
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__AW_active 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid));
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_wr_en 
        = ((~ (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_full)) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__uart_wvalid));
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_wr_en 
        = ((~ (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_full)) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__sram_wvalid));
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__W_active 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid));
    __Vtableidx1 = (((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready) 
                     << 8U) | (((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid) 
                                << 7U) | (((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__state)))))));
    if (Vysyx_25030085_top__ConstPool__TABLE_hccb843b1_0
        [__Vtableidx1]) {
        vlSelf->ysyx_25030085_top__DOT__xbar__DOT__next_state 
            = Vysyx_25030085_top__ConstPool__TABLE_hfa0e9702_0
            [__Vtableidx1];
    }
}

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_stl(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_25030085_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030085_top___024root___dump_triggers__act(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge clk or negedge rst)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] ysyx_25030085_top.idu.invalid or [changed] ysyx_25030085_top.idu.is_ebreak)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge ysyx_25030085_top.regfile.is_info_register)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030085_top___024root___dump_triggers__nba(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge clk or negedge rst)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] ysyx_25030085_top.idu.invalid or [changed] ysyx_25030085_top.idu.is_ebreak)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge ysyx_25030085_top.regfile.is_info_register)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25030085_top___024root___ctor_var_reset(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->top_pc = 0;
    vlSelf->top_inst = 0;
    vlSelf->top_valid = 0;
    vlSelf->top_ready = 0;
    vlSelf->inst_done = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_done = 0;
    vlSelf->ysyx_25030085_top__DOT__reg_wresp = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_valid = 0;
    vlSelf->ysyx_25030085_top__DOT__if_id_inst = 0;
    vlSelf->ysyx_25030085_top__DOT__if_id_pc = 0;
    vlSelf->ysyx_25030085_top__DOT__if_id_valid = 0;
    vlSelf->ysyx_25030085_top__DOT__rs1_data = 0;
    vlSelf->ysyx_25030085_top__DOT__rs2_data = 0;
    vlSelf->ysyx_25030085_top__DOT__ex_id_ready = 0;
    vlSelf->ysyx_25030085_top__DOT__me_ex_ready = 0;
    vlSelf->ysyx_25030085_top__DOT__me_wb_rdata = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_me_ready = 0;
    vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid = 0;
    vlSelf->ysyx_25030085_top__DOT__if_axi4_arready = 0;
    vlSelf->ysyx_25030085_top__DOT__if_axi4_araddr = 0;
    vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid = 0;
    vlSelf->ysyx_25030085_top__DOT__if_axi4_rready = 0;
    vlSelf->ysyx_25030085_top__DOT__if_axi4_rdata = 0;
    vlSelf->ysyx_25030085_top__DOT__if_axi4_rresp = 0;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid = 0;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready = 0;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr = 0;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid = 0;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready = 0;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata = 0;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp = 0;
    vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arvalid = 0;
    vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arready = 0;
    vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_araddr = 0;
    vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rvalid = 0;
    vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rready = 0;
    vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rdata = 0;
    vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rresp = 0;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid = 0;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready = 0;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr = 0;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid = 0;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready = 0;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_wdata = 0;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_wstrb = 0;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid = 0;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready = 0;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_bresp = 0;
    vlSelf->ysyx_25030085_top__DOT__uart_awvalid = 0;
    vlSelf->ysyx_25030085_top__DOT__uart_awready = 0;
    vlSelf->ysyx_25030085_top__DOT__uart_awaddr = 0;
    vlSelf->ysyx_25030085_top__DOT__uart_wvalid = 0;
    vlSelf->ysyx_25030085_top__DOT__uart_wready = 0;
    vlSelf->ysyx_25030085_top__DOT__uart_wdata = 0;
    vlSelf->ysyx_25030085_top__DOT__uart_wstrb = 0;
    vlSelf->ysyx_25030085_top__DOT__uart_bvalid = 0;
    vlSelf->ysyx_25030085_top__DOT__uart_bready = 0;
    vlSelf->ysyx_25030085_top__DOT__uart_bresp = 0;
    vlSelf->ysyx_25030085_top__DOT__sram_awvalid = 0;
    vlSelf->ysyx_25030085_top__DOT__sram_awready = 0;
    vlSelf->ysyx_25030085_top__DOT__sram_awaddr = 0;
    vlSelf->ysyx_25030085_top__DOT__sram_wvalid = 0;
    vlSelf->ysyx_25030085_top__DOT__sram_wready = 0;
    vlSelf->ysyx_25030085_top__DOT__sram_wdata = 0;
    vlSelf->ysyx_25030085_top__DOT__sram_wstrb = 0;
    vlSelf->ysyx_25030085_top__DOT__sram_bvalid = 0;
    vlSelf->ysyx_25030085_top__DOT__sram_bready = 0;
    vlSelf->ysyx_25030085_top__DOT__sram_bresp = 0;
    vlSelf->ysyx_25030085_top__DOT__if_req = 0;
    vlSelf->ysyx_25030085_top__DOT__if_addr = 0;
    vlSelf->ysyx_25030085_top__DOT__biu_rdata_if = 0;
    vlSelf->ysyx_25030085_top__DOT__biu_rresp_if = 0;
    vlSelf->ysyx_25030085_top__DOT__biu_ready_if = 0;
    vlSelf->ysyx_25030085_top__DOT__lsu_req = 0;
    vlSelf->ysyx_25030085_top__DOT__lsu_wdata = 0;
    vlSelf->ysyx_25030085_top__DOT__lsu_strb = 0;
    vlSelf->ysyx_25030085_top__DOT__biu_rresp_ls = 0;
    vlSelf->ysyx_25030085_top__DOT__biu_wresp_ls = 0;
    vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls = 0;
    vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc = 0;
    vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_reg = 0;
    vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state = 0;
    vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__AR_active = 0;
    vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_cnt = 0;
    vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_pending = 0;
    vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr = 0;
    vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr_feedback = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__state = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemWrite = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemRead = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__Branch = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret = 0;
    vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs1 = 0;
    vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rs2 = 0;
    vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rd = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[__Vi0] = 0;
    }
    vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register = 0;
    vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display = 0;
    vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i = 0;
    vlSelf->ysyx_25030085_top__DOT__regfile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__state = 0;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__rd = 0;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data = 0;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data = 0;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc = 0;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm = 0;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__reg_a5 = 0;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl = 0;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__B = 0;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result = 0;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus = 0;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec = 0;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc = 0;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause = 0;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__AW_active = 0;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__W_active = 0;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__AR_active = 0;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__strb_reg = 0;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_cnt = 0;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_pending = 0;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_cnt = 0;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_pending = 0;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_cnt = 0;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_pending = 0;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr = 0;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data = 0;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsrr_feedback = 0;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsrw_feedback = 0;
    vlSelf->ysyx_25030085_top__DOT__xbar__DOT__target_dev = 0;
    vlSelf->ysyx_25030085_top__DOT__xbar__DOT__state = 0;
    vlSelf->ysyx_25030085_top__DOT__xbar__DOT__next_state = 0;
    vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state = 0;
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_full = 0;
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_full = 0;
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_empty = 0;
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_empty = 0;
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_wr_en = 0;
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_wr_en = 0;
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_addr_out = 0;
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_wdata_out = 0;
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_rd_en = 0;
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__B_active = 0;
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__write_data_reg = 0;
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_process = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[__Vi0] = 0;
    }
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr = 0;
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[__Vi0] = 0;
    }
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr = 0;
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr = 0;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__s_rdata = 0;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__B_active = 0;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__R_active = 0;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_full = 0;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_full = 0;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_empty = 0;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_empty = 0;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_wr_en = 0;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_wr_en = 0;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_addr_out = 0;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_data_out = 0;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_rd_en = 0;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_process = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[__Vi0] = 0;
    }
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr = 0;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[__Vi0] = 0;
    }
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr = 0;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr = 0;
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state = 0;
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__has_data = 0;
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl = 0;
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rd = 0;
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__wdata = 0;
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr = 0;
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__pc = 0;
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__imm = 0;
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__npc = 0;
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__lsu_rdata = 0;
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__MemWrite = 0;
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__MemRead = 0;
    vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state = 0;
    vlSelf->ysyx_25030085_top__DOT__wbu__DOT__has_data = 0;
    vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl = 0;
    vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd = 0;
    vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc = 0;
    vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc = 0;
    vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm = 0;
    vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata = 0;
    vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata = 0;
    vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result = 0;
    vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wen = 0;
    vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wb_data = 0;
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__idu__DOT__state = 0;
    vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v0 = 0;
    vlSelf->__Vdlyvdim0__ysyx_25030085_top__DOT__regfile__DOT__register__v31 = 0;
    vlSelf->__Vdlyvval__ysyx_25030085_top__DOT__regfile__DOT__register__v31 = 0;
    vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v31 = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__state = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__lsu__DOT__state = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__wbu__DOT__state = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__if_axi4_arvalid = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__if_axi4_rready = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__biu_rdata_if = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_arvalid = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_rready = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_awvalid = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_pending = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_cnt = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_bready = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__Vtrigrprev__TOP__rst = 0;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__idu__DOT__invalid = 0;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__idu__DOT__is_ebreak = 0;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__regfile__DOT__is_info_register = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
