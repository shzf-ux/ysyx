module ysyx_25030085_alu(
    input [31:0] rs1_data,
    input [31:0] rs2_data,
    input [31:0] imm,
    input [31:0] pc,
    input [3:0] AluOp,

    //0为加法，rs1加立即数或者rs2

    input       ALUSrc,//（0=寄存器，1=立即数）
    output reg [31:0] Alu_Result
);
    reg [31:0] B;
    assign B=ALUSrc?imm:rs2_data;

    always@(*)begin
        Alu_Result=32'h0000_0000;
        case (AluOp)
            4'b0000: begin
                Alu_Result=rs1_data+B;//add
            end
            4'b1010:begin//sub
                Alu_Result=rs1_data-B;
            end
            4'b0001:begin//slli逻辑左移 ;将寄存器 rs1 的值 ​左移 imm 位，空出的低位补 0，结果写入r
                Alu_Result=rs1_data<<B;             
            end
            4'b1001:begin//j型的跳转地址跳转pc+立即数
                Alu_Result=pc+B;
            end
            4'b0010:begin//slti有符号比较，默认处理的是无符号比较
                Alu_Result=(rs1_data[31]!=B[31])?(rs1_data[31]?32'd1:32'd0):(rs1_data[30:0]<B[30:0]?32'd1:32'd0);
                //先比较符号位，再比较剩余30位
            end
            4'b0011:begin//无符号比较sltiu rd, rs, 1   # 若 rs < 1（即 rs == 0），则 rd = 1；否则 rd = 0
                Alu_Result=(rs1_data<B)?32'd1:32'd0;
            end
            4'b0101:begin//算数右移
          //  $display("yiwei:%08x",B);
         //   $display("shu:%08x",rs1_data);
                Alu_Result=({32{rs1_data[31]}}<<(32-B))|rs1_data>>B;
            end
            4'b0110:begin//逻辑右移
                Alu_Result=rs1_data>>B;
                
            end
            4'b0100:begin//异或操作
                Alu_Result=rs1_data^B;
            end
            4'b0111:begin//or
                 Alu_Result=rs1_data|B;
            end
            4'b1000:begin//and
                 Alu_Result=rs1_data&B;
            end
            default: begin
            end
        endcase
        





    end


endmodule