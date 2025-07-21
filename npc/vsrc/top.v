module ysyx_25030085_top (
    input clk,
    input rst,
    output [31:0] pc_out,
    output [31:0]inst

);
    assign inst =if_id_inst;
    wire [31:0]if_id_inst;
    wire [31:0] ex_me_alu;
    wire [31:0] rs1_data;
    wire [31:0] rs2_data;

 

  
ysyx_25030085_pc pc_init(

    .clk(clk),
    .rst(rst),


    //输入
    .wb_done(wb_done),
    .next_pc(next_pc),


     //输出
    .out_valid(if_id_valid),
    .pc(pc_out),
    .inst(if_id_inst),
    .out_ready(id_if_ready)


 
);

    wire[1:0]csr_wen;
    reg is_ecall;
    reg is_mret;
    wire id_if_ready,if_id_valid;

wire [4:0] rs1_addr,rs2_addr;
ysyx_25030085_control control_init(
    .clk(clk),
    .rst(rst),

    .in_valid(if_id_valid),
    .in_pc(pc_out),
    .in_inst(if_id_inst),
    .in_ready(id_if_ready),


    .rs1_addr(rs1_addr),
    .rs2_addr(rs2_addr),
    .rs1_data(rs1_data),
    .rs2_data(rs2_data),
    .in_reg_a5(reg_a5),
    
    //ex
    .out_valid(id_ex_valid),

    .imm_out(id_ex_imm),
    .ctrl_out(id_ex_ctrl),
    .out_rs1_data(id_ex_rs1),
    .out_rs2_data(id_ex_rs2),
    .pc_out(id_ex_pc),
    .reg_a5_out(id_ex_a5),

    .out_ready(ex_id_ready) 
);
wire id_ex_valid,ex_id_ready;

    wire [20:0] ctrl;
    wire [31:0] reg_a5,id_ex_a5;


ysyx_25030085_regfile regfile_init(  
  
    .reg_wen( reg_wen),
    .reg_waddr(reg_waddr),
    .reg_wdata(reg_wdata),

    .reg_rs1_addr(rs1_addr),
    .reg_rs2_addr(rs2_addr),
    .rs1_data(rs1_data),
    .rs2_data(rs2_data),
    .reg_a5(reg_a5)
    
);
   
wire [31:0] id_ex_rs1,id_ex_rs2,id_ex_pc,id_ex_imm;
wire [20:0] id_ex_ctrl;
ysyx_25030085_alu alu_init(
    .clk(clk),
    .rst(rst),

    .in_valid(id_ex_valid),
    .in_a5(id_ex_a5),
    .in_rs1_data(id_ex_rs1),
    .in_rs2_data(id_ex_rs2),
    .in_pc(id_ex_pc),
    .in_imm(id_ex_imm),
    .in_ctrl(id_ex_ctrl),
    .in_ready(ex_id_ready),

    .out_valid(ex_me_valid),
    .out_Alu_Result(ex_me_alu),
    .out_next_pc(next_pc),
    .out_rs2_data(ex_me_rs2),
    .out_ctrl(ex_me_ctrl),
    .csr_data(csr_data),
    .imm_out(ex_me_imm),
    .pc_out(ex_me_pc),
    .out_ready(me_ex_ready)
    
); 
wire [31:0] csr_data;
wire ex_me_valid,me_ex_ready;
wire [31:0]next_pc,ex_me_rs2;
wire [20:0] ex_me_ctrl;
wire [31:0] ex_me_pc,ex_me_imm;
ysyx_25030085_DataMem DataMem(
    .clk(clk),
    .rst(rst),
    
    .in_valid(ex_me_valid),
    .in_imm(ex_me_imm),
    .in_pc(ex_me_pc),
    .in_ctrl(ex_me_ctrl),
    .in_sram_wdata(ex_me_rs2),//作存储时输入数据
    .in_sram_addr(ex_me_alu),//作储存时输入地址，作加载时，加载地址
    .in_ready(me_ex_ready),



    .out_valid(me_wb_valid),
    .sram_rdata(sram_rdata),
    .ctrl_out(ex_wb_ctrl),
    .pc_out(ex_wb_pc),
    .imm_out(ex_wb_imm),
    .alu_result(ex_wb_alu),
    .out_ready(wb_me_ready)

);

wire me_wb_valid,wb_me_ready;
wire[20:0] ex_wb_ctrl;
wire [31:0] sram_rdata,ex_wb_pc,ex_wb_imm,ex_wb_alu;
 
ysyx_25030085_wb wb_init(
    .clk(clk),
    .rst(rst), 

    .in_valid(me_wb_valid),
    .in_alu_result(ex_wb_alu),
    .in_mem_rdata(sram_rdata),
    .in_pc(ex_wb_pc),
    .in_imm(ex_wb_imm),
    .in_csr_rdata(csr_data),
    .in_ctrl(ex_wb_ctrl),
    .in_ready(wb_me_ready),

    .out_valid(wb_done),
    .rd_addr(if_id_inst[11:7]),
    .reg_wen(reg_wen),
    .reg_waddr(reg_waddr),
    .reg_wdata(reg_wdata)

);
wire wb_done;
reg reg_wen;
reg [31:0]reg_wdata;
reg [4:0]reg_waddr;


endmodule