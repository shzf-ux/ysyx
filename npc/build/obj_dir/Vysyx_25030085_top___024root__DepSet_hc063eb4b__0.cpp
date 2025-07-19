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

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_comb__TOP__0(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyx_25030085_top__DOT__Read_rs1 = vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
        [(0x1fU & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                   >> 0xfU))];
    vlSelf->ysyx_25030085_top__DOT__Read_rs2 = vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
        [(0x1fU & (vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst 
                   >> 0x14U))];
    vlSelf->ysyx_25030085_top__DOT__Branch = 0U;
    if ((0x80000000U <= vlSelf->pc_out)) {
        if ((0x40U & vlSelf->inst)) {
            if ((0x20U & vlSelf->inst)) {
                if ((1U & (~ (vlSelf->inst >> 4U)))) {
                    if ((1U & (~ (vlSelf->inst >> 3U)))) {
                        if ((1U & (~ (vlSelf->inst 
                                      >> 2U)))) {
                            if ((2U & vlSelf->inst)) {
                                if ((1U & vlSelf->inst)) {
                                    if ((0x4000U & vlSelf->inst)) {
                                        vlSelf->ysyx_25030085_top__DOT__Branch 
                                            = ((0x2000U 
                                                & vlSelf->inst)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                                    >= vlSelf->ysyx_25030085_top__DOT__Read_rs2)
                                                    : 
                                                   (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                                    < vlSelf->ysyx_25030085_top__DOT__Read_rs2))
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   VL_GTES_III(32, vlSelf->ysyx_25030085_top__DOT__Read_rs1, vlSelf->ysyx_25030085_top__DOT__Read_rs2)
                                                    : 
                                                   VL_LTS_III(32, vlSelf->ysyx_25030085_top__DOT__Read_rs1, vlSelf->ysyx_25030085_top__DOT__Read_rs2)));
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->inst 
                                                    >> 0xdU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__Branch 
                                            = ((0x1000U 
                                                & vlSelf->inst)
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
            }
        }
    }
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__ALUSrc)
            ? vlSelf->ysyx_25030085_top__DOT__imm : vlSelf->ysyx_25030085_top__DOT__Read_rs2);
    vlSelf->ysyx_25030085_top__DOT__Alu_Result = 0U;
    if ((8U & (IData)(vlSelf->ysyx_25030085_top__DOT__AluOp))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_25030085_top__DOT__AluOp) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->ysyx_25030085_top__DOT__AluOp))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_25030085_top__DOT__AluOp)))) {
                    vlSelf->ysyx_25030085_top__DOT__Alu_Result 
                        = (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                           - vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B);
                }
            } else {
                vlSelf->ysyx_25030085_top__DOT__Alu_Result 
                    = ((1U & (IData)(vlSelf->ysyx_25030085_top__DOT__AluOp))
                        ? (vlSelf->pc_out + vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                        : (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                           & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B));
            }
        }
    } else {
        vlSelf->ysyx_25030085_top__DOT__Alu_Result 
            = ((4U & (IData)(vlSelf->ysyx_25030085_top__DOT__AluOp))
                ? ((2U & (IData)(vlSelf->ysyx_25030085_top__DOT__AluOp))
                    ? ((1U & (IData)(vlSelf->ysyx_25030085_top__DOT__AluOp))
                        ? (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                           | vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                        : ((0x1fU >= vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                            ? (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                               >> vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                            : 0U)) : ((1U & (IData)(vlSelf->ysyx_25030085_top__DOT__AluOp))
                                       ? (((0x1fU >= 
                                            ((IData)(0x20U) 
                                             - vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B))
                                            ? ((- (IData)(
                                                          (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                                           >> 0x1fU))) 
                                               << ((IData)(0x20U) 
                                                   - vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B))
                                            : 0U) | 
                                          ((0x1fU >= vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                                            ? (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                               >> vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                                            : 0U)) : 
                                      (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                       ^ vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)))
                : ((2U & (IData)(vlSelf->ysyx_25030085_top__DOT__AluOp))
                    ? ((1U & (IData)(vlSelf->ysyx_25030085_top__DOT__AluOp))
                        ? ((vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                            < vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                            ? 1U : 0U) : (((vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                            >> 0x1fU) 
                                           != (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B 
                                               >> 0x1fU))
                                           ? ((vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                               >> 0x1fU)
                                               ? 1U
                                               : 0U)
                                           : (((0x7fffffffU 
                                                & vlSelf->ysyx_25030085_top__DOT__Read_rs1) 
                                               < (0x7fffffffU 
                                                  & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B))
                                               ? 1U
                                               : 0U)))
                    : ((1U & (IData)(vlSelf->ysyx_25030085_top__DOT__AluOp))
                        ? ((0x1fU >= vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                            ? (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                               << vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                            : 0U) : (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                     + vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B))));
    }
    vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__next_pc 
        = ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump))
            ? (vlSelf->ysyx_25030085_top__DOT__imm 
               + vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc)
            : ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump))
                ? (0xfffffffeU & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                : ((IData)(vlSelf->ysyx_25030085_top__DOT__Branch)
                    ? vlSelf->ysyx_25030085_top__DOT__Alu_Result
                    : ((IData)(vlSelf->ysyx_25030085_top__DOT__is_ecall)
                        ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec
                        : ((IData)(vlSelf->ysyx_25030085_top__DOT__is_mret)
                            ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc
                            : ((IData)(4U) + vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc))))));
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
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vysyx_25030085_top___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
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
                    VL_FATAL_MT("/home/zzy/ysyx-workbench/npc/vsrc/top.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/zzy/ysyx-workbench/npc/vsrc/top.v", 1, "", "NBA region did not converge.");
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
