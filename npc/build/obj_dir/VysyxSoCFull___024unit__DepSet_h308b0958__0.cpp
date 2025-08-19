// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024unit.h"

extern "C" void info_register(int value, svBit en_display);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_info_register_TOP____024unit(IData/*31:0*/ value, CData/*0:0*/ en_display) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_info_register_TOP____024unit\n"); );
    // Body
    int value__Vcvt;
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) value__Vcvt = value;
    svBit en_display__Vcvt;
    for (size_t en_display__Vidx = 0; en_display__Vidx < 1; ++en_display__Vidx) en_display__Vcvt = en_display;
    info_register(value__Vcvt, en_display__Vcvt);
}

extern "C" void ebreak_instruction(int inst);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_ebreak_instruction_TOP____024unit(IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_ebreak_instruction_TOP____024unit\n"); );
    // Body
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    ebreak_instruction(inst__Vcvt);
}

extern "C" void invalid_inst(int pc, int inst);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_invalid_inst_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_invalid_inst_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    invalid_inst(pc__Vcvt, inst__Vcvt);
}

extern "C" void display_call_func(int pc, int dnpc);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_display_call_func_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ dnpc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_display_call_func_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int dnpc__Vcvt;
    for (size_t dnpc__Vidx = 0; dnpc__Vidx < 1; ++dnpc__Vidx) dnpc__Vcvt = dnpc;
    display_call_func(pc__Vcvt, dnpc__Vcvt);
}

extern "C" void display_ret_func(int pc, int dnpc);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_display_ret_func_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ dnpc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_display_ret_func_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int dnpc__Vcvt;
    for (size_t dnpc__Vidx = 0; dnpc__Vidx < 1; ++dnpc__Vidx) dnpc__Vcvt = dnpc;
    display_ret_func(pc__Vcvt, dnpc__Vcvt);
}

extern "C" void dpi_send_signals(int pc, int inst, svLogic valid, svLogic ready, svLogic done);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_dpi_send_signals_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ inst, CData/*0:0*/ valid, CData/*0:0*/ ready, CData/*0:0*/ done) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_dpi_send_signals_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    svLogic valid__Vcvt;
    for (size_t valid__Vidx = 0; valid__Vidx < 1; ++valid__Vidx) valid__Vcvt = valid;
    svLogic ready__Vcvt;
    for (size_t ready__Vidx = 0; ready__Vidx < 1; ++ready__Vidx) ready__Vcvt = ready;
    svLogic done__Vcvt;
    for (size_t done__Vidx = 0; done__Vidx < 1; ++done__Vidx) done__Vcvt = done;
    dpi_send_signals(pc__Vcvt, inst__Vcvt, valid__Vcvt, ready__Vcvt, done__Vcvt);
}

extern "C" void flash_read(int addr, int* data);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    flash_read(addr__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}

extern "C" int psram_read(int addr);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_psram_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &psram_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_psram_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int psram_read__Vfuncrtn__Vcvt;
    psram_read__Vfuncrtn__Vcvt = psram_read(addr__Vcvt);
    psram_read__Vfuncrtn = psram_read__Vfuncrtn__Vcvt;
}

extern "C" void psram_write(int addr, int data, int mask);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_psram_write_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_psram_write_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    int mask__Vcvt;
    for (size_t mask__Vidx = 0; mask__Vidx < 1; ++mask__Vidx) mask__Vcvt = mask;
    psram_write(addr__Vcvt, data__Vcvt, mask__Vcvt);
}
