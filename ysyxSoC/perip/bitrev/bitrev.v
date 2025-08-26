module bitrev (
  input  sck,     // SPI时钟信号
  input  ss,      // SPI片选信号(低电平有效)
  input  mosi,    // SPI主出从入数据线
  output reg miso // SPI主入从出数据线
);

  reg [7:0] rx_data;  // 接收数据寄存器
  reg [7:0] tx_data;  // 发送数据寄存器
  reg [2:0] cnt;      // 位计数器(0-7)，只需3位即可表示0-7
  
  // 状态定义：空闲、接收、发送
  localparam [1:0] IDLE  = 2'b00;
  localparam [1:0] RX    = 2'b01;
  localparam [1:0] TX    = 2'b10;
  
  reg [1:0] state;    // 状态寄存器

  // 状态机和接收逻辑
  always @(posedge sck or posedge ss) begin
    if (ss) begin
      // 片选无效时复位到空闲状态
      state <= IDLE;
      rx_data <= 8'h00;
      tx_data <= 8'h00;
      cnt <= 3'h0;
    end else begin
      case (state)
        IDLE: begin
          // 从空闲状态开始接收
          state <= RX;
          rx_data <= {7'h00, mosi};  // 接收第一位数据
          cnt <= 3'h1;               // 计数为1
        end       
        RX: begin
          // 继续接收数据
          rx_data <= {rx_data[6:0], mosi};
          cnt <= cnt + 1;
          if (cnt == 3'h7) begin
            state <= TX;
            tx_data <= rx_data;  
            cnt <= 3'h0;       
          end
        end
        
        TX: begin
       
          cnt <= cnt + 1;       
          
          if (cnt == 3'h7) begin
            state <= IDLE;
          end
        end
        default:begin
          
        end
      endcase
    end
  end

  // 发送逻辑 - 在时钟下降沿更新
  always @(negedge sck or posedge ss) begin
    if (ss) begin
      miso <= 1'b1; 
    end else begin
      case (state)
        TX: begin
          miso <= rx_data[cnt];  
        end
        default: begin
          miso <= 1'b1; 
        end
      endcase
    end
  end

endmodule
