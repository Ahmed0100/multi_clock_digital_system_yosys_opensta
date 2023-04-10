module strt_check (
	input sampled_bit_in,
	input strt_chk_en_in,
	output reg strt_err_out
);

always @(*) begin : proc_strt_err_out
	if(strt_chk_en_in)
	begin
		if(!sampled_bit_in)
			strt_err_out = 0;
		else 
			strt_err_out = 1;
	end
	else
		strt_err_out = 0;
end

endmodule