module ysyx_25030085_ex(
    input               clock                 ,
    input               reset                 ,

    input               in_valid            ,
    input [31:0]        in_rs1_data         ,
    input [31:0]        in_rs2_data         ,
    input [11:0]        in_ctrl             ,
    input [31:0]        in_imm              ,
    input [4:0]         in_rd               ,
    input [31:0]        in_pc               ,
    output              in_ready            ,

    output              out_valid           ,
    output [31:0]       next_pc         ,
    output [31:0]   out_Alu_Result      ,
    output [31:0]       out_rs2_data        ,
    output [11:0]       out_ctrl            ,
    output [31:0]       csr_data            ,
    output [4:0]        rd_out              ,
    output [31:0]       imm_out             ,
    output [31:0]       pc_out              ,

    input               out_ready
);
    localparam IDLE=0;
    localparam OUTPUT=1;
    localparam WAIT=2;
    reg [1:0] state;
    reg [4:0] rd;
    reg [31:0] rs1_data,rs2_data,pc,imm;
    reg [11:0] ctrl;
 
    assign in_ready=(state==IDLE);
    assign out_valid=(state==OUTPUT);
    always @(posedge clock or posedge reset) begin
        if(reset)begin
            ctrl<=0;
            rs1_data<=0;
            rs2_data<=0;
            pc<=32'h3000_0000;
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

    assign out_rs2_data=rs2_data;
    assign out_ctrl =ctrl;
    assign imm_out=imm;
    assign pc_out =pc;
    assign rd_out=rd;

    wire  [31:0] B;
    wire   ALUSrc  =ctrl[0];
    wire   csr_wen =ctrl[11];
    wire   Jump    =ctrl[9];

    assign B=ALUSrc?imm:rs2_data;
    reg [31:0] Alu_Result;

    always @(*) begin
        if(state==OUTPUT)begin
            Alu_Result = rs1_data + B;  // ADD
        end
        else begin
            Alu_Result=0;
        end
    end


ysyx_25030085_csr_regfile csr_regfile(
    .clock(clock),
    .reset(reset),

    .csr_wen(csr_wen),//控制信号
    .csr_addr(imm[11:0]),
    .csr_rdata(csr_data)//读到的数据送回rd
);


assign next_pc = Jump?{Alu_Result[31:1],1'b0} :pc+4;





endmodule