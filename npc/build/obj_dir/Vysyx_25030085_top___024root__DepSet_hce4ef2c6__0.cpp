// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25030085_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25030085_top__Syms.h"
#include "Vysyx_25030085_top___024root.h"

void Vysyx_25030085_top___024root____Vdpiexp_ysyx_25030085_top__DOT__regfile__DOT__info_register_en_TOP(Vysyx_25030085_top__Syms* __restrict vlSymsp, CData/*0:0*/ enable, CData/*0:0*/ en_display) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root____Vdpiexp_ysyx_25030085_top__DOT__regfile__DOT__info_register_en_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.ysyx_25030085_top__DOT__regfile__DOT__is_info_register 
        = enable;
    vlSymsp->TOP.ysyx_25030085_top__DOT__regfile__DOT__is_en_display 
        = en_display;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030085_top___024root___dump_triggers__act(Vysyx_25030085_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25030085_top___024root___eval_triggers__act(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = vlSelf->__Vdpi_export_trigger;
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__rst))));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(3U) = (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__idu__DOT__invalid)) 
                                      | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__idu__DOT__is_ebreak)));
    vlSelf->__VactTriggered.at(4U) = ((IData)(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__regfile__DOT__is_info_register)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__idu__DOT__invalid 
        = vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__idu__DOT__is_ebreak 
        = vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__regfile__DOT__is_info_register 
        = vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25030085_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(IData/*31:0*/ value, CData/*0:0*/ en_display);

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__0(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__0\n"); );
    // Body
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [1U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [2U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [3U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [4U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [5U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [6U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [7U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [8U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [9U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0xaU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0xbU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0xcU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0xdU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0xeU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0xfU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0x10U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0x11U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0x12U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0x13U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0x14U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0x15U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0x16U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0x17U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0x18U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0x19U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0x1aU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0x1bU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0x1cU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0x1dU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0x1eU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register
                                                                            [0x1fU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i = 0x20U;
}

void Vysyx_25030085_top___024unit____Vdpiimwrap_display_call_func_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ dnpc);
void Vysyx_25030085_top___024unit____Vdpiimwrap_display_ret_func_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ dnpc);

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__1(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    if ((((IData)(((0x80U == (0xf80U & vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst)) 
                   & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump)))) 
          | (IData)(((0x80U == (0xf80U & vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst)) 
                     & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))) 
         & (3U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state)))) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_display_call_func_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc, vlSelf->top_pc);
    }
    if (((IData)(((0x8000U == (0xf8f80U & vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst)) 
                  & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump)))) 
         & (3U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state)))) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_display_ret_func_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc, vlSelf->top_pc);
    }
    vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec 
        = vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus 
        = vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause 
        = vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc 
        = vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc;
    if ((0x20000U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)) {
        vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus 
            = (0x1800U | ((0xffffe7f7U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus) 
                          | (0x80U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus 
                                      << 4U))));
        vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause 
            = vlSelf->ysyx_25030085_top__DOT__exu__DOT__reg_a5;
        vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc 
            = vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc;
    } else if ((0x40000U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)) {
        vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus 
            = (((0xffffe7ffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus) 
                | (8U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus 
                         >> 4U))) | (0xffffff7fU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus));
    }
    if ((0U != (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                      >> 0x13U)))) {
        if ((0x300U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))) {
            if ((0x305U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))) {
                vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec 
                    = ((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0x13U))) ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data
                        : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                         >> 0x13U)))
                            ? (vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec 
                               | vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data)
                            : vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec));
            }
            if ((0x305U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))) {
                if ((0x341U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))) {
                    if ((0x342U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))) {
                        vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause 
                            = ((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                             >> 0x13U)))
                                ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data
                                : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                                 >> 0x13U)))
                                    ? (vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause 
                                       | vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data)
                                    : vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause));
                    }
                }
                if ((0x341U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))) {
                    vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc 
                        = ((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                         >> 0x13U)))
                            ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data
                            : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                             >> 0x13U)))
                                ? (vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc 
                                   | vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data)
                                : vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc));
                }
            }
        }
        if ((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm))) {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus 
                = ((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                 >> 0x13U))) ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data
                    : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                                     >> 0x13U))) ? 
                       (vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus 
                        | vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data)
                        : vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus));
        }
    }
}

void Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_readv__Vfuncrtn);
void Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__2(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_readv__7__Vfuncout;
    __Vfunc_pmem_readv__7__Vfuncout = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v0;
    __Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_25030085_top__DOT__regfile__DOT__register__v31;
    __Vdlyvdim0__ysyx_25030085_top__DOT__regfile__DOT__register__v31 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25030085_top__DOT__regfile__DOT__register__v31;
    __Vdlyvval__ysyx_25030085_top__DOT__regfile__DOT__register__v31 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v31;
    __Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v31 = 0;
    CData/*1:0*/ __Vdly__ysyx_25030085_top__DOT__mem__DOT__state;
    __Vdly__ysyx_25030085_top__DOT__mem__DOT__state = 0;
    // Body
    vlSelf->__Vdly__ysyx_25030085_top__DOT__idu__DOT__state 
        = vlSelf->ysyx_25030085_top__DOT__idu__DOT__state;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__state 
        = vlSelf->ysyx_25030085_top__DOT__exu__DOT__state;
    __Vdly__ysyx_25030085_top__DOT__mem__DOT__state 
        = vlSelf->ysyx_25030085_top__DOT__mem__DOT__state;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__wbu__DOT__state 
        = vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state;
    __Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v0 = 0U;
    __Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v31 = 0U;
    vlSelf->inst_done = ((~ (IData)(vlSelf->rst)) & 
                         (3U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state)));
    if (vlSelf->rst) {
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v0 = 1U;
        vlSelf->ysyx_25030085_top__DOT__mem__DOT__has_data = 0U;
        vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wb_data = 0U;
        vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc = 0U;
        vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm = 0U;
        vlSelf->ysyx_25030085_top__DOT__wbu__DOT__csr_rdata = 0U;
        vlSelf->ysyx_25030085_top__DOT__wbu__DOT__mem_rdata = 0U;
        vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result = 0U;
        vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc = 0x80000000U;
        vlSelf->__Vdly__ysyx_25030085_top__DOT__wbu__DOT__state = 0U;
    } else {
        if (((vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
              >> 0x10U) & (0U != (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd)))) {
            __Vdlyvval__ysyx_25030085_top__DOT__regfile__DOT__register__v31 
                = vlSelf->ysyx_25030085_top__DOT__wbu__DOT__wb_data;
            __Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v31 = 1U;
            __Vdlyvdim0__ysyx_25030085_top__DOT__regfile__DOT__register__v31 
                = vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd;
        }
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
            if (((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__mem__DOT__state)) 
                 & (IData)(vlSelf->ysyx_25030085_top__DOT__wb_me_ready))) {
                vlSelf->ysyx_25030085_top__DOT__wbu__DOT__ctrl 
                    = vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl;
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
                    = vlSelf->ysyx_25030085_top__DOT__mem__DOT__ReadData;
                vlSelf->ysyx_25030085_top__DOT__wbu__DOT__alu_result 
                    = vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr;
                vlSelf->ysyx_25030085_top__DOT__wbu__DOT__pc 
                    = vlSelf->ysyx_25030085_top__DOT__mem__DOT__pc;
                vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc 
                    = vlSelf->ysyx_25030085_top__DOT__mem__DOT__npc;
                vlSelf->ysyx_25030085_top__DOT__wbu__DOT__imm 
                    = vlSelf->ysyx_25030085_top__DOT__mem__DOT__imm;
                vlSelf->ysyx_25030085_top__DOT__wbu__DOT__rd 
                    = vlSelf->ysyx_25030085_top__DOT__mem__DOT__rd;
                vlSelf->__Vdly__ysyx_25030085_top__DOT__wbu__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))) {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__wbu__DOT__state = 3U;
        } else if ((3U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))) {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__wbu__DOT__state = 0U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25030085_top__DOT__mem__DOT__ReadData = 0U;
    } else if (((vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl 
                 >> 5U) & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__mem__DOT__state)))) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(
                                                                             (0xfffffffcU 
                                                                              & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr), __Vfunc_pmem_readv__7__Vfuncout);
        vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata 
            = __Vfunc_pmem_readv__7__Vfuncout;
        if ((0x200U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl)) {
            if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl 
                          >> 8U)))) {
                if ((0x80U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl)) {
                    if ((0U == (3U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr))) {
                        vlSelf->ysyx_25030085_top__DOT__mem__DOT__ReadData 
                            = (0xffffU & vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata);
                    } else if ((2U == (3U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr))) {
                        vlSelf->ysyx_25030085_top__DOT__mem__DOT__ReadData 
                            = (vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata 
                               >> 0x10U);
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__mem__DOT__ReadData 
                        = ((2U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr)
                            ? ((1U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr)
                                ? (vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata 
                                   >> 0x18U) : (0xffU 
                                                & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata 
                                                   >> 0x10U)))
                            : ((1U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr)
                                ? (0xffU & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata 
                                            >> 8U))
                                : (0xffU & vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata)));
                }
            }
        } else if ((0x100U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl)) {
            if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl 
                          >> 7U)))) {
                vlSelf->ysyx_25030085_top__DOT__mem__DOT__ReadData 
                    = vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata;
            }
        } else if ((0x80U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl)) {
            if ((0U == (3U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr))) {
                vlSelf->ysyx_25030085_top__DOT__mem__DOT__ReadData 
                    = (((- (IData)((1U & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata));
            } else if ((2U == (3U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr))) {
                vlSelf->ysyx_25030085_top__DOT__mem__DOT__ReadData 
                    = (((- (IData)((vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata 
                                    >> 0x1fU))) << 0x10U) 
                       | (vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata 
                          >> 0x10U));
            }
        } else {
            vlSelf->ysyx_25030085_top__DOT__mem__DOT__ReadData 
                = ((2U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr)
                    ? ((1U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr)
                        ? (((- (IData)((vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata 
                                        >> 0x1fU))) 
                            << 8U) | (vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata 
                                      >> 0x18U)) : 
                       (((- (IData)((1U & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata 
                                           >> 0x17U)))) 
                         << 8U) | (0xffU & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata 
                                            >> 0x10U))))
                    : ((1U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr)
                        ? (((- (IData)((1U & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata 
                                              >> 0xfU)))) 
                            << 8U) | (0xffU & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata 
                                               >> 8U)))
                        : (((- (IData)((1U & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelf->ysyx_25030085_top__DOT__mem__DOT__rdata))));
        }
    } else if (((vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl 
                 >> 6U) & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__mem__DOT__state)))) {
        if ((0U == (7U & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl 
                          >> 7U)))) {
            if ((2U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr)) {
                if ((1U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr)) {
                    Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr), vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_wdata, 8U);
                } else {
                    Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr), vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_wdata, 4U);
                }
            } else if ((1U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr)) {
                Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr), vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_wdata, 2U);
            } else {
                Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr), vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_wdata, 1U);
            }
        } else if ((1U == (7U & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl 
                                 >> 7U)))) {
            if ((0U == (3U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr))) {
                Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr), vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_wdata, 3U);
            } else if ((2U == (3U & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr))) {
                Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr), vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_wdata, 0xcU);
            }
        } else if ((2U == (7U & (vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl 
                                 >> 7U)))) {
            Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr), vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_wdata, 0xfU);
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl = 0U;
        vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_wdata = 0U;
        vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr = 0U;
        __Vdly__ysyx_25030085_top__DOT__mem__DOT__state = 0U;
        vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl = 0U;
        vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs1_data = 0U;
        vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data = 0U;
        vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc = 0x80000000U;
        vlSelf->ysyx_25030085_top__DOT__exu__DOT__reg_a5 = 0U;
        vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm = 0U;
        vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__state = 0U;
    } else {
        if ((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__mem__DOT__state))) {
            if (((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state)) 
                 & (IData)(vlSelf->ysyx_25030085_top__DOT__me_ex_ready))) {
                vlSelf->ysyx_25030085_top__DOT__mem__DOT__ctrl 
                    = vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl;
                vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_wdata 
                    = vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data;
                vlSelf->ysyx_25030085_top__DOT__mem__DOT__sram_addr 
                    = vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result;
                vlSelf->ysyx_25030085_top__DOT__mem__DOT__pc 
                    = vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc;
                vlSelf->ysyx_25030085_top__DOT__mem__DOT__npc 
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
                vlSelf->ysyx_25030085_top__DOT__mem__DOT__imm 
                    = vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm;
                vlSelf->ysyx_25030085_top__DOT__mem__DOT__rd 
                    = vlSelf->ysyx_25030085_top__DOT__exu__DOT__rd;
                __Vdly__ysyx_25030085_top__DOT__mem__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__mem__DOT__state))) {
            __Vdly__ysyx_25030085_top__DOT__mem__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__mem__DOT__state))) {
            if ((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))) {
                __Vdly__ysyx_25030085_top__DOT__mem__DOT__state = 0U;
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
            if ((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__mem__DOT__state))) {
                vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__state = 0U;
            }
        }
    }
    vlSelf->ysyx_25030085_top__DOT__mem__DOT__state 
        = __Vdly__ysyx_25030085_top__DOT__mem__DOT__state;
    if (__Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v0) {
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
    if (__Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__register__v31) {
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__register[__Vdlyvdim0__ysyx_25030085_top__DOT__regfile__DOT__register__v31] 
            = __Vdlyvval__ysyx_25030085_top__DOT__regfile__DOT__register__v31;
    }
    vlSelf->ysyx_25030085_top__DOT__me_ex_ready = (0U 
                                                   == (IData)(vlSelf->ysyx_25030085_top__DOT__mem__DOT__state));
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__B = (
                                                   (1U 
                                                    & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                                                    ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm
                                                    : vlSelf->ysyx_25030085_top__DOT__exu__DOT__rs2_data);
}

void Vysyx_25030085_top___024unit____Vdpiimwrap_ebreak_instruction_TOP____024unit(IData/*31:0*/ inst);
void Vysyx_25030085_top___024unit____Vdpiimwrap_invalid_inst_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ inst);

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__3(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_ebreak_instruction_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst);
    } else if (vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_invalid_inst_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc, vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst);
    }
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__5(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__5\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_readv__2__Vfuncout;
    __Vfunc_pmem_readv__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_pmem_readv__3__Vfuncout;
    __Vfunc_pmem_readv__3__Vfuncout = 0;
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst = 0U;
        vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc = 0x80000000U;
        vlSelf->__Vdly__ysyx_25030085_top__DOT__idu__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))) {
        if (((IData)(vlSelf->top_valid) & (IData)(vlSelf->top_ready))) {
            vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                = vlSelf->top_inst;
            vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc 
                = vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc;
            vlSelf->__Vdly__ysyx_25030085_top__DOT__idu__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))) {
        vlSelf->__Vdly__ysyx_25030085_top__DOT__idu__DOT__state = 2U;
    } else if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state))) {
        if ((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__exu__DOT__state))) {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__idu__DOT__state = 0U;
        }
    }
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__state 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__state;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__state 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__idu__DOT__state;
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
                                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp = 0U;
                                    } else if ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                    >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp = 1U;
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                    >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp = 2U;
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
                                                ? 5U
                                                : 4U);
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)) {
                                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst 
                                                  >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp = 2U;
                                    }
                                } else {
                                    vlSelf->ysyx_25030085_top__DOT__idu__DOT__MemOp 
                                        = ((0x1000U 
                                            & vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst)
                                            ? 1U : 0U);
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
    if (vlSelf->rst) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(0x80000000U, __Vfunc_pmem_readv__2__Vfuncout);
        vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc = 0x80000000U;
        vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst 
            = __Vfunc_pmem_readv__2__Vfuncout;
        vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_valid = 1U;
    } else if ((3U == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state))) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(vlSelf->top_pc, __Vfunc_pmem_readv__3__Vfuncout);
        vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc 
            = vlSelf->top_pc;
        vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst 
            = __Vfunc_pmem_readv__3__Vfuncout;
        vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_valid = 1U;
    } else if (vlSelf->top_ready) {
        vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_valid = 0U;
    }
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
    vlSelf->top_pc = vlSelf->ysyx_25030085_top__DOT__wbu__DOT__npc;
    vlSelf->top_ready = (0U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__state));
    vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__wbu__DOT__state;
    vlSelf->top_inst = vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst;
    vlSelf->top_valid = ((IData)(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__inst_valid) 
                         & (IData)(vlSelf->top_ready));
    vlSelf->ysyx_25030085_top__DOT__wb_me_ready = (0U 
                                                   == (IData)(vlSelf->ysyx_25030085_top__DOT__wbu__DOT__state));
}
