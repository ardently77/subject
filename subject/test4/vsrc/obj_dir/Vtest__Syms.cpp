// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtest__Syms.h"
#include "Vtest.h"
#include "Vtest___024root.h"

// FUNCTIONS
Vtest__Syms::~Vtest__Syms()
{
}

Vtest__Syms::Vtest__Syms(VerilatedContext* contextp, const char* namep, Vtest* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
