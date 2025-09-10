

module ysyx_25030085_lsu (//数据存储器
//存储 把rs2存入地址为rs1+imm->为alu运算结果

//加载 把地址为rs1+imm->alu运算结果的数据加载到rd里面
    input                       clock         ,
    input                       reset         ,
    
    input                       in_valid    ,
    input [11:0]                in_ctrl     ,
    input [4:0]                 in_rd       ,
    input [31:0]                in_imm      ,
    input [31:0]                in_npc      ,
    input [31:0]                in_pc       ,

    input [31:0]                in_lsu_wdata,//存入的数据 rs1
    input [31:0]                in_lsu_addr , //存入或读出的地址 alu
    output                      in_ready    ,

    output                      out_valid   ,
    output reg [31:0]           mem_rdata   ,
    output [11:0]               ctrl_out    ,
    output [31:0]               imm_out     ,
    output [31:0]               npc_out     ,
    output [31:0]               pc_out      ,
    output [4:0]                rd_out      ,
    output [31:0]               alu_result  ,
    input                       out_ready   ,


    output reg                  lsu_reqValid     ,        // 请求信号
    output reg                  lsu_wen     ,        // 写使能

    output reg [31:0]           lsu_addr    ,       // 地址输出
    output reg [31:0]           lsu_wdata   ,      // 写数据输出
    output reg [3:0]            lsu_wmask    ,       // 字节选通信号

    output reg [1:0]            lsu_size   ,
   
    input                       lsu_respValid   ,
    input  [31:0]               lsu_rdata       // 读取的数据


);
    localparam IDLE=0;
    localparam STORE=1;
    localparam OUTPUT=2;

    localparam OP_LW  = 3'b010;  // 加载字(32位，有符号)
    localparam OP_LBU = 3'b100;  // 加载字节(8位，无符号)
    localparam OP_SW  = 3'b010;  // 存储字(32位)
    localparam OP_SB  = 3'b000;  // 存储字节(8位)

    reg [1:0]           state;
    reg [11:0]          ctrl;
    reg [4:0]           rd;
    reg [31:0]          wdata,addr,pc,imm,npc;
    

    wire        MemWrite=ctrl[2];
    wire        MemRead =ctrl[1];
    wire [2:0]  MemOp   =ctrl[5:3];

    wire [1:0]  offset=addr[1:0];//获取偏移量
    wire [31:0] aligned_addr=addr&32'hFFFFFFFC;

    wire unaligned_ac=addr[19:0]==20'h10000;


    assign in_ready=state==IDLE;
    assign out_valid=state==OUTPUT;
    assign lsu_wen =MemWrite;

    assign alu_result   =   addr ;
    assign ctrl_out     =   ctrl ;
    assign pc_out       =   pc   ;
    assign npc_out      =   npc  ;
    assign imm_out      =   imm  ;
    assign rd_out       =   rd   ;
    //biu数据

    always @(posedge clock or posedge reset) begin
        if(reset)begin
            ctrl<=0;
            wdata<=0;
            addr<=0;  
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
                lsu_reqValid<=1;         // 发起请求
                state<=STORE;
            end    
        end
        STORE:begin
            lsu_reqValid<=0;
            if(MemRead|MemWrite)begin//  加载lw
                if(lsu_respValid)begin
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



  
//读数据，对来自biu的数据进行操作
always @(posedge clock) begin
    if(state==STORE&lsu_respValid)begin
            case (MemOp)
                OP_LW: mem_rdata = lsu_rdata;  // 字操作，无需扩展               
                OP_LBU: begin
                    // 无符号字节扩展
                    case (offset)
                        2'b00: mem_rdata = {24'h000000, lsu_rdata[7:0]};
                        2'b01: mem_rdata = {24'h000000, lsu_rdata[15:8]};
                        2'b10: mem_rdata = {24'h000000, lsu_rdata[23:16]};
                        2'b11: mem_rdata = {24'h000000, lsu_rdata[31:24]};
                    endcase
                end
                default:begin
                    mem_rdata =0;
                end
            endcase
    end
end





always @(*) begin
    // 默认为4字节（字操作）
    lsu_size = 2'b10;
    if (MemRead) begin
        case (MemOp)
            OP_LBU:        lsu_size = 2'b00;  // 1字节
            OP_LW:         lsu_size = 2'b10;  // 4字节
            default:       lsu_size = 2'b10;
        endcase
    end

    // 写操作：根据MemOp生成awsize
    if (MemWrite) begin
        case (MemOp)
            OP_SB:         lsu_size = 2'b00;  // 1字节
            OP_SW:         lsu_size = 2'b10;  // 4字节
            default:       lsu_size = 2'b10;
        endcase
    end
    if(MemRead|MemWrite)begin
        if(unaligned_ac)begin
            lsu_addr = addr;  // 内存地址对齐到4字节
            end
        else begin
            lsu_addr = aligned_addr;  // 内存地址对齐到4字节
        end
    end
    else begin
        lsu_addr=0;
    end

end





always @(*) begin
    lsu_wmask = 4'b0000;
    lsu_wdata = wdata;  // 默认值
   
    
    if (lsu_reqValid && lsu_wen && state == STORE) begin
        begin
            // 内存写：使用对齐地址，按正常内存操作处理    
            case (MemOp)
                OP_SW: begin  // 字操作（4字节）
                    lsu_wmask = 4'b1111;
                end
                OP_SB: begin  // 字节操作（1字节）
                    lsu_wmask = 4'b0001 << offset;
                    lsu_wdata = {24'h0, wdata[7:0]} << (8 * offset);
                end
                default:begin
                    
                end
            endcase
        end    
    end
end



endmodule