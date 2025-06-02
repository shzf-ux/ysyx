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
VL_ATTR_COLD void Vysyx_25030085_top___024root___dump_triggers__ico(Vysyx_25030085_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25030085_top___024root___eval_triggers__ico(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
    vlSelf->__VicoTriggered.at(1U) = vlSelf->__Vdpi_export_trigger;
    vlSelf->__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25030085_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
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
    vlSelf->__VactTriggered.at(1U) = (vlSelf->instruction 
                                      != vlSelf->__Vtrigrprev__TOP__instruction);
    vlSelf->__VactTriggered.at(2U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__rst))));
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(4U) = (((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid) 
                                       != (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__control_init__DOT__invalid)) 
                                      | ((IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__control_init__DOT__is_ebreak)));
    vlSelf->__VactTriggered.at(5U) = ((IData)(vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register)));
    vlSelf->__Vtrigrprev__TOP__instruction = vlSelf->instruction;
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
        vlSelf->__VactTriggered.at(1U) = 1U;
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

void Vysyx_25030085_top___024unit____Vdpiimwrap_ebreak_instruction_TOP____024unit(IData/*31:0*/ inst);
void Vysyx_25030085_top___024unit____Vdpiimwrap_invalid_inst_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ inst);

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__1(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_ebreak_instruction_TOP____024unit(vlSelf->instruction);
    } else if (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_invalid_inst_TOP____024unit(vlSelf->pc_out, vlSelf->instruction);
    }
}

void Vysyx_25030085_top___024unit____Vdpiimwrap_display_call_func_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ dnpc);
void Vysyx_25030085_top___024unit____Vdpiimwrap_display_ret_func_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ dnpc);
void Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_readv__Vfuncrtn);
void Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__3(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_readv__5__Vfuncout;
    __Vfunc_pmem_readv__5__Vfuncout = 0;
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
    if (((IData)(((0x80U == (0xf80U & vlSelf->instruction)) 
                  & (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump)))) 
         | (IData)(((0x80U == (0xf80U & vlSelf->instruction)) 
                    & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump)))))) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_display_call_func_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc, vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__dnpc);
    }
    if (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__is_jalr_ret) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_display_ret_func_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc, vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__dnpc);
    }
    __Vdlyvset__ysyx_25030085_top__DOT__regfile_init__DOT__register__v0 = 0U;
    __Vdlyvset__ysyx_25030085_top__DOT__regfile_init__DOT__register__v1 = 0U;
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
    if ((0U != (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))) {
        if ((0x300U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
            if ((0x305U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
                if ((0x341U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
                    if ((0x342U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
                        vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause 
                            = ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))
                                ? vlSelf->ysyx_25030085_top__DOT__Read_rs1
                                : ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))
                                    ? (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause 
                                       | vlSelf->ysyx_25030085_top__DOT__Read_rs1)
                                    : vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause));
                    }
                }
            }
        }
    }
    if (vlSelf->ysyx_25030085_top__DOT__is_ecall) {
        vlSelf->ysyx_25030085_top__DOT__mtvec = vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec;
    }
    if ((0U != (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))) {
        if ((0x300U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
            if ((0x305U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
                vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec 
                    = ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))
                        ? vlSelf->ysyx_25030085_top__DOT__Read_rs1
                        : ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))
                            ? (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec 
                               | vlSelf->ysyx_25030085_top__DOT__Read_rs1)
                            : vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec));
            }
        }
    }
    if (vlSelf->ysyx_25030085_top__DOT__is_ecall) {
        vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
            = (0x1800U | ((0xfffffff7U & vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus) 
                          | (0x80U & (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
                                      << 4U))));
    } else if (vlSelf->ysyx_25030085_top__DOT__is_mret) {
        vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
            = (0xffffe7ffU | ((8U & vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus) 
                              | (0x80U & (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
                                          << 4U))));
    }
    if ((0U != (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))) {
        if ((0x300U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
            vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
                = ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))
                    ? vlSelf->ysyx_25030085_top__DOT__Read_rs1
                    : ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))
                        ? (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus 
                           | vlSelf->ysyx_25030085_top__DOT__Read_rs1)
                        : vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus));
        }
        if ((0x300U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
            if ((0x305U != (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
                if ((0x341U == (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))) {
                    vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc 
                        = ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))
                            ? vlSelf->ysyx_25030085_top__DOT__Read_rs1
                            : ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__csr_wen))
                                ? (vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc 
                                   | vlSelf->ysyx_25030085_top__DOT__Read_rs1)
                                : vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc));
                }
            }
        }
    }
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__aligned_addr 
        = (0xfffffffcU & vlSelf->ysyx_25030085_top__DOT__Alu_Result);
    if (vlSelf->ysyx_25030085_top__DOT__is_ecall) {
        vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause 
            = vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
            [0xfU];
    }
    if (vlSelf->ysyx_25030085_top__DOT__MemRead) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__aligned_addr, __Vfunc_pmem_readv__5__Vfuncout);
        vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata 
            = __Vfunc_pmem_readv__5__Vfuncout;
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
    if (vlSelf->ysyx_25030085_top__DOT__is_ecall) {
        vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc 
            = vlSelf->pc_out;
    } else if (vlSelf->ysyx_25030085_top__DOT__is_mret) {
        vlSelf->ysyx_25030085_top__DOT__mepc = vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc;
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (((IData)(vlSelf->ysyx_25030085_top__DOT__RegWrite) 
             & (0U != (0x1fU & (vlSelf->instruction 
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
                            = (0x1fU & (vlSelf->instruction 
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
                    = (0x1fU & (vlSelf->instruction 
                                >> 7U));
            }
        }
    }
    if (__Vdlyvset__ysyx_25030085_top__DOT__regfile_init__DOT__register__v0) {
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[__Vdlyvdim0__ysyx_25030085_top__DOT__regfile_init__DOT__register__v0] 
            = __Vdlyvval__ysyx_25030085_top__DOT__regfile_init__DOT__register__v0;
    }
    if (__Vdlyvset__ysyx_25030085_top__DOT__regfile_init__DOT__register__v1) {
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[__Vdlyvdim0__ysyx_25030085_top__DOT__regfile_init__DOT__register__v1] 
            = __Vdlyvval__ysyx_25030085_top__DOT__regfile_init__DOT__register__v1;
    }
}
