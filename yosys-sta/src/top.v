module ps2_keyboard(clk,resetn,ps2_clk,ps2_data,out_data,ascii_code, key_pressed,key_count,shift_pressed,ctrl_pressed );
    input clk,resetn,ps2_clk,ps2_data;
    output reg [7:0]out_data;
  output reg [7:0] ascii_code;// ASCII 码
  output reg  key_pressed;
    
  output reg shift_pressed;  // Shift 键按下标志
    output reg ctrl_pressed  ;   // Ctrl 键按下标志
    output  reg [15:0] key_count; // 按键次数

reg [9:0] buffer;       // ps2_data bits
    reg [3:0] count; // count ps2_data bits
    reg [2:0] ps2_clk_sync;

 
    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

parameter NORMAL = 0;
parameter WAIT_BREAK = 1;
reg scan_state;
reg prev_key_pressed;

 always @(posedge clk) begin
        if (resetn == 0) begin // reset
            count <= 0;
            key_count <= 0; // 复位时按键次数清零
            key_pressed <= 0;
            shift_pressed <= 0;
            ctrl_pressed <= 0;
            prev_key_pressed <= 0; // 上一次按键状态
            scan_state <= NORMAL; // 复位时进入 NORMAL 状态
        end else begin
            if (sampling) begin
                if (count == 4'd10) begin
                    if ((buffer[0] == 0) &&  // start bit
                        (ps2_data)       &&  // stop bit
                        (^buffer[9:1])) begin // odd parity
                        case (scan_state)
                            NORMAL: begin
                                if (buffer[8:1] == 8'hF0) begin
                                    scan_state <= WAIT_BREAK; // 接收到 F0，进入 WAIT_BREAK 状态
                                    key_pressed <= 0; // 标记按键松开
                                    
                                end else begin
                                    $display("receive %x", buffer[8:1]);
                                    out_data <= buffer[8:1]; // 输出键码
                                    key_pressed <= 1;        // 标记按键按下
                                         case (buffer[8:1])
                                        8'h12: shift_pressed <= 1; // 左 Shift 键按下
                                        8'h59: shift_pressed <= 1; // 右 Shift 键按下
                                        8'h14: ctrl_pressed <= 1;  // Ctrl 键按下
                                        default:begin
                                 shift_pressed <= (buffer[8:1] == 8'h12 || buffer[8:1] == 8'h59) ? 1 : shift_pressed;
                                 ctrl_pressed  <= (buffer[8:1] == 8'h14) ? 1 : ctrl_pressed;
                                        end
                                    endcase
                                end
                            end
                            WAIT_BREAK: begin
                                scan_state <= NORMAL; // 回到 NORMAL 状态
                                key_pressed <= 0;     // 标记按键松开              
                                    // 更新 Shift 和 Ctrl 键状态
                                case (buffer[8:1])
                                    8'h12: shift_pressed <= 0; // 左 Shift 键松开
                                    8'h59: shift_pressed <= 0; // 右 Shift 键松开
                                    8'h14: ctrl_pressed <= 0;  // Ctrl 键松开
                                    default:begin
                                shift_pressed <= (buffer[8:1] == 8'h12 || buffer[8:1] == 8'h59) ? 0 : shift_pressed;
                                ctrl_pressed  <= (buffer[8:1] == 8'h14) ? 0 : ctrl_pressed;
                                end
                                endcase             
                            end
                        endcase
                    end
                    count <= 0; // 重置计数器
                end else begin
                    buffer[count] <= ps2_data; // 存储数据位
                    count <= count + 1;
                    
                end
            end

            // 更新上一次按键状态
            prev_key_pressed <= key_pressed;

            // 边沿检测：按键从松开到按下
            if (!prev_key_pressed && key_pressed) begin
                key_count <= key_count + 1; // 按键按下时增加计数
                $display("cnt %d", key_count);
            end
        end
    end

  
  
// 扫描码转换为 ASCII 码
    always @(posedge clk ) begin
        if (!resetn) begin
            ascii_code <= 8'h00;
        end else if (key_pressed) begin
            case (buffer[8:1])
                // 字母键（Shift 键按下时输出大写字母）
                8'h1C: ascii_code <= shift_pressed ? 8'h41 : 8'h61; // A/a
                8'h32: ascii_code <= shift_pressed ? 8'h42 : 8'h62; // B/b
                8'h21: ascii_code <= shift_pressed ? 8'h43 : 8'h63; // C/c
                8'h23: ascii_code <= shift_pressed ? 8'h44 : 8'h64; // D/d
                8'h24: ascii_code <= shift_pressed ? 8'h45 : 8'h65; // E/e
                8'h2B: ascii_code <= shift_pressed ? 8'h46 : 8'h66; // F/f
                8'h34: ascii_code <= shift_pressed ? 8'h47 : 8'h67; // G/g
                8'h33: ascii_code <= shift_pressed ? 8'h48 : 8'h68; // H/h
                8'h43: ascii_code <= shift_pressed ? 8'h49 : 8'h69; // I/i
                8'h3B: ascii_code <= shift_pressed ? 8'h4A : 8'h6A; // J/j
                8'h42: ascii_code <= shift_pressed ? 8'h4B : 8'h6B; // K/k
                8'h4B: ascii_code <= shift_pressed ? 8'h4C : 8'h6C; // L/l
                8'h3A: ascii_code <= shift_pressed ? 8'h4D : 8'h6D; // M/m
                8'h31: ascii_code <= shift_pressed ? 8'h4E : 8'h6E; // N/n
                8'h44: ascii_code <= shift_pressed ? 8'h4F : 8'h6F; // O/o
                8'h4D: ascii_code <= shift_pressed ? 8'h50 : 8'h70; // P/p
                8'h15: ascii_code <= shift_pressed ? 8'h51 : 8'h71; // Q/q
                8'h2D: ascii_code <= shift_pressed ? 8'h52 : 8'h72; // R/r
                8'h1B: ascii_code <= shift_pressed ? 8'h53 : 8'h73; // S/s
                8'h2C: ascii_code <= shift_pressed ? 8'h54 : 8'h74; // T/t
                8'h3C: ascii_code <= shift_pressed ? 8'h55 : 8'h75; // U/u
                8'h2A: ascii_code <= shift_pressed ? 8'h56 : 8'h76; // V/v
                8'h1D: ascii_code <= shift_pressed ? 8'h57 : 8'h77; // W/w
                8'h22: ascii_code <= shift_pressed ? 8'h58 : 8'h78; // X/x
                8'h35: ascii_code <= shift_pressed ? 8'h59 : 8'h79; // Y/y
                8'h1A: ascii_code <= shift_pressed ? 8'h5A : 8'h7A; // Z/z
                // 数字键（Shift 键按下时输出符号）
                8'h16: ascii_code <= shift_pressed ? 8'h21 : 8'h31; // 1/!
                8'h1E: ascii_code <= shift_pressed ? 8'h40 : 8'h32; // 2/@
                8'h26: ascii_code <= shift_pressed ? 8'h23 : 8'h33; // 3/#
                8'h25: ascii_code <= shift_pressed ? 8'h24 : 8'h34; // 4/$
                8'h2E: ascii_code <= shift_pressed ? 8'h25 : 8'h35; // 5/%
                8'h36: ascii_code <= shift_pressed ? 8'h5E : 8'h36; // 6/^
                8'h3D: ascii_code <= shift_pressed ? 8'h26 : 8'h37; // 7/&
                8'h3E: ascii_code <= shift_pressed ? 8'h2A : 8'h38; // 8/*
                8'h46: ascii_code <= shift_pressed ? 8'h28 : 8'h39; // 9/(
                8'h45: ascii_code <= shift_pressed ? 8'h29 : 8'h30; // 0/)
                // 其他键
                default: ascii_code <= 8'h00; // 未定义键
            endcase
        end
    end
endmodule

module binary_to_bcd #(
    parameter BINARY_WIDTH = 16,  // 输入二进制数的位宽
    parameter BCD_WIDTH = 20      // 输出 BCD 码的位宽，假设最大为 5 位十进制数
) (
    input wire [BINARY_WIDTH-1:0] binary_in,
    output reg [BCD_WIDTH-1:0] bcd_out
);

    integer i;
    always @(*) begin
        bcd_out = {BCD_WIDTH{1'b0}}; // 初始化 BCD 码为 0
        for (i = BINARY_WIDTH - 1; i >= 0; i = i - 1) begin
            // 调整 BCD 码的每 4 位
            if (bcd_out[3:0] >= 5) bcd_out[3:0] = bcd_out[3:0] + 3;
            if (bcd_out[7:4] >= 5) bcd_out[7:4] = bcd_out[7:4] + 3;
            if (bcd_out[11:8] >= 5) bcd_out[11:8] = bcd_out[11:8] + 3;
            if (bcd_out[15:12] >= 5) bcd_out[15:12] = bcd_out[15:12] + 3;
            // 左移 BCD 码
            bcd_out = {bcd_out[BCD_WIDTH-2:0], binary_in[i]};
        end
    end

endmodule








module top(
    input clk,
    input resetn,        // 复位信号a
    input ps2_clk,       
    input ps2_data,     
    output reg [7:0] seg0,   // 数码管 0：键码低 4 位
    output [7:0] seg1,   // 数码管 1：键码高 4 位
    output [7:0] seg2,   // 数码管 2：ASCII 码低 4 位
    output [7:0] seg3 , // 数码管 3：ASCII 码高 4 位
    output [7:0] seg4,
    output [7:0] seg5,
    output [7:0] seg6,
    output [7:0] seg7,
    output shift_pressed, // Shift 键按下标志
    output ctrl_pressed    // Ctrl 键按下标志
  
);

    // 内部信号
    reg [7:0] data;      // 键码
    reg [7:0] ascii_code; // ASCII 码

    reg key_pressed;
    reg[15:0]cnt;
    

    

    // PS/2 键盘模块实例化
    ps2_keyboard ps2(
        .clk(clk),
        .resetn(resetn),
        .ps2_clk(ps2_clk),
        .ps2_data(ps2_data),
        .out_data(data),
        .ascii_code(ascii_code),
        .key_pressed( key_pressed),
        .key_count(cnt),
        .shift_pressed(shift_pressed),
        .ctrl_pressed(ctrl_pressed)
     
    );

    // 数码管显示模块实例化

Binary_To_7Segment seg0_inst(

	.en(key_pressed),
    .resetn(resetn),
	.i_Binary_Num(data[3:0]),
	.seg0(seg0)

);
    Binary_To_7Segment seg1_inst(
        
        .en(key_pressed),   
        .resetn(resetn),                  // 始终使能
        .i_Binary_Num(data[7:4]),   // 键码高 4 位
        .seg0(seg1)
    );

    Binary_To_7Segment seg2_inst(

        .en(key_pressed),       
        .resetn(resetn),              // 始终使能
        .i_Binary_Num(ascii_code[3:0]), // ASCII 码低 4 位
        .seg0(seg2)
    );

    Binary_To_7Segment seg3_inst(
      
        .en(key_pressed),      
        .resetn(resetn),               // 始终使能
        .i_Binary_Num(ascii_code[7:4]), // ASCII 码高 4 位
        .seg0(seg3)
    );
    
    //cnt
    // 实例化二进制到 BCD 码转换模块
    binary_to_bcd #(
       .BINARY_WIDTH(16),
       .BCD_WIDTH(16)
    ) bcd_inst (
       .binary_in(cnt),
       .bcd_out(bcd_cnt)
    );
     wire [15:0] bcd_cnt;

    // 实例化 Binary_To_7Segment 模块
    Binary_To_7Segment seg4_inst(
      
       .en(1),
       .resetn(resetn),
       .i_Binary_Num(bcd_cnt[3:0]),
       .seg0(seg4)
    );

    Binary_To_7Segment seg5_inst(
       
       .en(1),
       .resetn(resetn),
       .i_Binary_Num(bcd_cnt[7:4]),
       .seg0(seg5)
    );

    Binary_To_7Segment seg6_inst(
     
       .en(1),
       .resetn(resetn),
       .i_Binary_Num(bcd_cnt[11:8]),
       .seg0(seg6)
    );

    Binary_To_7Segment seg7_inst(
    
       .en(1),
       .resetn(resetn),
       .i_Binary_Num(bcd_cnt[15:12]),
       .seg0(seg7)
    );

    
    

   /* verilator lint_off LATCH */

   /* always @(*) begin
        if (!resetn) begin
        seg0=8'b11111111;
        seg1=8'b11111111;
        seg2=8'b11111111;
        seg3=8'b11111111;
           
        end 
        else begin
 
            if (!key_pressed) begin
            seg0=8'b11111111;
            seg1=8'b11111111;
            seg2=8'b11111111;
            seg3=8'b11111111;
                end
         else begin        
           end
      end
    end*/
endmodule
