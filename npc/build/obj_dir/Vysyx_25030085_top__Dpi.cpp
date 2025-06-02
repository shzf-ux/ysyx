// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vysyx_25030085_top::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vysyx_25030085_top__Dpi.h"
#include "Vysyx_25030085_top.h"

#ifndef VL_DPIDECL_info_register_en_
#define VL_DPIDECL_info_register_en_
void info_register_en(svBit enable, svBit en_display) {
    // DPI export at /home/zzy/ysyx-workbench/npc/vsrc/regfile.v:37:19
    return Vysyx_25030085_top::info_register_en(enable, en_display);
}
#endif

