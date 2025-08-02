module ysyx_25030085_arbiter(           //仲裁if和lsu的读信号
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
    
    
    // 到从设备的读信号
    output reg          s_arvalid       ,   // 读地址有效
    input               s_arready       ,   // 读地址就绪
    output reg [31:0]   s_araddr        ,    // 读地址
    
    input               s_rvalid        ,    // 读数据有效
    output reg          s_rready        ,    // 读数据就绪
    input       [31:0]  s_rdata         ,    // 读数据
    input       [1:0]   s_rresp              // 读响应

);
    localparam IDLE=0;
    localparam IF_MASTER=1;
    localparam LS_MASTER=2;
    reg     [1:0]state;

    //操作请求
    always @(posedge clk or posedge rst) begin
        if(rst)begin
            state<=IDLE;
        end
        else begin
            case(state)
            IDLE:begin
                if(if_arvalid)begin             //看地址请求
                    state<=IF_MASTER;
                end
                else if(ls_arvalid)begin
                    state<=LS_MASTER;
                end     
                else begin
                    state<=IDLE;
                end              
                end
            IF_MASTER:begin
                if(if_rvalid&if_rready)begin        //if数据握手完成
                    if(if_arvalid)begin
                        state<=IF_MASTER;
                    end
                    else if(ls_arvalid)begin
                        state<=LS_MASTER;
                    end
                    else begin
                        state<=IDLE;
                    end        
                end
                else begin
                    state<=IF_MASTER;
                end
            end
            LS_MASTER:begin
                if(ls_rvalid&ls_rready)begin        //if数据握手完成
                    if(ls_arvalid)begin
                        state<=LS_MASTER;
                    end
                    else if(if_arvalid)begin
                        state<=IF_MASTER;
                    end
                    else begin
                        state<=IDLE;
                    end        
                end
                else begin
                    state<=LS_MASTER;
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
            s_arvalid = if_arvalid;
            s_araddr  = if_araddr;
            if_arready = s_arready;  // 从设备就绪反馈给主设备1
            ls_arready = 1'b0;       // 主设备2等待
        end
        
        LS_MASTER: begin
            // 主设备2占用地址通道
            s_arvalid = ls_arvalid;
            s_araddr  = ls_araddr;
            ls_arready = s_arready;  // 从设备就绪反馈给主设备2
            if_arready = 1'b0;       // 主设备1等待（除非有更高优先级逻辑）
        end    
        default: begin
            // 空闲状态，地址信号无效
            s_arvalid = 1'b0;
            s_araddr  = 32'h0;
            if_arready = 1'b0;
            ls_arready = 1'b0;
        end
    endcase
end

// 读数据通道仲裁
always @(*) begin
    case (state)
        IF_MASTER: begin
            // 数据返回给主设备1
            s_rready = if_rready;          // 主设备1就绪反馈给从设备
            if_rvalid = s_rvalid;          // 从设备数据有效传递给主设备1
            if_rdata  = s_rdata;           // 数据传递
            if_rresp  = s_rresp;           // 响应传递
            ls_rvalid = 1'b0;              // 主设备2无数据
            ls_rdata  = 32'h0;
            ls_rresp  = 2'b00;
        end
        
        LS_MASTER: begin
            // 数据返回给主设备2
            s_rready = ls_rready;
            ls_rvalid = s_rvalid;
            ls_rdata  = s_rdata;
            ls_rresp  = s_rresp;
            if_rvalid = 1'b0;
            if_rdata  = 32'h0;
            if_rresp  = 2'b00;
        end
        
        default: begin
            s_rready = 1'b0;
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