// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25030085_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25030085_top___024root.h"

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_static(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_initial__TOP(Vysyx_25030085_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_initial(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_initial\n"); );
    // Body
    Vysyx_25030085_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__instruction = vlSelf->instruction;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__control_init__DOT__invalid 
        = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__control_init__DOT__is_ebreak 
        = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register = 0U;
}

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_initial__TOP(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[0U] = 0U;
    vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register = 0U;
}

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_final(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_triggers__stl(Vysyx_25030085_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030085_top___024root___dump_triggers__stl(Vysyx_25030085_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_stl(Vysyx_25030085_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_settle(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_25030085_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25030085_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/zzy/ysyx-workbench/npc/vsrc/top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_25030085_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030085_top___024root___dump_triggers__stl(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25030085_top___024root___stl_sequent__TOP__0(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI 
        = (((- (IData)((vlSelf->instruction >> 0x1fU))) 
            << 0xcU) | (vlSelf->instruction >> 0x14U));
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immS 
        = (((- (IData)((vlSelf->instruction >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->instruction 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->instruction 
                                                    >> 7U))));
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immB 
        = (((- (IData)((vlSelf->instruction >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->instruction 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->instruction 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->instruction 
                                                    >> 7U)))));
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immJ 
        = (((- (IData)((vlSelf->instruction >> 0x1fU))) 
            << 0x14U) | ((0xff000U & vlSelf->instruction) 
                         | ((0x800U & (vlSelf->instruction 
                                       >> 9U)) | (0x7feU 
                                                  & (vlSelf->instruction 
                                                     >> 0x14U)))));
    vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__is_jalr_ret 
        = (IData)(((0x8000U == (0xf8f80U & vlSelf->instruction)) 
                   & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump))));
    vlSelf->pc_out = vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc;
    vlSelf->ysyx_25030085_top__DOT__Read_rs1 = vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
        [(0x1fU & (vlSelf->instruction >> 0xfU))];
    vlSelf->ysyx_25030085_top__DOT__Read_rs2 = vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
        [(0x1fU & (vlSelf->instruction >> 0x14U))];
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
}

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_stl(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_25030085_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030085_top___024root___dump_triggers__ico(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if (vlSelf->__VicoTriggered.at(1U)) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: Internal 'ico' trigger - DPI export trigger\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030085_top___024root___dump_triggers__act(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] instruction)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] ysyx_25030085_top.control_init.invalid or [changed] ysyx_25030085_top.control_init.is_ebreak)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge ysyx_25030085_top.regfile_init.is_info_register)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030085_top___024root___dump_triggers__nba(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] instruction)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] ysyx_25030085_top.control_init.invalid or [changed] ysyx_25030085_top.control_init.is_ebreak)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge ysyx_25030085_top.regfile_init.is_info_register)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25030085_top___024root___ctor_var_reset(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->instruction = 0;
    vlSelf->pc_out = 0;
    vlSelf->ysyx_25030085_top__DOT__Alu_Result = 0;
    vlSelf->ysyx_25030085_top__DOT__Read_rs1 = 0;
    vlSelf->ysyx_25030085_top__DOT__Read_rs2 = 0;
    vlSelf->ysyx_25030085_top__DOT__ReadData = 0;
    vlSelf->ysyx_25030085_top__DOT__imm = 0;
    vlSelf->ysyx_25030085_top__DOT__MemRead = 0;
    vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0;
    vlSelf->ysyx_25030085_top__DOT__MemWrite = 0;
    vlSelf->ysyx_25030085_top__DOT__RegWrite = 0;
    vlSelf->ysyx_25030085_top__DOT__Branch = 0;
    vlSelf->ysyx_25030085_top__DOT__Jump = 0;
    vlSelf->ysyx_25030085_top__DOT__ALUSrc = 0;
    vlSelf->ysyx_25030085_top__DOT__AluOp = 0;
    vlSelf->ysyx_25030085_top__DOT__MemOp = 0;
    vlSelf->ysyx_25030085_top__DOT__csr_wen = 0;
    vlSelf->ysyx_25030085_top__DOT__is_ecall = 0;
    vlSelf->ysyx_25030085_top__DOT__is_mret = 0;
    vlSelf->ysyx_25030085_top__DOT__mtvec = 0;
    vlSelf->ysyx_25030085_top__DOT__mepc = 0;
    vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc = 0;
    vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__dnpc = 0;
    vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__is_jalr_ret = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immJ = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immS = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immB = 0;
    vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus = 0;
    vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec = 0;
    vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc = 0;
    vlSelf->ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[__Vi0] = 0;
    }
    vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register = 0;
    vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display = 0;
    vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__i = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B = 0;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata = 0;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__aligned_addr = 0;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byte = 0;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_byteu = 0;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_word = 0;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu = 0;
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc = 0;
    vlSelf->__Vtrigrprev__TOP__instruction = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__Vtrigrprev__TOP__rst = 0;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__control_init__DOT__invalid = 0;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__control_init__DOT__is_ebreak = 0;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
