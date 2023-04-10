`include "uart_config.v"

module system_top(
	input ref_clk,
	input uart_clk,
	input reset_n,

	input rx_in,
	output wire tx_out
);


wire [`WIDTH-1:0] rf_rd_data;
wire rf_rd_data_valid;
wire [2*`WIDTH-1:0] alu_data;
wire alu_data_valid;

wire [`WIDTH-1:0] uart_rx_data;
wire uart_rx_data_valid;
wire [`WIDTH-1:0] sync_uart_rx_data;
wire sync_uart_rx_data_valid;

wire uart_tx_busy, sync_uart_tx_busy;

wire rf_wr_en;
wire rf_rd_en;
wire [`ADDR-1:0] rf_addr;
wire [`WIDTH-1:0] rf_wr_data;
wire alu_en;
wire [3:0] alu_fun;
wire clk_gate_en;
wire clk_div_en;

wire uart_tx_data_valid;
wire [`WIDTH-1:0] uart_tx_data;
wire sync_uart_tx_data_valid;
wire [`WIDTH-1:0] sync_uart_tx_data;

wire [`WIDTH-1:0] reg_0_op_a;
wire [`WIDTH-1:0] reg_1_op_b;
wire [`WIDTH-1:0] reg_2_uart_config;
wire [`WIDTH-1:0] reg_3_div;

wire alu_clk;
wire uart_tx_clk;
wire sync_reset_n_ref_clk;
wire sync_reset_n_uart_clk;

sys_control sys_control_inst
(
    .clk(ref_clk),
    .reset_n(sync_reset_n_ref_clk),
    .rf_rd_data_in(rf_rd_data),
    .rf_rd_data_valid_in(rf_rd_data_valid),
    .alu_data_in(alu_data),
    .alu_data_valid_in(alu_data_valid),
    .uart_rx_data_in(sync_uart_rx_data),
    .uart_rx_data_valid_in(sync_uart_rx_data_valid),
    .uart_tx_busy_in(sync_uart_tx_busy),

    .rf_wr_en_out(rf_wr_en),
    .rf_rd_en_out(rf_rd_en),
    .rf_addr_out(rf_addr),
    .rf_wr_data_out(rf_wr_data),
    .alu_en_out(alu_en),
    .alu_fun_out(alu_fun),
    .clk_gate_en_out(clk_gate_en),
    .clk_div_en_out(clk_div_en),
    .uart_tx_data_valid_out(uart_tx_data_valid),
    .uart_tx_data_out(uart_tx_data)
);

reg_file reg_file_inst
(
	.clk(ref_clk),
	.reset_n(sync_reset_n_ref_clk),
	.wr_en_in(rf_wr_en),
	.rd_en_in(rf_rd_en),
	.addr_in(rf_addr),
	.wr_data_in(rf_wr_data),

	.rd_data_out(rf_rd_data),
	.rd_data_valid_out(rf_rd_data_valid),
	.reg_0_out(reg_0_op_a),
	.reg_1_out(reg_1_op_b),
	.reg_2_out(reg_2_uart_config),
	.reg_3_out(reg_3_div)	
);

alu alu_inst 
(
	.data_a_in(reg_0_op_a), 
  	.data_b_in(reg_1_op_b),
	.en_in(alu_en),
	.alu_func_in(alu_fun),
	.clk(alu_clk),
	.reset_n(sync_reset_n_ref_clk),  
	.data_out(alu_data),
   	.data_valid_out(alu_data_valid)  
);

uart_top uart_top_inst (
	.data_tx_in(sync_uart_tx_data),
	.data_rx_in(rx_in),
    .data_tx_valid_in(sync_uart_tx_data_valid),
    .clk_rx(uart_clk),
    .clk_tx(uart_tx_clk),
  	.par_en_in(reg_2_uart_config[0]),
    .reset_n(sync_reset_n_uart_clk),
    .par_type_in(reg_2_uart_config[1]),
	.prescale_in(reg_2_uart_config[6:2]),

    .data_tx_valid_out(uart_tx_busy),
   	.data_rx_valid_out(uart_rx_data_valid),
    .data_tx_out(tx_out),
    .data_rx_out(uart_rx_data)
);

clk_divider clk_divider_inst
(
	.clk(uart_clk),
	.reset_n(sync_reset_n_uart_clk),
	.clk_en_in(clk_div_en),
	.div_ratio_in(reg_3_div[4:0]),
	.div_clk_out(uart_tx_clk)
);

clk_gate clk_gate_inst
(
	.clk_en_in(clk_gate_en),
	.clk(ref_clk),
	.gated_clk_out(alu_clk)
);

data_synchronizer data_synchronizer_inst_0
(
	.clk(ref_clk),
	.reset_n(sync_reset_n_ref_clk),
	.bus_enable_in(uart_rx_data_valid),
	.unsync_data_in(uart_rx_data),
	.enable_pulse_out(sync_uart_rx_data_valid),
	.sync_data_out(sync_uart_rx_data)
);

data_synchronizer data_synchronizer_inst_1
(
	.clk(uart_tx_clk),
	.reset_n(sync_reset_n_uart_clk),
	.bus_enable_in(uart_tx_data_valid),
	.unsync_data_in(uart_tx_data),
	.enable_pulse_out(sync_uart_tx_data_valid),
	.sync_data_out(sync_uart_tx_data)
);

reset_synchronizer reset_synchronizer_inst_0
(
	.clk(ref_clk),
	.reset_n(reset_n),
	.sync_reset_n_out(sync_reset_n_ref_clk)
);

reset_synchronizer reset_synchronizer_inst_1
(
	.clk(uart_clk),
	.reset_n(reset_n),
	.sync_reset_n_out(sync_reset_n_uart_clk)
);

bit_synchronizer bit_synchronizer_inst
(
	.clk(ref_clk),
	.reset_n(sync_reset_n_ref_clk),
	.async_data_in(uart_tx_busy),
	.sync_data_out(sync_uart_tx_busy)
);

endmodule