module clk_divider #(parameter WIDTH=5)
(
	input clk,
	input reset_n,
	input clk_en_in,
	input [WIDTH-1:0] div_ratio_in,
	output wire div_clk_out
);

reg [WIDTH-1:0] count;

always @(posedge clk or negedge reset_n) begin : proc_count
	if(~reset_n) begin
		count <= 0;
	end else if(!clk_en_in) begin
		count <= 0;
	end
	else if(clk_en_in)
	begin
		count <= count + 1;
		if(count == div_ratio_in)
			count <= 'd1;
	end
end

assign div_clk_out = (count != 'd0 && (count <= div_ratio_in/2))? 1'b1 : 0;

endmodule