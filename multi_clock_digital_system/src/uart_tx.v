`include "uart_config.v"

module uart_tx
(
	input clk,
	input reset_n,
	input data_valid_in,
	input par_en_in,
	input [`WIDTH-1:0] data_in,
	input par_type_in,

	output wire busy_out,
	output wire tx_out
);

wire ser_en, ser_done, parity_bit; 
wire [1:0] mux_sel;
wire ser_data;
uart_tx_fsm uart_tx_fsm_inst
(
	.clk(clk),
	.reset_n(reset_n),
	.par_en_in(par_en_in),
	.ser_done_in(ser_done),
	.data_valid_in(data_valid_in),

	.ser_en_out(ser_en),
	.busy_out(busy_out),
	.mux_sel_out(mux_sel)
);

parity_calc parity_calc_inst
(
	.clk(clk),
	.reset_n(reset_n),
	.data_in(data_in),
	.par_type_in(par_type_in),
	.data_valid_in(data_valid_in),

	.par_bit_out(parity_bit)
);

serializer serializer_inst
(
	.clk(clk),
	.reset_n(reset_n),
	.data_in(data_in),
	.ser_en_in(ser_en),
	.data_valid_in(data_valid_in),
	.busy_in(busy_out),

	.ser_done_out(ser_done),
	.ser_data(ser_data)
);

mux mux_inst
(
	.mux_sel_in(mux_sel),
	.data_in(ser_data),
	.par_bit_in(parity_bit),

	.tx_out(tx_out)
);

endmodule