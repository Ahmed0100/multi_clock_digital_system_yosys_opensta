module stp_check (
	input sampled_bit_in,
	input stp_chk_en_in,
	output reg stp_err_out
);

always @(*) begin : proc_stp_err_out
	if(stp_chk_en_in)
	begin
		if(sampled_bit_in)
			stp_err_out = 0;
		else 
			stp_err_out = 1;
	end
	else
		stp_err_out = 0;
end

endmodule