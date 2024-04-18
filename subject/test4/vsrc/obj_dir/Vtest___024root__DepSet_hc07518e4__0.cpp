// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "verilated.h"

#include "Vtest___024root.h"

VlCoroutine Vtest___024root___eval_initial__TOP__0(Vtest___024root* vlSelf);

void Vtest___024root___eval_initial(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtest___024root___eval_initial__TOP__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtest___024root___eval_initial__TOP__0(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_initial__TOP__0\n"); );
    // Init
    CData/*0:0*/ test__DOT____Vconcswap_1_h8d8f16ce__0;
    test__DOT____Vconcswap_1_h8d8f16ce__0 = 0;
    CData/*3:0*/ test__DOT____Vconcswap_1_h7ef35b06__0;
    test__DOT____Vconcswap_1_h7ef35b06__0 = 0;
    CData/*3:0*/ __Vtask_test__DOT__check__0__results;
    __Vtask_test__DOT__check__0__results = 0;
    // Body
    vlSelf->test__DOT__inputa = 0U;
    vlSelf->test__DOT__inputa0 = 0U;
    vlSelf->test__DOT__inputb = 0U;
    vlSelf->test__DOT__inputb0 = 0U;
    vlSelf->test__DOT__k = 0U;
    vlSelf->test__DOT__of = 1U;
    vlSelf->test__DOT__z = 1U;
    vlSelf->test__DOT__t = (0xfU & ((- (IData)((IData)(vlSelf->sub_add))) 
                                    ^ (IData)(vlSelf->sub_add)));
    test__DOT____Vconcswap_1_h8d8f16ce__0 = (1U & (
                                                   ((IData)(vlSelf->sub_add)
                                                     ? (IData)(vlSelf->test__DOT__t)
                                                     : 0U) 
                                                   >> 4U));
    vlSelf->test__DOT__c = test__DOT____Vconcswap_1_h8d8f16ce__0;
    test__DOT____Vconcswap_1_h7ef35b06__0 = ((IData)(vlSelf->sub_add)
                                              ? (0xfU 
                                                 & (IData)(vlSelf->test__DOT__t))
                                              : 0U);
    vlSelf->test__DOT__t = test__DOT____Vconcswap_1_h7ef35b06__0;
    __Vtask_test__DOT__check__0__results = 0U;
    VL_WRITEF("Error:x=0,y=0,ctrl=%b,s should be 0,get %x\n",
              1,vlSelf->sub_add,4,(IData)(vlSelf->test__DOT__outputs));
    co_await vlSelf->__VdlySched.delay(1ULL, "test.v", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__j = 1U;
    vlSelf->test__DOT__inputa = 0U;
    vlSelf->test__DOT__inputa0 = 0U;
    vlSelf->test__DOT__inputb = 1U;
    vlSelf->test__DOT__inputb0 = 1U;
    vlSelf->test__DOT__k = ((IData)(vlSelf->sub_add)
                             ? (vlSelf->test__DOT__inputa 
                                - vlSelf->test__DOT__inputb)
                             : (vlSelf->test__DOT__inputa 
                                + vlSelf->test__DOT__inputb));
    vlSelf->test__DOT__of = ((0xfffffff8U > vlSelf->test__DOT__k) 
                             | (7U < vlSelf->test__DOT__k));
    vlSelf->test__DOT__z = (1U & (~ (IData)((0U != vlSelf->test__DOT__k))));
    vlSelf->test__DOT__t = (0xfU & ((- (IData)((IData)(vlSelf->sub_add))) 
                                    ^ ((IData)(vlSelf->test__DOT__inputb0) 
                                       + (IData)(vlSelf->sub_add))));
    test__DOT____Vconcswap_1_h8d8f16ce__0 = (1U & (
                                                   ((IData)(vlSelf->sub_add)
                                                     ? 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__t))
                                                     : 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__inputb0))) 
                                                   >> 4U));
    vlSelf->test__DOT__c = test__DOT____Vconcswap_1_h8d8f16ce__0;
    test__DOT____Vconcswap_1_h7ef35b06__0 = (0xfU & 
                                             ((IData)(vlSelf->sub_add)
                                               ? ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__t))
                                               : ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__inputb0))));
    vlSelf->test__DOT__t = test__DOT____Vconcswap_1_h7ef35b06__0;
    __Vtask_test__DOT__check__0__results = (0xfU & vlSelf->test__DOT__k);
    VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x,get %x\n",
              4,vlSelf->test__DOT__inputa0,4,(IData)(vlSelf->test__DOT__inputb0),
              1,vlSelf->sub_add,4,(IData)(__Vtask_test__DOT__check__0__results),
              4,vlSelf->test__DOT__outputs);
    co_await vlSelf->__VdlySched.delay(1ULL, "test.v", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__j = 2U;
    vlSelf->test__DOT__inputa = 0U;
    vlSelf->test__DOT__inputa0 = 0U;
    vlSelf->test__DOT__inputb = 2U;
    vlSelf->test__DOT__inputb0 = 2U;
    vlSelf->test__DOT__k = ((IData)(vlSelf->sub_add)
                             ? (vlSelf->test__DOT__inputa 
                                - vlSelf->test__DOT__inputb)
                             : (vlSelf->test__DOT__inputa 
                                + vlSelf->test__DOT__inputb));
    vlSelf->test__DOT__of = ((0xfffffff8U > vlSelf->test__DOT__k) 
                             | (7U < vlSelf->test__DOT__k));
    vlSelf->test__DOT__z = (1U & (~ (IData)((0U != vlSelf->test__DOT__k))));
    vlSelf->test__DOT__t = (0xfU & ((- (IData)((IData)(vlSelf->sub_add))) 
                                    ^ ((IData)(vlSelf->test__DOT__inputb0) 
                                       + (IData)(vlSelf->sub_add))));
    test__DOT____Vconcswap_1_h8d8f16ce__0 = (1U & (
                                                   ((IData)(vlSelf->sub_add)
                                                     ? 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__t))
                                                     : 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__inputb0))) 
                                                   >> 4U));
    vlSelf->test__DOT__c = test__DOT____Vconcswap_1_h8d8f16ce__0;
    test__DOT____Vconcswap_1_h7ef35b06__0 = (0xfU & 
                                             ((IData)(vlSelf->sub_add)
                                               ? ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__t))
                                               : ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__inputb0))));
    vlSelf->test__DOT__t = test__DOT____Vconcswap_1_h7ef35b06__0;
    __Vtask_test__DOT__check__0__results = (0xfU & vlSelf->test__DOT__k);
    VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x,get %x\n",
              4,vlSelf->test__DOT__inputa0,4,(IData)(vlSelf->test__DOT__inputb0),
              1,vlSelf->sub_add,4,(IData)(__Vtask_test__DOT__check__0__results),
              4,vlSelf->test__DOT__outputs);
    co_await vlSelf->__VdlySched.delay(1ULL, "test.v", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__j = 3U;
    vlSelf->test__DOT__inputa = 0U;
    vlSelf->test__DOT__inputa0 = 0U;
    vlSelf->test__DOT__inputb = 3U;
    vlSelf->test__DOT__inputb0 = 3U;
    vlSelf->test__DOT__k = ((IData)(vlSelf->sub_add)
                             ? (vlSelf->test__DOT__inputa 
                                - vlSelf->test__DOT__inputb)
                             : (vlSelf->test__DOT__inputa 
                                + vlSelf->test__DOT__inputb));
    vlSelf->test__DOT__of = ((0xfffffff8U > vlSelf->test__DOT__k) 
                             | (7U < vlSelf->test__DOT__k));
    vlSelf->test__DOT__z = (1U & (~ (IData)((0U != vlSelf->test__DOT__k))));
    vlSelf->test__DOT__t = (0xfU & ((- (IData)((IData)(vlSelf->sub_add))) 
                                    ^ ((IData)(vlSelf->test__DOT__inputb0) 
                                       + (IData)(vlSelf->sub_add))));
    test__DOT____Vconcswap_1_h8d8f16ce__0 = (1U & (
                                                   ((IData)(vlSelf->sub_add)
                                                     ? 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__t))
                                                     : 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__inputb0))) 
                                                   >> 4U));
    vlSelf->test__DOT__c = test__DOT____Vconcswap_1_h8d8f16ce__0;
    test__DOT____Vconcswap_1_h7ef35b06__0 = (0xfU & 
                                             ((IData)(vlSelf->sub_add)
                                               ? ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__t))
                                               : ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__inputb0))));
    vlSelf->test__DOT__t = test__DOT____Vconcswap_1_h7ef35b06__0;
    __Vtask_test__DOT__check__0__results = (0xfU & vlSelf->test__DOT__k);
    VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x,get %x\n",
              4,vlSelf->test__DOT__inputa0,4,(IData)(vlSelf->test__DOT__inputb0),
              1,vlSelf->sub_add,4,(IData)(__Vtask_test__DOT__check__0__results),
              4,vlSelf->test__DOT__outputs);
    co_await vlSelf->__VdlySched.delay(1ULL, "test.v", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__j = 4U;
    vlSelf->test__DOT__i = 1U;
    vlSelf->test__DOT__inputa = 1U;
    vlSelf->test__DOT__inputa0 = 1U;
    vlSelf->test__DOT__inputb = 0U;
    vlSelf->test__DOT__inputb0 = 0U;
    vlSelf->test__DOT__k = ((IData)(vlSelf->sub_add)
                             ? (vlSelf->test__DOT__inputa 
                                - vlSelf->test__DOT__inputb)
                             : (vlSelf->test__DOT__inputa 
                                + vlSelf->test__DOT__inputb));
    vlSelf->test__DOT__of = ((0xfffffff8U > vlSelf->test__DOT__k) 
                             | (7U < vlSelf->test__DOT__k));
    vlSelf->test__DOT__z = (1U & (~ (IData)((0U != vlSelf->test__DOT__k))));
    vlSelf->test__DOT__t = (0xfU & ((- (IData)((IData)(vlSelf->sub_add))) 
                                    ^ ((IData)(vlSelf->test__DOT__inputb0) 
                                       + (IData)(vlSelf->sub_add))));
    test__DOT____Vconcswap_1_h8d8f16ce__0 = (1U & (
                                                   ((IData)(vlSelf->sub_add)
                                                     ? 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__t))
                                                     : 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__inputb0))) 
                                                   >> 4U));
    vlSelf->test__DOT__c = test__DOT____Vconcswap_1_h8d8f16ce__0;
    test__DOT____Vconcswap_1_h7ef35b06__0 = (0xfU & 
                                             ((IData)(vlSelf->sub_add)
                                               ? ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__t))
                                               : ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__inputb0))));
    vlSelf->test__DOT__t = test__DOT____Vconcswap_1_h7ef35b06__0;
    __Vtask_test__DOT__check__0__results = (0xfU & vlSelf->test__DOT__k);
    VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x,get %x\n",
              4,vlSelf->test__DOT__inputa0,4,(IData)(vlSelf->test__DOT__inputb0),
              1,vlSelf->sub_add,4,(IData)(__Vtask_test__DOT__check__0__results),
              4,vlSelf->test__DOT__outputs);
    co_await vlSelf->__VdlySched.delay(1ULL, "test.v", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__j = 1U;
    vlSelf->test__DOT__inputa = 1U;
    vlSelf->test__DOT__inputa0 = 1U;
    vlSelf->test__DOT__inputb = 1U;
    vlSelf->test__DOT__inputb0 = 1U;
    vlSelf->test__DOT__k = ((IData)(vlSelf->sub_add)
                             ? (vlSelf->test__DOT__inputa 
                                - vlSelf->test__DOT__inputb)
                             : (vlSelf->test__DOT__inputa 
                                + vlSelf->test__DOT__inputb));
    vlSelf->test__DOT__of = ((0xfffffff8U > vlSelf->test__DOT__k) 
                             | (7U < vlSelf->test__DOT__k));
    vlSelf->test__DOT__z = (1U & (~ (IData)((0U != vlSelf->test__DOT__k))));
    vlSelf->test__DOT__t = (0xfU & ((- (IData)((IData)(vlSelf->sub_add))) 
                                    ^ ((IData)(vlSelf->test__DOT__inputb0) 
                                       + (IData)(vlSelf->sub_add))));
    test__DOT____Vconcswap_1_h8d8f16ce__0 = (1U & (
                                                   ((IData)(vlSelf->sub_add)
                                                     ? 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__t))
                                                     : 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__inputb0))) 
                                                   >> 4U));
    vlSelf->test__DOT__c = test__DOT____Vconcswap_1_h8d8f16ce__0;
    test__DOT____Vconcswap_1_h7ef35b06__0 = (0xfU & 
                                             ((IData)(vlSelf->sub_add)
                                               ? ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__t))
                                               : ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__inputb0))));
    vlSelf->test__DOT__t = test__DOT____Vconcswap_1_h7ef35b06__0;
    __Vtask_test__DOT__check__0__results = (0xfU & vlSelf->test__DOT__k);
    VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x,get %x\n",
              4,vlSelf->test__DOT__inputa0,4,(IData)(vlSelf->test__DOT__inputb0),
              1,vlSelf->sub_add,4,(IData)(__Vtask_test__DOT__check__0__results),
              4,vlSelf->test__DOT__outputs);
    co_await vlSelf->__VdlySched.delay(1ULL, "test.v", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__j = 2U;
    vlSelf->test__DOT__inputa = 1U;
    vlSelf->test__DOT__inputa0 = 1U;
    vlSelf->test__DOT__inputb = 2U;
    vlSelf->test__DOT__inputb0 = 2U;
    vlSelf->test__DOT__k = ((IData)(vlSelf->sub_add)
                             ? (vlSelf->test__DOT__inputa 
                                - vlSelf->test__DOT__inputb)
                             : (vlSelf->test__DOT__inputa 
                                + vlSelf->test__DOT__inputb));
    vlSelf->test__DOT__of = ((0xfffffff8U > vlSelf->test__DOT__k) 
                             | (7U < vlSelf->test__DOT__k));
    vlSelf->test__DOT__z = (1U & (~ (IData)((0U != vlSelf->test__DOT__k))));
    vlSelf->test__DOT__t = (0xfU & ((- (IData)((IData)(vlSelf->sub_add))) 
                                    ^ ((IData)(vlSelf->test__DOT__inputb0) 
                                       + (IData)(vlSelf->sub_add))));
    test__DOT____Vconcswap_1_h8d8f16ce__0 = (1U & (
                                                   ((IData)(vlSelf->sub_add)
                                                     ? 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__t))
                                                     : 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__inputb0))) 
                                                   >> 4U));
    vlSelf->test__DOT__c = test__DOT____Vconcswap_1_h8d8f16ce__0;
    test__DOT____Vconcswap_1_h7ef35b06__0 = (0xfU & 
                                             ((IData)(vlSelf->sub_add)
                                               ? ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__t))
                                               : ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__inputb0))));
    vlSelf->test__DOT__t = test__DOT____Vconcswap_1_h7ef35b06__0;
    __Vtask_test__DOT__check__0__results = (0xfU & vlSelf->test__DOT__k);
    VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x,get %x\n",
              4,vlSelf->test__DOT__inputa0,4,(IData)(vlSelf->test__DOT__inputb0),
              1,vlSelf->sub_add,4,(IData)(__Vtask_test__DOT__check__0__results),
              4,vlSelf->test__DOT__outputs);
    co_await vlSelf->__VdlySched.delay(1ULL, "test.v", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__j = 3U;
    vlSelf->test__DOT__inputa = 1U;
    vlSelf->test__DOT__inputa0 = 1U;
    vlSelf->test__DOT__inputb = 3U;
    vlSelf->test__DOT__inputb0 = 3U;
    vlSelf->test__DOT__k = ((IData)(vlSelf->sub_add)
                             ? (vlSelf->test__DOT__inputa 
                                - vlSelf->test__DOT__inputb)
                             : (vlSelf->test__DOT__inputa 
                                + vlSelf->test__DOT__inputb));
    vlSelf->test__DOT__of = ((0xfffffff8U > vlSelf->test__DOT__k) 
                             | (7U < vlSelf->test__DOT__k));
    vlSelf->test__DOT__z = (1U & (~ (IData)((0U != vlSelf->test__DOT__k))));
    vlSelf->test__DOT__t = (0xfU & ((- (IData)((IData)(vlSelf->sub_add))) 
                                    ^ ((IData)(vlSelf->test__DOT__inputb0) 
                                       + (IData)(vlSelf->sub_add))));
    test__DOT____Vconcswap_1_h8d8f16ce__0 = (1U & (
                                                   ((IData)(vlSelf->sub_add)
                                                     ? 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__t))
                                                     : 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__inputb0))) 
                                                   >> 4U));
    vlSelf->test__DOT__c = test__DOT____Vconcswap_1_h8d8f16ce__0;
    test__DOT____Vconcswap_1_h7ef35b06__0 = (0xfU & 
                                             ((IData)(vlSelf->sub_add)
                                               ? ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__t))
                                               : ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__inputb0))));
    vlSelf->test__DOT__t = test__DOT____Vconcswap_1_h7ef35b06__0;
    __Vtask_test__DOT__check__0__results = (0xfU & vlSelf->test__DOT__k);
    VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x,get %x\n",
              4,vlSelf->test__DOT__inputa0,4,(IData)(vlSelf->test__DOT__inputb0),
              1,vlSelf->sub_add,4,(IData)(__Vtask_test__DOT__check__0__results),
              4,vlSelf->test__DOT__outputs);
    co_await vlSelf->__VdlySched.delay(1ULL, "test.v", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__j = 4U;
    vlSelf->test__DOT__i = 2U;
    vlSelf->test__DOT__inputa = 2U;
    vlSelf->test__DOT__inputa0 = 2U;
    vlSelf->test__DOT__inputb = 0U;
    vlSelf->test__DOT__inputb0 = 0U;
    vlSelf->test__DOT__k = ((IData)(vlSelf->sub_add)
                             ? (vlSelf->test__DOT__inputa 
                                - vlSelf->test__DOT__inputb)
                             : (vlSelf->test__DOT__inputa 
                                + vlSelf->test__DOT__inputb));
    vlSelf->test__DOT__of = ((0xfffffff8U > vlSelf->test__DOT__k) 
                             | (7U < vlSelf->test__DOT__k));
    vlSelf->test__DOT__z = (1U & (~ (IData)((0U != vlSelf->test__DOT__k))));
    vlSelf->test__DOT__t = (0xfU & ((- (IData)((IData)(vlSelf->sub_add))) 
                                    ^ ((IData)(vlSelf->test__DOT__inputb0) 
                                       + (IData)(vlSelf->sub_add))));
    test__DOT____Vconcswap_1_h8d8f16ce__0 = (1U & (
                                                   ((IData)(vlSelf->sub_add)
                                                     ? 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__t))
                                                     : 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__inputb0))) 
                                                   >> 4U));
    vlSelf->test__DOT__c = test__DOT____Vconcswap_1_h8d8f16ce__0;
    test__DOT____Vconcswap_1_h7ef35b06__0 = (0xfU & 
                                             ((IData)(vlSelf->sub_add)
                                               ? ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__t))
                                               : ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__inputb0))));
    vlSelf->test__DOT__t = test__DOT____Vconcswap_1_h7ef35b06__0;
    __Vtask_test__DOT__check__0__results = (0xfU & vlSelf->test__DOT__k);
    VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x,get %x\n",
              4,vlSelf->test__DOT__inputa0,4,(IData)(vlSelf->test__DOT__inputb0),
              1,vlSelf->sub_add,4,(IData)(__Vtask_test__DOT__check__0__results),
              4,vlSelf->test__DOT__outputs);
    co_await vlSelf->__VdlySched.delay(1ULL, "test.v", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__j = 1U;
    vlSelf->test__DOT__inputa = 2U;
    vlSelf->test__DOT__inputa0 = 2U;
    vlSelf->test__DOT__inputb = 1U;
    vlSelf->test__DOT__inputb0 = 1U;
    vlSelf->test__DOT__k = ((IData)(vlSelf->sub_add)
                             ? (vlSelf->test__DOT__inputa 
                                - vlSelf->test__DOT__inputb)
                             : (vlSelf->test__DOT__inputa 
                                + vlSelf->test__DOT__inputb));
    vlSelf->test__DOT__of = ((0xfffffff8U > vlSelf->test__DOT__k) 
                             | (7U < vlSelf->test__DOT__k));
    vlSelf->test__DOT__z = (1U & (~ (IData)((0U != vlSelf->test__DOT__k))));
    vlSelf->test__DOT__t = (0xfU & ((- (IData)((IData)(vlSelf->sub_add))) 
                                    ^ ((IData)(vlSelf->test__DOT__inputb0) 
                                       + (IData)(vlSelf->sub_add))));
    test__DOT____Vconcswap_1_h8d8f16ce__0 = (1U & (
                                                   ((IData)(vlSelf->sub_add)
                                                     ? 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__t))
                                                     : 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__inputb0))) 
                                                   >> 4U));
    vlSelf->test__DOT__c = test__DOT____Vconcswap_1_h8d8f16ce__0;
    test__DOT____Vconcswap_1_h7ef35b06__0 = (0xfU & 
                                             ((IData)(vlSelf->sub_add)
                                               ? ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__t))
                                               : ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__inputb0))));
    vlSelf->test__DOT__t = test__DOT____Vconcswap_1_h7ef35b06__0;
    __Vtask_test__DOT__check__0__results = (0xfU & vlSelf->test__DOT__k);
    VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x,get %x\n",
              4,vlSelf->test__DOT__inputa0,4,(IData)(vlSelf->test__DOT__inputb0),
              1,vlSelf->sub_add,4,(IData)(__Vtask_test__DOT__check__0__results),
              4,vlSelf->test__DOT__outputs);
    co_await vlSelf->__VdlySched.delay(1ULL, "test.v", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__j = 2U;
    vlSelf->test__DOT__inputa = 2U;
    vlSelf->test__DOT__inputa0 = 2U;
    vlSelf->test__DOT__inputb = 2U;
    vlSelf->test__DOT__inputb0 = 2U;
    vlSelf->test__DOT__k = ((IData)(vlSelf->sub_add)
                             ? (vlSelf->test__DOT__inputa 
                                - vlSelf->test__DOT__inputb)
                             : (vlSelf->test__DOT__inputa 
                                + vlSelf->test__DOT__inputb));
    vlSelf->test__DOT__of = ((0xfffffff8U > vlSelf->test__DOT__k) 
                             | (7U < vlSelf->test__DOT__k));
    vlSelf->test__DOT__z = (1U & (~ (IData)((0U != vlSelf->test__DOT__k))));
    vlSelf->test__DOT__t = (0xfU & ((- (IData)((IData)(vlSelf->sub_add))) 
                                    ^ ((IData)(vlSelf->test__DOT__inputb0) 
                                       + (IData)(vlSelf->sub_add))));
    test__DOT____Vconcswap_1_h8d8f16ce__0 = (1U & (
                                                   ((IData)(vlSelf->sub_add)
                                                     ? 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__t))
                                                     : 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__inputb0))) 
                                                   >> 4U));
    vlSelf->test__DOT__c = test__DOT____Vconcswap_1_h8d8f16ce__0;
    test__DOT____Vconcswap_1_h7ef35b06__0 = (0xfU & 
                                             ((IData)(vlSelf->sub_add)
                                               ? ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__t))
                                               : ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__inputb0))));
    vlSelf->test__DOT__t = test__DOT____Vconcswap_1_h7ef35b06__0;
    __Vtask_test__DOT__check__0__results = (0xfU & vlSelf->test__DOT__k);
    VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x,get %x\n",
              4,vlSelf->test__DOT__inputa0,4,(IData)(vlSelf->test__DOT__inputb0),
              1,vlSelf->sub_add,4,(IData)(__Vtask_test__DOT__check__0__results),
              4,vlSelf->test__DOT__outputs);
    co_await vlSelf->__VdlySched.delay(1ULL, "test.v", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__j = 3U;
    vlSelf->test__DOT__inputa = 2U;
    vlSelf->test__DOT__inputa0 = 2U;
    vlSelf->test__DOT__inputb = 3U;
    vlSelf->test__DOT__inputb0 = 3U;
    vlSelf->test__DOT__k = ((IData)(vlSelf->sub_add)
                             ? (vlSelf->test__DOT__inputa 
                                - vlSelf->test__DOT__inputb)
                             : (vlSelf->test__DOT__inputa 
                                + vlSelf->test__DOT__inputb));
    vlSelf->test__DOT__of = ((0xfffffff8U > vlSelf->test__DOT__k) 
                             | (7U < vlSelf->test__DOT__k));
    vlSelf->test__DOT__z = (1U & (~ (IData)((0U != vlSelf->test__DOT__k))));
    vlSelf->test__DOT__t = (0xfU & ((- (IData)((IData)(vlSelf->sub_add))) 
                                    ^ ((IData)(vlSelf->test__DOT__inputb0) 
                                       + (IData)(vlSelf->sub_add))));
    test__DOT____Vconcswap_1_h8d8f16ce__0 = (1U & (
                                                   ((IData)(vlSelf->sub_add)
                                                     ? 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__t))
                                                     : 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__inputb0))) 
                                                   >> 4U));
    vlSelf->test__DOT__c = test__DOT____Vconcswap_1_h8d8f16ce__0;
    test__DOT____Vconcswap_1_h7ef35b06__0 = (0xfU & 
                                             ((IData)(vlSelf->sub_add)
                                               ? ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__t))
                                               : ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__inputb0))));
    vlSelf->test__DOT__t = test__DOT____Vconcswap_1_h7ef35b06__0;
    __Vtask_test__DOT__check__0__results = (0xfU & vlSelf->test__DOT__k);
    VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x,get %x\n",
              4,vlSelf->test__DOT__inputa0,4,(IData)(vlSelf->test__DOT__inputb0),
              1,vlSelf->sub_add,4,(IData)(__Vtask_test__DOT__check__0__results),
              4,vlSelf->test__DOT__outputs);
    co_await vlSelf->__VdlySched.delay(1ULL, "test.v", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__j = 4U;
    vlSelf->test__DOT__i = 3U;
    vlSelf->test__DOT__inputa = 3U;
    vlSelf->test__DOT__inputa0 = 3U;
    vlSelf->test__DOT__inputb = 0U;
    vlSelf->test__DOT__inputb0 = 0U;
    vlSelf->test__DOT__k = ((IData)(vlSelf->sub_add)
                             ? (vlSelf->test__DOT__inputa 
                                - vlSelf->test__DOT__inputb)
                             : (vlSelf->test__DOT__inputa 
                                + vlSelf->test__DOT__inputb));
    vlSelf->test__DOT__of = ((0xfffffff8U > vlSelf->test__DOT__k) 
                             | (7U < vlSelf->test__DOT__k));
    vlSelf->test__DOT__z = (1U & (~ (IData)((0U != vlSelf->test__DOT__k))));
    vlSelf->test__DOT__t = (0xfU & ((- (IData)((IData)(vlSelf->sub_add))) 
                                    ^ ((IData)(vlSelf->test__DOT__inputb0) 
                                       + (IData)(vlSelf->sub_add))));
    test__DOT____Vconcswap_1_h8d8f16ce__0 = (1U & (
                                                   ((IData)(vlSelf->sub_add)
                                                     ? 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__t))
                                                     : 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__inputb0))) 
                                                   >> 4U));
    vlSelf->test__DOT__c = test__DOT____Vconcswap_1_h8d8f16ce__0;
    test__DOT____Vconcswap_1_h7ef35b06__0 = (0xfU & 
                                             ((IData)(vlSelf->sub_add)
                                               ? ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__t))
                                               : ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__inputb0))));
    vlSelf->test__DOT__t = test__DOT____Vconcswap_1_h7ef35b06__0;
    __Vtask_test__DOT__check__0__results = (0xfU & vlSelf->test__DOT__k);
    VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x,get %x\n",
              4,vlSelf->test__DOT__inputa0,4,(IData)(vlSelf->test__DOT__inputb0),
              1,vlSelf->sub_add,4,(IData)(__Vtask_test__DOT__check__0__results),
              4,vlSelf->test__DOT__outputs);
    co_await vlSelf->__VdlySched.delay(1ULL, "test.v", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__j = 1U;
    vlSelf->test__DOT__inputa = 3U;
    vlSelf->test__DOT__inputa0 = 3U;
    vlSelf->test__DOT__inputb = 1U;
    vlSelf->test__DOT__inputb0 = 1U;
    vlSelf->test__DOT__k = ((IData)(vlSelf->sub_add)
                             ? (vlSelf->test__DOT__inputa 
                                - vlSelf->test__DOT__inputb)
                             : (vlSelf->test__DOT__inputa 
                                + vlSelf->test__DOT__inputb));
    vlSelf->test__DOT__of = ((0xfffffff8U > vlSelf->test__DOT__k) 
                             | (7U < vlSelf->test__DOT__k));
    vlSelf->test__DOT__z = (1U & (~ (IData)((0U != vlSelf->test__DOT__k))));
    vlSelf->test__DOT__t = (0xfU & ((- (IData)((IData)(vlSelf->sub_add))) 
                                    ^ ((IData)(vlSelf->test__DOT__inputb0) 
                                       + (IData)(vlSelf->sub_add))));
    test__DOT____Vconcswap_1_h8d8f16ce__0 = (1U & (
                                                   ((IData)(vlSelf->sub_add)
                                                     ? 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__t))
                                                     : 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__inputb0))) 
                                                   >> 4U));
    vlSelf->test__DOT__c = test__DOT____Vconcswap_1_h8d8f16ce__0;
    test__DOT____Vconcswap_1_h7ef35b06__0 = (0xfU & 
                                             ((IData)(vlSelf->sub_add)
                                               ? ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__t))
                                               : ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__inputb0))));
    vlSelf->test__DOT__t = test__DOT____Vconcswap_1_h7ef35b06__0;
    __Vtask_test__DOT__check__0__results = (0xfU & vlSelf->test__DOT__k);
    VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x,get %x\n",
              4,vlSelf->test__DOT__inputa0,4,(IData)(vlSelf->test__DOT__inputb0),
              1,vlSelf->sub_add,4,(IData)(__Vtask_test__DOT__check__0__results),
              4,vlSelf->test__DOT__outputs);
    co_await vlSelf->__VdlySched.delay(1ULL, "test.v", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__j = 2U;
    vlSelf->test__DOT__inputa = 3U;
    vlSelf->test__DOT__inputa0 = 3U;
    vlSelf->test__DOT__inputb = 2U;
    vlSelf->test__DOT__inputb0 = 2U;
    vlSelf->test__DOT__k = ((IData)(vlSelf->sub_add)
                             ? (vlSelf->test__DOT__inputa 
                                - vlSelf->test__DOT__inputb)
                             : (vlSelf->test__DOT__inputa 
                                + vlSelf->test__DOT__inputb));
    vlSelf->test__DOT__of = ((0xfffffff8U > vlSelf->test__DOT__k) 
                             | (7U < vlSelf->test__DOT__k));
    vlSelf->test__DOT__z = (1U & (~ (IData)((0U != vlSelf->test__DOT__k))));
    vlSelf->test__DOT__t = (0xfU & ((- (IData)((IData)(vlSelf->sub_add))) 
                                    ^ ((IData)(vlSelf->test__DOT__inputb0) 
                                       + (IData)(vlSelf->sub_add))));
    test__DOT____Vconcswap_1_h8d8f16ce__0 = (1U & (
                                                   ((IData)(vlSelf->sub_add)
                                                     ? 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__t))
                                                     : 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__inputb0))) 
                                                   >> 4U));
    vlSelf->test__DOT__c = test__DOT____Vconcswap_1_h8d8f16ce__0;
    test__DOT____Vconcswap_1_h7ef35b06__0 = (0xfU & 
                                             ((IData)(vlSelf->sub_add)
                                               ? ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__t))
                                               : ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__inputb0))));
    vlSelf->test__DOT__t = test__DOT____Vconcswap_1_h7ef35b06__0;
    __Vtask_test__DOT__check__0__results = (0xfU & vlSelf->test__DOT__k);
    VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x,get %x\n",
              4,vlSelf->test__DOT__inputa0,4,(IData)(vlSelf->test__DOT__inputb0),
              1,vlSelf->sub_add,4,(IData)(__Vtask_test__DOT__check__0__results),
              4,vlSelf->test__DOT__outputs);
    co_await vlSelf->__VdlySched.delay(1ULL, "test.v", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__j = 3U;
    vlSelf->test__DOT__inputa = 3U;
    vlSelf->test__DOT__inputa0 = 3U;
    vlSelf->test__DOT__inputb = 3U;
    vlSelf->test__DOT__inputb0 = 3U;
    vlSelf->test__DOT__k = ((IData)(vlSelf->sub_add)
                             ? (vlSelf->test__DOT__inputa 
                                - vlSelf->test__DOT__inputb)
                             : (vlSelf->test__DOT__inputa 
                                + vlSelf->test__DOT__inputb));
    vlSelf->test__DOT__of = ((0xfffffff8U > vlSelf->test__DOT__k) 
                             | (7U < vlSelf->test__DOT__k));
    vlSelf->test__DOT__z = (1U & (~ (IData)((0U != vlSelf->test__DOT__k))));
    vlSelf->test__DOT__t = (0xfU & ((- (IData)((IData)(vlSelf->sub_add))) 
                                    ^ ((IData)(vlSelf->test__DOT__inputb0) 
                                       + (IData)(vlSelf->sub_add))));
    test__DOT____Vconcswap_1_h7ef35b06__0 = (0xfU & 
                                             ((IData)(vlSelf->sub_add)
                                               ? ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__t))
                                               : ((IData)(vlSelf->test__DOT__inputa0) 
                                                  + (IData)(vlSelf->test__DOT__inputb0))));
    test__DOT____Vconcswap_1_h8d8f16ce__0 = (1U & (
                                                   ((IData)(vlSelf->sub_add)
                                                     ? 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__t))
                                                     : 
                                                    ((IData)(vlSelf->test__DOT__inputa0) 
                                                     + (IData)(vlSelf->test__DOT__inputb0))) 
                                                   >> 4U));
    vlSelf->test__DOT__c = test__DOT____Vconcswap_1_h8d8f16ce__0;
    vlSelf->test__DOT__t = test__DOT____Vconcswap_1_h7ef35b06__0;
    __Vtask_test__DOT__check__0__results = (0xfU & vlSelf->test__DOT__k);
    VL_WRITEF("Error:x=%x,y=%x,ctrl=%b,s should be %x,get %x\n",
              4,vlSelf->test__DOT__inputa0,4,(IData)(vlSelf->test__DOT__inputb0),
              1,vlSelf->sub_add,4,(IData)(__Vtask_test__DOT__check__0__results),
              4,vlSelf->test__DOT__outputs);
    co_await vlSelf->__VdlySched.delay(1ULL, "test.v", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test__DOT__j = 4U;
    vlSelf->test__DOT__i = 4U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Vtest___024root___ico_sequent__TOP__0(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->test__DOT__outputs = (0xfU & ((IData)(vlSelf->test__DOT__inputa0) 
                                          + (((- (IData)((IData)(vlSelf->sub_add))) 
                                              ^ (IData)(vlSelf->test__DOT__inputb0)) 
                                             + (IData)(vlSelf->sub_add))));
}

void Vtest___024root___eval_ico(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtest___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtest___024root___eval_act(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        Vtest___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtest___024root___eval_nba(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtest___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtest___024root___eval_triggers__ico(Vtest___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest___024root___dump_triggers__ico(Vtest___024root* vlSelf);
#endif  // VL_DEBUG
void Vtest___024root___eval_triggers__act(Vtest___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest___024root___dump_triggers__act(Vtest___024root* vlSelf);
#endif  // VL_DEBUG
void Vtest___024root___timing_resume(Vtest___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest___024root___dump_triggers__nba(Vtest___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest___024root___eval(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtest___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtest___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("test.v", 4, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtest___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtest___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtest___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("test.v", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtest___024root___timing_resume(vlSelf);
                Vtest___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtest___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("test.v", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtest___024root___eval_nba(vlSelf);
        }
    }
}

void Vtest___024root___timing_resume(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtest___024root___eval_debug_assertions(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->sub_add & 0xfeU))) {
        Verilated::overWidthError("sub_add");}
}
#endif  // VL_DEBUG
