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
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__regfile__DOT__is_info_register = 0U;
}

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_initial__TOP(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register = 0U;
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

void Vysyx_25030085_top___024root___ico_sequent__TOP__0(Vysyx_25030085_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25030085_top___024root___eval_stl(Vysyx_25030085_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_25030085_top___024root___ico_sequent__TOP__0(vlSelf);
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
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge ysyx_25030085_top.regfile.is_info_register)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge ysyx_25030085_top.regfile.is_info_register)\n");
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
    vlSelf->ysyx_25030085_top__DOT__next_pc = 0;
    vlSelf->ysyx_25030085_top__DOT__Alu_Result = 0;
    vlSelf->ysyx_25030085_top__DOT__ReadData = 0;
    vlSelf->ysyx_25030085_top__DOT__Read_rs2 = 0;
    vlSelf->ysyx_25030085_top__DOT__MemWrite = 0;
    vlSelf->ysyx_25030085_top__DOT__MemRead = 0;
    vlSelf->ysyx_25030085_top__DOT__MemOp = 0;
    vlSelf->ysyx_25030085_top__DOT__MemtoReg = 0;
    vlSelf->ysyx_25030085_top__DOT__imm = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_addi = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lw = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_lbu = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sw = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_sb = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT__is_jalr = 0;
    vlSelf->ysyx_25030085_top__DOT__idu__DOT____VdfgTmp_h41f0f4ef__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25030085_top__DOT__regfile__DOT__rf[__Vi0] = 0;
    }
    vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_info_register = 0;
    vlSelf->ysyx_25030085_top__DOT__regfile__DOT__is_en_display = 0;
    vlSelf->ysyx_25030085_top__DOT__regfile__DOT__i = 0;
    vlSelf->ysyx_25030085_top__DOT__lsu__DOT__rdata = 0;
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__Vtrigrprev__TOP__ysyx_25030085_top__DOT__regfile__DOT__is_info_register = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
