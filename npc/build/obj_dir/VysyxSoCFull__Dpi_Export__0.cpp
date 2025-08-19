// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Syms.h"
#include "verilated_dpi.h"


void VysyxSoCFull::info_register_en(svBit enable, svBit en_display) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root::info_register_en\n"); );
    // Init
    CData/*0:0*/ enable__Vcvt;
    enable__Vcvt = 0;
    CData/*0:0*/ en_display__Vcvt;
    en_display__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("info_register_en");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VysyxSoCFull__Vcb_info_register_en_t __Vcb = (VysyxSoCFull__Vcb_info_register_en_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    enable__Vcvt = (1U & enable);
    en_display__Vcvt = (1U & en_display);
    (*__Vcb)((VysyxSoCFull__Syms*)(__Vscopep->symsp()), enable__Vcvt, en_display__Vcvt);
}
