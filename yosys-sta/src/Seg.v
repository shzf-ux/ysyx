module Binary_To_7Segment 
  (
   input   en,
   input   resetn,
   input [3:0] i_Binary_Num,
   output reg [7:0] seg0
   );

  // 定义分频计数器和分频系数
  reg [31:0] counter;
  parameter DIVISOR = 500000; // 分频到 1Hz

  // 定义七段数码管编码数组，扩展到 16 个值
  wire [7:0] segs [15:0];
  assign segs[0] = 8'b00000011;  // 0为亮 1为熄
  assign segs[1] = 8'b10011111;
  assign segs[2] = 8'b00100101;
  assign segs[3] = 8'b00001101;
  assign segs[4] = 8'b10011001;
  assign segs[5] = 8'b01001001;
  assign segs[6] = 8'b01000001;
  assign segs[7] = 8'b00011111;
  assign segs[8] = 8'b00000001;
  assign segs[9] = 8'b00001001;
  assign segs[10] = 8'b00010001; // A
  assign segs[11] = 8'b11000001; // B
  assign segs[12] = 8'b01100011; // C
  assign segs[13] = 8'b10000101; // D
  assign segs[14] = 8'b01100001; // E
  assign segs[15] = 8'b01110001; // F

 

  
  always @(*) begin
    if (!resetn) begin
            seg0 = 8'h00;
    end
    if (en) begin
      case (i_Binary_Num)
        4'd0: seg0 = segs[0];
        4'd1: seg0 = segs[1];
        4'd2: seg0 = segs[2];
        4'd3: seg0 = segs[3];
        4'd4: seg0 = segs[4];
        4'd5: seg0 = segs[5];
        4'd6: seg0 = segs[6];
        4'd7: seg0 = segs[7];
        4'd8: seg0 = segs[8];
        4'd9: seg0 = segs[9];
        4'd10: seg0 = segs[10];
        4'd11: seg0 = segs[11];
        4'd12: seg0 = segs[12];
        4'd13: seg0 = segs[13];
        4'd14: seg0 = segs[14];
        4'd15: seg0 = segs[15];
        default: seg0 = segs[0];
      endcase
    end else  begin
      seg0 = 8'b11111111;
    end
    
  end

endmodule
