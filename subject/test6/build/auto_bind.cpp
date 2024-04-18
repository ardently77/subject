#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->we, BIND_RATE_SCR, BIND_DIR_IN , 1, SW0);
	nvboard_bind_pin( &top->clk, BIND_RATE_SCR, BIND_DIR_IN , 1, SW1);
	nvboard_bind_pin( &top->out, BIND_RATE_SCR, BIND_DIR_OUT, 7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->inaddr, BIND_RATE_SCR, BIND_DIR_IN , 4, SW5, SW4, SW3, SW2);
	nvboard_bind_pin( &top->outaddr, BIND_RATE_SCR, BIND_DIR_IN , 4, SW9, SW8, SW7, SW6);
}
