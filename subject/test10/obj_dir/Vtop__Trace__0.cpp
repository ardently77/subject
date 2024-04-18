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
    VlWide<3>/*95:0*/ __Vtemp_h573b1681__0;
    VlWide<3>/*95:0*/ __Vtemp_h4489e183__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[1]),5);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[2]),5);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[3]),5);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[4]),5);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[5]),5);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[6]),5);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[7]),5);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[8]),5);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[6]),4);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[7]),4);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[8]),4);
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[5]));
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[6]));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[7]));
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[8]));
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[6]),4);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[7]),4);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[8]),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[0]),8);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[1]),8);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[2]),8);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[3]),8);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[4]),8);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[5]),8);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[6]),8);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[7]),8);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[8]),8);
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[3]),4);
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[4]),4);
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[5]),4);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[6]),4);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[7]),4);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[8]),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__state_dout),4);
        bufp->chgBit(oldp+55,(vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+56,(vlSelf->top__DOT__outMux__DOT__i0__DOT__hit));
    }
    bufp->chgBit(oldp+57,(vlSelf->clk));
    bufp->chgBit(oldp+58,(vlSelf->in));
    bufp->chgBit(oldp+59,(vlSelf->reset));
    bufp->chgBit(oldp+60,(vlSelf->out));
    bufp->chgCData(oldp+61,(vlSelf->top__DOT__state_din),4);
    __Vtemp_h573b1681__0[1U] = (IData)(((0x1020304000000000ULL 
                                         | (((QData)((IData)(
                                                             ((IData)(vlSelf->in)
                                                               ? 5U
                                                               : 2U))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->in)
                                                                  ? 5U
                                                                  : 3U))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->in)
                                                                     ? 5U
                                                                     : 4U))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(vlSelf->in)
                                                                        ? 5U
                                                                        : 4U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (0x50607080U 
                                                                        | ((((IData)(vlSelf->in)
                                                                              ? 6U
                                                                              : 1U) 
                                                                            << 0x18U) 
                                                                           | ((((IData)(vlSelf->in)
                                                                                 ? 7U
                                                                                 : 1U) 
                                                                               << 0x10U) 
                                                                              | ((((IData)(vlSelf->in)
                                                                                 ? 8U
                                                                                 : 1U) 
                                                                                << 8U) 
                                                                                | ((IData)(vlSelf->in)
                                                                                 ? 8U
                                                                                 : 1U)))))))))))) 
                                        >> 0x20U));
    __Vtemp_h4489e183__0[0U] = (IData)((0x1020304000000000ULL 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->in)
                                                              ? 5U
                                                              : 2U))) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               ((IData)(vlSelf->in)
                                                                 ? 5U
                                                                 : 3U))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  ((IData)(vlSelf->in)
                                                                    ? 5U
                                                                    : 4U))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->in)
                                                                       ? 5U
                                                                       : 4U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0x50607080U 
                                                                       | ((((IData)(vlSelf->in)
                                                                             ? 6U
                                                                             : 1U) 
                                                                           << 0x18U) 
                                                                          | ((((IData)(vlSelf->in)
                                                                                ? 7U
                                                                                : 1U) 
                                                                              << 0x10U) 
                                                                             | ((((IData)(vlSelf->in)
                                                                                 ? 8U
                                                                                 : 1U) 
                                                                                << 8U) 
                                                                                | ((IData)(vlSelf->in)
                                                                                 ? 8U
                                                                                 : 1U)))))))))))));
    __Vtemp_h4489e183__0[1U] = __Vtemp_h573b1681__0[1U];
    __Vtemp_h4489e183__0[2U] = ((IData)(vlSelf->in)
                                 ? 5U : 1U);
    bufp->chgWData(oldp+62,(__Vtemp_h4489e183__0),72);
    bufp->chgCData(oldp+65,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out),4);
    bufp->chgBit(oldp+66,(vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit));
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
