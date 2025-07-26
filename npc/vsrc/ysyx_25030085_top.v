module ysyx_25030085_top (
    input clk,
    input rst,

    //itrace difftest;
    output [31:0] top_pc,
    output [31:0] top_inst,

    output top_valid,
    output top_ready,
    output inst_done
);
    assign top_valid=if_id_valid;
    assign top_ready =id_if_ready;
    assign top_inst =if_id_inst;
    assign top_pc  =next_pc;
    assign inst_done=wb_done;

    //if与wb信号
    wire [31:0] next_pc;
    wire wb_done;

    //if与id信号
    wire [31:0] if_id_inst,if_id_pc;    //数据
    wire id_if_ready,if_id_valid;       //握手信号

    //id与reg读取数据
    wire [4:0] rs1_addr,rs2_addr;
    wire [31:0] rs1_data,rs2_data,reg_a5;

    //id与ex信号
    wire [4:0] id_ex_rd;
    wire [31:0] id_ex_rs1,id_ex_rs2,id_ex_pc,id_ex_imm,id_ex_a5;
    wire [20:0] id_ex_ctrl;             //数据
    wire id_ex_valid,ex_id_ready;       //握手信号

    //ex与me信号
    wire [4:0]ex_me_rd;
    wire [31:0] csr_data;
    wire [20:0] ex_me_ctrl;
    wire [31:0] ex_me_pc,ex_me_imm,ex_me_npc,ex_me_rs2,ex_me_alu;
    wire ex_me_valid,me_ex_ready;       //握手信号

    //me与wb信号
    wire [4:0]  me_wb_rd;
    wire [20:0] me_wb_ctrl;
    wire [31:0] sram_rdata,me_wb_pc,me_wb_imm,me_wb_alu,me_wb_npc;
    wire me_wb_valid,wb_me_ready;       //握手信号
 
    //wb写回reg
    reg reg_wen;//写使能
    reg [31:0]reg_wdata;
    reg [4:0] reg_waddr;

ysyx_25030085_if ifu(
    .clk(clk),
    .rst(rst),

    //wb输入
    .wb_done(wb_done),  //来自wb的out_valid
    .next_pc(next_pc),  

     //输出给if
    .out_valid(if_id_valid),
    .pc(if_id_pc),
    .inst(if_id_inst),
    .out_ready(id_if_ready)
);
    


ysyx_25030085_id idu(
    .clk(clk),
    .rst(rst),

    .in_valid(if_id_valid),
    .in_pc(if_id_pc),
    .in_inst(if_id_inst),
    .in_ready(id_if_ready),

    //与寄存器堆交互
    .rs1_addr(rs1_addr),
    .rs2_addr(rs2_addr),
    .rs1_data(rs1_data),
    .rs2_data(rs2_data),
    .in_reg_a5(reg_a5),
    
    //送到ex模块
    .out_valid(id_ex_valid),
    .imm_out(id_ex_imm),
    .ctrl_out(id_ex_ctrl),
    .out_rs1_data(id_ex_rs1),
    .out_rs2_data(id_ex_rs2),
    .pc_out(id_ex_pc),
    .reg_a5_out(id_ex_a5),
    .rd_out(id_ex_rd),
    .out_ready(ex_id_ready) 
);


ysyx_25030085_regfile regfile(  
    .clk(clk),
    .rst(rst), 
    
    .reg_wen( reg_wen),
    .reg_waddr(reg_waddr),
    .reg_wdata(reg_wdata),

    .reg_rs1_addr(rs1_addr),
    .reg_rs2_addr(rs2_addr),
    .rs1_data(rs1_data),
    .rs2_data(rs2_data),
    .reg_a5(reg_a5)   
);
   
ysyx_25030085_ex exu(
    .clk(clk),
    .rst(rst),

    .in_valid(id_ex_valid),
    .in_a5(id_ex_a5),
    .in_rs1_data(id_ex_rs1),
    .in_rs2_data(id_ex_rs2),
    .in_pc(id_ex_pc),
    .in_rd(id_ex_rd),
    .in_imm(id_ex_imm),
    .in_ctrl(id_ex_ctrl),
    .in_ready(ex_id_ready),

    .out_valid(ex_me_valid),
    .out_Alu_Result(ex_me_alu),
    .out_next_pc(ex_me_npc),
    .out_rs2_data(ex_me_rs2),
    .out_ctrl(ex_me_ctrl),
    .csr_data(csr_data),
    .imm_out(ex_me_imm),
    .pc_out(ex_me_pc),
    .rd_out(ex_me_rd),
    .out_ready(me_ex_ready)
    
); 
ysyx_25030085_DataMem mem(
    .clk(clk),
    .rst(rst),
    
    .in_valid(ex_me_valid),
    .in_imm(ex_me_imm),
    .in_npc(ex_me_npc),
    .in_pc(ex_me_pc),
    .in_rd(ex_me_rd),
    .in_ctrl(ex_me_ctrl),
    .in_sram_wdata(ex_me_rs2),//作存储时输入数据
    .in_sram_addr(ex_me_alu),//作储存时输入地址，作加载时，加载地址
    .in_ready(me_ex_ready),



    .out_valid(me_wb_valid),
    .sram_rdata(sram_rdata),
    .ctrl_out(me_wb_ctrl),
    .npc_out(me_wb_npc),
    .pc_out(me_wb_pc),
    .imm_out(me_wb_imm),
    .rd_out(me_wb_rd),
    .alu_result(me_wb_alu),
    .out_ready(wb_me_ready)
);


ysyx_25030085_wb wbu(
    .clk(clk),
    .rst(rst), 

    .in_valid(me_wb_valid),
    .in_alu_result(me_wb_alu),
    .in_mem_rdata(sram_rdata),
    .in_npc(me_wb_npc),
    .in_pc(me_wb_pc),
    .in_imm(me_wb_imm),
    .in_csr_rdata(csr_data),
    .in_ctrl(me_wb_ctrl),
    .rd_addr(me_wb_rd),
    .in_ready(wb_me_ready),

    //送回ifu
    .out_valid(wb_done),
    .next_pc(next_pc),

    //写回寄存器堆
    .reg_wen(reg_wen),
    .reg_waddr(reg_waddr),
    .reg_wdata(reg_wdata)

);
//ftrace
    wire is_jar_call;
    wire is_jalr_call;
    wire is_jalr_ret;

    assign is_jar_call = (if_id_inst[11:7] == 5'd1) && (id_ex_ctrl[15:14] == 2'b01);  // JAL调用
    assign is_jalr_call = (if_id_inst[11:7] == 5'd1) && (id_ex_ctrl[15:14] == 2'b10);  // JALR调用
    assign is_jalr_ret = (if_id_inst[11:7] == 5'd0) && (if_id_inst[19:15] == 5'd1) && (id_ex_ctrl[15:14] == 2'b10);  // JALR返回

    always @(posedge clk) begin
        if ((is_jar_call || is_jalr_call)&&wb_done) begin
            display_call_func(if_id_pc, next_pc);  // 函数调用追踪
        end
        if (is_jalr_ret&&wb_done) begin
            display_ret_func(if_id_pc, next_pc);  // 函数返回追踪
        end
    end
endmodule