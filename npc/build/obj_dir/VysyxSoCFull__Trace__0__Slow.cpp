// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBus(c+1168,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1169,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1170,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1171,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1172,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1173,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1174,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1175,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1176,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1177,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1178,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1179,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1180,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1181,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1182,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1183,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1184,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1185,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1186,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1187,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBus(c+1168,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1169,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1170,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1171,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1172,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1173,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1174,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1175,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1176,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1177,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1178,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1179,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1180,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1181,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1182,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1183,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1184,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1185,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1186,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1187,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+505,"spi_sck", false,-1);
    tracep->declBus(c+506,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1188,"spi_mosi", false,-1);
    tracep->declBit(c+1189,"spi_miso", false,-1);
    tracep->declBit(c+1186,"uart_rx", false,-1);
    tracep->declBit(c+1187,"uart_tx", false,-1);
    tracep->declBit(c+1066,"psram_sck", false,-1);
    tracep->declBit(c+1067,"psram_ce_n", false,-1);
    tracep->declBus(c+1190,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1191,"sdram_clk", false,-1);
    tracep->declBit(c+507,"sdram_cke", false,-1);
    tracep->declBit(c+508,"sdram_cs", false,-1);
    tracep->declBit(c+509,"sdram_ras", false,-1);
    tracep->declBit(c+510,"sdram_cas", false,-1);
    tracep->declBit(c+511,"sdram_we", false,-1);
    tracep->declBus(c+512,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+513,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+514,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+515,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1168,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1169,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1170,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1171,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1172,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1173,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1174,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1175,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1176,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1177,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1178,"ps2_clk", false,-1);
    tracep->declBit(c+1179,"ps2_data", false,-1);
    tracep->declBus(c+1180,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1181,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1182,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1183,"vga_hsync", false,-1);
    tracep->declBit(c+1184,"vga_vsync", false,-1);
    tracep->declBit(c+1185,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBus(c+800,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+46,"in_psel", false,-1);
    tracep->declBit(c+47,"in_penable", false,-1);
    tracep->declBus(c+1239,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+48,"in_pwrite", false,-1);
    tracep->declBus(c+801,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"in_pready", false,-1);
    tracep->declBus(c+1069,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+802,"in_pslverr", false,-1);
    tracep->declBus(c+800,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+46,"out_psel", false,-1);
    tracep->declBit(c+47,"out_penable", false,-1);
    tracep->declBus(c+1239,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+48,"out_pwrite", false,-1);
    tracep->declBus(c+801,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"out_pready", false,-1);
    tracep->declBus(c+1069,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+802,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+46,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+47,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+48,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+800,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1239,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+801,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+802,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1069,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+460,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+461,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+48,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+800,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1239,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+801,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+516,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1240,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+517,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+462,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+463,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+48,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+803,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1239,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+801,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1241,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1242,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1243,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+464,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+465,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+48,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+804,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1239,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+801,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1244,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1245,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1246,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+466,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+467,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+48,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+804,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1239,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+801,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1247,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1248,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1249,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+805,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+468,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+48,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+800,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1239,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+801,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1192,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1240,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+50,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+806,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+807,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+48,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+804,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1239,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+801,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+808,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1240,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1193,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+809,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+469,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+48,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+803,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1239,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+801,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1194,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+470,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1195,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+810,"sel_0", false,-1);
    tracep->declBit(c+811,"sel_1", false,-1);
    tracep->declBit(c+812,"sel_2", false,-1);
    tracep->declBit(c+813,"sel_3", false,-1);
    tracep->declBit(c+814,"sel_4", false,-1);
    tracep->declBit(c+815,"sel_5", false,-1);
    tracep->declBit(c+816,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+51,"auto_in_awready", false,-1);
    tracep->declBit(c+52,"auto_in_awvalid", false,-1);
    tracep->declBus(c+53,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+55,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+51,"auto_in_wready", false,-1);
    tracep->declBit(c+57,"auto_in_wvalid", false,-1);
    tracep->declBus(c+58,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+59,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+60,"auto_in_bready", false,-1);
    tracep->declBit(c+1070,"auto_in_bvalid", false,-1);
    tracep->declBus(c+61,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+817,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+62,"auto_in_arready", false,-1);
    tracep->declBit(c+63,"auto_in_arvalid", false,-1);
    tracep->declBus(c+64,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+65,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+66,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+67,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+68,"auto_in_rready", false,-1);
    tracep->declBit(c+1071,"auto_in_rvalid", false,-1);
    tracep->declBus(c+69,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1196,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+817,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_out_psel", false,-1);
    tracep->declBit(c+47,"auto_out_penable", false,-1);
    tracep->declBit(c+48,"auto_out_pwrite", false,-1);
    tracep->declBus(c+800,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+801,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"auto_out_pready", false,-1);
    tracep->declBit(c+802,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1069,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+47,"nodeOut_penable", false,-1);
    tracep->declBus(c+70,"state", false,-1, 1,0);
    tracep->declBit(c+62,"accept_read", false,-1);
    tracep->declBit(c+51,"accept_write", false,-1);
    tracep->declBit(c+71,"is_write_r", false,-1);
    tracep->declBit(c+48,"is_write", false,-1);
    tracep->declBus(c+69,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+61,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+72,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+73,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+74,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+75,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+818,"resp", false,-1, 1,0);
    tracep->declBus(c+76,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+817,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1071,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+77,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1070,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+78,"auto_in_awready", false,-1);
    tracep->declBit(c+1018,"auto_in_awvalid", false,-1);
    tracep->declBus(c+79,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1019,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1020,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+80,"auto_in_wready", false,-1);
    tracep->declBit(c+1022,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1023,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1025,"auto_in_wlast", false,-1);
    tracep->declBit(c+472,"auto_in_bready", false,-1);
    tracep->declBit(c+81,"auto_in_bvalid", false,-1);
    tracep->declBus(c+82,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+83,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+84,"auto_in_arready", false,-1);
    tracep->declBit(c+1197,"auto_in_arvalid", false,-1);
    tracep->declBus(c+856,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+857,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+858,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+859,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1198,"auto_in_rready", false,-1);
    tracep->declBit(c+85,"auto_in_rvalid", false,-1);
    tracep->declBus(c+86,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+87,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+88,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+89,"auto_in_rlast", false,-1);
    tracep->declBit(c+51,"auto_out_awready", false,-1);
    tracep->declBit(c+52,"auto_out_awvalid", false,-1);
    tracep->declBus(c+53,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+55,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+56,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+51,"auto_out_wready", false,-1);
    tracep->declBit(c+57,"auto_out_wvalid", false,-1);
    tracep->declBus(c+58,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+59,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+60,"auto_out_bready", false,-1);
    tracep->declBit(c+1070,"auto_out_bvalid", false,-1);
    tracep->declBus(c+61,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+817,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+62,"auto_out_arready", false,-1);
    tracep->declBit(c+63,"auto_out_arvalid", false,-1);
    tracep->declBus(c+64,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+65,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+66,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+67,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+68,"auto_out_rready", false,-1);
    tracep->declBit(c+1071,"auto_out_rvalid", false,-1);
    tracep->declBus(c+69,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1196,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+817,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+60,"io_enq_ready", false,-1);
    tracep->declBit(c+1070,"io_enq_valid", false,-1);
    tracep->declBus(c+61,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+817,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+472,"io_deq_ready", false,-1);
    tracep->declBit(c+81,"io_deq_valid", false,-1);
    tracep->declBus(c+82,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+83,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+90,"wrap", false,-1);
    tracep->declBit(c+91,"wrap_1", false,-1);
    tracep->declBit(c+92,"maybe_full", false,-1);
    tracep->declBit(c+93,"ptr_match", false,-1);
    tracep->declBit(c+94,"empty", false,-1);
    tracep->declBit(c+95,"full", false,-1);
    tracep->declBit(c+1072,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+91,"R0_addr", false,-1);
    tracep->declBit(c+1250,"R0_en", false,-1);
    tracep->declBit(c+1166,"R0_clk", false,-1);
    tracep->declBus(c+96,"R0_data", false,-1, 5,0);
    tracep->declBit(c+90,"W0_addr", false,-1);
    tracep->declBit(c+1072,"W0_en", false,-1);
    tracep->declBit(c+1166,"W0_clk", false,-1);
    tracep->declBus(c+471,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+97+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+99,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+68,"io_enq_ready", false,-1);
    tracep->declBit(c+1071,"io_enq_valid", false,-1);
    tracep->declBus(c+69,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1196,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+817,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+1198,"io_deq_ready", false,-1);
    tracep->declBit(c+85,"io_deq_valid", false,-1);
    tracep->declBus(c+86,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+87,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+88,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+89,"io_deq_bits_last", false,-1);
    tracep->declBit(c+100,"wrap", false,-1);
    tracep->declBit(c+101,"wrap_1", false,-1);
    tracep->declBit(c+102,"maybe_full", false,-1);
    tracep->declBit(c+103,"ptr_match", false,-1);
    tracep->declBit(c+104,"empty", false,-1);
    tracep->declBit(c+105,"full", false,-1);
    tracep->declBit(c+1073,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+101,"R0_addr", false,-1);
    tracep->declBit(c+1250,"R0_en", false,-1);
    tracep->declBit(c+1166,"R0_clk", false,-1);
    tracep->declQuad(c+106,"R0_data", false,-1, 38,0);
    tracep->declBit(c+100,"W0_addr", false,-1);
    tracep->declBit(c+1073,"W0_en", false,-1);
    tracep->declBit(c+1166,"W0_clk", false,-1);
    tracep->declQuad(c+1199,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+108+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+112,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+84,"io_enq_ready", false,-1);
    tracep->declBit(c+1197,"io_enq_valid", false,-1);
    tracep->declBus(c+856,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+857,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+858,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+859,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+62,"io_deq_ready", false,-1);
    tracep->declBit(c+63,"io_deq_valid", false,-1);
    tracep->declBus(c+64,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+65,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+66,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+67,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+113,"wrap", false,-1);
    tracep->declBit(c+114,"wrap_1", false,-1);
    tracep->declBit(c+115,"maybe_full", false,-1);
    tracep->declBit(c+116,"ptr_match", false,-1);
    tracep->declBit(c+117,"empty", false,-1);
    tracep->declBit(c+118,"full", false,-1);
    tracep->declBit(c+1092,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+114,"R0_addr", false,-1);
    tracep->declBit(c+1250,"R0_en", false,-1);
    tracep->declBit(c+1166,"R0_clk", false,-1);
    tracep->declQuad(c+119,"R0_data", false,-1, 46,0);
    tracep->declBit(c+113,"W0_addr", false,-1);
    tracep->declBit(c+1092,"W0_en", false,-1);
    tracep->declBit(c+1166,"W0_clk", false,-1);
    tracep->declQuad(c+860,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+121+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+125,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+78,"io_enq_ready", false,-1);
    tracep->declBit(c+1018,"io_enq_valid", false,-1);
    tracep->declBus(c+79,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1019,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1020,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1021,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+51,"io_deq_ready", false,-1);
    tracep->declBit(c+52,"io_deq_valid", false,-1);
    tracep->declBus(c+53,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+54,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+55,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+56,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+126,"wrap", false,-1);
    tracep->declBit(c+127,"wrap_1", false,-1);
    tracep->declBit(c+128,"maybe_full", false,-1);
    tracep->declBit(c+129,"ptr_match", false,-1);
    tracep->declBit(c+130,"empty", false,-1);
    tracep->declBit(c+131,"full", false,-1);
    tracep->declBit(c+1026,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+127,"R0_addr", false,-1);
    tracep->declBit(c+1250,"R0_en", false,-1);
    tracep->declBit(c+1166,"R0_clk", false,-1);
    tracep->declQuad(c+132,"R0_data", false,-1, 46,0);
    tracep->declBit(c+126,"W0_addr", false,-1);
    tracep->declBit(c+1026,"W0_en", false,-1);
    tracep->declBit(c+1166,"W0_clk", false,-1);
    tracep->declQuad(c+1201,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+134+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+138,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+80,"io_enq_ready", false,-1);
    tracep->declBit(c+1022,"io_enq_valid", false,-1);
    tracep->declBus(c+1023,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1024,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1025,"io_enq_bits_last", false,-1);
    tracep->declBit(c+51,"io_deq_ready", false,-1);
    tracep->declBit(c+57,"io_deq_valid", false,-1);
    tracep->declBus(c+58,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+59,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+139,"wrap", false,-1);
    tracep->declBit(c+140,"wrap_1", false,-1);
    tracep->declBit(c+141,"maybe_full", false,-1);
    tracep->declBit(c+142,"ptr_match", false,-1);
    tracep->declBit(c+143,"empty", false,-1);
    tracep->declBit(c+144,"full", false,-1);
    tracep->declBit(c+1027,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+140,"R0_addr", false,-1);
    tracep->declBit(c+1250,"R0_en", false,-1);
    tracep->declBit(c+1166,"R0_clk", false,-1);
    tracep->declQuad(c+145,"R0_data", false,-1, 35,0);
    tracep->declBit(c+139,"W0_addr", false,-1);
    tracep->declBit(c+1027,"W0_en", false,-1);
    tracep->declBit(c+1166,"W0_clk", false,-1);
    tracep->declQuad(c+1028,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+147+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+151,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+152,"auto_in_awready", false,-1);
    tracep->declBit(c+774,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1251,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+775,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+776,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+777,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+778,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+153,"auto_in_wready", false,-1);
    tracep->declBit(c+779,"auto_in_wvalid", false,-1);
    tracep->declBus(c+780,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+781,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+782,"auto_in_wlast", false,-1);
    tracep->declBit(c+1087,"auto_in_bready", false,-1);
    tracep->declBit(c+1100,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1101,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1102,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+154,"auto_in_arready", false,-1);
    tracep->declBit(c+1060,"auto_in_arvalid", false,-1);
    tracep->declBus(c+759,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+760,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+761,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+762,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+763,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1138,"auto_in_rready", false,-1);
    tracep->declBit(c+155,"auto_in_rvalid", false,-1);
    tracep->declBus(c+156,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+157,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+158,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+159,"auto_in_rlast", false,-1);
    tracep->declBit(c+1142,"auto_out_awready", false,-1);
    tracep->declBit(c+1030,"auto_out_awvalid", false,-1);
    tracep->declBus(c+79,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1019,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1020,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1031,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1143,"auto_out_wready", false,-1);
    tracep->declBit(c+1032,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1023,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1025,"auto_out_wlast", false,-1);
    tracep->declBit(c+1144,"auto_out_bready", false,-1);
    tracep->declBit(c+160,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1101,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1103,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1104,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1159,"auto_out_arready", false,-1);
    tracep->declBit(c+1093,"auto_out_arvalid", false,-1);
    tracep->declBus(c+856,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+857,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+858,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+859,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+862,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1138,"auto_out_rready", false,-1);
    tracep->declBit(c+155,"auto_out_rvalid", false,-1);
    tracep->declBus(c+156,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+157,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+158,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+161,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+162,"auto_out_rlast", false,-1);
    tracep->declBit(c+1032,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+163,"w_idle", false,-1);
    tracep->declBit(c+1145,"in_awready", false,-1);
    tracep->declBit(c+164,"busy", false,-1);
    tracep->declBus(c+165,"r_addr", false,-1, 31,0);
    tracep->declBus(c+166,"r_len", false,-1, 7,0);
    tracep->declBus(c+863,"len", false,-1, 7,0);
    tracep->declBus(c+864,"addr", false,-1, 31,0);
    tracep->declBit(c+167,"busy_1", false,-1);
    tracep->declBus(c+168,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+169,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1033,"len_1", false,-1, 7,0);
    tracep->declBus(c+1034,"addr_1", false,-1, 31,0);
    tracep->declBit(c+170,"wbeats_latched", false,-1);
    tracep->declBit(c+1030,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1035,"wbeats_valid", false,-1);
    tracep->declBus(c+171,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1036,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1025,"w_last", false,-1);
    tracep->declBit(c+1144,"nodeOut_bready", false,-1);
    tracep->declBus(c+1105,"error_0", false,-1, 1,0);
    tracep->declBus(c+1106,"error_1", false,-1, 1,0);
    tracep->declBus(c+1107,"error_2", false,-1, 1,0);
    tracep->declBus(c+1108,"error_3", false,-1, 1,0);
    tracep->declBus(c+1109,"error_4", false,-1, 1,0);
    tracep->declBus(c+1110,"error_5", false,-1, 1,0);
    tracep->declBus(c+1111,"error_6", false,-1, 1,0);
    tracep->declBus(c+1112,"error_7", false,-1, 1,0);
    tracep->declBus(c+1113,"error_8", false,-1, 1,0);
    tracep->declBus(c+1114,"error_9", false,-1, 1,0);
    tracep->declBus(c+1115,"error_10", false,-1, 1,0);
    tracep->declBus(c+1116,"error_11", false,-1, 1,0);
    tracep->declBus(c+1117,"error_12", false,-1, 1,0);
    tracep->declBus(c+1118,"error_13", false,-1, 1,0);
    tracep->declBus(c+1119,"error_14", false,-1, 1,0);
    tracep->declBus(c+1120,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+154,"io_enq_ready", false,-1);
    tracep->declBit(c+1060,"io_enq_valid", false,-1);
    tracep->declBus(c+759,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+760,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+761,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+762,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+763,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1160,"io_deq_ready", false,-1);
    tracep->declBit(c+1093,"io_deq_valid", false,-1);
    tracep->declBus(c+856,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+865,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+866,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+858,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+859,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+172,"ram", false,-1, 48,0);
    tracep->declBit(c+174,"full", false,-1);
    tracep->declBit(c+1093,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1161,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+152,"io_enq_ready", false,-1);
    tracep->declBit(c+774,"io_enq_valid", false,-1);
    tracep->declBus(c+1251,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+775,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+776,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+777,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+778,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1146,"io_deq_ready", false,-1);
    tracep->declBit(c+1037,"io_deq_valid", false,-1);
    tracep->declBus(c+79,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1038,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1039,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1020,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1021,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+175,"ram", false,-1, 48,0);
    tracep->declBit(c+177,"full", false,-1);
    tracep->declBit(c+1037,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1147,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+153,"io_enq_ready", false,-1);
    tracep->declBit(c+779,"io_enq_valid", false,-1);
    tracep->declBus(c+780,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+781,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+782,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1148,"io_deq_ready", false,-1);
    tracep->declBit(c+1040,"io_deq_valid", false,-1);
    tracep->declBus(c+1023,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1024,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1203,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+178,"ram", false,-1, 36,0);
    tracep->declBit(c+180,"full", false,-1);
    tracep->declBit(c+1040,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1149,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+1150,"auto_in_awready", false,-1);
    tracep->declBit(c+1041,"auto_in_awvalid", false,-1);
    tracep->declBus(c+79,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1042,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1204,"auto_in_wready", false,-1);
    tracep->declBit(c+1043,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1023,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1151,"auto_in_bready", false,-1);
    tracep->declBit(c+181,"auto_in_bvalid", false,-1);
    tracep->declBus(c+182,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+183,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1162,"auto_in_arready", false,-1);
    tracep->declBit(c+1205,"auto_in_arvalid", false,-1);
    tracep->declBus(c+856,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+867,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1163,"auto_in_rready", false,-1);
    tracep->declBit(c+184,"auto_in_rvalid", false,-1);
    tracep->declBus(c+185,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+186,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+187,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1162,"nodeIn_arready", false,-1);
    tracep->declBit(c+1150,"nodeIn_awready", false,-1);
    tracep->declBit(c+1044,"w_sel0", false,-1);
    tracep->declBit(c+181,"w_full", false,-1);
    tracep->declBus(c+182,"w_id", false,-1, 3,0);
    tracep->declBit(c+188,"r_sel1", false,-1);
    tracep->declBit(c+189,"w_sel1", false,-1);
    tracep->declBit(c+184,"r_full", false,-1);
    tracep->declBus(c+185,"r_id", false,-1, 3,0);
    tracep->declBit(c+1164,"ren", false,-1);
    tracep->declBit(c+190,"rdata_REG", false,-1);
    tracep->declBus(c+191,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+192,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+193,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+194,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+868,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1164,"R0_en", false,-1);
    tracep->declBit(c+1166,"R0_clk", false,-1);
    tracep->declBus(c+195,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1045,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1152,"W0_en", false,-1);
    tracep->declBit(c+1166,"W0_clk", false,-1);
    tracep->declBus(c+1023,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1024,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+152,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+774,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1251,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+775,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+776,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+777,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+778,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+153,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+779,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+780,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+781,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+782,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1087,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1100,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1101,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1102,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+154,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1060,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+759,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+760,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+761,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+762,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+763,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1138,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+155,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+156,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+157,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+158,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+159,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+152,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+774,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1251,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+775,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+776,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+777,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+778,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+153,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+779,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+780,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+781,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+782,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+1087,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+1100,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+1101,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+1102,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+154,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+1060,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+759,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+760,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+761,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+762,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+763,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1138,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+155,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+156,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+157,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+158,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+159,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+1153,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1046,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+79,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1019,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1020,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1143,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1032,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1023,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1025,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1144,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+160,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1101,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1103,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1165,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1094,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+856,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+857,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+858,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+859,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1138,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+155,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+156,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+157,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+158,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+162,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1150,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1041,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+79,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1042,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1204,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1043,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1023,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1151,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+181,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+182,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+183,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1162,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1205,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+856,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+867,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1163,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+184,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+185,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+186,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+187,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1047,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1048,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+196,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1206,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+856,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+869,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1207,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+197,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+198,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+199,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+78,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1018,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+79,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1019,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1020,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+80,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1022,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1023,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1025,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+472,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+81,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+82,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+83,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+84,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1197,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+856,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+857,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+858,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+859,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1198,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+85,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+86,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+87,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+88,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+89,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+160,"in_0_bvalid", false,-1);
    tracep->declBit(c+155,"in_0_rvalid", false,-1);
    tracep->declBit(c+1154,"in_0_wready", false,-1);
    tracep->declBit(c+1155,"in_0_awready", false,-1);
    tracep->declBit(c+1165,"in_0_arready", false,-1);
    tracep->declBit(c+1153,"anonIn_awready", false,-1);
    tracep->declBit(c+870,"requestARIO_0_0", false,-1);
    tracep->declBit(c+871,"requestARIO_0_1", false,-1);
    tracep->declBit(c+872,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1049,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1050,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1051,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+873,"arSel", false,-1, 15,0);
    tracep->declBus(c+200,"awSel", false,-1, 15,0);
    tracep->declBus(c+201,"rSel", false,-1, 15,0);
    tracep->declBus(c+1121,"bSel", false,-1, 15,0);
    tracep->declBit(c+202,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+203,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+204,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+205,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+206,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+207,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+208,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+209,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+210,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+211,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+212,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+213,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+214,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+215,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+216,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+217,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+218,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+219,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+220,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+221,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+222,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+223,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+224,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+225,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+226,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+227,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+228,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+229,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+230,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+231,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+232,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+233,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+234,"latched", false,-1);
    tracep->declBit(c+1052,"in_0_awvalid", false,-1);
    tracep->declBit(c+1053,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1054,"in_0_wvalid", false,-1);
    tracep->declBit(c+235,"idle_3", false,-1);
    tracep->declBit(c+236,"anyValid", false,-1);
    tracep->declBus(c+237,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+238,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+239,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+240,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+241,"prefixOR_1", false,-1);
    tracep->declBit(c+242,"winner_3_1", false,-1);
    tracep->declBit(c+243,"winner_3_2", false,-1);
    tracep->declBit(c+244,"state_3_0", false,-1);
    tracep->declBit(c+245,"state_3_1", false,-1);
    tracep->declBit(c+246,"state_3_2", false,-1);
    tracep->declBit(c+247,"muxState_3_0", false,-1);
    tracep->declBit(c+248,"muxState_3_1", false,-1);
    tracep->declBit(c+249,"muxState_3_2", false,-1);
    tracep->declBit(c+250,"idle_4", false,-1);
    tracep->declBit(c+251,"anyValid_1", false,-1);
    tracep->declBus(c+252,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+253,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+254,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+255,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+256,"winner_4_0", false,-1);
    tracep->declBit(c+257,"winner_4_2", false,-1);
    tracep->declBit(c+258,"state_4_0", false,-1);
    tracep->declBit(c+259,"state_4_2", false,-1);
    tracep->declBit(c+260,"muxState_4_0", false,-1);
    tracep->declBit(c+261,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+262,"io_enq_ready", false,-1);
    tracep->declBit(c+1053,"io_enq_valid", false,-1);
    tracep->declBus(c+1055,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1156,"io_deq_ready", false,-1);
    tracep->declBit(c+1056,"io_deq_valid", false,-1);
    tracep->declBus(c+1057,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+263,"wrap", false,-1);
    tracep->declBit(c+264,"wrap_1", false,-1);
    tracep->declBit(c+265,"maybe_full", false,-1);
    tracep->declBit(c+266,"ptr_match", false,-1);
    tracep->declBit(c+267,"empty", false,-1);
    tracep->declBit(c+268,"full", false,-1);
    tracep->declBit(c+1056,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1157,"do_deq", false,-1);
    tracep->declBit(c+1158,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+264,"R0_addr", false,-1);
    tracep->declBit(c+1250,"R0_en", false,-1);
    tracep->declBit(c+1166,"R0_clk", false,-1);
    tracep->declBus(c+269,"R0_data", false,-1, 2,0);
    tracep->declBit(c+263,"W0_addr", false,-1);
    tracep->declBit(c+1158,"W0_en", false,-1);
    tracep->declBit(c+1166,"W0_clk", false,-1);
    tracep->declBus(c+1055,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+270+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+1142,"auto_in_awready", false,-1);
    tracep->declBit(c+1030,"auto_in_awvalid", false,-1);
    tracep->declBus(c+79,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1019,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1020,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1031,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1143,"auto_in_wready", false,-1);
    tracep->declBit(c+1032,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1023,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1025,"auto_in_wlast", false,-1);
    tracep->declBit(c+1144,"auto_in_bready", false,-1);
    tracep->declBit(c+160,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1101,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1103,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1104,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1159,"auto_in_arready", false,-1);
    tracep->declBit(c+1093,"auto_in_arvalid", false,-1);
    tracep->declBus(c+856,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+857,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+858,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+859,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+862,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1138,"auto_in_rready", false,-1);
    tracep->declBit(c+155,"auto_in_rvalid", false,-1);
    tracep->declBus(c+156,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+157,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+158,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+161,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+162,"auto_in_rlast", false,-1);
    tracep->declBit(c+1153,"auto_out_awready", false,-1);
    tracep->declBit(c+1046,"auto_out_awvalid", false,-1);
    tracep->declBus(c+79,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1019,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1020,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1143,"auto_out_wready", false,-1);
    tracep->declBit(c+1032,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1023,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1025,"auto_out_wlast", false,-1);
    tracep->declBit(c+1144,"auto_out_bready", false,-1);
    tracep->declBit(c+160,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1101,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1103,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1165,"auto_out_arready", false,-1);
    tracep->declBit(c+1094,"auto_out_arvalid", false,-1);
    tracep->declBus(c+856,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+857,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+858,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+859,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1138,"auto_out_rready", false,-1);
    tracep->declBit(c+155,"auto_out_rvalid", false,-1);
    tracep->declBus(c+156,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+157,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+158,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+162,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+272,"io_enq_ready", false,-1);
    tracep->declBit(c+884,"io_enq_valid", false,-1);
    tracep->declBit(c+862,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+489,"io_deq_ready", false,-1);
    tracep->declBit(c+273,"io_deq_valid", false,-1);
    tracep->declBit(c+274,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+273,"full", false,-1);
    tracep->declBit(c+274,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+275,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+276,"io_enq_ready", false,-1);
    tracep->declBit(c+885,"io_enq_valid", false,-1);
    tracep->declBit(c+862,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+490,"io_deq_ready", false,-1);
    tracep->declBit(c+277,"io_deq_valid", false,-1);
    tracep->declBit(c+278,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+277,"full", false,-1);
    tracep->declBit(c+278,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+279,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+280,"io_enq_ready", false,-1);
    tracep->declBit(c+886,"io_enq_valid", false,-1);
    tracep->declBit(c+862,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+491,"io_deq_ready", false,-1);
    tracep->declBit(c+281,"io_deq_valid", false,-1);
    tracep->declBit(c+282,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+281,"full", false,-1);
    tracep->declBit(c+282,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+283,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+284,"io_enq_ready", false,-1);
    tracep->declBit(c+887,"io_enq_valid", false,-1);
    tracep->declBit(c+862,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+492,"io_deq_ready", false,-1);
    tracep->declBit(c+285,"io_deq_valid", false,-1);
    tracep->declBit(c+286,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+285,"full", false,-1);
    tracep->declBit(c+286,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+287,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+288,"io_enq_ready", false,-1);
    tracep->declBit(c+888,"io_enq_valid", false,-1);
    tracep->declBit(c+862,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+493,"io_deq_ready", false,-1);
    tracep->declBit(c+289,"io_deq_valid", false,-1);
    tracep->declBit(c+290,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+289,"full", false,-1);
    tracep->declBit(c+290,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+291,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+292,"io_enq_ready", false,-1);
    tracep->declBit(c+889,"io_enq_valid", false,-1);
    tracep->declBit(c+862,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+494,"io_deq_ready", false,-1);
    tracep->declBit(c+293,"io_deq_valid", false,-1);
    tracep->declBit(c+294,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+293,"full", false,-1);
    tracep->declBit(c+294,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+295,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+296,"io_enq_ready", false,-1);
    tracep->declBit(c+890,"io_enq_valid", false,-1);
    tracep->declBit(c+862,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+495,"io_deq_ready", false,-1);
    tracep->declBit(c+297,"io_deq_valid", false,-1);
    tracep->declBit(c+298,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+297,"full", false,-1);
    tracep->declBit(c+298,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+299,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+300,"io_enq_ready", false,-1);
    tracep->declBit(c+891,"io_enq_valid", false,-1);
    tracep->declBit(c+862,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+496,"io_deq_ready", false,-1);
    tracep->declBit(c+301,"io_deq_valid", false,-1);
    tracep->declBit(c+302,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+301,"full", false,-1);
    tracep->declBit(c+302,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+303,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+304,"io_enq_ready", false,-1);
    tracep->declBit(c+473,"io_enq_valid", false,-1);
    tracep->declBit(c+1031,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1122,"io_deq_ready", false,-1);
    tracep->declBit(c+305,"io_deq_valid", false,-1);
    tracep->declBit(c+306,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+305,"full", false,-1);
    tracep->declBit(c+306,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+307,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+308,"io_enq_ready", false,-1);
    tracep->declBit(c+474,"io_enq_valid", false,-1);
    tracep->declBit(c+1031,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1123,"io_deq_ready", false,-1);
    tracep->declBit(c+309,"io_deq_valid", false,-1);
    tracep->declBit(c+310,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+309,"full", false,-1);
    tracep->declBit(c+310,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+311,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+312,"io_enq_ready", false,-1);
    tracep->declBit(c+475,"io_enq_valid", false,-1);
    tracep->declBit(c+1031,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1124,"io_deq_ready", false,-1);
    tracep->declBit(c+313,"io_deq_valid", false,-1);
    tracep->declBit(c+314,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+313,"full", false,-1);
    tracep->declBit(c+314,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+315,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+316,"io_enq_ready", false,-1);
    tracep->declBit(c+476,"io_enq_valid", false,-1);
    tracep->declBit(c+1031,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1125,"io_deq_ready", false,-1);
    tracep->declBit(c+317,"io_deq_valid", false,-1);
    tracep->declBit(c+318,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+317,"full", false,-1);
    tracep->declBit(c+318,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+319,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+320,"io_enq_ready", false,-1);
    tracep->declBit(c+892,"io_enq_valid", false,-1);
    tracep->declBit(c+862,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+497,"io_deq_ready", false,-1);
    tracep->declBit(c+321,"io_deq_valid", false,-1);
    tracep->declBit(c+322,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+321,"full", false,-1);
    tracep->declBit(c+322,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+323,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+324,"io_enq_ready", false,-1);
    tracep->declBit(c+477,"io_enq_valid", false,-1);
    tracep->declBit(c+1031,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1126,"io_deq_ready", false,-1);
    tracep->declBit(c+325,"io_deq_valid", false,-1);
    tracep->declBit(c+326,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+325,"full", false,-1);
    tracep->declBit(c+326,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+327,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+328,"io_enq_ready", false,-1);
    tracep->declBit(c+478,"io_enq_valid", false,-1);
    tracep->declBit(c+1031,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1127,"io_deq_ready", false,-1);
    tracep->declBit(c+329,"io_deq_valid", false,-1);
    tracep->declBit(c+330,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+329,"full", false,-1);
    tracep->declBit(c+330,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+331,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+332,"io_enq_ready", false,-1);
    tracep->declBit(c+479,"io_enq_valid", false,-1);
    tracep->declBit(c+1031,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1128,"io_deq_ready", false,-1);
    tracep->declBit(c+333,"io_deq_valid", false,-1);
    tracep->declBit(c+334,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+333,"full", false,-1);
    tracep->declBit(c+334,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+335,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+336,"io_enq_ready", false,-1);
    tracep->declBit(c+480,"io_enq_valid", false,-1);
    tracep->declBit(c+1031,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1129,"io_deq_ready", false,-1);
    tracep->declBit(c+337,"io_deq_valid", false,-1);
    tracep->declBit(c+338,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+337,"full", false,-1);
    tracep->declBit(c+338,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+339,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+340,"io_enq_ready", false,-1);
    tracep->declBit(c+481,"io_enq_valid", false,-1);
    tracep->declBit(c+1031,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1130,"io_deq_ready", false,-1);
    tracep->declBit(c+341,"io_deq_valid", false,-1);
    tracep->declBit(c+342,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+341,"full", false,-1);
    tracep->declBit(c+342,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+343,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+344,"io_enq_ready", false,-1);
    tracep->declBit(c+482,"io_enq_valid", false,-1);
    tracep->declBit(c+1031,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1131,"io_deq_ready", false,-1);
    tracep->declBit(c+345,"io_deq_valid", false,-1);
    tracep->declBit(c+346,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+345,"full", false,-1);
    tracep->declBit(c+346,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+347,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+348,"io_enq_ready", false,-1);
    tracep->declBit(c+483,"io_enq_valid", false,-1);
    tracep->declBit(c+1031,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1132,"io_deq_ready", false,-1);
    tracep->declBit(c+349,"io_deq_valid", false,-1);
    tracep->declBit(c+350,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+349,"full", false,-1);
    tracep->declBit(c+350,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+351,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+352,"io_enq_ready", false,-1);
    tracep->declBit(c+484,"io_enq_valid", false,-1);
    tracep->declBit(c+1031,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1133,"io_deq_ready", false,-1);
    tracep->declBit(c+353,"io_deq_valid", false,-1);
    tracep->declBit(c+354,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+353,"full", false,-1);
    tracep->declBit(c+354,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+355,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+356,"io_enq_ready", false,-1);
    tracep->declBit(c+485,"io_enq_valid", false,-1);
    tracep->declBit(c+1031,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1134,"io_deq_ready", false,-1);
    tracep->declBit(c+357,"io_deq_valid", false,-1);
    tracep->declBit(c+358,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+357,"full", false,-1);
    tracep->declBit(c+358,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+359,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+360,"io_enq_ready", false,-1);
    tracep->declBit(c+486,"io_enq_valid", false,-1);
    tracep->declBit(c+1031,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1135,"io_deq_ready", false,-1);
    tracep->declBit(c+361,"io_deq_valid", false,-1);
    tracep->declBit(c+362,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+361,"full", false,-1);
    tracep->declBit(c+362,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+363,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+364,"io_enq_ready", false,-1);
    tracep->declBit(c+893,"io_enq_valid", false,-1);
    tracep->declBit(c+862,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+498,"io_deq_ready", false,-1);
    tracep->declBit(c+365,"io_deq_valid", false,-1);
    tracep->declBit(c+366,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+365,"full", false,-1);
    tracep->declBit(c+366,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+367,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+368,"io_enq_ready", false,-1);
    tracep->declBit(c+487,"io_enq_valid", false,-1);
    tracep->declBit(c+1031,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1136,"io_deq_ready", false,-1);
    tracep->declBit(c+369,"io_deq_valid", false,-1);
    tracep->declBit(c+370,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+369,"full", false,-1);
    tracep->declBit(c+370,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+371,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+372,"io_enq_ready", false,-1);
    tracep->declBit(c+488,"io_enq_valid", false,-1);
    tracep->declBit(c+1031,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1137,"io_deq_ready", false,-1);
    tracep->declBit(c+373,"io_deq_valid", false,-1);
    tracep->declBit(c+374,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+373,"full", false,-1);
    tracep->declBit(c+374,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+375,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+376,"io_enq_ready", false,-1);
    tracep->declBit(c+894,"io_enq_valid", false,-1);
    tracep->declBit(c+862,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+499,"io_deq_ready", false,-1);
    tracep->declBit(c+377,"io_deq_valid", false,-1);
    tracep->declBit(c+378,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+377,"full", false,-1);
    tracep->declBit(c+378,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+379,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+380,"io_enq_ready", false,-1);
    tracep->declBit(c+895,"io_enq_valid", false,-1);
    tracep->declBit(c+862,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+500,"io_deq_ready", false,-1);
    tracep->declBit(c+381,"io_deq_valid", false,-1);
    tracep->declBit(c+382,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+381,"full", false,-1);
    tracep->declBit(c+382,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+383,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+384,"io_enq_ready", false,-1);
    tracep->declBit(c+896,"io_enq_valid", false,-1);
    tracep->declBit(c+862,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+501,"io_deq_ready", false,-1);
    tracep->declBit(c+385,"io_deq_valid", false,-1);
    tracep->declBit(c+386,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+385,"full", false,-1);
    tracep->declBit(c+386,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+387,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+388,"io_enq_ready", false,-1);
    tracep->declBit(c+897,"io_enq_valid", false,-1);
    tracep->declBit(c+862,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+502,"io_deq_ready", false,-1);
    tracep->declBit(c+389,"io_deq_valid", false,-1);
    tracep->declBit(c+390,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+389,"full", false,-1);
    tracep->declBit(c+390,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+391,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+392,"io_enq_ready", false,-1);
    tracep->declBit(c+898,"io_enq_valid", false,-1);
    tracep->declBit(c+862,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+503,"io_deq_ready", false,-1);
    tracep->declBit(c+393,"io_deq_valid", false,-1);
    tracep->declBit(c+394,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+393,"full", false,-1);
    tracep->declBit(c+394,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+395,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+396,"io_enq_ready", false,-1);
    tracep->declBit(c+899,"io_enq_valid", false,-1);
    tracep->declBit(c+862,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+504,"io_deq_ready", false,-1);
    tracep->declBit(c+397,"io_deq_valid", false,-1);
    tracep->declBit(c+398,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+397,"full", false,-1);
    tracep->declBit(c+398,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+399,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1208,"reset", false,-1);
    tracep->declBit(c+152,"auto_master_out_awready", false,-1);
    tracep->declBit(c+774,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1251,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+775,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+776,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+777,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+778,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+153,"auto_master_out_wready", false,-1);
    tracep->declBit(c+779,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+780,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+781,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+782,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1087,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1100,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1101,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1102,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+154,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1060,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+759,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+760,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+761,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+762,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+763,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1138,"auto_master_out_rready", false,-1);
    tracep->declBit(c+155,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+156,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+157,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+158,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+159,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1208,"reset", false,-1);
    tracep->declBit(c+1240,"io_interrupt", false,-1);
    tracep->declBit(c+774,"io_master_awvalid", false,-1);
    tracep->declBus(c+775,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1251,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+776,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+777,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+778,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+152,"io_master_awready", false,-1);
    tracep->declBit(c+779,"io_master_wvalid", false,-1);
    tracep->declBus(c+780,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+781,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+782,"io_master_wlast", false,-1);
    tracep->declBit(c+153,"io_master_wready", false,-1);
    tracep->declBit(c+1087,"io_master_bready", false,-1);
    tracep->declBit(c+1100,"io_master_bvalid", false,-1);
    tracep->declBus(c+1102,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1101,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+1060,"io_master_arvalid", false,-1);
    tracep->declBus(c+760,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+759,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+761,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+762,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+763,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+154,"io_master_arready", false,-1);
    tracep->declBit(c+1138,"io_master_rready", false,-1);
    tracep->declBit(c+155,"io_master_rvalid", false,-1);
    tracep->declBus(c+157,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+158,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+159,"io_master_rlast", false,-1);
    tracep->declBus(c+156,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1240,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1252,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1253,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1254,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1255,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1256,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1257,"io_slave_awready", false,-1);
    tracep->declBit(c+1240,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1252,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1253,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1240,"io_slave_wlast", false,-1);
    tracep->declBit(c+1258,"io_slave_wready", false,-1);
    tracep->declBit(c+1240,"io_slave_bready", false,-1);
    tracep->declBit(c+1259,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1260,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1261,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1240,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1252,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1253,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1254,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1255,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1256,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1262,"io_slave_arready", false,-1);
    tracep->declBit(c+1240,"io_slave_rready", false,-1);
    tracep->declBit(c+1263,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1264,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1265,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1266,"io_slave_rlast", false,-1);
    tracep->declBus(c+1267,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+743,"top_pc", false,-1, 31,0);
    tracep->declBus(c+900,"top_inst", false,-1, 31,0);
    tracep->declBit(c+901,"top_valid", false,-1);
    tracep->declBit(c+902,"top_ready", false,-1);
    tracep->declBit(c+10,"inst_done", false,-1);
    tracep->declBus(c+743,"next_pc", false,-1, 31,0);
    tracep->declBit(c+1268,"wb_done", false,-1);
    tracep->declBit(c+11,"reg_wresp", false,-1);
    tracep->declBit(c+744,"wb_valid", false,-1);
    tracep->declBus(c+900,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+1209,"if_id_pc", false,-1, 31,0);
    tracep->declBit(c+902,"id_if_ready", false,-1);
    tracep->declBit(c+901,"if_id_valid", false,-1);
    tracep->declBus(c+903,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+904,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+905,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+906,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+907,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+908,"id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+905,"id_ex_rs1", false,-1, 31,0);
    tracep->declBus(c+906,"id_ex_rs2", false,-1, 31,0);
    tracep->declBus(c+909,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+910,"id_ex_imm", false,-1, 31,0);
    tracep->declBus(c+907,"id_ex_a5", false,-1, 31,0);
    tracep->declBus(c+911,"id_ex_ctrl", false,-1, 20,0);
    tracep->declBit(c+912,"id_ex_valid", false,-1);
    tracep->declBit(c+913,"ex_id_ready", false,-1);
    tracep->declBus(c+914,"ex_me_rd", false,-1, 4,0);
    tracep->declBus(c+1210,"csr_data", false,-1, 31,0);
    tracep->declBus(c+915,"ex_me_ctrl", false,-1, 20,0);
    tracep->declBus(c+916,"ex_me_pc", false,-1, 31,0);
    tracep->declBus(c+917,"ex_me_imm", false,-1, 31,0);
    tracep->declBus(c+1211,"ex_me_npc", false,-1, 31,0);
    tracep->declBus(c+918,"ex_me_rs2", false,-1, 31,0);
    tracep->declBus(c+919,"ex_me_alu", false,-1, 31,0);
    tracep->declBit(c+920,"ex_me_valid", false,-1);
    tracep->declBit(c+921,"me_ex_ready", false,-1);
    tracep->declBus(c+922,"me_wb_rd", false,-1, 4,0);
    tracep->declBus(c+923,"me_wb_ctrl", false,-1, 20,0);
    tracep->declBus(c+924,"me_wb_rdata", false,-1, 31,0);
    tracep->declBus(c+925,"me_wb_pc", false,-1, 31,0);
    tracep->declBus(c+926,"me_wb_imm", false,-1, 31,0);
    tracep->declBus(c+927,"me_wb_alu", false,-1, 31,0);
    tracep->declBus(c+928,"me_wb_npc", false,-1, 31,0);
    tracep->declBit(c+929,"me_wb_valid", false,-1);
    tracep->declBit(c+930,"wb_me_ready", false,-1);
    tracep->declBit(c+745,"reg_wen", false,-1);
    tracep->declBus(c+12,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+746,"reg_waddr", false,-1, 4,0);
    tracep->declBit(c+24,"if_axi4_arvalid", false,-1);
    tracep->declBit(c+874,"if_axi4_arready", false,-1);
    tracep->declBus(c+25,"if_axi4_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"if_axi4_arid", false,-1, 3,0);
    tracep->declBus(c+26,"if_axi4_arlen", false,-1, 7,0);
    tracep->declBus(c+27,"if_axi4_arsize", false,-1, 2,0);
    tracep->declBus(c+28,"if_axi4_arburst", false,-1, 1,0);
    tracep->declBit(c+875,"if_axi4_rvalid", false,-1);
    tracep->declBit(c+783,"if_axi4_rready", false,-1);
    tracep->declBus(c+876,"if_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+877,"if_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+878,"if_axi4_rlast", false,-1);
    tracep->declBus(c+879,"if_axi4_rid", false,-1, 3,0);
    tracep->declBit(c+784,"ls_axi4_arvalid", false,-1);
    tracep->declBit(c+880,"ls_axi4_arready", false,-1);
    tracep->declBus(c+29,"ls_axi4_araddr", false,-1, 31,0);
    tracep->declBus(c+1270,"ls_axi4_arid", false,-1, 3,0);
    tracep->declBus(c+26,"ls_axi4_arlen", false,-1, 7,0);
    tracep->declBus(c+30,"ls_axi4_arsize", false,-1, 2,0);
    tracep->declBus(c+28,"ls_axi4_arburst", false,-1, 1,0);
    tracep->declBit(c+1095,"ls_axi4_rvalid", false,-1);
    tracep->declBit(c+1088,"ls_axi4_rready", false,-1);
    tracep->declBus(c+1096,"ls_axi4_rdata", false,-1, 31,0);
    tracep->declBus(c+1097,"ls_axi4_rresp", false,-1, 1,0);
    tracep->declBit(c+881,"ls_axi4_rlast", false,-1);
    tracep->declBus(c+882,"ls_axi4_rid", false,-1, 3,0);
    tracep->declBit(c+774,"ls_axi4_awvalid", false,-1);
    tracep->declBit(c+152,"ls_axi4_awready", false,-1);
    tracep->declBus(c+775,"ls_axi4_awaddr", false,-1, 31,0);
    tracep->declBus(c+1251,"ls_axi4_awid", false,-1, 3,0);
    tracep->declBus(c+776,"ls_axi4_awlen", false,-1, 7,0);
    tracep->declBus(c+777,"ls_axi4_awsize", false,-1, 2,0);
    tracep->declBus(c+778,"ls_axi4_awburst", false,-1, 1,0);
    tracep->declBit(c+779,"ls_axi4_wvalid", false,-1);
    tracep->declBit(c+153,"ls_axi4_wready", false,-1);
    tracep->declBus(c+780,"ls_axi4_wdata", false,-1, 31,0);
    tracep->declBus(c+781,"ls_axi4_wstrb", false,-1, 3,0);
    tracep->declBit(c+782,"ls_axi4_wlast", false,-1);
    tracep->declBit(c+1100,"ls_axi4_bvalid", false,-1);
    tracep->declBit(c+1087,"ls_axi4_bready", false,-1);
    tracep->declBus(c+1102,"ls_axi4_bresp", false,-1, 1,0);
    tracep->declBus(c+1101,"ls_axi4_bid", false,-1, 3,0);
    tracep->declBus(c+764,"rtc_araddr", false,-1, 31,0);
    tracep->declBit(c+1061,"rtc_arvalid", false,-1);
    tracep->declBus(c+765,"rtc_arid", false,-1, 3,0);
    tracep->declBus(c+766,"rtc_arlen", false,-1, 7,0);
    tracep->declBus(c+767,"rtc_arsize", false,-1, 2,0);
    tracep->declBus(c+768,"rtc_arburst", false,-1, 1,0);
    tracep->declBit(c+13,"rtc_arready", false,-1);
    tracep->declBus(c+14,"rtc_rdata", false,-1, 31,0);
    tracep->declBit(c+15,"rtc_rvalid", false,-1);
    tracep->declBus(c+16,"rtc_rresp", false,-1, 1,0);
    tracep->declBit(c+17,"rtc_rlast", false,-1);
    tracep->declBus(c+18,"rtc_rid", false,-1, 3,0);
    tracep->declBit(c+1139,"rtc_rready", false,-1);
    tracep->declBit(c+747,"if_req", false,-1);
    tracep->declBus(c+748,"if_addr", false,-1, 31,0);
    tracep->declBus(c+785,"biu_rdata_if", false,-1, 31,0);
    tracep->declBit(c+786,"biu_rresp_if", false,-1);
    tracep->declBit(c+931,"lsu_req", false,-1);
    tracep->declBit(c+932,"lsu_wwe", false,-1);
    tracep->declBit(c+933,"lsu_rwe", false,-1);
    tracep->declBus(c+934,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+935,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+936,"lsu_strb", false,-1, 3,0);
    tracep->declBus(c+937,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+938,"lsu_awsize", false,-1, 2,0);
    tracep->declBit(c+1089,"biu_rresp_ls", false,-1);
    tracep->declBit(c+1090,"biu_wresp_ls", false,-1);
    tracep->declBus(c+1091,"biu_rdata_ls", false,-1, 31,0);
    tracep->declBit(c+939,"is_jar_call", false,-1);
    tracep->declBit(c+940,"is_jalr_call", false,-1);
    tracep->declBit(c+941,"is_jalr_ret", false,-1);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBus(c+1271,"RTC_ADDR", false,-1, 31,0);
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1208,"reset", false,-1);
    tracep->declBit(c+24,"if_arvalid", false,-1);
    tracep->declBit(c+874,"if_arready", false,-1);
    tracep->declBus(c+25,"if_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"if_arid", false,-1, 3,0);
    tracep->declBus(c+26,"if_arlen", false,-1, 7,0);
    tracep->declBus(c+27,"if_arsize", false,-1, 2,0);
    tracep->declBus(c+28,"if_arburst", false,-1, 1,0);
    tracep->declBit(c+875,"if_rvalid", false,-1);
    tracep->declBit(c+783,"if_rready", false,-1);
    tracep->declBus(c+876,"if_rdata", false,-1, 31,0);
    tracep->declBus(c+877,"if_rresp", false,-1, 1,0);
    tracep->declBus(c+879,"if_rid", false,-1, 3,0);
    tracep->declBit(c+878,"if_rlast", false,-1);
    tracep->declBit(c+784,"ls_arvalid", false,-1);
    tracep->declBit(c+880,"ls_arready", false,-1);
    tracep->declBus(c+29,"ls_araddr", false,-1, 31,0);
    tracep->declBus(c+1270,"ls_arid", false,-1, 3,0);
    tracep->declBus(c+26,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+30,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+28,"ls_arburst", false,-1, 1,0);
    tracep->declBit(c+1095,"ls_rvalid", false,-1);
    tracep->declBit(c+1088,"ls_rready", false,-1);
    tracep->declBus(c+1096,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+1097,"ls_rresp", false,-1, 1,0);
    tracep->declBus(c+882,"ls_rid", false,-1, 3,0);
    tracep->declBit(c+881,"ls_rlast", false,-1);
    tracep->declBit(c+774,"ls_awvalid", false,-1);
    tracep->declBit(c+152,"ls_awready", false,-1);
    tracep->declBus(c+775,"ls_awaddr", false,-1, 31,0);
    tracep->declBus(c+1251,"ls_awid", false,-1, 3,0);
    tracep->declBus(c+776,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+777,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+778,"ls_awburst", false,-1, 1,0);
    tracep->declBit(c+779,"ls_wvalid", false,-1);
    tracep->declBit(c+153,"ls_wready", false,-1);
    tracep->declBus(c+780,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+781,"ls_wstrb", false,-1, 3,0);
    tracep->declBit(c+782,"ls_wlast", false,-1);
    tracep->declBit(c+1100,"ls_bvalid", false,-1);
    tracep->declBit(c+1087,"ls_bready", false,-1);
    tracep->declBus(c+1102,"ls_bresp", false,-1, 1,0);
    tracep->declBus(c+1101,"ls_bid", false,-1, 3,0);
    tracep->declBus(c+764,"rtc_araddr", false,-1, 31,0);
    tracep->declBit(c+1061,"rtc_arvalid", false,-1);
    tracep->declBus(c+765,"rtc_arid", false,-1, 3,0);
    tracep->declBus(c+766,"rtc_arlen", false,-1, 7,0);
    tracep->declBus(c+767,"rtc_arsize", false,-1, 2,0);
    tracep->declBus(c+768,"rtc_arburst", false,-1, 1,0);
    tracep->declBit(c+13,"rtc_arready", false,-1);
    tracep->declBus(c+14,"rtc_rdata", false,-1, 31,0);
    tracep->declBit(c+15,"rtc_rvalid", false,-1);
    tracep->declBus(c+16,"rtc_rresp", false,-1, 1,0);
    tracep->declBit(c+17,"rtc_rlast", false,-1);
    tracep->declBus(c+18,"rtc_rid", false,-1, 3,0);
    tracep->declBit(c+1139,"rtc_rready", false,-1);
    tracep->declBus(c+775,"soc_awaddr", false,-1, 31,0);
    tracep->declBit(c+774,"soc_awvalid", false,-1);
    tracep->declBus(c+1251,"soc_awid", false,-1, 3,0);
    tracep->declBus(c+776,"soc_awlen", false,-1, 7,0);
    tracep->declBus(c+777,"soc_awsize", false,-1, 2,0);
    tracep->declBus(c+778,"soc_awburst", false,-1, 1,0);
    tracep->declBit(c+152,"soc_awready", false,-1);
    tracep->declBus(c+780,"soc_wdata", false,-1, 31,0);
    tracep->declBus(c+781,"soc_wstrb", false,-1, 3,0);
    tracep->declBit(c+779,"soc_wvalid", false,-1);
    tracep->declBit(c+782,"soc_wlast", false,-1);
    tracep->declBit(c+153,"soc_wready", false,-1);
    tracep->declBus(c+1102,"soc_bresp", false,-1, 1,0);
    tracep->declBit(c+1100,"soc_bvalid", false,-1);
    tracep->declBus(c+1101,"soc_bid", false,-1, 3,0);
    tracep->declBit(c+1087,"soc_bready", false,-1);
    tracep->declBus(c+760,"soc_araddr", false,-1, 31,0);
    tracep->declBit(c+1060,"soc_arvalid", false,-1);
    tracep->declBus(c+759,"soc_arid", false,-1, 3,0);
    tracep->declBus(c+761,"soc_arlen", false,-1, 7,0);
    tracep->declBus(c+762,"soc_arsize", false,-1, 2,0);
    tracep->declBus(c+763,"soc_arburst", false,-1, 1,0);
    tracep->declBit(c+154,"soc_arready", false,-1);
    tracep->declBus(c+157,"soc_rdata", false,-1, 31,0);
    tracep->declBit(c+155,"soc_rvalid", false,-1);
    tracep->declBus(c+158,"soc_rresp", false,-1, 1,0);
    tracep->declBit(c+159,"soc_rlast", false,-1);
    tracep->declBus(c+156,"soc_rid", false,-1, 3,0);
    tracep->declBit(c+1138,"soc_rready", false,-1);
    tracep->declBus(c+1255,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1239,"IF_MASTER", false,-1, 2,0);
    tracep->declBus(c+1272,"LS_READ", false,-1, 2,0);
    tracep->declBus(c+19,"state", false,-1, 2,0);
    tracep->declBus(c+1212,"next_state", false,-1, 2,0);
    tracep->declBit(c+769,"is_rtc", false,-1);
    tracep->declBit(c+770,"is_soc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint ");
    tracep->declBus(c+1271,"RTC_ADDR", false,-1, 31,0);
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1208,"reset", false,-1);
    tracep->declBus(c+764,"S_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+1061,"S_AXI_ARVALID", false,-1);
    tracep->declBus(c+765,"S_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+766,"S_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+767,"S_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+768,"S_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+13,"S_AXI_ARREADY", false,-1);
    tracep->declBus(c+14,"S_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+16,"S_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+15,"S_AXI_RVALID", false,-1);
    tracep->declBus(c+18,"S_AXI_RID", false,-1, 3,0);
    tracep->declBit(c+17,"S_AXI_RLAST", false,-1);
    tracep->declBit(c+1139,"S_AXI_RREADY", false,-1);
    tracep->declBit(c+1062,"AR_active", false,-1);
    tracep->declBit(c+1140,"R_active", false,-1);
    tracep->declQuad(c+20,"mtime", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1208,"reset", false,-1);
    tracep->declBit(c+912,"in_valid", false,-1);
    tracep->declBus(c+907,"in_a5", false,-1, 31,0);
    tracep->declBus(c+905,"in_rs1_data", false,-1, 31,0);
    tracep->declBus(c+906,"in_rs2_data", false,-1, 31,0);
    tracep->declBus(c+911,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+910,"in_imm", false,-1, 31,0);
    tracep->declBus(c+908,"in_rd", false,-1, 4,0);
    tracep->declBus(c+909,"in_pc", false,-1, 31,0);
    tracep->declBit(c+913,"in_ready", false,-1);
    tracep->declBit(c+920,"out_valid", false,-1);
    tracep->declBus(c+1211,"out_next_pc", false,-1, 31,0);
    tracep->declBus(c+919,"out_Alu_Result", false,-1, 31,0);
    tracep->declBus(c+918,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+915,"out_ctrl", false,-1, 20,0);
    tracep->declBus(c+1210,"csr_data", false,-1, 31,0);
    tracep->declBus(c+914,"rd_out", false,-1, 4,0);
    tracep->declBus(c+917,"imm_out", false,-1, 31,0);
    tracep->declBus(c+916,"pc_out", false,-1, 31,0);
    tracep->declBit(c+921,"out_ready", false,-1);
    tracep->declBus(c+1273,"IDLE", false,-1, 31,0);
    tracep->declBus(c+1274,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+1275,"WAIT", false,-1, 31,0);
    tracep->declBus(c+942,"state", false,-1, 1,0);
    tracep->declBus(c+914,"rd", false,-1, 4,0);
    tracep->declBus(c+943,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+918,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+916,"pc", false,-1, 31,0);
    tracep->declBus(c+917,"imm", false,-1, 31,0);
    tracep->declBus(c+944,"reg_a5", false,-1, 31,0);
    tracep->declBus(c+915,"ctrl", false,-1, 20,0);
    tracep->declBus(c+945,"B", false,-1, 31,0);
    tracep->declBus(c+946,"AluOp", false,-1, 3,0);
    tracep->declBit(c+947,"ALUSrc", false,-1);
    tracep->declBus(c+948,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+949,"is_ecall", false,-1);
    tracep->declBit(c+950,"is_mret", false,-1);
    tracep->declBit(c+951,"Branch", false,-1);
    tracep->declBus(c+952,"Jump", false,-1, 1,0);
    tracep->declBus(c+919,"Alu_Result", false,-1, 31,0);
    tracep->declBus(c+1211,"next_pc", false,-1, 31,0);
    tracep->declBus(c+1213,"mtvec", false,-1, 31,0);
    tracep->declBus(c+1214,"mepc", false,-1, 31,0);
    tracep->pushNamePrefix("csr_regfile_init ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1208,"reset", false,-1);
    tracep->declBus(c+916,"pc", false,-1, 31,0);
    tracep->declBus(c+944,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+949,"is_ecall", false,-1);
    tracep->declBit(c+950,"is_mret", false,-1);
    tracep->declBus(c+948,"csr_wen", false,-1, 1,0);
    tracep->declBus(c+953,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+943,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+1210,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+1213,"mtvec_out", false,-1, 31,0);
    tracep->declBus(c+1214,"mepc_out", false,-1, 31,0);
    tracep->declBus(c+819,"mstatus", false,-1, 31,0);
    tracep->declBus(c+1213,"mtvec", false,-1, 31,0);
    tracep->declBus(c+1214,"mepc", false,-1, 31,0);
    tracep->declBus(c+820,"mcause", false,-1, 31,0);
    tracep->declBus(c+1276,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+1277,"marchid", false,-1, 31,0);
    tracep->declBus(c+1210,"rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1278,"MSTATUS_MPP_MASK", false,-1, 31,0);
    tracep->declBus(c+1279,"MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+1280,"MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1208,"reset", false,-1);
    tracep->declBit(c+901,"in_valid", false,-1);
    tracep->declBus(c+900,"in_inst", false,-1, 31,0);
    tracep->declBus(c+1209,"in_pc", false,-1, 31,0);
    tracep->declBit(c+902,"in_ready", false,-1);
    tracep->declBus(c+903,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+904,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+905,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+906,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+907,"in_reg_a5", false,-1, 31,0);
    tracep->declBit(c+912,"out_valid", false,-1);
    tracep->declBus(c+909,"pc_out", false,-1, 31,0);
    tracep->declBus(c+905,"out_rs1_data", false,-1, 31,0);
    tracep->declBus(c+906,"out_rs2_data", false,-1, 31,0);
    tracep->declBus(c+911,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+910,"imm_out", false,-1, 31,0);
    tracep->declBus(c+907,"reg_a5_out", false,-1, 31,0);
    tracep->declBus(c+908,"rd_out", false,-1, 4,0);
    tracep->declBit(c+913,"out_ready", false,-1);
    tracep->declBus(c+1273,"IDLE", false,-1, 31,0);
    tracep->declBus(c+1274,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+1275,"WAIT", false,-1, 31,0);
    tracep->declBus(c+954,"state", false,-1, 1,0);
    tracep->declBus(c+955,"inst", false,-1, 31,0);
    tracep->declBus(c+909,"pc", false,-1, 31,0);
    tracep->declBit(c+956,"invalid", false,-1);
    tracep->declBit(c+957,"is_ebreak", false,-1);
    tracep->declBus(c+958,"opcode", false,-1, 6,0);
    tracep->declBus(c+959,"func3", false,-1, 2,0);
    tracep->declBus(c+960,"func7", false,-1, 6,0);
    tracep->declBus(c+910,"imm", false,-1, 31,0);
    tracep->declBus(c+961,"immI", false,-1, 31,0);
    tracep->declBus(c+962,"immJ", false,-1, 31,0);
    tracep->declBus(c+963,"immU", false,-1, 31,0);
    tracep->declBus(c+964,"immS", false,-1, 31,0);
    tracep->declBus(c+965,"immB", false,-1, 31,0);
    tracep->declBus(c+908,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+966,"MemWrite", false,-1);
    tracep->declBit(c+967,"MemRead", false,-1);
    tracep->declBus(c+968,"MemOp", false,-1, 2,0);
    tracep->declBus(c+969,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+970,"RegWrite", false,-1);
    tracep->declBit(c+971,"Branch", false,-1);
    tracep->declBus(c+972,"Jump", false,-1, 1,0);
    tracep->declBit(c+973,"ALUSrc", false,-1);
    tracep->declBus(c+974,"AluOp", false,-1, 3,0);
    tracep->declBus(c+975,"csr_wen", false,-1, 1,0);
    tracep->declBit(c+976,"is_ecall", false,-1);
    tracep->declBit(c+977,"is_mret", false,-1);
    tracep->declBus(c+911,"ctrl_bus", false,-1, 20,0);
    tracep->declBus(c+1281,"OP_LOAD", false,-1, 6,0);
    tracep->declBus(c+1282,"OP_STORE", false,-1, 6,0);
    tracep->declBus(c+1283,"OP_BRANCH", false,-1, 6,0);
    tracep->declBus(c+1284,"OP_JAL", false,-1, 6,0);
    tracep->declBus(c+1285,"OP_JALR", false,-1, 6,0);
    tracep->declBus(c+1286,"OP_OP_IMM", false,-1, 6,0);
    tracep->declBus(c+1287,"OP_OP", false,-1, 6,0);
    tracep->declBus(c+1288,"OP_LUI", false,-1, 6,0);
    tracep->declBus(c+1289,"OP_AUIPC", false,-1, 6,0);
    tracep->declBus(c+1290,"OP_SYSTEM", false,-1, 6,0);
    tracep->declBus(c+1255,"F3_ADD_SUB", false,-1, 2,0);
    tracep->declBus(c+1239,"F3_SLL", false,-1, 2,0);
    tracep->declBus(c+1272,"F3_SLT", false,-1, 2,0);
    tracep->declBus(c+1291,"F3_SLTU", false,-1, 2,0);
    tracep->declBus(c+1292,"F3_XOR", false,-1, 2,0);
    tracep->declBus(c+1293,"F3_SR", false,-1, 2,0);
    tracep->declBus(c+1294,"F3_OR", false,-1, 2,0);
    tracep->declBus(c+1295,"F3_AND", false,-1, 2,0);
    tracep->declBus(c+1296,"F7_SUB", false,-1, 6,0);
    tracep->declBus(c+1296,"F7_SRA", false,-1, 6,0);
    tracep->declBus(c+1297,"F7_DEFAULT", false,-1, 6,0);
    tracep->declBus(c+1253,"ALU_ADD", false,-1, 3,0);
    tracep->declBus(c+1298,"ALU_SLL", false,-1, 3,0);
    tracep->declBus(c+1299,"ALU_SLT", false,-1, 3,0);
    tracep->declBus(c+1300,"ALU_SLTU", false,-1, 3,0);
    tracep->declBus(c+1301,"ALU_XOR", false,-1, 3,0);
    tracep->declBus(c+1302,"ALU_SRA", false,-1, 3,0);
    tracep->declBus(c+1303,"ALU_SRL", false,-1, 3,0);
    tracep->declBus(c+1304,"ALU_OR", false,-1, 3,0);
    tracep->declBus(c+1305,"ALU_AND", false,-1, 3,0);
    tracep->declBus(c+1306,"ALU_SUB", false,-1, 3,0);
    tracep->declBus(c+1307,"ALU_PCADD", false,-1, 3,0);
    tracep->declBus(c+1256,"JUMP_NONE", false,-1, 1,0);
    tracep->declBus(c+1308,"JUMP_JAL", false,-1, 1,0);
    tracep->declBus(c+1309,"JUMP_JALR", false,-1, 1,0);
    tracep->declBus(c+1255,"MTR_ALU", false,-1, 2,0);
    tracep->declBus(c+1239,"MTR_MEM", false,-1, 2,0);
    tracep->declBus(c+1272,"MTR_PCP4", false,-1, 2,0);
    tracep->declBus(c+1291,"MTR_IMM", false,-1, 2,0);
    tracep->declBus(c+1292,"MTR_CSR", false,-1, 2,0);
    tracep->declBus(c+1255,"OP_LW", false,-1, 2,0);
    tracep->declBus(c+1239,"OP_LH", false,-1, 2,0);
    tracep->declBus(c+1272,"OP_LB", false,-1, 2,0);
    tracep->declBus(c+1291,"OP_LHU", false,-1, 2,0);
    tracep->declBus(c+1292,"OP_LBU", false,-1, 2,0);
    tracep->declBus(c+1293,"OP_SW", false,-1, 2,0);
    tracep->declBus(c+1294,"OP_SH", false,-1, 2,0);
    tracep->declBus(c+1295,"OP_SB", false,-1, 2,0);
    tracep->declBus(c+1256,"CSR_NONE", false,-1, 1,0);
    tracep->declBus(c+1308,"CSR_WRITE", false,-1, 1,0);
    tracep->declBus(c+1309,"CSR_SET", false,-1, 1,0);
    tracep->declBus(c+1310,"ECALL_CODE", false,-1, 11,0);
    tracep->declBus(c+1311,"EBREAK_CODE", false,-1, 11,0);
    tracep->declBus(c+1312,"MRET_CODE", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifbiu ");
    tracep->declBus(c+1313,"MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+1314,"LFSR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1208,"reset", false,-1);
    tracep->declBit(c+747,"if_req", false,-1);
    tracep->declBus(c+748,"if_addr", false,-1, 31,0);
    tracep->declBus(c+785,"biu_rdata", false,-1, 31,0);
    tracep->declBit(c+786,"biu_rresp", false,-1);
    tracep->declBus(c+25,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+24,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+874,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+1269,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+28,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+26,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+27,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+876,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+877,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+875,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+783,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+879,"M_AXI_RID", false,-1, 3,0);
    tracep->declBit(c+878,"M_AXI_RLAST", false,-1);
    tracep->declBit(c+1215,"AR_active", false,-1);
    tracep->declBit(c+1216,"R_active", false,-1);
    tracep->declBus(c+31,"read_cnt", false,-1, 7,0);
    tracep->declBit(c+32,"read_pending", false,-1);
    tracep->declBus(c+33,"lfsr", false,-1, 7,0);
    tracep->declBit(c+34,"lfsr_feedback", false,-1);
    tracep->declBus(c+1254,"rand_delay", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1208,"reset", false,-1);
    tracep->declBit(c+744,"wb_done", false,-1);
    tracep->declBus(c+743,"next_pc", false,-1, 31,0);
    tracep->declBit(c+786,"biu_rresp", false,-1);
    tracep->declBus(c+785,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+748,"if_addr", false,-1, 31,0);
    tracep->declBit(c+747,"if_req", false,-1);
    tracep->declBit(c+901,"out_valid", false,-1);
    tracep->declBus(c+900,"inst", false,-1, 31,0);
    tracep->declBus(c+1209,"pc", false,-1, 31,0);
    tracep->declBit(c+902,"out_ready", false,-1);
    tracep->declBus(c+749,"current_pc", false,-1, 31,0);
    tracep->declBus(c+750,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+751,"state", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsbiu ");
    tracep->declBus(c+1313,"READ_MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+1313,"WRITE_MAX_DELAY", false,-1, 31,0);
    tracep->declBus(c+1314,"LFSR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1208,"reset", false,-1);
    tracep->declBus(c+934,"lsu_addr", false,-1, 31,0);
    tracep->declBit(c+932,"lsu_wwe", false,-1);
    tracep->declBit(c+933,"lsu_rwe", false,-1);
    tracep->declBus(c+935,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+936,"lsu_strb", false,-1, 3,0);
    tracep->declBit(c+931,"lsu_req", false,-1);
    tracep->declBus(c+937,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+938,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1091,"biu_rdata", false,-1, 31,0);
    tracep->declBit(c+1090,"biu_wresp", false,-1);
    tracep->declBit(c+1089,"biu_rresp", false,-1);
    tracep->declBus(c+29,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBit(c+784,"M_AXI_ARVALID", false,-1);
    tracep->declBit(c+880,"M_AXI_ARREADY", false,-1);
    tracep->declBus(c+1270,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+28,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+26,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+30,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1096,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1097,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1095,"M_AXI_RVALID", false,-1);
    tracep->declBit(c+1088,"M_AXI_RREADY", false,-1);
    tracep->declBus(c+882,"M_AXI_RID", false,-1, 3,0);
    tracep->declBit(c+881,"M_AXI_RLAST", false,-1);
    tracep->declBus(c+775,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBit(c+774,"M_AXI_AWVALID", false,-1);
    tracep->declBit(c+152,"M_AXI_AWREADY", false,-1);
    tracep->declBus(c+1251,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+778,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+776,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+777,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+780,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+781,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+779,"M_AXI_WVALID", false,-1);
    tracep->declBit(c+153,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+782,"M_AXI_WLAST", false,-1);
    tracep->declBus(c+1102,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1100,"M_AXI_BVALID", false,-1);
    tracep->declBit(c+1087,"M_AXI_BREADY", false,-1);
    tracep->declBus(c+1101,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1315,"UART_ADDR_LOW", false,-1, 31,0);
    tracep->declBus(c+1316,"UART_ADDR_HIGH", false,-1, 31,0);
    tracep->declBit(c+1058,"AW_active", false,-1);
    tracep->declBit(c+1059,"W_active", false,-1);
    tracep->declBit(c+1217,"B_active", false,-1);
    tracep->declBit(c+1218,"AR_active", false,-1);
    tracep->declBit(c+1219,"R_active", false,-1);
    tracep->declBus(c+787,"strb_reg", false,-1, 3,0);
    tracep->declBus(c+788,"awsize_reg", false,-1, 2,0);
    tracep->declBus(c+35,"arsize_reg", false,-1, 2,0);
    tracep->declBus(c+789,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+36,"read_cnt", false,-1, 7,0);
    tracep->declBit(c+37,"read_pending", false,-1);
    tracep->declBus(c+790,"write_addr_cnt", false,-1, 7,0);
    tracep->declBit(c+791,"write_addr_pending", false,-1);
    tracep->declBus(c+792,"write_data_cnt", false,-1, 7,0);
    tracep->declBit(c+793,"write_data_pending", false,-1);
    tracep->declBit(c+978,"is_uart_addr", false,-1);
    tracep->declBus(c+38,"lfsr_addr", false,-1, 7,0);
    tracep->declBus(c+39,"lfsr_data", false,-1, 7,0);
    tracep->declBit(c+40,"lfsrr_feedback", false,-1);
    tracep->declBit(c+41,"lfsrw_feedback", false,-1);
    tracep->declBus(c+1254,"read_rand_delay", false,-1, 7,0);
    tracep->declBus(c+1254,"write_rand_delay", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1208,"reset", false,-1);
    tracep->declBit(c+920,"in_valid", false,-1);
    tracep->declBus(c+915,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+914,"in_rd", false,-1, 4,0);
    tracep->declBus(c+917,"in_imm", false,-1, 31,0);
    tracep->declBus(c+1211,"in_npc", false,-1, 31,0);
    tracep->declBus(c+916,"in_pc", false,-1, 31,0);
    tracep->declBus(c+918,"in_lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+919,"in_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+921,"in_ready", false,-1);
    tracep->declBit(c+929,"out_valid", false,-1);
    tracep->declBus(c+924,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+923,"ctrl_out", false,-1, 20,0);
    tracep->declBus(c+926,"imm_out", false,-1, 31,0);
    tracep->declBus(c+928,"npc_out", false,-1, 31,0);
    tracep->declBus(c+925,"pc_out", false,-1, 31,0);
    tracep->declBus(c+922,"rd_out", false,-1, 4,0);
    tracep->declBus(c+927,"alu_result", false,-1, 31,0);
    tracep->declBit(c+930,"out_ready", false,-1);
    tracep->declBit(c+931,"lsu_req", false,-1);
    tracep->declBit(c+932,"lsu_wwe", false,-1);
    tracep->declBit(c+933,"lsu_rwe", false,-1);
    tracep->declBus(c+934,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+935,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+936,"lsu_strb", false,-1, 3,0);
    tracep->declBus(c+937,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+938,"lsu_awsize", false,-1, 2,0);
    tracep->declBit(c+1089,"biu_rresp", false,-1);
    tracep->declBit(c+1090,"biu_wresp", false,-1);
    tracep->declBus(c+1091,"biu_rdata", false,-1, 31,0);
    tracep->declBus(c+1273,"IDLE", false,-1, 31,0);
    tracep->declBus(c+1274,"STORE", false,-1, 31,0);
    tracep->declBus(c+1275,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+1255,"OP_LW", false,-1, 2,0);
    tracep->declBus(c+1239,"OP_LH", false,-1, 2,0);
    tracep->declBus(c+1272,"OP_LB", false,-1, 2,0);
    tracep->declBus(c+1291,"OP_LHU", false,-1, 2,0);
    tracep->declBus(c+1292,"OP_LBU", false,-1, 2,0);
    tracep->declBus(c+1293,"OP_SW", false,-1, 2,0);
    tracep->declBus(c+1294,"OP_SH", false,-1, 2,0);
    tracep->declBus(c+1295,"OP_SB", false,-1, 2,0);
    tracep->declBus(c+979,"state", false,-1, 1,0);
    tracep->declBit(c+22,"has_data", false,-1);
    tracep->declBus(c+923,"ctrl", false,-1, 20,0);
    tracep->declBus(c+922,"rd", false,-1, 4,0);
    tracep->declBus(c+980,"wdata", false,-1, 31,0);
    tracep->declBus(c+927,"addr", false,-1, 31,0);
    tracep->declBus(c+925,"pc", false,-1, 31,0);
    tracep->declBus(c+926,"imm", false,-1, 31,0);
    tracep->declBus(c+928,"npc", false,-1, 31,0);
    tracep->declBus(c+1141,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+932,"MemWrite", false,-1);
    tracep->declBit(c+933,"MemRead", false,-1);
    tracep->declBus(c+981,"MemOp", false,-1, 2,0);
    tracep->declBus(c+982,"offset", false,-1, 1,0);
    tracep->declBus(c+983,"aligned_addr", false,-1, 31,0);
    tracep->declBit(c+984,"unaligned_ac", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1208,"reset", false,-1);
    tracep->declBus(c+903,"reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+904,"reg_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+905,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+906,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+745,"reg_wen", false,-1);
    tracep->declBit(c+744,"in_valid", false,-1);
    tracep->declBus(c+746,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+12,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+907,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+11,"w_resp", false,-1);
    tracep->declBus(c+1317,"rs1", false,-1, 4,0);
    tracep->declBus(c+1318,"rs2", false,-1, 4,0);
    tracep->declBus(c+1319,"rd", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+985+i*1,"register", true,(i+0), 31,0);
    }
    tracep->declBit(c+1220,"is_info_register", false,-1);
    tracep->declBit(c+1221,"is_en_display", false,-1);
    tracep->declBus(c+1222,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+23,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1208,"reset", false,-1);
    tracep->declBit(c+929,"in_valid", false,-1);
    tracep->declBus(c+927,"in_alu_result", false,-1, 31,0);
    tracep->declBus(c+924,"in_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+928,"in_npc", false,-1, 31,0);
    tracep->declBus(c+925,"in_pc", false,-1, 31,0);
    tracep->declBus(c+926,"in_imm", false,-1, 31,0);
    tracep->declBus(c+923,"in_ctrl", false,-1, 20,0);
    tracep->declBus(c+1210,"in_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+922,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+930,"in_ready", false,-1);
    tracep->declBit(c+744,"out_valid", false,-1);
    tracep->declBus(c+743,"next_pc", false,-1, 31,0);
    tracep->declBit(c+745,"reg_wen", false,-1);
    tracep->declBus(c+746,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+12,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+1273,"IDLE", false,-1, 31,0);
    tracep->declBus(c+1274,"CHOOSE", false,-1, 31,0);
    tracep->declBus(c+1275,"OUTPUT", false,-1, 31,0);
    tracep->declBus(c+1320,"DONE", false,-1, 31,0);
    tracep->declBus(c+1017,"state", false,-1, 1,0);
    tracep->declBit(c+1321,"has_data", false,-1);
    tracep->declBus(c+752,"ctrl", false,-1, 20,0);
    tracep->declBus(c+746,"rd", false,-1, 4,0);
    tracep->declBus(c+743,"npc", false,-1, 31,0);
    tracep->declBus(c+753,"pc", false,-1, 31,0);
    tracep->declBus(c+754,"imm", false,-1, 31,0);
    tracep->declBus(c+755,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+756,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+757,"alu_result", false,-1, 31,0);
    tracep->declBit(c+1322,"wen", false,-1);
    tracep->declBus(c+12,"wb_data", false,-1, 31,0);
    tracep->declBus(c+758,"MemtoReg", false,-1, 2,0);
    tracep->declBit(c+745,"RegWrite", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"io_d", false,-1);
    tracep->declBit(c+400,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"io_d", false,-1);
    tracep->declBit(c+400,"io_q", false,-1);
    tracep->declBit(c+400,"sync_0", false,-1);
    tracep->declBit(c+401,"sync_1", false,-1);
    tracep->declBit(c+402,"sync_2", false,-1);
    tracep->declBit(c+403,"sync_3", false,-1);
    tracep->declBit(c+404,"sync_4", false,-1);
    tracep->declBit(c+405,"sync_5", false,-1);
    tracep->declBit(c+406,"sync_6", false,-1);
    tracep->declBit(c+407,"sync_7", false,-1);
    tracep->declBit(c+408,"sync_8", false,-1);
    tracep->declBit(c+409,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+466,"auto_in_psel", false,-1);
    tracep->declBit(c+467,"auto_in_penable", false,-1);
    tracep->declBit(c+48,"auto_in_pwrite", false,-1);
    tracep->declBus(c+804,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1239,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+801,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1247,"auto_in_pready", false,-1);
    tracep->declBit(c+1248,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1249,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1168,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1169,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1170,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1171,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1172,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1173,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1174,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1175,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1176,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1177,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBus(c+821,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+466,"in_psel", false,-1);
    tracep->declBit(c+467,"in_penable", false,-1);
    tracep->declBus(c+1239,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+48,"in_pwrite", false,-1);
    tracep->declBus(c+801,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1247,"in_pready", false,-1);
    tracep->declBus(c+1249,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1248,"in_pslverr", false,-1);
    tracep->declBus(c+1168,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1169,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1170,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1171,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1172,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1173,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1174,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1175,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1176,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1177,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+464,"auto_in_psel", false,-1);
    tracep->declBit(c+465,"auto_in_penable", false,-1);
    tracep->declBit(c+48,"auto_in_pwrite", false,-1);
    tracep->declBus(c+804,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1239,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+801,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1244,"auto_in_pready", false,-1);
    tracep->declBit(c+1245,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1246,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1178,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1179,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBus(c+821,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+464,"in_psel", false,-1);
    tracep->declBit(c+465,"in_penable", false,-1);
    tracep->declBus(c+1239,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+48,"in_pwrite", false,-1);
    tracep->declBus(c+801,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1244,"in_pready", false,-1);
    tracep->declBus(c+1246,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1245,"in_pslverr", false,-1);
    tracep->declBit(c+1178,"ps2_clk", false,-1);
    tracep->declBit(c+1179,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+1047,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1048,"auto_in_wvalid", false,-1);
    tracep->declBit(c+196,"auto_in_arready", false,-1);
    tracep->declBit(c+1206,"auto_in_arvalid", false,-1);
    tracep->declBus(c+856,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+869,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1207,"auto_in_rready", false,-1);
    tracep->declBit(c+197,"auto_in_rvalid", false,-1);
    tracep->declBus(c+198,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+199,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+197,"state", false,-1);
    tracep->declBus(c+199,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+198,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+883,"raddr", false,-1, 31,0);
    tracep->declBit(c+1098,"ren", false,-1);
    tracep->declBus(c+1099,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+805,"auto_in_psel", false,-1);
    tracep->declBit(c+468,"auto_in_penable", false,-1);
    tracep->declBit(c+48,"auto_in_pwrite", false,-1);
    tracep->declBus(c+800,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1239,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+801,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1192,"auto_in_pready", false,-1);
    tracep->declBit(c+1240,"auto_in_pslverr", false,-1);
    tracep->declBus(c+50,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1066,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1067,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1190,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBus(c+800,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+805,"in_psel", false,-1);
    tracep->declBit(c+468,"in_penable", false,-1);
    tracep->declBus(c+1239,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+48,"in_pwrite", false,-1);
    tracep->declBus(c+801,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1192,"in_pready", false,-1);
    tracep->declBus(c+50,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1240,"in_pslverr", false,-1);
    tracep->declBit(c+1066,"qspi_sck", false,-1);
    tracep->declBit(c+1067,"qspi_ce_n", false,-1);
    tracep->declBus(c+1190,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1190,"din", false,-1, 3,0);
    tracep->declBus(c+1074,"dout", false,-1, 3,0);
    tracep->declBus(c+1075,"douten", false,-1, 3,0);
    tracep->declBit(c+1223,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1166,"clk_i", false,-1);
    tracep->declBit(c+1167,"rst_i", false,-1);
    tracep->declBus(c+800,"adr_i", false,-1, 31,0);
    tracep->declBus(c+801,"dat_i", false,-1, 31,0);
    tracep->declBus(c+50,"dat_o", false,-1, 31,0);
    tracep->declBus(c+49,"sel_i", false,-1, 3,0);
    tracep->declBit(c+805,"cyc_i", false,-1);
    tracep->declBit(c+805,"stb_i", false,-1);
    tracep->declBit(c+1223,"ack_o", false,-1);
    tracep->declBit(c+48,"we_i", false,-1);
    tracep->declBit(c+1066,"sck", false,-1);
    tracep->declBit(c+1067,"ce_n", false,-1);
    tracep->declBus(c+1190,"din", false,-1, 3,0);
    tracep->declBus(c+1074,"dout", false,-1, 3,0);
    tracep->declBus(c+1075,"douten", false,-1, 3,0);
    tracep->declBus(c+1323,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1324,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+518,"mr_sck", false,-1);
    tracep->declBit(c+519,"mr_ce_n", false,-1);
    tracep->declBus(c+1190,"mr_din", false,-1, 3,0);
    tracep->declBus(c+520,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+521,"mr_doe", false,-1);
    tracep->declBit(c+522,"mw_sck", false,-1);
    tracep->declBit(c+523,"mw_ce_n", false,-1);
    tracep->declBus(c+1190,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1076,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+524,"mw_doe", false,-1);
    tracep->declBit(c+1077,"mr_rd", false,-1);
    tracep->declBit(c+525,"mr_done", false,-1);
    tracep->declBit(c+1078,"mw_wr", false,-1);
    tracep->declBit(c+1224,"mw_done", false,-1);
    tracep->declBit(c+805,"wb_valid", false,-1);
    tracep->declBit(c+822,"wb_we", false,-1);
    tracep->declBit(c+823,"wb_re", false,-1);
    tracep->declBit(c+526,"state", false,-1);
    tracep->declBit(c+1079,"nstate", false,-1);
    tracep->declBus(c+410,"size", false,-1, 2,0);
    tracep->declBus(c+824,"byte0", false,-1, 7,0);
    tracep->declBus(c+825,"byte1", false,-1, 7,0);
    tracep->declBus(c+826,"byte2", false,-1, 7,0);
    tracep->declBus(c+827,"byte3", false,-1, 7,0);
    tracep->declBus(c+828,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1166,"clk", false,-1);
    tracep->declBit(c+1225,"rst_n", false,-1);
    tracep->declBus(c+829,"addr", false,-1, 23,0);
    tracep->declBit(c+1077,"rd", false,-1);
    tracep->declBus(c+1292,"size", false,-1, 2,0);
    tracep->declBit(c+525,"done", false,-1);
    tracep->declBus(c+50,"line", false,-1, 31,0);
    tracep->declBit(c+518,"sck", false,-1);
    tracep->declBit(c+519,"ce_n", false,-1);
    tracep->declBus(c+1190,"din", false,-1, 3,0);
    tracep->declBus(c+520,"dout", false,-1, 3,0);
    tracep->declBit(c+521,"douten", false,-1);
    tracep->declBus(c+1323,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1324,"READ", false,-1, 0,0);
    tracep->declBus(c+1325,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+527,"state", false,-1);
    tracep->declBit(c+1080,"nstate", false,-1);
    tracep->declBus(c+528,"counter", false,-1, 7,0);
    tracep->declBus(c+529,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+411+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1326,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+530,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1166,"clk", false,-1);
    tracep->declBit(c+1225,"rst_n", false,-1);
    tracep->declBus(c+830,"addr", false,-1, 23,0);
    tracep->declBus(c+828,"line", false,-1, 31,0);
    tracep->declBus(c+410,"size", false,-1, 2,0);
    tracep->declBit(c+1078,"wr", false,-1);
    tracep->declBit(c+1224,"done", false,-1);
    tracep->declBit(c+522,"sck", false,-1);
    tracep->declBit(c+523,"ce_n", false,-1);
    tracep->declBus(c+1190,"din", false,-1, 3,0);
    tracep->declBus(c+1076,"dout", false,-1, 3,0);
    tracep->declBit(c+524,"douten", false,-1);
    tracep->declBus(c+1323,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1324,"WRITE", false,-1, 0,0);
    tracep->declBus(c+415,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+531,"state", false,-1);
    tracep->declBit(c+1081,"nstate", false,-1);
    tracep->declBus(c+532,"counter", false,-1, 7,0);
    tracep->declBus(c+533,"saddr", false,-1, 23,0);
    tracep->declBus(c+1327,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+460,"auto_in_psel", false,-1);
    tracep->declBit(c+461,"auto_in_penable", false,-1);
    tracep->declBit(c+48,"auto_in_pwrite", false,-1);
    tracep->declBus(c+800,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1239,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+801,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+516,"auto_in_pready", false,-1);
    tracep->declBit(c+1240,"auto_in_pslverr", false,-1);
    tracep->declBus(c+517,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1191,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+507,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+508,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+509,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+510,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+511,"sdram_bundle_we", false,-1);
    tracep->declBus(c+512,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+513,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+514,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+515,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBus(c+800,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+460,"in_psel", false,-1);
    tracep->declBit(c+461,"in_penable", false,-1);
    tracep->declBus(c+1239,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+48,"in_pwrite", false,-1);
    tracep->declBus(c+801,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+516,"in_pready", false,-1);
    tracep->declBus(c+517,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1240,"in_pslverr", false,-1);
    tracep->declBit(c+1191,"sdram_clk", false,-1);
    tracep->declBit(c+507,"sdram_cke", false,-1);
    tracep->declBit(c+508,"sdram_cs", false,-1);
    tracep->declBit(c+509,"sdram_ras", false,-1);
    tracep->declBit(c+510,"sdram_cas", false,-1);
    tracep->declBit(c+511,"sdram_we", false,-1);
    tracep->declBus(c+512,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+513,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+514,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+515,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+534,"sdram_dout_en", false,-1);
    tracep->declBus(c+535,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+416,"state", false,-1, 1,0);
    tracep->declBit(c+536,"req_accept", false,-1);
    tracep->declBit(c+831,"is_read", false,-1);
    tracep->declBit(c+832,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1166,"clk_i", false,-1);
    tracep->declBit(c+1167,"rst_i", false,-1);
    tracep->declBus(c+833,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+831,"inport_rd_i", false,-1);
    tracep->declBus(c+1254,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+800,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+801,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+515,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+536,"inport_accept_o", false,-1);
    tracep->declBit(c+516,"inport_ack_o", false,-1);
    tracep->declBit(c+1240,"inport_error_o", false,-1);
    tracep->declBus(c+517,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1191,"sdram_clk_o", false,-1);
    tracep->declBit(c+507,"sdram_cke_o", false,-1);
    tracep->declBit(c+508,"sdram_cs_o", false,-1);
    tracep->declBit(c+509,"sdram_ras_o", false,-1);
    tracep->declBit(c+510,"sdram_cas_o", false,-1);
    tracep->declBit(c+511,"sdram_we_o", false,-1);
    tracep->declBus(c+514,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+512,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+513,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+535,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+534,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1328,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1329,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1330,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1275,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1275,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1275,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1331,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1332,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1333,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1334,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1335,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1331,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1304,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1300,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1302,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1301,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1303,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1299,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1298,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1253,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1336,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1331,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1253,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1298,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1299,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1300,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1301,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1302,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1303,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1304,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1305,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1307,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1337,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1337,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1338,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1337,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1275,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1275,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1339,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+800,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+833,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+831,"ram_rd_w", false,-1);
    tracep->declBit(c+536,"ram_accept_w", false,-1);
    tracep->declBus(c+801,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+517,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+516,"ram_ack_w", false,-1);
    tracep->declBit(c+834,"ram_req_w", false,-1);
    tracep->declBus(c+537,"command_q", false,-1, 3,0);
    tracep->declBus(c+512,"addr_q", false,-1, 12,0);
    tracep->declBus(c+535,"data_q", false,-1, 15,0);
    tracep->declBit(c+538,"data_rd_en_q", false,-1);
    tracep->declBus(c+514,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+507,"cke_q", false,-1);
    tracep->declBus(c+513,"bank_q", false,-1, 1,0);
    tracep->declBus(c+539,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+540,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+515,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+541,"refresh_q", false,-1);
    tracep->declBus(c+542,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+543+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+547,"state_q", false,-1, 3,0);
    tracep->declBus(c+1082,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1083,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+548,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+549,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+835,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+836,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+837,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1331,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+550,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1084,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1340,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+551,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+552,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+553,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+554,"idx", false,-1, 31,0);
    tracep->declBus(c+555,"rd_q", false,-1, 3,0);
    tracep->declBit(c+516,"ack_q", false,-1);
    tracep->declArray(c+556,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+809,"auto_in_psel", false,-1);
    tracep->declBit(c+469,"auto_in_penable", false,-1);
    tracep->declBit(c+48,"auto_in_pwrite", false,-1);
    tracep->declBus(c+803,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1239,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+801,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1194,"auto_in_pready", false,-1);
    tracep->declBit(c+470,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1195,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+505,"spi_bundle_sck", false,-1);
    tracep->declBus(c+506,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1188,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1189,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1341,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1342,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1314,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBus(c+838,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+809,"in_psel", false,-1);
    tracep->declBit(c+469,"in_penable", false,-1);
    tracep->declBus(c+1239,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+48,"in_pwrite", false,-1);
    tracep->declBus(c+801,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1194,"in_pready", false,-1);
    tracep->declBus(c+1195,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+470,"in_pslverr", false,-1);
    tracep->declBit(c+505,"spi_sck", false,-1);
    tracep->declBus(c+506,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1188,"spi_mosi", false,-1);
    tracep->declBit(c+1189,"spi_miso", false,-1);
    tracep->declBit(c+559,"spi_irq_out", false,-1);
    tracep->declBus(c+839,"apb_paddr", false,-1, 31,0);
    tracep->declBit(c+840,"apb_psel", false,-1);
    tracep->declBit(c+841,"apb_penable", false,-1);
    tracep->declBus(c+1239,"apb_pprot", false,-1, 2,0);
    tracep->declBit(c+842,"apb_pwrite", false,-1);
    tracep->declBus(c+843,"apb_pwdata", false,-1, 31,0);
    tracep->declBus(c+844,"apb_pstrb", false,-1, 3,0);
    tracep->declBit(c+560,"apb_pready", false,-1);
    tracep->declBus(c+561,"apb_prdata", false,-1, 31,0);
    tracep->declBit(c+1240,"apb_pslverr", false,-1);
    tracep->declBus(c+417,"xip_flash_paddr", false,-1, 31,0);
    tracep->declBit(c+418,"xip_flash_penable", false,-1);
    tracep->declBus(c+1239,"xip_flash_pprot", false,-1, 2,0);
    tracep->declBit(c+419,"xip_flash_pwrite", false,-1);
    tracep->declBus(c+420,"xip_flash_pwdata", false,-1, 31,0);
    tracep->declBus(c+421,"xip_flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+422,"xip_flash_pready", false,-1);
    tracep->declBus(c+423,"xip_flash_prdata", false,-1, 31,0);
    tracep->declBit(c+1240,"xip_flash_pslverr", false,-1);
    tracep->declBit(c+845,"spi_master_psel", false,-1);
    tracep->declBit(c+846,"xip_flash_psel", false,-1);
    tracep->declBus(c+1323,"spi_go", false,-1, 0,0);
    tracep->declBus(c+1343,"spi_len", false,-1, 6,0);
    tracep->declBus(c+1323,"spi_rx_neg", false,-1, 0,0);
    tracep->declBus(c+1324,"spi_tx_neg", false,-1, 0,0);
    tracep->declBus(c+1324,"spi_ie", false,-1, 0,0);
    tracep->declBus(c+1324,"spi_ass", false,-1, 0,0);
    tracep->declBus(c+1323,"spi_lsb", false,-1, 0,0);
    tracep->declBus(c+1344,"flash_ctrl", false,-1, 31,0);
    tracep->declBus(c+1345,"INIT_STEPS", false,-1, 1,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1346+i*1,"init_addrs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1349+i*1,"init_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+424,"init_step", false,-1, 1,0);
    tracep->declBus(c+425,"state", false,-1, 3,0);
    tracep->declBit(c+426,"sel_pending", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1274,"Tp", false,-1, 31,0);
    tracep->declBit(c+1166,"wb_clk_i", false,-1);
    tracep->declBit(c+1167,"wb_rst_i", false,-1);
    tracep->declBus(c+847,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+843,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+561,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+844,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+842,"wb_we_i", false,-1);
    tracep->declBit(c+840,"wb_stb_i", false,-1);
    tracep->declBit(c+841,"wb_cyc_i", false,-1);
    tracep->declBit(c+560,"wb_ack_o", false,-1);
    tracep->declBit(c+1240,"wb_err_o", false,-1);
    tracep->declBit(c+559,"wb_int_o", false,-1);
    tracep->declBus(c+506,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+505,"sclk_pad_o", false,-1);
    tracep->declBit(c+1188,"mosi_pad_o", false,-1);
    tracep->declBit(c+1189,"miso_pad_i", false,-1);
    tracep->declBus(c+562,"divider", false,-1, 15,0);
    tracep->declBus(c+563,"ctrl", false,-1, 13,0);
    tracep->declBus(c+564,"ss", false,-1, 7,0);
    tracep->declBus(c+1085,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+565,"rx", false,-1, 127,0);
    tracep->declBit(c+569,"rx_negedge", false,-1);
    tracep->declBit(c+570,"tx_negedge", false,-1);
    tracep->declBus(c+571,"char_len", false,-1, 6,0);
    tracep->declBit(c+572,"go", false,-1);
    tracep->declBit(c+573,"lsb", false,-1);
    tracep->declBit(c+574,"ie", false,-1);
    tracep->declBit(c+575,"ass", false,-1);
    tracep->declBit(c+848,"spi_divider_sel", false,-1);
    tracep->declBit(c+849,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+850,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+851,"spi_ss_sel", false,-1);
    tracep->declBit(c+576,"tip", false,-1);
    tracep->declBit(c+577,"pos_edge", false,-1);
    tracep->declBit(c+578,"neg_edge", false,-1);
    tracep->declBit(c+579,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1274,"Tp", false,-1, 31,0);
    tracep->declBit(c+1166,"clk_in", false,-1);
    tracep->declBit(c+1167,"rst", false,-1);
    tracep->declBit(c+576,"enable", false,-1);
    tracep->declBit(c+572,"go", false,-1);
    tracep->declBit(c+579,"last_clk", false,-1);
    tracep->declBus(c+562,"divider", false,-1, 15,0);
    tracep->declBit(c+505,"clk_out", false,-1);
    tracep->declBit(c+577,"pos_edge", false,-1);
    tracep->declBit(c+578,"neg_edge", false,-1);
    tracep->declBus(c+580,"cnt", false,-1, 15,0);
    tracep->declBit(c+581,"cnt_zero", false,-1);
    tracep->declBit(c+582,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1274,"Tp", false,-1, 31,0);
    tracep->declBit(c+1166,"clk", false,-1);
    tracep->declBit(c+1167,"rst", false,-1);
    tracep->declBus(c+852,"latch", false,-1, 3,0);
    tracep->declBus(c+844,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+571,"len", false,-1, 6,0);
    tracep->declBit(c+573,"lsb", false,-1);
    tracep->declBit(c+572,"go", false,-1);
    tracep->declBit(c+577,"pos_edge", false,-1);
    tracep->declBit(c+578,"neg_edge", false,-1);
    tracep->declBit(c+569,"rx_negedge", false,-1);
    tracep->declBit(c+570,"tx_negedge", false,-1);
    tracep->declBit(c+576,"tip", false,-1);
    tracep->declBit(c+579,"last", false,-1);
    tracep->declBus(c+843,"p_in", false,-1, 31,0);
    tracep->declArray(c+565,"p_out", false,-1, 127,0);
    tracep->declBit(c+505,"s_clk", false,-1);
    tracep->declBit(c+1189,"s_in", false,-1);
    tracep->declBit(c+1188,"s_out", false,-1);
    tracep->declBus(c+583,"cnt", false,-1, 7,0);
    tracep->declArray(c+565,"data", false,-1, 127,0);
    tracep->declBus(c+584,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+585,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+586,"rx_clk", false,-1);
    tracep->declBit(c+587,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+806,"auto_in_psel", false,-1);
    tracep->declBit(c+807,"auto_in_penable", false,-1);
    tracep->declBit(c+48,"auto_in_pwrite", false,-1);
    tracep->declBus(c+804,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1239,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+801,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+808,"auto_in_pready", false,-1);
    tracep->declBit(c+1240,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1193,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1186,"uart_rx", false,-1);
    tracep->declBit(c+1187,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+806,"in_psel", false,-1);
    tracep->declBit(c+807,"in_penable", false,-1);
    tracep->declBus(c+1239,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+808,"in_pready", false,-1);
    tracep->declBit(c+1240,"in_pslverr", false,-1);
    tracep->declBus(c+821,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+48,"in_pwrite", false,-1);
    tracep->declBus(c+1193,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+801,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1186,"uart_rx", false,-1);
    tracep->declBit(c+1187,"uart_tx", false,-1);
    tracep->declBit(c+588,"rtsn", false,-1);
    tracep->declBit(c+1240,"ctsn", false,-1);
    tracep->declBit(c+589,"dtr_pad_o", false,-1);
    tracep->declBit(c+1240,"dsr_pad_i", false,-1);
    tracep->declBit(c+1240,"ri_pad_i", false,-1);
    tracep->declBit(c+1240,"dcd_pad_i", false,-1);
    tracep->declBit(c+590,"interrupt", false,-1);
    tracep->declBit(c+1226,"reg_we", false,-1);
    tracep->declBit(c+1227,"reg_re", false,-1);
    tracep->declBus(c+853,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+854,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+427,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1086,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+591,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1166,"clk", false,-1);
    tracep->declBit(c+1167,"wb_rst_i", false,-1);
    tracep->declBus(c+853,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+855,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1086,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1226,"wb_we_i", false,-1);
    tracep->declBit(c+1227,"wb_re_i", false,-1);
    tracep->declBit(c+1187,"stx_pad_o", false,-1);
    tracep->declBit(c+1186,"srx_pad_i", false,-1);
    tracep->declBus(c+1305,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+591,"rts_pad_o", false,-1);
    tracep->declBit(c+589,"dtr_pad_o", false,-1);
    tracep->declBit(c+590,"int_o", false,-1);
    tracep->declBit(c+592,"enable", false,-1);
    tracep->declBit(c+593,"srx_pad", false,-1);
    tracep->declBus(c+594,"ier", false,-1, 3,0);
    tracep->declBus(c+595,"iir", false,-1, 3,0);
    tracep->declBus(c+596,"fcr", false,-1, 1,0);
    tracep->declBus(c+597,"mcr", false,-1, 4,0);
    tracep->declBus(c+598,"lcr", false,-1, 7,0);
    tracep->declBus(c+599,"msr", false,-1, 7,0);
    tracep->declBus(c+600,"dl", false,-1, 15,0);
    tracep->declBus(c+601,"scratch", false,-1, 7,0);
    tracep->declBit(c+602,"start_dlc", false,-1);
    tracep->declBit(c+603,"lsr_mask_d", false,-1);
    tracep->declBit(c+604,"msi_reset", false,-1);
    tracep->declBus(c+605,"dlc", false,-1, 15,0);
    tracep->declBus(c+606,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+607,"rx_reset", false,-1);
    tracep->declBit(c+608,"tx_reset", false,-1);
    tracep->declBit(c+609,"dlab", false,-1);
    tracep->declBit(c+1250,"cts_pad_i", false,-1);
    tracep->declBit(c+1240,"dsr_pad_i", false,-1);
    tracep->declBit(c+1240,"ri_pad_i", false,-1);
    tracep->declBit(c+1240,"dcd_pad_i", false,-1);
    tracep->declBit(c+610,"loopback", false,-1);
    tracep->declBit(c+1240,"cts", false,-1);
    tracep->declBit(c+1250,"dsr", false,-1);
    tracep->declBit(c+1250,"ri", false,-1);
    tracep->declBit(c+1250,"dcd", false,-1);
    tracep->declBit(c+611,"cts_c", false,-1);
    tracep->declBit(c+612,"dsr_c", false,-1);
    tracep->declBit(c+613,"ri_c", false,-1);
    tracep->declBit(c+614,"dcd_c", false,-1);
    tracep->declBus(c+615,"lsr", false,-1, 7,0);
    tracep->declBit(c+616,"lsr0", false,-1);
    tracep->declBit(c+617,"lsr1", false,-1);
    tracep->declBit(c+618,"lsr2", false,-1);
    tracep->declBit(c+619,"lsr3", false,-1);
    tracep->declBit(c+620,"lsr4", false,-1);
    tracep->declBit(c+621,"lsr5", false,-1);
    tracep->declBit(c+622,"lsr6", false,-1);
    tracep->declBit(c+623,"lsr7", false,-1);
    tracep->declBit(c+624,"lsr0r", false,-1);
    tracep->declBit(c+625,"lsr1r", false,-1);
    tracep->declBit(c+626,"lsr2r", false,-1);
    tracep->declBit(c+627,"lsr3r", false,-1);
    tracep->declBit(c+628,"lsr4r", false,-1);
    tracep->declBit(c+629,"lsr5r", false,-1);
    tracep->declBit(c+630,"lsr6r", false,-1);
    tracep->declBit(c+631,"lsr7r", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+632,"rls_int", false,-1);
    tracep->declBit(c+633,"rda_int", false,-1);
    tracep->declBit(c+634,"ti_int", false,-1);
    tracep->declBit(c+635,"thre_int", false,-1);
    tracep->declBit(c+636,"ms_int", false,-1);
    tracep->declBit(c+637,"tf_push", false,-1);
    tracep->declBit(c+638,"rf_pop", false,-1);
    tracep->declBus(c+1228,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+639,"rf_error_bit", false,-1);
    tracep->declBit(c+617,"rf_overrun", false,-1);
    tracep->declBit(c+640,"rf_push_pulse", false,-1);
    tracep->declBus(c+641,"rf_count", false,-1, 4,0);
    tracep->declBus(c+642,"tf_count", false,-1, 4,0);
    tracep->declBus(c+643,"tstate", false,-1, 2,0);
    tracep->declBus(c+644,"rstate", false,-1, 3,0);
    tracep->declBus(c+645,"counter_t", false,-1, 9,0);
    tracep->declBit(c+646,"thre_set_en", false,-1);
    tracep->declBus(c+647,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+648,"block_value", false,-1, 7,0);
    tracep->declBit(c+649,"serial_out", false,-1);
    tracep->declBit(c+650,"serial_in", false,-1);
    tracep->declBit(c+2,"lsr_mask_condition", false,-1);
    tracep->declBit(c+3,"iir_read", false,-1);
    tracep->declBit(c+4,"msr_read", false,-1);
    tracep->declBit(c+5,"fifo_read", false,-1);
    tracep->declBit(c+6,"fifo_write", false,-1);
    tracep->declBus(c+651,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+652,"lsr0_d", false,-1);
    tracep->declBit(c+653,"lsr1_d", false,-1);
    tracep->declBit(c+654,"lsr2_d", false,-1);
    tracep->declBit(c+655,"lsr3_d", false,-1);
    tracep->declBit(c+656,"lsr4_d", false,-1);
    tracep->declBit(c+657,"lsr5_d", false,-1);
    tracep->declBit(c+658,"lsr6_d", false,-1);
    tracep->declBit(c+659,"lsr7_d", false,-1);
    tracep->declBit(c+660,"rls_int_d", false,-1);
    tracep->declBit(c+661,"thre_int_d", false,-1);
    tracep->declBit(c+662,"ms_int_d", false,-1);
    tracep->declBit(c+663,"ti_int_d", false,-1);
    tracep->declBit(c+664,"rda_int_d", false,-1);
    tracep->declBit(c+665,"rls_int_rise", false,-1);
    tracep->declBit(c+666,"thre_int_rise", false,-1);
    tracep->declBit(c+667,"ms_int_rise", false,-1);
    tracep->declBit(c+668,"ti_int_rise", false,-1);
    tracep->declBit(c+669,"rda_int_rise", false,-1);
    tracep->declBit(c+670,"rls_int_pnd", false,-1);
    tracep->declBit(c+671,"rda_int_pnd", false,-1);
    tracep->declBit(c+672,"thre_int_pnd", false,-1);
    tracep->declBit(c+673,"ms_int_pnd", false,-1);
    tracep->declBit(c+674,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1274,"Tp", false,-1, 31,0);
    tracep->declBus(c+1274,"width", false,-1, 31,0);
    tracep->declBus(c+1324,"init_value", false,-1, 0,0);
    tracep->declBit(c+1167,"rst_i", false,-1);
    tracep->declBit(c+1166,"clk_i", false,-1);
    tracep->declBit(c+1240,"stage1_rst_i", false,-1);
    tracep->declBit(c+1250,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1186,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+593,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+675,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1166,"clk", false,-1);
    tracep->declBit(c+1167,"wb_rst_i", false,-1);
    tracep->declBus(c+598,"lcr", false,-1, 7,0);
    tracep->declBit(c+638,"rf_pop", false,-1);
    tracep->declBit(c+650,"srx_pad_i", false,-1);
    tracep->declBit(c+592,"enable", false,-1);
    tracep->declBit(c+607,"rx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBus(c+645,"counter_t", false,-1, 9,0);
    tracep->declBus(c+641,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1228,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+617,"rf_overrun", false,-1);
    tracep->declBit(c+639,"rf_error_bit", false,-1);
    tracep->declBus(c+644,"rstate", false,-1, 3,0);
    tracep->declBit(c+640,"rf_push_pulse", false,-1);
    tracep->declBus(c+676,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+677,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+678,"rshift", false,-1, 7,0);
    tracep->declBit(c+679,"rparity", false,-1);
    tracep->declBit(c+680,"rparity_error", false,-1);
    tracep->declBit(c+681,"rframing_error", false,-1);
    tracep->declBit(c+682,"rbit_in", false,-1);
    tracep->declBit(c+683,"rparity_xor", false,-1);
    tracep->declBus(c+684,"counter_b", false,-1, 7,0);
    tracep->declBit(c+685,"rf_push_q", false,-1);
    tracep->declBus(c+686,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+687,"rf_push", false,-1);
    tracep->declBit(c+688,"break_error", false,-1);
    tracep->declBit(c+689,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+690,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+691,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+692,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1253,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1298,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1299,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1300,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1301,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1302,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1303,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1304,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1305,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1307,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1306,"sr_push", false,-1, 3,0);
    tracep->declBus(c+693,"toc_value", false,-1, 9,0);
    tracep->declBus(c+694,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1352,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1338,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1331,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1353,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1166,"clk", false,-1);
    tracep->declBit(c+1167,"wb_rst_i", false,-1);
    tracep->declBit(c+640,"push", false,-1);
    tracep->declBit(c+638,"pop", false,-1);
    tracep->declBus(c+686,"data_in", false,-1, 10,0);
    tracep->declBit(c+607,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1228,"data_out", false,-1, 10,0);
    tracep->declBit(c+617,"overrun", false,-1);
    tracep->declBus(c+641,"count", false,-1, 4,0);
    tracep->declBit(c+639,"error_bit", false,-1);
    tracep->declBus(c+1229,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+695+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+711,"top", false,-1, 3,0);
    tracep->declBus(c+712,"bottom", false,-1, 3,0);
    tracep->declBus(c+713,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+714,"word0", false,-1, 2,0);
    tracep->declBus(c+715,"word1", false,-1, 2,0);
    tracep->declBus(c+716,"word2", false,-1, 2,0);
    tracep->declBus(c+717,"word3", false,-1, 2,0);
    tracep->declBus(c+718,"word4", false,-1, 2,0);
    tracep->declBus(c+719,"word5", false,-1, 2,0);
    tracep->declBus(c+720,"word6", false,-1, 2,0);
    tracep->declBus(c+721,"word7", false,-1, 2,0);
    tracep->declBus(c+722,"word8", false,-1, 2,0);
    tracep->declBus(c+723,"word9", false,-1, 2,0);
    tracep->declBus(c+724,"word10", false,-1, 2,0);
    tracep->declBus(c+725,"word11", false,-1, 2,0);
    tracep->declBus(c+726,"word12", false,-1, 2,0);
    tracep->declBus(c+727,"word13", false,-1, 2,0);
    tracep->declBus(c+728,"word14", false,-1, 2,0);
    tracep->declBus(c+729,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1331,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1314,"data_width", false,-1, 31,0);
    tracep->declBus(c+1338,"depth", false,-1, 31,0);
    tracep->declBit(c+1166,"clk", false,-1);
    tracep->declBit(c+640,"we", false,-1);
    tracep->declBus(c+711,"a", false,-1, 3,0);
    tracep->declBus(c+712,"dpra", false,-1, 3,0);
    tracep->declBus(c+730,"di", false,-1, 7,0);
    tracep->declBus(c+1229,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+428+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1166,"clk", false,-1);
    tracep->declBit(c+1167,"wb_rst_i", false,-1);
    tracep->declBus(c+598,"lcr", false,-1, 7,0);
    tracep->declBit(c+637,"tf_push", false,-1);
    tracep->declBus(c+855,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+592,"enable", false,-1);
    tracep->declBit(c+608,"tx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+649,"stx_pad_o", false,-1);
    tracep->declBus(c+643,"tstate", false,-1, 2,0);
    tracep->declBus(c+642,"tf_count", false,-1, 4,0);
    tracep->declBus(c+731,"counter", false,-1, 4,0);
    tracep->declBus(c+732,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+733,"shift_out", false,-1, 6,0);
    tracep->declBit(c+734,"stx_o_tmp", false,-1);
    tracep->declBit(c+735,"parity_xor", false,-1);
    tracep->declBit(c+736,"tf_pop", false,-1);
    tracep->declBit(c+737,"bit_out", false,-1);
    tracep->declBus(c+855,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1230,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+738,"tf_overrun", false,-1);
    tracep->declBus(c+1255,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1239,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1272,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1291,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1292,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1293,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1314,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1338,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1331,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1353,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1166,"clk", false,-1);
    tracep->declBit(c+1167,"wb_rst_i", false,-1);
    tracep->declBit(c+637,"push", false,-1);
    tracep->declBit(c+736,"pop", false,-1);
    tracep->declBus(c+855,"data_in", false,-1, 7,0);
    tracep->declBit(c+608,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1230,"data_out", false,-1, 7,0);
    tracep->declBit(c+738,"overrun", false,-1);
    tracep->declBus(c+642,"count", false,-1, 4,0);
    tracep->declBus(c+739,"top", false,-1, 3,0);
    tracep->declBus(c+740,"bottom", false,-1, 3,0);
    tracep->declBus(c+741,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1331,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1314,"data_width", false,-1, 31,0);
    tracep->declBus(c+1338,"depth", false,-1, 31,0);
    tracep->declBit(c+1166,"clk", false,-1);
    tracep->declBit(c+637,"we", false,-1);
    tracep->declBus(c+739,"a", false,-1, 3,0);
    tracep->declBus(c+740,"dpra", false,-1, 3,0);
    tracep->declBus(c+855,"di", false,-1, 7,0);
    tracep->declBus(c+1230,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+444+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBit(c+462,"auto_in_psel", false,-1);
    tracep->declBit(c+463,"auto_in_penable", false,-1);
    tracep->declBit(c+48,"auto_in_pwrite", false,-1);
    tracep->declBus(c+803,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1239,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+801,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1241,"auto_in_pready", false,-1);
    tracep->declBit(c+1242,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1243,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1180,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1181,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1182,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1183,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1184,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1185,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1166,"clock", false,-1);
    tracep->declBit(c+1167,"reset", false,-1);
    tracep->declBus(c+838,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+462,"in_psel", false,-1);
    tracep->declBit(c+463,"in_penable", false,-1);
    tracep->declBus(c+1239,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+48,"in_pwrite", false,-1);
    tracep->declBus(c+801,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+49,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1241,"in_pready", false,-1);
    tracep->declBus(c+1243,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1242,"in_pslverr", false,-1);
    tracep->declBus(c+1180,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1181,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1182,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1183,"vga_hsync", false,-1);
    tracep->declBit(c+1184,"vga_vsync", false,-1);
    tracep->declBit(c+1185,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+505,"sck", false,-1);
    tracep->declBit(c+1231,"ss", false,-1);
    tracep->declBit(c+1188,"mosi", false,-1);
    tracep->declBit(c+1232,"miso", false,-1);
    tracep->declBus(c+1063,"rx_data", false,-1, 7,0);
    tracep->declBus(c+1233,"tx_data", false,-1, 7,0);
    tracep->declBus(c+1064,"cnt", false,-1, 2,0);
    tracep->declBus(c+1256,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1308,"RX", false,-1, 1,0);
    tracep->declBus(c+1309,"TX", false,-1, 1,0);
    tracep->declBus(c+1065,"state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+505,"sck", false,-1);
    tracep->declBit(c+742,"ss", false,-1);
    tracep->declBit(c+1188,"mosi", false,-1);
    tracep->declBit(c+1234,"miso", false,-1);
    tracep->declBit(c+742,"reset", false,-1);
    tracep->declBus(c+794,"state", false,-1, 2,0);
    tracep->declBus(c+795,"counter", false,-1, 7,0);
    tracep->declBus(c+796,"cmd", false,-1, 7,0);
    tracep->declBus(c+797,"addr", false,-1, 23,0);
    tracep->declBus(c+798,"data", false,-1, 31,0);
    tracep->declBit(c+799,"ren", false,-1);
    tracep->declBus(c+1235,"rdata", false,-1, 31,0);
    tracep->declBus(c+1236,"raddr", false,-1, 31,0);
    tracep->declBus(c+1237,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+505,"clock", false,-1);
    tracep->declBit(c+799,"valid", false,-1);
    tracep->declBus(c+796,"cmd", false,-1, 7,0);
    tracep->declBus(c+1236,"addr", false,-1, 31,0);
    tracep->declBus(c+1235,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1066,"sck", false,-1);
    tracep->declBit(c+1067,"ce_n", false,-1);
    tracep->declBus(c+1190,"dio", false,-1, 3,0);
    tracep->declBus(c+1238,"din", false,-1, 3,0);
    tracep->declBus(c+42,"dout", false,-1, 3,0);
    tracep->declBus(c+771,"state", false,-1, 2,0);
    tracep->declBus(c+772,"cnt", false,-1, 7,0);
    tracep->declBus(c+7,"cmd", false,-1, 7,0);
    tracep->declBus(c+773,"addr", false,-1, 23,0);
    tracep->declBus(c+8,"wdata", false,-1, 31,0);
    tracep->declBus(c+43,"rdata", false,-1, 31,0);
    tracep->declBus(c+44,"raw_rdata", false,-1, 31,0);
    tracep->declBus(c+9,"wdata_rv", false,-1, 31,0);
    tracep->declBus(c+45,"rdata_rv", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1191,"clk", false,-1);
    tracep->declBit(c+507,"cke", false,-1);
    tracep->declBit(c+508,"cs", false,-1);
    tracep->declBit(c+509,"ras", false,-1);
    tracep->declBit(c+510,"cas", false,-1);
    tracep->declBit(c+511,"we", false,-1);
    tracep->declBus(c+512,"a", false,-1, 12,0);
    tracep->declBus(c+513,"ba", false,-1, 1,0);
    tracep->declBus(c+514,"dqm", false,-1, 1,0);
    tracep->declBus(c+515,"dq", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+7,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+8,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata),32);
    bufp->fullIData(oldp+9,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata 
                              << 0x18U) | ((0xff0000U 
                                            & (vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata 
                                               << 8U)) 
                                           | ((0xff00U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata 
                                                  >> 8U)) 
                                              | (vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata 
                                                 >> 0x18U))))),32);
    bufp->fullBit(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_done));
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_wresp));
    bufp->fullIData(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_data),32);
    bufp->fullBit(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rtc_arready));
    bufp->fullIData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rtc_rdata),32);
    bufp->fullBit(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rtc_rvalid));
    bufp->fullCData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rtc_rresp),2);
    bufp->fullBit(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rtc_rlast));
    bufp->fullCData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rtc_rid),4);
    bufp->fullCData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state),3);
    bufp->fullQData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime),64);
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__has_data));
    bufp->fullIData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_arvalid));
    bufp->fullIData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_araddr),32);
    bufp->fullCData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_arlen),8);
    bufp->fullCData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_arsize),3);
    bufp->fullCData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_arburst),2);
    bufp->fullIData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_araddr),32);
    bufp->fullCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_arsize),3);
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifbiu__DOT__read_cnt),8);
    bufp->fullBit(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifbiu__DOT__read_pending));
    bufp->fullCData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifbiu__DOT__lfsr),8);
    bufp->fullBit(oldp+34,((1U & VL_REDXOR_8((0xb8U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifbiu__DOT__lfsr))))));
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsbiu__DOT__arsize_reg),3);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsbiu__DOT__read_cnt),8);
    bufp->fullBit(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsbiu__DOT__read_pending));
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsbiu__DOT__lfsr_addr),8);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsbiu__DOT__lfsr_data),8);
    bufp->fullBit(oldp+40,((1U & VL_REDXOR_8((0xb8U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsbiu__DOT__lfsr_addr))))));
    bufp->fullBit(oldp+41,((1U & VL_REDXOR_8((0x9cU 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsbiu__DOT__lfsr_data))))));
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dout),4);
    bufp->fullIData(oldp+43,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyxSoCFull__DOT__psram__DOT__raw_rdata),32);
    bufp->fullIData(oldp+45,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                               << 0x18U) | ((0xff0000U 
                                             & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                << 8U)) 
                                            | ((0xff00U 
                                                & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                   >> 8U)) 
                                               | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  >> 0x18U))))),32);
    bufp->fullBit(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+47,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+50,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+52,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+53,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+54,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+55,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+56,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+57,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+58,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                      >> 4U))),32);
    bufp->fullCData(oldp+59,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+60,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+63,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+64,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+65,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+66,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+67,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+68,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+78,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullBit(oldp+80,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+81,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+82,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                      >> 2U))),4);
    bufp->fullCData(oldp+83,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+84,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+85,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+86,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x23U)))),4);
    bufp->fullIData(oldp+87,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                      >> 3U))),32);
    bufp->fullCData(oldp+88,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 1U)))),2);
    bufp->fullBit(oldp+89,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+152,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+153,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+154,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata),32);
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp),2);
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullBit(oldp+161,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+163,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullQData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+183,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+186,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+187,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+196,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+200,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+201,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+262,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+272,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+276,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+280,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+284,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+288,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+292,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+296,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+300,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+304,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+308,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+312,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+316,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+320,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+324,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+328,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+332,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+336,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+340,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+344,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+348,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+352,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+356,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+360,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+364,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+368,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+372,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+376,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+380,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+384,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+388,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+392,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+396,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+415,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullIData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_flash_paddr),32);
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_flash_penable));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_flash_pwrite));
    bufp->fullIData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_flash_pwdata),32);
    bufp->fullCData(oldp+421,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__sel_pending) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_flash_pwrite))
                                ? 0xfU : 0U)),4);
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_flash_pready));
    bufp->fullIData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_flash_prdata),32);
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__init_step),2);
    bufp->fullCData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),4);
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__sel_pending));
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+460,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+461,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+462,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+463,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+464,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+465,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+466,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+467,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+468,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+469,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+470,(0U));
    bufp->fullCData(oldp+471,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullBit(oldp+472,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+473,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+474,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+475,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+476,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+477,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+478,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+479,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+480,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+481,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+482,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+483,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+484,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+485,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+486,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+487,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+488,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+489,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+490,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+491,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+492,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+493,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+494,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+495,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+496,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+497,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+498,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+499,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+500,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+501,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+502,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+503,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+504,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+508,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+509,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+510,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+511,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+515,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+517,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+520,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                        ? (1U & (0xebU 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U)
                                            : ((9U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0xcU)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U))))))))),4);
    bufp->fullBit(oldp+521,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+524,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+525,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+530,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+534,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+536,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready));
    bufp->fullIData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata),32);
    bufp->fullSData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+569,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+570,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+571,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+572,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+573,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+574,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+575,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+579,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+581,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+582,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+584,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+588,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+589,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+591,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+609,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+610,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+611,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+612,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+613,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+614,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+615,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+618,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+619,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+620,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+639,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+646,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+665,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+666,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+667,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+668,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+669,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+688,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+689,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+690,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+691,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+692,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+694,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+713,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+730,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+741,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullIData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__npc),32);
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_valid));
    bufp->fullBit(oldp+745,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__ctrl 
                                   >> 0x10U))));
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__rd),5);
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_req));
    bufp->fullIData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_addr),32);
    bufp->fullIData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__current_pc),32);
    bufp->fullIData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__inst_reg),32);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),3);
    bufp->fullIData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__ctrl),21);
    bufp->fullIData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__pc),32);
    bufp->fullIData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__imm),32);
    bufp->fullIData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__csr_rdata),32);
    bufp->fullIData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__mem_rdata),32);
    bufp->fullIData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__alu_result),32);
    bufp->fullCData(oldp+758,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__ctrl 
                                     >> 0xaU))),3);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullIData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rtc_araddr),32);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rtc_arid),4);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rtc_arlen),8);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rtc_arsize),3);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rtc_arburst),2);
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__is_rtc));
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__is_soc));
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt),8);
    bufp->fullIData(oldp+773,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_awvalid));
    bufp->fullIData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_awaddr),32);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_awlen),8);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_awsize),3);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_awburst),2);
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_wvalid));
    bufp->fullIData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_wdata),32);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_wstrb),4);
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_wlast));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_rready));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_arvalid));
    bufp->fullIData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__biu_rdata_if),32);
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__biu_rresp_if));
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsbiu__DOT__strb_reg),4);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsbiu__DOT__awsize_reg),3);
    bufp->fullIData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsbiu__DOT__wdata_reg),32);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsbiu__DOT__write_addr_cnt),8);
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsbiu__DOT__write_addr_pending));
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsbiu__DOT__write_data_cnt),8);
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsbiu__DOT__write_data_pending));
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+797,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+798,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+799,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullIData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+803,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+804,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+808,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+818,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_regfile_init__DOT__mstatus),32);
    bufp->fullIData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_regfile_init__DOT__mcause),32);
    bufp->fullIData(oldp+821,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+826,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+827,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+828,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+829,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+830,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+835,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+836,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+837,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+838,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullIData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr),32);
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_psel));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_penable));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwrite));
    bufp->fullIData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pwdata),32);
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pstrb),4);
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel));
    bufp->fullBit(oldp+846,((IData)(((0x30000000U == 
                                      (0x30000000U 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel)))));
    bufp->fullCData(oldp+847,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)),5);
    bufp->fullBit(oldp+848,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullBit(oldp+849,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullCData(oldp+850,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0xcU == (0x1cU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
                                << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (8U == 
                                               (0x1cU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (4U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                              & (0U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr))))))),4);
    bufp->fullBit(oldp+851,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_paddr)))));
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+853,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+860,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+862,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullIData(oldp+867,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullSData(oldp+868,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullIData(oldp+869,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+873,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_arready));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_rvalid));
    bufp->fullIData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_rdata),32);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_rresp),2);
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_rlast));
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_rid),4);
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_arready));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_rlast));
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_rid),4);
    bufp->fullIData(oldp+883,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+884,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+885,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+886,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+887,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+888,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+889,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+890,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+891,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+892,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+893,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+894,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+895,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+896,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+897,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+898,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+899,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullIData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_id_inst),32);
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_id_valid));
    bufp->fullBit(oldp+902,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state))));
    bufp->fullCData(oldp+903,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+904,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_data),32);
    bufp->fullIData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_data),32);
    bufp->fullIData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register
                              [0xfU]),32);
    bufp->fullCData(oldp+908,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__pc),32);
    bufp->fullIData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm),32);
    bufp->fullIData(oldp+911,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__csr_wen) 
                                << 0x13U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__is_mret) 
                                              << 0x12U) 
                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__is_ecall) 
                                                 << 0x11U) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegWrite) 
                                                    << 0x10U) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Jump) 
                                                       << 0xeU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Branch) 
                                                          << 0xdU) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__MemtoReg) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__MemOp) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__MemWrite) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__MemRead) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__AluOp) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__ALUSrc))))))))))))),21);
    bufp->fullBit(oldp+912,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state))));
    bufp->fullBit(oldp+913,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))));
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd),5);
    bufp->fullIData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ctrl),21);
    bufp->fullIData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc),32);
    bufp->fullIData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm),32);
    bufp->fullIData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs2_data),32);
    bufp->fullIData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__Alu_Result),32);
    bufp->fullBit(oldp+920,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state))));
    bufp->fullBit(oldp+921,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))));
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rd),5);
    bufp->fullIData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ctrl),21);
    bufp->fullIData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__me_wb_rdata),32);
    bufp->fullIData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__pc),32);
    bufp->fullIData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__imm),32);
    bufp->fullIData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__addr),32);
    bufp->fullIData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__npc),32);
    bufp->fullBit(oldp+929,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))));
    bufp->fullBit(oldp+930,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state))));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_req));
    bufp->fullBit(oldp+932,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ctrl 
                                   >> 6U))));
    bufp->fullBit(oldp+933,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ctrl 
                                   >> 5U))));
    bufp->fullIData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_addr),32);
    bufp->fullIData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_strb),4);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize),3);
    bufp->fullBit(oldp+939,((IData)(((0x80U == (0xf80U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_id_inst)) 
                                     & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Jump))))));
    bufp->fullBit(oldp+940,((IData)(((0x80U == (0xf80U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_id_inst)) 
                                     & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Jump))))));
    bufp->fullBit(oldp+941,((IData)(((0x8000U == (0xf8f80U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_id_inst)) 
                                     & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Jump))))));
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state),2);
    bufp->fullIData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs1_data),32);
    bufp->fullIData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__reg_a5),32);
    bufp->fullIData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__B),32);
    bufp->fullCData(oldp+946,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ctrl 
                                       >> 1U))),4);
    bufp->fullBit(oldp+947,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ctrl)));
    bufp->fullCData(oldp+948,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ctrl 
                                     >> 0x13U))),2);
    bufp->fullBit(oldp+949,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ctrl 
                                   >> 0x11U))));
    bufp->fullBit(oldp+950,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ctrl 
                                   >> 0x12U))));
    bufp->fullBit(oldp+951,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ctrl 
                                   >> 0xdU))));
    bufp->fullCData(oldp+952,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ctrl 
                                     >> 0xeU))),2);
    bufp->fullSData(oldp+953,((0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm)),12);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state),2);
    bufp->fullIData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst),32);
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__invalid));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__is_ebreak));
    bufp->fullCData(oldp+958,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst)),7);
    bufp->fullCData(oldp+959,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+960,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI),32);
    bufp->fullIData(oldp+962,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+963,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst)),32);
    bufp->fullIData(oldp+964,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+965,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__inst 
                                                     >> 7U)))))),32);
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__MemWrite));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__MemRead));
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__MemOp),3);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__MemtoReg),3);
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegWrite));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Branch));
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Jump),2);
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__ALUSrc));
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__AluOp),4);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__csr_wen),2);
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__is_ecall));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__is_mret));
    bufp->fullBit(oldp+978,(((0x10000000U <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_addr) 
                             & (0x10000fffU >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_addr))));
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state),2);
    bufp->fullIData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__wdata),32);
    bufp->fullCData(oldp+981,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ctrl 
                                     >> 7U))),3);
    bufp->fullCData(oldp+982,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__addr)),2);
    bufp->fullIData(oldp+983,((0xfffffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__addr)),32);
    bufp->fullBit(oldp+984,(((0x10000U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__addr 
                                           >> 0xcU)) 
                             | (0x80U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__addr 
                                          >> 0x18U)))));
    bufp->fullIData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[0]),32);
    bufp->fullIData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[1]),32);
    bufp->fullIData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[2]),32);
    bufp->fullIData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[3]),32);
    bufp->fullIData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[4]),32);
    bufp->fullIData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[5]),32);
    bufp->fullIData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[6]),32);
    bufp->fullIData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[7]),32);
    bufp->fullIData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[8]),32);
    bufp->fullIData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[9]),32);
    bufp->fullIData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[10]),32);
    bufp->fullIData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[11]),32);
    bufp->fullIData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[12]),32);
    bufp->fullIData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[13]),32);
    bufp->fullIData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[14]),32);
    bufp->fullIData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[15]),32);
    bufp->fullIData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[16]),32);
    bufp->fullIData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[17]),32);
    bufp->fullIData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[18]),32);
    bufp->fullIData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[19]),32);
    bufp->fullIData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[20]),32);
    bufp->fullIData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[21]),32);
    bufp->fullIData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[22]),32);
    bufp->fullIData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[23]),32);
    bufp->fullIData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[24]),32);
    bufp->fullIData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[25]),32);
    bufp->fullIData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[26]),32);
    bufp->fullIData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[27]),32);
    bufp->fullIData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[28]),32);
    bufp->fullIData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[29]),32);
    bufp->fullIData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[30]),32);
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__register[31]),32);
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state),2);
    bufp->fullBit(oldp+1018,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1022,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1025,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1028,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1031,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1042,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1043,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1044,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1045,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1047,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x1bU)) 
                                        | ((0xcU & 
                                            (8U ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                           | ((2U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x17U)) 
                                              | (1U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0xcU)))))))));
    bufp->fullBit(oldp+1048,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1050,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x1bU)) 
                                     | ((0xcU & (8U 
                                                 ^ 
                                                 (0x3cU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1aU)))) 
                                        | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x17U)) 
                                           | (1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0xcU))))))));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsbiu__DOT__AW_active));
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsbiu__DOT__W_active));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rtc_arvalid));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__AR_active));
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_data),8);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__cnt),3);
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state),2);
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bready));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_rready));
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__biu_rresp_ls));
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__biu_wresp_ls));
    bufp->fullIData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__biu_rdata_ls),32);
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_rvalid));
    bufp->fullIData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_rdata),32);
    bufp->fullCData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_rresp),2);
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bvalid));
    bufp->fullCData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid),4);
    bufp->fullCData(oldp+1102,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                      | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                           << 0x1eU) 
                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                              << 0x1cU) 
                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                 << 0x1aU) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                    << 0x18U) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                       << 0x16U) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                          << 0x14U) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                             << 0x12U) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                << 0x10U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                   << 0xeU) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                      << 0xcU) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                         << 0xaU) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                            << 8U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                               << 6U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid) 
                                                << 1U)))))),2);
    bufp->fullCData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullCData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullSData(oldp+1121,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid)))),16);
    bufp->fullBit(oldp+1122,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid)))));
    bufp->fullBit(oldp+1123,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1124,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1125,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1126,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1127,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1128,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1129,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1130,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1131,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1132,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1133,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1134,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1135,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1136,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1137,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rtc_rready));
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__R_active));
    bufp->fullIData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata),32);
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1166,(vlSelf->clock));
    bufp->fullBit(oldp+1167,(vlSelf->reset));
    bufp->fullSData(oldp+1168,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1169,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1170,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1171,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1172,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1173,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1174,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1175,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1176,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1177,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1178,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1179,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1180,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1181,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1182,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1183,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1184,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1185,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1186,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1187,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1189,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din),4);
    bufp->fullBit(oldp+1191,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1192,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1193,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1194,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_pready)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__sel_pending)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_flash_pready)
                                         : 0U)))));
    bufp->fullIData(oldp+1195,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_master_psel)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_prdata
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__sel_pending)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_flash_prdata
                                     : 0U))),32);
    bufp->fullIData(oldp+1196,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1197,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullBit(oldp+1198,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullQData(oldp+1199,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                 << 0x23U) | (((QData)((IData)(
                                                               ((1U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                               << 3U) 
                                              | (QData)((IData)(
                                                                (1U 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold) 
                                                                    << 1U))))))),39);
    bufp->fullQData(oldp+1201,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1203,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_wlast)))));
    bufp->fullBit(oldp+1204,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1205,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullBit(oldp+1206,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullBit(oldp+1207,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_id_pc),32);
    bufp->fullIData(oldp+1210,(((0x300U == (0xfffU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_regfile_init__DOT__mstatus
                                 : ((0x305U == (0xfffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_regfile_init__DOT__mtvec
                                     : ((0x341U == 
                                         (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm))
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_regfile_init__DOT__mepc
                                         : ((0x342U 
                                             == (0xfffU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm))
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_regfile_init__DOT__mcause
                                             : ((0xf11U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm))
                                                 ? 0x79737978U
                                                 : 
                                                ((0xf12U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm))
                                                  ? 0x17dedc5U
                                                  : 0U))))))),32);
    bufp->fullIData(oldp+1211,(((1U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ctrl 
                                              >> 0xeU)))
                                 ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm 
                                    + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc)
                                 : ((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ctrl 
                                                  >> 0xeU)))
                                     ? (0xfffffffeU 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__Alu_Result)
                                     : ((0x2000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ctrl)
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__Alu_Result
                                         : ((0x20000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ctrl)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_regfile_init__DOT__mtvec
                                             : ((0x40000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ctrl)
                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_regfile_init__DOT__mepc
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc))))))),32);
    bufp->fullCData(oldp+1212,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_arvalid)
                                     ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_arvalid)
                                              ? 2U : 0U))
                                 : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state))
                                     ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_rvalid) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_rready)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_rlast))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_arvalid)
                                             ? 1U : 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_arvalid)
                                              ? 2U : 0U))
                                         : 1U) : ((2U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state))
                                                   ? 
                                                  ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_rvalid) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_rready)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_rlast))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_arvalid)
                                                     ? 1U
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_arvalid)
                                                      ? 2U
                                                      : 0U))
                                                    : 2U)
                                                   : 0U)))),3);
    bufp->fullIData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_regfile_init__DOT__mtvec),32);
    bufp->fullIData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_regfile_init__DOT__mepc),32);
    bufp->fullBit(oldp+1215,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_arready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_arvalid))));
    bufp->fullBit(oldp+1216,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_rready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_rvalid))));
    bufp->fullBit(oldp+1217,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_bvalid))));
    bufp->fullBit(oldp+1218,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_arready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_arvalid))));
    bufp->fullBit(oldp+1219,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_rready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_rvalid))));
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__is_info_register));
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__is_en_display));
    bufp->fullIData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__i),32);
    bufp->fullBit(oldp+1223,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1225,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1228,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_data),8);
    bufp->fullBit(oldp+1234,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1236,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__psram__DOT__din),4);
    bufp->fullCData(oldp+1239,(1U),3);
    bufp->fullBit(oldp+1240,(0U));
    bufp->fullBit(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1250,(1U));
    bufp->fullCData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_awid),4);
    bufp->fullIData(oldp+1252,(0U),32);
    bufp->fullCData(oldp+1253,(0U),4);
    bufp->fullCData(oldp+1254,(0U),8);
    bufp->fullCData(oldp+1255,(0U),3);
    bufp->fullCData(oldp+1256,(0U),2);
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullBit(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullIData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_done));
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi4_arid),4);
    bufp->fullCData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi4_arid),4);
    bufp->fullIData(oldp+1271,(0xa0000048U),32);
    bufp->fullCData(oldp+1272,(2U),3);
    bufp->fullIData(oldp+1273,(0U),32);
    bufp->fullIData(oldp+1274,(1U),32);
    bufp->fullIData(oldp+1275,(2U),32);
    bufp->fullIData(oldp+1276,(0x79737978U),32);
    bufp->fullIData(oldp+1277,(0x17dedc5U),32);
    bufp->fullIData(oldp+1278,(0x1800U),32);
    bufp->fullIData(oldp+1279,(0x80U),32);
    bufp->fullIData(oldp+1280,(8U),32);
    bufp->fullCData(oldp+1281,(3U),7);
    bufp->fullCData(oldp+1282,(0x23U),7);
    bufp->fullCData(oldp+1283,(0x63U),7);
    bufp->fullCData(oldp+1284,(0x6fU),7);
    bufp->fullCData(oldp+1285,(0x67U),7);
    bufp->fullCData(oldp+1286,(0x13U),7);
    bufp->fullCData(oldp+1287,(0x33U),7);
    bufp->fullCData(oldp+1288,(0x37U),7);
    bufp->fullCData(oldp+1289,(0x17U),7);
    bufp->fullCData(oldp+1290,(0x73U),7);
    bufp->fullCData(oldp+1291,(3U),3);
    bufp->fullCData(oldp+1292,(4U),3);
    bufp->fullCData(oldp+1293,(5U),3);
    bufp->fullCData(oldp+1294,(6U),3);
    bufp->fullCData(oldp+1295,(7U),3);
    bufp->fullCData(oldp+1296,(0x20U),7);
    bufp->fullCData(oldp+1297,(0U),7);
    bufp->fullCData(oldp+1298,(1U),4);
    bufp->fullCData(oldp+1299,(2U),4);
    bufp->fullCData(oldp+1300,(3U),4);
    bufp->fullCData(oldp+1301,(4U),4);
    bufp->fullCData(oldp+1302,(5U),4);
    bufp->fullCData(oldp+1303,(6U),4);
    bufp->fullCData(oldp+1304,(7U),4);
    bufp->fullCData(oldp+1305,(8U),4);
    bufp->fullCData(oldp+1306,(0xaU),4);
    bufp->fullCData(oldp+1307,(9U),4);
    bufp->fullCData(oldp+1308,(1U),2);
    bufp->fullCData(oldp+1309,(2U),2);
    bufp->fullSData(oldp+1310,(0U),12);
    bufp->fullSData(oldp+1311,(1U),12);
    bufp->fullSData(oldp+1312,(0x302U),12);
    bufp->fullIData(oldp+1313,(0x14U),32);
    bufp->fullIData(oldp+1314,(8U),32);
    bufp->fullIData(oldp+1315,(0x10000000U),32);
    bufp->fullIData(oldp+1316,(0x10000fffU),32);
    bufp->fullCData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rs1),5);
    bufp->fullCData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rs2),5);
    bufp->fullCData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rd),5);
    bufp->fullIData(oldp+1320,(3U),32);
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__has_data));
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wen));
    bufp->fullBit(oldp+1323,(0U));
    bufp->fullBit(oldp+1324,(1U));
    bufp->fullCData(oldp+1325,(0x1bU),8);
    bufp->fullCData(oldp+1326,(0xebU),8);
    bufp->fullCData(oldp+1327,(0x38U),8);
    bufp->fullIData(oldp+1328,(0x64U),32);
    bufp->fullIData(oldp+1329,(0x18U),32);
    bufp->fullIData(oldp+1330,(9U),32);
    bufp->fullIData(oldp+1331,(4U),32);
    bufp->fullIData(oldp+1332,(0xdU),32);
    bufp->fullIData(oldp+1333,(0x2000U),32);
    bufp->fullIData(oldp+1334,(0x2710U),32);
    bufp->fullIData(oldp+1335,(0x30cU),32);
    bufp->fullSData(oldp+1336,(0x21U),13);
    bufp->fullIData(oldp+1337,(0xaU),32);
    bufp->fullIData(oldp+1338,(0x10U),32);
    bufp->fullIData(oldp+1339,(6U),32);
    bufp->fullIData(oldp+1340,(0x11U),32);
    bufp->fullIData(oldp+1341,(0x30000000U),32);
    bufp->fullIData(oldp+1342,(0x3fffffffU),32);
    bufp->fullCData(oldp+1343,(0x40U),7);
    bufp->fullIData(oldp+1344,(0x3440U),32);
    bufp->fullCData(oldp+1345,(3U),2);
    bufp->fullIData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__init_addrs[0]),32);
    bufp->fullIData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__init_addrs[1]),32);
    bufp->fullIData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__init_addrs[2]),32);
    bufp->fullIData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__init_data[0]),32);
    bufp->fullIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__init_data[1]),32);
    bufp->fullIData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__init_data[2]),32);
    bufp->fullIData(oldp+1352,(0xbU),32);
    bufp->fullIData(oldp+1353,(5U),32);
}
