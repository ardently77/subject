#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<nvboard.h>
#include<verilated.h>
#include"Vtop.h"

static TOP_NAME dut;
void nvboard_bind_all_pins(Vtop* top);

int main(int argc,char** argv,char** env){

	nvboard_bind_all_pins(&dut);
	nvboard_init();

	while(true){
		dut.eval();
		nvboard_update();
	}
	
	nvboard_quit();
	return 0;
}

