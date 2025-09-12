

//csrrw 读取指定 CSR寄存器值由立即数定位地址到目标寄存器 rd，将通用寄存器 rs1 的值写入 CSR,既读又写
//csrrs 同上 将 CSR 的值与 rs1 按位或（OR）后写回

module ysyx_25030085_csr_regfile (
    input clock,
    input reset,

    input         csr_wen, //控制信号
    input [11:0]  csr_addr, //寻址地址，11位立即数
    output reg [31:0] csr_rdata   // 读出寄存器的数据

);



reg [31:0] mcycle   ;
reg [31:0] mcycleh  ;

localparam mvendorid=32'h79737978 ;
localparam marchid  = 32'd25030085;  



// 读操作
always @(*) begin
    if(csr_wen)begin
    case (csr_addr)
        12'hb00: csr_rdata = mcycle ;
        12'hb80: csr_rdata = mcycleh;
        12'hf11: csr_rdata = mvendorid;
        12'hf12: csr_rdata = marchid ;
        default: csr_rdata = 32'h0;
    endcase
    end
    else begin
        csr_rdata=0;
    end

end

always @(posedge clock) begin
    if (reset) begin
        mcycle <= 32'h0;      
        mcycleh <= 32'h0;     
    end
    else begin
        // 低32位计数器递增
        mcycle <= mcycle + 1'b1;
        if (mcycle == 32'hFFFFFFFF) begin
            mcycleh <= mcycleh + 1'b1;
        end
    end
end




endmodule