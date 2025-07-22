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

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__4(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec;
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc;
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__5(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__5\n"); );
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
        vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm_reg 
            = vlSelf->ysyx_25030085_top__DOT__idu__DOT__imm;
        vlSelf->ysyx_25030085_top__DOT__idu__DOT__rs1_reg 
            = vlSelf->ysyx_25030085_top__DOT__rs1_data;
        vlSelf->ysyx_25030085_top__DOT__idu__DOT__rs2_reg 
            = vlSelf->ysyx_25030085_top__DOT__rs2_data;
        vlSelf->ysyx_25030085_top__DOT__idu__DOT__ctrl_reg 
            = (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__csr_wen) 
                << 0x13U) | (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_mret) 
                              << 0x12U) | (((IData)(vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_ecall) 
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
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__6(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->top_valid = (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__ifu__DOT__state));
    vlSelf->top_inst = vlSelf->ysyx_25030085_top__DOT__ifu__DOT__if_inst;
    vlSelf->ysyx_25030085_top__DOT__ifu__DOT__current_pc 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__ifu__DOT__current_pc;
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_comb__TOP__0(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyx_25030085_top__DOT__exu__DOT__next_pc 
        = ((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                         >> 0xeU))) ? (vlSelf->ysyx_25030085_top__DOT__exu__DOT__imm 
                                       + vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc)
            : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl 
                             >> 0xeU))) ? (0xfffffffeU 
                                           & vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result)
                : ((0x2000U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                    ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__Alu_Result
                    : ((0x20000U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                        ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec
                        : ((0x40000U & vlSelf->ysyx_25030085_top__DOT__exu__DOT__ctrl)
                            ? vlSelf->ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc
                            : ((IData)(4U) + vlSelf->ysyx_25030085_top__DOT__exu__DOT__pc))))));
}

void Vysyx_25030085_top___024root___nba_sequent__TOP__0(Vysyx_25030085_top___024root* vlSelf);
void Vysyx_25030085_top___024root___nba_sequent__TOP__1(Vysyx_25030085_top___024root* vlSelf);
void Vysyx_25030085_top___024root___nba_sequent__TOP__2(Vysyx_25030085_top___024root* vlSelf);
void Vysyx_25030085_top___024root___nba_sequent__TOP__3(Vysyx_25030085_top___024root* vlSelf);

void Vysyx_25030085_top___024root___eval_nba(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vysyx_25030085_top___024root___nba_comb__TOP__0(vlSelf);
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
    VlTriggerVec<5> __VpreTriggered;
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
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
