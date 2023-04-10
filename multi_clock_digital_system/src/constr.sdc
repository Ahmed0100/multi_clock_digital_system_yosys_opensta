####################################################################################
# constraints
# ----------------------------------------------------------------------------
#
# 0. design compiler variables
#
# 1. master clock definitions
#
# 2. generated clock definitions
#
# 3. clock uncertainties
#
# 4. clock latencies 
#
# 5. clock relationships
#
# 6. set input/output delay on ports
#
# 7. driving cells
#
# 8. output load

####################################################################################
#dc variables
#set_fix_multiple_port_nets -all -buffer_constants -feedthroughs
#clk defs

#ref clk 50 MHZ
set CLK_1_NAME REF_CLK
set CLK_1_PER 20

#uart rx clk (115.2 KHZ * 8)
set CLK_2_NAME UART_CLK
set CLK_2_PER 1085

#skew
set CLK_SETUP_SKEW 0.2
set CLK_HOLD_SKEW 0.1

#master clk
create_clock -name $CLK_1_NAME -period $CLK_1_PER -waveform "0 [expr $CLK_1_PER/2]" [get_ports ref_clk]
set_clock_uncertainty -setup $CLK_SETUP_SKEW [get_clocks $CLK_1_NAME]
set_clock_uncertainty -hold $CLK_HOLD_SKEW [get_clocks $CLK_1_NAME]

create_clock -name $CLK_2_NAME -period $CLK_2_PER -waveform "0 [expr $CLK_2_PER/2]" [get_ports uart_clk]
set_clock_uncertainty -setup $CLK_SETUP_SKEW [get_clocks $CLK_2_NAME]
set_clock_uncertainty -hold $CLK_HOLD_SKEW [get_clocks $CLK_2_NAME]

#generated clks
create_generated_clock -master_clock $CLK_2_NAME -source [get_ports uart_clk] -name "UART_TX_CLK" [get_pins _2442_/Y] -divide_by 8

create_generated_clock -master_clock $CLK_1_NAME -source [get_ports ref_clk] -name "ALU_CLK" [get_pins LATCH_INST/Q] -divide_by 1
#clk relationship
set_clock_groups -asynchronous -group [get_clocks "$CLK_1_NAME ALU_CLK"] group [get_clocks "$CLK_2_NAME UART_TX_CLK"]