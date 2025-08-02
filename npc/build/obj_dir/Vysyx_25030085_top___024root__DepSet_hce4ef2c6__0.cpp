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
    vlSelf->__VactTriggered.at(3U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((~ (IData)(vlSelf->rst)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__rst)));
    vlSelf->__VactTriggered.at(4U) = (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__idu__DOT__invalid)) 
                                      | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__idu__DOT__is_ebreak)));
    vlSelf->__VactTriggered.at(5U) = ((IData)(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register) 
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
        vlSelf->__VactTriggered.at(4U) = 1U;
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
    if ((((IData)(((0x80U == (0xf80U & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                   & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump)))) 
          | (IData)(((0x80U == (0xf80U & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                     & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump))))) 
         & (IData)(vlSelf->ysyx_25030085_top__DOT__wb_done))) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_display_call_func_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__if_id_pc, vlSelf->top_pc);
    }
    if (((IData)(((0x8000U == (0xf8f80U & vlSelf->ysyx_25030085_top__DOT__if_id_inst)) 
                  & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__Jump)))) 
         & (IData)(vlSelf->ysyx_25030085_top__DOT__wb_done))) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_display_ret_func_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__if_id_pc, vlSelf->top_pc);
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
    CData/*0:0*/ __Vfunc_ysyx_25030085_top__DOT__sram__DOT__check_address_range__5__Vfuncout;
    __Vfunc_ysyx_25030085_top__DOT__sram__DOT__check_address_range__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyx_25030085_top__DOT__sram__DOT__check_address_range__5__addr;
    __Vfunc_ysyx_25030085_top__DOT__sram__DOT__check_address_range__5__addr = 0;
    IData/*31:0*/ __Vfunc_pmem_readv__6__Vfuncout;
    __Vfunc_pmem_readv__6__Vfuncout = 0;
    CData/*0:0*/ __Vdly__ysyx_25030085_top__DOT__ifbiu__DOT__read_pending;
    __Vdly__ysyx_25030085_top__DOT__ifbiu__DOT__read_pending = 0;
    CData/*7:0*/ __Vdly__ysyx_25030085_top__DOT__ifbiu__DOT__read_cnt;
    __Vdly__ysyx_25030085_top__DOT__ifbiu__DOT__read_cnt = 0;
    CData/*0:0*/ __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__read_pending;
    __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__read_pending = 0;
    CData/*7:0*/ __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__read_cnt;
    __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__read_cnt = 0;
    CData/*0:0*/ __Vdly__ysyx_25030085_top__DOT__ls_axi4_wvalid;
    __Vdly__ysyx_25030085_top__DOT__ls_axi4_wvalid = 0;
    CData/*3:0*/ __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__strb_reg;
    __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__strb_reg = 0;
    CData/*0:0*/ __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__write_data_pending;
    __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__write_data_pending = 0;
    CData/*0:0*/ __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_process;
    __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_process = 0;
    CData/*3:0*/ __Vdly__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr;
    __Vdly__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr = 0;
    CData/*3:0*/ __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr;
    __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr = 0;
    CData/*0:0*/ __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_arready;
    __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_arready = 0;
    IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_rdata;
    __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_rdata = 0;
    CData/*0:0*/ __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_rvalid;
    __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_rvalid = 0;
    CData/*0:0*/ __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_process;
    __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_process = 0;
    CData/*3:0*/ __Vdly__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr;
    __Vdly__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr = 0;
    CData/*3:0*/ __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr;
    __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr = 0;
    // Body
    __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_arready 
        = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arready;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__biu_rdata_if 
        = vlSelf->ysyx_25030085_top__DOT__biu_rdata_if;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__if_axi4_rready 
        = vlSelf->ysyx_25030085_top__DOT__if_axi4_rready;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_rready 
        = vlSelf->ysyx_25030085_top__DOT__ls_axi4_rready;
    __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr 
        = vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr;
    __Vdly__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr 
        = vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr;
    __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr 
        = vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr;
    __Vdly__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr 
        = vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr;
    __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_rdata 
        = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rdata;
    __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_rvalid 
        = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rvalid;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_bready 
        = vlSelf->ysyx_25030085_top__DOT__ls_axi4_bready;
    __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_process 
        = vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_process;
    __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_process 
        = vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_process;
    __Vdly__ysyx_25030085_top__DOT__ifbiu__DOT__read_cnt 
        = vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_cnt;
    __Vdly__ysyx_25030085_top__DOT__ifbiu__DOT__read_pending 
        = vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_pending;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__if_axi4_arvalid 
        = vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid;
    __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__write_data_pending 
        = vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_pending;
    __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__strb_reg 
        = vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__strb_reg;
    __Vdly__ysyx_25030085_top__DOT__ls_axi4_wvalid 
        = vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid;
    __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__read_cnt 
        = vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_cnt;
    __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__read_pending 
        = vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_pending;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_arvalid 
        = vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_cnt 
        = vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_cnt;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_pending 
        = vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_addr_pending;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_awvalid 
        = vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid;
    __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_arready 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arvalid) 
                                       & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arready))));
    if (vlSelf->rst) {
        vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data = 2U;
        vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr = 1U;
        vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr = 1U;
        __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr = 0U;
        __Vdly__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr = 0U;
        __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr = 0U;
        __Vdly__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr = 0U;
        vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_addr_out = 0U;
    } else {
        vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data 
            = ((0xfeU & ((IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data) 
                         << 1U)) | (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsrw_feedback));
        vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr 
            = ((0xfeU & ((IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr) 
                         << 1U)) | (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsrr_feedback));
        vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr 
            = ((0xfeU & ((IData)(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr) 
                         << 1U)) | (IData)(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr_feedback));
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_rd_en) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_empty)))) {
            __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr)));
        }
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_rd_en) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_empty)))) {
            __Vdly__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr)));
        }
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_rd_en) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_empty)))) {
            __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr)));
        }
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_rd_en) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_empty)))) {
            __Vdly__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr)));
            vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_addr_out 
                = vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__fifo_mem
                [(7U & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr))];
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_rdata = 0U;
        vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rresp = 0U;
    } else if (((IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arready) 
                & (IData)(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arvalid))) {
        __Vfunc_ysyx_25030085_top__DOT__sram__DOT__check_address_range__5__addr 
            = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_araddr;
        __Vfunc_ysyx_25030085_top__DOT__sram__DOT__check_address_range__5__Vfuncout 
            = ((0x80000000U <= __Vfunc_ysyx_25030085_top__DOT__sram__DOT__check_address_range__5__addr) 
               & (0x8fffffffU >= __Vfunc_ysyx_25030085_top__DOT__sram__DOT__check_address_range__5__addr));
        if (__Vfunc_ysyx_25030085_top__DOT__sram__DOT__check_address_range__5__Vfuncout) {
            Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_araddr, __Vfunc_pmem_readv__6__Vfuncout);
            __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_rdata 
                = __Vfunc_pmem_readv__6__Vfuncout;
            vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rresp = 1U;
            __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_rvalid = 1U;
        } else {
            __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_rdata = 0U;
            vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rresp = 0U;
            __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_rvalid = 1U;
        }
    } else if (vlSelf->ysyx_25030085_top__DOT__sram__DOT__R_active) {
        __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_rvalid = 0U;
    } else {
        __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_rvalid 
            = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rvalid;
        __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_rdata 
            = vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rdata;
        vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rresp = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25030085_top__DOT__uart_bvalid = 0U;
        vlSelf->ysyx_25030085_top__DOT__uart_bresp = 0U;
        __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_process = 0U;
    } else if (((IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_rd_en) 
                & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_process)))) {
        __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_process = 1U;
    } else if (VL_UNLIKELY(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_process)) {
        VL_WRITEF("%c",8,(0xffU & vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_wdata_out));
        Verilated::runFlushCallbacks();
        vlSelf->ysyx_25030085_top__DOT__uart_bresp = 1U;
        vlSelf->ysyx_25030085_top__DOT__uart_bvalid = 1U;
        __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_process = 0U;
    } else if (vlSelf->ysyx_25030085_top__DOT__uart__DOT__B_active) {
        vlSelf->ysyx_25030085_top__DOT__uart_bvalid = 0U;
    } else {
        vlSelf->ysyx_25030085_top__DOT__uart_bresp = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25030085_top__DOT__sram_bvalid = 0U;
        vlSelf->ysyx_25030085_top__DOT__sram_bresp = 0U;
        __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_process = 0U;
    } else if (((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_rd_en) 
                & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_process)))) {
        __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_process = 1U;
    } else if (vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_process) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_addr_out, (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_data_out), 
                                                                             (0xfU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_data_out 
                                                                                >> 0x20U))));
        vlSelf->ysyx_25030085_top__DOT__sram_bresp = 1U;
        vlSelf->ysyx_25030085_top__DOT__sram_bvalid = 1U;
        __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_process = 0U;
    } else if (vlSelf->ysyx_25030085_top__DOT__sram__DOT__B_active) {
        vlSelf->ysyx_25030085_top__DOT__sram_bvalid = 0U;
    } else {
        vlSelf->ysyx_25030085_top__DOT__sram_bresp = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25030085_top__DOT__if_axi4_araddr = 0U;
        vlSelf->__Vdly__ysyx_25030085_top__DOT__if_axi4_arvalid = 0U;
        vlSelf->ysyx_25030085_top__DOT__ls_axi4_wdata = 0U;
        vlSelf->ysyx_25030085_top__DOT__ls_axi4_wstrb = 0U;
        __Vdly__ysyx_25030085_top__DOT__ls_axi4_wvalid = 0U;
        vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr = 0U;
        vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_arvalid = 0U;
        vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_wdata_out = 0U;
        vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_addr_out = 0U;
        vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_data_out = 0ULL;
    } else {
        if ((((IData)(vlSelf->ysyx_25030085_top__DOT__if_req) 
              & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__if_axi4_arvalid))) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_pending)))) {
            __Vdly__ysyx_25030085_top__DOT__ifbiu__DOT__read_pending = 1U;
            __Vdly__ysyx_25030085_top__DOT__ifbiu__DOT__read_cnt = 0U;
        } else if (((IData)(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_pending) 
                    & (0U == (IData)(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_cnt)))) {
            __Vdly__ysyx_25030085_top__DOT__ifbiu__DOT__read_pending = 0U;
            __Vdly__ysyx_25030085_top__DOT__ifbiu__DOT__read_cnt = 0U;
            vlSelf->ysyx_25030085_top__DOT__if_axi4_araddr 
                = vlSelf->ysyx_25030085_top__DOT__if_addr;
            vlSelf->__Vdly__ysyx_25030085_top__DOT__if_axi4_arvalid = 1U;
        } else if (vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__AR_active) {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__if_axi4_arvalid = 0U;
        }
        if (((((IData)(vlSelf->ysyx_25030085_top__DOT__lsu_req) 
               & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                  >> 6U)) & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid))) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_pending)))) {
            __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__strb_reg 
                = vlSelf->ysyx_25030085_top__DOT__lsu_strb;
            __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__write_data_pending = 1U;
            vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_cnt = 0U;
        } else if (vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_pending) {
            __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__write_data_pending = 0U;
            vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_cnt = 0U;
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_wdata 
                = vlSelf->ysyx_25030085_top__DOT__lsu_wdata;
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_wstrb 
                = vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__strb_reg;
            __Vdly__ysyx_25030085_top__DOT__ls_axi4_wvalid = 1U;
        } else if (vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__W_active) {
            __Vdly__ysyx_25030085_top__DOT__ls_axi4_wvalid = 0U;
        }
        if ((((((IData)(vlSelf->ysyx_25030085_top__DOT__lsu_req) 
                & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__ctrl 
                   >> 5U)) & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_arvalid))) 
              & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__ls_axi4_awvalid))) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_pending)))) {
            __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__read_pending = 1U;
            __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__read_cnt = 0U;
        } else if (((IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_pending) 
                    & (0U == (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_cnt)))) {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_arvalid = 1U;
            vlSelf->ysyx_25030085_top__DOT__ls_axi4_araddr 
                = (0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__addr);
            __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__read_pending = 0U;
            __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__read_cnt = 0U;
        } else if (vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__AR_active) {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__ls_axi4_arvalid = 0U;
        }
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_rd_en) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_empty)))) {
            vlSelf->ysyx_25030085_top__DOT__uart__DOT__fifo_wdata_out 
                = vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__fifo_mem
                [(7U & (IData)(vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr))];
        }
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_rd_en) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_empty)))) {
            vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_addr_out 
                = vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__fifo_mem
                [(7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr))];
        }
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_rd_en) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_empty)))) {
            vlSelf->ysyx_25030085_top__DOT__sram__DOT__fifo_data_out 
                = vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__fifo_mem
                [(7U & (IData)(vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr))];
        }
    }
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr 
        = __Vdly__ysyx_25030085_top__DOT__uart__DOT__addr_fifo_uart__DOT__rd_ptr;
    vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rdata 
        = __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_rdata;
    vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_rvalid 
        = __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_rvalid;
    vlSelf->ysyx_25030085_top__DOT__arb_sram_axi4_arready 
        = __Vdly__ysyx_25030085_top__DOT__arb_sram_axi4_arready;
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_process 
        = __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_process;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_process 
        = __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_process;
    vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_pending 
        = __Vdly__ysyx_25030085_top__DOT__ifbiu__DOT__read_pending;
    vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__read_cnt 
        = __Vdly__ysyx_25030085_top__DOT__ifbiu__DOT__read_cnt;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__strb_reg 
        = __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__strb_reg;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__write_data_pending 
        = __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__write_data_pending;
    vlSelf->ysyx_25030085_top__DOT__ls_axi4_wvalid 
        = __Vdly__ysyx_25030085_top__DOT__ls_axi4_wvalid;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_pending 
        = __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__read_pending;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__read_cnt 
        = __Vdly__ysyx_25030085_top__DOT__lsbiu__DOT__read_cnt;
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsrw_feedback 
        = (1U & VL_REDXOR_8((0x9cU & (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_data))));
    vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsrr_feedback 
        = (1U & VL_REDXOR_8((0xb8U & (IData)(vlSelf->ysyx_25030085_top__DOT__lsbiu__DOT__lfsr_addr))));
    vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr_feedback 
        = (1U & VL_REDXOR_8((0xb8U & (IData)(vlSelf->ysyx_25030085_top__DOT__ifbiu__DOT__lfsr))));
    vlSelf->ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr 
        = __Vdly__ysyx_25030085_top__DOT__uart__DOT__data_fifo_uart__DOT__rd_ptr;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr 
        = __Vdly__ysyx_25030085_top__DOT__sram__DOT__addr_fifo__DOT__rd_ptr;
    vlSelf->ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr 
        = __Vdly__ysyx_25030085_top__DOT__sram__DOT__data_fifo__DOT__rd_ptr;
}

void Vysyx_25030085_top___024unit____Vdpiimwrap_ebreak_instruction_TOP____024unit(IData/*31:0*/ inst);
void Vysyx_25030085_top___024unit____Vdpiimwrap_invalid_inst_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ inst);

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__4(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ebreak) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_ebreak_instruction_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst);
    } else if (vlSelf->ysyx_25030085_top__DOT__idu__DOT__invalid) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_invalid_inst_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__idu__DOT__pc, vlSelf->ysyx_25030085_top__DOT__idu__DOT__inst);
    }
}
