
module ysyx_25030085_ex(
    input               clock                 ,
    input               reset                 ,

    input               in_valid            ,
    input [31:0]        in_a5               ,
    input [31:0]        in_rs1_data         ,
    input [31:0]        in_rs2_data         ,
    input [20:0]        in_ctrl             ,
    input [31:0]        in_imm              ,
    input [4:0]         in_rd               ,
    input [31:0]        in_pc               ,
    output              in_ready            ,
    //0为加法，rs1加立即数或者rs2

    output              out_valid           ,
    output [31:0]       out_next_pc         ,
    output [31:0]   out_Alu_Result      ,
    output [31:0]       out_rs2_data        ,
    output [20:0]       out_ctrl            ,
    output [31:0]       csr_data            ,
    output [4:0]        rd_out              ,
    output [31:0]       imm_out             ,
    output [31:0]       pc_out              ,

    input               out_ready
);
    parameter IDLE=0;
    parameter OUTPUT=1;
    parameter WAIT=2;
    reg [1:0] state;
    reg [4:0] rd;
    reg [31:0] rs1_data,rs2_data,pc,imm,reg_a5;
    reg [20:0] ctrl;
 
    assign in_ready=(state==IDLE);
    assign out_valid=(state==OUTPUT);
    always @(posedge clock or posedge reset) begin
        if(reset)begin
            ctrl<=0;
            rs1_data<=0;
            rs2_data<=0;
            pc<=32'h2000_0000;
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
                rd<=in_rd;
                imm<=in_imm;
                state<=OUTPUT;
                end             
            end
            OUTPUT:begin  //锁存要输出的数据   
            state<=WAIT;
            end
            WAIT:begin
                if(out_ready)begin
                    state<=IDLE;
                end
  
            end

            endcase
        end   
    end
    
    assign out_Alu_Result=Alu_Result;
    assign out_next_pc=next_pc;
    assign out_rs2_data=rs2_data;
    assign out_ctrl =ctrl;
    assign imm_out=imm;
    assign pc_out =pc;
    assign rd_out=rd;

    wire  [31:0] B;
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
    always @(*) begin
        if(state==OUTPUT)begin
            case (AluOp)
                4'b0000: Alu_Result = rs1_data + B;  // ADD
                4'b1010: Alu_Result = rs1_data - B;  // SUB
                4'b0001: Alu_Result = rs1_data << B[4:0];  // SLLI
                4'b1001: Alu_Result = pc + B;        // J型跳转地址
                4'b0010: begin  // SLTI（有符号比较）
                    Alu_Result = (rs1_data[31] != B[31]) ? 
                                 (rs1_data[31] ? 32'd1 : 32'd0) : 
                                 (rs1_data[30:0] < B[30:0] ? 32'd1 : 32'd0);
                end
                4'b0011: Alu_Result = (rs1_data < B) ? 32'd1 : 32'd0;  // SLTIU
                4'b0101: Alu_Result = ($signed(rs1_data) >>> B[4:0]);  // SRAI
                4'b0110: Alu_Result = rs1_data >> B[4:0];  // SRLI
                4'b0100: Alu_Result = rs1_data ^ B;  // XOR
                4'b0111: Alu_Result = rs1_data | B;  // OR
                4'b1000: Alu_Result = rs1_data & B;  // AND
                default: Alu_Result = 32'h0;
            endcase
        end
        else begin
            Alu_Result = 32'h0;  
        end
    end







ysyx_25030085_csr_regfile csr_regfile_init(
    .clock(clock),
    .reset(reset),
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
    .mtvec_out(mtvec),   //跳转地址送到pc
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



`ifndef SYNTHESIS
    wire exu_perf_cnt;
    assign exu_perf_cnt = state == OUTPUT;
    always @(*) begin
        ex_performance_cnt(exu_perf_cnt);
    end
`endif




endmodule