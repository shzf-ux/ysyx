// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_25030085_top.h"
#include "Vysyx_25030085_top__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_25030085_top::Vysyx_25030085_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vysyx_25030085_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , instruction{vlSymsp->TOP.instruction}
    , pc_out{vlSymsp->TOP.pc_out}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vysyx_25030085_top::Vysyx_25030085_top(const char* _vcname__)
    : Vysyx_25030085_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vysyx_25030085_top::~Vysyx_25030085_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vysyx_25030085_top___024root___eval_debug_assertions(Vysyx_25030085_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_25030085_top___024root___eval_static(Vysyx_25030085_top___024root* vlSelf);
void Vysyx_25030085_top___024root___eval_initial(Vysyx_25030085_top___024root* vlSelf);
void Vysyx_25030085_top___024root___eval_settle(Vysyx_25030085_top___024root* vlSelf);
void Vysyx_25030085_top___024root___eval(Vysyx_25030085_top___024root* vlSelf);

void Vysyx_25030085_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_25030085_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_25030085_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vysyx_25030085_top___024root___eval_static(&(vlSymsp->TOP));
        Vysyx_25030085_top___024root___eval_initial(&(vlSymsp->TOP));
        Vysyx_25030085_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vysyx_25030085_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vysyx_25030085_top::eventsPending() { return false; }

uint64_t Vysyx_25030085_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vysyx_25030085_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vysyx_25030085_top___024root___eval_final(Vysyx_25030085_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25030085_top::final() {
    Vysyx_25030085_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vysyx_25030085_top::hierName() const { return vlSymsp->name(); }
const char* Vysyx_25030085_top::modelName() const { return "Vysyx_25030085_top"; }
unsigned Vysyx_25030085_top::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vysyx_25030085_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vysyx_25030085_top___024root__trace_init_top(Vysyx_25030085_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_25030085_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25030085_top___024root*>(voidSelf);
    Vysyx_25030085_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vysyx_25030085_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vysyx_25030085_top___024root__trace_register(Vysyx_25030085_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vysyx_25030085_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vysyx_25030085_top::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vysyx_25030085_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
