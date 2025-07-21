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
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(2U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__rst))));
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

void Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_readv__Vfuncrtn);
void Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__1(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_readv__4__Vfuncout;
    __Vfunc_pmem_readv__4__Vfuncout = 0;
    CData/*7:0*/ __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byte;
    __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byte = 0;
    CData/*7:0*/ __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byteu;
    __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byteu = 0;
    SData/*15:0*/ __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_word;
    __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_word = 0;
    SData/*15:0*/ __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu;
    __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu = 0;
    // Body
    vlSelf->__Vdly__ysyx_25030085_top__DOT__wb_init__DOT__has_data 
        = vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__has_data;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__control_init__DOT__state 
        = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__state;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__alu_init__DOT__state 
        = vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__state;
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
                                                & (vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl 
                                                   >> 0x10U)));
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (vlSelf->ysyx_25030085_top__DOT__wb_done) {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__wb_init__DOT__has_data = 0U;
        } else if (((IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__has_data) 
                    & (IData)(vlSelf->ysyx_25030085_top__DOT__wb_me_ready))) {
            vlSelf->__Vdly__ysyx_25030085_top__DOT__wb_init__DOT__has_data = 1U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25030085_top__DOT__reg_waddr = 0U;
        vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__csr_rdata = 0U;
        vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__alu_result = 0U;
        vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__pc = 0U;
    } else {
        vlSelf->ysyx_25030085_top__DOT__reg_waddr = 
            (0x1fU & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                      >> 7U));
        if ((1U & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__has_data)))) {
            if (((IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__has_data) 
                 & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__has_data)))) {
                vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__csr_rdata 
                    = ((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))
                        ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus
                        : ((0x305U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))
                            ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mtvec
                            : ((0x341U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))
                                ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc
                                : ((0x342U == (0xfffU 
                                               & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))
                                    ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mcause
                                    : 0U))));
                vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__alu_result 
                    = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr;
                vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__pc 
                    = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__pc;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__state)) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__has_data)))) {
            vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__pc 
                = vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__imm = 0U;
    } else if ((1U & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__has_data)))) {
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__has_data) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__has_data)))) {
            vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__imm 
                = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__imm;
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__state)) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__has_data)))) {
            vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__imm 
                = vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm;
        }
        if ((1U & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__has_data)))) {
            if (((IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__has_data) 
                 & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__has_data)))) {
                vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl 
                    = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__mem_rdata = 0U;
    } else if ((1U & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__has_data)))) {
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__has_data) 
             & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__has_data)))) {
            vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__mem_rdata 
                = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ReadData;
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byte = 0U;
        __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byteu = 0U;
        __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_word = 0U;
        __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu = 0U;
    } else if ((0x20U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl)) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(
                                                                             (0xfffffffcU 
                                                                              & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr), __Vfunc_pmem_readv__4__Vfuncout);
        vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
            = __Vfunc_pmem_readv__4__Vfuncout;
        if ((0x200U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl)) {
            if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl 
                          >> 8U)))) {
                if ((0x80U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl)) {
                    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ReadData 
                        = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu;
                    if ((0U == (3U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr))) {
                        __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu 
                            = (0xffffU & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata);
                    } else if ((2U == (3U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr))) {
                        __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu 
                            = (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                               >> 0x10U);
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ReadData 
                        = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byteu;
                    __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byteu 
                        = (0xffU & ((2U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr)
                                     ? ((1U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr)
                                         ? (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                            >> 0x18U)
                                         : (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                            >> 0x10U))
                                     : ((1U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr)
                                         ? (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                            >> 8U) : vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata)));
                }
            }
        } else if ((0x100U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl)) {
            if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl 
                          >> 7U)))) {
                vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ReadData 
                    = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata;
            }
        } else if ((0x80U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl)) {
            vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ReadData 
                = (((- (IData)((1U & ((IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word) 
                                      >> 0xfU)))) << 0x10U) 
                   | (IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word));
            if ((0U == (3U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr))) {
                __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_word 
                    = (0xffffU & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata);
            } else if ((2U == (3U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr))) {
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
                = (0xffU & ((2U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr)
                             ? ((1U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr)
                                 ? (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                    >> 0x18U) : (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                                 >> 0x10U))
                             : ((1U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr)
                                 ? (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                    >> 8U) : vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata)));
        }
    } else if ((0x40U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl)) {
        if ((0U == (7U & (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl 
                          >> 7U)))) {
            if ((2U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr)) {
                if ((1U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr)) {
                    Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr), vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_wdata, 8U);
                } else {
                    Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr), vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_wdata, 4U);
                }
            } else if ((1U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr)) {
                Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr), vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_wdata, 2U);
            } else {
                Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr), vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_wdata, 1U);
            }
        } else if ((1U == (7U & (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl 
                                 >> 7U)))) {
            if ((0U == (3U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr))) {
                Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr), vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_wdata, 3U);
            } else if ((2U == (3U & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr))) {
                Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr), vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_wdata, 0xcU);
            }
        } else if ((2U == (7U & (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl 
                                 >> 7U)))) {
            Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr), vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_wdata, 0xfU);
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr = 0U;
        vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_wdata = 0U;
        vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl = 0U;
    } else if (((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__state)) 
                & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__has_data)))) {
        vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr 
            = vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__alu_reg;
        vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_wdata 
            = vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs2_data;
        vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl 
            = vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl;
    }
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byte 
        = __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byte;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byteu 
        = __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_byteu;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word 
        = __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_word;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu 
        = __Vdly__ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu;
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

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__3(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_readv__0__Vfuncout;
    __Vfunc_pmem_readv__0__Vfuncout = 0;
    IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc;
    __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc = 0;
    CData/*0:0*/ __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__fetch_valid;
    __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__fetch_valid = 0;
    IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__if_inst;
    __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__if_inst = 0;
    IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc;
    __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc = 0;
    IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus;
    __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus = 0;
    IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mcause;
    __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mcause = 0;
    // Body
    __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__fetch_valid 
        = vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__fetch_valid;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__pc_init__DOT__state 
        = vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__state;
    __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
        = vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst;
    __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc 
        = vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc;
    __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus 
        = vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus;
    __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mcause 
        = vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mcause;
    __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc 
        = vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc;
    if ((0x20000U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)) {
        __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus 
            = (0x1800U | ((0xffffe7f7U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus) 
                          | (0x80U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus 
                                      << 4U))));
        __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mcause 
            = vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__reg_a5;
        __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc 
            = vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc;
    } else if ((0x40000U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)) {
        __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus 
            = (((0xffffe7ffU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus) 
                | (8U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus 
                         >> 4U))) | (0xffffff7fU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus));
    }
    if ((0U != (3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                      >> 0x13U)))) {
        if ((0x300U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))) {
            if ((0x305U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))) {
                vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mtvec 
                    = ((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                     >> 0x13U))) ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data
                        : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                         >> 0x13U)))
                            ? (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mtvec 
                               | vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data)
                            : vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mtvec));
            }
            if ((0x305U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))) {
                if ((0x341U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))) {
                    if ((0x342U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))) {
                        __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mcause 
                            = ((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                             >> 0x13U)))
                                ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data
                                : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                                 >> 0x13U)))
                                    ? (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mcause 
                                       | vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data)
                                    : vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mcause));
                    }
                }
                if ((0x341U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))) {
                    __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc 
                        = ((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                         >> 0x13U)))
                            ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data
                            : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                             >> 0x13U)))
                                ? (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc 
                                   | vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data)
                                : vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc));
                }
            }
        }
        if ((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm))) {
            __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus 
                = ((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                 >> 0x13U))) ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data
                    : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                                     >> 0x13U))) ? 
                       (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus 
                        | vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data)
                        : vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus));
        }
    }
    if (VL_UNLIKELY(vlSelf->rst)) {
        VL_WRITEF("RESET: initializing PC\n");
        vlSelf->__Vdly__ysyx_25030085_top__DOT__pc_init__DOT__state = 0U;
        __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc = 0x80000000U;
        __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__fetch_valid = 0U;
        vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__next_pc_reg = 0U;
    } else if (VL_UNLIKELY((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__state)))) {
        VL_WRITEF("IDLE: fetching PC=0x%08x\n",32,vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc);
        Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc, __Vfunc_pmem_readv__0__Vfuncout);
        vlSelf->__Vdly__ysyx_25030085_top__DOT__pc_init__DOT__state = 1U;
        __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__fetch_valid = 1U;
        __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
            = __Vfunc_pmem_readv__0__Vfuncout;
    } else if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__state))) {
        if (VL_UNLIKELY(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__fetch_valid)) {
            VL_WRITEF("FETCHED: inst=0x%08x at PC=0x%08x\n",
                      32,vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst,
                      32,vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc);
            vlSelf->__Vdly__ysyx_25030085_top__DOT__pc_init__DOT__state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__state))) {
        if (VL_UNLIKELY((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__state)))) {
            VL_WRITEF("OUTPUT: sending PC=0x%08x, inst=0x%08x\n",
                      32,vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc,
                      32,vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst);
            vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__next_pc_reg 
                = vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc_reg;
            vlSelf->__Vdly__ysyx_25030085_top__DOT__pc_init__DOT__state = 0U;
            if (VL_UNLIKELY(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__has_data)) {
                VL_WRITEF("WB_DONE: updating PC to 0x%08x\n",
                          32,vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc_reg);
                __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc 
                    = vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc_reg;
            }
        }
    }
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus 
        = __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mcause 
        = __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mcause;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc 
        = __Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc;
    vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__fetch_valid 
        = __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__fetch_valid;
    vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc 
        = __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc;
    vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
        = __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__if_inst;
}
