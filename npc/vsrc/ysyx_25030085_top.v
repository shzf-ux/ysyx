module ysyx_25030085_top (
    input clock,
    input reset,

    //itrace difftest;
    output [31:0] top_pc,
    output [31:0] top_inst,

    output top_valid,
    output top_ready,
    output reg inst_done
);
    assign top_valid=if_id_valid;
    assign top_ready =id_if_ready;
    assign top_inst =if_id_inst;
    assign top_pc  =next_pc;


    

    always @(posedge clock or posedge reset) begin
        if(reset)begin
            inst_done<=0;
        end
        else begin
            inst_done<=wb_valid;   
        end
        
    end

    //if与wb信号
    wire [31:0] next_pc;
    wire wb_done,reg_wresp,wb_valid;

    //if与id信号
    wire [31:0] if_id_inst,if_id_pc;    //数据
    wire id_if_ready,if_id_valid;       //握手信号

    //id与reg读取数据
    wire [4:0] rs1_addr,rs2_addr;
    wire [31:0] rs1_data,rs2_data,reg_a5;

    //id与ex信号
    wire [4:0] id_ex_rd;
    wire [31:0] id_ex_rs1,id_ex_rs2,id_ex_pc,id_ex_imm,id_ex_a5;
    wire [20:0] id_ex_ctrl;             //数据
    wire id_ex_valid,ex_id_ready;       //握手信号

    //ex与me信号
    wire [4:0]ex_me_rd;
    wire [31:0] csr_data;
    wire [20:0] ex_me_ctrl;
    wire [31:0] ex_me_pc,ex_me_imm,ex_me_npc,ex_me_rs2,ex_me_alu;
    wire ex_me_valid,me_ex_ready;       //握手信号

    //me与wb信号
    wire [4:0]  me_wb_rd;
    wire [20:0] me_wb_ctrl;
    wire [31:0] me_wb_rdata,me_wb_pc,me_wb_imm,me_wb_alu,me_wb_npc;
    wire me_wb_valid,wb_me_ready;       //握手信号
 
    //wb写回reg
    reg reg_wen;//写使能
    reg [31:0]reg_wdata;
    reg [4:0] reg_waddr;

    //******************总线信号*******************//
    // IF模块AXI4读信号（经仲裁器）
    // ------------------------------
    wire        if_axi4_arvalid;    // IF读地址有效
    wire        if_axi4_arready;    // 仲裁器返回IF的读地址就绪
    wire [31:0] if_axi4_araddr;     // IF读地址
    wire        if_axi4_rvalid;     // 仲裁器返回IF的读数据有效
    wire        if_axi4_rready;     // IF读数据就绪
    wire [31:0] if_axi4_rdata;      // 仲裁器返回IF的读数据
    wire [1:0]  if_axi4_rresp;      // 仲裁器返回IF的读响应


    // ------------------------------
    // LS模块AXI4读信号（经仲裁器）
    // ------------------------------
    wire        ls_axi4_arvalid;    // LS读地址有效
    wire        ls_axi4_arready;    // 仲裁器返回LS的读地址就绪
    wire [31:0] ls_axi4_araddr;     // LS读地址
    wire        ls_axi4_rvalid;     // 仲裁器返回LS的读数据有效
    wire        ls_axi4_rready;     // LS读数据就绪
    wire [31:0] ls_axi4_rdata;      // 仲裁器返回LS的读数据
    wire [1:0]  ls_axi4_rresp;      // 仲裁器返回LS的读响应

    // ------------------------------
    // 仲裁器与sram之间的AXI4读信号
    // ------------------------------
    wire        arb_sram_axi4_arvalid;  // 仲裁器到存储器的读地址有效
    wire        arb_sram_axi4_arready;  // 存储器到仲裁器的读地址就绪
    wire [31:0] arb_sram_axi4_araddr;   // 仲裁器到存储器的读地址
    wire        arb_sram_axi4_rvalid;   // 存储器到仲裁器的读数据有效
    wire        arb_sram_axi4_rready;   // 仲裁器到存储器的读数据就绪
    wire [31:0] arb_sram_axi4_rdata;    // 存储器到仲裁器的读数据
    wire [1:0]  arb_sram_axi4_rresp;    // 存储器到仲裁器的读响应

    // ------------------------------
    // 仲裁器与clint(rtc)之间的AXI4读信号
    // ------------------------------

    wire        arb_rtc_axi4_arvalid ;
    wire        arb_rtc_axi4_arready ;
    wire [31:0] arb_rtc_axi4_araddr  ;
    wire        arb_rtc_axi4_rvalid  ;
    wire        arb_rtc_axi4_rready  ;
    wire [31:0] arb_rtc_axi4_rdata   ;
    wire [1:0]  arb_rtc_axi4_rresp   ;

    // ------------------------------
    // LS模块AXI4写信号（直连，经过Xbar）
    // ------------------------------
    wire        ls_axi4_awvalid;    // LS写地址有效
    wire        ls_axi4_awready;    // 存储器返回LS的写地址就绪
    wire [31:0] ls_axi4_awaddr;     // LS写地址
    wire        ls_axi4_wvalid;     // LS写数据有效
    wire        ls_axi4_wready;     // 存储器返回LS的写数据就绪
    wire [31:0] ls_axi4_wdata;      // LS写数据
    wire [3:0]  ls_axi4_wstrb;      // LS写字节选通
    wire        ls_axi4_bvalid;     // 存储器返回LS的写响应有效
    wire        ls_axi4_bready;     // LS写响应就绪
    wire [1:0]  ls_axi4_bresp;      // 存储器返回LS的写响应

    // ------------------------------
    // UART模块Xbar写信号
    // ------------------------------
    wire        uart_awvalid;    // UART写地址有效
    wire        uart_awready;    // 从设备返回UART的写地址就绪
    wire [31:0] uart_awaddr ;     // UART写地址
    wire        uart_wvalid ;     // UART写数据有效
    wire        uart_wready ;     // 从设备返回UART的写数据就绪
    wire [31:0] uart_wdata  ;      // UART写数据
    wire [3:0]  uart_wstrb  ;      // UART写字节选通
    wire        uart_bvalid ;     // 从设备返回UART的写响应有效
    wire        uart_bready ;     // UART写响应就绪
    wire [1:0]  uart_bresp  ;      // 从设备返回UART的写响应

    // ------------------------------
    // SRAM模块Xbar写信号
    // ------------------------------
    wire        sram_awvalid;    // SRAM写地址有效
    wire        sram_awready;    // 从设备返回SRAM的写地址就绪
    wire [31:0] sram_awaddr;     // SRAM写地址
    wire        sram_wvalid;     // SRAM写数据有效
    wire        sram_wready;     // 从设备返回SRAM的写数据就绪
    wire [31:0] sram_wdata;      // SRAM写数据
    wire [3:0]  sram_wstrb;      // SRAM写字节选通
    wire        sram_bvalid;     // 从设备返回SRAM的写响应有效
    wire        sram_bready;     // SRAM写响应就绪
    wire [1:0]  sram_bresp;      // 从设备返回SRAM的写响应 


    // ------------------------------
    // IF模块与IFBIU之间的交互信号（IF->IFBIU方向）
    // ------------------------------
    wire               if_req;       // IF模块向IFBIU发起的请求信号（输入到IFBIU）
    wire       [31:0]  if_addr;      // IF模块发送到IFBIU的地址信号（输入到IFBIU）
    wire       [31:0]  biu_rdata_if; // IFBIU返回给IF模块的读数据（输出到IF模块）
    wire       [1:0]   biu_rresp_if;
    wire               biu_ready_if; // IFBIU返回给IF模块的就绪信号（输出到IF模块）


    // ------------------------------
    // LS模块与BIU之间的交互信号
    // ------------------------------
    // LS模块输出到BIU的信号
    wire               lsu_req;      // LS模块向BIU发起的请求信号
    wire               lsu_wwe;      // LS模块向BIU发起的写使能信号
    wire               lsu_rwe;      // LS模块向BIU发起的读使能信号
    wire       [31:0]  lsu_addr;     // LS模块发送到BIU的地址信号
    wire       [31:0]  lsu_wdata;    // LS模块发送到BIU的写数据
    wire       [3:0]   lsu_strb;     // LS模块发送到BIU的字节选通信号

    // BIU返回给LS模块的信号
    wire       [1:0]   biu_rresp_ls  ;
    wire       [1:0]   biu_wresp_ls  ;
    wire       [31:0]  biu_rdata_ls; // BIU返回给LS模块的读数据





// 指令取指模块（IFU）
ysyx_25030085_if ifu(
    .clock           ( clock            ) ,
    .reset           ( reset            ) ,

    // wb输入（来自写回阶段的跳转信号）
    .wb_done         ( wb_valid       ) , 
    .next_pc         ( next_pc        ) ,

    // BIU输入信号（来自IFBIU的读数据和就绪信号）
    .biu_ready       ( biu_ready_if   ) , 
    .biu_rdata       ( biu_rdata_if   ) , 

    // 输出信号（发送到IFBIU的请求和地址
    .if_addr         ( if_addr        ) , 
    .if_req          ( if_req         ) , 

    // 输出给ID阶段
    .out_valid       ( if_id_valid    ) , 
    .pc              ( if_id_pc       ) , 
    .inst            ( if_id_inst     ) , 
    .out_ready       ( id_if_ready    )   
);

// IF阶段与AXI总线的桥接模块（IFBIU）
ysyx_25030085_ifbiu_axi4_lite_master ifbiu(
    // 时钟与复位
    .clock             ( clock            ) ,
    .reset             ( reset            ) ,
    
    // 与IF阶段交互接口（接收IFU的请求，返回数据）
    .if_req          ( if_req         ) ,
    .if_addr         ( if_addr        ) ,
    .biu_rdata       ( biu_rdata_if   ) ,
    .biu_rresp       ( biu_rresp_if   ) ,
    .biu_ready       ( biu_ready_if   ) ,
    
    // AXI4-Lite读地址通道（经仲裁器到存储器）
    .M_AXI_ARADDR    ( if_axi4_araddr ) , 
    .M_AXI_ARVALID   ( if_axi4_arvalid) , 
    .M_AXI_ARREADY   ( if_axi4_arready) , 
    
    // AXI4-Lite读数据通道（经仲裁器从存储器接收数据）
    .M_AXI_RDATA     ( if_axi4_rdata  ) ,  
    .M_AXI_RRESP     ( if_axi4_rresp  ) ,  
    .M_AXI_RVALID    ( if_axi4_rvalid ) ,  
    .M_AXI_RREADY    ( if_axi4_rready )    
);



ysyx_25030085_id idu(
    .clock             ( clock            ) ,
    .reset             ( reset            ) ,

    .in_valid        ( if_id_valid    ) ,
    .in_pc           ( if_id_pc       ) ,
    .in_inst         ( if_id_inst     ) ,
    .in_ready        ( id_if_ready    ) ,

    // 与寄存器堆交互
    .rs1_addr        ( rs1_addr       ) ,
    .rs2_addr        ( rs2_addr       ) ,
    .rs1_data        ( rs1_data       ) ,
    .rs2_data        ( rs2_data       ) ,
    .in_reg_a5       ( reg_a5         ) ,

    // 送到ex模块
    .out_valid       ( id_ex_valid    ) ,
    .imm_out         ( id_ex_imm      ) ,
    .ctrl_out        ( id_ex_ctrl     ) ,
    .out_rs1_data    ( id_ex_rs1      ) ,
    .out_rs2_data    ( id_ex_rs2      ) ,
    .pc_out          ( id_ex_pc       ) ,
    .reg_a5_out      ( id_ex_a5       ) ,
    .rd_out          ( id_ex_rd       ) ,
    .out_ready       ( ex_id_ready    )
);


ysyx_25030085_regfile regfile(  
    .clock             ( clock            ) ,
    .reset             ( reset            ) ,

    .reg_wen         ( reg_wen        ) ,
    .reg_waddr       ( reg_waddr      ) ,
    .reg_wdata       ( reg_wdata      ) ,

    .reg_rs1_addr    ( rs1_addr       ) ,
    .reg_rs2_addr    ( rs2_addr       ) ,
    .in_valid        ( wb_valid       ) ,
    .w_resp          ( reg_wresp      ) ,
    .rs1_data        ( rs1_data       ) ,
    .rs2_data        ( rs2_data       ) ,
    .reg_a5          ( reg_a5         ) 
);
   
ysyx_25030085_ex exu(
    .clock             (   clock          ) ,
    .reset             (   reset          ) ,

    .in_valid        ( id_ex_valid    ) ,
    .in_a5           ( id_ex_a5       ) ,
    .in_rs1_data     ( id_ex_rs1      ) ,
    .in_rs2_data     ( id_ex_rs2      ) ,
    .in_pc           ( id_ex_pc       ) ,
    .in_rd           ( id_ex_rd       ) ,
    .in_imm          ( id_ex_imm      ) ,
    .in_ctrl         ( id_ex_ctrl     ) ,
    .in_ready        ( ex_id_ready    ) ,

    .out_valid       ( ex_me_valid    ) ,
    .out_Alu_Result  ( ex_me_alu      ) ,
    .out_next_pc     ( ex_me_npc      ) ,
    .out_rs2_data    ( ex_me_rs2      ) ,
    .out_ctrl        ( ex_me_ctrl     ) ,
    .csr_data        ( csr_data       ) ,
    .imm_out         ( ex_me_imm      ) ,
    .pc_out          ( ex_me_pc       ) ,
    .rd_out          ( ex_me_rd       ) ,
    .out_ready       ( me_ex_ready    )
    
); 

ysyx_25030085_lsbiu_axi4_lite_master lsbiu(
    .clock            (   clock   )     ,
    .reset            (   reset   )     ,

    // LSU接口信号
    .lsu_addr    (      lsu_addr        ) , 
    .lsu_wwe     (      lsu_wwe         ) , 
    .lsu_rwe     (      lsu_rwe         ) , 
    .lsu_wdata   (      lsu_wdata       ) , 
    .lsu_strb    (      lsu_strb        ) , 
    .lsu_req     (      lsu_req         ) , 
            
    .biu_rdata   (      biu_rdata_ls    ) , 
    .biu_rresp   (      biu_rresp_ls    ) ,
    .biu_wresp   (      biu_wresp_ls    ) ,

    // AXI4-Lite Master接口信号
    // 读地址通道

    .M_AXI_ARADDR   (   ls_axi4_araddr  )   ,  
    .M_AXI_ARVALID  (   ls_axi4_arvalid )   , 
    .M_AXI_ARREADY  (   ls_axi4_arready )   , 

    // 读数据通道       
    .M_AXI_RDATA    (   ls_axi4_rdata   )   ,   
    .M_AXI_RRESP    (   ls_axi4_rresp   )   ,   
    .M_AXI_RVALID   (   ls_axi4_rvalid  )   ,  
    .M_AXI_RREADY   (   ls_axi4_rready  )   ,  
    
    // 写地址通道
    .M_AXI_AWADDR   (   ls_axi4_awaddr  )   , 
    .M_AXI_AWVALID  (   ls_axi4_awvalid )   ,
    .M_AXI_AWREADY  (   ls_axi4_awready )   ,

    // 写数据通道       
    .M_AXI_WDATA    (   ls_axi4_wdata   )   ,  
    .M_AXI_WSTRB    (   ls_axi4_wstrb   )   ,  
    .M_AXI_WVALID   (   ls_axi4_wvalid  )   , 
    .M_AXI_WREADY   (   ls_axi4_wready  )   , 

    // 写响应通道       
    .M_AXI_BRESP    (   ls_axi4_bresp   )   ,  
    .M_AXI_BVALID   (   ls_axi4_bvalid  )   , 
    .M_AXI_BREADY   (   ls_axi4_bready  )     
);




ysyx_25030085_xbar #(
    .UART_ADDR       	(32'ha00003f8  ),
    .SRAM_ADDR_START 	(32'h80000000  ),
    .SRAM_ADDR_END   	(32'h87ffffff  ))
xbar(
    .clock          	(clock           ),
    .reset          	(reset           ),
    //写地址通道
    .m_awaddr     	( ls_axi4_awaddr    ),
    .m_awvalid    	( ls_axi4_awvalid   ),
    .m_awready    	( ls_axi4_awready   ),
    //写数据通道
    .m_wdata      	( ls_axi4_wdata     ),
    .m_wstrb      	( ls_axi4_wstrb     ),
    .m_wvalid     	( ls_axi4_wvalid    ),
    .m_wready     	( ls_axi4_wready    ),
    //写响应通道
    .m_bresp      	( ls_axi4_bresp     ),
    .m_bvalid     	( ls_axi4_bvalid    ),
    .m_bready     	( ls_axi4_bready    ),

    //UART写地址通道
    .uart_awaddr  	(uart_awaddr   ),
    .uart_awvalid 	(uart_awvalid  ),
    .uart_awready 	(uart_awready  ),
    //UART写数据通道
    .uart_wdata   	(uart_wdata    ),
    .uart_wstrb   	(uart_wstrb    ),
    .uart_wvalid  	(uart_wvalid   ),
    .uart_wready  	(uart_wready   ),
    //UART写响应通道
    .uart_bresp   	(uart_bresp    ),
    .uart_bvalid  	(uart_bvalid   ),
    .uart_bready  	(uart_bready   ),

    //SRAM写地址通道
    .sram_awaddr  	(sram_awaddr   ),
    .sram_awvalid 	(sram_awvalid  ),
    .sram_awready 	(sram_awready  ),
    //SRAM写数据通道
    .sram_wdata   	(sram_wdata    ),
    .sram_wstrb   	(sram_wstrb    ),
    .sram_wvalid  	(sram_wvalid   ),
    .sram_wready  	(sram_wready   ),
    //SRAM写响应通道
    .sram_bresp   	(sram_bresp    ),
    .sram_bvalid  	(sram_bvalid   ),
    .sram_bready  	(sram_bready   )
);


ysyx_25030085_arbiter arbiter(
     // 时钟与复位
    .clock            (   clock  )   ,
    .reset            (   reset  )   ,
    
    // 主设备1读信号（IF接口）
    .if_arvalid     (   if_axi4_arvalid )   ,
    .if_arready     (   if_axi4_arready )   ,
    .if_araddr      (   if_axi4_araddr  )   ,
    .if_rvalid      (   if_axi4_rvalid  )   ,
    .if_rready      (   if_axi4_rready  )   ,
    .if_rdata       (   if_axi4_rdata   )   ,
    .if_rresp       (   if_axi4_rresp   )   ,
    
    // 主设备2读信号(LSU接口)
    .ls_arvalid     (   ls_axi4_arvalid )   ,
    .ls_arready     (   ls_axi4_arready )   ,
    .ls_araddr      (   ls_axi4_araddr  )   ,
    .ls_rvalid      (   ls_axi4_rvalid  )   ,
    .ls_rready      (   ls_axi4_rready  )   ,
    .ls_rdata       (   ls_axi4_rdata   )   ,
    .ls_rresp       (   ls_axi4_rresp   )   ,
    
    // 到SRAM的读信号（连接仲裁器与存储器的中间信号）
    .sram_arvalid      (   arb_sram_axi4_arvalid    )   ,  
    .sram_arready      (   arb_sram_axi4_arready    )   ,  
    .sram_araddr       (   arb_sram_axi4_araddr     )   ,   
    .sram_rvalid       (   arb_sram_axi4_rvalid     )   ,   
    .sram_rready       (   arb_sram_axi4_rready     )   ,   
    .sram_rdata        (   arb_sram_axi4_rdata      )   ,    
    .sram_rresp        (   arb_sram_axi4_rresp      )   ,

    // 到clint的读信号（连接仲裁器与rtc的中间信号）
    .rtc_arvalid       (   arb_rtc_axi4_arvalid    )   ,  
    .rtc_arready       (   arb_rtc_axi4_arready    )   ,  
    .rtc_araddr        (   arb_rtc_axi4_araddr     )   ,   
    .rtc_rvalid        (   arb_rtc_axi4_rvalid     )   ,   
    .rtc_rready        (   arb_rtc_axi4_rready     )   ,   
    .rtc_rdata         (   arb_rtc_axi4_rdata      )   ,    
    .rtc_rresp         (   arb_rtc_axi4_rresp      )   
);
// output declaration of module ysyx_25030085_axi4_clint


ysyx_25030085_axi4_clint clint(
    .clock           	(clock            ),
    .reset           	(reset            ),

    .S_AXI_ARADDR   (arb_rtc_axi4_araddr    ),  
    .S_AXI_ARVALID  (arb_rtc_axi4_arvalid   ),  
    .S_AXI_ARREADY  (arb_rtc_axi4_arready   ),  

    .S_AXI_RDATA    (arb_rtc_axi4_rdata     ),  
    .S_AXI_RRESP    (arb_rtc_axi4_rresp     ),  
    .S_AXI_RVALID   (arb_rtc_axi4_rvalid    ),  
    .S_AXI_RREADY   (arb_rtc_axi4_rready    )   
);


ysyx_25030085_axi4_lite_uart uart(
    .clock                (   clock           ),
    .reset                (   reset           ),
    // 写地址通道 连接xbar
    .S_AXI_AWADDR       (   uart_awaddr   ),  
    .S_AXI_AWVALID      (   uart_awvalid  ),  
    .S_AXI_AWREADY      (   uart_awready  ),  
    // 写数据通道 连接xbar
    .S_AXI_WDATA        (   uart_wdata    ),  
    .S_AXI_WSTRB        (   uart_wstrb    ),  
    .S_AXI_WVALID       (   uart_wvalid   ),  
    .S_AXI_WREADY       (   uart_wready   ),  
    // 写响应通道 连接xbar
    .S_AXI_BRESP        (   uart_bresp    ),  
    .S_AXI_BVALID       (   uart_bvalid   ),  
    .S_AXI_BREADY       (   uart_bready   )   
);





ysyx_25030085_axi4_lite_sram sram (
    // 时钟与复位
    .clock                (   clock   ) ,
    .reset                (   reset   ) ,
    
    // 读地址通道（连接仲裁器与SRAM的读信号）
    .S_AXI_ARADDR       (   arb_sram_axi4_araddr     )   ,  
    .S_AXI_ARVALID      (   arb_sram_axi4_arvalid    )   , 
    .S_AXI_ARREADY      (   arb_sram_axi4_arready    )   , 

    // 读数据通道（连接SRAM到仲裁器的读信号）
    .S_AXI_RDATA        (   arb_sram_axi4_rdata  )   ,   
    .S_AXI_RRESP        (   arb_sram_axi4_rresp  )   ,   
    .S_AXI_RVALID       (   arb_sram_axi4_rvalid )   ,  
    .S_AXI_RREADY       (   arb_sram_axi4_rready )   ,  

    // 写地址通道（连接Xbar模块的写信号）
    .S_AXI_AWADDR       (   sram_awaddr         ),       
    .S_AXI_AWVALID      (   sram_awvalid        ),      
    .S_AXI_AWREADY      (   sram_awready        ),      

    // 写数据通道（连接Xbar模块的写信号）
    .S_AXI_WDATA        (   sram_wdata          ),        
    .S_AXI_WSTRB        (   sram_wstrb          ),        
    .S_AXI_WVALID       (   sram_wvalid         ),       
    .S_AXI_WREADY       (   sram_wready         ),       

    // 写响应通道（连接Xbar模块的写信号）   
    .S_AXI_BRESP        (   sram_bresp          ),        
    .S_AXI_BVALID       (   sram_bvalid         ),       
    .S_AXI_BREADY       (   sram_bready         )             
);

ysyx_25030085_lsu lsu(
    .clock             ( clock            ) ,
    .reset             ( reset            ) ,

    .in_valid        ( ex_me_valid    ) ,
    .in_imm          ( ex_me_imm      ) ,
    .in_npc          ( ex_me_npc      ) ,
    .in_pc           ( ex_me_pc       ) ,
    .in_rd           ( ex_me_rd       ) ,
    .in_ctrl         ( ex_me_ctrl     ) ,
    .in_lsu_wdata    ( ex_me_rs2      ) ,  // 作存储时输入数据
    .in_lsu_addr     ( ex_me_alu      ) ,  // 作储存时输入地址，作加载时，加载地址
    .in_ready        ( me_ex_ready    ) ,


    .out_valid       ( me_wb_valid    ) ,
    .mem_rdata       ( me_wb_rdata    ) ,
    .ctrl_out        ( me_wb_ctrl     ) ,
    .npc_out         ( me_wb_npc      ) ,
    .pc_out          ( me_wb_pc       ) ,
    .imm_out         ( me_wb_imm      ) ,
    .rd_out          ( me_wb_rd       ) ,
    .alu_result      ( me_wb_alu      ) ,
    .out_ready       ( wb_me_ready    ) ,
     
    //与biu交互
 // 输出到biu模块
    .lsu_req        (   lsu_req     ) ,  // LS模块向BIU发起的请求信号
    .lsu_wwe        (   lsu_wwe     ) ,  // LS模块向BIU发起的写使能信号
    .lsu_rwe        (   lsu_rwe     ) ,  // LS模块向BIU发起的读使能信号
    .lsu_addr       (   lsu_addr    ) ,  // LS模块发送到BIU的地址信号
    .lsu_wdata      (   lsu_wdata   ) ,  // LS模块发送到BIU的写数据
    .lsu_strb       (   lsu_strb    ) ,  // LS模块发送到BIU的字节选通信号
    
    // 来自BIU的信号    
    .biu_rresp      (   biu_rresp_ls) ,
    .biu_wresp      (   biu_wresp_ls) ,
    .biu_rdata      (   biu_rdata_ls)    // BIU返回给LS模块的读数据

);


ysyx_25030085_wb wbu(
    .clock             ( clock            ) ,
    .reset             ( reset            ) ,

    .in_valid        ( me_wb_valid    ) ,
    .in_alu_result   ( me_wb_alu      ) ,
    .in_mem_rdata    ( me_wb_rdata    ) ,
    .in_npc          ( me_wb_npc      ) ,
    .in_pc           ( me_wb_pc       ) ,
    .in_imm          ( me_wb_imm      ) ,
    .in_csr_rdata    ( csr_data       ) ,
    .in_ctrl         ( me_wb_ctrl     ) ,
    .rd_addr         ( me_wb_rd       ) ,
    .in_ready        ( wb_me_ready    ) ,

    // 送回ifu
    .out_valid       ( wb_valid       ) ,
    .next_pc         ( next_pc        ) ,

    // 写回寄存器堆
    .reg_wen         ( reg_wen        ) ,
    .reg_waddr       ( reg_waddr      ) ,
    .reg_wdata       ( reg_wdata      )

);





//ftrace
    wire is_jar_call;
    wire is_jalr_call;
    wire is_jalr_ret;

    assign is_jar_call = (if_id_inst[11:7] == 5'd1) && (id_ex_ctrl[15:14] == 2'b01);  // JAL调用
    assign is_jalr_call = (if_id_inst[11:7] == 5'd1) && (id_ex_ctrl[15:14] == 2'b10);  // JALR调用
    assign is_jalr_ret = (if_id_inst[11:7] == 5'd0) && (if_id_inst[19:15] == 5'd1) && (id_ex_ctrl[15:14] == 2'b10);  // JALR返回

    always @(posedge clock) begin
        if ((is_jar_call || is_jalr_call)&&wb_done) begin
            display_call_func(if_id_pc, next_pc);  // 函数调用追踪
        end
        if (is_jalr_ret&&wb_done) begin
            display_ret_func(if_id_pc, next_pc);  // 函数返回追踪
        end
    end



endmodule