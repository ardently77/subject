#include"Vtop.h"
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include "verilated.h"
#include "verilated_vcd_c.h"


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vtop* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main(){
	sim_init();
	top->outaddr=0;step_and_dump_wave();
	top->outaddr=1;step_and_dump_wave();
	top->outaddr=2;step_and_dump_wave();
	top->outaddr=3;step_and_dump_wave();
	top->outaddr=4;step_and_dump_wave();
  top->outaddr=5;step_and_dump_wave();
	top->outaddr=6;step_and_dump_wave();
	top->outaddr=7;step_and_dump_wave();
	top->outaddr=8;step_and_dump_wave();
	top->outaddr=9;step_and_dump_wave();
	top->outaddr=10;step_and_dump_wave();
	top->outaddr=11;step_and_dump_wave();
	top->outaddr=12;step_and_dump_wave();
	top->outaddr=13;step_and_dump_wave();
	top->outaddr=14;step_and_dump_wave();
	top->outaddr=15;step_and_dump_wave();
	sim_exit();
}

