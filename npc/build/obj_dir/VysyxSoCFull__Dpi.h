// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/zzy/ysyx-workbench/npc/vsrc/ysyx_25030085_regfile.v:37:19
    extern void info_register_en(svBit enable, svBit en_display);

    // DPI IMPORTS
    // DPI import at /home/zzy/ysyx-workbench/npc/vsrc/ysyx_25030085_cpu.v:1:30
    extern void display_call_func(int pc, int dnpc);
    // DPI import at /home/zzy/ysyx-workbench/npc/vsrc/ysyx_25030085_cpu.v:2:30
    extern void display_ret_func(int pc, int dnpc);
    // DPI import at /home/zzy/ysyx-workbench/npc/vsrc/ysyx_25030085_if.v:1:30
    extern void dpi_send_signals(int pc, int inst, svLogic valid, svLogic ready, svLogic done);
    // DPI import at /home/zzy/ysyx-workbench/npc/vsrc/ysyx_25030085_id.v:1:30
    extern void ebreak_instruction(int inst);
    // DPI import at /home/zzy/ysyx-workbench/ysyxSoC/perip/flash/flash.v:85:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/zzy/ysyx-workbench/npc/vsrc/ysyx_25030085_regfile.v:1:31
    extern void info_register(int value, svBit en_display);
    // DPI import at /home/zzy/ysyx-workbench/npc/vsrc/ysyx_25030085_id.v:2:30
    extern void invalid_inst(int pc, int inst);
    // DPI import at /home/zzy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:5407:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/zzy/ysyx-workbench/ysyxSoC/perip/psram/psram.v:1:29
    extern int psram_read(int addr);
    // DPI import at /home/zzy/ysyx-workbench/ysyxSoC/perip/psram/psram.v:2:30
    extern void psram_write(int addr, int data, int mask);

#ifdef __cplusplus
}
#endif

#endif  // guard
