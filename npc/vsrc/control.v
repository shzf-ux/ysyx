    import "DPI-C" function void ebreak_instruction (input int inst) ;
        
module ysyx_25030085_control (
    input  [31:0] inst,

    output reg    RegWrite,
    output reg     ALUSrc,
    output reg [1:0] alu_op
);
    reg [6:0] opcode=inst[6:0];
    reg [2:0] func3=inst[14:12];
    reg [6:0] func7=inst[31:25];

    

always @(*) begin
     case (opcode)
            // I-type指令
            7'b0010011: begin // ADDI
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                alu_op   = 2'b00;
               
            end
            // 默认情况
            default: begin
                RegWrite = 1'b0;
                ALUSrc   = 1'b0;
                alu_op   = 2'b00;
            end
        endcase
        if(inst==32'h00100073) begin
        ebreak_instruction(inst);
        end
    
end

    
endmodule