module  ysyx_25030085_wb (
    input               clock         ,
    input               reset         ,

    input               in_valid    ,
    input       [31:0]  in_alu_result,
    input       [31:0]  in_mem_rdata,
    input       [31:0]  in_npc      ,
    input       [31:0]  in_pc       ,
    input       [31:0]  in_imm      ,
    input       [11:0]  in_ctrl     ,
    input       [31:0]  in_csr_rdata,
    input       [4:0]   rd_addr     ,
    output              in_ready    ,

    output reg          out_valid   ,
    output      [31:0]  next_pc     ,
    output              reg_wen     ,
    output      [4:0]   reg_waddr   ,
    output      [31:0]  reg_wdata   

);

    localparam  IDLE=0;
    localparam CHOOSE=1;
    localparam OUTPUT=2;
    localparam DONE =3;

reg [1:0]state;
reg [11:0]ctrl;
reg [4:0] rd;
reg [31:0]npc,pc,imm,csr_rdata,mem_rdata,alu_result;

//输出数据
reg wen;
reg[31:0]wb_data;

assign in_ready=state==IDLE;

always @(posedge clock or posedge reset) begin
    if(reset)begin
        pc<=0;
        imm<=0;
        csr_rdata<=0;
        mem_rdata<=0;
        alu_result<=0;  
        npc<=32'h30000000;   
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
    state<=OUTPUT;   
    end   
    end 
    OUTPUT:begin
        state<=DONE;
    end
    DONE:begin
        state<=IDLE;    
    end
    endcase
    end
end


wire [2:0] MemtoReg=ctrl[8:6];
wire       RegWrite=ctrl[10];

assign reg_wen=RegWrite;
assign reg_waddr=rd;
assign next_pc=npc;
assign reg_wdata=wb_data;




always @(posedge clock or posedge reset) begin
    if (reset) begin
        wb_data <= 32'h0; // 复位时清零
    end
    else if (state==OUTPUT) begin
        out_valid<=1;
        case (MemtoReg)
            3'b000: wb_data <= alu_result;  // ALU结果
            3'b001: wb_data <= mem_rdata;   // 存储器数据
            3'b010: wb_data <= pc + 4;      // JAL指令
            3'b011: wb_data <= imm;         // LUI指令
            3'b100: wb_data <= csr_rdata;   // CSR数据
            default: wb_data <= 32'h0;
        endcase
    end
    else begin
        out_valid<=0;
    end
end

endmodule