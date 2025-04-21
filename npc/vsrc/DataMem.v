import "DPI-C" function int pmem_readv(input int raddr);
// 总是读取地址为`raddr & ~0x3u`的4字节返回
//0x3u 的二进制为 0011，取反后 ~0x3u = 0xfffffffc（32位）或 0xfffc（16位）。
//waddr & ~0x3u 将地址的低2位清零，强制对齐到4字节边界。
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);


module ysyx_25030085_DataMem (//数据存储器
//存储 把rs2存入地址为rs1+imm->为alu运算结果

//加载 把地址为rs1+imm->alu运算结果的数据加载到rd里面
    input clk,
    input MemRead,//储存器控制信号  读 lw lb lh
    input MemWrite, //储存器控制信号，决定写sb sw sh
    input [2:0]MemOp,
    input [31:0] Read_rs2,//存入的数据
    input reg [31:0] addr,//存入或读出的地址
    output reg [31:0]ReadData//读出的数据
);
  
     reg [31:0] rdata;
     reg [1:0]  offset;//获取偏移量
     assign offset=addr[1:0];//为地址后两位
    reg [31:0] aligned_addr;
    reg [7:0]read_byte;
    reg [7:0] read_byteu;
    reg [15:0]read_half_word;
    reg [15:0]read_half_wordu;
    always@(posedge clk)begin//立即赋值，不然能读到数据，但是没有赋值
        aligned_addr=addr&32'hFFFFFFFC;//先对齐地址;
        if(MemRead)begin//读数据
       // $display("************************");
        // $display("地址：%08x offset%d",addr,addr[1:0]);
        // $display("offset: %d",offset);
            rdata = pmem_readv(aligned_addr);//进行选择相关位,设置n低两位为0，地址对齐
         //$display("lw hou data %08x",rdata);
            case(MemOp)
            3'b000:begin//lb 需要符号扩展
          
            case(offset)
            2'b00:read_byte=rdata[7:0];//读低字节
            2'b01:read_byte=rdata[15:8];
            2'b10:read_byte=rdata[23:16];
            2'b11:read_byte=rdata[31:24];
            endcase
            ReadData={{24{read_byte[7]}},read_byte};
   
            end
            3'b001:begin//lh
           
            case(offset)
            2'b00:read_half_word=rdata[15:0];
            2'b10:read_half_word=rdata[31:16];
            default:begin              
            end 
            endcase
            ReadData={{16{read_half_word[15]}},read_half_word};
            end
            3'b010:begin//lw
            //$display("lw is %08x",rdata);
            ReadData=rdata;  
            //$display("read is %08x",ReadData);  
            end
            3'b100:begin//lbu
           
            case(offset)
            2'b00:read_byteu=rdata[7:0];//读低字节
            2'b01:read_byteu=rdata[15:8];
            2'b10:read_byteu=rdata[23:16];
            2'b11:read_byteu=rdata[31:24];
            endcase
              ///$display("offset read %08x",read_byteu)  ; 
            ReadData={{24{1'b0}},read_byteu};//零扩展 
            //$display("lbu %08x",ReadData)  ;             
            end
            3'b101:begin//lhu
            case(offset)
            2'b00:read_half_wordu=rdata[15:0];
            2'b10:read_half_wordu=rdata[31:16];
            default:begin              
            end 
            endcase
            ReadData={{16{1'b0}},read_half_wordu};                
            end
            default:begin               
            end
            endcase
        end
        else if(MemWrite)begin//写
            case (MemOp)
                3'b000:begin//sb,写入一个字节
                case(offset)
                2'b00:pmem_write(aligned_addr,Read_rs2,8'b0001);//只改变最低位
                2'b01:pmem_write(aligned_addr,Read_rs2,8'b0010);
                2'b10:pmem_write(aligned_addr,Read_rs2,8'b0100);
                2'b11:pmem_write(aligned_addr,Read_rs2,8'b1000);//只改变最高位
                endcase   
                end 
                3'b001:begin//sh
                case(offset)
                2'b00: pmem_write(aligned_addr,Read_rs2,8'b0011);
                2'b10: pmem_write(aligned_addr,Read_rs2,8'b1100);
                default:begin
                    
                end
                endcase       
                end
                3'b010:begin//sw
              
                pmem_write(aligned_addr,Read_rs2,8'b1111);          
                end
                default: begin         
                end
            endcase
            
        end
    end





endmodule