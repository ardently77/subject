/*module top(
	input wire[3:0]a,
	input wire[3:0]b,
	input wire[2:0]ctl,
	output reg[3:0]result,
	output reg overflow,carry,zero,
	output reg out0,out1
);
  reg[3:0]t=4'b000;
	reg[3:0]m=4'b000;
  always@(*)begin
		overflow=0;
		carry=0;
		zero=0;
		out0=0;
		out1=0;
		result=4'b0000;
		case(ctl)
			3'b000:begin
				result=a+b;
				overflow=(a[3]==b[3])&&(result[3]!=a[3]);
				carry=(a[3]==b[3])&&(result[3]!=a[3]);
			end
			3'b001:begin
				t=~b+1;
				result=a+t;
				overflow=(a[3]==t[3])&&(result[3]!=a[3]);
				carry=(a[3]==t[3])&&(result[3]!=a[3]);
			end
			3'b010:result=~a;
			3'b011:result=a&b;
			3'b100:result=a|b;
      3'b101:result=a^b;
			3'b110:begin
				m=~b;
				t=a+m;
				out0=(t[3])^((a[3]==m[3])&&(t[3]!=a[3]));
			end
			3'b111:begin
				t=~b;
				if(a+t==4'b0000)
					out1=1;
				else
					out1=0;
			end
		endcase
	end
endmodule
*/
/*module top(
  input wire [3:0] a,
  input wire [3:0] b,
  input wire [2:0] ctl,
  output reg [3:0] result,
  output reg overflow, carry, zero,
  output reg out0, out1
);
  reg [3:0] t = 4'b000;
  reg [3:0] m = 4'b000;

  always @(*) begin
    overflow = 0;
    carry = 0;
    zero = 0;
    out0 = 0;
    out1 = 0;
    result = 4'b0000;

    case (ctl)
      3'b000: begin
        result = a + b;
        overflow = (a[3] == b[3]) && (result[3] != a[3]);
        carry = (a[3] == b[3]) && (result[3] != a[3]);
      end
      3'b001: begin
        t = ~b + 1;
        result = a + t;
        overflow = (a[3] == t[3]) && (result[3] != a[3]);
        carry = (a[3] != t[3]);  // 借位的计算
      end
      3'b010: result = ~a;
      3'b011: result = a & b;
      3'b100: result = a | b;
      3'b101: result = a ^ b;
      3'b110: begin
        m = ~b;
        t = a + m;
        out0 = (t[3]) ^ ((a[3] == m[3]) && (t[3] != a[3]));
      end
      3'b111: begin
        t = ~b;
        if (a + t == 4'b0000)
          out1 = 1;
        else
          out1 = 0;
      end
    endcase
  end
endmodule
*/
module top(
  input wire [3:0] a,
  input wire [3:0] b,
  input wire [2:0] ctl,
  output reg [3:0] result,
  output reg overflow, carry, zero,
  output reg out0, out1
);

  reg [3:0] t;
  reg [3:0] m;

  always @* begin
    // 初始化输出和中间变量
    overflow = 0;
    carry = 0;
    zero = 0;
    out0 = 0;
    out1 = 0;
    result = 4'b0000;
		t=4'b0000;
		m=4'b0000;

    // 执行操作
    case (ctl)
      3'b000: begin
        result = a + b;
        overflow = (a[3] == b[3]) && (result[3] != a[3]);
        carry = (a[3] == b[3]) && (result[3] != a[3]);
      end
      3'b001: begin
        t = ~b + 1;
        result = a + t;
        overflow = (a[3] == t[3]) && (result[3] != a[3]);
        carry = (a[3] != t[3]);  // 借位的计算
      end
      3'b010: result = ~a;
      3'b011: result = a & b;
      3'b100: result = a | b;
      3'b101: result = a ^ b;
      3'b110: begin
        m = ~b;
        t = a + m;
        out0 = (t[3]) ^ ((a[3] == m[3]) && (t[3] != a[3]));
      end
      3'b111: begin
        t = ~b;
        if (a + t == 4'b0000)
          out1 = 1;
        else
          out1 = 0;
      end
    endcase
  end
endmodule

