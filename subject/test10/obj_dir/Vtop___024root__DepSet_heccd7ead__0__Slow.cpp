// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[0U] = 8U;
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[1U] = 7U;
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[2U] = 6U;
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[3U] = 5U;
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[4U] = 4U;
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[5U] = 3U;
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[6U] = 2U;
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[7U] = 1U;
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[8U] = 0U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[0U] = 8U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[1U] = 7U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[2U] = 6U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[3U] = 5U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[4U] = 4U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[5U] = 3U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[6U] = 2U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[7U] = 1U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[8U] = 0U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[5U] = 0U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[7U] = 0U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[8U] = 0U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[0U] = 0x11U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[1U] = 0xeU;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[2U] = 0xcU;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[3U] = 0xaU;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[4U] = 9U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[5U] = 6U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[6U] = 4U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[7U] = 2U;
    vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[8U] = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("top.v", 62, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->top__DOT__state_dout) == 
            vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
            [0U]) & vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__outMux__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__state_dout) 
                                                   == 
                                                   vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
                                                   [0U]);
    vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__state_dout) 
               == vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
               [1U]) & vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__outMux__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->top__DOT__state_dout) 
                                                      == 
                                                      vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
                                                      [1U]));
    vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__state_dout) 
               == vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
               [2U]) & vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__outMux__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->top__DOT__state_dout) 
                                                      == 
                                                      vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
                                                      [2U]));
    vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__state_dout) 
               == vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
               [3U]) & vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__outMux__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->top__DOT__state_dout) 
                                                      == 
                                                      vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
                                                      [3U]));
    vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__state_dout) 
               == vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
               [4U]) & vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__outMux__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->top__DOT__state_dout) 
                                                      == 
                                                      vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
                                                      [4U]));
    vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__state_dout) 
               == vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
               [5U]) & vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__outMux__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->top__DOT__state_dout) 
                                                      == 
                                                      vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
                                                      [5U]));
    vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__state_dout) 
               == vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
               [6U]) & vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__outMux__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->top__DOT__state_dout) 
                                                      == 
                                                      vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
                                                      [6U]));
    vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__state_dout) 
               == vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
               [7U]) & vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__outMux__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->top__DOT__state_dout) 
                                                      == 
                                                      vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
                                                      [7U]));
    vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__state_dout) 
               == vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
               [8U]) & vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__outMux__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->top__DOT__state_dout) 
                                                      == 
                                                      vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list
                                                      [8U]));
    vlSelf->out = ((IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__hit) 
                   & (IData)(vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[0U] 
        = (0x80U | ((IData)(vlSelf->in) ? 8U : 1U));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[1U] 
        = (0x70U | ((IData)(vlSelf->in) ? 8U : 1U));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[2U] 
        = (0x60U | ((IData)(vlSelf->in) ? 7U : 1U));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[3U] 
        = (0x50U | ((IData)(vlSelf->in) ? 6U : 1U));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[4U] 
        = (0x40U | ((IData)(vlSelf->in) ? 5U : 4U));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[5U] 
        = (0x30U | ((IData)(vlSelf->in) ? 5U : 4U));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[6U] 
        = (0x20U | ((IData)(vlSelf->in) ? 5U : 3U));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[7U] 
        = (0x10U | ((IData)(vlSelf->in) ? 5U : 2U));
    if (vlSelf->in) {
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[8U] = 5U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[0U] = 8U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[1U] = 8U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[2U] = 7U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[3U] = 6U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[4U] = 5U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[5U] = 5U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[6U] = 5U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[7U] = 5U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[8U] = 5U;
    } else {
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[8U] = 1U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[0U] = 1U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[1U] = 1U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[2U] = 1U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[3U] = 1U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[4U] = 4U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[5U] = 4U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[6U] = 3U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[7U] = 2U;
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[8U] = 1U;
    }
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__state_dout) 
                       == vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->top__DOT__state_dout) == vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
         [0U]);
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_dout) 
                          == vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__state_dout) == 
            vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
            [1U]));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_dout) 
                          == vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__state_dout) == 
            vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
            [2U]));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_dout) 
                          == vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__state_dout) == 
            vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
            [3U]));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_dout) 
                          == vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__state_dout) == 
            vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
            [4U]));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_dout) 
                          == vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__state_dout) == 
            vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
            [5U]));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_dout) 
                          == vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__state_dout) == 
            vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
            [6U]));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_dout) 
                          == vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__state_dout) == 
            vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
            [7U]));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__state_dout) 
                          == vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->top__DOT__state_dout) == 
            vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list
            [8U]));
    vlSelf->top__DOT__state_din = ((IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit)
                                    ? (IData)(vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out)
                                    : 0U);
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->in = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__state_din = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__state_dout = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__outMux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__outMux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__outMux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__outMux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__outMux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__stateMux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__stateMux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
