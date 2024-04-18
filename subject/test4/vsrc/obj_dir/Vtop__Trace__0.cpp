// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->test__DOT__inputa),32);
        bufp->chgCData(oldp+1,(vlSelf->test__DOT__inputa0),4);
        bufp->chgCData(oldp+2,(vlSelf->test__DOT__inputb0),4);
        bufp->chgIData(oldp+3,(vlSelf->test__DOT__inputb),32);
        bufp->chgCData(oldp+4,(vlSelf->test__DOT__t),4);
        bufp->chgIData(oldp+5,(vlSelf->test__DOT__k),32);
        bufp->chgBit(oldp+6,(vlSelf->test__DOT__of));
        bufp->chgBit(oldp+7,(vlSelf->test__DOT__z));
        bufp->chgBit(oldp+8,(vlSelf->test__DOT__c));
        bufp->chgIData(oldp+9,(vlSelf->test__DOT__i),32);
        bufp->chgIData(oldp+10,(vlSelf->test__DOT__j),32);
    }
    bufp->chgBit(oldp+11,(vlSelf->sub_add));
    bufp->chgCData(oldp+12,((0xfU & ((IData)(vlSelf->test__DOT__inputa0) 
                                     + (((- (IData)((IData)(vlSelf->sub_add))) 
                                         ^ (IData)(vlSelf->test__DOT__inputb0)) 
                                        + (IData)(vlSelf->sub_add))))),4);
    bufp->chgBit(oldp+13,((1U & (((IData)(vlSelf->test__DOT__inputa0) 
                                  + (0xfU & (((- (IData)((IData)(vlSelf->sub_add))) 
                                              ^ (IData)(vlSelf->test__DOT__inputb0)) 
                                             + (IData)(vlSelf->sub_add)))) 
                                 >> 4U))));
    bufp->chgBit(oldp+14,((1U & (~ (IData)((0U != (0xfU 
                                                   & ((IData)(vlSelf->test__DOT__inputa0) 
                                                      + 
                                                      (((- (IData)((IData)(vlSelf->sub_add))) 
                                                        ^ (IData)(vlSelf->test__DOT__inputb0)) 
                                                       + (IData)(vlSelf->sub_add))))))))));
    bufp->chgBit(oldp+15,((((1U & ((IData)(vlSelf->test__DOT__inputa0) 
                                   >> 3U)) == (1U & 
                                               ((((- (IData)((IData)(vlSelf->sub_add))) 
                                                  ^ (IData)(vlSelf->test__DOT__inputb0)) 
                                                 + (IData)(vlSelf->sub_add)) 
                                                >> 3U))) 
                           & ((1U & (((IData)(vlSelf->test__DOT__inputa0) 
                                      + (((- (IData)((IData)(vlSelf->sub_add))) 
                                          ^ (IData)(vlSelf->test__DOT__inputb0)) 
                                         + (IData)(vlSelf->sub_add))) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelf->test__DOT__inputa0) 
                                                    >> 3U))))));
    bufp->chgCData(oldp+16,((0xfU & (((- (IData)((IData)(vlSelf->sub_add))) 
                                      ^ (IData)(vlSelf->test__DOT__inputb0)) 
                                     + (IData)(vlSelf->sub_add)))),4);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
