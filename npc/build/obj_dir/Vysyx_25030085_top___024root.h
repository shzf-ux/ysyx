// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25030085_top.h for the primary calling header

#ifndef VERILATED_VYSYX_25030085_TOP___024ROOT_H_
#define VERILATED_VYSYX_25030085_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_25030085_top__Syms;
class Vysyx_25030085_top___024unit;


class Vysyx_25030085_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_25030085_top___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ ysyx_25030085_top__DOT__regfile__DOT__is_info_register;
    VL_IN8(rst,0,0);
    CData/*0:0*/ ysyx_25030085_top__DOT__MemWrite;
    CData/*0:0*/ ysyx_25030085_top__DOT__MemRead;
    CData/*1:0*/ ysyx_25030085_top__DOT__MemOp;
    CData/*1:0*/ ysyx_25030085_top__DOT__MemtoReg;
    CData/*0:0*/ ysyx_25030085_top__DOT__idu__DOT__is_addi;
    CData/*0:0*/ ysyx_25030085_top__DOT__idu__DOT__is_lw;
    CData/*0:0*/ ysyx_25030085_top__DOT__idu__DOT__is_lbu;
    CData/*0:0*/ ysyx_25030085_top__DOT__idu__DOT__is_sw;
    CData/*0:0*/ ysyx_25030085_top__DOT__idu__DOT__is_sb;
    CData/*0:0*/ ysyx_25030085_top__DOT__idu__DOT__is_jalr;
    CData/*0:0*/ ysyx_25030085_top__DOT__idu__DOT____VdfgTmp_h41f0f4ef__0;
    CData/*0:0*/ ysyx_25030085_top__DOT__regfile__DOT__is_en_display;
    CData/*0:0*/ __Vdpi_export_trigger;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyx_25030085_top__DOT__regfile__DOT__is_info_register;
    CData/*0:0*/ __VactContinue;
    VL_IN(instruction,31,0);
    VL_OUT(pc_out,31,0);
    IData/*31:0*/ ysyx_25030085_top__DOT__next_pc;
    IData/*31:0*/ ysyx_25030085_top__DOT__Alu_Result;
    IData/*31:0*/ ysyx_25030085_top__DOT__ReadData;
    IData/*31:0*/ ysyx_25030085_top__DOT__Read_rs2;
    IData/*31:0*/ ysyx_25030085_top__DOT__imm;
    IData/*31:0*/ ysyx_25030085_top__DOT__regfile__DOT__i;
    IData/*31:0*/ ysyx_25030085_top__DOT__lsu__DOT__rdata;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> ysyx_25030085_top__DOT__regfile__DOT__rf;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_25030085_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25030085_top___024root(Vysyx_25030085_top__Syms* symsp, const char* v__name);
    ~Vysyx_25030085_top___024root();
    VL_UNCOPYABLE(Vysyx_25030085_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
