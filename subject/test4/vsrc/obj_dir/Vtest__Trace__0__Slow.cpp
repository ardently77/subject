// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest__Syms.h"


VL_ATTR_COLD void Vtest___024root__trace_init_sub__TOP__0(Vtest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+12,"sub_add", false,-1);
    tracep->pushNamePrefix("test ");
    tracep->declBit(c+12,"sub_add", false,-1);
    tracep->declBus(c+1,"inputa", false,-1, 31,0);
    tracep->declBus(c+2,"inputa0", false,-1, 3,0);
    tracep->declBus(c+3,"inputb0", false,-1, 3,0);
    tracep->declBus(c+4,"inputb", false,-1, 31,0);
    tracep->declBus(c+13,"outputs", false,-1, 3,0);
    tracep->declBit(c+14,"carry", false,-1);
    tracep->declBit(c+15,"zero", false,-1);
    tracep->declBit(c+16,"overflow", false,-1);
    tracep->declBus(c+5,"t", false,-1, 3,0);
    tracep->declBus(c+6,"k", false,-1, 31,0);
    tracep->declBit(c+7,"of", false,-1);
    tracep->declBit(c+8,"z", false,-1);
    tracep->declBit(c+9,"c", false,-1);
    tracep->declBus(c+10,"i", false,-1, 31,0);
    tracep->declBus(c+11,"j", false,-1, 31,0);
    tracep->pushNamePrefix("top0 ");
    tracep->declBit(c+12,"sub_add", false,-1);
    tracep->declBus(c+2,"a", false,-1, 3,0);
    tracep->declBus(c+3,"b", false,-1, 3,0);
    tracep->declBit(c+16,"overflow", false,-1);
    tracep->declBit(c+15,"zero", false,-1);
    tracep->declBit(c+14,"carry", false,-1);
    tracep->declBus(c+13,"result", false,-1, 3,0);
    tracep->declBus(c+17,"t_add_cin", false,-1, 3,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtest___024root__trace_init_top(Vtest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_init_top\n"); );
    // Body
    Vtest___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtest___024root__trace_register(Vtest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtest___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtest___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtest___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest___024root__trace_full_sub_0(Vtest___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_full_top_0\n"); );
    // Init
    Vtest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest___024root*>(voidSelf);
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest___024root__trace_full_sub_0(Vtest___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->test__DOT__inputa),32);
    bufp->fullCData(oldp+2,(vlSelf->test__DOT__inputa0),4);
    bufp->fullCData(oldp+3,(vlSelf->test__DOT__inputb0),4);
    bufp->fullIData(oldp+4,(vlSelf->test__DOT__inputb),32);
    bufp->fullCData(oldp+5,(vlSelf->test__DOT__t),4);
    bufp->fullIData(oldp+6,(vlSelf->test__DOT__k),32);
    bufp->fullBit(oldp+7,(vlSelf->test__DOT__of));
    bufp->fullBit(oldp+8,(vlSelf->test__DOT__z));
    bufp->fullBit(oldp+9,(vlSelf->test__DOT__c));
    bufp->fullIData(oldp+10,(vlSelf->test__DOT__i),32);
    bufp->fullIData(oldp+11,(vlSelf->test__DOT__j),32);
    bufp->fullBit(oldp+12,(vlSelf->sub_add));
    bufp->fullCData(oldp+13,((0xfU & ((IData)(vlSelf->test__DOT__inputa0) 
                                      + (((- (IData)((IData)(vlSelf->sub_add))) 
                                          ^ (IData)(vlSelf->test__DOT__inputb0)) 
                                         + (IData)(vlSelf->sub_add))))),4);
    bufp->fullBit(oldp+14,((1U & (((IData)(vlSelf->test__DOT__inputa0) 
                                   + (0xfU & (((- (IData)((IData)(vlSelf->sub_add))) 
                                               ^ (IData)(vlSelf->test__DOT__inputb0)) 
                                              + (IData)(vlSelf->sub_add)))) 
                                  >> 4U))));
    bufp->fullBit(oldp+15,((1U & (~ (IData)((0U != 
                                             (0xfU 
                                              & ((IData)(vlSelf->test__DOT__inputa0) 
                                                 + 
                                                 (((- (IData)((IData)(vlSelf->sub_add))) 
                                                   ^ (IData)(vlSelf->test__DOT__inputb0)) 
                                                  + (IData)(vlSelf->sub_add))))))))));
    bufp->fullBit(oldp+16,((((1U & ((IData)(vlSelf->test__DOT__inputa0) 
                                    >> 3U)) == (1U 
                                                & ((((- (IData)((IData)(vlSelf->sub_add))) 
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
    bufp->fullCData(oldp+17,((0xfU & (((- (IData)((IData)(vlSelf->sub_add))) 
                                       ^ (IData)(vlSelf->test__DOT__inputb0)) 
                                      + (IData)(vlSelf->sub_add)))),4);
}
