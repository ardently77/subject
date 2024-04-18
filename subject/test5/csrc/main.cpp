#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<nvboard.h>
#include <time.h>

static TOP_NAME dut;
void single_cycle(){
    dut.clk=0;
    dut.eval();
    dut.clk=1;
    dut.eval();
}
void nvboard_bind_all_pins(Vtop* top);

int main(){
	nvboard_bind_all_pins(&dut);
	nvboard_init();
	while(true){
		nvboard_update();
		single_cycle();
	}
	nvboard_quit();

}
