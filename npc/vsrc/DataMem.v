module ysyx_25030085_DataMem (//数据存储器
//存储 把rs2存入地址为rs1+imm->为alu运算结果

//加载 把地址为rs1+imm->alu运算结果的数据加载到rd里面
    input rst,
    input MemRead,//储存器控制信号  读
    input MemWrite, //储存器控制信号，决定写
    input [2:0]MemOp,
    input [31:0] Read_rs2,//存入的数据
    input [31:0] addr,//存入或读出的地址
    output [31:0]ReadData//读出的数据
);




    reg [31:0] DataReg[0:65535];
    integer i=0;
    always@(*)begin
        if(rst)begin
         for(i=0;i<65536;i=i+1)
         DataReg[i]=0;
        end
        if(MemRead)begin
        case(MemOp)



        endcase
     
        end
        else if(MemWrite)begin
            case (MemOp)
                3'b000:begin//sb
                DataReg[addr]={24'h000000,Read_rs2[7:0]};
                    
                end 
                3'b001:begin//sh
                DataReg[addr]={16'h0000,Read_rs2[15:0]};
                    
                end
                3'b010:begin//sw
               // $display("addr:%08x",addr);
                //$display("data:%08x",Read_rs2);
                DataReg[addr]=Read_rs2;                 
                end
                default: begin
                    
                end
            endcase
            
        end
    end





endmodule