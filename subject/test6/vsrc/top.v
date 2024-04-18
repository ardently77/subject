module top(
//	input wire we,
//	input wire clk,
//	input wire[3:0]inaddr,
	input wire[3:0]outaddr,
	output reg[7:0]out
);
  
//  reg[7:0]date;
//	initial begin
//		date=0;
//	end
  reg[7:0]ram[15:0];
  assign out=ram[outaddr];  
  initial begin
		$readmemh("mem.txt", ram, 0, 15);
  end

//  always@(posedge clk)begin
//		if(we)
//			ram[inaddr]<=date;
//	end


endmodule
