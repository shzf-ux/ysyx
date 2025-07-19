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
void Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_readv__Vfuncrtn);
void Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__1(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_readv__7__Vfuncout;
    __Vfunc_pmem_readv__7__Vfuncout = 0;
    IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc;
    __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc = 0;
    IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus;
    __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus = 0;
    IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause;
    __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause = 0;
    IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec;
    __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_25030085_top__DOT__regfile_init__DOT__register__v0;
    __Vdlyvdim0__ysyx_25030085_top__DOT__regfile_init__DOT__register__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25030085_top__DOT__regfile_init__DOT__register__v0;
    __Vdlyvval__ysyx_25030085_top__DOT__regfile_init__DOT__register__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25030085_top__DOT__regfile_init__DOT__register__v0;
    __Vdlyvset__ysyx_25030085_top__DOT__regfile_init__DOT__register__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_25030085_top__DOT__regfile_init__DOT__register__v1;
    __Vdlyvdim0__ysyx_25030085_top__DOT__regfile_init__DOT__register__v1 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25030085_top__DOT__regfile_init__DOT__register__v1;
    __Vdlyvval__ysyx_25030085_top__DOT__regfile_init__DOT__register__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25030085_top__DOT__regfile_init__DOT__register__v1;
    __Vdlyvset__ysyx_25030085_top__DOT__regfile_init__DOT__register__v1 = 0;
    // Body
    __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec 
        = vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec;
    __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause 
        = vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause;
    __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
        = vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus;
    __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc 
        = vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc;
    __Vdlyvset__ysyx_25030085_top__DOT__regfile_init__DOT__register__v0 = 0U;
    __Vdlyvset__ysyx_25030085_top__DOT__regfile_init__DOT__register__v1 = 0U;
    if (((IData)(((0x80U == (0xf80U & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst)) 
                  & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump)))) 
         | (IData)(((0x80U == (0xf80U & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst)) 
                    & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump)))))) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_display_call_func_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc, vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__next_pc);
    }
    if ((IData)(((0x8000U == (0xf8f80U & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst)) 
                 & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump))))) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_display_ret_func_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc, vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__next_pc);
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__i = 0x20U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[1U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[2U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[3U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[4U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[5U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[6U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[7U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[8U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[9U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0xaU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0xbU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0xcU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0xdU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0xeU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0xfU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0x10U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0x11U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0x12U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0x13U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0x14U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0x15U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0x16U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0x17U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0x18U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0x19U] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0x1aU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0x1bU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0x1cU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0x1dU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0x1eU] = 0U;
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0x1fU] = 0U;
    }
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__aligned_addr 
        = (0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__Alu_Result);
    if (vlSelf->ysyx_25030085_top__DOT__MemRead) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__aligned_addr, __Vfunc_pmem_readv__7__Vfuncout);
        vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
            = __Vfunc_pmem_readv__7__Vfuncout;
        if ((4U & (IData)(vlSelf->ysyx_25030085_top__DOT__MemOp))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_25030085_top__DOT__MemOp) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_25030085_top__DOT__MemOp))) {
                    if ((0U == (3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result))) {
                        vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu 
                            = (0xffffU & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata);
                    } else if ((2U == (3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result))) {
                        vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu 
                            = (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                               >> 0x10U);
                    }
                    vlSelf->ysyx_25030085_top__DOT__ReadData 
                        = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu;
                } else {
                    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byteu 
                        = (0xffU & ((2U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                                     ? ((1U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                                         ? (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                            >> 0x18U)
                                         : (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                            >> 0x10U))
                                     : ((1U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                                         ? (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                            >> 8U) : vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata)));
                    vlSelf->ysyx_25030085_top__DOT__ReadData 
                        = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byteu;
                }
            }
        } else if ((2U & (IData)(vlSelf->ysyx_25030085_top__DOT__MemOp))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__MemOp)))) {
                vlSelf->ysyx_25030085_top__DOT__ReadData 
                    = vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_25030085_top__DOT__MemOp))) {
            if ((0U == (3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result))) {
                vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word 
                    = (0xffffU & vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata);
            } else if ((2U == (3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result))) {
                vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word 
                    = (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                       >> 0x10U);
            }
            vlSelf->ysyx_25030085_top__DOT__ReadData 
                = (((- (IData)((1U & ((IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word) 
                                      >> 0xfU)))) << 0x10U) 
                   | (IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word));
        } else {
            vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byte 
                = (0xffU & ((2U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                             ? ((1U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                                 ? (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                    >> 0x18U) : (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                                 >> 0x10U))
                             : ((1U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                                 ? (vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
                                    >> 8U) : vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata)));
            vlSelf->ysyx_25030085_top__DOT__ReadData 
                = (((- (IData)((1U & ((IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byte) 
                                      >> 7U)))) << 8U) 
                   | (IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byte));
        }
    } else if (vlSelf->ysyx_25030085_top__DOT__MemWrite) {
        if ((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__MemOp))) {
            if ((2U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)) {
                if ((1U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)) {
                    Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__aligned_addr, vlSelf->ysyx_25030085_top__DOT__Read_rs2, 8U);
                } else {
                    Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__aligned_addr, vlSelf->ysyx_25030085_top__DOT__Read_rs2, 4U);
                }
            } else if ((1U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)) {
                Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__aligned_addr, vlSelf->ysyx_25030085_top__DOT__Read_rs2, 2U);
            } else {
                Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__aligned_addr, vlSelf->ysyx_25030085_top__DOT__Read_rs2, 1U);
            }
        } else if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__MemOp))) {
            if ((0U == (3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result))) {
                Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__aligned_addr, vlSelf->ysyx_25030085_top__DOT__Read_rs2, 3U);
            } else if ((2U == (3U & vlSelf->ysyx_25030085_top__DOT__Alu_Result))) {
                Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__aligned_addr, vlSelf->ysyx_25030085_top__DOT__Read_rs2, 0xcU);
            }
        } else if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__MemOp))) {
            Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__aligned_addr, vlSelf->ysyx_25030085_top__DOT__Read_rs2, 0xfU);
        }
    }
    if ((0U != (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))) {
        if ((0x300U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
            if ((0x305U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
                __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec 
                    = ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))
                        ? vlSelf->ysyx_25030085_top__DOT__Read_rs1
                        : ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))
                            ? (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec 
                               | vlSelf->ysyx_25030085_top__DOT__Read_rs1)
                            : vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec));
            }
            if ((0x305U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
                if ((0x341U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
                    if ((0x342U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
                        __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause 
                            = ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))
                                ? vlSelf->ysyx_25030085_top__DOT__Read_rs1
                                : ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))
                                    ? (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause 
                                       | vlSelf->ysyx_25030085_top__DOT__Read_rs1)
                                    : vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause));
                    }
                }
                if ((0x341U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
                    __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc 
                        = ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))
                            ? vlSelf->ysyx_25030085_top__DOT__Read_rs1
                            : ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))
                                ? (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc 
                                   | vlSelf->ysyx_25030085_top__DOT__Read_rs1)
                                : vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc));
                }
            }
        }
        if ((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
            __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
                = ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))
                    ? vlSelf->ysyx_25030085_top__DOT__Read_rs1
                    : ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))
                        ? (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
                           | vlSelf->ysyx_25030085_top__DOT__Read_rs1)
                        : vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus));
        }
    }
    if (VL_UNLIKELY(vlSelf->ysyx_25030085_top__DOT__is_ecall)) {
        VL_WRITEF("ecall a5:%08x\n",32,vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                  [0xfU]);
        __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
            = (0x1800U | ((0xffffe7f7U & vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus) 
                          | (0x80U & (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
                                      << 4U))));
        VL_WRITEF("mtvec :%08x\n",32,vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec);
        __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc 
            = vlSelf->pc_out;
        __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause 
            = vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
            [0xfU];
    } else if (vlSelf->ysyx_25030085_top__DOT__is_mret) {
        __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
            = (((0xffffe7ffU & vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus) 
                | (8U & (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
                         >> 4U))) | (0xffffff7fU & vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus));
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__RegWrite) 
             & (0U != (0x1fU & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                >> 7U))))) {
            if ((4U & (IData)(vlSelf->ysyx_25030085_top__DOT__MemtoReg))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_25030085_top__DOT__MemtoReg) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__MemtoReg)))) {
                        __Vdlyvval__ysyx_25030085_top__DOT__regfile_init__DOT__register__v0 
                            = ((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))
                                ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus
                                : ((0x305U == (0xfffU 
                                               & vlSelf->ysyx_25030085_top__DOT__imm))
                                    ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec
                                    : ((0x341U == (0xfffU 
                                                   & vlSelf->ysyx_25030085_top__DOT__imm))
                                        ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->ysyx_25030085_top__DOT__imm))
                                            ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause
                                            : 0U))));
                        __Vdlyvset__ysyx_25030085_top__DOT__regfile_init__DOT__register__v0 = 1U;
                        __Vdlyvdim0__ysyx_25030085_top__DOT__regfile_init__DOT__register__v0 
                            = (0x1fU & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                        >> 7U));
                    }
                }
            } else {
                __Vdlyvval__ysyx_25030085_top__DOT__regfile_init__DOT__register__v1 
                    = ((2U & (IData)(vlSelf->ysyx_25030085_top__DOT__MemtoReg))
                        ? ((1U & (IData)(vlSelf->ysyx_25030085_top__DOT__MemtoReg))
                            ? vlSelf->ysyx_25030085_top__DOT__imm
                            : ((IData)(4U) + vlSelf->pc_out))
                        : ((1U & (IData)(vlSelf->ysyx_25030085_top__DOT__MemtoReg))
                            ? vlSelf->ysyx_25030085_top__DOT__ReadData
                            : vlSelf->ysyx_25030085_top__DOT__Alu_Result));
                __Vdlyvset__ysyx_25030085_top__DOT__regfile_init__DOT__register__v1 = 1U;
                __Vdlyvdim0__ysyx_25030085_top__DOT__regfile_init__DOT__register__v1 
                    = (0x1fU & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                >> 7U));
            }
        }
    }
    vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause 
        = __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause;
    vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
        = __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus;
    vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc 
        = __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc;
    vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec 
        = __Vdly__ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec;
    if (__Vdlyvset__ysyx_25030085_top__DOT__regfile_init__DOT__register__v0) {
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[__Vdlyvdim0__ysyx_25030085_top__DOT__regfile_init__DOT__register__v0] 
            = __Vdlyvval__ysyx_25030085_top__DOT__regfile_init__DOT__register__v0;
    }
    if (__Vdlyvset__ysyx_25030085_top__DOT__regfile_init__DOT__register__v1) {
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[__Vdlyvdim0__ysyx_25030085_top__DOT__regfile_init__DOT__register__v1] 
            = __Vdlyvval__ysyx_25030085_top__DOT__regfile_init__DOT__register__v1;
    }
}

void Vysyx_25030085_top___024unit____Vdpiimwrap_ebreak_instruction_TOP____024unit(IData/*31:0*/ inst);
void Vysyx_25030085_top___024unit____Vdpiimwrap_invalid_inst_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ inst);

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__2(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_ebreak_instruction_TOP____024unit(vlSelf->inst);
    } else if (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_invalid_inst_TOP____024unit(vlSelf->pc_out, vlSelf->inst);
    }
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__3(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_readv__0__Vfuncout;
    __Vfunc_pmem_readv__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_pmem_readv__1__Vfuncout;
    __Vfunc_pmem_readv__1__Vfuncout = 0;
    // Body
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
    vlSelf->pc_out = vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI 
        = (((- (IData)((vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                >> 0x14U));
    vlSelf->inst = vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst;
    vlSelf->ysyx_25030085_top__DOT__MemWrite = 0U;
    vlSelf->ysyx_25030085_top__DOT__RegWrite = 0U;
    vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
    vlSelf->ysyx_25030085_top__DOT__MemOp = 2U;
    vlSelf->ysyx_25030085_top__DOT__MemRead = 0U;
    vlSelf->ysyx_25030085_top__DOT__csr_wen = 0U;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 0U;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak = 0U;
    vlSelf->ysyx_25030085_top__DOT__Jump = 0U;
    vlSelf->ysyx_25030085_top__DOT__is_ecall = 0U;
    vlSelf->ysyx_25030085_top__DOT__is_mret = 0U;
    vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
    vlSelf->ysyx_25030085_top__DOT__ALUSrc = 0U;
    vlSelf->ysyx_25030085_top__DOT__imm = 0U;
    if ((0x80000000U <= vlSelf->pc_out)) {
        if ((1U & (~ (vlSelf->inst >> 6U)))) {
            if ((0x20U & vlSelf->inst)) {
                if ((1U & (~ (vlSelf->inst >> 4U)))) {
                    if ((1U & (~ (vlSelf->inst >> 3U)))) {
                        if ((1U & (~ (vlSelf->inst 
                                      >> 2U)))) {
                            if ((2U & vlSelf->inst)) {
                                if ((1U & vlSelf->inst)) {
                                    vlSelf->ysyx_25030085_top__DOT__MemWrite = 1U;
                                    if ((0U == (7U 
                                                & (vlSelf->inst 
                                                   >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__MemOp = 0U;
                                    } else if ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__MemOp = 1U;
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__MemOp = 2U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->inst >> 4U)))) {
                if ((1U & (~ (vlSelf->inst >> 3U)))) {
                    if ((1U & (~ (vlSelf->inst >> 2U)))) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                if ((0x4000U & vlSelf->inst)) {
                                    if ((1U & (~ (vlSelf->inst 
                                                  >> 0xdU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__MemOp 
                                            = ((0x1000U 
                                                & vlSelf->inst)
                                                ? 5U
                                                : 4U);
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->inst)) {
                                    if ((1U & (~ (vlSelf->inst 
                                                  >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__MemOp = 2U;
                                    }
                                } else {
                                    vlSelf->ysyx_25030085_top__DOT__MemOp 
                                        = ((0x1000U 
                                            & vlSelf->inst)
                                            ? 1U : 0U);
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->inst >> 5U)))) {
                if ((1U & (~ (vlSelf->inst >> 4U)))) {
                    if ((1U & (~ (vlSelf->inst >> 3U)))) {
                        if ((1U & (~ (vlSelf->inst 
                                      >> 2U)))) {
                            if ((2U & vlSelf->inst)) {
                                if ((1U & vlSelf->inst)) {
                                    vlSelf->ysyx_25030085_top__DOT__MemRead = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x40U & vlSelf->inst)) {
            if ((0x20U & vlSelf->inst)) {
                if ((0x10U & vlSelf->inst)) {
                    if ((1U & (~ (vlSelf->inst >> 3U)))) {
                        if ((1U & (~ (vlSelf->inst 
                                      >> 2U)))) {
                            if ((2U & vlSelf->inst)) {
                                if ((1U & vlSelf->inst)) {
                                    if ((0U != (7U 
                                                & (vlSelf->inst 
                                                   >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__RegWrite = 1U;
                                        vlSelf->ysyx_25030085_top__DOT__MemtoReg = 4U;
                                        if ((1U == 
                                             (7U & 
                                              (vlSelf->inst 
                                               >> 0xcU)))) {
                                            vlSelf->ysyx_25030085_top__DOT__csr_wen = 1U;
                                        } else if (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU)))) {
                                            vlSelf->ysyx_25030085_top__DOT__csr_wen = 2U;
                                        }
                                    } else {
                                        vlSelf->ysyx_25030085_top__DOT__RegWrite = 0U;
                                        vlSelf->ysyx_25030085_top__DOT__MemtoReg = 4U;
                                    }
                                    if ((0U == (7U 
                                                & (vlSelf->inst 
                                                   >> 0xcU)))) {
                                        if ((1U == 
                                             (vlSelf->inst 
                                              >> 0x14U))) {
                                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak = 1U;
                                        }
                                        if ((1U != 
                                             (vlSelf->inst 
                                              >> 0x14U))) {
                                            if ((0U 
                                                 == 
                                                 (vlSelf->inst 
                                                  >> 0x14U))) {
                                                vlSelf->ysyx_25030085_top__DOT__is_ecall = 1U;
                                            }
                                            if ((0U 
                                                 != 
                                                 (vlSelf->inst 
                                                  >> 0x14U))) {
                                                if (
                                                    (0x302U 
                                                     == 
                                                     (vlSelf->inst 
                                                      >> 0x14U))) {
                                                    vlSelf->ysyx_25030085_top__DOT__is_mret = 1U;
                                                }
                                            }
                                        }
                                    }
                                    vlSelf->ysyx_25030085_top__DOT__imm 
                                        = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI;
                                }
                            }
                        }
                    }
                    if ((8U & vlSelf->inst)) {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    } else if ((4U & vlSelf->inst)) {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    } else if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            if ((0U == (7U & (vlSelf->inst 
                                              >> 0xcU)))) {
                                if ((1U != (vlSelf->inst 
                                            >> 0x14U))) {
                                    if ((0U != (vlSelf->inst 
                                                >> 0x14U))) {
                                        if ((0x302U 
                                             != (vlSelf->inst 
                                                 >> 0x14U))) {
                                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                                        }
                                    }
                                }
                            } else if ((1U != (7U & 
                                               (vlSelf->inst 
                                                >> 0xcU)))) {
                                if ((2U != (7U & (vlSelf->inst 
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
                } else if ((8U & vlSelf->inst)) {
                    if ((4U & vlSelf->inst)) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                vlSelf->ysyx_25030085_top__DOT__RegWrite = 1U;
                                vlSelf->ysyx_25030085_top__DOT__MemtoReg = 2U;
                                vlSelf->ysyx_25030085_top__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                    >> 0x1fU))) 
                                        << 0x14U) | 
                                       ((0xff000U & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst) 
                                        | ((0x800U 
                                            & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                 >> 0x14U)))));
                            }
                            if ((1U & (~ vlSelf->inst))) {
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                            }
                        } else {
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else if ((4U & vlSelf->inst)) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            vlSelf->ysyx_25030085_top__DOT__RegWrite = 1U;
                            vlSelf->ysyx_25030085_top__DOT__MemtoReg = 2U;
                            vlSelf->ysyx_25030085_top__DOT__imm 
                                = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI;
                        }
                        if ((1U & (~ vlSelf->inst))) {
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        if ((1U & (~ (vlSelf->inst 
                                      >> 0xeU)))) {
                            if ((0x2000U & vlSelf->inst)) {
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                            }
                        }
                        vlSelf->ysyx_25030085_top__DOT__imm 
                            = (((- (IData)((vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                     >> 7U)))));
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                }
                if ((1U & (~ (vlSelf->inst >> 4U)))) {
                    if ((8U & vlSelf->inst)) {
                        if ((4U & vlSelf->inst)) {
                            if ((2U & vlSelf->inst)) {
                                if ((1U & vlSelf->inst)) {
                                    vlSelf->ysyx_25030085_top__DOT__Jump = 1U;
                                    vlSelf->ysyx_25030085_top__DOT__ALUSrc = 1U;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->inst)) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                vlSelf->ysyx_25030085_top__DOT__Jump = 2U;
                                vlSelf->ysyx_25030085_top__DOT__ALUSrc = 1U;
                            }
                        }
                    } else if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            vlSelf->ysyx_25030085_top__DOT__ALUSrc = 1U;
                        }
                    }
                    if ((1U & (~ (vlSelf->inst >> 3U)))) {
                        if ((1U & (~ (vlSelf->inst 
                                      >> 2U)))) {
                            if ((2U & vlSelf->inst)) {
                                if ((1U & vlSelf->inst)) {
                                    vlSelf->ysyx_25030085_top__DOT__AluOp = 9U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
            }
        } else if ((0x20U & vlSelf->inst)) {
            if ((0x10U & vlSelf->inst)) {
                if ((1U & (~ (vlSelf->inst >> 3U)))) {
                    if ((4U & vlSelf->inst)) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                vlSelf->ysyx_25030085_top__DOT__RegWrite = 1U;
                                vlSelf->ysyx_25030085_top__DOT__MemtoReg = 3U;
                                vlSelf->ysyx_25030085_top__DOT__ALUSrc = 1U;
                                vlSelf->ysyx_25030085_top__DOT__imm 
                                    = (0xfffff000U 
                                       & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst);
                            }
                        }
                    } else if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            vlSelf->ysyx_25030085_top__DOT__RegWrite = 1U;
                        }
                    }
                    if ((1U & (~ (vlSelf->inst >> 2U)))) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                vlSelf->ysyx_25030085_top__DOT__AluOp 
                                    = ((0x4000U & vlSelf->inst)
                                        ? ((0x2000U 
                                            & vlSelf->inst)
                                            ? ((0x1000U 
                                                & vlSelf->inst)
                                                ? 8U
                                                : 7U)
                                            : ((0x1000U 
                                                & vlSelf->inst)
                                                ? (
                                                   (0x20U 
                                                    == 
                                                    (vlSelf->inst 
                                                     >> 0x19U))
                                                    ? 5U
                                                    : 6U)
                                                : 4U))
                                        : ((0x2000U 
                                            & vlSelf->inst)
                                            ? ((0x1000U 
                                                & vlSelf->inst)
                                                ? 3U
                                                : 2U)
                                            : ((0x1000U 
                                                & vlSelf->inst)
                                                ? 1U
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (vlSelf->inst 
                                                     >> 0x19U))
                                                    ? 0xaU
                                                    : 0U))));
                            }
                        }
                    }
                }
                if ((8U & vlSelf->inst)) {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                } else if ((4U & vlSelf->inst)) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & (~ vlSelf->inst))) {
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & (~ vlSelf->inst))) {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                }
            } else {
                if ((8U & vlSelf->inst)) {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                } else if ((4U & vlSelf->inst)) {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        if ((0U != (7U & (vlSelf->inst 
                                          >> 0xcU)))) {
                            if ((1U != (7U & (vlSelf->inst 
                                              >> 0xcU)))) {
                                if ((2U != (7U & (vlSelf->inst 
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
                if ((1U & (~ (vlSelf->inst >> 3U)))) {
                    if ((1U & (~ (vlSelf->inst >> 2U)))) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                vlSelf->ysyx_25030085_top__DOT__ALUSrc = 1U;
                                vlSelf->ysyx_25030085_top__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0xfe0U & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                                            >> 7U))));
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlSelf->inst)) {
                if ((1U & (~ (vlSelf->inst >> 3U)))) {
                    if ((4U & vlSelf->inst)) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                vlSelf->ysyx_25030085_top__DOT__RegWrite = 1U;
                                vlSelf->ysyx_25030085_top__DOT__AluOp = 9U;
                                vlSelf->ysyx_25030085_top__DOT__ALUSrc = 1U;
                                vlSelf->ysyx_25030085_top__DOT__imm 
                                    = (0xfffff000U 
                                       & vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst);
                            }
                        }
                    } else if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            vlSelf->ysyx_25030085_top__DOT__RegWrite = 1U;
                            vlSelf->ysyx_25030085_top__DOT__AluOp 
                                = ((0x4000U & vlSelf->inst)
                                    ? ((0x2000U & vlSelf->inst)
                                        ? ((0x1000U 
                                            & vlSelf->inst)
                                            ? 8U : 7U)
                                        : ((0x1000U 
                                            & vlSelf->inst)
                                            ? ((0x20U 
                                                == 
                                                (vlSelf->inst 
                                                 >> 0x19U))
                                                ? 5U
                                                : 6U)
                                            : 4U)) : 
                                   ((0x2000U & vlSelf->inst)
                                     ? ((0x1000U & vlSelf->inst)
                                         ? 3U : 2U)
                                     : ((0x1000U & vlSelf->inst)
                                         ? 1U : 0U)));
                            vlSelf->ysyx_25030085_top__DOT__ALUSrc = 1U;
                            vlSelf->ysyx_25030085_top__DOT__imm 
                                = (((1U == (7U & (vlSelf->inst 
                                                  >> 0xcU))) 
                                    | (5U == (7U & 
                                              (vlSelf->inst 
                                               >> 0xcU))))
                                    ? (0x1fU & (vlSelf->inst 
                                                >> 0x14U))
                                    : vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI);
                        }
                    }
                }
                if ((8U & vlSelf->inst)) {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                } else if ((4U & vlSelf->inst)) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & (~ vlSelf->inst))) {
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & (~ vlSelf->inst))) {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                }
            } else {
                if ((1U & (~ (vlSelf->inst >> 3U)))) {
                    if ((1U & (~ (vlSelf->inst >> 2U)))) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                vlSelf->ysyx_25030085_top__DOT__RegWrite = 1U;
                                vlSelf->ysyx_25030085_top__DOT__ALUSrc = 1U;
                                vlSelf->ysyx_25030085_top__DOT__imm 
                                    = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI;
                            }
                        }
                    }
                }
                if ((8U & vlSelf->inst)) {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                } else if ((4U & vlSelf->inst)) {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        if ((0x4000U & vlSelf->inst)) {
                            if ((0x2000U & vlSelf->inst)) {
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                            }
                        } else if ((0x2000U & vlSelf->inst)) {
                            if ((0x1000U & vlSelf->inst)) {
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
            if ((1U & (~ (vlSelf->inst >> 4U)))) {
                if ((1U & (~ (vlSelf->inst >> 3U)))) {
                    if ((1U & (~ (vlSelf->inst >> 2U)))) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                vlSelf->ysyx_25030085_top__DOT__MemtoReg = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
}
