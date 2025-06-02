// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_25030085_TOP__DPI_H_
#define VERILATED_VYSYX_25030085_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/zzy/ysyx-workbench/npc/vsrc/regfile.v:37:19
    extern void info_register_en(svBit enable, svBit en_display);

    // DPI IMPORTS
    // DPI import at /home/zzy/ysyx-workbench/npc/vsrc/pc.v:1:30
    extern void display_call_func(int pc, int dnpc);
    // DPI import at /home/zzy/ysyx-workbench/npc/vsrc/pc.v:2:30
    extern void display_ret_func(int pc, int dnpc);
    // DPI import at /home/zzy/ysyx-workbench/npc/vsrc/control.v:1:30
    extern void ebreak_instruction(int inst);
    // DPI import at /home/zzy/ysyx-workbench/npc/vsrc/regfile.v:1:31
    extern void info_register(int value, svBit en_display);
    // DPI import at /home/zzy/ysyx-workbench/npc/vsrc/control.v:2:30
    extern void invalid_inst(int pc, int inst);
    // DPI import at /home/zzy/ysyx-workbench/npc/vsrc/DataMem.v:1:29
    extern int pmem_readv(int raddr);
    // DPI import at /home/zzy/ysyx-workbench/npc/vsrc/DataMem.v:5:30
    extern void pmem_write(int waddr, int wdata, char wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard
