// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(in,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(out,0,0);
    CData/*3:0*/ top__DOT__state_din;
    CData/*3:0*/ top__DOT__state_dout;
    CData/*0:0*/ top__DOT__outMux__DOT__i0__DOT__lut_out;
    CData/*0:0*/ top__DOT__outMux__DOT__i0__DOT__hit;
    CData/*3:0*/ top__DOT__stateMux__DOT__i0__DOT__lut_out;
    CData/*0:0*/ top__DOT__stateMux__DOT__i0__DOT__hit;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*4:0*/, 9> top__DOT__outMux__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 9> top__DOT__outMux__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 9> top__DOT__outMux__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*7:0*/, 9> top__DOT__stateMux__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 9> top__DOT__stateMux__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*3:0*/, 9> top__DOT__stateMux__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
