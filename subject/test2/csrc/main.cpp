#include<verilated.h>
#include"Vtop.h"
#include<stdio.h>
#include<stdlib.h>
#include<nvboard.h>

static TOP_NAME dut;
//Vtop*top;

void nvboard_bind_all_pins(Vtop*top);

int main(int argc,char **argv,char **env){
	nvboard_bind_all_pins(&dut);
	nvboard_init();

	while(true){
		dut.eval();
		nvboard_update();
	}
//	delete top;
	nvboard_quit();
}
