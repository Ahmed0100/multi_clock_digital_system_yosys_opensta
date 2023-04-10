module data_synchronizer
#(parameter NUM_OF_STAGES=3,BUS_WIDTH=8)
(
	input clk,
	input reset_n,
	input bus_enable_in,
	input [BUS_WIDTH-1:0] unsync_data_in,
	output reg enable_pulse_out,
	output reg [BUS_WIDTH-1:0] sync_data_out
);

reg [NUM_OF_STAGES-1:0] ff;
wire pulse_gen;

assign pulse_gen = ff[1] & !ff[0];

always @(posedge clk or negedge reset_n) begin : proc_ff
	if(~reset_n) begin
		ff <= 'b0;
	end else begin
		ff <= {bus_enable_in,ff[NUM_OF_STAGES-1:1]};
	end
end

always @(posedge clk or negedge reset_n) begin : proc_enable_pulse_out
	if(~reset_n) begin
		enable_pulse_out <= 'b0;
	end else begin
		enable_pulse_out <= pulse_gen;
	end
end

always @(posedge clk or negedge reset_n) begin : proc_sync_data_out
	if(~reset_n) begin
		sync_data_out <= 'b0;
	end else if(pulse_gen) begin
		sync_data_out <= unsync_data_in;
	end
end

endmodule