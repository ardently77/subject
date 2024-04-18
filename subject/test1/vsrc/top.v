//数据流建模
/*module top(
	input wire a,
	input wire b,
	input wire s,
	output wire f
);
  assign f=(a&(~s)|(b&s));
endmodule
*/
//行为级建模
/*
module top(
	input wire a,
	input wire b,
	input wire s,
	output reg f
);
  always@(*)begin
		if(s==0)
			f=a;
		else
			f=b;
	end
endmodule
*/
//结构化建模
/*module my_not(
	input wire s,
	output wire l1
);
  assign l1=~s;
endmodule

module my_add(
	input wire x,
	input wire s,
	output wire l2
);
  assign l2=x&s;
endmodule

module my_or(
  input wire x,
	input wire y,
	output wire z
);
  assign z=x|y;
endmodule

module top(
	input wire a,
	input wire b,
	input wire s,
	output wire f
);
  wire t1,t2,t3,t4;
  my_not r1(.s(s),.l1(t1));
	my_add r2(.x(a),.s(t1),.l2(t2));
	my_add r3(.x(b),.s(s),.l2(t3));
	my_or r4(.x(t2),.y(t3),.z(t4));
	assign f=t4;
endmodule
*/

module MuxKeyInternal #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1, HAS_DEFAULT = 0) (
  output reg [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);

  localparam PAIR_LEN = KEY_LEN + DATA_LEN;
  wire [PAIR_LEN-1:0] pair_list [NR_KEY-1:0];
  wire [KEY_LEN-1:0] key_list [NR_KEY-1:0];
  wire [DATA_LEN-1:0] data_list [NR_KEY-1:0];

  generate
    for (genvar n = 0; n < NR_KEY; n = n + 1) begin
      assign pair_list[n] = lut[PAIR_LEN*(n+1)-1 : PAIR_LEN*n];
      assign data_list[n] = pair_list[n][DATA_LEN-1:0];
      assign key_list[n]  = pair_list[n][PAIR_LEN-1:DATA_LEN];
    end
  endgenerate

  reg [DATA_LEN-1 : 0] lut_out;
  reg hit;
  integer i;
  always @(*) begin
    lut_out = 0;
    hit = 0;
    for (i = 0; i < NR_KEY; i = i + 1) begin
      lut_out = lut_out | ({DATA_LEN{key == key_list[i]}} & data_list[i]);
      hit = hit | (key == key_list[i]);
    end
    if (!HAS_DEFAULT) out = lut_out;
    else out = (hit ? lut_out : default_out);
  end

endmodule

module MuxKey #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 0) i0 (out, key, {DATA_LEN{1'b0}}, lut);
endmodule
module top(
	//input wire a0,a1,b0,b1,c0,c1,d0,d1,
	//input wire s0,s1,
	//output wire f0,f1
	input wire[1:0]s,
	input wire[1:0]a[3:0],
	output wire[1:0]f
);
  MuxKey #(4,2,2) i0 (f,s,{
		2'b00,a[0],
		2'b01,a[1],
		2'b10,a[2],
		2'b11,a[3]
		});
  //wire A,B,C,D;
  //wire[1:0]s;
	//assign s={s0,s1};
	//assign A=(s==2'b00);
	//assign B=(s==2'b01);
	//assign C=(s==2'b10);
	//assign D=(s==2'b11);
	//assign f0=(a0&A)|(b0&B)|(c0&C)|(d0&D);
	//assign f1=(a1&A)|(b1&B)|(c1&C)|(d1&D);
endmodule













