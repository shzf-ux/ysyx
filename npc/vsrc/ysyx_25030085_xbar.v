//选择lsu的读信号，分别选择发送uart或者sram
module ysyx_25030085_xbar#(
    parameter UART_ADDR       = 32'ha00003f8,
    parameter SRAM_ADDR_START = 32'h80000000,
    parameter SRAM_ADDR_END   = 32'h87ffffff
)(
    input               clk             ,
    input               rst             ,

    // 主机侧lsu    
    input       [31:0]  m_awaddr        ,    // 主机写地址
    input               m_awvalid       ,   // 主机写地址有效
    output reg          m_awready       ,   // 主机写地址就绪（Xbar返回）

    input       [31:0]  m_wdata         ,     // 主机写数据
    input       [3:0]   m_wstrb         ,     // 主机写选通
    input               m_wvalid        ,    // 主机写数据有效
    output reg          m_wready        ,    // 主机写数据就绪（Xbar返回）

    output reg  [1:0]   m_bresp         ,     // 主机写响应（Xbar返回）
    output reg          m_bvalid        ,    // 主机写响应有效
    input               m_bready        ,    // 主机准备接收响应

    // 从设备侧（连接UART） 
    output reg  [31:0]  uart_awaddr     ,
    output reg          uart_awvalid    ,
    input               uart_awready    ,

    output reg  [31:0]  uart_wdata      ,
    output reg  [3:0]   uart_wstrb      ,
    output reg          uart_wvalid     ,
    input               uart_wready     ,
    
    input       [1:0]   uart_bresp      ,
    input               uart_bvalid     ,
    output reg          uart_bready     ,
    
    // 从设备侧（连接SRAM）
    output reg  [31:0]  sram_awaddr     ,
    output reg          sram_awvalid    ,
    input               sram_awready    ,
    
    output reg  [31:0]  sram_wdata      ,
    output reg  [3:0]   sram_wstrb      ,
    output reg          sram_wvalid     ,
    input               sram_wready     ,
    
    input       [1:0]   sram_bresp      ,
    input               sram_bvalid     ,
    output reg          sram_bready
);
localparam DEV_NONE =2'b00;
localparam DEV_SRAM =2'b01;
localparam DEV_UART =2'b10;

    // 地址译码
    reg       is_uart;  
    reg       is_sram; 
    reg [1:0] target_dev;//00无效设备，01:SRAM;10:UART
always @(*) begin
    is_uart =  m_awaddr == UART_ADDR;
    is_sram = (m_awaddr >= SRAM_ADDR_START) && (m_awaddr <= SRAM_ADDR_END);
end

//根据地址，数据，响应状态
localparam IDLE =  0;
localparam AW   =  1;
localparam W    =  2;
localparam B    =  3;

reg        [2:0] state ,next_state;



//状态机控制
always @(posedge clk or posedge rst) begin
    if(rst)begin
        state<=IDLE;      
    end
    else begin
        state<=next_state;
        if(is_uart)begin
            target_dev<=2'b10;
        end
        else if(is_sram)begin
            target_dev<=2'b01; 
        end
        else begin

            target_dev<=2'b00;
        end
    end
end
//组合逻辑状态机
always @(*) begin
    case(state)
    IDLE:begin
        if(m_awvalid)begin          //地址先来
            next_state=AW;           
        end
        else if(m_wvalid)begin      //数据先来
            next_state=W;          
        end
        else begin
            next_state=IDLE;
        end        
    end
    AW:begin
        if(m_awvalid&m_awready)begin
            next_state=W;           
        end                         //地址握手成功  
        else begin
            next_state=AW;
        end
        
    end
    W:begin
        if(m_wvalid&m_wready)begin
            next_state=B;           
        end                         //数据握手成功  
        else begin
            next_state=W;
        end
    end
    B:begin
        if(m_bvalid&m_bready)begin
            next_state=IDLE;
        end
        else begin
            next_state=B;
        end
        
    end
    endcase
end

//写地址通道            统一组合逻辑

always @(*) begin
    // 默认值（关闭所有信号）
    uart_awvalid = 1'b0;
    uart_awaddr  = 32'h0;
    sram_awvalid = 1'b0;
    sram_awaddr  = 32'h0;
    m_awready    = 1'b0;        
    if(state==AW)begin
        case(target_dev)
        DEV_SRAM:begin
            sram_awvalid = m_awvalid;
            sram_awaddr  = m_awaddr;
            m_awready    = sram_awready;    
        end
        DEV_UART:begin
            uart_awvalid = m_awvalid;
            uart_awaddr  = m_awaddr; 
            m_awready    = uart_awready; // 从设备就绪反馈给主机                
        end
        DEV_NONE:begin 
            $display("out-of bound");
        end
        default:begin
        end
        endcase
    end      

end


//写数据通道
always @(*) begin
    uart_wvalid = 1'b0;
    uart_wdata  = 32'h0;
    uart_wstrb  = 4'h0;
    sram_wvalid = 1'b0;
    sram_wdata  = 32'h0;
    sram_wstrb  = 4'h0;
    m_wready    = 1'b0;
    if(state==W)begin
        case(target_dev)
        DEV_SRAM:begin
            sram_wvalid = m_wvalid;
            sram_wdata  = m_wdata;
            sram_wstrb  = m_wstrb;
            m_wready    = sram_wready;              
        end
        DEV_UART:begin
            uart_wvalid = m_wvalid;
            uart_wdata  = m_wdata;
            uart_wstrb  = m_wstrb;
            m_wready    = uart_wready;                
        end
        DEV_NONE:begin          
        end
        default:begin
        $display("out-of bound");
        end
        endcase    
    end
end

//写响应通道转发
always @(*) begin
    uart_bready = 1'b0;
    sram_bready = 1'b0;
    m_bvalid    = 1'b0;
    m_bresp     = 2'b00;

    if(state==B)begin
        case(target_dev)
        DEV_SRAM:begin
            m_bvalid    = sram_bvalid;
            m_bresp     = sram_bresp;
            sram_bready = m_bready;
        end
        DEV_UART:begin
            m_bvalid    = uart_bvalid;
            m_bresp     = uart_bresp;
            uart_bready = m_bready; // 主机就绪反馈给UART            
        end
        DEV_NONE:begin      
        $display("out-of bound");    
        end
        default:begin
        end
        endcase    
    end
end

    
endmodule 
