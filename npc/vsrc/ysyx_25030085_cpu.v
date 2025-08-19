import "DPI-C" function void display_call_func (input int pc, input int dnpc);
import "DPI-C" function void display_ret_func (input int pc, input int dnpc);
module ysyx_25030085_cpu (
    input clock                     ,
    input reset                     ,

    input io_interrupt              ,
   // ------------------------ AXI4 Master 总线（主设备输出）------------------------
    // 写地址通道（Write Address Channel）
    output       io_master_awvalid  ,                 // 写地址有效
    output [31:0]io_master_awaddr   ,                 // 写地址
    output [3:0] io_master_awid     ,                 // 写事务ID
    output [7:0] io_master_awlen    ,                 // 突发传输长度
    output [2:0] io_master_awsize   ,                 // 传输数据位宽
    output [1:0] io_master_awburst  ,                 // 突发类型
    input        io_master_awready  ,                 // 从设备准备好接收地址

    // 写数据通道（Write Data Channel）
    output       io_master_wvalid   ,                 // 写数据有效
    output [31:0]io_master_wdata    ,                 // 写数据
    output [3:0] io_master_wstrb    ,                 // 字节选通信号
    output       io_master_wlast    ,                 // 突发传输最后一个数据标记
    input        io_master_wready   ,                  // 从设备准备好接收数据

    // 写响应通道（Write Response Channel）
    output       io_master_bready   ,                  // 主设备准备好接收响应
    input        io_master_bvalid   ,                  // 写响应有效
    input  [1:0] io_master_bresp    ,                   // 写响应状态
    input  [3:0] io_master_bid      ,                     // 响应对应的事务ID

    // 读地址通道（Read Address Channel）
    output       io_master_arvalid  ,                 // 读地址有效
    output [31:0]io_master_araddr   ,                  // 读地址
    output [3:0] io_master_arid     ,                    // 读事务ID
    output [7:0] io_master_arlen    ,                   // 读突发传输长度
    output [2:0] io_master_arsize   ,                  // 读传输数据位宽
    output [1:0] io_master_arburst  ,                 // 读突发类型
    input        io_master_arready  ,                 // 从设备准备好接收读地址

    // 读数据通道（Read Data Channel）
    output       io_master_rready   ,                  // 主设备准备好接收读数据
    input        io_master_rvalid   ,                  // 读数据有效
    input  [31:0]io_master_rdata    ,                   // 读数据
    input  [1:0] io_master_rresp    ,                   // 读响应状态
    input        io_master_rlast    ,                   // 读突发传输最后一个数据标记
    input  [3:0] io_master_rid      ,                     // 读响应对应的事务ID

    // ------------------------ AXI4 Slave 总线（从设备输入）-------------------------
    // 写地址通道（Write Address Channel）
    input        io_slave_awvalid   ,                  // 写地址有效
    input  [31:0]io_slave_awaddr    ,                      // 写地址
    input  [3:0] io_slave_awid      ,                     // 写事务ID
    input  [7:0] io_slave_awlen     ,                    // 突发传输长度
    input  [2:0] io_slave_awsize    ,                   // 传输数据位宽
    input  [1:0] io_slave_awburst   ,                  // 突发类型
    output       io_slave_awready   ,                  // 从设备准备好接收地址

    // 写数据通道（Write Data Channel）
    input        io_slave_wvalid    ,                   // 写数据有效
    input  [31:0]io_slave_wdata     ,                    // 写数据
    input  [3:0] io_slave_wstrb     ,                    // 字节选通信号
    input        io_slave_wlast     ,                    // 突发传输最后一个数据标记
    output       io_slave_wready    ,                   // 从设备准备好接收数据

    // 写响应通道（Write Response Channel）
    input        io_slave_bready    ,                   // 主设备准备好接收响应
    output       io_slave_bvalid    ,                   // 写响应有效
    output [1:0] io_slave_bresp     ,                    // 写响应状态
    output [3:0] io_slave_bid       ,                      // 响应对应的事务ID

    // 读地址通道（Read Address Channel）
    input        io_slave_arvalid   ,                  // 读地址有效
    input  [31:0]io_slave_araddr    ,                   // 读地址
    input  [3:0] io_slave_arid      ,                     // 读事务ID
    input  [7:0] io_slave_arlen     ,                    // 读突发传输长度
    input  [2:0] io_slave_arsize    ,                   // 读传输数据位宽
    input  [1:0] io_slave_arburst   ,                  // 读突发类型
    output       io_slave_arready   ,                  // 从设备准备好接收读地址

    // 读数据通道（Read Data Channel）
    input        io_slave_rready    ,                    // 主设备准备好接收读数据
    output       io_slave_rvalid    ,                    // 读数据有效
    output [31:0]io_slave_rdata     ,                    // 读数据
    output [1:0] io_slave_rresp     ,                    // 读响应状态
    output       io_slave_rlast     ,                    // 读突发传输最后一个数据标记
    output [3:0] io_slave_rid                          // 读响应对应的事务ID



);
    
    reg [31:0] top_pc;
    reg [31:0] top_inst;
    reg  top_valid;
    reg  top_ready;
    reg  inst_done;

    assign top_valid=if_id_valid    ;
    assign top_ready =id_if_ready   ;
    assign top_inst =if_id_inst     ;
    assign top_pc  =next_pc         ;

    always @(posedge clock or posedge reset) begin
        if(reset)begin
            inst_done<=0;
        end
        else begin
            inst_done<=wb_valid;
        end
    end
always @(*) begin
   // $display("%08x",top_pc);
        dpi_send_signals(
            top_pc,        // 
            top_inst,      
            top_valid, 
            top_ready, 
            inst_done  
    );
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
    // ------------------------------
    // IF模块AXI4读信号（经仲裁器）
    // ------------------------------
    // 读地址通道
    wire        if_axi4_arvalid ;    // IF读地址有效
    wire        if_axi4_arready ;    // 仲裁器返回IF的读地址就绪
    wire [31:0] if_axi4_araddr  ;     // IF读地址
    wire [3:0]  if_axi4_arid    ;       // IF读事务ID（新增）
    wire [7:0]  if_axi4_arlen   ;      // IF读突发长度（新增，单周期为0）
    wire [2:0]  if_axi4_arsize  ;     // IF读数据位宽（新增，3'b010=4字节）
    wire [1:0]  if_axi4_arburst ;    // IF读突发类型（新增，2'b01=递增模式）

    // 读数据通道
    wire        if_axi4_rvalid  ;     // 仲裁器返回IF的读数据有效
    wire        if_axi4_rready  ;     // IF读数据就绪
    wire [31:0] if_axi4_rdata   ;      // 仲裁器返回IF的读数据
    wire [1:0]  if_axi4_rresp   ;      // 仲裁器返回IF的读响应
    wire        if_axi4_rlast   ;      // 仲裁器返回IF的读最后一个数据标记（新增，单周期为1）
    wire [3:0]  if_axi4_rid     ;        // 仲裁器返回IF的读响应事务ID（新增，对应arid）
    // ------------------------------
    // LS模块AXI4读信号（经仲裁器）
    // ------------------------------
    // 读地址通道
    wire        ls_axi4_arvalid ;    // LS读地址有效
    wire        ls_axi4_arready ;    // 仲裁器返回LS的读地址就绪
    wire [31:0] ls_axi4_araddr  ;     // LS读地址
    wire [3:0]  ls_axi4_arid    ;       // LS读事务ID（新增）
    wire [7:0]  ls_axi4_arlen   ;      // LS读突发长度（新增，单周期为0）
    wire [2:0]  ls_axi4_arsize  ;     // LS读数据位宽（新增，3'b010=4字节）
    wire [1:0]  ls_axi4_arburst ;    // LS读突发类型（新增，2'b01=递增模式）

    // 读数据通道
    wire        ls_axi4_rvalid  ;     // 仲裁器返回LS的读数据有效
    wire        ls_axi4_rready  ;     // LS读数据就绪
    wire [31:0] ls_axi4_rdata   ;      // 仲裁器返回LS的读数据
    wire [1:0]  ls_axi4_rresp   ;      // 仲裁器返回LS的读响应
    wire        ls_axi4_rlast   ;      // 仲裁器返回LS的读最后一个数据标记（新增，单周期为1）
    wire [3:0]  ls_axi4_rid     ;        // 仲裁器返回LS的读响应事务ID（新增，对应arid）

    // ------------------------------
    // LS模块AXI4写信号（经仲裁器）
    // ------------------------------
    // 写地址通道
    wire        ls_axi4_awvalid ;    // LS写地址有效
    wire        ls_axi4_awready ;    // 存储器返回LS的写地址就绪
    wire [31:0] ls_axi4_awaddr  ;     // LS写地址
    wire [3:0]  ls_axi4_awid    ;       // LS写事务ID（新增）
    wire [7:0]  ls_axi4_awlen   ;      // LS写突发长度（新增，单周期为0）
    wire [2:0]  ls_axi4_awsize  ;     // LS写数据位宽（新增，3'b010=4字节）
    wire [1:0]  ls_axi4_awburst ;    // LS写突发类型（新增，2'b01=递增模式）

    // 写数据通道
    wire        ls_axi4_wvalid  ;     // LS写数据有效
    wire        ls_axi4_wready  ;     // 存储器返回LS的写数据就绪
    wire [31:0] ls_axi4_wdata   ;      // LS写数据
    wire [3:0]  ls_axi4_wstrb   ;      // LS写字节选通
    wire        ls_axi4_wlast   ;      // LS写最后一个数据标记（新增，单周期为1）

    // 写响应通道
    wire        ls_axi4_bvalid  ;     // 存储器返回LS的写响应有效
    wire        ls_axi4_bready  ;     // LS写响应就绪
    wire [1:0]  ls_axi4_bresp   ;      // 存储器返回LS的写响应
    wire [3:0]  ls_axi4_bid     ;        // 存储器返回LS的写响应事务ID（新增，对应awid）




    // ------------------------------
    // xbar模块->clint
    // ------------------------------
    wire [31:0]  rtc_araddr  ;  // RTC读地址
    wire         rtc_arvalid ;  // RTC读地址有效
    wire [3:0]   rtc_arid    ;  // RTC读事务ID
    wire [7:0]   rtc_arlen   ;  // RTC读突发长度
    wire [2:0]   rtc_arsize  ;  // RTC读数据位宽
    wire [1:0]   rtc_arburst ;  // RTC读突发类型
    wire         rtc_arready ;  // RTC读地址就绪（从设备返回）

    // RTC读数据通道信号
    wire [31:0]  rtc_rdata   ;  // RTC返回的读数据
    wire         rtc_rvalid  ;  // RTC读数据有效（从设备返回）
    wire [1:0]   rtc_rresp   ;  // RTC读响应状态（从设备返回）
    wire         rtc_rlast   ;  // RTC读最后一个数据标记（从设备返回）
    wire [3:0]   rtc_rid     ;  // RTC读响应事务ID（从设备返回，对应arid）
    wire         rtc_rready  ;  // RTC读数据就绪（主设备侧控制）





    // ------------------------------
    // IF模块与IFBIU之间的交互信号（IF->IFBIU方向）
    // ------------------------------
    wire               if_req;       // IF模块向IFBIU发起的请求信号（输入到IFBIU）
    wire       [31:0]  if_addr;      // IF模块发送到IFBIU的地址信号（输入到IFBIU）
    wire       [31:0]  biu_rdata_if; // IFBIU返回给IF模块的读数据（输出到IF模块）
    wire               biu_rresp_if;
   


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
    wire       [2:0]   lsu_arsize;
    wire       [2:0]   lsu_awsize;

    // BIU返回给LS模块的信号
    wire               biu_rresp_ls  ;
    wire               biu_wresp_ls  ;
    wire       [31:0]  biu_rdata_ls; // BIU返回给LS模块的读数据










// 指令取指模块（IFU）
ysyx_25030085_if ifu(
    .clock           ( clock            ) ,
    .reset           ( reset            ) ,

    // wb输入（来自写回阶段的跳转信号）
    .wb_done         ( wb_valid       ) , 
    .next_pc         ( next_pc        ) ,

    // BIU输入信号（来自IFBIU的读数据和就绪信号）
    .biu_rresp       ( biu_rresp_if   )    ,
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

ysyx_25030085_ifbiu_axi4_lite_master #(
    .MAX_DELAY  	(20  ),
    .LFSR_WIDTH 	(8   ))
    ifbiu(
    .clock         	( clock             )   ,
    .reset         	( reset             )   ,
    .if_req        	( if_req            )   ,
    .if_addr       	( if_addr           )   ,
    .biu_rdata     	( biu_rdata_if      )   ,
    .biu_rresp     	( biu_rresp_if      )   ,

    .M_AXI_ARADDR  	( if_axi4_araddr    )   ,  
    .M_AXI_ARVALID 	( if_axi4_arvalid   )   , 
    .M_AXI_ARREADY 	( if_axi4_arready   )   , 
    .M_AXI_ARID    	( if_axi4_arid      )   ,    
    .M_AXI_ARBURST 	( if_axi4_arburst   )   , 
    .M_AXI_ARLEN   	( if_axi4_arlen     )   ,   
    .M_AXI_ARSIZE  	( if_axi4_arsize    )   ,  

    // 读数据通道信号连接  
    .M_AXI_RDATA   	( if_axi4_rdata     )   ,   
    .M_AXI_RRESP   	( if_axi4_rresp     )   ,   
    .M_AXI_RVALID  	( if_axi4_rvalid    )   ,  
    .M_AXI_RID     	( if_axi4_rid       )   ,     
    .M_AXI_RLAST   	( if_axi4_rlast     )   ,
    .M_AXI_RREADY   ( if_axi4_rready    )
);  






ysyx_25030085_id idu(
    .clock           ( clock            ) ,
    .reset           ( reset            ) ,

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
    .clock           ( clock            ) ,
    .reset           ( reset            ) ,

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
    .clock           (   clock          ) ,
    .reset           (   reset          ) ,

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



ysyx_25030085_lsbiu_axi4_lite_master #(
    .READ_MAX_DELAY  	(20  ),
    .WRITE_MAX_DELAY 	(20  ),
    .LFSR_WIDTH      	(8   ))
lsbiu(
    .clock          	(  clock           ),
    .reset          	(  reset           ),
    .lsu_addr       	(  lsu_addr        ),
    .lsu_wwe        	(  lsu_wwe         ),
    .lsu_rwe        	(  lsu_rwe         ),
    .lsu_wdata      	(  lsu_wdata       ),
    .lsu_strb       	(  lsu_strb        ),
    .lsu_arsize          	(  lsu_arsize        ),
    .lsu_awsize          	(  lsu_awsize        ),
    .lsu_req        	(  lsu_req         ),

    .biu_rdata      	(  biu_rdata_ls     ),
    .biu_wresp      	(  biu_wresp_ls     ),
    .biu_rresp      	(  biu_rresp_ls     ),

    .M_AXI_ARADDR   	(  ls_axi4_araddr   ),
    .M_AXI_ARVALID  	(  ls_axi4_arvalid  ),
    .M_AXI_ARREADY  	(  ls_axi4_arready  ),
    .M_AXI_ARID     	(  ls_axi4_arid     ),
    .M_AXI_ARBURST  	(  ls_axi4_arburst  ),
    .M_AXI_ARLEN    	(  ls_axi4_arlen    ),
    .M_AXI_ARSIZE   	(  ls_axi4_arsize   ),

    .M_AXI_RDATA    	(  ls_axi4_rdata    ),
    .M_AXI_RRESP    	(  ls_axi4_rresp    ),
    .M_AXI_RVALID   	(  ls_axi4_rvalid   ),
    .M_AXI_RREADY   	(  ls_axi4_rready   ),
    .M_AXI_RID      	(  ls_axi4_rid      ),
    .M_AXI_RLAST    	(  ls_axi4_rlast    ),
  
    .M_AXI_AWADDR   	(  ls_axi4_awaddr   ),
    .M_AXI_AWVALID  	(  ls_axi4_awvalid  ),
    .M_AXI_AWREADY  	(  ls_axi4_awready  ),
    .M_AXI_AWID         (  ls_axi4_awid     ), 
    .M_AXI_AWBURST      (  ls_axi4_awburst  ),  
    .M_AXI_AWLEN        (  ls_axi4_awlen    ),  
    .M_AXI_AWSIZE       (  ls_axi4_awsize   ), 
  
    .M_AXI_WDATA    	(  ls_axi4_wdata    ),
    .M_AXI_WSTRB    	(  ls_axi4_wstrb    ),
    .M_AXI_WVALID   	(  ls_axi4_wvalid   ),
    .M_AXI_WREADY   	(  ls_axi4_wready   ),
    .M_AXI_WLAST    	(  ls_axi4_wlast    ),
  
    .M_AXI_BRESP    	(  ls_axi4_bresp    ),
    .M_AXI_BVALID   	(  ls_axi4_bvalid   ),
    .M_AXI_BREADY   	(  ls_axi4_bready   ),
    .M_AXI_BID      	(  ls_axi4_bid      )
);




ysyx_25030085_arbiter#(
    .RTC_ADDR 	(32'ha0000048 ))
arbiter(
    .clock       	(clock        ),
    .reset       	(reset        ),

    .if_arvalid  	(if_axi4_arvalid   ),
    .if_arready  	(if_axi4_arready   ),
    .if_araddr   	(if_axi4_araddr    ),
    .if_arid     	(if_axi4_arid      ),
    .if_arlen    	(if_axi4_arlen     ),
    .if_arsize   	(if_axi4_arsize    ),
    .if_arburst  	(if_axi4_arburst   ),
    .if_rvalid   	(if_axi4_rvalid    ),
    .if_rready   	(if_axi4_rready    ),
    .if_rdata    	(if_axi4_rdata     ),
    .if_rresp    	(if_axi4_rresp     ),
    .if_rid      	(if_axi4_rid       ),
    .if_rlast    	(if_axi4_rlast     ),

    .ls_arvalid  	(ls_axi4_arvalid   ),
    .ls_arready  	(ls_axi4_arready   ),
    .ls_araddr   	(ls_axi4_araddr    ),
    .ls_arid     	(ls_axi4_arid      ),
    .ls_arlen    	(ls_axi4_arlen     ),
    .ls_arsize   	(ls_axi4_arsize    ),
    .ls_arburst  	(ls_axi4_arburst   ),
    .ls_rvalid   	(ls_axi4_rvalid    ),
    .ls_rready   	(ls_axi4_rready    ),
    .ls_rdata    	(ls_axi4_rdata     ),
    .ls_rresp    	(ls_axi4_rresp     ),
    .ls_rid      	(ls_axi4_rid       ),
    .ls_rlast    	(ls_axi4_rlast     ),
    .ls_awvalid  	(ls_axi4_awvalid   ),
    .ls_awready  	(ls_axi4_awready   ),
    .ls_awaddr   	(ls_axi4_awaddr    ),
    .ls_awid     	(ls_axi4_awid      ),
    .ls_awlen    	(ls_axi4_awlen     ),
    .ls_awsize   	(ls_axi4_awsize    ),
    .ls_awburst  	(ls_axi4_awburst   ),
    .ls_wvalid   	(ls_axi4_wvalid    ),
    .ls_wready   	(ls_axi4_wready    ),
    .ls_wdata    	(ls_axi4_wdata     ),
    .ls_wstrb    	(ls_axi4_wstrb     ),
    .ls_wlast    	(ls_axi4_wlast     ),
    .ls_bvalid   	(ls_axi4_bvalid    ),
    .ls_bready   	(ls_axi4_bready    ),
    .ls_bresp    	(ls_axi4_bresp     ),
    .ls_bid      	(ls_axi4_bid       ),

    .rtc_araddr  	(rtc_araddr   ),
    .rtc_arvalid 	(rtc_arvalid  ),
    .rtc_arid    	(rtc_arid     ),
    .rtc_arlen   	(rtc_arlen    ),
    .rtc_arsize  	(rtc_arsize   ),
    .rtc_arburst 	(rtc_arburst  ),
    .rtc_arready 	(rtc_arready  ),
    .rtc_rdata   	(rtc_rdata    ),
    .rtc_rvalid  	(rtc_rvalid   ),
    .rtc_rresp   	(rtc_rresp    ),
    .rtc_rlast   	(rtc_rlast    ),
    .rtc_rid     	(rtc_rid      ),
    .rtc_rready  	(rtc_rready   ),

    .soc_awaddr  	(io_master_awaddr   ),
    .soc_awvalid 	(io_master_awvalid  ),
    .soc_awid    	(io_master_awid     ),
    .soc_awlen   	(io_master_awlen    ),
    .soc_awsize  	(io_master_awsize   ),
    .soc_awburst 	(io_master_awburst  ),
    .soc_awready 	(io_master_awready  ),
    .soc_wdata   	(io_master_wdata    ),
    .soc_wstrb   	(io_master_wstrb    ),
    .soc_wvalid  	(io_master_wvalid   ),
    .soc_wlast   	(io_master_wlast    ),
    .soc_wready  	(io_master_wready   ),
    .soc_bresp   	(io_master_bresp    ),
    .soc_bvalid  	(io_master_bvalid   ),
    .soc_bid     	(io_master_bid      ),
    .soc_bready  	(io_master_bready   ),
    .soc_araddr  	(io_master_araddr   ),
    .soc_arvalid 	(io_master_arvalid  ),
    .soc_arid    	(io_master_arid     ),
    .soc_arlen   	(io_master_arlen    ),
    .soc_arsize  	(io_master_arsize   ),
    .soc_arburst 	(io_master_arburst  ),
    .soc_arready 	(io_master_arready  ),
    .soc_rdata   	(io_master_rdata    ),
    .soc_rvalid  	(io_master_rvalid   ),
    .soc_rresp   	(io_master_rresp    ),
    .soc_rlast   	(io_master_rlast    ),
    .soc_rid     	(io_master_rid      ),
    .soc_rready  	(io_master_rready   )
);










ysyx_25030085_axi4_clint #(
    .RTC_ADDR 	(32'ha0000048))
clint(
    .clock         	(clock          ),
    .reset         	(reset          ),
    .S_AXI_ARADDR  	(rtc_araddr     ),  
    .S_AXI_ARVALID 	(rtc_arvalid    ),  
    .S_AXI_ARID    	(rtc_arid       ),  
    .S_AXI_ARLEN   	(rtc_arlen      ),  
    .S_AXI_ARSIZE  	(rtc_arsize     ),  
    .S_AXI_ARBURST 	(rtc_arburst    ),  
    .S_AXI_ARREADY 	(rtc_arready    ),  
    .S_AXI_RDATA   	(rtc_rdata      ),  
    .S_AXI_RRESP   	(rtc_rresp      ),  
    .S_AXI_RVALID  	(rtc_rvalid     ),  
    .S_AXI_RID     	(rtc_rid        ),  
    .S_AXI_RLAST   	(rtc_rlast      ),  
    .S_AXI_RREADY  	(rtc_rready     )   
);

    

 



ysyx_25030085_lsu lsu(
    .clock             ( clock            ) ,
    .reset             ( reset            ) ,

    .in_valid          ( ex_me_valid    ) ,
    .in_imm            ( ex_me_imm      ) ,
    .in_npc            ( ex_me_npc      ) ,
    .in_pc             ( ex_me_pc       ) ,
    .in_rd             ( ex_me_rd       ) ,
    .in_ctrl           ( ex_me_ctrl     ) ,
    .in_lsu_wdata      ( ex_me_rs2      ) ,  // 作存储时输入数据
    .in_lsu_addr       ( ex_me_alu      ) ,  // 作储存时输入地址，作加载时，加载地址
    .in_ready          ( me_ex_ready    ) ,


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
    .lsu_arsize     (  lsu_arsize   ) ,
    .lsu_awsize     (  lsu_awsize   ) ,
    .lsu_strb       (   lsu_strb    ) ,  // LS模块发送到BIU的字节选通信号
    
    // 来自BIU的信号    
    .biu_rresp      (   biu_rresp_ls) ,
    .biu_wresp      (   biu_wresp_ls) ,
    .biu_rdata      (   biu_rdata_ls)    // BIU返回给LS模块的读数据

);


ysyx_25030085_wb wbu(
    .clock           ( clock          ) ,
    .reset           ( reset          ) ,

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

