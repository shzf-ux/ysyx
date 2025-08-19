// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

// Parameter definitions for VysyxSoCFull___024root
constexpr VlUnpacked<IData/*31:0*/, 3> VysyxSoCFull___024root::ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__init_addrs;
constexpr VlUnpacked<IData/*31:0*/, 3> VysyxSoCFull___024root::ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__init_data;


void VysyxSoCFull___024root___ctor_var_reset(VysyxSoCFull___024root* vlSelf);

VysyxSoCFull___024root::VysyxSoCFull___024root(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull___024root___ctor_var_reset(this);
}

void VysyxSoCFull___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VysyxSoCFull___024root::~VysyxSoCFull___024root() {
}
