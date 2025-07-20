import "DPI-C"  function void info_register  (input int value,input bit en_display); 
//import "DPI-C" context function void set_scope();
module ysyx_25030085_regfile ( 

    //读
    input [4:0]reg_rs1_addr,
    input [4:0]reg_rs2_addr,
    output [31:0]rs1_data,
    output [31:0]rs2_data,

    input reg_wen,
    input [4:0]reg_waddr,
    input [31:0]reg_wdata,


    output [31:0]value_a5
);
    reg [4:0]rs1;
    reg [4:0]rs2;
    reg [4:0]rd;




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
      
       is_info_register=enable;
       is_en_display=en_display;
    endfunction
    always @(posedge is_info_register) begin
        for(i=0;i<32;i++)begin
        info_register(register[i],is_en_display);
        end
    end


    assign register[reg_waddr]=reg_wen?reg_wdata:0;
    
    assign rs1_data=(reg_rs1_addr!=0)?register[reg_rs1_addr]:0;//根据rs1寄存器编码找到对于数据
    assign rs2_data=(reg_rs2_addr!=0)?register[reg_rs2_addr]:0;
    assign value_a5 = register[15];


endmodule


module ysyx_25030085_csr_regfile (
    input clk,
    input [31:0]pc,
    input [31:0] value_a5,

    input [20:0] ctrl,
    input [11:0] csr_addr,

    input [31:0] csr_wdata,
    output reg [31:0] csr_rdata,
    output [31:0] ecall_mtvec,  // 改为wire输出
    output [31:0] mret_mepc     // 改为wire输出
);

// CSR寄存器
reg [31:0] mstatus;
reg [31:0] mtvec;
reg [31:0] mepc;
reg [31:0] mcause;

wire [1:0]csr_wen=ctrl[20:19];
wire is_ecall=ctrl[17];
wire is_mret=ctrl[18];

// 直接连接输出
assign ecall_mtvec = mtvec;
assign mret_mepc = mepc;

// 读操作
always @(*) begin
    case (csr_addr)
        12'h300: csr_rdata = mstatus;
        12'h305: csr_rdata = mtvec;
        12'h341: csr_rdata = mepc;
        12'h342: csr_rdata = mcause;
        default: csr_rdata = 32'h0;
    endcase
end

// 写入操作
always @(posedge clk) begin
    if(csr_wen != 2'd0) begin
        case(csr_addr)
        12'h300: mstatus <= (csr_wen==2'b01) ? csr_wdata : (csr_wen==2'b10) ? (mstatus|csr_wdata) : mstatus;
        12'h305: mtvec   <= (csr_wen==2'b01) ? csr_wdata : (csr_wen==2'b10) ? (mtvec|csr_wdata) : mtvec;
        12'h341: mepc    <= (csr_wen==2'b01) ? csr_wdata : (csr_wen==2'b10) ? (mepc|csr_wdata) : mepc;
        12'h342: mcause  <= (csr_wen==2'b01) ? csr_wdata : (csr_wen==2'b10) ? (mcause|csr_wdata) : mcause;
        default:begin
            
        end
        endcase
    end
end

// ecall和mret处理
localparam MSTATUS_MPP_MASK = 32'h00001800;
localparam MSTATUS_MPIE_BIT = 32'h00000080;
localparam MSTATUS_MIE_BIT  = 32'h00000008;

always @(posedge clk) begin
    if(is_ecall) begin
        $display("ecall a5:%08x", value_a5);
        $display("mtvec :%08x", mtvec);  // 直接显示mtvec
        
        // 更新状态寄存器
        mstatus <= (mstatus & ~(MSTATUS_MIE_BIT | MSTATUS_MPP_MASK)) |
                  ((mstatus & MSTATUS_MIE_BIT) << 4) |
                  MSTATUS_MPP_MASK;
        
        mepc <= pc;
        mcause <= value_a5;
    end
    else if(is_mret) begin
        mstatus <= (mstatus & ~MSTATUS_MPP_MASK) |
                  ((mstatus >> 4) & MSTATUS_MIE_BIT) |
                  (mstatus & ~MSTATUS_MPIE_BIT);
    end
end

endmodule