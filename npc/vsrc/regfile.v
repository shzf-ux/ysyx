import "DPI-C"  function void info_register  (input int value,input bit en_display); 
//import "DPI-C" context function void set_scope();
module ysyx_25030085_regfile ( 
    input clk,
    input rst,
    input [31:0]pc_out,
    input [31:0]imm,
    input [31:0] instruction,
    input RegWrite,
    input [2:0] MemtoReg, //选择写回数据来源（ALU结果/存储器数据/PC+4等）
   //0为alu计算结果，1为储存器数据，2为pc+4，jal jalr等,100为csr
    input [31:0]MemRead,//储存器数据
    input [31:0]Alu_Result,//alu计算结果
    input [31:0]csr_rdata,
    output [31:0]Read_rs1,
    output [31:0]Read_rs2,
    output [31:0]value_a5
);
    reg [4:0]rs1;
    reg [4:0]rs2;
    reg [4:0]rd;
    assign rs1=instruction[19:15];
    assign rs2=instruction[24:20];
    assign rd =instruction[11:7];
    reg [31:0] register [0:31];

    reg is_info_register;
    reg is_en_display;
    integer i; 
    initial begin
     
        is_info_register=0;
    end

    //打印寄存器
    export "DPI-C" function info_register_en;
    function void info_register_en(input bit enable,input bit en_display);
      //$display("%d",is_info_register);
       is_info_register=enable;
       is_en_display=en_display;
      // $display("%d",is_info_register);
    endfunction
  
    always @(posedge is_info_register) begin
        for(i=0;i<32;i++)begin
        info_register(register[i],is_en_display);
        end
    end
    //保持零寄存器为0
    always@(*)begin
        register[0]=0;
    end


    always @(posedge clk) begin   //写回数据 

    if(rst)begin//复位信号
            for(i=0;i<32;i=i+1)begin
            register[i]=0;
            end
        end
        else if (RegWrite&&rd!=0) begin//写回rd使能信号，选择写回来源
        
        case(MemtoReg) //0为alu计算结果
    
        3'b000:begin//包含u型指令的pc+立即数写回
        register[rd] <= Alu_Result;//写回rd寄存器
       // $display("Write: x%d = 0x%08x", rd, Alu_Result);
        end
        3'b001:begin//1为储存器数据
        
        register[rd]<=MemRead;
            
        end
        3'b010:begin//2为pc+4，jal
       // $display("Write: x%d = 0x%08x", rd, register[rd]);
        register[rd]<=pc_out+4;
        end
        3'b011:begin//立即数LUI
        register[rd]<=imm;
        end
        3'b100:begin//csr寄存器数据
        register[rd]<=csr_rdata;
        end
        default:begin
            
        end
        endcase
        end
        end 
    
    assign Read_rs1=register[rs1];//根据rs1寄存器编码找到对于数据
    assign Read_rs2=register[rs2];
    assign value_a5 = register[15];


endmodule



module ysyx_25030085_csr_regfile (
    input clk,
    input [31:0]pc,
    input [31:0] value_a5,
    input is_ecall,//识别ecall指令
    input is_mret,//识别ecall指令
    input [11:0] csr_addr,//来自立即数字段
    input [1:0] csr_wen,//写使能控制o信号
    //0为不使能，01为写入，10为相或
    input [31:0] csr_wdata,//写入的数据，来自src1
    output reg [31:0] csr_rdata,
    output reg [31:0] ecall_mtvec,//ecall设置mtvec
    output reg [31:0] mret_mepc//ecall设置mtvec

);
//csr寄存器

   reg [31:0] mstatus;
   reg [31:0] mtvec;
   reg [31:0] mepc;
   reg [31:0] mcause;


    localparam MSTATUS_MPP_MASK = 32'h00001800; // MPP位掩码（bits 12-11）
    localparam MSTATUS_MPIE_BIT = 32'h00000080; // MPIE位（bit 7）
    localparam MSTATUS_MIE_BIT  = 32'h00000008; // MIE位（bit 3）

//读操作

always @(*) begin
    case (csr_addr)
        12'h300: csr_rdata = mstatus;
        12'h305: csr_rdata = mtvec;
        12'h341: csr_rdata = mepc;
        12'h342: csr_rdata = mcause;
        default: csr_rdata = 32'h0;
    endcase
end
//写入操作

//同步写入操作
always @(posedge clk) begin
    if(csr_wen!=2'd0)begin
        //$display("addr:%08x",csr_addr);
        case(csr_addr)
        12'h300:begin
          mstatus= (csr_wen==2'b01)?csr_wdata:((csr_wen==2'b10)? (mstatus|csr_wdata): mstatus);
        
        end
        12'h305:begin
          mtvec= (csr_wen==2'b01)?csr_wdata:((csr_wen==2'b10)? (mtvec|csr_wdata):mtvec);  
        end
        12'h341:begin
          mepc= (csr_wen==2'b01)?csr_wdata:((csr_wen==2'b10)? (mepc|csr_wdata): mepc); 
        end
        12'h342:begin
          mcause= (csr_wen==2'b01)?csr_wdata:((csr_wen==2'b10)? ( mcause|csr_wdata):mcause); 
        end
        default:begin
            
        end
        endcase
    end
    else begin
        
    end
end

    //ecall指令
    always @(posedge clk) begin
        if(is_ecall)begin
        // $display("ecall a5:%08x",value_a5);
        mstatus = (mstatus & ~MSTATUS_MIE_BIT)|((mstatus & MSTATUS_MIE_BIT) << 4)|MSTATUS_MPP_MASK; 
        mepc =pc;
        mcause = value_a5;//a7寄存器的值
         //$display("npc mcause:%08x",mcause);
        ecall_mtvec =mtvec;                   
// 清除MIE（bit 3） 0
// 原MIE值移动到MPIE（bit 7）1
// 设置MPP为机器模式（bits 12-11）11
        end
        else if(is_mret)begin
        mstatus =(mstatus & MSTATUS_MIE_BIT)|((mstatus & MSTATUS_MIE_BIT) << 4)|~MSTATUS_MPP_MASK; 
        mret_mepc=mepc;//保存之前的地址
        end
// 恢复MIE（bit 3） 1 
// 原MIE值移动到MPIE（bit 7）1 规范要求
// 设置MPP为普通模式（bits 12-11）00
    end










    
   























endmodule