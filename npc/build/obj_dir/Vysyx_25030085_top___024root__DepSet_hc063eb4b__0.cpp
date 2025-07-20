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
    vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__next_pc 
        = ((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__ctrl 
                         >> 0xeU))) ? (vlSelf->ysyx_25030085_top__DOT__imm 
                                       + vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc)
            : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__ctrl 
                             >> 0xeU))) ? (0xfffffffeU 
                                           & vlSelf->ysyx_25030085_top__DOT__Alu_Result)
                : ((0x2000U & vlSelf->ysyx_25030085_top__DOT__ctrl)
                    ? vlSelf->ysyx_25030085_top__DOT__Alu_Result
                    : ((0x20000U & vlSelf->ysyx_25030085_top__DOT__ctrl)
                        ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec
                        : ((0x40000U & vlSelf->ysyx_25030085_top__DOT__ctrl)
                            ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc
                            : ((IData)(4U) + vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc))))));
    vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[vlSelf->ysyx_25030085_top__DOT__reg_waddr] 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__reg_wen)
            ? ((0x1000U & vlSelf->ysyx_25030085_top__DOT__ctrl)
                ? ((0x800U & vlSelf->ysyx_25030085_top__DOT__ctrl)
                    ? 0U : ((0x400U & vlSelf->ysyx_25030085_top__DOT__ctrl)
                             ? 0U : ((0x300U == (0xfffU 
                                                 & vlSelf->ysyx_25030085_top__DOT__imm))
                                      ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus
                                      : ((0x305U == 
                                          (0xfffU & vlSelf->ysyx_25030085_top__DOT__imm))
                                          ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec
                                          : ((0x341U 
                                              == (0xfffU 
                                                  & vlSelf->ysyx_25030085_top__DOT__imm))
                                              ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc
                                              : ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->ysyx_25030085_top__DOT__imm))
                                                  ? vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause
                                                  : 0U))))))
                : ((0x800U & vlSelf->ysyx_25030085_top__DOT__ctrl)
                    ? ((0x400U & vlSelf->ysyx_25030085_top__DOT__ctrl)
                        ? vlSelf->ysyx_25030085_top__DOT__imm
                        : ((IData)(4U) + vlSelf->pc_out))
                    : ((0x400U & vlSelf->ysyx_25030085_top__DOT__ctrl)
                        ? vlSelf->ysyx_25030085_top__DOT__ReadData
                        : vlSelf->ysyx_25030085_top__DOT__Alu_Result)))
            : 0U);
    vlSelf->ysyx_25030085_top__DOT__Read_rs1 = ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                     >> 0xfU)))
                                                 ? 0U
                                                 : 
                                                vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                [(0x1fU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                     >> 0xfU))]);
    vlSelf->ysyx_25030085_top__DOT__Read_rs2 = ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                     >> 0x14U)))
                                                 ? 0U
                                                 : 
                                                vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
                                                [(0x1fU 
                                                  & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                     >> 0x14U))]);
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
