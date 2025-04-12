module ysyx_25030085_regfile ( 
    input clk,
    input rst,
    input [31:0]pc_out,
    input [31:0]imm,
    input [31:0] instruction,
    input RegWrite,
    input [1:0] MemtoReg, //选择写回数据来源（ALU结果/存储器数据/PC+4等）
   //0为alu计算结果，1为储存器数据，2为pc+4，jal

    input [31:0]Alu_Result,//alu计算结果
    output [31:0]Read_rs1,
    output [31:0]Read_rs2
   
    

);
    reg [4:0]rs1;
    reg [4:0]rs2;
    reg [4:0]rd;
    assign rs1=instruction[19:15];
    assign rs2=instruction[24:20];
    assign rd =instruction[11:7];
    reg [31:0] register [0:31];
    integer i; 

    always @(posedge clk) begin
         // $display("Reg Status: x1(ra)=0x%08x, x2(sp)=0x%08x", 
         // register[1], register[2]);
        if(rst)begin//复位信号
            for(i=0;i<32;i=i+1)begin
            register[i]=0;
            end
        end

        else if (RegWrite) begin//写回rd使能信号，选择写回来源

        case(MemtoReg) //0为alu计算结果
        2'b00:begin
        register[rd] <= Alu_Result;//写回rd寄存器
       // $display("Write: x%d = 0x%08x", rd, Alu_Result);
        end
        2'b01:begin//1为储存器数据
            
        end
        2'b10:begin//2为pc+4，jal
       // $display("Write: x%d = 0x%08x", rd, register[rd]);
        register[rd]<=pc_out+4;
        end
        2'b11:begin//立即数LUI
        register[rd]<=imm;
        end
        endcase
        end



        end 
    
    assign Read_rs1=register[rs1];//根据rs1寄存器编码找到对于数据
    assign Read_rs2=register[rs2];


endmodule