

module ysyx_25030085_id (
    input               clock         ,
    input               reset         ,

    input               in_valid      ,
    input       [31:0]  in_inst       ,
    input       [31:0]  in_pc         ,
    output              in_ready      ,

    output      [3:0]   rs1_addr      ,
    output      [3:0]   rs2_addr      ,
    input       [31:0]  rs1_data      ,
    input       [31:0]  rs2_data      ,

    output              out_valid     ,
    output      [31:0]  pc_out        ,
    output      [31:0]  out_rs1_data  ,
    output      [31:0]  out_rs2_data  ,
    output      [11:0]  ctrl_out      ,
    output      [31:0]  imm_out       ,
    output      [3:0]   rd_out        ,
    input               out_ready     
);
  localparam IDLE = 0;
  localparam OUTPUT = 1;
  localparam WAIT = 2;
  reg [1:0] state;
  reg [31:0] inst, pc;

  // 握手信号赋值
  assign in_ready = (state == IDLE);
  assign out_valid = (state == OUTPUT);

  // 状态机逻辑
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      inst <= 0;
      pc <= 32'h30000000;
      state <= IDLE;
    end else begin
      case (state)
        IDLE: begin
          if (in_valid && in_ready) begin // 接收指令与PC
            inst <= in_inst;
            pc <= in_pc;  
            state <= OUTPUT;    
          end
        end
        OUTPUT: begin // 进入输出等待状态
          state <= WAIT;
        end
        WAIT: begin // 等待下游接收完成
          if (out_ready)
            state <= IDLE;
        end
      endcase
    end     
  end

  // 输出端口直接赋值
  assign pc_out = pc;
  assign imm_out = imm;
  assign out_rs1_data = rs1_data;
  assign out_rs2_data = rs2_data;
  assign ctrl_out = ctrl_bus;
  assign rs1_addr = inst[18:15]; // rs1地址固定为inst[19:15]
  assign rs2_addr = inst[23:20]; // rs2地址固定为inst[24:20]
  assign rd_out = inst[10:7];    // rd地址固定为inst[11:7]

  // 指令解析相关信号
  reg invalid;            
  reg is_ebreak;          
  wire [6:0] opcode;       
  wire [2:0] func3;        
  reg [31:0] imm;         
  wire [31:0] immI;        
  wire [31:0] immU;        
  wire [31:0] immS;        

  // 立即数计算（仅保留所需类型）
  assign immI = {{20{inst[31]}}, inst[31:20]};  // I型立即数（符号扩展）
  assign immU = {inst[31:12], 12'b0};           // U型立即数（高位补12个0）
  assign immS = {{20{inst[31]}}, inst[31:25], inst[11:7]}; // S型立即数（符号扩展）
  assign opcode = inst[6:0];  
  assign func3 = inst[14:12];
  // 控制信号定义（仅保留所需信号）
  reg    MemWrite;       
  reg    MemRead;        
  reg [2:0] MemOp;       
  reg [2:0] MemtoReg;    
  reg    RegWrite;       
  reg   Jump;      
  reg   ALUSrc;               
  reg  csr_wen;     
        

  // 控制总线拼接（位宽不变，保留无用信号位）
  wire [11:0] ctrl_bus = {csr_wen,  RegWrite, Jump, MemtoReg, MemOp, MemWrite, MemRead, ALUSrc};

  // 操作码/功能码常量定义（仅保留所需指令）
  localparam OP_OP       = 7'b0110011; // add（R型）
  localparam OP_OP_IMM   = 7'b0010011; // addi（I型）
  localparam OP_LUI      = 7'b0110111; // lui（U型）
  localparam OP_LOAD     = 7'b0000011; // lw/lbu（I型）
  localparam OP_STORE    = 7'b0100011; // sw/sb（S型）
  localparam OP_JALR     = 7'b1100111; // jalr（I型）
  localparam OP_SYSTEM   = 7'b1110011; // ebreak/csrrw（I型）

  // 功能码常量（仅保留所需）
  localparam F3_ADD      = 3'b000; // add/addi功能码
  localparam F3_LW       = 3'b010; // lw功能码
  localparam F3_LBU      = 3'b100; // lbu功能码
  localparam F3_SW       = 3'b010; // sw功能码
  localparam F3_SB       = 3'b000; // sb功能码
  localparam F3_CSRRW    = 3'b001; // csrrw功能码

  // ALU操作码常量（仅保留所需）
  localparam ALU_ADD     = 4'b0000; // 加法操作
  localparam ALU_PCADD   = 4'b1001; // PC加立即数（无实际用，保留兼容）



  // 写回来源常量（仅保留所需）
  localparam MTR_ALU     = 3'b000; // ALU结果（add/addi/jalr）
  localparam MTR_MEM     = 3'b001; // 存储器数据（lw/lbu）
  localparam MTR_PCP4    = 3'b010; // PC+4（jalr）
  localparam MTR_IMM     = 3'b011; // 立即数（lui）
  localparam MTR_CSR     = 3'b100; // CSR数据（csrrw）

  // 存储器操作类型常量（仅保留所需）
  localparam OP_LW       = 3'b010; // 加载字（32位）
  localparam OP_LBU      = 3'b100; // 加载无符号字节（8位）
  localparam OP_SW       = 3'b010; // 存储字（32位）
  localparam OP_SB       = 3'b000; // 存储字节（8位）



  // 系统指令编码常量（仅保留所需）
  localparam EBREAK_CODE = 12'h001; // ebreak指令的inst[31:20]编码

  // 指令解码逻辑（仅处理保留指令）
  always @(*) begin
    // 初始化所有信号为默认值（避免 latch）
    ALUSrc = 1'b0;
    MemWrite = 1'b0;
    MemOp = 3'b000;
    MemRead = 1'b0;
    MemtoReg = MTR_ALU;
    RegWrite = 1'b0;
    csr_wen = 0;
    Jump = 0;
    is_ebreak = 1'b0;
    invalid = 1'b0;

    imm = 32'b0;

    if (state == OUTPUT) begin // 仅在OUTPUT状态解码指令
      case (opcode)
        OP_OP: begin
          if (func3 == F3_ADD && inst[31:25] == 7'b0000000) begin
            RegWrite = 1'b1;    // 写回寄存器
          
            ALUSrc = 1'b0;      // ALU源为寄存器（rs2）
          end else begin
            invalid = 1'b1;     // 非add指令标记为无效
          end
        end




        // 2. I型指令：addi（opcode=0010011，func3=000）
        OP_OP_IMM: begin
          if (func3 == F3_ADD) begin
            RegWrite = 1'b1;    // 写回寄存器
            ALUSrc = 1'b1;      // ALU源为立即数
            imm = immI;         // 取I型立即数
          end else begin
            invalid = 1'b1;     // 非addi指令标记为无效
          end
        end

        // 3. U型指令：lui（opcode=0110111）
        OP_LUI: begin
          RegWrite = 1'b1;      // 写回寄存器
          ALUSrc = 1'b1;        // ALU源为立即数（无实际运算，仅写回）
          MemtoReg = MTR_IMM;   // 写回来源为立即数
          imm = immU;           // 取U型立即数
        end

        // 4. I型指令：lw/lbu（opcode=0000011）
        OP_LOAD: begin
          MemRead = 1'b1;       // 使能存储器读
          RegWrite = 1'b1;      // 写回寄存器
          ALUSrc = 1'b1;        // ALU源为立即数（计算地址）
          MemtoReg = MTR_MEM;   // 写回来源为存储器数据
          imm = immI;           // 取I型立即数
          case (func3)
            F3_LW: MemOp = OP_LW;   // 加载字（32位）
            F3_LBU: MemOp = OP_LBU; // 加载无符号字节（8位）
            default: invalid = 1'b1;// 非lw/lbu标记为无效
          endcase
        end

  
        OP_STORE: begin
          MemWrite = 1'b1;      // 使能存储器写
          ALUSrc = 1'b1;        // ALU源为立即数（计算地址）
          imm = immS;           // 取S型立即数
          case (func3)
            F3_SW: MemOp = OP_SW;   // 存储字（32位）
            F3_SB: MemOp = OP_SB;   // 存储字节（8位）
            default: invalid = 1'b1;// 非sw/sb标记为无效
          endcase
        end

       
        OP_JALR: begin
          if (func3 == F3_ADD) begin
            Jump = 1;   // 标记为jalr跳转
            RegWrite = 1'b1;    // 写回PC+4
            ALUSrc = 1'b1;      // ALU源为立即数（计算目标地址）
            MemtoReg = MTR_PCP4;// 写回来源为PC+4
            imm = immI;         // 取I型立即数
          end else begin
            invalid = 1'b1;    
          end
        end

    
        OP_SYSTEM: begin
          case (func3)
           
            3'b000: begin
              if (inst[31:20] == EBREAK_CODE) begin
                is_ebreak = 1'b1;  // 标记为ebreak指令
                RegWrite = 1'b0;    // 不写回寄存器
              end else begin
                invalid = 1'b1;     // 非ebreak标记为无效
              end
            end
          
            F3_CSRRW: begin
              RegWrite = 1'b1;      // 写回CSR数据
              MemtoReg = MTR_CSR;   // 写回来源为CSR
              csr_wen = 1;  // 使能CSR写
              imm = immI;           // 取I型立即数（CSR地址）
            end
            default: invalid = 1'b1;// 非ebreak/csrrw标记为无效
          endcase
        end
        default: invalid = 1'b1;
      endcase
    end
  end


`ifndef SYNTHESIS
  always @(is_ebreak, invalid) begin
    if (is_ebreak) begin
      ebreak_instruction(inst);   // 触发ebreak回调
    end else if (invalid) begin
     // invalid_inst(pc, inst);     // 触发无效指令回调
    end
  end   
`endif


endmodule