module ysyx_25030085_arbiter#(
    parameter RTC_ADDR        = 32'ha0000048,
    parameter SRAM_ADDR_START = 32'h80000000,
    parameter SRAM_ADDR_END   = 32'h87ffffff
)(           //仲裁if和lsu的读信号 是访问sram还是时钟设备
    input               clk             ,
    input               rst             ,
    
    // 主设备ifu读信号            if
    input               if_arvalid      ,  // 读地址有效
    output reg          if_arready      ,  // 读地址就绪
    input       [31:0]  if_araddr       ,   // 读地址

    
    output reg          if_rvalid       ,   // 读数据有效
    input               if_rready       ,   // 读数据就绪
    output reg [31:0]   if_rdata        ,    // 读数据
    output reg [1:0]    if_rresp        ,    // 读响应
    
    // 主设备lsu读信号
    input               ls_arvalid      ,  // 读地址有效
    output reg          ls_arready      ,  // 读地址就绪
    input       [31:0]  ls_araddr       ,   // 读地址
   
    output reg          ls_rvalid       ,   // 读数据有效
    input               ls_rready       ,   // 读数据就绪
    output reg [31:0]   ls_rdata        ,    // 读数据
    output reg [1:0]    ls_rresp        ,    // 读响应
    
    
    // 到从设备sram的读信号
    output reg          sram_arvalid       ,   // 读地址有效
    input               sram_arready       ,   // 读地址就绪
    output reg [31:0]   sram_araddr        ,    // 读地址
    
    input               sram_rvalid        ,    // 读数据有效
    output reg          sram_rready        ,    // 读数据就绪
    input       [31:0]  sram_rdata         ,    // 读数据
    input       [1:0]   sram_rresp         ,    // 读响应


    // 到从设备rtc的读信号
    output reg          rtc_arvalid        ,   // 读地址有效
    input               rtc_arready        ,   // 读地址就绪
    output reg [31:0]   rtc_araddr         ,    // 读地址
     
    input               rtc_rvalid         ,    // 读数据有效
    output reg          rtc_rready         ,    // 读数据就绪
    input       [31:0]  rtc_rdata          ,    // 读数据
    input       [1:0]   rtc_rresp               // 读响应


);  localparam DEV_NONE =   0;
    localparam DEV_SRAM =   1;
    localparam DEV_RTC  =   2;

    localparam IDLE     =   0;
    localparam IF_MASTER=   1;
    localparam LS_MASTER=   2;


    reg     [1:0]state, next_state;

    // 地址译码
    reg       is_rtc;  
    reg       is_sram; 
    reg [1:0] target_dev;//00无效设备，01:SRAM;10:RTC
always @(*) begin
    is_rtc =  ls_araddr == RTC_ADDR;
    is_sram = (ls_araddr >= SRAM_ADDR_START) && (ls_araddr <= SRAM_ADDR_END);
end


always @(posedge clk or posedge rst) begin
    if(rst)begin
        state<=IDLE;       
    end
    else begin
        state<=next_state;
        if(is_rtc)begin
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



    //操作请求
    always @(*) begin
     begin
        case(state)
        IDLE:begin
            if(if_arvalid)begin             //看地址请求
                next_state=IF_MASTER;
            end
            else if(ls_arvalid)begin
                next_state=LS_MASTER;
            end     
            else begin
                next_state=IDLE;
            end              
            end
        IF_MASTER:begin
            if(if_rvalid&if_rready)begin        //if数据握手完成
                if(if_arvalid)begin
                    next_state=IF_MASTER;
                end
                else if(ls_arvalid)begin
                    next_state=LS_MASTER;
                end
                else begin
                    next_state=IDLE;
                end        
            end
            else begin
                next_state=IF_MASTER;
            end
        end
        LS_MASTER:begin
            if(ls_rvalid&ls_rready)begin        //if数据握手完成
                if(ls_arvalid)begin
                    next_state=LS_MASTER;
                end
                else if(if_arvalid)begin
                    next_state=IF_MASTER;
                end
                else begin
                    next_state=IDLE;
                end        
            end
            else begin
                next_state=LS_MASTER;
            end
        end      
        endcase
    end     
end



// 读地址通道仲裁,组合逻辑
always @(*) begin
    case (state)
        IF_MASTER: begin
            // 主设备1占用地址通道
            sram_arvalid = if_arvalid;
            sram_araddr  = if_araddr;
            if_arready = sram_arready;  // 从设备就绪反馈给主设备1
            ls_arready = 1'b0;       // 主设备2等待
        end
        
        LS_MASTER: begin
            case(target_dev)
            DEV_RTC:begin
            rtc_arvalid = ls_arvalid;
            rtc_araddr  = ls_araddr;
            ls_arready = rtc_arready;  // 从设备就绪反馈给主设备2
            if_arready = 1'b0;                 
            end                
            DEV_SRAM:begin               // 主设备2占用地址通道
            sram_arvalid = ls_arvalid;
            sram_araddr  = ls_araddr;
            ls_arready = sram_arready;  // 从设备就绪反馈给主设备2
            if_arready = 1'b0;       // 主设备1等待（除非有更高优先级逻辑）    
            end
            DEV_NONE:begin
                
            end
            endcase 
            end  
        default: begin
            // 空闲状态，地址信号无效
            sram_arvalid = 1'b0;
            sram_araddr  = 32'h0;
            if_arready = 1'b0;
            ls_arready = 1'b0;
        end
    endcase
end


// 读数据通道仲裁
always @(*) begin
    case (state)
        IF_MASTER: begin
            // 数据返回给主设备if
            sram_rready = if_rready;          // 主设备1就绪反馈给从设备
            if_rvalid = sram_rvalid;          // 从设备数据有效传递给主设备1
            if_rdata  = sram_rdata;           // 数据传递
            if_rresp  = sram_rresp;           // 响应传递
            ls_rvalid = 1'b0;              // 主设备2无数据
            ls_rdata  = 32'h0;
            ls_rresp  = 2'b00;
        end
        
        LS_MASTER: begin
            case(target_dev)
            DEV_RTC:begin
            rtc_rready = ls_rready;
            ls_rvalid = rtc_rvalid;
            ls_rdata  = rtc_rdata;
            ls_rresp  = rtc_rresp;                
            end
            DEV_SRAM:begin                         
            // 数据返回给主设备lf
            sram_rready = ls_rready;
            ls_rvalid = sram_rvalid;
            ls_rdata  = sram_rdata;
            ls_rresp  = sram_rresp;
            end
            DEV_NONE:begin
                
            end
            endcase
        end     
        default: begin
            sram_rready = 1'b0;
            if_rvalid = 1'b0;
            if_rdata  = 32'h0;
            if_rresp  = 2'b00;
            ls_rvalid = 1'b0;
            ls_rdata  = 32'h0;
            ls_rresp  = 2'b00;
        end
    endcase
end
             
endmodule