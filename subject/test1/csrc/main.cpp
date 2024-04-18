#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<verilated.h>
#include<nvboard.h>
#include"Vtop.h"

static TOP_NAME dut;
Vtop *top;

void nvboard_bind_all_pins(Vtop *top);

int main(int argc,char **argv,char** env){

	nvboard_bind_all_pins(&dut);
	nvboard_init();
  

	//top=new Vtop;
	while(true){
		dut.eval();
		nvboard_update();
	}
  //top->final();
	delete top;
	nvboard_quit();
	return 0;
}



