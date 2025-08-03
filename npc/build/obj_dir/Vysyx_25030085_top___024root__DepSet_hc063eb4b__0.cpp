// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25030085_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25030085_top___024root.h"

void Vysyx_25030085_top___024root___eval_act(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__2(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*3:0*/ __Vdly__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr;
    __Vdly__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr = 0;
    CData/*3:0*/ __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr;
    __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr = 0;
    CData/*3:0*/ __Vdly__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr;
    __Vdly__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr = 0;
    CData/*3:0*/ __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr;
    __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr = 0;
    // Body
    vlSelf->__Vdly__ysyx_25030085_top__DOT__clint__DOT__mtime 
        = vlSelf->ysyx_25030085_top__DOT__clint__DOT__mtime;
    __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr 
        = vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr;
    __Vdly__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr 
        = vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr;
    __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr 
        = vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr;
    __Vdly__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr 
        = vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr;
    vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem__v0 = 0U;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__idu__DOT__state 
        = vlSelf->ysyx_25030085_top__DOT__idu__DOT__state;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__ifu__DOT__current_pc 
        = vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__ifu__DOT__state 
        = vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__state 
        = vlSelf->ysyx_25030085_top__DOT__exu__DOT__state;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__lsu__DOT__state 
        = vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__wbu__DOT__state 
        = vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state;
    vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v31 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_wr_en) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_full)))) {
            vlSelf->__Vdlyvval__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem__v0 
                = vlSelf->ysyx_25030085_top__DOT__sram_awaddr;
            vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem__v0 = 1U;
            vlSelf->__Vdlyvdim0__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem__v0 
                = (7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr));
        }
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_wr_en) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_full)))) {
            vlSelf->__Vdlyvval__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem__v0 
                = vlSelf->ysyx_25030085_top__DOT__uart_awaddr;
            vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem__v0 = 1U;
            vlSelf->__Vdlyvdim0__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem__v0 
                = (7U & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr));
        }
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_wr_en) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_full)))) {
            vlSelf->__Vdlyvval__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem__v0 
                = vlSelf->ysyx_25030085_top__DOT__uart_wdata;
            vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem__v0 = 1U;
            vlSelf->__Vdlyvdim0__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem__v0 
                = (7U & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr));
        }
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_wr_en) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_full)))) {
            vlSelf->__Vdlyvval__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem__v0 
                = (((QData)((IData)(vlSelf->ysyx_25030085_top__DOT__sram_wstrb)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_25030085_top__DOT__sram_wdata)));
            vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem__v0 = 1U;
            vlSelf->__Vdlyvdim0__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem__v0 
                = (7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr));
        }
        vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__target_dev 
            = ((0xa0000048U == vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr)
                ? 2U : (((0x80000000U <= vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr) 
                         & (0x87ffffffU >= vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr))
                         ? 1U : 0U));
        vlSelf->ysyx_25030085_top__DOT__xbar__DOT__target_dev 
            = ((0xa00003f8U == vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr)
                ? 2U : (((0x80000000U <= vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr) 
                         & (0x87ffffffU >= vlSelf->ysyx_25030085_top__DOT__ls_axi4_awaddr))
                         ? 1U : 0U));
        vlSelf->ysyx_25030085_top__DOT__reg_wresp = 
            (((vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
               >> 0x10U) & (0U != (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd))) 
             & (IData)(vlSelf->ysyx_25030085_top__DOT__wb_valid));
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->__Vdly__ysyx_25030085_top__DOT__clint__DOT__mtime = 0ULL;
        __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr = 0U;
        __Vdly__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr = 0U;
        __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr = 0U;
        __Vdly__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr = 0U;
        vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v0 = 1U;
        vlSelf->ysyx_25030085_top__DOT__lsu__DOT__has_data = 0U;
        vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state = 0U;
        vlSelf->ysyx_25030085_top__DOT__xbar__DOT__state = 0U;
        vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wb_data = 0U;
        vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc = 0U;
        vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm = 0U;
        vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata = 0U;
        vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata = 0U;
        vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result = 0U;
        vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc = 0x80000000U;
        vlSelf->__Vdly__ysyx_25030085_top__DOT__wbu__DOT__state = 0U;
    } else {
        vlSelf->__Vdly__ysyx_25030085_top__DOT__clint__DOT__mtime 
            = (1ULL + vlSelf->ysyx_25030085_top__DOT__clint__DOT__mtime);
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_wr_en) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_full)))) {
            __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr)));
        }
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_wr_en) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_full)))) {
            __Vdly__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr)));
        }
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_wr_en) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_full)))) {
            __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr)));
        }
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_wr_en) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_full)))) {
            __Vdly__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr)));
        }
        if ((((vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
               >> 0x10U) & (0U != (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd))) 
             & (IData)(vlSelf->ysyx_25030085_top__DOT__wb_valid))) {
            vlSelf->__Vdlyvval__ysyx_25030085_top__DOT__regfile__DOT__register__v31 
                = vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wb_data;
            vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v31 = 1U;
            vlSelf->__Vdlyvdim0__ysyx_25030085_top__DOT__regfile__DOT__register__v31 
                = vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd;
        }
        vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state 
            = vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__next_state;
        vlSelf->ysyx_25030085_top__DOT__xbar__DOT__state 
            = vlSelf->ysyx_25030085_top__DOT__xbar__DOT__next_state;
        if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))) {
            vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wb_data 
                = ((0x1000U & vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl)
                    ? ((0x800U & vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl)
                        ? 0U : ((0x400U & vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl)
                                 ? 0U : vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata))
                    : ((0x800U & vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl)
                        ? ((0x400U & vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl)
                            ? vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm
                            : ((IData)(4U) + vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc))
                        : ((0x400U & vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl)
                            ? vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata
                            : vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result)));
        }
        if ((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))) {
            if (((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state)) 
                 & (IData)(vlSelf->ysyx_25030085_top__DOT__wb_me_ready))) {
                vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                    = vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl;
                vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata 
                    = ((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
                        ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus
                        : ((0x305U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
                            ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec
                            : ((0x341U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
                                ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc
                                : ((0x342U == (0xfffU 
                                               & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))
                                    ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause
                                    : 0U))));
                vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata 
                    = vlSelf->ysyx_25030085_top__DOT__me_wb_rdata;
                vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result 
                    = vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr;
                vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc 
                    = vlSelf->ysyx_25030085_top__DOT__lsu__DOT__pc;
                vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc 
                    = vlSelf->ysyx_25030085_top__DOT__lsu__DOT__npc;
                vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm 
                    = vlSelf->ysyx_25030085_top__DOT__lsu__DOT__imm;
                vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd 
                    = vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rd;
                vlSelf->__Vdly__ysyx_25030085_top__DOT__wbu__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))) {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__wbu__DOT__state = 3U;
        } else if ((3U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))) {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__wbu__DOT__state = 0U;
        }
    }
    vlSelf->ysyx_25030085_top__DOT__sram_awready = 
        ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_wr_en));
    vlSelf->ysyx_25030085_top__DOT__uart_awready = 
        ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_wr_en));
    vlSelf->ysyx_25030085_top__DOT__sram_wready = (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_wr_en));
    vlSelf->ysyx_25030085_top__DOT__uart_wready = (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_wr_en));
    vlSelf->inst_done = ((~ (IData)(vlSelf->reset)) 
                         & (IData)(vlSelf->ysyx_25030085_top__DOT__wb_valid));
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr 
        = __Vdly__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__wr_ptr;
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr 
        = __Vdly__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__wr_ptr;
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr 
        = __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__wr_ptr;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr 
        = __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__wr_ptr;
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__5(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus;
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__6(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->ysyx_25030085_top__DOT__clint__DOT__mtime 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__clint__DOT__mtime;
    if (vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem__v0) {
        vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem[vlSelf->__Vdlyvdim0__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem__v0] 
            = vlSelf->__Vdlyvval__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem__v0;
    }
    if (vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem__v0) {
        vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem[vlSelf->__Vdlyvdim0__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem__v0] 
            = vlSelf->__Vdlyvval__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem__v0;
    }
    if (vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem__v0) {
        vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem[vlSelf->__Vdlyvdim0__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem__v0] 
            = vlSelf->__Vdlyvval__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem__v0;
    }
    if (vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem__v0) {
        vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem[vlSelf->__Vdlyvdim0__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem__v0] 
            = vlSelf->__Vdlyvval__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem__v0;
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_25030085_top__DOT__if_req = 0U;
        vlSelf->__Vdly__ysyx_25030085_top__DOT__ifu__DOT__current_pc = 0x80000000U;
        vlSelf->__Vdly__ysyx_25030085_top__DOT__ifu__DOT__state = 0U;
        vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl = 0U;
        vlSelf->ysyx_25030085_top__DOT__lsu__DOT__wdata = 0U;
        vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr = 0U;
        vlSelf->__Vdly__ysyx_25030085_top__DOT__lsu__DOT__state = 0U;
        vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl = 0U;
        vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data = 0U;
        vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data = 0U;
        vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc = 0x80000000U;
        vlSelf->ysyx_25030085_top__DOT__exu__DOT__reg_a5 = 0U;
        vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm = 0U;
        vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__state = 0U;
        vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst = 0U;
        vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc = 0x80000000U;
        vlSelf->__Vdly__ysyx_25030085_top__DOT__idu__DOT__state = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state))) {
                if ((1U & (IData)(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state))) {
                    if (vlSelf->ysyx_25030085_top__DOT__wb_valid) {
                        vlSelf->__Vdly__ysyx_25030085_top__DOT__ifu__DOT__current_pc 
                            = vlSelf->top_pc;
                        vlSelf->__Vdly__ysyx_25030085_top__DOT__ifu__DOT__state = 0U;
                    }
                } else {
                    vlSelf->__Vdly__ysyx_25030085_top__DOT__ifu__DOT__state = 3U;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state))) {
                vlSelf->ysyx_25030085_top__DOT__if_req = 0U;
                if (vlSelf->ysyx_25030085_top__DOT__biu_ready_if) {
                    vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_reg 
                        = vlSelf->ysyx_25030085_top__DOT__biu_rdata_if;
                    if (vlSelf->top_ready) {
                        vlSelf->__Vdly__ysyx_25030085_top__DOT__ifu__DOT__state = 2U;
                    }
                }
            } else {
                vlSelf->ysyx_25030085_top__DOT__if_req = 1U;
                vlSelf->ysyx_25030085_top__DOT__if_addr 
                    = vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc;
                vlSelf->__Vdly__ysyx_25030085_top__DOT__ifu__DOT__state = 1U;
            }
        }
        if ((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))) {
            if (((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state)) 
                 & (IData)(vlSelf->ysyx_25030085_top__DOT__me_ex_ready))) {
                vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                    = vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl;
                vlSelf->ysyx_25030085_top__DOT__lsu__DOT__wdata 
                    = vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data;
                vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr 
                    = vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result;
                vlSelf->ysyx_25030085_top__DOT__lsu__DOT__pc 
                    = vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc;
                vlSelf->ysyx_25030085_top__DOT__lsu__DOT__npc 
                    = ((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0xeU))) ? (vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm 
                                                   + vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc)
                        : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                         >> 0xeU)))
                            ? (0xfffffffeU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result)
                            : ((0x2000U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                                ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result
                                : ((0x20000U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                                    ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec
                                    : ((0x40000U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                                        ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc
                                        : ((IData)(4U) 
                                           + vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc))))));
                vlSelf->ysyx_25030085_top__DOT__lsu__DOT__imm 
                    = vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm;
                vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rd 
                    = vlSelf->ysyx_25030085_top__DOT__exu__DOT__rd;
                vlSelf->ysyx_25030085_top__DOT__lsu_req = 1U;
                vlSelf->__Vdly__ysyx_25030085_top__DOT__lsu__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))) {
            vlSelf->ysyx_25030085_top__DOT__lsu_req = 0U;
            if (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__MemRead) {
                if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__biu_rresp_ls))) {
                    vlSelf->ysyx_25030085_top__DOT__me_wb_rdata 
                        = vlSelf->ysyx_25030085_top__DOT__lsu__DOT__lsu_rdata;
                    vlSelf->__Vdly__ysyx_25030085_top__DOT__lsu__DOT__state = 2U;
                }
            } else if (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__MemWrite) {
                if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__biu_wresp_ls))) {
                    vlSelf->__Vdly__ysyx_25030085_top__DOT__lsu__DOT__state = 2U;
                }
            } else {
                vlSelf->__Vdly__ysyx_25030085_top__DOT__lsu__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))) {
            if ((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))) {
                vlSelf->__Vdly__ysyx_25030085_top__DOT__lsu__DOT__state = 0U;
            }
        }
        if ((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))) {
            if (((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state)) 
                 & (IData)(vlSelf->ysyx_25030085_top__DOT__ex_id_ready))) {
                vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                    = (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen) 
                        << 0x13U) | (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret) 
                                      << 0x12U) | (
                                                   ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall) 
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
                                                                           | (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc))))))))))));
                vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data 
                    = vlSelf->ysyx_25030085_top__DOT__rs1_data;
                vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data 
                    = vlSelf->ysyx_25030085_top__DOT__rs2_data;
                vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc 
                    = vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc;
                vlSelf->ysyx_25030085_top__DOT__exu__DOT__reg_a5 
                    = vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                    [0xfU];
                vlSelf->ysyx_25030085_top__DOT__exu__DOT__rd 
                    = (0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                >> 7U));
                vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm 
                    = vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm;
                vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))) {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))) {
            if ((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))) {
                vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__state = 0U;
            }
        }
        if ((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))) {
            if (((IData)(vlSelf->ysyx_25030085_top__DOT__if_id_valid) 
                 & (IData)(vlSelf->top_ready))) {
                vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                    = vlSelf->ysyx_25030085_top__DOT__if_id_inst;
                vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc 
                    = vlSelf->ysyx_25030085_top__DOT__if_id_pc;
                vlSelf->__Vdly__ysyx_25030085_top__DOT__idu__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))) {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__idu__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))) {
            if ((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))) {
                vlSelf->__Vdly__ysyx_25030085_top__DOT__idu__DOT__state = 0U;
            }
        }
    }
    vlSelf->top_pc = vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc;
    vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__ifu__DOT__current_pc;
    vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__ifu__DOT__state;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        vlSelf->ysyx_25030085_top__DOT__wb_valid = 
            (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state));
    }
    vlSelf->ysyx_25030085_top__DOT__lsu_wdata = vlSelf->ysyx_25030085_top__DOT__lsu__DOT__wdata;
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__MemWrite 
        = (1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                 >> 6U));
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__MemRead 
        = (1U & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                 >> 5U));
    vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__wbu__DOT__state;
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__lsu__DOT__state;
    if (vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v0) {
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[1U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[2U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[3U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[4U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[5U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[6U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[7U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[8U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[9U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0xaU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0xbU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0xcU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0xdU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0xeU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0xfU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0x10U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0x11U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0x12U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0x13U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0x14U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0x15U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0x16U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0x17U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0x18U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0x19U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0x1aU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0x1bU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0x1cU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0x1dU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0x1eU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v31) {
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[vlSelf->__Vdlyvdim0__ysyx_25030085_top__DOT__regfile__DOT__register__v31] 
            = vlSelf->__Vdlyvval__ysyx_25030085_top__DOT__regfile__DOT__register__v31;
    }
    vlSelf->ysyx_25030085_top__DOT__wb_me_ready = (0U 
                                                   == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state));
    vlSelf->ysyx_25030085_top__DOT__me_ex_ready = (0U 
                                                   == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state));
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
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__B = (
                                                   (1U 
                                                    & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                                                    ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm
                                                    : vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data);
    vlSelf->ysyx_25030085_top__DOT__if_id_valid = 0U;
    if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state))) {
        vlSelf->ysyx_25030085_top__DOT__if_id_pc = vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc;
        vlSelf->ysyx_25030085_top__DOT__if_id_valid = 1U;
        vlSelf->ysyx_25030085_top__DOT__if_id_inst 
            = vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_reg;
    }
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__state 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__state;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__state 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__idu__DOT__state;
    vlSelf->top_valid = vlSelf->ysyx_25030085_top__DOT__if_id_valid;
    vlSelf->top_inst = vlSelf->ysyx_25030085_top__DOT__if_id_inst;
    vlSelf->ysyx_25030085_top__DOT__ex_id_ready = (0U 
                                                   == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state));
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
    vlSelf->top_ready = (0U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state));
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemWrite = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemRead = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__AluOp = 0U;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak = 0U;
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
                                        if ((1U == 
                                             (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                              >> 0x14U))) {
                                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak = 1U;
                                        }
                                    }
                                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__RegWrite 
                                        = (0U != (7U 
                                                  & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                     >> 0xcU)));
                                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemtoReg = 4U;
                                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm 
                                        = vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI;
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
                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm 
                                = vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI;
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
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm 
                                    = (0xfffff000U 
                                       & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst);
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
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__ALUSrc = 1U;
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0xfe0U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                            >> 7U))));
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
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm 
                                    = (0xfffff000U 
                                       & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst);
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
                            vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm 
                                = (((1U == (7U & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                  >> 0xcU))) 
                                    | (5U == (7U & 
                                              (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                               >> 0xcU))))
                                    ? (0x1fU & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                >> 0x14U))
                                    : vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI);
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
                                vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm 
                                    = vlSelf->ysyx_25030085_top__DOT__idu__DOT__immI;
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
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_comb__TOP__0(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_comb__TOP__0\n"); );
    // Body
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
    vlSelf->ysyx_25030085_top__DOT__uart_wvalid = 0U;
    vlSelf->ysyx_25030085_top__DOT__uart_wdata = 0U;
    vlSelf->ysyx_25030085_top__DOT__uart_wstrb = 0U;
    vlSelf->ysyx_25030085_top__DOT__sram_wvalid = 0U;
    vlSelf->ysyx_25030085_top__DOT__sram_wdata = 0U;
    vlSelf->ysyx_25030085_top__DOT__sram_wstrb = 0U;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready = 0U;
    if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state))) {
        vlSelf->ysyx_25030085_top__DOT__if_axi4_arready 
            = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arready;
        vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready = 0U;
    } else if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state))) {
        if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__target_dev))) {
            vlSelf->ysyx_25030085_top__DOT__if_axi4_arready = 0U;
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready 
                = vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_arready;
        } else if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__target_dev))) {
            vlSelf->ysyx_25030085_top__DOT__if_axi4_arready = 0U;
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready 
                = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arready;
        }
    } else {
        vlSelf->ysyx_25030085_top__DOT__if_axi4_arready = 0U;
        vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready = 0U;
    }
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
    if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state))) {
        vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_araddr 
            = vlSelf->ysyx_25030085_top__DOT__if_axi4_araddr;
        vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arvalid 
            = vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid;
    } else if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state))) {
        if ((2U != (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__target_dev))) {
            if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__target_dev))) {
                vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_araddr 
                    = vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr;
                vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arvalid 
                    = vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid;
            }
        }
    } else {
        vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_araddr = 0U;
        vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arvalid = 0U;
    }
    if ((1U != (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state))) {
        if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state))) {
            if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__target_dev))) {
                vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_araddr 
                    = vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr;
                vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_arvalid 
                    = vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid;
            }
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
    vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__AR_active 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arready) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid));
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__AR_active 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arready) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid));
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__W_active 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid));
    vlSelf->ysyx_25030085_top__DOT__clint__DOT__AR_active 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_arready) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_arvalid));
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_wr_en 
        = ((~ (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_full)) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__uart_awvalid));
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__AW_active 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid));
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_rd_en 
        = (1U & (~ ((IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_empty) 
                    | (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_empty))));
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_wr_en 
        = ((~ (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_full)) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__uart_wvalid));
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_wr_en 
        = ((~ (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_full)) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__sram_awvalid));
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_rd_en 
        = (1U & (~ ((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_empty) 
                    | (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_empty))));
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_wr_en 
        = ((~ (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_full)) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__sram_wvalid));
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__7(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__7\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_25030085_top__DOT__if_axi4_rready = 0U;
        vlSelf->__Vdly__ysyx_25030085_top__DOT__biu_rdata_if = 0U;
        vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_rready = 0U;
        vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls = 0U;
        vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_bready = 0U;
    } else {
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready)))) {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__if_axi4_rready = 1U;
            vlSelf->ysyx_25030085_top__DOT__biu_ready_if = 1U;
            vlSelf->__Vdly__ysyx_25030085_top__DOT__biu_rdata_if 
                = vlSelf->ysyx_25030085_top__DOT__if_axi4_rdata;
            vlSelf->ysyx_25030085_top__DOT__biu_rresp_if 
                = vlSelf->ysyx_25030085_top__DOT__if_axi4_rresp;
        } else {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__biu_rdata_if 
                = vlSelf->ysyx_25030085_top__DOT__biu_rdata_if;
            vlSelf->__Vdly__ysyx_25030085_top__DOT__if_axi4_rready = 0U;
            vlSelf->ysyx_25030085_top__DOT__biu_ready_if = 0U;
        }
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready)))) {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_rready = 1U;
            vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata;
            vlSelf->ysyx_25030085_top__DOT__biu_rresp_ls 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp;
        } else {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_rready = 0U;
            vlSelf->ysyx_25030085_top__DOT__biu_rresp_ls = 0U;
        }
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready)))) {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_bready = 1U;
            vlSelf->ysyx_25030085_top__DOT__biu_wresp_ls 
                = vlSelf->ysyx_25030085_top__DOT__ls_axi4_bresp;
        } else {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_bready = 0U;
            vlSelf->ysyx_25030085_top__DOT__biu_wresp_ls = 0U;
        }
    }
    vlSelf->ysyx_25030085_top__DOT__biu_rdata_if = vlSelf->__Vdly__ysyx_25030085_top__DOT__biu_rdata_if;
    vlSelf->ysyx_25030085_top__DOT__if_axi4_rready 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__if_axi4_rready;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_rready;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_bready;
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__8(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc;
}

extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_25030085_top__ConstPool__TABLE_hb7a25adb_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vysyx_25030085_top__ConstPool__TABLE_h68a596c1_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_25030085_top__ConstPool__TABLE_hccb843b1_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vysyx_25030085_top__ConstPool__TABLE_h6b9c64ad_0;

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_comb__TOP__1(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_comb__TOP__1\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state))) {
        vlSelf->ysyx_25030085_top__DOT__if_axi4_rdata 
            = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rdata;
        vlSelf->ysyx_25030085_top__DOT__if_axi4_rresp 
            = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rresp;
        vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid 
            = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rvalid;
        vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata = 0U;
        vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp = 0U;
        vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid = 0U;
        vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rready 
            = vlSelf->ysyx_25030085_top__DOT__if_axi4_rready;
    } else {
        if ((2U != (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state))) {
            vlSelf->ysyx_25030085_top__DOT__if_axi4_rdata = 0U;
            vlSelf->ysyx_25030085_top__DOT__if_axi4_rresp = 0U;
            vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid = 0U;
        }
        if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state))) {
            if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__target_dev))) {
                vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata 
                    = vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_rdata;
                vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp 
                    = vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_rresp;
                vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid 
                    = vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_rvalid;
            } else if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__target_dev))) {
                vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata 
                    = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rdata;
                vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp 
                    = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rresp;
                vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid 
                    = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rvalid;
            }
            if ((2U != (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__target_dev))) {
                if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__target_dev))) {
                    vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rready 
                        = vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready;
                }
            }
        } else {
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_rdata = 0U;
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_rresp = 0U;
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid = 0U;
            vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rready = 0U;
        }
    }
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__lsu_rdata = 0U;
    if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsu__DOT__state))) {
        if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__biu_rresp_ls))) {
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
                                    ? (((- (IData)(
                                                   (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                                    >> 0x1fU))) 
                                        << 8U) | (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                                  >> 0x18U))
                                    : (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                                       >> 0x17U)))) 
                                        << 8U) | (0xffU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                                     >> 0x10U))))
                                : ((1U & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr)
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                                       >> 0xfU)))) 
                                        << 8U) | (0xffU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                                     >> 8U)))
                                    : (((- (IData)(
                                                   (1U 
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
                                : (((- (IData)((1U 
                                                & (vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls)))
                            : vlSelf->ysyx_25030085_top__DOT__biu_rdata_ls)));
        }
    }
    if ((1U != (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state))) {
        if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state))) {
            if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__target_dev))) {
                vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_rready 
                    = vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready;
            }
        }
    }
    vlSelf->ysyx_25030085_top__DOT__uart_bready = 0U;
    vlSelf->ysyx_25030085_top__DOT__sram_bready = 0U;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid = 0U;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_bresp = 0U;
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
    __Vtableidx2 = (((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready) 
                     << 7U) | (((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_rvalid) 
                                << 6U) | (((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rready) 
                                           << 5U) | 
                                          (((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_rvalid) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid) 
                                               << 3U) 
                                              | (((IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__state)))))));
    if (Vysyx_25030085_top__ConstPool__TABLE_hb7a25adb_0
        [__Vtableidx2]) {
        vlSelf->ysyx_25030085_top__DOT__arbiter__DOT__next_state 
            = Vysyx_25030085_top__ConstPool__TABLE_h68a596c1_0
            [__Vtableidx2];
    }
    vlSelf->ysyx_25030085_top__DOT__clint__DOT__R_active 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_rready) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_rtc_axi4_rvalid));
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__R_active 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rready) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rvalid));
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__B_active 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__uart_bready) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__uart_bvalid));
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__B_active 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__sram_bready) 
           & (IData)(vlSelf->ysyx_25030085_top__DOT__sram_bvalid));
    __Vtableidx1 = (((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready) 
                     << 8U) | (((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_bvalid) 
                                << 7U) | (((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wready) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awready) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->ysyx_25030085_top__DOT__xbar__DOT__state)))))));
    if (Vysyx_25030085_top__ConstPool__TABLE_hccb843b1_0
        [__Vtableidx1]) {
        vlSelf->ysyx_25030085_top__DOT__xbar__DOT__next_state 
            = Vysyx_25030085_top__ConstPool__TABLE_h6b9c64ad_0
            [__Vtableidx1];
    }
}

void Vysyx_25030085_top___024root___nba_sequent__TOP__0(Vysyx_25030085_top___024root* vlSelf);
void Vysyx_25030085_top___024root___nba_sequent__TOP__1(Vysyx_25030085_top___024root* vlSelf);
void Vysyx_25030085_top___024root___nba_sequent__TOP__3(Vysyx_25030085_top___024root* vlSelf);
void Vysyx_25030085_top___024root___nba_sequent__TOP__4(Vysyx_25030085_top___024root* vlSelf);

void Vysyx_25030085_top___024root___eval_nba(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(5U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__5(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(3U))) {
        Vysyx_25030085_top___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(3U))) {
        Vysyx_25030085_top___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

void Vysyx_25030085_top___024root___eval_triggers__act(Vysyx_25030085_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030085_top___024root___dump_triggers__act(Vysyx_25030085_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030085_top___024root___dump_triggers__nba(Vysyx_25030085_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25030085_top___024root___eval(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval\n"); );
    // Init
    VlTriggerVec<6> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_25030085_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_25030085_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/zzy/ysyx-workbench/npc/vsrc/ysyx_25030085_top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_25030085_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25030085_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/zzy/ysyx-workbench/npc/vsrc/ysyx_25030085_top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_25030085_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_25030085_top___024root___eval_debug_assertions(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
