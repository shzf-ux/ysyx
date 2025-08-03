
//ecall 1保存pc到mepc，设置mcause异常码 a5寄存器，更新mstatus,【跳转mtvec(在汇编设置过)】
//csrrw 读取指定 CSR寄存器值由立即数定位地址到目标寄存器 rd，将通用寄存器 rs1 的值写入 CSR
//csrrs 同上 将 CSR 的值与 rs1 按位或（OR）后写回
//mret 还原mstatus 恢复pc 为mepc（返回地址）
module ysyx_25030085_csr_regfile (
    input clock,
    input reset,

    input [31:0] pc,       //保存pc
    input [31:0] reg_a5, 

    input        is_ecall,
    input        is_mret,
    input [1:0]  csr_wen, //控制信号

    input [11:0] csr_addr, //寻址地址，11位立即数
    input [31:0] csr_wdata,//rs1数据



    output [31:0] csr_rdata,    // 读出寄存器的数据
    output [31:0] mtvec_out,  //异常地址
    output [31:0] mepc_out  //返回地址
);

// CSR寄存器
reg [31:0] mstatus;
reg [31:0] mtvec;
reg [31:0] mepc;
reg [31:0] mcause;

assign mtvec_out=mtvec;
assign mepc_out =mepc;

reg [31:0] rdata_reg;
assign csr_rdata=rdata_reg;

// 读操作
always @(*) begin
    case (csr_addr)
        12'h300: rdata_reg = mstatus;
        12'h305: rdata_reg = mtvec;
        12'h341: rdata_reg = mepc;
        12'h342: rdata_reg = mcause;
        default: rdata_reg = 32'h0;
    endcase
end

// 写入操作
always @(posedge clock) begin
    if(csr_wen != 2'd0) begin //01 csrrw 10csrrs
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

always @(posedge clock) begin
    if(is_ecall) begin    
        // 更新状态寄存器
        mstatus <= (mstatus & ~(MSTATUS_MIE_BIT | MSTATUS_MPP_MASK)) |
                  ((mstatus & MSTATUS_MIE_BIT) << 4) |
                  MSTATUS_MPP_MASK;      
        mepc <= pc;
        mcause <= reg_a5;
    end
    else if(is_mret) begin
        mstatus <= (mstatus & ~MSTATUS_MPP_MASK) |
                  ((mstatus >> 4) & MSTATUS_MIE_BIT) |
                  (mstatus & ~MSTATUS_MPIE_BIT);
    end
end
endmodule