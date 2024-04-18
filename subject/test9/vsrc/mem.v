module mem(
	input wire[7:0]in,
	output reg[7:0]out
);
  reg[7:0]ram[9:0];
	initial begin
		$readmemh("/home/liweiqi/ysyx/ysyx-workbench/nvboard/subject/test9/vsrc/mem.txt", ram, 0, 9);
	end
	always@(*)begin
		out=8'b0;
		if(in==ram[5])
			out=ram[0];
		if(in==ram[6])
			out=ram[1];
		if(in==ram[7])
			out=ram[2];
		if(in==ram[8])
			out=ram[3];
		if(in==ram[9])
			out=ram[4];
	end
endmodule
