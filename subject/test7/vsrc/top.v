module top(
	input wire clk,
	input wire clr,
	output reg[7:0]out
);
  initial begin
		out=8'b00000000;
	end
  always@(posedge clk)begin
		if(clr)
			out=8'b00000000;
		else begin
			if(out==8'b00000000)
				out[7]=1'b1;
			else begin
				out[6:0]=out[7:1];
				out[7]=out[4]^out[3]^out[2]^out[0];
			end
		end
	end
endmodule
