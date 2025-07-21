module ysyx_25030085_alu(
    input clk,
    input rst,

    input in_valid,
    input [31:0] in_a5,
    input [31:0] in_rs1_data,
    input [31:0] in_rs2_data,
    input [20:0] in_ctrl,
    input [31:0] in_imm,
    input [31:0] in_pc,
    output in_ready,
    //0为加法，rs1加立即数或者rs2

    output out_valid,
    output [31:0]     out_next_pc,
    output reg [31:0] out_Alu_Result,
    output [31:0] out_rs2_data,
    output [20:0] out_ctrl,
    output [31:0]csr_data,

    output [31:0]imm_out,
    output [31:0]pc_out,

    input out_ready
);
    parameter IDLE=0;
    parameter CACULATE=1;
    parameter OUTPUT=2;
    reg [1:0] state;

    reg [31:0] rs1_data,rs2_data,pc,imm,reg_a5;
    reg [20:0] ctrl;

    reg [31:0]pc_reg,alu_reg;
    
    assign in_ready=(state==IDLE);
    assign out_valid=(state==OUTPUT);
    always @(posedge clk or posedge rst) begin
        if(rst)begin
            ctrl<=0;
            rs1_data<=0;
            rs2_data<=0;
            pc<=32'h8000_0000;
            reg_a5<=0;
            imm<=0;
            state<=IDLE;
        end
        else begin
            case(state)
            IDLE:begin//接收
            if(in_valid&&in_ready)begin
                ctrl<=in_ctrl;
                rs1_data<=in_rs1_data;
                rs2_data<=in_rs2_data;
                pc<=in_pc;
                reg_a5<=in_a5;
                imm<=in_imm;
                state<=CACULATE;
                end             
            end
            CACULATE:begin  //锁存要输出的数据   
            pc_reg<=next_pc;
            alu_reg<=Alu_Result;
            state<=OUTPUT;
            end
            OUTPUT:begin
                if(out_ready)begin
                    state<=IDLE;
                end
  
            end

            endcase
        end   
    end
    assign out_Alu_Result=alu_reg;
    assign out_next_pc=pc_reg;
    assign out_rs2_data=rs2_data;
    assign out_ctrl =ctrl;
    assign imm_out=imm;
    assign pc_out =pc;

    reg  [31:0] B;
    wire [3:0]  AluOp   =ctrl[4:1];
    wire        ALUSrc  =ctrl[0];
    wire [1:0]  csr_wen =ctrl[20:19];
    wire        is_ecall=ctrl[17];
    wire        is_mret =ctrl[18];
    wire        Branch  =ctrl[13];
    wire [1:0]  Jump    =ctrl[15:14];

    assign B=ALUSrc?imm:rs2_data;
    reg [31:0] Alu_Result;
//计算延迟需要最小化（通常在一个时钟周期内完成）
      // 组合逻辑计算
    always @(*) begin
        if(state==CACULATE)begin
        case (AluOp)
            4'b0000: begin
                Alu_Result = rs1_data + B;  // ADD
            end
            4'b1010: begin
                Alu_Result = rs1_data - B;   // SUB
            end
            4'b0001: begin
                Alu_Result = rs1_data << B[4:0];  // SLLI（逻辑左移）
            end
            4'b1001: begin
                Alu_Result = pc + B;        // J型跳转地址（PC + 偏移）
            end
            4'b0010: begin
                // SLTI（有符号比较）
                Alu_Result = (rs1_data[31] != B[31]) ? 
                             (rs1_data[31] ? 32'd1 : 32'd0) : 
                             (rs1_data[30:0] < B[30:0] ? 32'd1 : 32'd0);
            end
            4'b0011: begin
                Alu_Result = (rs1_data < B) ? 32'd1 : 32'd0;  // SLTIU（无符号比较）
            end
            4'b0101: begin
                // SRAI（算术右移）
                Alu_Result = ($signed(rs1_data) >>> B[4:0]);
            end
            4'b0110: begin
                Alu_Result = rs1_data >> B[4:0];  // SRLI（逻辑右移）
            end
            4'b0100: begin
                Alu_Result = rs1_data ^ B;  // XOR
            end
            4'b0111: begin
                Alu_Result = rs1_data | B;   // OR
            end
            4'b1000: begin
                Alu_Result = rs1_data & B;   // AND
            end
            default: begin
                Alu_Result = 32'h0;          // 默认输出0
            end
        endcase
        end
        else begin
           Alu_Result = 32'h0;  
        end
    end
ysyx_25030085_csr_regfile csr_regfile_init(
    .clk(clk),
    .rst(rst),
     //输入
    .pc(pc),
    .reg_a5(reg_a5),
    .is_ecall(is_ecall),
    .is_mret(is_mret),
    .csr_wen(csr_wen),//控制信号

    .csr_addr(imm[11:0]),
    .csr_wdata(rs1_data),//src1

    //输出的数据
    .csr_rdata(csr_data),//读到的数据送回rd
    .mtvec_out(mtvec),//跳转地址送到pc
    .mepc_out(mepc)
);
reg [31:0] next_pc;
reg  [31:0]mtvec,mepc;

always @(*) begin
    if (Jump == 2'b01) begin
        next_pc = imm + pc;          // JAL
    end else if (Jump == 2'b10) begin
        next_pc = Alu_Result & 32'hFFFFFFFE; // JALR
    end else if (Branch) begin
        next_pc = Alu_Result;        // Branch
    end else if (is_ecall) begin
        next_pc = mtvec;             // ECALL
    end else if (is_mret) begin
        next_pc = mepc;              // MRET
    end else begin
        next_pc = pc + 4;            // 默认顺序执行
    end
end








    wire is_jar_call;
    wire is_jalr_call;
    wire is_jalr_ret;

   /* assign is_jar_call = (inst[11:7] == 5'd1) && (Jump == 2'b01);  // JAL调用
    assign is_jalr_call = (inst[11:7] == 5'd1) && (Jump == 2'b10);  // JALR调用
    assign is_jalr_ret = (inst[11:7] == 5'd0) && (inst[19:15] == 5'd1) && (Jump == 2'b10);  // JALR返回

    always @(posedge clk) begin
        if (is_jar_call || is_jalr_call) begin
            display_call_func(pc, next_pc);  // 函数调用追踪
        end
        if (is_jalr_ret) begin
            display_ret_func(pc, next_pc);  // 函数返回追踪
        end
    end*/





endmodule