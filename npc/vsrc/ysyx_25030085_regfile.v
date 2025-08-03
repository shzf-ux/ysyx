import "DPI-C"  function void info_register  (input int value,input bit en_display); 
//import "DPI-C" context function void set_scope();
module ysyx_25030085_regfile ( 
    input               clock          ,
    input               reset          ,
    //读
    input       [4:0]   reg_rs1_addr ,
    input       [4:0]   reg_rs2_addr ,
    output      [31:0]  rs1_data     ,
    output      [31:0]  rs2_data     ,

    input               reg_wen      ,
    input               in_valid     ,
    input       [4:0]   reg_waddr    ,
    input       [31:0]  reg_wdata    ,
    output      [31:0]  reg_a5       ,
    output reg          w_resp       
);
    reg [4:0]       rs1             ;
    reg [4:0]       rs2             ;
    reg [4:0]       rd              ;
    reg [31:0]      register [0:31] ;
    reg             is_info_register;
    reg             is_en_display   ;


    integer i; 
    initial begin
        is_info_register=0;
    end

    //打印寄存器
    export "DPI-C" function info_register_en;
    function void info_register_en(input bit enable,input bit en_display);
      
       is_info_register=enable;
       is_en_display=en_display;
    endfunction
    always @(posedge is_info_register) begin
        for(i=0;i<32;i++)begin
        info_register(register[i],is_en_display);
        end
    end

   always @(posedge clock or posedge reset) begin
    if (reset) begin
        // 复位所有寄存器（x0 除外）
        for (integer i = 1; i < 32; i++) begin
            register[i] <= 0;
        end
    end else if (reg_wen && (reg_waddr != 0)&&in_valid) begin
        register[reg_waddr] <= reg_wdata;  
        w_resp<=1;
    end
    else begin
        w_resp<=0;
    end

end

    assign rs1_data=(reg_rs1_addr!=0)?register[reg_rs1_addr]:0;//根据rs1寄存器编码找到对于数据
    assign rs2_data=(reg_rs2_addr!=0)?register[reg_rs2_addr]:0;
    assign reg_a5 = register[15];
endmodule
