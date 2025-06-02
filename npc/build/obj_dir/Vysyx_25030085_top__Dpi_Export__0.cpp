// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vysyx_25030085_top.h"
#include "Vysyx_25030085_top__Syms.h"
#include "verilated_dpi.h"


void Vysyx_25030085_top::info_register_en(svBit enable, svBit en_display) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030085_top___024root::info_register_en\n"); );
    // Init
    CData/*0:0*/ enable__Vcvt;
    enable__Vcvt = 0;
    CData/*0:0*/ en_display__Vcvt;
    en_display__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("info_register_en");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vysyx_25030085_top__Vcb_info_register_en_t __Vcb = (Vysyx_25030085_top__Vcb_info_register_en_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    enable__Vcvt = (1U & enable);
    en_display__Vcvt = (1U & en_display);
    (*__Vcb)((Vysyx_25030085_top__Syms*)(__Vscopep->symsp()), enable__Vcvt, en_display__Vcvt);
}
