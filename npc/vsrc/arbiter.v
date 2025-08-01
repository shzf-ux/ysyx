module ysyx_25030085_arbiter(//仲裁if和mem的读信号
    input               clk             ,
    input               rst             ,
    
    // 主设备1读信号            if
    input               m1_arvalid      ,  // 读地址有效
    output reg          m1_arready      ,  // 读地址就绪
    input       [31:0]  m1_araddr       ,   // 读地址

    
    output reg          m1_rvalid       ,   // 读数据有效
    input               m1_rready       ,   // 读数据就绪
    output reg [31:0]   m1_rdata        ,    // 读数据
    output reg [1:0]    m1_rresp        ,    // 读响应
    
    // 主设备2读信号
    input               m2_arvalid      ,  // 读地址有效
    output reg          m2_arready      ,  // 读地址就绪
    input       [31:0]  m2_araddr       ,   // 读地址

    
    output reg          m2_rvalid       ,   // 读数据有效
    input               m2_rready       ,   // 读数据就绪
    output reg [31:0]   m2_rdata        ,    // 读数据
    output reg [1:0]    m2_rresp        ,    // 读响应
    
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
                if(m1_arvalid)begin//看地址请求
                    state<=IF_MASTER;
                end
                else if(m2_arvalid)begin
                    state<=LS_MASTER;
                end     
                else begin
                    state<=IDLE;
                end              
                end
            IF_MASTER:begin
                if(m1_rvalid&m1_rready)begin        //m1数据握手完成
                    if(m1_arvalid)begin
                        state<=IF_MASTER;
                    end
                    else if(m2_arvalid)begin
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
                if(m2_rvalid&m2_rready)begin        //m1数据握手完成
                    if(m2_arvalid)begin
                        state<=LS_MASTER;
                    end
                    else if(m1_arvalid)begin
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
            s_arvalid = m1_arvalid;
            s_araddr  = m1_araddr;
            m1_arready = s_arready;  // 从设备就绪反馈给主设备1
            m2_arready = 1'b0;       // 主设备2等待
        end
        
        LS_MASTER: begin
            // 主设备2占用地址通道
            s_arvalid = m2_arvalid;
            s_araddr  = m2_araddr;
            m2_arready = s_arready;  // 从设备就绪反馈给主设备2
            m1_arready = 1'b0;       // 主设备1等待（除非有更高优先级逻辑）
        end    
        default: begin
            // 空闲状态，地址信号无效
            s_arvalid = 1'b0;
            s_araddr  = 32'h0;
            m1_arready = 1'b0;
            m2_arready = 1'b0;
        end
    endcase
end

// 读数据通道仲裁
always @(*) begin
    case (state)
        IF_MASTER: begin
            // 数据返回给主设备1
            s_rready = m1_rready;          // 主设备1就绪反馈给从设备
            m1_rvalid = s_rvalid;          // 从设备数据有效传递给主设备1
            m1_rdata  = s_rdata;           // 数据传递
            m1_rresp  = s_rresp;           // 响应传递
            m2_rvalid = 1'b0;              // 主设备2无数据
            m2_rdata  = 32'h0;
            m2_rresp  = 2'b00;
        end
        
        LS_MASTER: begin
            // 数据返回给主设备2
            s_rready = m2_rready;
            m2_rvalid = s_rvalid;
            m2_rdata  = s_rdata;
            m2_rresp  = s_rresp;
            m1_rvalid = 1'b0;
            m1_rdata  = 32'h0;
            m1_rresp  = 2'b00;
        end
        
        default: begin
            s_rready = 1'b0;
            m1_rvalid = 1'b0;
            m1_rdata  = 32'h0;
            m1_rresp  = 2'b00;
            m2_rvalid = 1'b0;
            m2_rdata  = 32'h0;
            m2_rresp  = 2'b00;
        end
    endcase
end
             
endmodule