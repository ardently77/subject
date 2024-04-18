#include<nvboard.h>
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
	sim_init;
	top->we=0;top->clk=0;top->outaddr=0b0001;step_and_dump_wave;
	top->we=0;top->clk=1;top->outaddr=0b0010;step_and_dump_wave;
	top->we=0;top->clk=0;top->outaddr=0b0011;step_and_dump_wave;
	top->we=0;top->clk=1;top->outaddr=0b0100;step_and_dump_wave;
	top->we=0;top->clk=0;top->outaddr=0b0101;step_and_dump_wave;
	top->we=0;top->clk=1;top->outaddr=0b0110;step_and_dump_wave;
	sim_exit();
}

