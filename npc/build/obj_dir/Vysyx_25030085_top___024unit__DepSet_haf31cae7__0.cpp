// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25030085_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25030085_top__Syms.h"
#include "Vysyx_25030085_top___024unit.h"

extern "C" void ebreak_instruction(int inst);

VL_INLINE_OPT void Vysyx_25030085_top___024unit____Vdpiimwrap_ebreak_instruction_TOP____024unit(IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25030085_top___024unit____Vdpiimwrap_ebreak_instruction_TOP____024unit\n"); );
    // Body
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    ebreak_instruction(inst__Vcvt);
}

extern "C" void invalid_inst(int pc, int inst);

VL_INLINE_OPT void Vysyx_25030085_top___024unit____Vdpiimwrap_invalid_inst_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25030085_top___024unit____Vdpiimwrap_invalid_inst_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    invalid_inst(pc__Vcvt, inst__Vcvt);
}

extern "C" int pmem_readv(int raddr);

VL_INLINE_OPT void Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_readv__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_readv_TOP____024unit\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int pmem_readv__Vfuncrtn__Vcvt;
    pmem_readv__Vfuncrtn__Vcvt = pmem_readv(raddr__Vcvt);
    pmem_readv__Vfuncrtn = pmem_readv__Vfuncrtn__Vcvt;
}

extern "C" void pmem_write(int waddr, int wdata, char wmask);

VL_INLINE_OPT void Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25030085_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void display_call_func(int pc, int dnpc);

VL_INLINE_OPT void Vysyx_25030085_top___024unit____Vdpiimwrap_display_call_func_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ dnpc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25030085_top___024unit____Vdpiimwrap_display_call_func_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int dnpc__Vcvt;
    for (size_t dnpc__Vidx = 0; dnpc__Vidx < 1; ++dnpc__Vidx) dnpc__Vcvt = dnpc;
    display_call_func(pc__Vcvt, dnpc__Vcvt);
}

extern "C" void display_ret_func(int pc, int dnpc);

VL_INLINE_OPT void Vysyx_25030085_top___024unit____Vdpiimwrap_display_ret_func_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ dnpc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25030085_top___024unit____Vdpiimwrap_display_ret_func_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int dnpc__Vcvt;
    for (size_t dnpc__Vidx = 0; dnpc__Vidx < 1; ++dnpc__Vidx) dnpc__Vcvt = dnpc;
    display_ret_func(pc__Vcvt, dnpc__Vcvt);
}

extern "C" void info_register(int value, svBit en_display);

VL_INLINE_OPT void Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit(IData/*31:0*/ value, CData/*0:0*/ en_display) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25030085_top___024unit____Vdpiimwrap_info_register_TOP____024unit\n"); );
    // Body
    int value__Vcvt;
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) value__Vcvt = value;
    svBit en_display__Vcvt;
    for (size_t en_display__Vidx = 0; en_display__Vidx < 1; ++en_display__Vidx) en_display__Vcvt = en_display;
    info_register(value__Vcvt, en_display__Vcvt);
}
