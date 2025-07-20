module ysyx_25030085_top (
    input clk,
    input rst,
    output [31:0] pc_out,
    output [31:0]inst

);
    assign inst =instruction;
    reg [31:0]instruction;
    reg [31:0] Alu_Result;
    reg [31:0] Read_rs1;
    reg [31:0] Read_rs2;
    reg [31:0] ReadData;//数据存储器读出来的数据
    reg [31:0] imm;

    always @(posedge clk) begin
        //$display("inst:0x%08x pc:0x%08x",instruction,pc_out);
    end

  
ysyx_25030085_pc pc_init(

    .clk(clk),
    .rst(rst),


    .ctrl(ctrl),
    .pc(pc_out),
    .out_valid(if_id_valid),
    .inst(instruction),
    .out_ready(id_if_ready),
    .Alu_Result(Alu_Result),
    .mtvec(mtvec),
    .imm(imm),
    .mepc(mepc)//返回
 
);

    wire[1:0]csr_wen;
    reg is_ecall;
    reg is_mret;
    wire id_if_ready,if_id_valid=1;

wire [4:0] rs1_addr,rs2_addr;
ysyx_25030085_control control_init(
    .clk(clk),
    .rst(rst),

    .in_valid(if_id_valid),
    .in_pc(pc_out),
    .in_inst(instruction),
    .in_ready(id_if_ready),


    .rs1_addr(rs1_addr),
    .rs2_addr(rs2_addr),
    .rs1_data(Read_rs1),
    .rs2_data(Read_rs2),
    
    //ex
    .out_valid(id_ex_valid),
    .imm_out(id_ex_imm),
    .ctrl_out(id_ex_ctrl),
    .out_rs1_data(id_ex_rs1),
    .out_rs2_data(id_ex_rs2),
    .pc_out(id_ex_pc),
    .out_ready(ex_id_ready) 
);
wire id_ex_valid,ex_id_ready;

    wire [20:0] ctrl;
    wire [31:0] csr_rdata;
    wire [31:0] mtvec;
    wire [31:0] mepc;
    wire [31:0] value_a5;
ysyx_25030085_csr_regfile csr_regfile_init(
    .clk(clk),
    .pc(pc_out),
    .ctrl(ctrl),

    .csr_addr(imm[11:0]),
    
    .csr_wdata(Read_rs1),//src1
    .csr_rdata(csr_rdata),//读到的数据送回rd
    .ecall_mtvec(mtvec),//跳转地址送到pc
    .mret_mepc(mepc),
    .value_a5(value_a5)

);

ysyx_25030085_regfile regfile_init(  
  
    .reg_wen( reg_wen),
    .reg_waddr(reg_waddr),
    .reg_wdata(reg_wdata),

    .reg_rs1_addr(rs1_addr),
    .reg_rs2_addr(rs2_addr),
    .rs1_data(Read_rs1),
    .rs2_data(Read_rs2),
    .value_a5(value_a5)
    
);
   
wire [31:0] id_ex_rs1,id_ex_rs2,id_ex_pc,id_ex_imm;
wire [20:0] id_ex_ctrl;
ysyx_25030085_alu alu_init(
    .clk(clk),
    .rst(rst),

    .in_valid(id_ex_valid),
    .in_rs1_data(id_ex_rs1),
    .in_rs2_data(id_ex_rs2),
    .in_pc(id_ex_pc),
    .in_imm(id_ex_imm),
    .in_ctrl(id_ex_ctrl),
    .in_ready(ex_id_ready),



    .Alu_Result(Alu_Result)
); 
ysyx_25030085_DataMem DataMem(
    .clk(clk),
    .rst(rst),
    
    .ctrl(ctrl),
    .sram_wdata(Read_rs2),//作存储时输入数据
    .sram_addr(Alu_Result),//作储存时输入地址，作加载时，加载地址
    .sram_rdata(ReadData)//作加载时，加载出来的地址
);



ysyx_25030085_wb wb_init(
    .clk(clk),
    .rst(rst), 
    .alu_result(Alu_Result),
    .mem_rdata(ReadData),
    .pc(pc_out),
    .imm(imm),
    .csr_rdata(csr_rdata),
    .ctrl(ctrl),
    .rd_addr(instruction[11:7]),
    .reg_wen( reg_wen),
    .reg_waddr(reg_waddr),
    .reg_wdata(reg_wdata)

);
reg reg_wen;
reg [31:0]reg_wdata;
reg [4:0]reg_waddr;


endmodule