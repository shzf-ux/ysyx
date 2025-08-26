`timescale              1ns/1ps
`default_nettype        none

module PSRAM_INIT_QPI (
    input   wire            clk,
    input   wire            rst_n,
    input   wire            req, //请求信号
    output  wire            done,//操作完成标志


    output  reg             sck,
    output  reg             ce_n,
    output  wire [3:0]      dout,
    output  wire            douten //数据输出使能（1=驱动数据线)
);

    localparam  IDLE = 1'b0,
                INIT = 1'b1;


    reg         state, nstate;
    reg [7:0]   counter;


    wire[7:0]   CMD_35H = 8'h35;

    always @*
        case (state)
            IDLE: if(req) nstate = INIT; else nstate = IDLE;
            INIT: if(done) nstate = IDLE; else nstate = INIT;
        endcase

    always @ (posedge clk or negedge rst_n)
        if(!rst_n) state <= IDLE;
        else state <= nstate;

    // Drive the Serial Clock (sck) @ clk/2
    always @ (posedge clk or negedge rst_n)
        if(!rst_n)
            sck <= 1'b0;
        else if(~ce_n)
            sck <= ~ sck;
        else if(state == IDLE)
            sck <= 1'b0;

    // ce_n logic
    always @ (posedge clk or negedge rst_n)
        if(!rst_n)
            ce_n <= 1'b1;
        else if(state == INIT)
            ce_n <= 1'b0;
        else
            ce_n <= 1'b1;

    always @ (posedge clk or negedge rst_n)
        if(!rst_n)
            counter <= 8'b0;
        else if(sck & ~done)
            counter <= counter + 1'b1;
        else if(state == IDLE)
            counter <= 8'b0;



    assign dout     =   (counter < 8)   ?   {3'b0, CMD_35H[7 - counter]}:
                        4'h0;

    assign douten   = (counter < 8);

    assign done     = (counter == 8);




endmodule