module ysyx_25030085_alu (
    input  [31:0] operand_a,  // 第一个操作数
    input  [31:0] operand_b,  // 第二个操作数
    output [31:0] result      // 加法结果
);

// 直接通过组合逻辑实现32位加法
assign result = operand_a + operand_b;

endmodule
    