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
                VL_FATAL_MT("/home/zzy/ysyx-workbench/npc/vsrc/ysyx_25030085_top.v", 1, "", "Settle region did not converge.");
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
    vlSelf->top_pc = vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__npc;
    vlSelf->top_inst = vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst;
    vlSelf->top_valid = (1U == (IData)(vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__state));
    vlSelf->top_ready = (0U == (IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__state));
    vlSelf->inst_done = (3U == (IData)(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__state));
    vlSelf->ysyx_25030085_top__DOT__wb_me_ready = (0U 
                                                   == (IData)(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__state));
    vlSelf->ysyx_25030085_top__DOT__ex_id_ready = (0U 
                                                   == (IData)(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__state));
    vlSelf->ysyx_25030085_top__DOT__me_ex_ready = (0U 
                                                   == (IData)(vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__state));
    vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__RegWrite 
        = (1U & (vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl 
                 >> 0x10U));
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__csr_wen = 0U;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemWrite = 0U;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemRead = 0U;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemOp = 0U;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak = 0U;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_mret = 0U;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ecall = 0U;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Jump = 0U;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite = 0U;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemtoReg = 0U;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc = 0U;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__AluOp = 0U;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI 
        = (((- (IData)((vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                >> 0x14U));
    vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__wb_data 
        = ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__state))
            ? ((0x1000U & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                ? ((0x800U & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                    ? 0U : ((0x400U & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                             ? 0U : vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__csr_rdata))
                : ((0x800U & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                    ? ((0x400U & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                        ? vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__imm
                        : ((IData)(4U) + vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__pc))
                    : ((0x400U & vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl)
                        ? vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__mem_rdata
                        : vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__alu_result)))
            : 0U);
    vlSelf->ysyx_25030085_top__DOT__rs1_data = ((0U 
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
    vlSelf->ysyx_25030085_top__DOT__rs2_data = ((0U 
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
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B 
        = ((1U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
            ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm
            : vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs2_data);
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Branch = 0U;
    if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__control_init__DOT__state))) {
        if ((0x40U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
            if ((0x20U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                if ((0x10U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
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
                                    if ((0U == (7U 
                                                & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                   >> 0xcU)))) {
                                        if ((1U == 
                                             (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                              >> 0x14U))) {
                                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak = 1U;
                                        }
                                        if ((1U != 
                                             (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                              >> 0x14U))) {
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
                                            if ((0U 
                                                 == 
                                                 (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                  >> 0x14U))) {
                                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ecall = 1U;
                                            }
                                        }
                                    }
                                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite 
                                        = (0U != (7U 
                                                  & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                     >> 0xcU)));
                                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemtoReg = 4U;
                                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm 
                                        = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI;
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
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite = 1U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemtoReg = 2U;
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
                        if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite = 1U;
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemtoReg = 2U;
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm 
                                = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI;
                        }
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
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                }
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                              >> 4U)))) {
                    if ((8U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((4U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Jump = 1U;
                                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc = 1U;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Jump = 2U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc = 1U;
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
                                                   (vlSelf->ysyx_25030085_top__DOT__rs1_data 
                                                    >= vlSelf->ysyx_25030085_top__DOT__rs2_data)
                                                    : 
                                                   (vlSelf->ysyx_25030085_top__DOT__rs1_data 
                                                    < vlSelf->ysyx_25030085_top__DOT__rs2_data))
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
                                                    ? 
                                                   VL_GTES_III(32, vlSelf->ysyx_25030085_top__DOT__rs1_data, vlSelf->ysyx_25030085_top__DOT__rs2_data)
                                                    : 
                                                   VL_LTS_III(32, vlSelf->ysyx_25030085_top__DOT__rs1_data, vlSelf->ysyx_25030085_top__DOT__rs2_data)));
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                    >> 0xdU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Branch 
                                            = ((0x1000U 
                                                & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)
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
                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
            }
        } else if ((0x20U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
            if ((0x10U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                              >> 3U)))) {
                    if ((4U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite = 1U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemtoReg = 3U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc = 1U;
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
            } else {
                if ((8U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
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
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc = 1U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0xfe0U & (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                            >> 7U))));
                            }
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
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite = 1U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc = 1U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__AluOp = 9U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm 
                                    = (0xfffff000U 
                                       & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst);
                            }
                        }
                    } else if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                        if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite = 1U;
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
            } else {
                if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst)) {
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite = 1U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc = 1U;
                                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm 
                                    = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI;
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
        }
    }
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__Alu_Result 
        = ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__state))
            ? ((0x10U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                ? ((8U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                    ? 0U : ((4U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                             ? ((2U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                                 ? 0U : (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                                         - vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B))
                             : ((2U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                                 ? (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc 
                                    + vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                                 : (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                                    & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B))))
                : ((8U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                    ? ((4U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                        ? ((2U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                            ? (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                               | vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)
                            : (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                               >> (0x1fU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)))
                        : ((2U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                            ? VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data, 
                                             (0x1fU 
                                              & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B))
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
                            ? (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                               << (0x1fU & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B))
                            : (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data 
                               + vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B)))))
            : 0U);
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__next_pc 
        = ((1U == (3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                         >> 0xeU))) ? (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm 
                                       + vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc)
            : ((2U == (3U & (vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl 
                             >> 0xeU))) ? (0xfffffffeU 
                                           & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__Alu_Result)
                : ((0x2000U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                    ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__Alu_Result
                    : ((0x20000U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                        ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mtvec
                        : ((0x40000U & vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl)
                            ? vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc
                            : ((IData)(4U) + vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc))))));
}

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_stl(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_25030085_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

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
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] ysyx_25030085_top.control_init.invalid or [changed] ysyx_25030085_top.control_init.is_ebreak)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge ysyx_25030085_top.regfile_init.is_info_register)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] ysyx_25030085_top.control_init.invalid or [changed] ysyx_25030085_top.control_init.is_ebreak)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge ysyx_25030085_top.regfile_init.is_info_register)\n");
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
    vlSelf->top_pc = 0;
    vlSelf->top_inst = 0;
    vlSelf->top_valid = 0;
    vlSelf->top_ready = 0;
    vlSelf->inst_done = 0;
    vlSelf->ysyx_25030085_top__DOT__rs1_data = 0;
    vlSelf->ysyx_25030085_top__DOT__rs2_data = 0;
    vlSelf->ysyx_25030085_top__DOT__csr_wen = 0;
    vlSelf->ysyx_25030085_top__DOT__is_ecall = 0;
    vlSelf->ysyx_25030085_top__DOT__is_mret = 0;
    vlSelf->ysyx_25030085_top__DOT__ex_id_ready = 0;
    vlSelf->ysyx_25030085_top__DOT__ctrl = 0;
    vlSelf->ysyx_25030085_top__DOT__me_ex_ready = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_me_ready = 0;
    vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__state = 0;
    vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc = 0;
    vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__next_pc_reg = 0;
    vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__if_inst = 0;
    vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__fetch_valid = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__state = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__inst = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__pc = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm_reg = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__rs1_reg = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__rs2_reg = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ctrl_reg = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__imm = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemWrite = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemRead = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemOp = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__MemtoReg = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__RegWrite = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Branch = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__Jump = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__ALUSrc = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__AluOp = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__csr_wen = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ecall = 0;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_mret = 0;
    vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__rs1 = 0;
    vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__rs2 = 0;
    vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__rd = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register[__Vi0] = 0;
    }
    vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register = 0;
    vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display = 0;
    vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__i = 0;
    vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__state = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rd = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs1_data = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__rs2_data = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__imm = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__reg_a5 = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__ctrl = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__pc_reg = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__alu_reg = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__Alu_Result = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__next_pc = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__is_jar_call = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__is_jalr_call = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__is_jalr_ret = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mtvec = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc = 0;
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mcause = 0;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__state = 0;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__has_data = 0;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ctrl = 0;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rd = 0;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_wdata = 0;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__sram_addr = 0;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__pc = 0;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__imm = 0;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__npc = 0;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__ReadData = 0;
    vlSelf->ysyx_25030085_top__DOT__DataMem__DOT__rdata = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__state = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__has_data = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__ctrl = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__rd = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__addr_reg = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__npc = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__pc = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__imm = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__csr_rdata = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__mem_rdata = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__alu_result = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__wen = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__data_reg = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__wb_data = 0;
    vlSelf->ysyx_25030085_top__DOT__wb_init__DOT__RegWrite = 0;
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mepc = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mstatus = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mcause = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__alu_init__DOT__csr_regfile_init__DOT__mtvec = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__control_init__DOT__state = 0;
    vlSelf->__Vdly__ysyx_25030085_top__DOT__alu_init__DOT__state = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__Vtrigrprev__TOP__rst = 0;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__control_init__DOT__invalid = 0;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__control_init__DOT__is_ebreak = 0;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
