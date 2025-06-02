// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25030085_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25030085_top___024root.h"

VL_INLINE_OPT void Vysyx_25030085_top___024root___ico_sequent__TOP__0(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___ico_sequent__TOP__0\n"); );
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

void Vysyx_25030085_top___024root___eval_ico(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_25030085_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___act_sequent__TOP__0(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak = 0U;
    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 0U;
    if ((0x80000000U <= vlSelf->pc_out)) {
        if ((0x40U & vlSelf->instruction)) {
            if ((0x20U & vlSelf->instruction)) {
                if ((0x10U & vlSelf->instruction)) {
                    if ((1U & (~ (vlSelf->instruction 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->instruction 
                                      >> 2U)))) {
                            if ((2U & vlSelf->instruction)) {
                                if ((1U & vlSelf->instruction)) {
                                    if ((0U == (7U 
                                                & (vlSelf->instruction 
                                                   >> 0xcU)))) {
                                        if ((1U == 
                                             (vlSelf->instruction 
                                              >> 0x14U))) {
                                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__is_ebreak = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((8U & vlSelf->instruction)) {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    } else if ((4U & vlSelf->instruction)) {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    } else if ((2U & vlSelf->instruction)) {
                        if ((1U & vlSelf->instruction)) {
                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 0U;
                            if ((0U == (7U & (vlSelf->instruction 
                                              >> 0xcU)))) {
                                if ((1U != (vlSelf->instruction 
                                            >> 0x14U))) {
                                    if ((0U != (vlSelf->instruction 
                                                >> 0x14U))) {
                                        if ((0x302U 
                                             != (vlSelf->instruction 
                                                 >> 0x14U))) {
                                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                                        }
                                    }
                                }
                            } else if ((1U != (7U & 
                                               (vlSelf->instruction 
                                                >> 0xcU)))) {
                                if ((2U != (7U & (vlSelf->instruction 
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
                } else if ((8U & vlSelf->instruction)) {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid 
                        = (IData)((7U != (7U & vlSelf->instruction)));
                } else if ((4U & vlSelf->instruction)) {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid 
                        = (IData)((3U != (3U & vlSelf->instruction)));
                } else if ((2U & vlSelf->instruction)) {
                    if ((1U & vlSelf->instruction)) {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 0U;
                        if ((1U & (~ (vlSelf->instruction 
                                      >> 0xeU)))) {
                            if ((0x2000U & vlSelf->instruction)) {
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
        } else if ((0x20U & vlSelf->instruction)) {
            if ((0x10U & vlSelf->instruction)) {
                if ((8U & vlSelf->instruction)) {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                } else if ((4U & vlSelf->instruction)) {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid 
                        = (IData)((3U != (3U & vlSelf->instruction)));
                } else if ((2U & vlSelf->instruction)) {
                    if ((1U & vlSelf->instruction)) {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 0U;
                        if ((0x4000U & vlSelf->instruction)) {
                            if ((1U & (~ (vlSelf->instruction 
                                          >> 0xdU)))) {
                                if ((0x1000U & vlSelf->instruction)) {
                                    if ((0U != (vlSelf->instruction 
                                                >> 0x19U))) {
                                        if ((0x20U 
                                             != (vlSelf->instruction 
                                                 >> 0x19U))) {
                                            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelf->instruction 
                                             >> 0xdU)))) {
                            if ((1U & (~ (vlSelf->instruction 
                                          >> 0xcU)))) {
                                if ((0U != (vlSelf->instruction 
                                            >> 0x19U))) {
                                    if ((0x20U != (vlSelf->instruction 
                                                   >> 0x19U))) {
                                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                                    }
                                }
                            }
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                }
            } else if ((8U & vlSelf->instruction)) {
                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
            } else if ((4U & vlSelf->instruction)) {
                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
            } else if ((2U & vlSelf->instruction)) {
                if ((1U & vlSelf->instruction)) {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 0U;
                    if ((0U != (7U & (vlSelf->instruction 
                                      >> 0xcU)))) {
                        if ((1U != (7U & (vlSelf->instruction 
                                          >> 0xcU)))) {
                            if ((2U != (7U & (vlSelf->instruction 
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
        } else if ((0x10U & vlSelf->instruction)) {
            if ((8U & vlSelf->instruction)) {
                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
            } else if ((4U & vlSelf->instruction)) {
                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid 
                    = (IData)((3U != (3U & vlSelf->instruction)));
            } else if ((2U & vlSelf->instruction)) {
                if ((1U & vlSelf->instruction)) {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 0U;
                    if ((0x4000U & vlSelf->instruction)) {
                        if ((1U & (~ (vlSelf->instruction 
                                      >> 0xdU)))) {
                            if ((0x1000U & vlSelf->instruction)) {
                                if ((0x20U != (vlSelf->instruction 
                                               >> 0x19U))) {
                                    if ((0U != (vlSelf->instruction 
                                                >> 0x19U))) {
                                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                }
            } else {
                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
            }
        } else if ((8U & vlSelf->instruction)) {
            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
        } else if ((4U & vlSelf->instruction)) {
            vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
        } else if ((2U & vlSelf->instruction)) {
            if ((1U & vlSelf->instruction)) {
                vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 0U;
                if ((0x4000U & vlSelf->instruction)) {
                    if ((0x2000U & vlSelf->instruction)) {
                        vlSelf->ysyx_25030085_top__DOT__control_init__DOT__invalid = 1U;
                    }
                } else if ((0x2000U & vlSelf->instruction)) {
                    if ((0x1000U & vlSelf->instruction)) {
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
}

void Vysyx_25030085_top___024root___eval_act(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        Vysyx_25030085_top___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__2(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc 
        = vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc;
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__4(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->ysyx_25030085_top__DOT__csr_wen = 0U;
    vlSelf->ysyx_25030085_top__DOT__is_ecall = 0U;
    vlSelf->ysyx_25030085_top__DOT__MemOp = 0U;
    vlSelf->ysyx_25030085_top__DOT__RegWrite = 0U;
    vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
    vlSelf->ysyx_25030085_top__DOT__MemRead = 0U;
    vlSelf->ysyx_25030085_top__DOT__MemWrite = 0U;
    vlSelf->ysyx_25030085_top__DOT__is_mret = 0U;
    vlSelf->ysyx_25030085_top__DOT__Jump = 0U;
    vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
    vlSelf->ysyx_25030085_top__DOT__ALUSrc = 0U;
    vlSelf->ysyx_25030085_top__DOT__imm = 0U;
    vlSelf->ysyx_25030085_top__DOT__Branch = 0U;
    if ((0x80000000U <= vlSelf->pc_out)) {
        if ((0x40U & vlSelf->instruction)) {
            if ((0x20U & vlSelf->instruction)) {
                if ((0x10U & vlSelf->instruction)) {
                    if ((8U & vlSelf->instruction)) {
                        vlSelf->ysyx_25030085_top__DOT__csr_wen = 0U;
                        vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                        vlSelf->ysyx_25030085_top__DOT__is_mret = 0U;
                        vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                    } else if ((4U & vlSelf->instruction)) {
                        vlSelf->ysyx_25030085_top__DOT__csr_wen = 0U;
                        vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                        vlSelf->ysyx_25030085_top__DOT__is_mret = 0U;
                        vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                    } else if ((2U & vlSelf->instruction)) {
                        if ((1U & vlSelf->instruction)) {
                            if ((0U != (7U & (vlSelf->instruction 
                                              >> 0xcU)))) {
                                if ((1U == (7U & (vlSelf->instruction 
                                                  >> 0xcU)))) {
                                    vlSelf->ysyx_25030085_top__DOT__csr_wen = 1U;
                                } else if ((2U == (7U 
                                                   & (vlSelf->instruction 
                                                      >> 0xcU)))) {
                                    vlSelf->ysyx_25030085_top__DOT__csr_wen = 2U;
                                }
                            }
                            vlSelf->ysyx_25030085_top__DOT__MemtoReg = 4U;
                            if ((0U == (7U & (vlSelf->instruction 
                                              >> 0xcU)))) {
                                if ((1U != (vlSelf->instruction 
                                            >> 0x14U))) {
                                    if ((0U != (vlSelf->instruction 
                                                >> 0x14U))) {
                                        if ((0x302U 
                                             == (vlSelf->instruction 
                                                 >> 0x14U))) {
                                            vlSelf->ysyx_25030085_top__DOT__is_mret = 1U;
                                        }
                                    }
                                }
                            }
                            vlSelf->ysyx_25030085_top__DOT__imm 
                                = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI;
                        } else {
                            vlSelf->ysyx_25030085_top__DOT__csr_wen = 0U;
                            vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                            vlSelf->ysyx_25030085_top__DOT__is_mret = 0U;
                            vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__csr_wen = 0U;
                        vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                        vlSelf->ysyx_25030085_top__DOT__is_mret = 0U;
                        vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                    }
                    if ((1U & (~ (vlSelf->instruction 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->instruction 
                                      >> 2U)))) {
                            if ((2U & vlSelf->instruction)) {
                                if ((1U & vlSelf->instruction)) {
                                    if ((0U == (7U 
                                                & (vlSelf->instruction 
                                                   >> 0xcU)))) {
                                        if ((1U != 
                                             (vlSelf->instruction 
                                              >> 0x14U))) {
                                            if ((0U 
                                                 == 
                                                 (vlSelf->instruction 
                                                  >> 0x14U))) {
                                                vlSelf->ysyx_25030085_top__DOT__is_ecall = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    vlSelf->ysyx_25030085_top__DOT__Jump = 0U;
                    vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                    vlSelf->ysyx_25030085_top__DOT__Branch = 0U;
                } else {
                    vlSelf->ysyx_25030085_top__DOT__csr_wen = 0U;
                    if ((8U & vlSelf->instruction)) {
                        if ((4U & vlSelf->instruction)) {
                            if ((2U & vlSelf->instruction)) {
                                if ((1U & vlSelf->instruction)) {
                                    vlSelf->ysyx_25030085_top__DOT__is_ecall = 0U;
                                    vlSelf->ysyx_25030085_top__DOT__MemtoReg = 2U;
                                    vlSelf->ysyx_25030085_top__DOT__Jump = 1U;
                                    vlSelf->ysyx_25030085_top__DOT__imm 
                                        = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immJ;
                                } else {
                                    vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                                    vlSelf->ysyx_25030085_top__DOT__Jump = 0U;
                                    vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                                }
                            } else {
                                vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                                vlSelf->ysyx_25030085_top__DOT__Jump = 0U;
                                vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                            }
                        } else {
                            vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                            vlSelf->ysyx_25030085_top__DOT__Jump = 0U;
                            vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                        }
                        vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                        vlSelf->ysyx_25030085_top__DOT__Branch = 0U;
                    } else if ((4U & vlSelf->instruction)) {
                        if ((2U & vlSelf->instruction)) {
                            if ((1U & vlSelf->instruction)) {
                                vlSelf->ysyx_25030085_top__DOT__is_ecall = 0U;
                                vlSelf->ysyx_25030085_top__DOT__MemtoReg = 2U;
                                vlSelf->ysyx_25030085_top__DOT__Jump = 2U;
                                vlSelf->ysyx_25030085_top__DOT__imm 
                                    = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI;
                            } else {
                                vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                                vlSelf->ysyx_25030085_top__DOT__Jump = 0U;
                                vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                            }
                        } else {
                            vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                            vlSelf->ysyx_25030085_top__DOT__Jump = 0U;
                            vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                        }
                        vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                        vlSelf->ysyx_25030085_top__DOT__Branch = 0U;
                    } else {
                        if ((2U & vlSelf->instruction)) {
                            if ((1U & vlSelf->instruction)) {
                                vlSelf->ysyx_25030085_top__DOT__is_ecall = 0U;
                                vlSelf->ysyx_25030085_top__DOT__AluOp = 9U;
                                vlSelf->ysyx_25030085_top__DOT__imm 
                                    = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immB;
                                if ((0x4000U & vlSelf->instruction)) {
                                    vlSelf->ysyx_25030085_top__DOT__Branch 
                                        = (1U & ((0x2000U 
                                                  & vlSelf->instruction)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->instruction)
                                                   ? 
                                                  (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                                   >= vlSelf->ysyx_25030085_top__DOT__Read_rs2)
                                                   : 
                                                  (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                                   < vlSelf->ysyx_25030085_top__DOT__Read_rs2))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->instruction)
                                                   ? 
                                                  (((vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->ysyx_25030085_top__DOT__Read_rs2 
                                                     >> 0x1fU))
                                                    ? 
                                                   (~ 
                                                    (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                                     >> 0x1fU))
                                                    : 
                                                   ((0x7fffffffU 
                                                     & vlSelf->ysyx_25030085_top__DOT__Read_rs1) 
                                                    >= 
                                                    (0x7fffffffU 
                                                     & vlSelf->ysyx_25030085_top__DOT__Read_rs2)))
                                                   : 
                                                  (((vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->ysyx_25030085_top__DOT__Read_rs2 
                                                     >> 0x1fU))
                                                    ? 
                                                   (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                                    >> 0x1fU)
                                                    : 
                                                   ((0x7fffffffU 
                                                     & vlSelf->ysyx_25030085_top__DOT__Read_rs1) 
                                                    < 
                                                    (0x7fffffffU 
                                                     & vlSelf->ysyx_25030085_top__DOT__Read_rs2))))));
                                } else if ((1U & (~ 
                                                  (vlSelf->instruction 
                                                   >> 0xdU)))) {
                                    vlSelf->ysyx_25030085_top__DOT__Branch 
                                        = ((0x1000U 
                                            & vlSelf->instruction)
                                            ? (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                               != vlSelf->ysyx_25030085_top__DOT__Read_rs2)
                                            : (vlSelf->ysyx_25030085_top__DOT__Read_rs1 
                                               == vlSelf->ysyx_25030085_top__DOT__Read_rs2));
                                }
                            } else {
                                vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                                vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                                vlSelf->ysyx_25030085_top__DOT__Branch = 0U;
                            }
                        } else {
                            vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                            vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                            vlSelf->ysyx_25030085_top__DOT__Branch = 0U;
                        }
                        vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                        vlSelf->ysyx_25030085_top__DOT__Jump = 0U;
                    }
                    vlSelf->ysyx_25030085_top__DOT__is_mret = 0U;
                }
            } else {
                vlSelf->ysyx_25030085_top__DOT__csr_wen = 0U;
                vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                vlSelf->ysyx_25030085_top__DOT__is_mret = 0U;
                vlSelf->ysyx_25030085_top__DOT__Jump = 0U;
                vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                vlSelf->ysyx_25030085_top__DOT__Branch = 0U;
            }
            vlSelf->ysyx_25030085_top__DOT__RegWrite 
                = (1U & ((vlSelf->instruction >> 5U) 
                         & ((0x10U & vlSelf->instruction)
                             ? (IData)((3U == (0xfU 
                                               & vlSelf->instruction)))
                             : ((8U & vlSelf->instruction)
                                 ? (IData)((7U == (7U 
                                                   & vlSelf->instruction)))
                                 : (IData)((7U == (7U 
                                                   & vlSelf->instruction)))))));
            vlSelf->ysyx_25030085_top__DOT__ALUSrc 
                = (1U & (IData)(((0x20U == (0x30U & vlSelf->instruction)) 
                                 & ((8U & vlSelf->instruction)
                                     ? (IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->instruction)))
                                     : ((4U & vlSelf->instruction)
                                         ? ((vlSelf->instruction 
                                             >> 1U) 
                                            & vlSelf->instruction)
                                         : ((vlSelf->instruction 
                                             >> 1U) 
                                            & vlSelf->instruction))))));
        } else {
            vlSelf->ysyx_25030085_top__DOT__csr_wen = 0U;
            if ((0x20U & vlSelf->instruction)) {
                if ((0x10U & vlSelf->instruction)) {
                    if ((1U & (~ (vlSelf->instruction 
                                  >> 3U)))) {
                        if ((4U & vlSelf->instruction)) {
                            if ((2U & vlSelf->instruction)) {
                                if ((1U & vlSelf->instruction)) {
                                    vlSelf->ysyx_25030085_top__DOT__is_ecall = 0U;
                                }
                            }
                        } else if ((2U & vlSelf->instruction)) {
                            if ((1U & vlSelf->instruction)) {
                                vlSelf->ysyx_25030085_top__DOT__is_ecall = 0U;
                            }
                        }
                    }
                    if ((8U & vlSelf->instruction)) {
                        vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                        vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                        vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                    } else if ((4U & vlSelf->instruction)) {
                        if ((2U & vlSelf->instruction)) {
                            if ((1U & vlSelf->instruction)) {
                                vlSelf->ysyx_25030085_top__DOT__MemtoReg = 3U;
                                vlSelf->ysyx_25030085_top__DOT__imm 
                                    = (0xfffff000U 
                                       & vlSelf->instruction);
                            } else {
                                vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                                vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                            }
                        } else {
                            vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                            vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                        }
                        vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                        if ((2U & vlSelf->instruction)) {
                            if ((1U & vlSelf->instruction)) {
                                if ((0x4000U & vlSelf->instruction)) {
                                    if ((0x2000U & vlSelf->instruction)) {
                                        vlSelf->ysyx_25030085_top__DOT__AluOp 
                                            = ((0x1000U 
                                                & vlSelf->instruction)
                                                ? 8U
                                                : 7U);
                                    } else if ((0x1000U 
                                                & vlSelf->instruction)) {
                                        if ((0U == 
                                             (vlSelf->instruction 
                                              >> 0x19U))) {
                                            vlSelf->ysyx_25030085_top__DOT__AluOp = 6U;
                                        } else if (
                                                   (0x20U 
                                                    == 
                                                    (vlSelf->instruction 
                                                     >> 0x19U))) {
                                            vlSelf->ysyx_25030085_top__DOT__AluOp = 5U;
                                        }
                                    } else {
                                        vlSelf->ysyx_25030085_top__DOT__AluOp = 4U;
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->instruction)) {
                                    vlSelf->ysyx_25030085_top__DOT__AluOp 
                                        = ((0x1000U 
                                            & vlSelf->instruction)
                                            ? 3U : 2U);
                                } else if ((0x1000U 
                                            & vlSelf->instruction)) {
                                    vlSelf->ysyx_25030085_top__DOT__AluOp = 1U;
                                } else if ((0U == (vlSelf->instruction 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                                } else if ((0x20U == 
                                            (vlSelf->instruction 
                                             >> 0x19U))) {
                                    vlSelf->ysyx_25030085_top__DOT__AluOp = 0xaU;
                                }
                            } else {
                                vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                            }
                            if ((1U & (~ vlSelf->instruction))) {
                                vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                            }
                        } else {
                            vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                            vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                        }
                    }
                    vlSelf->ysyx_25030085_top__DOT__ALUSrc 
                        = (1U & (IData)((7U == (0xfU 
                                                & vlSelf->instruction))));
                } else {
                    if ((1U & (~ (vlSelf->instruction 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->instruction 
                                      >> 2U)))) {
                            if ((2U & vlSelf->instruction)) {
                                if ((1U & vlSelf->instruction)) {
                                    vlSelf->ysyx_25030085_top__DOT__is_ecall = 0U;
                                }
                            }
                        }
                    }
                    vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                    vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                    vlSelf->ysyx_25030085_top__DOT__ALUSrc 
                        = (1U & (IData)((3U == (0xfU 
                                                & vlSelf->instruction))));
                    vlSelf->ysyx_25030085_top__DOT__imm 
                        = ((8U & vlSelf->instruction)
                            ? 0U : ((4U & vlSelf->instruction)
                                     ? 0U : ((2U & vlSelf->instruction)
                                              ? ((1U 
                                                  & vlSelf->instruction)
                                                  ? vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immS
                                                  : 0U)
                                              : 0U)));
                }
                vlSelf->ysyx_25030085_top__DOT__RegWrite 
                    = (1U & (IData)(((0x10U == (0x18U 
                                                & vlSelf->instruction)) 
                                     & ((4U & vlSelf->instruction)
                                         ? ((vlSelf->instruction 
                                             >> 1U) 
                                            & vlSelf->instruction)
                                         : ((vlSelf->instruction 
                                             >> 1U) 
                                            & vlSelf->instruction)))));
            } else if ((0x10U & vlSelf->instruction)) {
                if ((1U & (~ (vlSelf->instruction >> 3U)))) {
                    if ((4U & vlSelf->instruction)) {
                        if ((2U & vlSelf->instruction)) {
                            if ((1U & vlSelf->instruction)) {
                                vlSelf->ysyx_25030085_top__DOT__is_ecall = 0U;
                            }
                        }
                    } else if ((2U & vlSelf->instruction)) {
                        if ((1U & vlSelf->instruction)) {
                            vlSelf->ysyx_25030085_top__DOT__is_ecall = 0U;
                        }
                    }
                }
                vlSelf->ysyx_25030085_top__DOT__RegWrite 
                    = (1U & ((~ (vlSelf->instruction 
                                 >> 3U)) & ((4U & vlSelf->instruction)
                                             ? ((vlSelf->instruction 
                                                 >> 1U) 
                                                & vlSelf->instruction)
                                             : ((vlSelf->instruction 
                                                 >> 1U) 
                                                & vlSelf->instruction))));
                vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                if ((8U & vlSelf->instruction)) {
                    vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                    vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                } else if ((4U & vlSelf->instruction)) {
                    if ((2U & vlSelf->instruction)) {
                        if ((1U & vlSelf->instruction)) {
                            vlSelf->ysyx_25030085_top__DOT__AluOp = 9U;
                            vlSelf->ysyx_25030085_top__DOT__imm 
                                = (0xfffff000U & vlSelf->instruction);
                        } else {
                            vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                            vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                        vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                    }
                } else if ((2U & vlSelf->instruction)) {
                    if ((1U & vlSelf->instruction)) {
                        vlSelf->ysyx_25030085_top__DOT__imm 
                            = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI;
                        if ((0x4000U & vlSelf->instruction)) {
                            if ((0x2000U & vlSelf->instruction)) {
                                vlSelf->ysyx_25030085_top__DOT__AluOp 
                                    = ((0x1000U & vlSelf->instruction)
                                        ? 8U : 7U);
                            } else if ((0x1000U & vlSelf->instruction)) {
                                if ((0x20U == (vlSelf->instruction 
                                               >> 0x19U))) {
                                    vlSelf->ysyx_25030085_top__DOT__AluOp = 5U;
                                } else if ((0U == (vlSelf->instruction 
                                                   >> 0x19U))) {
                                    vlSelf->ysyx_25030085_top__DOT__AluOp = 6U;
                                }
                            } else {
                                vlSelf->ysyx_25030085_top__DOT__AluOp = 4U;
                            }
                            if ((1U & (~ (vlSelf->instruction 
                                          >> 0xdU)))) {
                                if ((0x1000U & vlSelf->instruction)) {
                                    if ((0x20U == (vlSelf->instruction 
                                                   >> 0x19U))) {
                                        vlSelf->ysyx_25030085_top__DOT__imm 
                                            = (0x1fU 
                                               & (vlSelf->instruction 
                                                  >> 0x14U));
                                    } else if ((0U 
                                                == 
                                                (vlSelf->instruction 
                                                 >> 0x19U))) {
                                        vlSelf->ysyx_25030085_top__DOT__imm 
                                            = (0x1fU 
                                               & (vlSelf->instruction 
                                                  >> 0x14U));
                                    }
                                }
                            }
                        } else {
                            vlSelf->ysyx_25030085_top__DOT__AluOp 
                                = ((0x2000U & vlSelf->instruction)
                                    ? ((0x1000U & vlSelf->instruction)
                                        ? 3U : 2U) : 
                                   ((0x1000U & vlSelf->instruction)
                                     ? 1U : 0U));
                            if ((1U & (~ (vlSelf->instruction 
                                          >> 0xdU)))) {
                                if ((0x1000U & vlSelf->instruction)) {
                                    vlSelf->ysyx_25030085_top__DOT__imm 
                                        = (0x1fU & 
                                           (vlSelf->instruction 
                                            >> 0x14U));
                                }
                            }
                        }
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                        vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                    vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                }
                vlSelf->ysyx_25030085_top__DOT__ALUSrc 
                    = (1U & ((~ (vlSelf->instruction 
                                 >> 3U)) & ((4U & vlSelf->instruction)
                                             ? ((vlSelf->instruction 
                                                 >> 1U) 
                                                & vlSelf->instruction)
                                             : ((vlSelf->instruction 
                                                 >> 1U) 
                                                & vlSelf->instruction))));
            } else {
                if ((1U & (~ (vlSelf->instruction >> 3U)))) {
                    if ((1U & (~ (vlSelf->instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelf->instruction)) {
                            if ((1U & vlSelf->instruction)) {
                                vlSelf->ysyx_25030085_top__DOT__is_ecall = 0U;
                            }
                        }
                    }
                }
                vlSelf->ysyx_25030085_top__DOT__RegWrite 
                    = (1U & (IData)((3U == (0xfU & vlSelf->instruction))));
                if ((8U & vlSelf->instruction)) {
                    vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                    vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                    vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                } else if ((4U & vlSelf->instruction)) {
                    vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                    vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                    vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                } else if ((2U & vlSelf->instruction)) {
                    if ((1U & vlSelf->instruction)) {
                        vlSelf->ysyx_25030085_top__DOT__MemtoReg = 1U;
                        vlSelf->ysyx_25030085_top__DOT__imm 
                            = vlSelf->ysyx_25030085_top__DOT__control_init__DOT__immI;
                    } else {
                        vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                        vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                    }
                    if ((1U & (~ vlSelf->instruction))) {
                        vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                    }
                } else {
                    vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0U;
                    vlSelf->ysyx_25030085_top__DOT__AluOp = 0U;
                    vlSelf->ysyx_25030085_top__DOT__imm = 0U;
                }
                vlSelf->ysyx_25030085_top__DOT__ALUSrc 
                    = (1U & (IData)((3U == (0xfU & vlSelf->instruction))));
            }
            vlSelf->ysyx_25030085_top__DOT__is_mret = 0U;
            vlSelf->ysyx_25030085_top__DOT__Jump = 0U;
            vlSelf->ysyx_25030085_top__DOT__Branch = 0U;
        }
        if ((1U & (~ (vlSelf->instruction >> 6U)))) {
            if ((0x20U & vlSelf->instruction)) {
                if ((1U & (~ (vlSelf->instruction >> 4U)))) {
                    if ((1U & (~ (vlSelf->instruction 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->instruction 
                                      >> 2U)))) {
                            if ((2U & vlSelf->instruction)) {
                                if ((1U & vlSelf->instruction)) {
                                    if ((0U == (7U 
                                                & (vlSelf->instruction 
                                                   >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__MemOp = 0U;
                                    } else if ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->instruction 
                                                    >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__MemOp = 1U;
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->instruction 
                                                    >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__MemOp = 2U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->instruction 
                                 >> 4U)))) {
                if ((1U & (~ (vlSelf->instruction >> 3U)))) {
                    if ((1U & (~ (vlSelf->instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelf->instruction)) {
                            if ((1U & vlSelf->instruction)) {
                                if ((0x4000U & vlSelf->instruction)) {
                                    if ((1U & (~ (vlSelf->instruction 
                                                  >> 0xdU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__MemOp 
                                            = ((0x1000U 
                                                & vlSelf->instruction)
                                                ? 5U
                                                : 4U);
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->instruction)) {
                                    if ((1U & (~ (vlSelf->instruction 
                                                  >> 0xcU)))) {
                                        vlSelf->ysyx_25030085_top__DOT__MemOp = 2U;
                                    }
                                } else {
                                    vlSelf->ysyx_25030085_top__DOT__MemOp 
                                        = ((0x1000U 
                                            & vlSelf->instruction)
                                            ? 1U : 0U);
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->ysyx_25030085_top__DOT__MemRead = (IData)(
                                                          (3U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->instruction)));
        vlSelf->ysyx_25030085_top__DOT__MemWrite = (IData)(
                                                           (0x23U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->instruction)));
    }
    vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__is_jalr_ret 
        = (IData)(((0x8000U == (0xf8f80U & vlSelf->instruction)) 
                   & (2U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump))));
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__5(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->__Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc = 0x80000000U;
        vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__dnpc = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump))) {
        vlSelf->__Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc 
            = (vlSelf->ysyx_25030085_top__DOT__imm 
               + vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc);
        vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__dnpc 
            = (vlSelf->ysyx_25030085_top__DOT__imm 
               + vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc);
    } else if ((2U == (IData)(vlSelf->ysyx_25030085_top__DOT__Jump))) {
        vlSelf->__Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc 
            = (0xfffffffeU & vlSelf->ysyx_25030085_top__DOT__Alu_Result);
        vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__dnpc 
            = (0xfffffffeU & vlSelf->ysyx_25030085_top__DOT__Alu_Result);
    } else if (vlSelf->ysyx_25030085_top__DOT__Branch) {
        vlSelf->__Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc 
            = vlSelf->ysyx_25030085_top__DOT__Alu_Result;
        vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__dnpc 
            = vlSelf->ysyx_25030085_top__DOT__Alu_Result;
    } else if (vlSelf->ysyx_25030085_top__DOT__is_ecall) {
        vlSelf->__Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc 
            = vlSelf->ysyx_25030085_top__DOT__mtvec;
        vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__dnpc 
            = vlSelf->ysyx_25030085_top__DOT__mtvec;
    } else if (vlSelf->ysyx_25030085_top__DOT__is_mret) {
        vlSelf->__Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc 
            = vlSelf->ysyx_25030085_top__DOT__mepc;
        vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__dnpc 
            = vlSelf->ysyx_25030085_top__DOT__mepc;
    } else {
        vlSelf->__Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc 
            = ((IData)(4U) + vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc);
    }
    vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc 
        = vlSelf->__Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc;
    vlSelf->pc_out = vlSelf->ysyx_25030085_top__DOT__pc_init__DOT__current_pc;
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_sequent__TOP__6(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->ysyx_25030085_top__DOT__Read_rs1 = vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
        [(0x1fU & (vlSelf->instruction >> 0xfU))];
    vlSelf->ysyx_25030085_top__DOT__Read_rs2 = vlSelf->ysyx_25030085_top__DOT__regfile_init__DOT__register
        [(0x1fU & (vlSelf->instruction >> 0x14U))];
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_comb__TOP__0(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyx_25030085_top__DOT__alu_init__DOT__B 
        = ((IData)(vlSelf->ysyx_25030085_top__DOT__ALUSrc)
            ? vlSelf->ysyx_25030085_top__DOT__imm : vlSelf->ysyx_25030085_top__DOT__Read_rs2);
}

VL_INLINE_OPT void Vysyx_25030085_top___024root___nba_comb__TOP__1(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___nba_comb__TOP__1\n"); );
    // Body
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

void Vysyx_25030085_top___024root___nba_sequent__TOP__0(Vysyx_25030085_top___024root* vlSelf);
void Vysyx_25030085_top___024root___nba_sequent__TOP__1(Vysyx_25030085_top___024root* vlSelf);
void Vysyx_25030085_top___024root___nba_sequent__TOP__3(Vysyx_25030085_top___024root* vlSelf);

void Vysyx_25030085_top___024root___eval_nba(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(5U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__5(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vysyx_25030085_top___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(3U))) {
        Vysyx_25030085_top___024root___nba_comb__TOP__0(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U)) 
         | vlSelf->__VnbaTriggered.at(3U))) {
        Vysyx_25030085_top___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vysyx_25030085_top___024root___eval_triggers__ico(Vysyx_25030085_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030085_top___024root___dump_triggers__ico(Vysyx_25030085_top___024root* vlSelf);
#endif  // VL_DEBUG
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
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<6> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_25030085_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25030085_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/zzy/ysyx-workbench/npc/vsrc/top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_25030085_top___024root___eval_ico(vlSelf);
        }
    }
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
