`timescale 1ns/1ns
`include"./top.v"

module test(
	input wire sub_add
);

  reg[31:0]inputa;
	reg[3:0]inputa0;
	reg[3:0]inputb0;
	reg[31:0]inputb;
	reg[3:0]outputs;
	reg carry;
	reg zero;
	reg overflow;
	reg[3:0]t;
	reg[31:0]k;
	reg of,z,c;
	integer i,j;

  top top0(.sub_add(sub_add),
	         .a(inputa0),
				   .b(inputb0),
				   .carry(carry),
				   .zero(zero),
				   .overflow(overflow),
				   .result(outputs));

task check;  //测试任务
  input [3:0] results;  //ALU的结果预期正确输出
  input resultof, resultc, resultz;  //ALU的预期溢出，进位，零位
  begin
    //if(outputs!=results)  //比较预期结果和测试单元输出的outputs
    //begin               //出错时显示
      $display("Error:x=%h,y=%h,ctrl=%b,s should be %h,get %h", inputa0, inputb0, sub_add, results, outputs);
    //end
    if(resultof!=overflow)
		begin
	//		$display("Error:x=%h,y=%h,ctrl=%b,s should be %h,get %h", inputa, inputb, sub_add, resultof, overflow);
		end
		if(resultc!=carry)
		begin
  //   $display("Error:x=%h,y=%h,ctrl=%b,s should be %h,get %h", inputa, inputb, sub_add, resultc, carry);
		end
		if(resultz!=zero)
		begin
  //    $display("Error:x=%h,y=%h,ctrl=%b,s should be %h,get %h", inputa, inputb, sub_add, resultz, zero);
		end
  end
endtask
  initial begin
		for(i=0;i<=3;i=i+1) //建议i和j可以是5位以上的带符号数
      for(j=0;j<=3;j=j+1)
        begin
        inputa=i;inputa0=i[3:0];
        inputb=j;inputb0=j[3:0];//设置两个输入
        k=sub_add?(inputa-inputb):(inputa+inputb);//此处自行计算正确的输出，填入*处
        of=(k<-8)||(k>7);//可分不同情况手工填写
        z=~(|k);
				t={4{sub_add}}^inputb0+{3'b000,sub_add};
	      {c,t}=(sub_add)?(inputa0+t):(inputa0+inputb0);
        check(k[3:0],of,c,z);
				#1;
        end
	   end
endmodule
