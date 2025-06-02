// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_25030085_top__Syms.h"
#include "Vysyx_25030085_top.h"
#include "Vysyx_25030085_top___024root.h"
#include "Vysyx_25030085_top___024unit.h"

void Vysyx_25030085_top___024root____Vdpiexp_ysyx_25030085_top__DOT__regfile_init__DOT__info_register_en_TOP(Vysyx_25030085_top__Syms* __restrict vlSymsp, CData/*0:0*/ enable, CData/*0:0*/ en_display);

// FUNCTIONS
Vysyx_25030085_top__Syms::~Vysyx_25030085_top__Syms()
{
}

Vysyx_25030085_top__Syms::Vysyx_25030085_top__Syms(VerilatedContext* contextp, const char* namep, Vysyx_25030085_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_ysyx_25030085_top__regfile_init.configure(this, name(), "ysyx_25030085_top.regfile_init", "regfile_init", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ysyx_25030085_top__regfile_init.exportInsert(__Vfinal, "info_register_en", (void*)(&Vysyx_25030085_top___024root____Vdpiexp_ysyx_25030085_top__DOT__regfile_init__DOT__info_register_en_TOP));
    }
}
