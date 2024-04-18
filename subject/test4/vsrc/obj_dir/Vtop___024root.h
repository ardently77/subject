// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(sub_add,0,0);
    CData/*3:0*/ test__DOT__inputa0;
    CData/*3:0*/ test__DOT__inputb0;
    CData/*3:0*/ test__DOT__outputs;
    CData/*3:0*/ test__DOT__t;
    CData/*0:0*/ test__DOT__of;
    CData/*0:0*/ test__DOT__z;
    CData/*0:0*/ test__DOT__c;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ test__DOT__inputa;
    IData/*31:0*/ test__DOT__inputb;
    IData/*31:0*/ test__DOT__k;
    IData/*31:0*/ test__DOT__i;
    IData/*31:0*/ test__DOT__j;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
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
