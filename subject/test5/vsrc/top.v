module bcd7seg(
  input wire[3:0]a,
	output reg[6:0]h
);
  always@(*)begin
		case(a)
			4'b0000:h=7'b1000000;
			4'b0001:h=7'b1111001;
			4'b0010:h=7'b0100100;
			4'b0011:h=7'b0110000;
			4'b0100:h=7'b0011001;
			4'b0101:h=7'b0010010;
			4'b0110:h=7'b0000010;
			4'b0111:h=7'b1111000;
			4'b1000:h=7'b0000000;
			4'b1001:h=7'b0010000;
			default:h=7'b1000000;
		endcase
	end
endmodule

module bcd7seg2(
	input wire[3:0]a,
	output reg[6:0]h
);
  always@(*)begin
		case(a)
			4'b0000:h=7'b1000000;
			4'b0001:h=7'b1111001;
			4'b0010:h=7'b0100100;
			4'b0011:h=7'b0110000;
			4'b0100:h=7'b0011001;
			4'b0101:h=7'b0010010;
			4'b0110:h=7'b0000010;
			4'b0111:h=7'b0000000;
			4'b1001:h=7'b0010000;
			default:h=7'b1000000;
		endcase
	end
endmodule

module top(
	input wire en,
	input clk,
	input wire clr,
  output reg[6:0]count1,
  output reg[6:0]count2
);
  reg[3:0]ld1;
  reg[3:0]ld2;
	reg[31:0]t;
  initial begin
    count1=7'b0000000;
		count2=7'b0000000;
    ld1=4'b0000;
    ld2=4'b0000;
		t=0;
  end 
	bcd7seg seg1(ld1,count1);
	bcd7seg seg2(ld2,count2);
  always@(posedge clk)begin
    if(en)begin
      if(clr==1'b1)begin
				ld1=4'b0000;
				ld2=4'b0000;
			end
 			else begin
				if(ld2==4'b1010)begin
					ld1=4'b0000;
					ld2=4'b0000;
				end
        else begin
				if(ld1==4'b1010)begin
						ld1=4'b0000;
						if(ld2==4'b1010)
               ld2=4'b0000;
            else
              ld2=ld2+1;
          end
					if(t==0)
          ld1=ld1+1'b1;
				t=(t>5000000)?0:(t=t+1);
        end
      end
		end
	end
endmodule
