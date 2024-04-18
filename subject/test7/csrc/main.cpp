#include"Vtop.h"
#include<stdio.h>
#include<nvboard.h>

static TOP_NAME dut;

void nvboard_bind_all_pins(Vtop* top);

int main(){
	nvboard_bind_all_pins(&dut);
	nvboard_init();
	while(true){
		dut.eval();
		nvboard_update();
	}
	nvboard_quit();
}
