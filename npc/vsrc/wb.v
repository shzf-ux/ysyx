module ysyx_25030085_writeback ( 
    input [1:0]            MemtoReg,     // 写回数据来源选择
    input [31:0]           Alu_Result,   // ALU运算结果
    input [31:0]           ReadData,      // 存储器读出数据
    input [31:0]           pc,       // 当前PC值
    input [31:0]           imm,          // 立即数（用于LUI等指令）
    output reg [31:0]      wb_data       // 要写回的数据
);


    always @(*) begin
        case (MemtoReg)
            2'b00: wb_data= Alu_Result;    // ALU结果（add/addi等）
            2'b01: wb_data= ReadData;       // 存储器数据（lw/lbu等）
            2'b10: wb_data= pc + 32'd4;// PC+4（jal/jalr等）
            2'b11: wb_data= imm;           // 立即数（lui指令）
          
        endcase
    end


endmodule
    