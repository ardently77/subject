module top(
	input wire sub_add,
	input wire[3:0]a,
	input wire[3:0]b,
	output wire overflow,
	output wire zero,
	output wire carry,
	output reg[3:0]result
);

  reg[3:0]t_add_cin;
	assign t_add_cin=({4{sub_add}}^b)+{3'b000,sub_add};
	assign {carry,result}=a+t_add_cin;
	//assign result=a+b;
	assign overflow=(a[3]==t_add_cin[3])&&(result[3]!=a[3]);
	assign zero=~(|result);
endmodule
