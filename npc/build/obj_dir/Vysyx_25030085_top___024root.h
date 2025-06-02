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
    VL_IN8(rst,0,0);
    CData/*0:0*/ ysyx_25030085_top__DOT__control_init__DOT__invalid;
    CData/*0:0*/ ysyx_25030085_top__DOT__control_init__DOT__is_ebreak;
    CData/*0:0*/ ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register;
    CData/*0:0*/ ysyx_25030085_top__DOT__MemRead;
    CData/*2:0*/ ysyx_25030085_top__DOT__MemtoReg;
    CData/*0:0*/ ysyx_25030085_top__DOT__MemWrite;
    CData/*0:0*/ ysyx_25030085_top__DOT__RegWrite;
    CData/*0:0*/ ysyx_25030085_top__DOT__Branch;
    CData/*1:0*/ ysyx_25030085_top__DOT__Jump;
    CData/*0:0*/ ysyx_25030085_top__DOT__ALUSrc;
    CData/*3:0*/ ysyx_25030085_top__DOT__AluOp;
    CData/*2:0*/ ysyx_25030085_top__DOT__MemOp;
    CData/*1:0*/ ysyx_25030085_top__DOT__csr_wen;
    CData/*0:0*/ ysyx_25030085_top__DOT__is_ecall;
    CData/*0:0*/ ysyx_25030085_top__DOT__is_mret;
    CData/*0:0*/ ysyx_25030085_top__DOT__pc_init__DOT__is_jalr_ret;
    CData/*0:0*/ ysyx_25030085_top__DOT__regfile_init__DOT__is_en_display;
    CData/*7:0*/ ysyx_25030085_top__DOT__DataMem__DOT__read_byte;
    CData/*7:0*/ ysyx_25030085_top__DOT__DataMem__DOT__read_byteu;
    CData/*0:0*/ __Vdpi_export_trigger;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyx_25030085_top__DOT__control_init__DOT__invalid;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyx_25030085_top__DOT__control_init__DOT__is_ebreak;
    CData/*0:0*/ __Vtrigrprev__TOP__ysyx_25030085_top__DOT__regfile_init__DOT__is_info_register;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ ysyx_25030085_top__DOT__DataMem__DOT__read_half_word;
    SData/*15:0*/ ysyx_25030085_top__DOT__DataMem__DOT__read_half_wordu;
    VL_IN(instruction,31,0);
    VL_OUT(pc_out,31,0);
    IData/*31:0*/ ysyx_25030085_top__DOT__Alu_Result;
    IData/*31:0*/ ysyx_25030085_top__DOT__Read_rs1;
    IData/*31:0*/ ysyx_25030085_top__DOT__Read_rs2;
    IData/*31:0*/ ysyx_25030085_top__DOT__ReadData;
    IData/*31:0*/ ysyx_25030085_top__DOT__imm;
    IData/*31:0*/ ysyx_25030085_top__DOT__mtvec;
    IData/*31:0*/ ysyx_25030085_top__DOT__mepc;
    IData/*31:0*/ ysyx_25030085_top__DOT__pc_init__DOT__current_pc;
    IData/*31:0*/ ysyx_25030085_top__DOT__pc_init__DOT__dnpc;
    IData/*31:0*/ ysyx_25030085_top__DOT__control_init__DOT__immI;
    IData/*31:0*/ ysyx_25030085_top__DOT__control_init__DOT__immJ;
    IData/*31:0*/ ysyx_25030085_top__DOT__control_init__DOT__immS;
    IData/*31:0*/ ysyx_25030085_top__DOT__control_init__DOT__immB;
    IData/*31:0*/ ysyx_25030085_top__DOT__csr_regfile_init__DOT__mstatus;
    IData/*31:0*/ ysyx_25030085_top__DOT__csr_regfile_init__DOT__mtvec;
    IData/*31:0*/ ysyx_25030085_top__DOT__csr_regfile_init__DOT__mepc;
    IData/*31:0*/ ysyx_25030085_top__DOT__csr_regfile_init__DOT__mcause;
    IData/*31:0*/ ysyx_25030085_top__DOT__regfile_init__DOT__i;
    IData/*31:0*/ ysyx_25030085_top__DOT__alu_init__DOT__B;
    IData/*31:0*/ ysyx_25030085_top__DOT__DataMem__DOT__rdata;
    IData/*31:0*/ ysyx_25030085_top__DOT__DataMem__DOT__aligned_addr;
    IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__pc_init__DOT__current_pc;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __Vtrigrprev__TOP__instruction;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> ysyx_25030085_top__DOT__regfile_init__DOT__register;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

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
