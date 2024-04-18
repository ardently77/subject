/*module top(x,en,y);
  input  [3:0] x;
  input  en;
  output reg [1:0]y;

  always @(*) begin
    if (en) begin
      case (x)
          4'b0001 : y = 2'b00;
          4'b0010 : y = 2'b01;
          4'b0100 : y = 2'b10;
          4'b1000 : y = 2'b11;
          default: y = 2'b00;
      endcase
    end
    else  y = 2'b00;
  end
endmodule
*/
module bcd7seg(
  input wire[2:0]b,
	output reg[6:0] h
);
  always@(*)begin
		case(b)
			3'b000:h=7'b1000000;
			3'b001:h=7'b1111001;
			3'b010:h=7'b0100100;
			3'b011:h=7'b0110000;
			3'b100:h=7'b0011001;
			3'b101:h=7'b0010010;
			3'b110:h=7'b0000010;
			3'b111:h=7'b1111000;
		endcase
	end
endmodule

module top(
	input wire[7:0]x,
	input wire en,
	output reg[2:0]y,
	output reg flag,
	output reg[6:0]h
);
  integer i;
  always@(*)begin
		if(x==8'b00000000)
			flag=1'b0;
		else
			flag=1'b1;
		y=3'b000;
		if(en==1)begin
			for(i=0;i<=7;i++)begin
				if(x[i]==1)begin
					y=i[2:0];
				end
			end
		end
		else
			y=3'b000;
	end
  bcd7seg seg1(.b(y),
	             .h(h));
endmodule
