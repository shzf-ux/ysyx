import "DPI-C" function int pmem_readv(input int raddr);
// 总是读取地址为`raddr & ~0x3u`的4字节返回
//0x3u 的二进制为 0011，取反后 ~0x3u = 0xfffffffc（32位）或 0xfffc（16位）。
//waddr & ~0x3u 将地址的低2位清零，强制对齐到4字节边界。
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);


module ysyx_25030085_DataMem (//数据存储器
//存储 把rs2存入地址为rs1+imm->为alu运算结果

//加载 把地址为rs1+imm->alu运算结果的数据加载到rd里面
    input clk,
    input rst,
    
    input in_valid,
    input [20:0] in_ctrl,
    input [31:0] in_sram_wdata,//存入的数据 rs1
    input [31:0] in_sram_addr, //存入或读出的地址 alu

    input [31:0] in_imm,
    input [31:0] in_pc,

    output in_ready,

    output out_valid,
    output [31:0]sram_rdata,//读出的数据
    output [20:0]ctrl_out,
    output [31:0]imm_out,
    output [31:0]pc_out,
    output [31:0]alu_result,
    input  out_ready
);

    reg has_data;
    reg[20:0] ctrl;
    reg [31:0]sram_wdata,sram_addr,pc,imm;
    assign in_ready=!has_data;
    assign out_valid=has_data;

    always @(posedge clk or posedge rst) begin
        if(rst)begin
            ctrl<=0;
            sram_wdata<=0;
            sram_addr<=0;  
            has_data<=0 ;
        end
        else begin
             if(in_valid&&in_ready)begin
                ctrl<=in_ctrl;
                sram_wdata<=in_sram_wdata;
                sram_addr <=in_sram_addr;
                pc<=in_pc;
                imm<=in_imm;
                has_data<=1;
            end
            else if(out_valid&&out_ready)begin
                has_data<=0;
            end
        end
   
    end

assign alu_result=sram_addr ;
assign ctrl_out=ctrl;
assign pc_out =pc;
assign imm_out=imm;



  
  wire MemWrite=ctrl[6];
  wire MemRead =ctrl[5];
  wire [2:0] MemOp =ctrl[9:7];
  reg [31:0]ReadData;

    reg [7:0]read_byte;
    reg [7:0] read_byteu;
    reg [15:0]read_half_word;
    reg [15:0]read_half_wordu;
    reg [31:0] rdata;

    wire [1:0]  offset=sram_addr[1:0];//获取偏移量
    wire [31:0] aligned_addr=sram_addr&32'hFFFFFFFC;

    always@(posedge clk or posedge rst)begin//立即赋值，不然能读到数据，但是没有赋值
    if(rst)begin
        read_byte<=0;
        read_byteu<=0;
        read_half_word<=0;
        read_half_wordu<=0;
    end
    else begin
        if(MemRead)begin//读数据
        // $display("地址：%08x offset%d",addr,addr[1:0]);
        // $display("offset: %d",offset);
            rdata = pmem_readv(aligned_addr);//进行选择相关位,设置n低两位为0，地址对齐
        // $display("lw hou data %08x",rdata);
            case(MemOp)
            3'b000:begin//lb 需要符号扩展
          
            case(offset)
            2'b00:read_byte<=rdata[7:0];//读低字节
            2'b01:read_byte<=rdata[15:8];
            2'b10:read_byte<=rdata[23:16];
            2'b11:read_byte<=rdata[31:24];
            endcase
            ReadData<={{24{read_byte[7]}},read_byte};
   
            end
            3'b001:begin//lh
           
            case(offset)
            2'b00:read_half_word<=rdata[15:0];
            2'b10:read_half_word<=rdata[31:16];
            default:begin              
            end 
            endcase
            ReadData<={{16{read_half_word[15]}},read_half_word};
            end
            3'b010:begin//lw
            //$display("lw is %08x",rdata);
            ReadData<=rdata;  
            //$display("read is %08x",ReadData);  
            end
            3'b100:begin//lbu
           
            case(offset)
            2'b00:read_byteu<=rdata[7:0];//读低字节
            2'b01:read_byteu<=rdata[15:8];
            2'b10:read_byteu<=rdata[23:16];
            2'b11:read_byteu<=rdata[31:24];
            endcase
            // $display("offset read %08x",rdata)  ; 
            ReadData<={{24{1'b0}},read_byteu};//零扩展 
            //$display("lbu %08x",ReadData)  ;             
            end
            3'b101:begin//lhu
            case(offset)
            2'b00:read_half_wordu<=rdata[15:0];
            2'b10:read_half_wordu<=rdata[31:16];
            default:begin              
            end 
            endcase
            ReadData<={{16{1'b0}},read_half_wordu};                
            end
            default:begin               
            end
            endcase

        end
        else if(MemWrite)begin//写
            case (MemOp)
                3'b000:begin//sb,写入一个字节
                case(offset)
                2'b00:pmem_write(aligned_addr,sram_wdata,8'b0001);//只改变最低位
                2'b01:pmem_write(aligned_addr,sram_wdata,8'b0010);
                2'b10:pmem_write(aligned_addr,sram_wdata,8'b0100);
                2'b11:pmem_write(aligned_addr,sram_wdata,8'b1000);//只改变最高位
                endcase   
                end 
                3'b001:begin//sh
               //$display("data: %0x",sram_wdata);
                case(offset)
                2'b00: pmem_write(aligned_addr,sram_wdata,8'b0011);
                2'b10: pmem_write(aligned_addr,sram_wdata,8'b1100);
                default:begin
                    
                end
                endcase       
                end
                3'b010:begin//sw
                pmem_write(aligned_addr,sram_wdata,8'b1111);          
                end
                default: begin         
                end
            endcase    
        end
    end
    end

assign sram_rdata=ReadData;



endmodule