module  ysyx_25030085_wb (
    input clk,
    input rst,

   // 来自执行阶段的数据
    input in_valid,
    input [31:0] in_alu_result,   // ALU计算结果
    input [31:0] in_mem_rdata,    // 存储器读取数据
    input [31:0] in_npc,
    input [31:0] in_pc,     // PC+4（用于JAL）
    input [31:0] in_imm,          // 立即数（用于LUI）
    input [20:0] in_ctrl,   
    input [31:0] in_csr_rdata,    // CSR读取数据
    input [4:0]  rd_addr,      // 目标寄存器地址
    output in_ready,

    
    // 输出到寄存器堆
    output out_valid, 

    output [31:0]next_pc,
    output reg_wen,
    output [4:0]  reg_waddr,
    output [31:0] reg_wdata

);

parameter IDLE=0;
parameter CHOOSE=1;
parameter OUTPUT=2;
parameter DONE =3;

reg [1:0]state;



reg has_data;
reg [20:0]ctrl;
reg [4:0] rd,addr_reg;
reg [31:0]npc,pc,imm,csr_rdata,mem_rdata,alu_result;

//输出数据
reg wen;
reg[31:0]data_reg,wb_data;

assign in_ready=state==IDLE;
assign out_valid=(state==DONE)?1:0;

always @(posedge clk or posedge rst) begin
    if(rst)begin
        pc<=0;
        imm<=0;
        csr_rdata<=0;
        mem_rdata<=0;
        alu_result<=0;  
        npc<=32'h8000_0000;   
        state<=IDLE;
    end
    else begin
    case(state)
    IDLE:begin// 接收数据
    if(in_valid&&in_ready)begin
    ctrl<=in_ctrl;
    csr_rdata<=in_csr_rdata;
    mem_rdata<=in_mem_rdata;
    alu_result<=in_alu_result;
    pc<=in_pc;
    npc<=in_npc;
    imm<=in_imm;
    rd<=rd_addr;
    state<=CHOOSE;   
    end   
    end
    CHOOSE:begin
        addr_reg<=rd;
        data_reg<=wb_data;
        wen<=RegWrite;
        state<=OUTPUT;  
    end
    OUTPUT:begin
        state<=DONE;//数据写回还要一个周期；
    end
    DONE:begin
        state<=IDLE;    
    end
    endcase
    end
end
    //always @(*) begin
   //     $display("pc:%08x, wb:%d",next_pc,out_valid);      
  //  end

wire [2:0] MemtoReg=ctrl[12:10];
wire       RegWrite=ctrl[16];

assign reg_wen=wen;
assign reg_waddr=addr_reg;
assign next_pc=npc;
assign reg_wdata=data_reg;


always @(*) begin
    if(state==CHOOSE)begin
    case (MemtoReg)
        3'b000: wb_data = alu_result;  // ALU结果
        3'b001: wb_data = mem_rdata;   // 存储器数据
        3'b010: wb_data = pc+4;         // JAL指令
        3'b011: wb_data = imm;         // LUI指令
        3'b100: wb_data = csr_rdata;   // CSR数据
        default: wb_data = 32'h0;
    endcase
    end
    else begin
          wb_data = 32'h0;  
    end
end

endmodule