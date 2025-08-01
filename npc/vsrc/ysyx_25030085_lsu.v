

module ysyx_25030085_lsu (//数据存储器
//存储 把rs2存入地址为rs1+imm->为alu运算结果

//加载 把地址为rs1+imm->alu运算结果的数据加载到rd里面
    input clk,
    input rst,
    
    input                       in_valid,
    input [20:0]                in_ctrl,
    input [4:0]                 in_rd,
    input [31:0]                in_imm,
    input [31:0]                in_npc,
    input [31:0]                in_pc,

    input [31:0]                in_lsu_wdata,//存入的数据 rs1
    input [31:0]                in_lsu_addr, //存入或读出的地址 alu
    output                      in_ready,

    output                      out_valid,
    output reg [31:0]           mem_rdata,
    output [20:0]               ctrl_out,
    output [31:0]               imm_out,
    output [31:0]               npc_out,
    output [31:0]               pc_out,
    output [4:0]                rd_out,
    output [31:0]               alu_result,
    input                       out_ready,

    //与biu交互信号

    //输出到biu模块
    output reg                  lsu_req,        // 请求信号
    output reg                  lsu_wwe,        // 写使能
    output reg                  lsu_rwe,        // 读使能
    output reg [31:0]           lsu_addr,       // 地址输出
    output reg [31:0]           lsu_wdata,      // 写数据输出
    output reg [3:0]            lsu_strb,       // 字节选通信号

    // 来自BIU的信号
    input                       biu_valid,      // BIU准备好
    input   [1:0]               biu_rresp,      
    input   [1:0]               biu_wresp,
    input  [31:0]               biu_rdata       // 读取的数据


);
parameter IDLE=0;
parameter STORE=1;
parameter OUTPUT=2;

localparam OP_LW  = 3'b000;  // 加载字(32位，有符号)
localparam OP_LH  = 3'b001;  // 加载半字(16位，有符号)
localparam OP_LB  = 3'b010;  // 加载字节(8位，有符号)
localparam OP_LHU = 3'b011;  // 加载半字(16位，无符号)
localparam OP_LBU = 3'b100;  // 加载字节(8位，无符号)
localparam OP_SW  = 3'b101;  // 存储字(32位)
localparam OP_SH  = 3'b110;  // 存储半字(16位)
localparam OP_SB  = 3'b111;  // 存储字节(8位)

    reg [1:0]           state;
    reg                 has_data;
    reg [20:0]          ctrl;
    reg [4:0]           rd;
    reg [31:0]          wdata,addr,pc,imm,npc;
    reg [31:0]          lsu_rdata;    

    wire        MemWrite=ctrl[6];
    wire        MemRead =ctrl[5];
    

    wire [2:0]  MemOp   =ctrl[9:7];



    wire [1:0]  offset=addr[1:0];//获取偏移量
    wire [31:0] aligned_addr=addr&32'hFFFFFFFC;

    assign in_ready=state==IDLE;
    assign out_valid=state==OUTPUT;

    always @(posedge clk or posedge rst) begin
        if(rst)begin
            ctrl<=0;
            wdata<=0;
            addr<=0;  
            has_data<=0;
            state<=IDLE;
        end
        else
        case(state)
        IDLE:begin
         if(in_valid&&in_ready)begin
                ctrl<=in_ctrl;
                wdata<=in_lsu_wdata;
                addr <=in_lsu_addr;
                pc<=in_pc;
                npc<=in_npc;
                imm<=in_imm;
                rd<=in_rd;
                lsu_req<=1;         // 发起请求
                state<=STORE;
            end    
        end
        STORE:begin
            lsu_req<=0;
            if(MemRead)begin//  加载lw
            if(biu_rresp==2'b01)begin
                
                mem_rdata<=lsu_rdata ;
                state<=OUTPUT;
            end                       
            end
            else if(MemWrite)begin//写
            if(biu_wresp==2'b01)begin
                state<=OUTPUT;
            end             
            end  
            else begin
              
                state<=OUTPUT;
            end    
        end
        OUTPUT:begin
            if(out_ready)begin
                state<=IDLE;
            end          
        end
        endcase
    end

assign alu_result   =   addr ;
assign ctrl_out     =   ctrl ;
assign pc_out       =   pc   ;
assign npc_out      =   npc  ;
assign imm_out      =   imm  ;
assign rd_out       =   rd   ;



//biu数据
assign lsu_addr    =  aligned_addr  ;
assign lsu_wdata   =  wdata         ;
assign lsu_wwe     =  MemWrite      ;
assign lsu_rwe     =  MemRead       ;


  
//读数据，对来自biu的数据进行操作
always @(*) begin
    lsu_rdata = 32'h00000000;
    if(biu_valid&&state==STORE)begin
        if(biu_rresp==2'b01)begin
        case (MemOp)
            OP_LW: lsu_rdata = biu_rdata;  // 字操作，无需扩展
            
            OP_LH: begin
                // 有符号半字扩展
                if (offset[1]) 
                    lsu_rdata = {{16{biu_rdata[31]}}, biu_rdata[31:16]};
                else 
                    lsu_rdata = {{16{biu_rdata[15]}}, biu_rdata[15:0]};
            end
            
            OP_LHU: begin
                // 无符号半字扩展
                if (offset[1]) 
                    lsu_rdata = {16'h0000, biu_rdata[31:16]};
                else 
                    lsu_rdata = {16'h0000, biu_rdata[15:0]};
            end
            
            OP_LB: begin
                // 有符号字节扩展
                case (offset)
                    2'b00: lsu_rdata = {{24{biu_rdata[7]}}, biu_rdata[7:0]};
                    2'b01: lsu_rdata = {{24{biu_rdata[15]}}, biu_rdata[15:8]};
                    2'b10: lsu_rdata = {{24{biu_rdata[23]}}, biu_rdata[23:16]};
                    2'b11: lsu_rdata = {{24{biu_rdata[31]}}, biu_rdata[31:24]};
                endcase
            end
            
            OP_LBU: begin
                // 无符号字节扩展
                case (offset)
                    2'b00: lsu_rdata = {24'h000000, biu_rdata[7:0]};
                    2'b01: lsu_rdata = {24'h000000, biu_rdata[15:8]};
                    2'b10: lsu_rdata = {24'h000000, biu_rdata[23:16]};
                    2'b11: lsu_rdata = {24'h000000, biu_rdata[31:24]};
                endcase
            end
            default:begin
                lsu_rdata =0;
            end
        endcase
        end
        else begin
          //  $display("read error!");
        end
    end
end


// 存储操作：生成字节选通和写数据,发送biu给
always @(*) begin
    lsu_strb = 4'b0000;
    lsu_wdata = wdata;
    
    if (lsu_req && lsu_wwe&&state==STORE) begin
        case (MemOp)
            OP_SW: lsu_strb = 4'b1111;  // 字操作，所有字节有效
            
            OP_SH: begin
                // 半字操作，根据地址选择高低半字
                lsu_strb = offset[1] ? 4'b1100 : 4'b0011;
            end
            
            OP_SB: begin
                // 字节操作，根据地址选择具体字节
                case (offset)
                    2'b00: begin lsu_strb = 4'b0001; end
                    2'b01: begin lsu_strb = 4'b0010; end
                    2'b10: begin lsu_strb = 4'b0100; end
                    2'b11: begin lsu_strb = 4'b1000; end
                endcase
            end
            default:begin
                lsu_strb=4'b0000;
            end
        endcase
    end
end




endmodule