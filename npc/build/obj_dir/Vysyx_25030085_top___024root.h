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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ ysyx_25030085_top__DOT__idu__DOT__invalid;
        CData/*0:0*/ ysyx_25030085_top__DOT__idu__DOT__is_ebreak;
        CData/*0:0*/ ysyx_25030085_top__DOT__regfile__DOT__is_info_register;
        VL_OUT8(top_valid,0,0);
        VL_OUT8(top_ready,0,0);
        VL_OUT8(inst_done,0,0);
        CData/*0:0*/ ysyx_25030085_top__DOT__wb_done;
        CData/*0:0*/ ysyx_25030085_top__DOT__reg_wresp;
        CData/*0:0*/ ysyx_25030085_top__DOT__wb_valid;
        CData/*0:0*/ ysyx_25030085_top__DOT__if_id_valid;
        CData/*0:0*/ ysyx_25030085_top__DOT__ex_id_ready;
        CData/*0:0*/ ysyx_25030085_top__DOT__me_ex_ready;
        CData/*0:0*/ ysyx_25030085_top__DOT__wb_me_ready;
        CData/*0:0*/ ysyx_25030085_top__DOT__if_axi4_arvalid;
        CData/*0:0*/ ysyx_25030085_top__DOT__if_axi4_arready;
        CData/*0:0*/ ysyx_25030085_top__DOT__if_axi4_rvalid;
        CData/*0:0*/ ysyx_25030085_top__DOT__if_axi4_rready;
        CData/*1:0*/ ysyx_25030085_top__DOT__if_axi4_rresp;
        CData/*0:0*/ ysyx_25030085_top__DOT__ls_axi4_arvalid;
        CData/*0:0*/ ysyx_25030085_top__DOT__ls_axi4_arready;
        CData/*0:0*/ ysyx_25030085_top__DOT__ls_axi4_rvalid;
        CData/*0:0*/ ysyx_25030085_top__DOT__ls_axi4_rready;
        CData/*1:0*/ ysyx_25030085_top__DOT__ls_axi4_rresp;
        CData/*0:0*/ ysyx_25030085_top__DOT__arb_mem_axi4_arvalid;
        CData/*0:0*/ ysyx_25030085_top__DOT__arb_mem_axi4_arready;
        CData/*0:0*/ ysyx_25030085_top__DOT__arb_mem_axi4_rvalid;
        CData/*0:0*/ ysyx_25030085_top__DOT__arb_mem_axi4_rready;
        CData/*1:0*/ ysyx_25030085_top__DOT__arb_mem_axi4_rresp;
        CData/*0:0*/ ysyx_25030085_top__DOT__ls_axi4_awvalid;
        CData/*0:0*/ ysyx_25030085_top__DOT__ls_axi4_awready;
        CData/*0:0*/ ysyx_25030085_top__DOT__ls_axi4_wvalid;
        CData/*0:0*/ ysyx_25030085_top__DOT__ls_axi4_wready;
        CData/*3:0*/ ysyx_25030085_top__DOT__ls_axi4_wstrb;
        CData/*0:0*/ ysyx_25030085_top__DOT__ls_axi4_bvalid;
        CData/*0:0*/ ysyx_25030085_top__DOT__ls_axi4_bready;
        CData/*1:0*/ ysyx_25030085_top__DOT__ls_axi4_bresp;
        CData/*0:0*/ ysyx_25030085_top__DOT__if_req;
        CData/*1:0*/ ysyx_25030085_top__DOT__biu_rresp_if;
        CData/*0:0*/ ysyx_25030085_top__DOT__biu_ready_if;
        CData/*3:0*/ ysyx_25030085_top__DOT__lsu_strb;
        CData/*0:0*/ ysyx_25030085_top__DOT__biu_valid_ls;
        CData/*1:0*/ ysyx_25030085_top__DOT__biu_rresp_ls;
        CData/*1:0*/ ysyx_25030085_top__DOT__biu_wresp_ls;
        CData/*2:0*/ ysyx_25030085_top__DOT__ifu__DOT__state;
        CData/*0:0*/ ysyx_25030085_top__DOT__ifbiu__DOT__AR_active;
        CData/*1:0*/ ysyx_25030085_top__DOT__idu__DOT__state;
        CData/*0:0*/ ysyx_25030085_top__DOT__idu__DOT__MemWrite;
        CData/*0:0*/ ysyx_25030085_top__DOT__idu__DOT__MemRead;
        CData/*2:0*/ ysyx_25030085_top__DOT__idu__DOT__MemOp;
        CData/*2:0*/ ysyx_25030085_top__DOT__idu__DOT__MemtoReg;
        CData/*0:0*/ ysyx_25030085_top__DOT__idu__DOT__RegWrite;
        CData/*0:0*/ ysyx_25030085_top__DOT__idu__DOT__Branch;
        CData/*1:0*/ ysyx_25030085_top__DOT__idu__DOT__Jump;
        CData/*0:0*/ ysyx_25030085_top__DOT__idu__DOT__ALUSrc;
        CData/*3:0*/ ysyx_25030085_top__DOT__idu__DOT__AluOp;
        CData/*1:0*/ ysyx_25030085_top__DOT__idu__DOT__csr_wen;
        CData/*0:0*/ ysyx_25030085_top__DOT__idu__DOT__is_ecall;
        CData/*0:0*/ ysyx_25030085_top__DOT__idu__DOT__is_mret;
        CData/*4:0*/ ysyx_25030085_top__DOT__regfile__DOT__rs1;
        CData/*4:0*/ ysyx_25030085_top__DOT__regfile__DOT__rs2;
        CData/*4:0*/ ysyx_25030085_top__DOT__regfile__DOT__rd;
        CData/*0:0*/ ysyx_25030085_top__DOT__regfile__DOT__is_en_display;
    };
    struct {
        CData/*1:0*/ ysyx_25030085_top__DOT__exu__DOT__state;
        CData/*4:0*/ ysyx_25030085_top__DOT__exu__DOT__rd;
        CData/*0:0*/ ysyx_25030085_top__DOT__lsbiu__DOT__AW_active;
        CData/*0:0*/ ysyx_25030085_top__DOT__lsbiu__DOT__W_active;
        CData/*0:0*/ ysyx_25030085_top__DOT__lsbiu__DOT__B_active;
        CData/*0:0*/ ysyx_25030085_top__DOT__lsbiu__DOT__AR_active;
        CData/*1:0*/ ysyx_25030085_top__DOT__arbiter__DOT__state;
        CData/*0:0*/ ysyx_25030085_top__DOT__sram__DOT__R_active;
        CData/*1:0*/ ysyx_25030085_top__DOT__lsu__DOT__state;
        CData/*0:0*/ ysyx_25030085_top__DOT__lsu__DOT__has_data;
        CData/*4:0*/ ysyx_25030085_top__DOT__lsu__DOT__rd;
        CData/*1:0*/ ysyx_25030085_top__DOT__wbu__DOT__state;
        CData/*0:0*/ ysyx_25030085_top__DOT__wbu__DOT__has_data;
        CData/*4:0*/ ysyx_25030085_top__DOT__wbu__DOT__rd;
        CData/*0:0*/ ysyx_25030085_top__DOT__wbu__DOT__wen;
        CData/*0:0*/ __Vdpi_export_trigger;
        CData/*1:0*/ __Vdly__ysyx_25030085_top__DOT__idu__DOT__state;
        CData/*1:0*/ __Vdly__ysyx_25030085_top__DOT__exu__DOT__state;
        CData/*0:0*/ __Vdly__ysyx_25030085_top__DOT__if_axi4_arvalid;
        CData/*0:0*/ __Vdly__ysyx_25030085_top__DOT__if_axi4_rready;
        CData/*0:0*/ __Vdly__ysyx_25030085_top__DOT__ls_axi4_arvalid;
        CData/*0:0*/ __Vdly__ysyx_25030085_top__DOT__ls_axi4_rready;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__rst;
        CData/*0:0*/ __Vtrigrprev__TOP__ysyx_25030085_top__DOT__idu__DOT__invalid;
        CData/*0:0*/ __Vtrigrprev__TOP__ysyx_25030085_top__DOT__idu__DOT__is_ebreak;
        CData/*0:0*/ __Vtrigrprev__TOP__ysyx_25030085_top__DOT__regfile__DOT__is_info_register;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_OUT(top_pc,31,0);
        VL_OUT(top_inst,31,0);
        IData/*31:0*/ ysyx_25030085_top__DOT__if_id_inst;
        IData/*31:0*/ ysyx_25030085_top__DOT__if_id_pc;
        IData/*31:0*/ ysyx_25030085_top__DOT__rs1_data;
        IData/*31:0*/ ysyx_25030085_top__DOT__rs2_data;
        IData/*31:0*/ ysyx_25030085_top__DOT__if_axi4_araddr;
        IData/*31:0*/ ysyx_25030085_top__DOT__if_axi4_rdata;
        IData/*31:0*/ ysyx_25030085_top__DOT__ls_axi4_araddr;
        IData/*31:0*/ ysyx_25030085_top__DOT__ls_axi4_rdata;
        IData/*31:0*/ ysyx_25030085_top__DOT__arb_mem_axi4_araddr;
        IData/*31:0*/ ysyx_25030085_top__DOT__arb_mem_axi4_rdata;
        IData/*31:0*/ ysyx_25030085_top__DOT__ls_axi4_awaddr;
        IData/*31:0*/ ysyx_25030085_top__DOT__ls_axi4_wdata;
        IData/*31:0*/ ysyx_25030085_top__DOT__if_addr;
        IData/*31:0*/ ysyx_25030085_top__DOT__biu_rdata_if;
        IData/*31:0*/ ysyx_25030085_top__DOT__lsu_wdata;
        IData/*31:0*/ ysyx_25030085_top__DOT__biu_rdata_ls;
        IData/*31:0*/ ysyx_25030085_top__DOT__ifu__DOT__current_pc;
        IData/*31:0*/ ysyx_25030085_top__DOT__ifu__DOT__inst_reg;
        IData/*31:0*/ ysyx_25030085_top__DOT__idu__DOT__inst;
        IData/*31:0*/ ysyx_25030085_top__DOT__idu__DOT__pc;
        IData/*31:0*/ ysyx_25030085_top__DOT__idu__DOT__imm;
        IData/*31:0*/ ysyx_25030085_top__DOT__idu__DOT__immI;
        IData/*31:0*/ ysyx_25030085_top__DOT__regfile__DOT__i;
        IData/*31:0*/ ysyx_25030085_top__DOT__regfile__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ ysyx_25030085_top__DOT__exu__DOT__rs1_data;
        IData/*31:0*/ ysyx_25030085_top__DOT__exu__DOT__rs2_data;
        IData/*31:0*/ ysyx_25030085_top__DOT__exu__DOT__pc;
        IData/*31:0*/ ysyx_25030085_top__DOT__exu__DOT__imm;
        IData/*31:0*/ ysyx_25030085_top__DOT__exu__DOT__reg_a5;
        IData/*20:0*/ ysyx_25030085_top__DOT__exu__DOT__ctrl;
        IData/*31:0*/ ysyx_25030085_top__DOT__exu__DOT__B;
        IData/*31:0*/ ysyx_25030085_top__DOT__exu__DOT__Alu_Result;
        IData/*31:0*/ ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus;
    };
    struct {
        IData/*31:0*/ ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec;
        IData/*31:0*/ ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc;
        IData/*31:0*/ ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause;
        IData/*31:0*/ ysyx_25030085_top__DOT__sram__DOT__s_rdata;
        IData/*31:0*/ ysyx_25030085_top__DOT__sram__DOT__write_addr_reg;
        IData/*31:0*/ ysyx_25030085_top__DOT__sram__DOT__write_data_reg;
        IData/*20:0*/ ysyx_25030085_top__DOT__lsu__DOT__ctrl;
        IData/*31:0*/ ysyx_25030085_top__DOT__lsu__DOT__wdata;
        IData/*31:0*/ ysyx_25030085_top__DOT__lsu__DOT__addr;
        IData/*31:0*/ ysyx_25030085_top__DOT__lsu__DOT__pc;
        IData/*31:0*/ ysyx_25030085_top__DOT__lsu__DOT__imm;
        IData/*31:0*/ ysyx_25030085_top__DOT__lsu__DOT__npc;
        IData/*31:0*/ ysyx_25030085_top__DOT__lsu__DOT__lsu_rdata;
        IData/*20:0*/ ysyx_25030085_top__DOT__wbu__DOT__ctrl;
        IData/*31:0*/ ysyx_25030085_top__DOT__wbu__DOT__npc;
        IData/*31:0*/ ysyx_25030085_top__DOT__wbu__DOT__pc;
        IData/*31:0*/ ysyx_25030085_top__DOT__wbu__DOT__imm;
        IData/*31:0*/ ysyx_25030085_top__DOT__wbu__DOT__csr_rdata;
        IData/*31:0*/ ysyx_25030085_top__DOT__wbu__DOT__mem_rdata;
        IData/*31:0*/ ysyx_25030085_top__DOT__wbu__DOT__alu_result;
        IData/*31:0*/ ysyx_25030085_top__DOT__wbu__DOT__wb_data;
        IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mepc;
        IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mstatus;
        IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mcause;
        IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__exu__DOT__csr_regfile_init__DOT__mtvec;
        IData/*31:0*/ __Vdly__ysyx_25030085_top__DOT__biu_rdata_if;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> ysyx_25030085_top__DOT__regfile__DOT__register;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
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
