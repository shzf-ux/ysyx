module sdram_bit_expansion(
  input        clk,
  input        cke,   //时钟使能
  input        cs,    //片选有效
  input        ras,
  input        cas,
  input        we,
  input [12:0] a,     //地址信号
  input [ 1:0] ba,    //储存阵列
  input [ 1:0] dqm,   //数据掩码
  inout [15:0] dq     //数据信号
);
// localparam CMD_PRECHARGE        = 4'b0010; // PRECHARGE (deactivate row)
// localparam CMD_AUTO_REFRESH     = 4'b0001; // AUTO REFRESH / SELF REFRESH
//localparam CMD_NOP              = 4'b0111; // NO OPERATION
//localparam CMD_BURST_TERMINATE  = 4'b0110; // BURST TERMINATE
localparam BANKSIZE= 8192 * 512;
localparam CMD_ACTIVE           = 4'b0011; // ACTIVE (select bank/row)
localparam CMD_READ             = 4'b0101; // READ (select bank/col, start burst read)
localparam CMD_WRITE            = 4'b0100; // WRITE (select bank/col, start burst write)
localparam CMD_LOAD_MODE        = 4'b0000; // LOAD MODE REGISTER

wire [2:0] cas_la;
wire [2:0] bl;    //突发长度
reg [3:0]command;
reg [12:0] mode_register;     //mode寄存器
reg [15:0] bank[0:3][0:BANKSIZE-1];  //内部寄存器

reg[1:0]r_ba;


reg [9:0]  col_addr;
reg [9:0]  r_col_addr;
reg [21:0] bank_addr;
reg [21:0] r_bank_addr;
reg [11:0] bank_active_raw[0:3];//对

reg [2:0]cas_cnt;
reg [2:0]bl_cnt;
assign bl=1<<mode_register[2:0];  //突发长度
assign cas_la =mode_register[6:4];  //cas_la
assign command   ={cs,ras,cas,we};

assign  col_addr=a[9:0];   //列不要锁存

assign  bank_addr = { bank_active_raw[ba],col_addr};
assign  r_bank_addr = { bank_active_raw[r_ba],r_col_addr};



typedef enum [2:0] {IDLE,ACTIVE,WAIT,EXE}state_t;

state_t state;

//设置mode寄存器
always @(posedge clk) begin
  if(command==CMD_LOAD_MODE)begin
    mode_register<=a;
  end
end

//锁存bank ba号
always @(posedge clk) begin
  if(command==CMD_READ)begin
    r_ba<=ba;
  end
end

//锁存激活行
always @(posedge clk) begin
  if(command==CMD_ACTIVE)begin
    bank_active_raw[ba]<=a[11:0];

  end
end
// 锁存列地址（读/写时）
always @(posedge clk) begin
  if (command == CMD_READ ) begin
    r_col_addr <= a[9:0];
  end
end



//写操作
reg write_brust;
always @(posedge clk) begin
  if(cke&&command==CMD_WRITE)begin
  write_brust<=1;

  bank[ba][bank_addr][15:8] <= !dqm[1]?dq[15:8]:bank[ba][bank_addr][15:8];//写入第一个数据
  bank[ba][bank_addr][7:0]  <= !dqm[0]?dq[7:0]:bank[ba][bank_addr][7:0];//写入第一个数据
  bl_cnt<=bl_cnt+1;
  end
  else if(write_brust) begin
    if(bl_cnt<bl)begin
   
      bank[ba][bank_addr+{19'b0,bl_cnt}][15:8] <= !dqm[1]?dq[15:8]:bank[ba][bank_addr+{19'b0,bl_cnt}][15:8];//写入第一个数据
      bank[ba][bank_addr+{19'b0,bl_cnt}][7:0]  <= !dqm[0]?dq[7:0]:bank[ba][bank_addr+{19'b0,bl_cnt}][7:0];//写入第一个数据
      bl_cnt<=bl_cnt+1;
    end
    else begin
    write_brust<=0;
    bl_cnt<=0;
    end
  end
end

reg read_burst;
reg [15:0]dout;
always @(posedge clk) begin
  if(cke&&command==CMD_READ)begin
  read_burst<=1;
  cas_cnt<=cas_cnt+1;
  end
  else if(read_burst) begin
    if(cas_cnt<cas_la-1)begin
      cas_cnt<=cas_cnt+1;
    end
    else begin
      if(bl_cnt<bl)begin
      dout[15:8]<= !dqm[1]?bank[r_ba][r_bank_addr+{19'b0,bl_cnt}][15:8] :8'h00;
      dout[7:0] <= !dqm[0]?bank[r_ba][r_bank_addr+{19'b0,bl_cnt}][7:0] :8'h00;
      bl_cnt<=bl_cnt+1;
    end
    else begin
    read_burst<=0;
    bl_cnt<=0;
    cas_cnt<=0;
    end
    end
  end
end

assign dq = (read_burst && cas_cnt >= cas_la-1) ? dout : 16'hzz;







endmodule
