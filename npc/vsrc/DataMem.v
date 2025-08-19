import "DPI-C" function int pmem_readv(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

module ysyx_25030085_lsu (
    input        clk,
    input        rst,          
    input        MemRead,      
    input        MemWrite,     
    input [1:0]  MemOp,        
    input [31:0] Read_rs2,     
    input [31:0] addr,         
    output reg [31:0] ReadData 
);

// 地址对齐：清除低2位，确保按4字节对齐
wire [31:0] aligned_addr = addr & 32'hFFFFFFFC;
// 地址偏移：低2位，用于定位4字节内的具体字节
wire [1:0]  offset = addr[1:0];
reg [31:0] rdata ;

always @(posedge clk) begin
    if (rst) begin
        ReadData = 32'h0;  
        rdata = 32'h0;     
    end else begin
        // 非复位状态：正常处理读写
        ReadData = 32'h0;  // 默认值
        rdata = 32'h0;     // 默认值

        // 读操作：处理lw和lbu（仅在非复位且MemRead有效时）
        if (MemRead) begin
            rdata = pmem_readv(aligned_addr);  // 读取对齐地址数据
            
            case (MemOp)
                2'b01: ReadData = rdata;  // lw：输出32位数据
                2'b10: begin              // lbu：零扩展指定字节
                    case (offset)
                        2'b00: ReadData = {24'h0, rdata[7:0]};
                        2'b01: ReadData = {24'h0, rdata[15:8]};
                        2'b10: ReadData = {24'h0, rdata[23:16]};
                        2'b11: ReadData = {24'h0, rdata[31:24]};
                    endcase
                end
                default:begin
                    
                end
            endcase
        end
        // 写操作：处理sb和sw（仅在非复位且MemWrite有效时）
        else if (MemWrite) begin
            case (MemOp)
                2'b01: begin  // sw：写32位（4字节）
                    pmem_write(aligned_addr, Read_rs2, 8'b1111);
                end
                2'b00: begin  // sb：写指定字节
                    case (offset)
                        2'b00: pmem_write(aligned_addr, Read_rs2, 8'b0001);
                        2'b01: pmem_write(aligned_addr, Read_rs2, 8'b0010);
                        2'b10: pmem_write(aligned_addr, Read_rs2, 8'b0100);
                        2'b11: pmem_write(aligned_addr, Read_rs2, 8'b1000);
                    endcase
                end
                default:begin
                    
                end
            endcase
        end
    end
end

endmodule