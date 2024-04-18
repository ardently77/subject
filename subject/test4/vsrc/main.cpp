#include "verilated.h"
#include "verilated_vcd_c.h"
#include "./obj_dir/Vtest.h"
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vtest* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtest;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main() {
  sim_init();
  top->sub_add=0b0;step_and_dump_wave();
  top->sub_add=0b0;step_and_dump_wave();
	top->sub_add=0b0;step_and_dump_wave();
	top->sub_add=0b0;step_and_dump_wave();

  sim_exit();
}
