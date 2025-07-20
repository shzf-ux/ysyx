// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25030085_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25030085_top__Syms.h"
#include "Vysyx_25030085_top___024root.h"

void Vysyx_25030085_top___024root____Vdpiexp_ysyx_25030085_top__DOT__regfile_init__DOT__info_register_en_TOP(Vysyx_25030085_top__Syms* __restrict vlSymsp, CData/*0:0*/ enable, CData/*0:0*/ en_display) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root____Vdpiexp_ysyx_25030085_top__DOT__regfile_init__DOT__info_register_en_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register 
        = enable;
    vlSymsp->TOP.ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display 
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
    vlSelf->__VactTriggered.at(3U) = (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__control_init__DOT__invalid)) 
                                      | ((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__control_init__DOT__is_ebreak)));
    vlSelf->__VactTriggered.at(4U) = ((IData)(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__control_init__DOT__invalid 
        = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__control_init__DOT__is_ebreak 
        = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register 
        = vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register;
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
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [1U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [2U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [3U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [4U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [5U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [6U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [7U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [8U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [9U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0xaU], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0xbU], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0xcU], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0xdU], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0xeU], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0xfU], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0x10U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0x11U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0x12U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0x13U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0x14U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0x15U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0x16U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0x17U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0x18U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0x19U], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0x1aU], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0x1bU], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0x1cU], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0x1dU], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0x1eU], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                                            [0x1fU], vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display);
    vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__i = 0x20U;
}

void Vysyx_25030085_top___024unit____Vdpiimwrap_display_call_func_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ dnpc);
void Vysyx_25030085_top___024unit____Vdpiimwrap_display_ret_func_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ dnpc);

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__1(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus;
    __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus = 0;
    IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec;
    __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec = 0;
    // Body
    __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec 
        = vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec;
    if (((IData)(((0x80U == (0xf80U & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst)) 
                  & (0x4000U == (0xc000U & vlSelf->ysyx_25030085_top__DOT__ctrl)))) 
         | (IData)(((0x80U == (0xf80U & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst)) 
                    & (0x8000U == (0xc000U & vlSelf->ysyx_25030085_top__DOT__ctrl)))))) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_display_call_func_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc, vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__next_pc);
    }
    if ((IData)(((0x8000U == (0xf8f80U & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst)) 
                 & (0x8000U == (0xc000U & vlSelf->ysyx_25030085_top__DOT__ctrl))))) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_display_ret_func_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc, vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__next_pc);
    }
    __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
        = vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus;
    if ((0U != (3U & (vlSelf->ysyx_25030085_top__DOT__ctrl 
                      >> 0x13U)))) {
        if ((0x300U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
            if ((0x305U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
                __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec 
                    = ((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__ctrl 
                                     >> 0x13U))) ? vlSelf->ysyx_25030085_top__DOT__Read_rs1
                        : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__ctrl 
                                         >> 0x13U)))
                            ? (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec 
                               | vlSelf->ysyx_25030085_top__DOT__Read_rs1)
                            : vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec));
            }
            if ((0x305U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
                if ((0x341U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
                    if ((0x342U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
                        vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause 
                            = ((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__ctrl 
                                             >> 0x13U)))
                                ? vlSelf->ysyx_25030085_top__DOT__Read_rs1
                                : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__ctrl 
                                                 >> 0x13U)))
                                    ? (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause 
                                       | vlSelf->ysyx_25030085_top__DOT__Read_rs1)
                                    : vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause));
                    }
                }
                if ((0x341U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
                    vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc 
                        = ((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__ctrl 
                                         >> 0x13U)))
                            ? vlSelf->ysyx_25030085_top__DOT__Read_rs1
                            : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__ctrl 
                                             >> 0x13U)))
                                ? (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc 
                                   | vlSelf->ysyx_25030085_top__DOT__Read_rs1)
                                : vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc));
                }
            }
        }
        if ((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
            __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
                = ((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__ctrl 
                                 >> 0x13U))) ? vlSelf->ysyx_25030085_top__DOT__Read_rs1
                    : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__ctrl 
                                     >> 0x13U))) ? 
                       (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
                        | vlSelf->ysyx_25030085_top__DOT__Read_rs1)
                        : vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus));
        }
    }
    if (VL_UNLIKELY((0x20000U & vlSelf->ysyx_25030085_top__DOT__ctrl))) {
        VL_WRITEF("ecall a5:%08x\n",32,vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                  [0xfU]);
        __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
            = (0x1800U | ((0xffffe7f7U & vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus) 
                          | (0x80U & (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
                                      << 4U))));
        VL_WRITEF("mtvec :%08x\n",32,vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec);
        vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc 
            = vlSelf->pc_out;
        vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause 
            = vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
            [0xfU];
    } else if ((0x40000U & vlSelf->ysyx_25030085_top__DOT__ctrl)) {
        __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
            = (((0xffffe7ffU & vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus) 
                | (8U & (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
                         >> 4U))) | (0xffffff7fU & vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus));
    }
    vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
        = __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus;
    vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec 
        = __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec;
}

void Vysyx_25030085_top___024unit____Vdpiimwrap_ebreak_instruction_TOP____024unit(IData/*31:0*/ inst);
void Vysyx_25030085_top___024unit____Vdpiimwrap_invalid_inst_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ inst);

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__2(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_ebreak_instruction_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst);
    } else if (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_invalid_inst_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__pc, vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst);
    }
}

void Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_readv__Vfuncrtn);
void Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__3(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_readv__0__Vfuncout;
    __Vfunc_pmem_readv__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_pmem_readv__1__Vfuncout;
    __Vfunc_pmem_readv__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_pmem_readv__7__Vfuncout;
    __Vfunc_pmem_readv__7__Vfuncout = 0;
    IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__control_init__DOT__inst;
    __Vdly__ysyx_25030085_top__DOT__control_init__DOT__inst = 0;
    IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__control_init__DOT__pc;
    __Vdly__ysyx_25030085_top__DOT__control_init__DOT__pc = 0;
    CData/*1:0*/ __Vdly__ysyx_25030085_top__DOT__control_init__DOT__state;
    __Vdly__ysyx_25030085_top__DOT__control_init__DOT__state = 0;
    CData/*0:0*/ __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__has_data;
    __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__has_data = 0;
    CData/*7:0*/ __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byte;
    __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byte = 0;
    CData/*7:0*/ __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byteu;
    __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byteu = 0;
    SData/*15:0*/ __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_word;
    __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_word = 0;
    SData/*15:0*/ __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu;
    __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu = 0;
    // Body
    __Vdly__ysyx_25030085_top__DOT__control_init__DOT__pc 
        = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__pc;
    __Vdly__ysyx_25030085_top__DOT__control_init__DOT__state 
        = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__state;
    __Vdly__ysyx_25030085_top__DOT__control_init__DOT__inst 
        = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst;
    __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__has_data 
        = vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__has_data;
    __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu 
        = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu;
    __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_word 
        = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word;
    __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byteu 
        = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byteu;
    __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byte 
        = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byte;
    vlSelf->ysyx_25030085_top__DOT__reg_wen = (1U & 
                                               ((~ (IData)(vlSelf->rst)) 
                                                & (vlSelf->ysyx_25030085_top__DOT__ctrl 
                                                   >> 0x10U)));
    vlSelf->ysyx_25030085_top__DOT__reg_waddr = ((IData)(vlSelf->rst)
                                                  ? 0U
                                                  : 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                     >> 7U)));
    if (vlSelf->rst) {
        __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byte = 0U;
        __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byteu = 0U;
        __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_word = 0U;
        __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu = 0U;
    } else if ((0x20U & vlSelf->ysyx_25030085_top__DOT__ctrl)) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(
                                                                             (0xfffffffcU 
                                                                              & vlSelf->ysyx_25030085_top__DOT__Alu_Result), __Vfunc_pmem_readv__7__Vfuncout);
        vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
            = __Vfunc_pmem_readv__7__Vfuncout;
        vlSelf->ysyx_25030085_top__DOT__ReadData = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ReadData;
        if ((0x200U & vlSelf->ysyx_25030085_top__DOT__ctrl)) {
            if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__ctrl 
                          >> 8U)))) {
                if ((0x80U & vlSelf->ysyx_25030085_top__DOT__ctrl)) {
                    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ReadData 
                        = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu;
                    if ((0U == (3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result))) {
                        __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu 
                            = (0xffffU & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata);
                    } else if ((2U == (3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result))) {
                        __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu 
                            = (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                               >> 0x10U);
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ReadData 
                        = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byteu;
                    __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byteu 
                        = (0xffU & ((2U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                                     ? ((1U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                                         ? (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                            >> 0x18U)
                                         : (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                            >> 0x10U))
                                     : ((1U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                                         ? (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                            >> 8U) : vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata)));
                }
            }
        } else if ((0x100U & vlSelf->ysyx_25030085_top__DOT__ctrl)) {
            if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__ctrl 
                          >> 7U)))) {
                vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ReadData 
                    = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata;
            }
        } else if ((0x80U & vlSelf->ysyx_25030085_top__DOT__ctrl)) {
            vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ReadData 
                = (((- (IData)((1U & ((IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word) 
                                      >> 0xfU)))) << 0x10U) 
                   | (IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word));
            if ((0U == (3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result))) {
                __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_word 
                    = (0xffffU & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata);
            } else if ((2U == (3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result))) {
                __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_word 
                    = (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                       >> 0x10U);
            }
        } else {
            vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ReadData 
                = (((- (IData)((1U & ((IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byte) 
                                      >> 7U)))) << 8U) 
                   | (IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byte));
            __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byte 
                = (0xffU & ((2U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                             ? ((1U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                                 ? (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                    >> 0x18U) : (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                                 >> 0x10U))
                             : ((1U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                                 ? (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                    >> 8U) : vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata)));
        }
    } else if ((0x40U & vlSelf->ysyx_25030085_top__DOT__ctrl)) {
        if ((0U == (7U & (vlSelf->ysyx_25030085_top__DOT__ctrl 
                          >> 7U)))) {
            if ((2U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)) {
                if ((1U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)) {
                    Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__Alu_Result), vlSelf->ysyx_25030085_top__DOT__Read_rs2, 8U);
                } else {
                    Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__Alu_Result), vlSelf->ysyx_25030085_top__DOT__Read_rs2, 4U);
                }
            } else if ((1U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)) {
                Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__Alu_Result), vlSelf->ysyx_25030085_top__DOT__Read_rs2, 2U);
            } else {
                Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__Alu_Result), vlSelf->ysyx_25030085_top__DOT__Read_rs2, 1U);
            }
        } else if ((1U == (7U & (vlSelf->ysyx_25030085_top__DOT__ctrl 
                                 >> 7U)))) {
            if ((0U == (3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result))) {
                Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__Alu_Result), vlSelf->ysyx_25030085_top__DOT__Read_rs2, 3U);
            } else if ((2U == (3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result))) {
                Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__Alu_Result), vlSelf->ysyx_25030085_top__DOT__Read_rs2, 0xcU);
            }
        } else if ((2U == (7U & (vlSelf->ysyx_25030085_top__DOT__ctrl 
                                 >> 7U)))) {
            Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__Alu_Result), vlSelf->ysyx_25030085_top__DOT__Read_rs2, 0xfU);
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak = 0U;
        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 0U;
    }
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byte 
        = __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byte;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byteu 
        = __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byteu;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word 
        = __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_word;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu 
        = __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu;
    if ((0x80000000U <= vlSelf->ysyx_25030085_top__DOT__control_init__DOT__pc)) {
        if ((0x40U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
            if ((0x20U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                if ((0x10U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                    if ((0U == (7U 
                                                & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                   >> 0xcU)))) {
                                        if ((1U == 
                                             (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                              >> 0x14U))) {
                                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((8U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    } else if ((4U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    } else if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            if ((0U == (7U & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                              >> 0xcU)))) {
                                if ((1U != (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                            >> 0x14U))) {
                                    if ((0U != (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                >> 0x14U))) {
                                        if ((0x302U 
                                             != (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                 >> 0x14U))) {
                                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                                        }
                                    }
                                }
                            } else if ((1U != (7U & 
                                               (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                >> 0xcU)))) {
                                if ((2U != (7U & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                  >> 0xcU)))) {
                                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                                }
                            }
                        } else {
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else if ((8U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                    if ((4U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            if ((1U & (~ vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst))) {
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                            }
                        } else {
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else if ((4U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((1U & (~ vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst))) {
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                      >> 0xeU)))) {
                            if ((0x2000U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                            }
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                }
            } else {
                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
            }
        } else if ((0x20U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
            if ((0x10U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                if ((8U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                } else if ((4U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((1U & (~ vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst))) {
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                    if ((1U & (~ vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst))) {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                }
            } else if ((8U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
            } else if ((4U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
            } else if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                    if ((0U != (7U & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                      >> 0xcU)))) {
                        if ((1U != (7U & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                          >> 0xcU)))) {
                            if ((2U != (7U & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                              >> 0xcU)))) {
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                }
            } else {
                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
            }
        } else if ((0x10U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
            if ((8U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
            } else if ((4U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                    if ((1U & (~ vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst))) {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                }
            } else if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                if ((1U & (~ vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst))) {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                }
            } else {
                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
            }
        } else if ((8U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
        } else if ((4U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
        } else if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
            if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                if ((0x4000U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                    if ((0x2000U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else if ((0x2000U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                    if ((0x1000U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                }
            } else {
                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
            }
        } else {
            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
        }
    }
    if (vlSelf->rst) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(0x80000000U, __Vfunc_pmem_readv__0__Vfuncout);
        vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc = 0x80000000U;
        vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
            = __Vfunc_pmem_readv__0__Vfuncout;
    } else {
        Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__next_pc, __Vfunc_pmem_readv__1__Vfuncout);
        vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc 
            = vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__next_pc;
        vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
            = __Vfunc_pmem_readv__1__Vfuncout;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25030085_top__DOT__Alu_Result = 0U;
        vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl = 0U;
        vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data = 0U;
        vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs2_data = 0U;
        vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc = 0U;
        vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm = 0U;
        __Vdly__ysyx_25030085_top__DOT__control_init__DOT__inst = 0U;
        __Vdly__ysyx_25030085_top__DOT__control_init__DOT__pc = 0U;
        __Vdly__ysyx_25030085_top__DOT__control_init__DOT__state = 0U;
        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc = 0U;
        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__AluOp = 0U;
        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemRead = 0U;
        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemWrite = 0U;
        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemOp = 2U;
        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemtoReg = 0U;
        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Jump = 0U;
        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite = 0U;
        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ecall = 0U;
        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_mret = 0U;
        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__csr_wen = 0U;
        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm = 0U;
        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Branch = 0U;
    } else {
        if ((0x10U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)) {
            if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                          >> 3U)))) {
                if ((4U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                  >> 1U)))) {
                        vlSelf->ysyx_25030085_top__DOT__Alu_Result 
                            = (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                               - vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B);
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__Alu_Result 
                        = ((2U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                            ? (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc 
                               + vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                            : (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                               & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B));
                }
            }
        } else {
            vlSelf->ysyx_25030085_top__DOT__Alu_Result 
                = ((8U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                    ? ((4U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                        ? ((2U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                            ? (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                               | vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                            : ((0x1fU >= vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                                ? (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                                   >> vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                                : 0U)) : ((2U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                                           ? (((0x1fU 
                                                >= 
                                                ((IData)(0x20U) 
                                                 - vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B))
                                                ? (
                                                   (- (IData)(
                                                              (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                                                               >> 0x1fU))) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B))
                                                : 0U) 
                                              | ((0x1fU 
                                                  >= vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                                                  ? 
                                                 (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                                                  >> vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                                                  : 0U))
                                           : (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                                              ^ vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)))
                    : ((4U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                        ? ((2U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                            ? ((vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                                < vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                                ? 1U : 0U) : (((vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                                                >> 0x1fU) 
                                               != (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B 
                                                   >> 0x1fU))
                                               ? ((vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                                                   >> 0x1fU)
                                                   ? 1U
                                                   : 0U)
                                               : ((
                                                   (0x7fffffffU 
                                                    & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data) 
                                                   < 
                                                   (0x7fffffffU 
                                                    & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B))
                                                   ? 1U
                                                   : 0U)))
                        : ((2U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                            ? ((0x1fU >= vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                                ? (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                                   << vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                                : 0U) : (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                                         + vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B))));
        }
        if (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__has_data) {
            __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__has_data = 0U;
        } else if (((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__state)) 
                    & (IData)(vlSelf->ysyx_25030085_top__DOT__ex_id_ready))) {
            vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ctrl_reg;
            vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__rs1_reg;
            vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs2_data 
                = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__rs2_reg;
            vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc 
                = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__pc;
            vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm 
                = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm_reg;
            __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__has_data = 1U;
        }
        if ((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__state))) {
            if (vlSelf->ysyx_25030085_top__DOT__id_if_ready) {
                __Vdly__ysyx_25030085_top__DOT__control_init__DOT__inst 
                    = vlSelf->inst;
                __Vdly__ysyx_25030085_top__DOT__control_init__DOT__pc 
                    = vlSelf->pc_out;
                __Vdly__ysyx_25030085_top__DOT__control_init__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__state))) {
            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm_reg 
                = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm;
            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__rs1_reg 
                = vlSelf->ysyx_25030085_top__DOT__Read_rs1;
            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__rs2_reg 
                = vlSelf->ysyx_25030085_top__DOT__Read_rs2;
            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ctrl_reg 
                = (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc) 
                    << 0x14U) | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__AluOp) 
                                  << 0x10U) | (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemRead) 
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
                                                                       | (IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__csr_wen))))))))))));
            __Vdly__ysyx_25030085_top__DOT__control_init__DOT__state = 1U;
        } else if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__has_data)))) {
                __Vdly__ysyx_25030085_top__DOT__control_init__DOT__state = 0U;
            }
        }
    }
    if ((0x80000000U <= vlSelf->ysyx_25030085_top__DOT__control_init__DOT__pc)) {
        if ((0x40U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
            if ((0x20U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                              >> 4U)))) {
                    if ((8U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((4U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc = 1U;
                                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Jump = 1U;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc = 1U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Jump = 2U;
                            }
                        }
                    } else if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc = 1U;
                        }
                    }
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__AluOp = 9U;
                                    if ((0x4000U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Branch 
                                            = ((0x2000U 
                                                & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                                    ? 
                                                   (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                                    >= vlSelf->ysyx_25030085_top__DOT__Read_rs2)
                                                    : 
                                                   (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                                    < vlSelf->ysyx_25030085_top__DOT__Read_rs2))
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                                    ? 
                                                   VL_GTES_III(32, vlSelf->ysyx_25030085_top__DOT__Read_rs1, vlSelf->ysyx_25030085_top__DOT__Read_rs2)
                                                    : 
                                                   VL_LTS_III(32, vlSelf->ysyx_25030085_top__DOT__Read_rs1, vlSelf->ysyx_25030085_top__DOT__Read_rs2)));
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                    >> 0xdU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Branch 
                                            = ((0x1000U 
                                                & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                                ? (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                                   != vlSelf->ysyx_25030085_top__DOT__Read_rs2)
                                                : (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                                   == vlSelf->ysyx_25030085_top__DOT__Read_rs2));
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x10U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemtoReg = 4U;
                                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite 
                                        = (0U != (7U 
                                                  & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                     >> 0xcU)));
                                    if ((0U == (7U 
                                                & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                   >> 0xcU)))) {
                                        if ((1U != 
                                             (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                              >> 0x14U))) {
                                            if ((0U 
                                                 == 
                                                 (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                  >> 0x14U))) {
                                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ecall = 1U;
                                            }
                                            if ((0U 
                                                 != 
                                                 (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                  >> 0x14U))) {
                                                if (
                                                    (0x302U 
                                                     == 
                                                     (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                      >> 0x14U))) {
                                                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_mret = 1U;
                                                }
                                            }
                                        }
                                    }
                                    if ((0U != (7U 
                                                & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                   >> 0xcU)))) {
                                        if ((1U == 
                                             (7U & 
                                              (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                               >> 0xcU)))) {
                                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__csr_wen = 1U;
                                        } else if (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                        >> 0xcU)))) {
                                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__csr_wen = 2U;
                                        }
                                    }
                                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm 
                                        = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI;
                                }
                            }
                        }
                    }
                } else if ((8U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                    if ((4U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemtoReg = 2U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite = 1U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                    >> 0x1fU))) 
                                        << 0x14U) | 
                                       ((0xff000U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst) 
                                        | ((0x800U 
                                            & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                 >> 0x14U)))));
                            }
                        }
                    }
                } else if ((4U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                    if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemtoReg = 2U;
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite = 1U;
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm 
                                = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI;
                        }
                    }
                } else if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                    if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm 
                            = (((- (IData)((vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                     >> 7U)))));
                    }
                }
            }
        } else if ((0x20U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
            if ((0x10U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                              >> 3U)))) {
                    if ((4U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc = 1U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemtoReg = 3U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite = 1U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm 
                                    = (0xfffff000U 
                                       & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst);
                            }
                        }
                    } else if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite = 1U;
                        }
                    }
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__AluOp 
                                    = ((0x4000U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                        ? ((0x2000U 
                                            & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                            ? ((0x1000U 
                                                & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                                ? 8U
                                                : 7U)
                                            : ((0x1000U 
                                                & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                                ? (
                                                   (0x20U 
                                                    == 
                                                    (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                     >> 0x19U))
                                                    ? 5U
                                                    : 6U)
                                                : 4U))
                                        : ((0x2000U 
                                            & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                            ? ((0x1000U 
                                                & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                                ? 3U
                                                : 2U)
                                            : ((0x1000U 
                                                & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                                ? 1U
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                     >> 0x19U))
                                                    ? 0xaU
                                                    : 0U))));
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc = 1U;
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm 
                                = (((- (IData)((vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                      >> 7U))));
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                              >> 3U)))) {
                    if ((4U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc = 1U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__AluOp = 9U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite = 1U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm 
                                    = (0xfffff000U 
                                       & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst);
                            }
                        }
                    } else if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc = 1U;
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__AluOp 
                                = ((0x4000U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                    ? ((0x2000U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                        ? ((0x1000U 
                                            & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                            ? 8U : 7U)
                                        : ((0x1000U 
                                            & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                            ? ((0x20U 
                                                == 
                                                (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                 >> 0x19U))
                                                ? 5U
                                                : 6U)
                                            : 4U)) : 
                                   ((0x2000U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                     ? ((0x1000U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                         ? 3U : 2U)
                                     : ((0x1000U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                         ? 1U : 0U)));
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite = 1U;
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm 
                                = (((1U == (7U & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                  >> 0xcU))) 
                                    | (5U == (7U & 
                                              (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                               >> 0xcU))))
                                    ? (0x1fU & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                >> 0x14U))
                                    : vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI);
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc = 1U;
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite = 1U;
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm 
                                = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI;
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemtoReg = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                      >> 6U)))) {
            if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                          >> 5U)))) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemRead = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((0x20U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemWrite = 1U;
                                    if ((0U == (7U 
                                                & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                   >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemOp = 0U;
                                    } else if ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                    >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemOp = 1U;
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                    >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemOp = 2U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                 >> 4U)))) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                if ((0x4000U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                  >> 0xdU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemOp 
                                            = ((0x1000U 
                                                & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                                ? 5U
                                                : 4U);
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                  >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemOp = 2U;
                                    }
                                } else {
                                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemOp 
                                        = ((0x1000U 
                                            & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                            ? 1U : 0U);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B 
        = ((1U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
            ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm
            : vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs2_data);
    vlSelf->inst = vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__state 
        = __Vdly__ysyx_25030085_top__DOT__control_init__DOT__state;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__has_data 
        = __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__has_data;
    vlSelf->pc_out = vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc;
    vlSelf->ysyx_25030085_top__DOT__id_if_ready = (0U 
                                                   == (IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__state));
    vlSelf->ysyx_25030085_top__DOT__ex_id_ready = (1U 
                                                   & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__has_data)));
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__pc 
        = __Vdly__ysyx_25030085_top__DOT__control_init__DOT__pc;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
        = __Vdly__ysyx_25030085_top__DOT__control_init__DOT__inst;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI 
        = (((- (IData)((vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                >> 0x14U));
}
