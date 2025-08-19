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

void Vysyx_25030085_top___024unit____Vdpiimwrap_ebreak_instruction_TOP____024unit(IData/*31:0*/ inst);

VL_INLINE_OPT void Vysyx_25030085_top___024root___ico_sequent__TOP__0(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    if ((IData)((0x100073U == (0xfff0707fU & vlSelf->instruction)))) {
        Vysyx_25030085_top___024unit____Vdpiimwrap_ebreak_instruction_TOP____024unit(vlSelf->instruction);
    }
    vlSelf->ysyx_25030085_top__DOT__Read_rs2 = vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
        [(0x1fU & (vlSelf->instruction >> 0x14U))];
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->instruction)));
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sb 
        = (IData)((0x23U == (0x707fU & vlSelf->instruction)));
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sw 
        = (IData)((0x2023U == (0x707fU & vlSelf->instruction)));
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_jalr 
        = (IData)((0x67U == (0x707fU & vlSelf->instruction)));
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lw 
        = (IData)((0x2003U == (0x707fU & vlSelf->instruction)));
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelf->instruction)));
    vlSelf->ysyx_25030085_top__DOT__MemWrite = ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sw) 
                                                | (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sb));
    vlSelf->ysyx_25030085_top__DOT__MemOp = (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lbu) 
                                              << 1U) 
                                             | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lw) 
                                                | (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sw)));
    vlSelf->ysyx_25030085_top__DOT__MemRead = ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lw) 
                                               | (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lbu));
    vlSelf->ysyx_25030085_top__DOT__idu__DOT____VdfgTmp_h41f0f4ef__0 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lw) 
           | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lbu) 
              | (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_jalr)));
    vlSelf->ysyx_25030085_top__DOT__MemtoReg = ((((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_jalr) 
                                                  | (0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->instruction))) 
                                                 << 1U) 
                                                | ((IData)(vlSelf->ysyx_25030085_top__DOT__MemRead) 
                                                   | (0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->instruction))));
    vlSelf->ysyx_25030085_top__DOT__imm = (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_addi) 
                                            | (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT____VdfgTmp_h41f0f4ef__0))
                                            ? (((- (IData)(
                                                           (vlSelf->instruction 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->instruction 
                                                  >> 0x14U))
                                            : ((0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->instruction))
                                                ? (0xfffff000U 
                                                   & vlSelf->instruction)
                                                : ((IData)(vlSelf->ysyx_25030085_top__DOT__MemWrite)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->instruction 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->instruction 
                                                             >> 7U))))
                                                    : 0U)));
    vlSelf->ysyx_25030085_top__DOT__Alu_Result = (vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->instruction 
                                                      >> 0xfU))] 
                                                  + 
                                                  (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_addi) 
                                                    | ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->instruction)) 
                                                       | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lw) 
                                                          | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lbu) 
                                                             | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sw) 
                                                                | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sb) 
                                                                   | (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_jalr)))))))
                                                    ? vlSelf->ysyx_25030085_top__DOT__imm
                                                    : vlSelf->ysyx_25030085_top__DOT__Read_rs2));
    vlSelf->ysyx_25030085_top__DOT__next_pc = ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_jalr)
                                                ? (0xfffffffeU 
                                                   & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                                                : ((IData)(4U) 
                                                   + vlSelf->pc_out));
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
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__regfile__DOT__is_info_register)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__regfile__DOT__is_info_register 
        = vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register;
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
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [1U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [2U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [3U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [4U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [5U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [6U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [7U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [8U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [9U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0xaU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0xbU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0xcU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0xdU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0xeU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0xfU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0x10U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0x11U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0x12U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0x13U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0x14U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0x15U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0x16U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0x17U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0x18U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0x19U], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0x1aU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0x1bU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0x1cU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0x1dU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0x1eU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(
                                                                            vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
                                                                            [0x1fU], vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display);
    vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i = 0x20U;
}

void Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_readv__Vfuncrtn);
void Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__1(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_readv__2__Vfuncout;
    __Vfunc_pmem_readv__2__Vfuncout = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_25030085_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvdim0__ysyx_25030085_top__DOT__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25030085_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvval__ysyx_25030085_top__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__rf__v0;
    __Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__rf__v0 = 0U;
    if (vlSelf->rst) {
        vlSelf->ysyx_25030085_top__DOT__ReadData = 0U;
        vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rdata = 0U;
    } else {
        vlSelf->ysyx_25030085_top__DOT__ReadData = 0U;
        vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rdata = 0U;
        if (vlSelf->ysyx_25030085_top__DOT__MemRead) {
            Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__Alu_Result), __Vfunc_pmem_readv__2__Vfuncout);
            vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rdata 
                = __Vfunc_pmem_readv__2__Vfuncout;
            if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__MemOp))) {
                vlSelf->ysyx_25030085_top__DOT__ReadData 
                    = vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rdata;
            } else if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__MemOp))) {
                vlSelf->ysyx_25030085_top__DOT__ReadData 
                    = ((2U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                        ? ((1U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                            ? (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rdata 
                               >> 0x18U) : (0xffU & 
                                            (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rdata 
                                             >> 0x10U)))
                        : ((1U & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                            ? (0xffU & (vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rdata 
                                        >> 8U)) : (0xffU 
                                                   & vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rdata)));
            }
        } else if (vlSelf->ysyx_25030085_top__DOT__MemWrite) {
            if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__MemOp))) {
                Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->ysyx_25030085_top__DOT__Alu_Result), vlSelf->ysyx_25030085_top__DOT__Read_rs2, 0xfU);
            } else if ((0U == (IData)(vlSelf->ysyx_25030085_top__DOT__MemOp))) {
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
            }
        }
    }
    if (((IData)((0x33U == (0xfe00707fU & vlSelf->instruction))) 
         | ((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_addi) 
            | ((0x37U == (0x7fU & vlSelf->instruction)) 
               | (IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT____VdfgTmp_h41f0f4ef__0))))) {
        __Vdlyvval__ysyx_25030085_top__DOT__regfile__DOT__rf__v0 
            = ((0U != (0x1fU & (vlSelf->instruction 
                                >> 7U))) ? ((2U & (IData)(vlSelf->ysyx_25030085_top__DOT__MemtoReg))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_25030085_top__DOT__MemtoReg))
                                                 ? vlSelf->ysyx_25030085_top__DOT__imm
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->pc_out))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_25030085_top__DOT__MemtoReg))
                                                 ? vlSelf->ysyx_25030085_top__DOT__ReadData
                                                 : vlSelf->ysyx_25030085_top__DOT__Alu_Result))
                : 0U);
        __Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_25030085_top__DOT__regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->instruction >> 7U));
    }
    vlSelf->pc_out = ((IData)(vlSelf->rst) ? 0x80000000U
                       : vlSelf->ysyx_25030085_top__DOT__next_pc);
    if (__Vdlyvset__ysyx_25030085_top__DOT__regfile__DOT__rf__v0) {
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[__Vdlyvdim0__ysyx_25030085_top__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__ysyx_25030085_top__DOT__regfile__DOT__rf__v0;
    }
    vlSelf->ysyx_25030085_top__DOT__Read_rs2 = vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf
        [(0x1fU & (vlSelf->instruction >> 0x14U))];
}
