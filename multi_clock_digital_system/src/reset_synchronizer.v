module reset_synchronizer #(parameter NUM_OF_STAGES=3)
(
	input clk,
	input reset_n,
	output wire sync_reset_n_out
);

reg [NUM_OF_STAGES-1:0] ff;

always @(posedge clk or negedge reset_n) begin : proc_sync_reset_n_out
	if(~reset_n) begin
		ff <= 0;
	end else begin
		ff <= {1'h1, ff[NUM_OF_STAGES-1:1]};
	end
end

assign sync_reset_n_out = ff[0];

endmodule