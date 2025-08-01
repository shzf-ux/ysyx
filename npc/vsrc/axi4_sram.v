import "DPI-C" function int pmem_readv(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

module ysyx_25030085_axi4_lite_sram (
    input               clk                 ,
    input               rst                 ,
    
    // 读地址通道
    input       [31:0]  S_AXI_ARADDR        ,
    input               S_AXI_ARVALID       ,
    output reg          S_AXI_ARREADY       ,
    
    // 读数据通道
    output reg  [31:0]  S_AXI_RDATA         ,
    output reg  [1:0]   S_AXI_RRESP         ,   //读响应
    output reg          S_AXI_RVALID        ,
    input               S_AXI_RREADY        ,
    
    // 写地址通道
    input       [31:0]  S_AXI_AWADDR        ,
    input               S_AXI_AWVALID       ,
    output reg          S_AXI_AWREADY       ,
    
    // 写数据通道
    input       [31:0]  S_AXI_WDATA         ,
    input       [3:0]   S_AXI_WSTRB         ,
    input               S_AXI_WVALID        ,
    output reg          S_AXI_WREADY        ,
    
    // 写响应通道
    output reg  [1:0]   S_AXI_BRESP         ,
    output reg          S_AXI_BVALID        ,
    input               S_AXI_BREADY        
);
    reg  [31:0]  s_rdata                ;
    wire         AW_active              ;
    wire         W_active               ;
    wire         B_active               ;
    wire         AR_active              ;
    wire         R_active               ;



    assign       AW_active = S_AXI_AWVALID & S_AXI_AWREADY;
    assign       W_active  = S_AXI_WVALID  & S_AXI_WREADY;    
    assign       B_active  = S_AXI_BREADY  & S_AXI_BVALID;

    assign       AR_active = S_AXI_ARVALID & S_AXI_ARREADY;     //读
    assign       R_active  = S_AXI_RVALID  & S_AXI_RREADY;


    function  bit check_address_range(input [31:0] addr);
        // 0x80000000到0x8FFFFFFFF的范围检查
        return (addr >= 32'h8000_0000) && (addr <= 32'h8FFF_FFFF);
    endfunction



// 读地址通道
always @(posedge clk or negedge rst) begin
    if (rst) begin
        S_AXI_ARREADY<=0;
    end
    else if (S_AXI_ARVALID&!S_AXI_ARREADY)begin
        S_AXI_ARREADY<=1;
    end
    else begin
        S_AXI_ARREADY<=0;
    end
end

// 读数据通道握手
always @(posedge clk or negedge rst) begin
    if (rst) begin
        S_AXI_RDATA  <= 32'h0;
        S_AXI_RRESP  <= 2'b00;  // 初始化响应信号
    end
    else if(AR_active)begin                     //地址握手成功
        if(check_address_range(S_AXI_ARADDR))begin
        S_AXI_RDATA<=pmem_readv(S_AXI_ARADDR);  //发送数据
        S_AXI_RRESP<=2'b01;                      //发送响应
        S_AXI_RVALID<=1;                        //数据邮箱
        end
        else begin
        S_AXI_RDATA  <= 32'h0;  // 错误时数据无效
        S_AXI_RRESP  <= 2'b00;  // 标准SLVERR响应
        S_AXI_RVALID <= 1'b1;   // 错误响应也需置位RVALID
        end
    end
    else if(R_active)begin                  //数据握手成功
    S_AXI_RVALID<=0;
    end
    else begin
        S_AXI_RVALID <= S_AXI_RVALID;
        S_AXI_RDATA  <= S_AXI_RDATA;
        S_AXI_RRESP  <= 2'b00;
    end
end


reg [31:0]  write_addr_reg;
reg [31:0]  write_data_reg;

// 写地址通道握手
always @(posedge clk or negedge rst) begin
    if (rst) begin
        S_AXI_AWREADY <= 1'b0;
    end 
    else if(S_AXI_AWVALID&!S_AXI_AWREADY)begin
        write_addr_reg<=S_AXI_AWADDR;
        S_AXI_AWREADY<=1;
    end
    else begin
        S_AXI_AWREADY<=0;
    end
    
end

// 写数据通道握手
always @(posedge clk or negedge rst) begin
    if (rst) begin
        S_AXI_WREADY <= 1'b0;
    end 
    else if(S_AXI_WVALID&!S_AXI_WREADY )begin
        write_data_reg<=S_AXI_WDATA;
        S_AXI_WREADY<=1;
    end
    else begin
        S_AXI_WREADY<=0; 
    end
end

// 写响应通道握手
always @(posedge clk or negedge rst) begin
    if (rst) begin
        S_AXI_BVALID <= 1'b0;
        S_AXI_BRESP  <= 2'b00;
    end 
    else if(S_AXI_WREADY&S_AXI_AWREADY) begin   //两个都握手成功   写入数据   
       // if(check_address_range(write_addr_reg))begin
            pmem_write(write_addr_reg,write_data_reg,{4'b0,S_AXI_WSTRB});
            S_AXI_BRESP<=2'b01; 
       // end  
       // else begin 
        //    S_AXI_BRESP<=2'b00; 
       // end   
        S_AXI_BVALID<=1;            //写响应有效
    end
    else if(B_active) begin       
        S_AXI_BVALID<=0;
    end
    else begin
        S_AXI_BRESP<=2'b00; 
    end
end

endmodule
