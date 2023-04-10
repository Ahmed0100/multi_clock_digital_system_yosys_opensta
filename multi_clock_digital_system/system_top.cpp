#include <backends/cxxrtl/cxxrtl.h>

#if defined(CXXRTL_INCLUDE_CAPI_IMPL) || \
    defined(CXXRTL_INCLUDE_VCD_CAPI_IMPL)
#include <backends/cxxrtl/cxxrtl_capi.cc>
#endif

#if defined(CXXRTL_INCLUDE_VCD_CAPI_IMPL)
#include <backends/cxxrtl/cxxrtl_vcd_capi.cc>
#endif

using namespace cxxrtl_yosys;

namespace cxxrtl_design {

// \top: 1
// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:3.1-177.10
struct p_system__top : public module {
	// \hdlname: bit_synchronizer_inst sync_data_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:169.18-175.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/bit_synchronizer.v:6.25-6.38
	wire<1> p_bit__synchronizer__inst_2e_sync__data__out;
	// \hdlname: bit_synchronizer_inst i
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:169.18-175.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/bit_synchronizer.v:11.9-11.10
	wire<32> p_bit__synchronizer__inst_2e_i;
	// \nosync: 1
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:169.18-175.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/bit_synchronizer.v:0.0-0.0
	wire<3> i_flatten_5c_bit__synchronizer__inst_2e__24_splitcmplxassign_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_bit__synchronizer_2e_v_3a_24_24_3;
	// \hdlname: bit_synchronizer_inst reg_file[0]
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:169.18-175.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/bit_synchronizer.v:9.24-9.32
	wire<2> p_bit__synchronizer__inst_2e_reg__file_5b_0_5d_;
	// \hdlname: reset_synchronizer_inst_1 ff
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:162.20-167.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reset_synchronizer.v:8.25-8.27
	wire<3> p_reset__synchronizer__inst__1_2e_ff;
	// \hdlname: reset_synchronizer_inst_0 ff
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:155.20-160.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reset_synchronizer.v:8.25-8.27
	wire<3> p_reset__synchronizer__inst__0_2e_ff;
	// \hdlname: data_synchronizer_inst_1 enable_pulse_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:145.19-153.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:8.13-8.29
	wire<1> p_data__synchronizer__inst__1_2e_enable__pulse__out;
	// \hdlname: data_synchronizer_inst_1 sync_data_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:145.19-153.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:9.29-9.42
	wire<8> p_data__synchronizer__inst__1_2e_sync__data__out;
	// \hdlname: data_synchronizer_inst_1 ff
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:145.19-153.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:12.25-12.27
	wire<3> p_data__synchronizer__inst__1_2e_ff;
	// \hdlname: data_synchronizer_inst_0 enable_pulse_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:135.19-143.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:8.13-8.29
	wire<1> p_data__synchronizer__inst__0_2e_enable__pulse__out;
	// \hdlname: data_synchronizer_inst_0 sync_data_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:135.19-143.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:9.29-9.42
	wire<8> p_data__synchronizer__inst__0_2e_sync__data__out;
	// \hdlname: data_synchronizer_inst_0 ff
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:135.19-143.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:12.25-12.27
	wire<3> p_data__synchronizer__inst__0_2e_ff;
	// \hdlname: clk_gate_inst latch_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:128.10-133.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/clk_gate.v:7.5-7.14
	wire<1> p_clk__gate__inst_2e_latch__out;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:128.10-133.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/clk_gate.v:15.24-15.40
	value<1> i_flatten_5c_clk__gate__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__gate_2e_v_3a_15_24_20__Y;
	value<1> prev_i_flatten_5c_clk__gate__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__gate_2e_v_3a_15_24_20__Y;
	bool posedge_i_flatten_5c_clk__gate__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__gate_2e_v_3a_15_24_20__Y() const {
		return !prev_i_flatten_5c_clk__gate__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__gate_2e_v_3a_15_24_20__Y.slice<0>().val() && i_flatten_5c_clk__gate__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__gate_2e_v_3a_15_24_20__Y.slice<0>().val();
	}
	// \hdlname: clk_divider_inst count
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:119.13-126.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/clk_divider.v:10.17-10.22
	wire<5> p_clk__divider__inst_2e_count;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:119.13-126.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/clk_divider.v:26.22-26.75
	value<32> i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y;
	value<32> prev_i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y;
	bool posedge_i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y_0() const {
		return !prev_i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y.slice<0>().val() && i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y.slice<0>().val();
	}
	// \hdlname: uart_top_inst uart_tx_inst serializer_inst counter
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:43.12-54.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/serializer.v:14.11-14.18|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	wire<3> p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_counter;
	// \hdlname: uart_top_inst uart_tx_inst serializer_inst int_reg
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:43.12-54.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/serializer.v:15.11-15.18|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	wire<8> p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_int__reg;
	// \hdlname: uart_top_inst uart_tx_inst parity_calc_inst par_bit_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:32.13-41.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/parity_calc.v:9.13-9.24|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	wire<1> p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_par__bit__out;
	// \hdlname: uart_top_inst uart_tx_inst uart_tx_fsm_inst busy_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:19.13-30.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:12.13-12.21|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	wire<1> p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_busy__out;
	// \hdlname: uart_top_inst uart_tx_inst uart_tx_fsm_inst current_state
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:19.13-30.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:22.23-22.36|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	wire<3> p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state;
	// \hdlname: uart_top_inst uart_rx_inst parity_check_inst register
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:79.14-87.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/parity_check.v:10.17-10.25|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	wire<9> p_uart__top__inst_2e_uart__rx__inst_2e_parity__check__inst_2e_register;
	// \hdlname: uart_top_inst uart_rx_inst deserializer_inst register
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:70.14-77.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/deserializer.v:13.13-13.21|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	wire<8> p_uart__top__inst_2e_uart__rx__inst_2e_deserializer__inst_2e_register;
	// \hdlname: uart_top_inst uart_rx_inst edge_bit_counter_inst bit_cnt_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:59.18-68.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/edge_bit_counter.v:8.19-8.30|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	wire<4> p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_bit__cnt__out;
	// \hdlname: uart_top_inst uart_rx_inst edge_bit_counter_inst edge_cnt_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:59.18-68.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/edge_bit_counter.v:9.19-9.31|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	wire<5> p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out;
	// \hdlname: uart_top_inst uart_rx_inst data_sampling_inst register
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:49.15-57.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:12.11-12.19|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	wire<3> p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register;
	// \hdlname: uart_top_inst uart_rx_inst uart_rx_fsm_inst current_state
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:22.11-22.24|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	wire<3> p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state;
	// \hdlname: alu_inst data_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:90.5-100.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:11.36-11.44
	wire<16> p_alu__inst_2e_data__out;
	// \hdlname: alu_inst data_valid_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:90.5-100.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:12.31-12.45
	wire<1> p_alu__inst_2e_data__valid__out;
	// \hdlname: reg_file_inst rd_data_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:10.25-10.36
	wire<8> p_reg__file__inst_2e_rd__data__out;
	// \hdlname: reg_file_inst rd_data_valid_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:11.13-11.30
	wire<1> p_reg__file__inst_2e_rd__data__valid__out;
	// \hdlname: reg_file_inst i
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:18.9-18.10
	wire<32> p_reg__file__inst_2e_i;
	// \hdlname: reg_file_inst mem[0]
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:19.17-19.20
	wire<8> p_reg__file__inst_2e_mem_5b_0_5d_;
	// \hdlname: reg_file_inst mem[1]
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:19.17-19.20
	wire<8> p_reg__file__inst_2e_mem_5b_1_5d_;
	// \hdlname: reg_file_inst mem[2]
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:19.17-19.20
	wire<8> p_reg__file__inst_2e_mem_5b_2_5d_;
	// \hdlname: reg_file_inst mem[3]
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:19.17-19.20
	wire<8> p_reg__file__inst_2e_mem_5b_3_5d_;
	// \hdlname: reg_file_inst mem[4]
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:19.17-19.20
	wire<8> p_reg__file__inst_2e_mem_5b_4_5d_;
	// \hdlname: reg_file_inst mem[5]
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:19.17-19.20
	wire<8> p_reg__file__inst_2e_mem_5b_5_5d_;
	// \hdlname: reg_file_inst mem[6]
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:19.17-19.20
	wire<8> p_reg__file__inst_2e_mem_5b_6_5d_;
	// \hdlname: reg_file_inst mem[7]
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:19.17-19.20
	wire<8> p_reg__file__inst_2e_mem_5b_7_5d_;
	// \hdlname: reg_file_inst mem[8]
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:19.17-19.20
	wire<8> p_reg__file__inst_2e_mem_5b_8_5d_;
	// \hdlname: reg_file_inst mem[9]
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:19.17-19.20
	wire<8> p_reg__file__inst_2e_mem_5b_9_5d_;
	// \hdlname: reg_file_inst mem[10]
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:19.17-19.20
	wire<8> p_reg__file__inst_2e_mem_5b_10_5d_;
	// \hdlname: reg_file_inst mem[11]
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:19.17-19.20
	wire<8> p_reg__file__inst_2e_mem_5b_11_5d_;
	// \hdlname: reg_file_inst mem[12]
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:19.17-19.20
	wire<8> p_reg__file__inst_2e_mem_5b_12_5d_;
	// \hdlname: reg_file_inst mem[13]
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:19.17-19.20
	wire<8> p_reg__file__inst_2e_mem_5b_13_5d_;
	// \hdlname: reg_file_inst mem[14]
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:19.17-19.20
	wire<8> p_reg__file__inst_2e_mem_5b_14_5d_;
	// \hdlname: reg_file_inst mem[15]
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:19.17-19.20
	wire<8> p_reg__file__inst_2e_mem_5b_15_5d_;
	// \nosync: 1
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:0.0-0.0
	wire<4> i_flatten_5c_reg__file__inst_2e__24_mem2reg__wr_24__5c_mem_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_38_24_54__ADDR;
	// \nosync: 1
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:0.0-0.0
	wire<8> i_flatten_5c_reg__file__inst_2e__24_mem2reg__wr_24__5c_mem_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_38_24_54__DATA;
	// \nosync: 1
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:0.0-0.0
	wire<4> i_flatten_5c_reg__file__inst_2e__24_mem2reg__rd_24__5c_mem_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_42_24_55__ADDR;
	// \nosync: 1
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:0.0-0.0
	wire<8> i_flatten_5c_reg__file__inst_2e__24_mem2reg__rd_24__5c_mem_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_42_24_55__DATA;
	// \hdlname: sys_control_inst sys_control_rx_inst rf_addr_reg
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:48.11-48.22|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	wire<8> p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__reg;
	// \hdlname: sys_control_inst sys_control_rx_inst current_state
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:46.11-46.24|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	wire<4> p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state;
	// \hdlname: sys_control_inst sys_control_rx_inst uart_alu_send_data_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:26.30-26.52|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	wire<16> p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__data__out;
	// \hdlname: sys_control_inst sys_control_rx_inst uart_rf_send_data_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:25.28-25.49|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	wire<8> p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rf__send__data__out;
	// \hdlname: sys_control_inst sys_control_tx_inst current_state
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_tx.v:20.11-20.24|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:58.16-70.2
	wire<3> p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:9.14-9.20
	/*output*/ value<1> p_tx__out;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:8.8-8.13
	/*input*/ value<1> p_rx__in;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:6.8-6.15
	/*input*/ value<1> p_reset__n;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:5.8-5.16
	/*input*/ value<1> p_uart__clk;
	value<1> prev_p_uart__clk;
	bool posedge_p_uart__clk() const {
		return !prev_p_uart__clk.slice<0>().val() && p_uart__clk.slice<0>().val();
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:4.8-4.15
	/*input*/ value<1> p_ref__clk;
	value<1> prev_p_ref__clk;
	bool posedge_p_ref__clk() const {
		return !prev_p_ref__clk.slice<0>().val() && p_ref__clk.slice<0>().val();
	}
	// \hdlname: reset_synchronizer_inst_1 sync_reset_n_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:162.20-167.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reset_synchronizer.v:5.14-5.30
	/*outline*/ value<1> p_reset__synchronizer__inst__1_2e_sync__reset__n__out;
	// \hdlname: reset_synchronizer_inst_0 sync_reset_n_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:155.20-160.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reset_synchronizer.v:5.14-5.30
	/*outline*/ value<1> p_reset__synchronizer__inst__0_2e_sync__reset__n__out;
	// \hdlname: data_synchronizer_inst_1 pulse_gen
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:145.19-153.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:13.6-13.15
	/*outline*/ value<1> p_data__synchronizer__inst__1_2e_pulse__gen;
	// \hdlname: data_synchronizer_inst_0 pulse_gen
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:135.19-143.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:13.6-13.15
	/*outline*/ value<1> p_data__synchronizer__inst__0_2e_pulse__gen;
	// \hdlname: clk_divider_inst div_ratio_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:119.13-126.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/clk_divider.v:6.20-6.32
	/*outline*/ value<5> p_clk__divider__inst_2e_div__ratio__in;
	// \hdlname: clk_divider_inst div_clk_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:119.13-126.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/clk_divider.v:7.14-7.25
	/*outline*/ value<1> p_clk__divider__inst_2e_div__clk__out;
	// \hdlname: uart_top_inst par_en_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:8.28-8.37
	/*outline*/ value<1> p_uart__top__inst_2e_par__en__in;
	// \hdlname: uart_top_inst par_type_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:10.28-10.39
	/*outline*/ value<1> p_uart__top__inst_2e_par__type__in;
	// \hdlname: uart_top_inst prescale_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:11.28-11.39
	/*outline*/ value<5> p_uart__top__inst_2e_prescale__in;
	// \hdlname: uart_top_inst uart_tx_inst mux_inst tx_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:56.5-63.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/mux.v:5.13-5.19|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	/*outline*/ value<1> p_uart__top__inst_2e_uart__tx__inst_2e_mux__inst_2e_tx__out;
	// \hdlname: uart_top_inst uart_tx_inst serializer_inst ser_done_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:43.12-54.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/serializer.v:10.14-10.26|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	/*outline*/ value<1> p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_ser__done__out;
	// \hdlname: uart_top_inst uart_tx_inst serializer_inst ser_data
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:43.12-54.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/serializer.v:11.14-11.22|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	/*outline*/ value<1> p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_ser__data;
	// \hdlname: uart_top_inst uart_tx_inst uart_tx_fsm_inst ser_en_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:19.13-30.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:11.14-11.24|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	/*outline*/ value<1> p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_ser__en__out;
	// \hdlname: uart_top_inst uart_tx_inst uart_tx_fsm_inst mux_sel_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:19.13-30.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:13.19-13.30|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	/*outline*/ value<2> p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_mux__sel__out;
	// \hdlname: uart_top_inst uart_tx_inst uart_tx_fsm_inst next_state
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:19.13-30.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:22.11-22.21|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	/*outline*/ value<3> p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_next__state;
	// \hdlname: uart_top_inst uart_rx_inst strt_check_inst strt_err_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:89.12-93.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/strt_check.v:4.13-4.25|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	/*outline*/ value<1> p_uart__top__inst_2e_uart__rx__inst_2e_strt__check__inst_2e_strt__err__out;
	// \hdlname: uart_top_inst uart_rx_inst deserializer_inst data_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:70.14-77.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/deserializer.v:10.22-10.30|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	/*outline*/ value<8> p_uart__top__inst_2e_uart__rx__inst_2e_deserializer__inst_2e_data__out;
	// \hdlname: uart_top_inst uart_rx_inst data_sampling_inst sampled_bit_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:49.15-57.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:9.9-9.24|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	/*outline*/ value<1> p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_sampled__bit__out;
	// \hdlname: uart_top_inst uart_rx_inst uart_rx_fsm_inst data_sample_en_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:13.13-13.31|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	/*outline*/ value<1> p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_data__sample__en__out;
	// \hdlname: uart_top_inst uart_rx_inst uart_rx_fsm_inst deser_en_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:14.13-14.25|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	/*outline*/ value<1> p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_deser__en__out;
	// \hdlname: uart_top_inst uart_rx_inst uart_rx_fsm_inst data_valid_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:15.13-15.27|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	/*outline*/ value<1> p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_data__valid__out;
	// \hdlname: uart_top_inst uart_rx_inst uart_rx_fsm_inst strt_chk_en_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:17.13-17.28|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	/*outline*/ value<1> p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_strt__chk__en__out;
	// \hdlname: uart_top_inst uart_rx_inst uart_rx_fsm_inst counter_en_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:19.13-19.27|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	/*outline*/ value<1> p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_counter__en__out;
	// \hdlname: uart_top_inst uart_rx_inst uart_rx_fsm_inst next_state
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:22.25-22.35|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	/*outline*/ value<3> p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_next__state;
	// \hdlname: alu_inst alu_out_comp
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:90.5-100.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:16.26-16.38
	/*outline*/ value<16> p_alu__inst_2e_alu__out__comp;
	// \hdlname: alu_inst alu_out_comp_valid
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:90.5-100.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:17.21-17.39
	/*outline*/ value<1> p_alu__inst_2e_alu__out__comp__valid;
	// \hdlname: reg_file_inst addr_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:7.19-7.26
	/*outline*/ value<4> p_reg__file__inst_2e_addr__in;
	// \hdlname: sys_control_inst sys_control_rx_inst alu_data_store
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:49.30-49.44|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	/*outline*/ value<1> p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__data__store;
	// \hdlname: sys_control_inst sys_control_rx_inst rf_rd_store
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:49.17-49.28|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	/*outline*/ value<1> p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__rd__store;
	// \hdlname: sys_control_inst sys_control_rx_inst rf_addr_en
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:49.5-49.15|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	/*outline*/ value<1> p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__en;
	// \hdlname: sys_control_inst sys_control_rx_inst next_state
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:46.26-46.36|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	/*outline*/ value<4> p_sys__control__inst_2e_sys__control__rx__inst_2e_next__state;
	// \hdlname: sys_control_inst sys_control_rx_inst uart_alu_send_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:24.16-24.33|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	/*outline*/ value<1> p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__out;
	// \hdlname: sys_control_inst sys_control_rx_inst uart_rf_send_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:23.16-23.32|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	/*outline*/ value<1> p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rf__send__out;
	// \hdlname: sys_control_inst sys_control_rx_inst rf_wr_data_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:21.28-21.42|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	/*outline*/ value<8> p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out;
	// \hdlname: sys_control_inst sys_control_rx_inst rf_addr_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:20.27-20.38|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	/*outline*/ value<4> p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__out;
	// \hdlname: sys_control_inst sys_control_rx_inst rf_rd_en_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:19.16-19.28|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	/*outline*/ value<1> p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__rd__en__out;
	// \hdlname: sys_control_inst sys_control_rx_inst rf_wr_en_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:18.16-18.28|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	/*outline*/ value<1> p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__en__out;
	// \hdlname: sys_control_inst sys_control_rx_inst clk_gate_en_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:15.16-15.31|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	/*outline*/ value<1> p_sys__control__inst_2e_sys__control__rx__inst_2e_clk__gate__en__out;
	// \hdlname: sys_control_inst sys_control_rx_inst alu_fun_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:13.22-13.33|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	/*outline*/ value<4> p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out;
	// \hdlname: sys_control_inst sys_control_rx_inst alu_en_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:12.16-12.26|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	/*outline*/ value<1> p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__en__out;
	// \hdlname: sys_control_inst sys_control_tx_inst next_state
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_tx.v:20.26-20.36|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:58.16-70.2
	/*outline*/ value<3> p_sys__control__inst_2e_sys__control__tx__inst_2e_next__state;
	// \hdlname: sys_control_inst sys_control_tx_inst uart_tx_data_valid_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_tx.v:11.16-11.38|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:58.16-70.2
	/*outline*/ value<1> p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__tx__data__valid__out;
	// \hdlname: sys_control_inst sys_control_tx_inst uart_tx_data_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_tx.v:10.28-10.44|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:58.16-70.2
	/*outline*/ value<8> p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__tx__data__out;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:27.14-27.21
	/*outline*/ value<8> p_rf__addr;
	p_system__top(interior) {}
	p_system__top() {
		reset();
	};

	void reset() override;
	bool eval() override;
	bool commit() override;

	void debug_eval();
	debug_outline debug_eval_outline { std::bind(&p_system__top::debug_eval, this) };

	void debug_info(debug_items &items, std::string path = "") override;
}; // struct p_system__top

void p_system__top::reset() {
}

bool p_system__top::eval() {
	bool converged = true;
	bool posedge_i_flatten_5c_clk__gate__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__gate_2e_v_3a_15_24_20__Y = this->posedge_i_flatten_5c_clk__gate__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__gate_2e_v_3a_15_24_20__Y();
	bool posedge_i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y_0 = this->posedge_i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y_0();
	bool posedge_p_uart__clk = this->posedge_p_uart__clk();
	bool posedge_p_ref__clk = this->posedge_p_ref__clk();
	value<1> i_procmux_24_512__Y;
	value<3> i_procmux_24_269__Y;
	// \hdlname: bit_synchronizer_inst clk
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:169.18-175.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/bit_synchronizer.v:3.8-3.11
	value<1> p_bit__synchronizer__inst_2e_clk;
	// \hdlname: bit_synchronizer_inst reset_n
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:169.18-175.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/bit_synchronizer.v:4.8-4.15
	value<1> p_bit__synchronizer__inst_2e_reset__n;
	// \hdlname: data_synchronizer_inst_1 clk
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:145.19-153.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:4.8-4.11
	value<1> p_data__synchronizer__inst__1_2e_clk;
	// \hdlname: data_synchronizer_inst_1 reset_n
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:145.19-153.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:5.8-5.15
	value<1> p_data__synchronizer__inst__1_2e_reset__n;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:145.19-153.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:15.20-15.34
	value<1> i_flatten_5c_data__synchronizer__inst__1_2e__24_and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__synchronizer_2e_v_3a_15_24_11__Y;
	// \hdlname: data_synchronizer_inst_0 clk
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:135.19-143.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:4.8-4.11
	value<1> p_data__synchronizer__inst__0_2e_clk;
	// \hdlname: data_synchronizer_inst_0 reset_n
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:135.19-143.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:5.8-5.15
	value<1> p_data__synchronizer__inst__0_2e_reset__n;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:135.19-143.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:15.20-15.34
	value<1> i_flatten_5c_data__synchronizer__inst__0_2e__24_and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__synchronizer_2e_v_3a_15_24_11__Y;
	// \hdlname: clk_divider_inst div_ratio_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:119.13-126.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/clk_divider.v:6.20-6.32
	value<5> p_clk__divider__inst_2e_div__ratio__in;
	// \hdlname: uart_top_inst par_en_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:8.28-8.37
	value<1> p_uart__top__inst_2e_par__en__in;
	// \hdlname: uart_top_inst reset_n
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:9.28-9.35
	value<1> p_uart__top__inst_2e_reset__n;
	// \hdlname: uart_top_inst uart_tx_inst mux_inst mux_sel_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:56.5-63.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/mux.v:2.14-2.24|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	value<2> p_uart__top__inst_2e_uart__tx__inst_2e_mux__inst_2e_mux__sel__in;
	// \hdlname: uart_top_inst uart_tx_inst serializer_inst clk
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:43.12-54.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/serializer.v:3.8-3.11|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	value<1> p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_clk;
	// \hdlname: uart_top_inst uart_tx_inst serializer_inst reset_n
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:43.12-54.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/serializer.v:4.8-4.15|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	value<1> p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_reset__n;
	// \hdlname: uart_top_inst uart_tx_inst serializer_inst ser_en_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:43.12-54.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/serializer.v:6.8-6.17|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	value<1> p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_ser__en__in;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:43.12-54.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/serializer.v:37.24-37.36|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	value<1> i_flatten_5c_uart__top__inst_2e__5c_uart__tx__inst_2e__5c_serializer__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_serializer_2e_v_3a_37_24_101__Y;
	// \hdlname: uart_top_inst uart_tx_inst parity_calc_inst data_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:32.13-41.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/parity_calc.v:6.16-6.23|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	value<8> p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_data__in;
	// \hdlname: uart_top_inst uart_tx_inst parity_calc_inst par_type_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:32.13-41.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/parity_calc.v:7.8-7.19|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	value<1> p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_par__type__in;
	// \hdlname: uart_top_inst uart_tx_inst parity_calc_inst data_valid_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:32.13-41.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/parity_calc.v:8.8-8.21|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	value<1> p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_data__valid__in;
	// \hdlname: uart_top_inst uart_tx_inst uart_tx_fsm_inst clk
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:19.13-30.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:5.8-5.11|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	value<1> p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_clk;
	// \hdlname: uart_top_inst uart_tx_inst uart_tx_fsm_inst reset_n
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:19.13-30.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:6.8-6.15|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	value<1> p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_reset__n;
	// \hdlname: uart_top_inst uart_tx_inst uart_tx_fsm_inst data_valid_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:19.13-30.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:7.8-7.21|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	value<1> p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_data__valid__in;
	// \hdlname: uart_top_inst uart_tx_inst uart_tx_fsm_inst next_state
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:19.13-30.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:22.11-22.21|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	value<3> p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_next__state;
	// \hdlname: uart_top_inst uart_tx_inst data_valid_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:7.8-7.21|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	value<1> p_uart__top__inst_2e_uart__tx__inst_2e_data__valid__in;
	// \hdlname: uart_top_inst uart_tx_inst reset_n
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:6.8-6.15|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	value<1> p_uart__top__inst_2e_uart__tx__inst_2e_reset__n;
	// \hdlname: uart_top_inst uart_tx_inst clk
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:5.8-5.11|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	value<1> p_uart__top__inst_2e_uart__tx__inst_2e_clk;
	// \hdlname: uart_top_inst uart_rx_inst strt_check_inst strt_chk_en_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:89.12-93.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/strt_check.v:3.8-3.22|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> p_uart__top__inst_2e_uart__rx__inst_2e_strt__check__inst_2e_strt__chk__en__in;
	// \hdlname: uart_top_inst uart_rx_inst edge_bit_counter_inst clk
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:59.18-68.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/edge_bit_counter.v:2.8-2.11|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_clk;
	// \hdlname: uart_top_inst uart_rx_inst edge_bit_counter_inst reset_n
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:59.18-68.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/edge_bit_counter.v:3.8-3.15|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_reset__n;
	// \hdlname: uart_top_inst uart_rx_inst edge_bit_counter_inst data_valid_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:59.18-68.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/edge_bit_counter.v:5.8-5.21|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_data__valid__in;
	// \hdlname: uart_top_inst uart_rx_inst edge_bit_counter_inst en_counter_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:59.18-68.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/edge_bit_counter.v:6.8-6.21|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_en__counter__in;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:59.18-68.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/edge_bit_counter.v:25.6-25.36|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_edge__bit__counter__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_edge__bit__counter_2e_v_3a_25_24_144__Y;
	// \hdlname: uart_top_inst uart_rx_inst data_sampling_inst prescale_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:49.15-57.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:4.14-4.25|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<5> p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_prescale__in;
	// \hdlname: uart_top_inst uart_rx_inst data_sampling_inst edge_cnt_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:49.15-57.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:5.14-5.25|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<5> p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_edge__cnt__in;
	// \hdlname: uart_top_inst uart_rx_inst data_sampling_inst data_sample_en_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:49.15-57.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:6.8-6.25|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_data__sample__en__in;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:49.15-57.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:18.6-18.40|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_18_24_150__Y;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:49.15-57.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:20.11-20.43|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_20_24_152__Y;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:49.15-57.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:27.27-27.101|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_or_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_27_24_159__Y;
	// \hdlname: uart_top_inst uart_rx_inst uart_rx_fsm_inst edge_cnt_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:4.14-4.25|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<5> p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_edge__cnt__in;
	// \hdlname: uart_top_inst uart_rx_inst uart_rx_fsm_inst bit_cnt_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:5.14-5.24|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<4> p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_bit__cnt__in;
	// \hdlname: uart_top_inst uart_rx_inst uart_rx_fsm_inst rx_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:6.8-6.13|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_rx__in;
	// \hdlname: uart_top_inst uart_rx_inst uart_rx_fsm_inst par_en_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:7.8-7.17|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_par__en__in;
	// \hdlname: uart_top_inst uart_rx_inst uart_rx_fsm_inst strt_err_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:10.8-10.19|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_strt__err__in;
	// \hdlname: uart_top_inst uart_rx_inst uart_rx_fsm_inst prescale_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:11.14-11.25|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<5> p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_prescale__in;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:48.7-48.54|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_48_24_167__Y;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:65.7-65.51|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_65_24_178__Y;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:111.7-111.39|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_111_24_195__Y;
	// \hdlname: uart_top_inst uart_rx_inst edge_cnt
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:14.18-14.26|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<5> p_uart__top__inst_2e_uart__rx__inst_2e_edge__cnt;
	// \hdlname: uart_top_inst uart_rx_inst data_valid_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:11.37-11.51|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> p_uart__top__inst_2e_uart__rx__inst_2e_data__valid__out;
	// \hdlname: uart_top_inst uart_rx_inst reset_n
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:9.37-9.44|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> p_uart__top__inst_2e_uart__rx__inst_2e_reset__n;
	// \hdlname: uart_top_inst uart_rx_inst clk
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:8.37-8.40|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> p_uart__top__inst_2e_uart__rx__inst_2e_clk;
	// \hdlname: uart_top_inst uart_rx_inst prescale_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:4.37-4.48|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<5> p_uart__top__inst_2e_uart__rx__inst_2e_prescale__in;
	// \hdlname: alu_inst data_a_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:90.5-100.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:5.34-5.43
	value<8> p_alu__inst_2e_data__a__in;
	// \hdlname: alu_inst data_b_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:90.5-100.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:6.34-6.43
	value<8> p_alu__inst_2e_data__b__in;
	// \hdlname: alu_inst en_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:90.5-100.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:7.31-7.36
	value<1> p_alu__inst_2e_en__in;
	// \hdlname: alu_inst alu_func_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:90.5-100.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:8.31-8.42
	value<4> p_alu__inst_2e_alu__func__in;
	// \hdlname: alu_inst clk
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:90.5-100.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:9.31-9.34
	value<1> p_alu__inst_2e_clk;
	// \hdlname: alu_inst reset_n
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:90.5-100.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:10.31-10.38
	value<1> p_alu__inst_2e_reset__n;
	// \hdlname: reg_file_inst clk
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:3.8-3.11
	value<1> p_reg__file__inst_2e_clk;
	// \hdlname: reg_file_inst reset_n
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:4.8-4.15
	value<1> p_reg__file__inst_2e_reset__n;
	// \hdlname: reg_file_inst wr_en_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:5.8-5.16
	value<1> p_reg__file__inst_2e_wr__en__in;
	// \hdlname: reg_file_inst rd_en_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:6.8-6.16
	value<1> p_reg__file__inst_2e_rd__en__in;
	// \hdlname: reg_file_inst addr_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:7.19-7.26
	value<4> p_reg__file__inst_2e_addr__in;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:36.10-36.31
	value<1> i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:40.10-40.31
	value<1> i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_40_24_73__Y;
	// \hdlname: sys_control_inst clk
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:3.11-3.14
	value<1> p_sys__control__inst_2e_clk;
	// \hdlname: sys_control_inst reset_n
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:4.11-4.18
	value<1> p_sys__control__inst_2e_reset__n;
	// \hdlname: sys_control_inst sys_control_rx_inst rf_wr_data_out
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:21.28-21.42|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	value<8> p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out;
	// \hdlname: sys_control_inst sys_control_rx_inst alu_data_valid_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:10.11-10.28|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	value<1> p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__data__valid__in;
	// \hdlname: sys_control_inst sys_control_rx_inst rf_rd_data_valid_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:8.11-8.30|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	value<1> p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__rd__data__valid__in;
	// \hdlname: sys_control_inst sys_control_rx_inst uart_rx_data_valid_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:6.11-6.32|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	value<1> p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__valid__in;
	// \hdlname: sys_control_inst sys_control_rx_inst uart_rx_data_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:5.23-5.38|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	value<8> p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__in;
	// \hdlname: sys_control_inst sys_control_rx_inst reset_n
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:4.11-4.18|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	value<1> p_sys__control__inst_2e_sys__control__rx__inst_2e_reset__n;
	// \hdlname: sys_control_inst sys_control_rx_inst clk
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_rx.v:3.11-3.14|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:30.16-56.2
	value<1> p_sys__control__inst_2e_sys__control__rx__inst_2e_clk;
	// \hdlname: sys_control_inst sys_control_tx_inst uart_tx_busy_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_tx.v:9.11-9.26|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:58.16-70.2
	value<1> p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__tx__busy__in;
	// \hdlname: sys_control_inst sys_control_tx_inst uart_rf_send_in
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:49.13-71.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control_tx.v:5.11-5.26|/home/amustafa/qflow_training/multi_clock_digital_system/src/sys_control.v:58.16-70.2
	value<1> p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__rf__send__in;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:47.6-47.27
	value<1> p_sync__reset__n__uart__clk;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:46.6-46.26
	value<1> p_sync__reset__n__ref__clk;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:45.6-45.17
	value<1> p_uart__tx__clk;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:41.14-41.31
	value<8> p_reg__2__uart__config;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:27.14-27.21
	value<8> p_rf__addr;
	// connection
	p_reg__2__uart__config = p_reg__file__inst_2e_mem_5b_2_5d_.curr;
	// connection
	p_uart__top__inst_2e_uart__rx__inst_2e_prescale__in = p_reg__2__uart__config.slice<6,2>().val();
	// connection
	p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_prescale__in = p_uart__top__inst_2e_uart__rx__inst_2e_prescale__in;
	// connection
	p_uart__top__inst_2e_uart__rx__inst_2e_edge__cnt = p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out.curr;
	// connection
	p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_edge__cnt__in = p_uart__top__inst_2e_uart__rx__inst_2e_edge__cnt;
	// connection
	p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__valid__in = p_data__synchronizer__inst__0_2e_enable__pulse__out.curr;
	// cells $flatten\uart_top_inst.\uart_rx_inst.\data_sampling_inst.$or$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:27$159 $flatten\uart_top_inst.\uart_rx_inst.\data_sampling_inst.$and$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:27$158 $flatten\uart_top_inst.\uart_rx_inst.\data_sampling_inst.$and$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:27$157 $flatten\uart_top_inst.\uart_rx_inst.\data_sampling_inst.$or$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:27$156
	i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_or_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_27_24_159__Y = or_uu<1>(and_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<2>().val(), or_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<1>().val(), p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<0>().val())), and_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<0>().val(), p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<1>().val()));
	// cells $procmux$492 $procmux$493_CMP0 $procmux$486 $procmux$487_CMP0 $procmux$484 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$gt$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:88$186 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$add$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:88$185 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$div$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:88$184
	p_uart__top__inst_2e_uart__rx__inst_2e_strt__check__inst_2e_strt__chk__en__in = (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? (gt_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_edge__cnt__in, add_uu<32>(div_uu<32>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_prescale__in, value<32>{0x2u}), value<32>{0x2u})) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// connection
	p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__data__valid__in = p_alu__inst_2e_data__valid__out.curr;
	// connection
	p_uart__top__inst_2e_par__en__in = p_reg__2__uart__config.slice<0>().val();
	// connection
	p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__rd__data__valid__in = p_reg__file__inst_2e_rd__data__valid__out.curr;
	// cells $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:111$195 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$add$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:111$194 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$div$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:111$193
	i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_111_24_195__Y = eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_edge__cnt__in, add_uu<32>(div_uu<32>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_prescale__in, value<32>{0x2u}), value<32>{0x3u}));
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:43.12-54.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/serializer.v:37.24-37.36|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	// cell $flatten\uart_top_inst.\uart_tx_inst.\serializer_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/serializer.v:37$101
	i_flatten_5c_uart__top__inst_2e__5c_uart__tx__inst_2e__5c_serializer__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_serializer_2e_v_3a_37_24_101__Y = eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_counter.curr, value<3>{0x7u});
	// cells $procmux$301 $procmux$298 $procmux$296
	p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_strt__err__in = (p_uart__top__inst_2e_uart__rx__inst_2e_strt__check__inst_2e_strt__chk__en__in ? (p_uart__top__inst_2e_uart__rx__inst_2e_strt__check__inst_2e_strt__chk__en__in ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_or_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_27_24_159__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// connection
	p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_bit__cnt__in = p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_bit__cnt__out.curr;
	// connection
	p_uart__top__inst_2e_uart__tx__inst_2e_data__valid__in = p_data__synchronizer__inst__1_2e_enable__pulse__out.curr;
	// connection
	p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_par__en__in = p_uart__top__inst_2e_par__en__in;
	// connection
	p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_rx__in = p_rx__in;
	// cells $procmux$1052 $procmux$1053_CMP0 $procmux$1054_CMP0 $procmux$1055_CMP0 $procmux$1056_CMP0 $procmux$871 $procmux$872_CMP0 $procmux$894 $procmux$895_CMP0 $procmux$964 $procmux$965_CMP0
	p_rf__addr.slice<3,0>() = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x8u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x8u}) ? value<4>{0x1u} : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x7u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x7u}) ? value<4>{0u} : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x6u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__reg.curr.slice<3,0>().val() : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x3u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x3u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__reg.curr.slice<3,0>().val() : value<4>{0u}) : value<4>{0u}))));
	// connection
	p_rf__addr.slice<7,4>() = value<4>{0u};
	// cells $procmux$1067 $procmux$1068_CMP0 $procmux$1069_CMP0 $procmux$1070_CMP0 $procmux$886 $procmux$887_CMP0 $procmux$884 $procmux$911 $procmux$912_CMP0 $procmux$909 $procmux$976 $procmux$977_CMP0 $procmux$974
	p_reg__file__inst_2e_wr__en__in = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x8u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x8u}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__valid__in ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x7u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x7u}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__valid__in ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x3u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x3u}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__valid__in ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u})));
	// connection
	p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_data__valid__in = p_uart__top__inst_2e_uart__tx__inst_2e_data__valid__in;
	// connection
	p_alu__inst_2e_data__a__in = p_reg__file__inst_2e_mem_5b_0_5d_.curr;
	// connection
	p_alu__inst_2e_data__b__in = p_reg__file__inst_2e_mem_5b_1_5d_.curr;
	// connection
	p_reg__file__inst_2e_addr__in = p_rf__addr.slice<3,0>().val();
	// cells $procmux$1062 $procmux$1063_CMP0
	p_reg__file__inst_2e_rd__en__in = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x6u}) ? value<1>{0x1u} : value<1>{0u});
	// connection
	p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__in = p_data__synchronizer__inst__0_2e_sync__data__out.curr;
	// cells $flatten\reg_file_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:40$73 $flatten\reg_file_inst.$logic_not$/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:40$72
	i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_40_24_73__Y = logic_and<1>(p_reg__file__inst_2e_rd__en__in, logic_not<1>(p_reg__file__inst_2e_wr__en__in));
	// connection
	p_clk__divider__inst_2e_div__ratio__in = p_reg__file__inst_2e_mem_5b_3_5d_.curr.slice<4,0>().val();
	// cells $procmux$1018 $procmux$1019_CMP0 $procmux$931 $procmux$932_CMP0 $procmux$929
	p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__rf__send__in = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x6u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x6u}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__rd__data__valid__in ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1036 $procmux$1037_CMP0 $procmux$857 $procmux$858_CMP0
	p_alu__inst_2e_alu__func__in = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x9u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x9u}) ? p_data__synchronizer__inst__0_2e_sync__data__out.curr.slice<3,0>().val() : value<4>{0u}) : value<4>{0u});
	// cells $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:48$167 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:48$166 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_not$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:48$165 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:48$164
	i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_48_24_167__Y = logic_and<1>(logic_and<1>(eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_bit__cnt__in, value<4>{0x1u}), logic_not<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_strt__err__in)), p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_par__en__in);
	// cells $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:65$178 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:65$177 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:65$176 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$sub$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:65$175
	i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_65_24_178__Y = logic_and<1>(eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_edge__cnt__in, sub_uu<32>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_prescale__in, value<32>{0x1u})), not_u<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_rx__in));
	// cells $flatten\reg_file_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:36$67 $flatten\reg_file_inst.$logic_not$/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:36$66
	i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y = logic_and<1>(p_reg__file__inst_2e_wr__en__in, logic_not<1>(p_reg__file__inst_2e_rd__en__in));
	// connection
	p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_prescale__in = p_uart__top__inst_2e_uart__rx__inst_2e_prescale__in;
	// cells $procmux$1040 $procmux$1041_CMP0 $procmux$864 $procmux$865_CMP0 $procmux$862
	p_alu__inst_2e_en__in = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x9u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x9u}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__valid__in ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$512 $procmux$513_CMP0 $procmux$462 $procmux$463_CMP0 $procmux$460 $procmux$456 $procmux$457_CMP0 $procmux$454
	i_procmux_24_512__Y = (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x6u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x6u}) ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_111_24_195__Y ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x6u}) ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_111_24_195__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$269 $procmux$270_CMP0 $procmux$271_CMP0 $procmux$272_CMP0 $procmux$273_CMP0 $procmux$274_CMP0 $procmux$237 $procmux$238_CMP0 $procmux$235 $procmux$256 $procmux$257_CMP0 $procmux$254 $procmux$248 $procmux$249_CMP0 $procmux$246 $procmux$243 $procmux$266 $procmux$267_CMP0 $procmux$264
	i_procmux_24_269__Y = (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x4u}) ? (p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_data__valid__in ? value<3>{0x1u} : value<3>{0u}) : value<3>{0u}) : (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x3u}) ? value<3>{0x4u} : (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? (i_flatten_5c_uart__top__inst_2e__5c_uart__tx__inst_2e__5c_serializer__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_serializer_2e_v_3a_37_24_101__Y ? (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? (i_flatten_5c_uart__top__inst_2e__5c_uart__tx__inst_2e__5c_serializer__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_serializer_2e_v_3a_37_24_101__Y ? (p_uart__top__inst_2e_par__en__in ? value<3>{0x3u} : value<3>{0x4u}) : value<3>{0u}) : value<3>{0u}) : value<3>{0x2u}) : value<3>{0u}) : (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? value<3>{0x2u} : (logic_not<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr) ? (logic_not<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr) ? (p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_data__valid__in ? value<3>{0x1u} : value<3>{0u}) : value<3>{0u}) : value<3>{0u})))));
	// connection
	p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_edge__cnt__in = p_uart__top__inst_2e_uart__rx__inst_2e_edge__cnt;
	// connection
	p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__tx__busy__in = p_bit__synchronizer__inst_2e_sync__data__out.curr;
	// connection
	p_uart__top__inst_2e_uart__rx__inst_2e_data__valid__out = i_procmux_24_512__Y;
	// cells $flatten\clk_divider_inst.$ternary$/home/amustafa/qflow_training/multi_clock_digital_system/src/clk_divider.v:26$31 $flatten\clk_divider_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/clk_divider.v:26$29 $flatten\clk_divider_inst.$le$/home/amustafa/qflow_training/multi_clock_digital_system/src/clk_divider.v:26$28 $flatten\clk_divider_inst.$div$/home/amustafa/qflow_training/multi_clock_digital_system/src/clk_divider.v:26$27 $flatten\clk_divider_inst.$ne$/home/amustafa/qflow_training/multi_clock_digital_system/src/clk_divider.v:26$26
	i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y = (logic_and<1>(reduce_bool<1>(p_clk__divider__inst_2e_count.curr), le_uu<1>(p_clk__divider__inst_2e_count.curr, div_uu<32>(p_clk__divider__inst_2e_div__ratio__in, value<32>{0x2u}))) ? value<32>{0x1u} : value<32>{0u});
	// connection
	p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_par__type__in = p_reg__2__uart__config.slice<1>().val();
	// connection
	p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_next__state = i_procmux_24_269__Y;
	// cells $procmux$276 $procmux$277_CMP0 $procmux$278_CMP0 $procmux$279_CMP0
	p_uart__top__inst_2e_uart__tx__inst_2e_mux__inst_2e_mux__sel__in = (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x3u}) ? value<2>{0x3u} : (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? value<2>{0x2u} : (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? value<2>{0x1u} : value<2>{0u})));
	// connection
	p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_data__in = p_data__synchronizer__inst__1_2e_sync__data__out.curr;
	// connection
	p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_data__valid__in = p_uart__top__inst_2e_uart__tx__inst_2e_data__valid__in;
	// cells $flatten\uart_top_inst.\uart_rx_inst.\edge_bit_counter_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/edge_bit_counter.v:25$144 $flatten\uart_top_inst.\uart_rx_inst.\edge_bit_counter_inst.$sub$/home/amustafa/qflow_training/multi_clock_digital_system/src/edge_bit_counter.v:25$143
	i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_edge__bit__counter__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_edge__bit__counter_2e_v_3a_25_24_144__Y = eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out.curr, sub_uu<32>(p_uart__top__inst_2e_uart__rx__inst_2e_prescale__in, value<32>{0x1u}));
	// cells $flatten\uart_top_inst.\uart_rx_inst.\data_sampling_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:20$152 $flatten\uart_top_inst.\uart_rx_inst.\data_sampling_inst.$div$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:20$151
	i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_20_24_152__Y = eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_edge__cnt__in, div_uu<32>(p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_prescale__in, value<32>{0x2u}));
	// connection
	p_sync__reset__n__uart__clk = p_reset__synchronizer__inst__1_2e_ff.curr.slice<0>().val();
	// cells $flatten\data_synchronizer_inst_1.$and$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:15$11 $flatten\data_synchronizer_inst_1.$logic_not$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:15$10
	i_flatten_5c_data__synchronizer__inst__1_2e__24_and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__synchronizer_2e_v_3a_15_24_11__Y = and_uu<1>(p_data__synchronizer__inst__1_2e_ff.curr.slice<1>().val(), logic_not<1>(p_data__synchronizer__inst__1_2e_ff.curr.slice<0>().val()));
	// cells $flatten\data_synchronizer_inst_0.$and$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:15$11 $flatten\data_synchronizer_inst_0.$logic_not$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:15$10
	i_flatten_5c_data__synchronizer__inst__0_2e__24_and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__synchronizer_2e_v_3a_15_24_11__Y = and_uu<1>(p_data__synchronizer__inst__0_2e_ff.curr.slice<1>().val(), logic_not<1>(p_data__synchronizer__inst__0_2e_ff.curr.slice<0>().val()));
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:19.13-30.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:69.21-69.42|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	// cell $flatten\uart_top_inst.\uart_tx_inst.\uart_tx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:69$115
	p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_ser__en__in = eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x2u});
	// connection
	p_uart__tx__clk = i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y.slice<0>().val();
	// cells $procmux$495 $procmux$496_CMP0 $procmux$497_CMP0 $procmux$498_CMP0 $procmux$499_CMP0
	p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_en__counter__in = (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x6u}) ? value<1>{0x1u} : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x3u}) ? value<1>{0x1u} : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? value<1>{0x1u} : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? value<1>{0x1u} : value<1>{0u}))));
	// cells $flatten\uart_top_inst.\uart_rx_inst.\data_sampling_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:18$150 $flatten\uart_top_inst.\uart_rx_inst.\data_sampling_inst.$sub$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:18$149 $flatten\uart_top_inst.\uart_rx_inst.\data_sampling_inst.$div$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:18$148
	i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_18_24_150__Y = eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_edge__cnt__in, sub_uu<32>(div_uu<32>(p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_prescale__in, value<32>{0x2u}), value<32>{0x1u}));
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:128.10-133.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/clk_gate.v:15.24-15.40
	// cell $flatten\clk_gate_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/clk_gate.v:15$20
	i_flatten_5c_clk__gate__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__gate_2e_v_3a_15_24_20__Y = logic_and<1>(p_ref__clk, p_clk__gate__inst_2e_latch__out.curr);
	// cells $procmux$1045 $procmux$1046_CMP0 $procmux$1047_CMP0 $procmux$1048_CMP0 $procmux$878 $procmux$879_CMP0 $procmux$902 $procmux$903_CMP0 $procmux$953 $procmux$954_CMP0
	p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x8u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x8u}) ? p_data__synchronizer__inst__0_2e_sync__data__out.curr : value<8>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x7u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x7u}) ? p_data__synchronizer__inst__0_2e_sync__data__out.curr : value<8>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x3u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x3u}) ? p_data__synchronizer__inst__0_2e_sync__data__out.curr : value<8>{0u}) : value<8>{0u})));
	// connection
	p_sync__reset__n__ref__clk = p_reset__synchronizer__inst__0_2e_ff.curr.slice<0>().val();
	// connection
	p_uart__top__inst_2e_reset__n = p_sync__reset__n__uart__clk;
	// connection
	p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_data__valid__in = p_uart__top__inst_2e_uart__rx__inst_2e_data__valid__out;
	// cells $procmux$501 $procmux$502_CMP0 $procmux$503_CMP0 $procmux$504_CMP0 $procmux$505_CMP0
	p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_data__sample__en__in = (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x6u}) ? value<1>{0x1u} : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x3u}) ? value<1>{0x1u} : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? value<1>{0x1u} : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? value<1>{0x1u} : value<1>{0u}))));
	// connection
	p_sys__control__inst_2e_reset__n = p_sync__reset__n__ref__clk;
	// connection
	p_uart__top__inst_2e_uart__tx__inst_2e_reset__n = p_uart__top__inst_2e_reset__n;
	// connection
	p_uart__top__inst_2e_uart__rx__inst_2e_reset__n = p_uart__top__inst_2e_reset__n;
	// connection
	p_sys__control__inst_2e_clk = p_ref__clk;
	// connection
	p_uart__top__inst_2e_uart__tx__inst_2e_clk = p_uart__tx__clk;
	// connection
	p_uart__top__inst_2e_uart__rx__inst_2e_clk = p_uart__clk;
	// connection
	p_sys__control__inst_2e_sys__control__rx__inst_2e_reset__n = p_sys__control__inst_2e_reset__n;
	// connection
	p_reg__file__inst_2e_reset__n = p_sync__reset__n__ref__clk;
	// connection
	p_alu__inst_2e_reset__n = p_sync__reset__n__ref__clk;
	// connection
	p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_reset__n = p_uart__top__inst_2e_uart__tx__inst_2e_reset__n;
	// connection
	p_bit__synchronizer__inst_2e_reset__n = p_sync__reset__n__ref__clk;
	// connection
	p_reg__file__inst_2e_clk = p_ref__clk;
	// connection
	p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_reset__n = p_uart__top__inst_2e_uart__rx__inst_2e_reset__n;
	// connection
	p_sys__control__inst_2e_sys__control__rx__inst_2e_clk = p_sys__control__inst_2e_clk;
	// connection
	p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_reset__n = p_uart__top__inst_2e_uart__tx__inst_2e_reset__n;
	// connection
	p_data__synchronizer__inst__0_2e_reset__n = p_sync__reset__n__ref__clk;
	// connection
	p_data__synchronizer__inst__1_2e_reset__n = p_sync__reset__n__uart__clk;
	// connection
	p_bit__synchronizer__inst_2e_clk = p_ref__clk;
	// connection
	p_data__synchronizer__inst__1_2e_clk = p_uart__tx__clk;
	// connection
	p_data__synchronizer__inst__0_2e_clk = p_ref__clk;
	// connection
	p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_clk = p_uart__top__inst_2e_uart__tx__inst_2e_clk;
	// connection
	p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_clk = p_uart__top__inst_2e_uart__tx__inst_2e_clk;
	// connection
	p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_clk = p_uart__top__inst_2e_uart__rx__inst_2e_clk;
	// connection
	p_alu__inst_2e_clk = i_flatten_5c_clk__gate__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__gate_2e_v_3a_15_24_20__Y;
	// cells $procdff$1305 $procmux$764 $procmux$762 $procmux$763_CMP0
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_mem_5b_3_5d_.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x3u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out : p_reg__file__inst_2e_mem_5b_3_5d_.curr) : p_reg__file__inst_2e_mem_5b_3_5d_.curr);
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_mem_5b_3_5d_.next = value<8>{0x8u};
	}
	// cells $procdff$1304 $procmux$782 $procmux$780 $procmux$781_CMP0
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_mem_5b_2_5d_.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x2u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out : p_reg__file__inst_2e_mem_5b_2_5d_.curr) : p_reg__file__inst_2e_mem_5b_2_5d_.curr);
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_mem_5b_2_5d_.next = value<8>{0x21u};
	}
	// cells $procdff$1315 $procmux$639 $procmux$637 $procmux$638_CMP0
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_mem_5b_13_5d_.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0xdu}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out : p_reg__file__inst_2e_mem_5b_13_5d_.curr) : p_reg__file__inst_2e_mem_5b_13_5d_.curr);
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_mem_5b_13_5d_.next = value<8>{0u};
	}
	// cells $procdff$1322 $procmux$835 $procmux$992 $procmux$993_CMP0 $procmux$845 $procmux$846_CMP0 $procmux$843
	if (posedge_p_ref__clk) {
		p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__data__out.next = ((eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0xau}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0xau}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__data__valid__in ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) ? p_alu__inst_2e_data__out.curr : p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__data__out.curr);
	}
	if (p_sys__control__inst_2e_sys__control__rx__inst_2e_reset__n == value<1> {0u}) {
		p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__data__out.next = value<16>{0u};
	}
	// cells $procdff$1316 $procmux$632 $procmux$630 $procmux$631_CMP0
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_mem_5b_14_5d_.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0xeu}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out : p_reg__file__inst_2e_mem_5b_14_5d_.curr) : p_reg__file__inst_2e_mem_5b_14_5d_.curr);
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_mem_5b_14_5d_.next = value<8>{0u};
	}
	// cells $procdff$1306 $procmux$747 $procmux$745 $procmux$746_CMP0
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_mem_5b_4_5d_.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x4u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out : p_reg__file__inst_2e_mem_5b_4_5d_.curr) : p_reg__file__inst_2e_mem_5b_4_5d_.curr);
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_mem_5b_4_5d_.next = value<8>{0u};
	}
	// cells $procdff$1311 $procmux$677 $procmux$675 $procmux$676_CMP0
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_mem_5b_9_5d_.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x9u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out : p_reg__file__inst_2e_mem_5b_9_5d_.curr) : p_reg__file__inst_2e_mem_5b_9_5d_.curr);
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_mem_5b_9_5d_.next = value<8>{0u};
	}
	// cells $procdff$1326 $procmux$1256 $procmux$1257_CMP0 $procmux$1258_CMP0 $procmux$1259_CMP0 $procmux$1260_CMP0 $procmux$1261_CMP0 $procmux$1206 $procmux$1207_CMP0 $procmux$1204 $procmux$1213 $procmux$1214_CMP0 $procmux$1211 $procmux$1221 $procmux$1222_CMP0 $procmux$1219 $procmux$1230 $procmux$1231_CMP0 $procmux$1228 $procmux$1253 $procmux$1254_CMP0 $procmux$1251 $procmux$1243 $procmux$1244_CMP0 $procmux$1241 $procmux$1238 $procmux$1011 $procmux$1012_CMP0 $procmux$851 $procmux$852_CMP0 $procmux$849
	if (posedge_p_ref__clk) {
		p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.next = (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x4u}) ? (p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__tx__busy__in ? value<3>{0u} : p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr) : value<3>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x3u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x3u}) ? (p_bit__synchronizer__inst_2e_sync__data__out.curr ? p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr : value<3>{0x4u}) : value<3>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x2u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x2u}) ? (p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__tx__busy__in ? value<3>{0x3u} : p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr) : value<3>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x1u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x1u}) ? (p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__tx__busy__in ? value<3>{0u} : p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr) : value<3>{0u}) : (logic_not<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr) ? (logic_not<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr) ? (p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__rf__send__in ? value<3>{0x1u} : (logic_not<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr) ? (p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__rf__send__in ? value<3>{0u} : ((eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0xau}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0xau}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__data__valid__in ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) ? value<3>{0x2u} : p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr)) : value<3>{0u})) : value<3>{0u}) : value<3>{0u})))));
	}
	if (p_sys__control__inst_2e_reset__n == value<1> {0u}) {
		p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.next = value<3>{0u};
	}
	// cells $procdff$1303 $procmux$801 $procmux$799 $procmux$800_CMP0
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_mem_5b_1_5d_.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x1u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out : p_reg__file__inst_2e_mem_5b_1_5d_.curr) : p_reg__file__inst_2e_mem_5b_1_5d_.curr);
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_mem_5b_1_5d_.next = value<8>{0u};
	}
	// cells $procdff$1313 $procmux$656 $procmux$654 $procmux$655_CMP0
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_mem_5b_11_5d_.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0xbu}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out : p_reg__file__inst_2e_mem_5b_11_5d_.curr) : p_reg__file__inst_2e_mem_5b_11_5d_.curr);
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_mem_5b_11_5d_.next = value<8>{0u};
	}
	// cells $procdff$1302 $procmux$821 $procmux$819 $procmux$820_CMP0
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_mem_5b_0_5d_.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? (logic_not<1>(p_reg__file__inst_2e_addr__in) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out : p_reg__file__inst_2e_mem_5b_0_5d_.curr) : p_reg__file__inst_2e_mem_5b_0_5d_.curr);
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_mem_5b_0_5d_.next = value<8>{0u};
	}
	// cells $procdff$1325 $procmux$1182 $procmux$1183_CMP0 $procmux$1184_CMP0 $procmux$1185_CMP0 $procmux$1186_CMP0 $procmux$1187_CMP0 $procmux$1188_CMP0 $procmux$1189_CMP0 $procmux$1190_CMP0 $procmux$1191_CMP0 $procmux$1075 $procmux$1076_CMP0 $procmux$1073 $procmux$1082 $procmux$1083_CMP0 $procmux$1080 $procmux$1090 $procmux$1091_CMP0 $procmux$1088 $procmux$1099 $procmux$1100_CMP0 $procmux$1097 $procmux$1109 $procmux$1110_CMP0 $procmux$1107 $procmux$1120 $procmux$1121_CMP0 $procmux$1118 $procmux$1132 $procmux$1133_CMP0 $procmux$1130 $procmux$1145 $procmux$1146_CMP0 $procmux$1143 $procmux$1179 $procmux$1180_CMP0 $procmux$1177 $procmux$1165 $procmux$1166_CMP0 $procmux$1163 $procmux$1158 $procmux$1159_CMP0 $procmux$1160_CMP0 $procmux$1161_CMP0 $procmux$1162_CMP0
	if (posedge_p_ref__clk) {
		p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.next = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0xau}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0xau}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__data__valid__in ? value<4>{0u} : value<4>{0xau}) : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x9u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x9u}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__valid__in ? value<4>{0xau} : value<4>{0x9u}) : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x8u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x8u}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__valid__in ? value<4>{0x9u} : value<4>{0x8u}) : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x7u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x7u}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__valid__in ? value<4>{0x8u} : value<4>{0x7u}) : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x6u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x6u}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__rd__data__valid__in ? value<4>{0u} : value<4>{0x6u}) : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x5u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x5u}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__valid__in ? value<4>{0x6u} : value<4>{0x5u}) : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x3u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x3u}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__valid__in ? value<4>{0u} : value<4>{0x3u}) : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x2u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x2u}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__valid__in ? value<4>{0x3u} : value<4>{0x2u}) : value<4>{0u}) : (logic_not<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr) ? (logic_not<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__valid__in ? (logic_not<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__valid__in ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__in, value<8>{0xddu}) ? value<4>{0x9u} : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__in, value<8>{0xccu}) ? value<4>{0x7u} : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__in, value<8>{0xbbu}) ? value<4>{0x5u} : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__in, value<8>{0xaau}) ? value<4>{0x2u} : value<4>{0u})))) : value<4>{0u}) : value<4>{0u}) : value<4>{0u}) : value<4>{0u}) : value<4>{0u})))))))));
	}
	if (p_sys__control__inst_2e_sys__control__rx__inst_2e_reset__n == value<1> {0u}) {
		p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.next = value<4>{0u};
	}
	// cells $procdff$1312 $procmux$666 $procmux$664 $procmux$665_CMP0
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_mem_5b_10_5d_.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0xau}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out : p_reg__file__inst_2e_mem_5b_10_5d_.curr) : p_reg__file__inst_2e_mem_5b_10_5d_.curr);
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_mem_5b_10_5d_.next = value<8>{0u};
	}
	// cells $procdff$1324 $procmux$839 $procmux$1007 $procmux$1008_CMP0 $procmux$1009_CMP0 $procmux$942 $procmux$943_CMP0 $procmux$940 $procmux$989 $procmux$990_CMP0 $procmux$987
	if (posedge_p_ref__clk) {
		p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__reg.next = ((eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x5u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x5u}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__valid__in ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x2u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x2u}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rx__data__valid__in ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u})) ? p_data__synchronizer__inst__0_2e_sync__data__out.curr : p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__reg.curr);
	}
	if (p_sys__control__inst_2e_sys__control__rx__inst_2e_reset__n == value<1> {0u}) {
		p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__reg.next = value<8>{0u};
	}
	// cells $procdff$1323 $procmux$837 $procmux$999 $procmux$1000_CMP0 $procmux$921 $procmux$922_CMP0 $procmux$919
	if (posedge_p_ref__clk) {
		p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rf__send__data__out.next = ((eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x6u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x6u}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__rd__data__valid__in ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) ? p_reg__file__inst_2e_rd__data__out.curr : p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rf__send__data__out.curr);
	}
	if (p_sys__control__inst_2e_sys__control__rx__inst_2e_reset__n == value<1> {0u}) {
		p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rf__send__data__out.next = value<8>{0u};
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:21.1-49.4
	// cell $procdff$1320
	if (posedge_p_ref__clk) {
		i_flatten_5c_reg__file__inst_2e__24_mem2reg__rd_24__5c_mem_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_42_24_55__ADDR.next = value<4>{0u};
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		i_flatten_5c_reg__file__inst_2e__24_mem2reg__rd_24__5c_mem_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_42_24_55__ADDR.next = value<4>{0u};
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:21.1-49.4
	// cell $procdff$1319
	if (posedge_p_ref__clk) {
		i_flatten_5c_reg__file__inst_2e__24_mem2reg__wr_24__5c_mem_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_38_24_54__DATA.next = value<8>{0u};
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		i_flatten_5c_reg__file__inst_2e__24_mem2reg__wr_24__5c_mem_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_38_24_54__DATA.next = value<8>{0u};
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:21.1-49.4
	// cell $procdff$1321
	if (posedge_p_ref__clk) {
		i_flatten_5c_reg__file__inst_2e__24_mem2reg__rd_24__5c_mem_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_42_24_55__DATA.next = value<8>{0u};
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		i_flatten_5c_reg__file__inst_2e__24_mem2reg__rd_24__5c_mem_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_42_24_55__DATA.next = value<8>{0u};
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:21.1-49.4
	// cell $procdff$1301
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_i.next = p_reg__file__inst_2e_i.curr;
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_i.next = value<32>{0x10u};
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:73.10-88.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reg_file.v:21.1-49.4
	// cell $procdff$1318
	if (posedge_p_ref__clk) {
		i_flatten_5c_reg__file__inst_2e__24_mem2reg__wr_24__5c_mem_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_38_24_54__ADDR.next = value<4>{0u};
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		i_flatten_5c_reg__file__inst_2e__24_mem2reg__wr_24__5c_mem_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_38_24_54__ADDR.next = value<4>{0u};
	}
	// cells $procdff$1317 $procmux$626 $procmux$624 $procmux$625_CMP0
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_mem_5b_15_5d_.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0xfu}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out : p_reg__file__inst_2e_mem_5b_15_5d_.curr) : p_reg__file__inst_2e_mem_5b_15_5d_.curr);
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_mem_5b_15_5d_.next = value<8>{0u};
	}
	// cells $procdff$1314 $procmux$647 $procmux$645 $procmux$646_CMP0
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_mem_5b_12_5d_.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0xcu}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out : p_reg__file__inst_2e_mem_5b_12_5d_.curr) : p_reg__file__inst_2e_mem_5b_12_5d_.curr);
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_mem_5b_12_5d_.next = value<8>{0u};
	}
	// cells $procdff$1309 $procmux$702 $procmux$700 $procmux$701_CMP0
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_mem_5b_7_5d_.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x7u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out : p_reg__file__inst_2e_mem_5b_7_5d_.curr) : p_reg__file__inst_2e_mem_5b_7_5d_.curr);
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_mem_5b_7_5d_.next = value<8>{0u};
	}
	// cells $procdff$1310 $procmux$689 $procmux$687 $procmux$688_CMP0
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_mem_5b_8_5d_.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x8u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out : p_reg__file__inst_2e_mem_5b_8_5d_.curr) : p_reg__file__inst_2e_mem_5b_8_5d_.curr);
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_mem_5b_8_5d_.next = value<8>{0u};
	}
	// cells $procdff$1308 $procmux$716 $procmux$714 $procmux$715_CMP0
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_mem_5b_6_5d_.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x6u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out : p_reg__file__inst_2e_mem_5b_6_5d_.curr) : p_reg__file__inst_2e_mem_5b_6_5d_.curr);
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_mem_5b_6_5d_.next = value<8>{0u};
	}
	// cells $procdff$1307 $procmux$731 $procmux$729 $procmux$730_CMP0
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_mem_5b_5_5d_.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x5u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out : p_reg__file__inst_2e_mem_5b_5_5d_.curr) : p_reg__file__inst_2e_mem_5b_5_5d_.curr);
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_mem_5b_5_5d_.next = value<8>{0u};
	}
	// cells $auto$proc_dlatch.cc:427:proc_dlatch$1272 $procmux$1031 $procmux$1032_CMP0 $procmux$1033_CMP0
	if (p_ref__clk == value<1> {0u}) {
		p_clk__gate__inst_2e_latch__out.next = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0xau}) ? value<1>{0x1u} : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x9u}) ? value<1>{0x1u} : value<1>{0u}));
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:169.18-175.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/bit_synchronizer.v:12.1-27.4
	// cell $procdff$1273
	if (posedge_p_ref__clk) {
		p_bit__synchronizer__inst_2e_sync__data__out.next = p_bit__synchronizer__inst_2e_reg__file_5b_0_5d_.curr.slice<0>().val();
	}
	if (p_bit__synchronizer__inst_2e_reset__n == value<1> {0u}) {
		p_bit__synchronizer__inst_2e_sync__data__out.next = value<1>{0u};
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:169.18-175.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/bit_synchronizer.v:12.1-27.4
	// cell $procdff$1274
	if (posedge_p_ref__clk) {
		p_bit__synchronizer__inst_2e_i.next = value<32>{0x1u};
	}
	if (p_bit__synchronizer__inst_2e_reset__n == value<1> {0u}) {
		p_bit__synchronizer__inst_2e_i.next = value<32>{0x1u};
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:169.18-175.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/bit_synchronizer.v:12.1-27.4
	// cell $procdff$1275
	if (posedge_p_ref__clk) {
		i_flatten_5c_bit__synchronizer__inst_2e__24_splitcmplxassign_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_bit__synchronizer_2e_v_3a_24_24_3.next = value<3>{0u};
	}
	if (p_bit__synchronizer__inst_2e_reset__n == value<1> {0u}) {
		i_flatten_5c_bit__synchronizer__inst_2e__24_splitcmplxassign_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_bit__synchronizer_2e_v_3a_24_24_3.next = value<3>{0u};
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:169.18-175.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/bit_synchronizer.v:12.1-27.4
	// cell $procdff$1276
	if (posedge_p_ref__clk) {
		p_bit__synchronizer__inst_2e_reg__file_5b_0_5d_.next = p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_busy__out.curr.concat(p_bit__synchronizer__inst_2e_reg__file_5b_0_5d_.curr.slice<1>()).val();
	}
	if (p_bit__synchronizer__inst_2e_reset__n == value<1> {0u}) {
		p_bit__synchronizer__inst_2e_reg__file_5b_0_5d_.next = value<2>{0u};
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:162.20-167.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reset_synchronizer.v:10.1-16.4
	// cell $procdff$1277
	if (posedge_p_uart__clk) {
		p_reset__synchronizer__inst__1_2e_ff.next = value<1>{0x1u}.concat(p_reset__synchronizer__inst__1_2e_ff.curr.slice<2,1>()).val();
	}
	if (p_reset__n == value<1> {0u}) {
		p_reset__synchronizer__inst__1_2e_ff.next = value<3>{0u};
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:155.20-160.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/reset_synchronizer.v:10.1-16.4
	// cell $procdff$1278
	if (posedge_p_ref__clk) {
		p_reset__synchronizer__inst__0_2e_ff.next = value<1>{0x1u}.concat(p_reset__synchronizer__inst__0_2e_ff.curr.slice<2,1>()).val();
	}
	if (p_reset__n == value<1> {0u}) {
		p_reset__synchronizer__inst__0_2e_ff.next = value<3>{0u};
	}
	// cells $procdff$1279 $procmux$1198 $procmux$1199_CMP0 $procmux$1200_CMP0 $procmux$1201_CMP0
	if (posedge_i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y_0) {
		p_data__synchronizer__inst__1_2e_ff.next = (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x4u}) ? value<1>{0x1u} : (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x2u}) ? value<1>{0x1u} : (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x1u}) ? value<1>{0x1u} : value<1>{0u}))).concat(p_data__synchronizer__inst__1_2e_ff.curr.slice<2,1>()).val();
	}
	if (p_data__synchronizer__inst__1_2e_reset__n == value<1> {0u}) {
		p_data__synchronizer__inst__1_2e_ff.next = value<3>{0u};
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:145.19-153.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:25.1-31.4
	// cell $procdff$1280
	if (posedge_i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y_0) {
		p_data__synchronizer__inst__1_2e_enable__pulse__out.next = i_flatten_5c_data__synchronizer__inst__1_2e__24_and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__synchronizer_2e_v_3a_15_24_11__Y;
	}
	if (p_data__synchronizer__inst__1_2e_reset__n == value<1> {0u}) {
		p_data__synchronizer__inst__1_2e_enable__pulse__out.next = value<1>{0u};
	}
	// cells $procdff$1281 $procmux$199 $procmux$1193 $procmux$1194_CMP0 $procmux$1195_CMP0 $procmux$1196_CMP0
	if (posedge_i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y_0) {
		p_data__synchronizer__inst__1_2e_sync__data__out.next = (i_flatten_5c_data__synchronizer__inst__1_2e__24_and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__synchronizer_2e_v_3a_15_24_11__Y ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x4u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__data__out.curr.slice<15,8>().val() : (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x2u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__data__out.curr.slice<7,0>().val() : (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x1u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rf__send__data__out.curr : value<8>{0u}))) : p_data__synchronizer__inst__1_2e_sync__data__out.curr);
	}
	if (p_data__synchronizer__inst__1_2e_reset__n == value<1> {0u}) {
		p_data__synchronizer__inst__1_2e_sync__data__out.next = value<8>{0u};
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:135.19-143.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:17.1-23.4
	// cell $procdff$1282
	if (posedge_p_ref__clk) {
		p_data__synchronizer__inst__0_2e_ff.next = i_procmux_24_512__Y.concat(p_data__synchronizer__inst__0_2e_ff.curr.slice<2,1>()).val();
	}
	if (p_data__synchronizer__inst__0_2e_reset__n == value<1> {0u}) {
		p_data__synchronizer__inst__0_2e_ff.next = value<3>{0u};
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:135.19-143.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_synchronizer.v:25.1-31.4
	// cell $procdff$1283
	if (posedge_p_ref__clk) {
		p_data__synchronizer__inst__0_2e_enable__pulse__out.next = i_flatten_5c_data__synchronizer__inst__0_2e__24_and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__synchronizer_2e_v_3a_15_24_11__Y;
	}
	if (p_data__synchronizer__inst__0_2e_reset__n == value<1> {0u}) {
		p_data__synchronizer__inst__0_2e_enable__pulse__out.next = value<1>{0u};
	}
	// cells $procdff$1284 $procmux$201 $flatten\uart_top_inst.\uart_rx_inst.\deserializer_inst.$ternary$/home/amustafa/qflow_training/multi_clock_digital_system/src/deserializer.v:25$139 $flatten\uart_top_inst.\uart_rx_inst.\deserializer_inst.$extend$/home/amustafa/qflow_training/multi_clock_digital_system/src/deserializer.v:25$138
	if (posedge_p_ref__clk) {
		p_data__synchronizer__inst__0_2e_sync__data__out.next = (i_flatten_5c_data__synchronizer__inst__0_2e__24_and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__synchronizer_2e_v_3a_15_24_11__Y ? (p_uart__top__inst_2e_uart__rx__inst_2e_data__valid__out ? pos_u<32>(p_uart__top__inst_2e_uart__rx__inst_2e_deserializer__inst_2e_register.curr) : value<32>{0u}).slice<7,0>().val() : p_data__synchronizer__inst__0_2e_sync__data__out.curr);
	}
	if (p_data__synchronizer__inst__0_2e_reset__n == value<1> {0u}) {
		p_data__synchronizer__inst__0_2e_sync__data__out.next = value<8>{0u};
	}
	// cells $procdff$1285 $procmux$206 $flatten\clk_divider_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/clk_divider.v:21$25 $flatten\clk_divider_inst.$add$/home/amustafa/qflow_training/multi_clock_digital_system/src/clk_divider.v:20$24
	if (posedge_p_uart__clk) {
		p_clk__divider__inst_2e_count.next = (eq_uu<1>(p_clk__divider__inst_2e_count.curr, p_clk__divider__inst_2e_div__ratio__in) ? value<5>{0x1u} : add_uu<32>(p_clk__divider__inst_2e_count.curr, value<32>{0x1u}).slice<4,0>().val());
	}
	if (p_sync__reset__n__uart__clk == value<1> {0u}) {
		p_clk__divider__inst_2e_count.next = value<5>{0u};
	}
	// cells $procdff$1286 $procmux$221 $flatten\uart_top_inst.\uart_tx_inst.\serializer_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/serializer.v:20$96 $flatten\uart_top_inst.\uart_tx_inst.\serializer_inst.$logic_not$/home/amustafa/qflow_training/multi_clock_digital_system/src/serializer.v:20$95 $procmux$218
	if (posedge_i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y_0) {
		p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_int__reg.next = (logic_and<1>(p_uart__top__inst_2e_uart__tx__inst_2e_data__valid__in, logic_not<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_busy__out.curr)) ? p_data__synchronizer__inst__1_2e_sync__data__out.curr : (p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_ser__en__in ? value<1>{0u}.concat(p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_int__reg.curr.slice<7,1>()).val() : p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_int__reg.curr));
	}
	if (p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_reset__n == value<1> {0u}) {
		p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_int__reg.next = value<8>{0u};
	}
	// cells $procdff$1287 $procmux$226 $procmux$223 $flatten\uart_top_inst.\uart_tx_inst.\serializer_inst.$add$/home/amustafa/qflow_training/multi_clock_digital_system/src/serializer.v:34$100
	if (posedge_i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y_0) {
		p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_counter.next = (i_flatten_5c_uart__top__inst_2e__5c_uart__tx__inst_2e__5c_serializer__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_serializer_2e_v_3a_37_24_101__Y ? value<3>{0u} : (p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_ser__en__in ? add_uu<32>(p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_counter.curr, value<32>{0x1u}).slice<2,0>().val() : p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_counter.curr));
	}
	if (p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_reset__n == value<1> {0u}) {
		p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_counter.next = value<3>{0u};
	}
	// cells $procdff$1288 $procmux$231 $flatten\uart_top_inst.\uart_tx_inst.\parity_calc_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/parity_calc.v:17$105 $flatten\uart_top_inst.\uart_tx_inst.\parity_calc_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/parity_calc.v:17$104 $flatten\uart_top_inst.\uart_tx_inst.\parity_calc_inst.$reduce_xor$/home/amustafa/qflow_training/multi_clock_digital_system/src/parity_calc.v:19$106 $procmux$228 $flatten\uart_top_inst.\uart_tx_inst.\parity_calc_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/parity_calc.v:21$108 $flatten\uart_top_inst.\uart_tx_inst.\parity_calc_inst.$not$/home/amustafa/qflow_training/multi_clock_digital_system/src/parity_calc.v:22$110 $flatten\uart_top_inst.\uart_tx_inst.\parity_calc_inst.$reduce_xor$/home/amustafa/qflow_training/multi_clock_digital_system/src/parity_calc.v:22$109
	if (posedge_i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y_0) {
		p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_par__bit__out.next = (logic_and<1>(not_u<1>(p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_par__type__in), p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_data__valid__in) ? reduce_xor<1>(p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_data__in) : (logic_and<1>(p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_par__type__in, p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_data__valid__in) ? not_u<1>(reduce_xor<1>(p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_data__in)) : p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_par__bit__out.curr));
	}
	if (p_uart__top__inst_2e_uart__tx__inst_2e_reset__n == value<1> {0u}) {
		p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_par__bit__out.next = value<1>{0u};
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:19.13-30.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:24.1-30.4|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	// cell $procdff$1289
	if (posedge_i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y_0) {
		p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.next = i_procmux_24_269__Y;
	}
	if (p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_reset__n == value<1> {0u}) {
		p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.next = value<3>{0u};
	}
	// cells $procdff$1290 $procmux$283 $flatten\uart_top_inst.\uart_tx_inst.\uart_tx_fsm_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:84$121 $flatten\uart_top_inst.\uart_tx_inst.\uart_tx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:84$120 $flatten\uart_top_inst.\uart_tx_inst.\uart_tx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:84$119 $procmux$280 $flatten\uart_top_inst.\uart_tx_inst.\uart_tx_fsm_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:87$124 $flatten\uart_top_inst.\uart_tx_inst.\uart_tx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:87$123 $flatten\uart_top_inst.\uart_tx_inst.\uart_tx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:87$122
	if (posedge_i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y_0) {
		p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_busy__out.next = (logic_and<1>(logic_not<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr), eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_next__state, value<3>{0x1u})) ? value<1>{0x1u} : (logic_and<1>(eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x4u}), logic_not<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_next__state)) ? value<1>{0u} : p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_busy__out.curr));
	}
	if (p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_reset__n == value<1> {0u}) {
		p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_busy__out.next = value<1>{0u};
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:79.14-87.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/parity_check.v:12.1-18.4|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	// cell $procdff$1291
	if (posedge_p_uart__clk) {
		p_uart__top__inst_2e_uart__rx__inst_2e_parity__check__inst_2e_register.next = p_uart__top__inst_2e_uart__rx__inst_2e_parity__check__inst_2e_register.curr.slice<8,1>().concat(i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_or_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_27_24_159__Y).val();
	}
	if (p_uart__top__inst_2e_uart__rx__inst_2e_reset__n == value<1> {0u}) {
		p_uart__top__inst_2e_uart__rx__inst_2e_parity__check__inst_2e_register.next = value<9>{0u};
	}
	// cells $procdff$1292 $procmux$342 $procmux$508 $procmux$509_CMP0 $procmux$510_CMP0 $procmux$469 $procmux$470_CMP0 $procmux$467 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:104$192 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$sub$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:104$191 $procmux$477 $procmux$478_CMP0 $procmux$475 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:97$190 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$lt$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:97$189 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:97$188 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$sub$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:97$187
	if (posedge_p_uart__clk) {
		p_uart__top__inst_2e_uart__rx__inst_2e_deserializer__inst_2e_register.next = ((eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x3u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x3u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_edge__cnt__in, sub_uu<32>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_prescale__in, value<32>{0x1u})) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? (logic_and<1>(eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_edge__cnt__in, sub_uu<32>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_prescale__in, value<32>{0x1u})), lt_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_bit__cnt__in, value<32>{0x9u})) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u})) ? i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_or_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_27_24_159__Y.concat(p_uart__top__inst_2e_uart__rx__inst_2e_deserializer__inst_2e_register.curr.slice<7,1>()).val() : p_uart__top__inst_2e_uart__rx__inst_2e_deserializer__inst_2e_register.curr);
	}
	if (p_uart__top__inst_2e_uart__rx__inst_2e_reset__n == value<1> {0u}) {
		p_uart__top__inst_2e_uart__rx__inst_2e_deserializer__inst_2e_register.next = value<8>{0u};
	}
	// cells $procdff$1293 $procmux$356 $procmux$353 $procmux$351 $flatten\uart_top_inst.\uart_rx_inst.\edge_bit_counter_inst.$add$/home/amustafa/qflow_training/multi_clock_digital_system/src/edge_bit_counter.v:28$145
	if (posedge_p_uart__clk) {
		p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_bit__cnt__out.next = (p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_data__valid__in ? value<4>{0u} : (p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_en__counter__in ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_edge__bit__counter__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_edge__bit__counter_2e_v_3a_25_24_144__Y ? add_uu<32>(p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_bit__cnt__out.curr, value<32>{0x1u}).slice<3,0>().val() : p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_bit__cnt__out.curr) : p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_bit__cnt__out.curr));
	}
	if (p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_reset__n == value<1> {0u}) {
		p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_bit__cnt__out.next = value<4>{0u};
	}
	// cells $procdff$1294 $procmux$349 $procmux$346 $procmux$344 $flatten\uart_top_inst.\uart_rx_inst.\edge_bit_counter_inst.$add$/home/amustafa/qflow_training/multi_clock_digital_system/src/edge_bit_counter.v:24$142
	if (posedge_p_uart__clk) {
		p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out.next = (p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_data__valid__in ? value<5>{0u} : (p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_en__counter__in ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_edge__bit__counter__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_edge__bit__counter_2e_v_3a_25_24_144__Y ? value<5>{0u} : add_uu<32>(p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out.curr, value<32>{0x1u}).slice<4,0>().val()) : p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out.curr));
	}
	if (p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_reset__n == value<1> {0u}) {
		p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out.next = value<5>{0u};
	}
	// cells $procdff$1295 $procmux$379 $procmux$377 $procmux$374 $procmux$372 $procmux$369 $procmux$366 $procmux$364 $procmux$361 $procmux$358 $flatten\uart_top_inst.\uart_rx_inst.\data_sampling_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:22$155 $flatten\uart_top_inst.\uart_rx_inst.\data_sampling_inst.$add$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:22$154 $flatten\uart_top_inst.\uart_rx_inst.\data_sampling_inst.$div$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:22$153
	if (posedge_p_uart__clk) {
		p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.next = (p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_data__sample__en__in ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_18_24_150__Y ? p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<2>().val() : (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_20_24_152__Y ? p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<2>().val() : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_edge__cnt__in, add_uu<32>(div_uu<32>(p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_prescale__in, value<32>{0x2u}), value<32>{0x1u})) ? p_rx__in : p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<2>().val()))) : p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<2>().val()).concat((p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_data__sample__en__in ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_18_24_150__Y ? p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<1>().val() : (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_20_24_152__Y ? p_rx__in : p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<1>().val())) : p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<1>().val())).concat((p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_data__sample__en__in ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_18_24_150__Y ? p_rx__in : p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<0>().val()) : p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<0>().val())).val();
	}
	if (p_uart__top__inst_2e_uart__rx__inst_2e_reset__n == value<1> {0u}) {
		p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.next = value<3>{0u};
	}
	// cells $procdff$1296 $procmux$443 $procmux$444_CMP0 $procmux$445_CMP0 $procmux$446_CMP0 $procmux$447_CMP0 $procmux$448_CMP0 $procmux$394 $procmux$395_CMP0 $procmux$392 $procmux$388 $procmux$389_CMP0 $procmux$386 $procmux$383 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:67$182 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:67$180 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$sub$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:67$179 $procmux$401 $procmux$402_CMP0 $procmux$399 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:60$174 $procmux$409 $procmux$410_CMP0 $procmux$407 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:55$173 $procmux$430 $procmux$431_CMP0 $procmux$428 $procmux$421 $procmux$422_CMP0 $procmux$419 $procmux$416 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:50$172 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_not$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:50$171 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:50$170 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_not$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:50$169 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:50$168 $procmux$440 $procmux$441_CMP0 $procmux$438
	if (posedge_p_uart__clk) {
		p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.next = (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x6u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x6u}) ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_65_24_178__Y ? value<3>{0x1u} : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x6u}) ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_65_24_178__Y ? value<3>{0u} : (logic_and<1>(eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_edge__cnt__in, sub_uu<32>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_prescale__in, value<32>{0x1u})), p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_rx__in) ? value<3>{0u} : p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr)) : value<3>{0u})) : value<3>{0u}) : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x3u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x3u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_bit__cnt__in, value<4>{0x9u}) ? value<3>{0x6u} : p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr) : value<3>{0u}) : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_bit__cnt__in, value<4>{0xau}) ? value<3>{0x6u} : p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr) : value<3>{0u}) : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_48_24_167__Y ? value<3>{0x2u} : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_48_24_167__Y ? value<3>{0u} : (logic_and<1>(logic_and<1>(eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_bit__cnt__in, value<4>{0x1u}), logic_not<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_strt__err__in)), logic_not<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_par__en__in)) ? value<3>{0x3u} : p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr)) : value<3>{0u})) : value<3>{0u}) : (logic_not<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr) ? (logic_not<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr) ? (p_rx__in ? p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr : value<3>{0x1u}) : value<3>{0u}) : value<3>{0u})))));
	}
	if (p_uart__top__inst_2e_uart__rx__inst_2e_reset__n == value<1> {0u}) {
		p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.next = value<3>{0u};
	}
	// cells $procdff$1297 $procmux$571 $procmux$568 $procmux$552 $procmux$553_CMP0 $procmux$554_CMP0 $procmux$555_CMP0 $procmux$556_CMP0 $procmux$557_CMP0 $procmux$558_CMP0 $procmux$559_CMP0 $procmux$560_CMP0 $procmux$561_CMP0 $procmux$562_CMP0 $procmux$563_CMP0 $procmux$564_CMP0 $procmux$565_CMP0 $procmux$566_CMP0 $procmux$567_CMP0 $procmux$523 $procmux$521 $procmux$522_CMP0 $procmux$519 $flatten\alu_inst.$lt$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:85$50 $procmux$535 $procmux$533 $procmux$534_CMP0 $procmux$531 $flatten\alu_inst.$gt$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:79$49 $procmux$548 $procmux$546 $procmux$547_CMP0 $procmux$544 $flatten\alu_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:73$48 $flatten\alu_inst.$not$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:70$47 $flatten\alu_inst.$xor$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:70$46 $flatten\alu_inst.$xor$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:67$45 $flatten\alu_inst.$not$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:64$44 $flatten\alu_inst.$or$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:64$43 $flatten\alu_inst.$not$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:61$42 $flatten\alu_inst.$and$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:61$41 $flatten\alu_inst.$or$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:58$40 $flatten\alu_inst.$and$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:55$39 $flatten\alu_inst.$div$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:52$38 $flatten\alu_inst.$mul$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:49$37 $flatten\alu_inst.$sub$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:46$36 $flatten\alu_inst.$add$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:43$35
	if (posedge_i_flatten_5c_clk__gate__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__gate_2e_v_3a_15_24_20__Y) {
		p_alu__inst_2e_data__out.next = (p_alu__inst_2e_en__in ? (p_alu__inst_2e_en__in ? (eq_uu<1>(p_alu__inst_2e_alu__func__in, value<4>{0xeu}) ? value<7>{0u}.concat(p_reg__file__inst_2e_mem_5b_0_5d_.curr).concat(value<1>{0u}).val() : (eq_uu<1>(p_alu__inst_2e_alu__func__in, value<4>{0xdu}) ? value<9>{0u}.concat(p_reg__file__inst_2e_mem_5b_0_5d_.curr.slice<7,1>()).val() : (eq_uu<1>(p_alu__inst_2e_alu__func__in, value<4>{0xcu}) ? (p_alu__inst_2e_en__in ? (eq_uu<1>(p_alu__inst_2e_alu__func__in, value<4>{0xcu}) ? (lt_uu<1>(p_alu__inst_2e_data__a__in, p_alu__inst_2e_data__b__in) ? value<16>{0x3u} : value<16>{0u}) : value<16>{0u}) : value<16>{0u}) : (eq_uu<1>(p_alu__inst_2e_alu__func__in, value<4>{0xbu}) ? (p_alu__inst_2e_en__in ? (eq_uu<1>(p_alu__inst_2e_alu__func__in, value<4>{0xbu}) ? (gt_uu<1>(p_alu__inst_2e_data__a__in, p_alu__inst_2e_data__b__in) ? value<16>{0x2u} : value<16>{0u}) : value<16>{0u}) : value<16>{0u}) : (eq_uu<1>(p_alu__inst_2e_alu__func__in, value<4>{0xau}) ? (p_alu__inst_2e_en__in ? (eq_uu<1>(p_alu__inst_2e_alu__func__in, value<4>{0xau}) ? (eq_uu<1>(p_alu__inst_2e_data__a__in, p_alu__inst_2e_data__b__in) ? value<16>{0x1u} : value<16>{0u}) : value<16>{0u}) : value<16>{0u}) : (eq_uu<1>(p_alu__inst_2e_alu__func__in, value<4>{0x9u}) ? not_u<16>(xor_uu<16>(p_alu__inst_2e_data__a__in, p_alu__inst_2e_data__b__in)) : (eq_uu<1>(p_alu__inst_2e_alu__func__in, value<4>{0x8u}) ? xor_uu<16>(p_alu__inst_2e_data__a__in, p_alu__inst_2e_data__b__in) : (eq_uu<1>(p_alu__inst_2e_alu__func__in, value<4>{0x7u}) ? not_u<16>(or_uu<16>(p_alu__inst_2e_data__a__in, p_alu__inst_2e_data__b__in)) : (eq_uu<1>(p_alu__inst_2e_alu__func__in, value<4>{0x6u}) ? not_u<16>(and_uu<16>(p_alu__inst_2e_data__a__in, p_alu__inst_2e_data__b__in)) : (eq_uu<1>(p_alu__inst_2e_alu__func__in, value<4>{0x5u}) ? or_uu<16>(p_alu__inst_2e_data__a__in, p_alu__inst_2e_data__b__in) : (eq_uu<1>(p_alu__inst_2e_alu__func__in, value<4>{0x4u}) ? and_uu<16>(p_alu__inst_2e_data__a__in, p_alu__inst_2e_data__b__in) : (eq_uu<1>(p_alu__inst_2e_alu__func__in, value<4>{0x3u}) ? div_uu<16>(p_alu__inst_2e_data__a__in, p_alu__inst_2e_data__b__in) : (eq_uu<1>(p_alu__inst_2e_alu__func__in, value<4>{0x2u}) ? mul_uu<16>(p_alu__inst_2e_data__a__in, p_alu__inst_2e_data__b__in) : (eq_uu<1>(p_alu__inst_2e_alu__func__in, value<4>{0x1u}) ? sub_uu<16>(p_alu__inst_2e_data__a__in, p_alu__inst_2e_data__b__in) : (logic_not<1>(p_alu__inst_2e_alu__func__in) ? add_uu<16>(p_alu__inst_2e_data__a__in, p_alu__inst_2e_data__b__in) : value<16>{0u}))))))))))))))) : value<16>{0u}) : value<16>{0u});
	}
	if (p_alu__inst_2e_reset__n == value<1> {0u}) {
		p_alu__inst_2e_data__out.next = value<16>{0u};
	}
	// cells $procdff$1298 $procmux$574
	if (posedge_i_flatten_5c_clk__gate__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__gate_2e_v_3a_15_24_20__Y) {
		p_alu__inst_2e_data__valid__out.next = (p_alu__inst_2e_en__in ? value<1>{0x1u} : value<1>{0u});
	}
	if (p_alu__inst_2e_reset__n == value<1> {0u}) {
		p_alu__inst_2e_data__valid__out.next = value<1>{0u};
	}
	// cells $procdff$1299 $procmux$833 $procmux$830 $procmux$597 $procmux$594 $procmux$577 $procmux$578_CMP0 $procmux$579_CMP0 $procmux$580_CMP0 $procmux$581_CMP0 $procmux$582_CMP0 $procmux$583_CMP0 $procmux$584_CMP0 $procmux$585_CMP0 $procmux$586_CMP0 $procmux$587_CMP0 $procmux$588_CMP0 $procmux$589_CMP0 $procmux$590_CMP0 $procmux$591_CMP0 $procmux$592_CMP0 $procmux$593_CMP0
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_rd__data__out.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? p_reg__file__inst_2e_rd__data__out.curr : (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_40_24_73__Y ? (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? value<8>{0u} : (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_40_24_73__Y ? (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0xfu}) ? p_reg__file__inst_2e_mem_5b_15_5d_.curr : (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0xeu}) ? p_reg__file__inst_2e_mem_5b_14_5d_.curr : (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0xdu}) ? p_reg__file__inst_2e_mem_5b_13_5d_.curr : (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0xcu}) ? p_reg__file__inst_2e_mem_5b_12_5d_.curr : (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0xbu}) ? p_reg__file__inst_2e_mem_5b_11_5d_.curr : (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0xau}) ? p_reg__file__inst_2e_mem_5b_10_5d_.curr : (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x9u}) ? p_reg__file__inst_2e_mem_5b_9_5d_.curr : (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x8u}) ? p_reg__file__inst_2e_mem_5b_8_5d_.curr : (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x7u}) ? p_reg__file__inst_2e_mem_5b_7_5d_.curr : (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x6u}) ? p_reg__file__inst_2e_mem_5b_6_5d_.curr : (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x5u}) ? p_reg__file__inst_2e_mem_5b_5_5d_.curr : (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x4u}) ? p_reg__file__inst_2e_mem_5b_4_5d_.curr : (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x3u}) ? p_reg__file__inst_2e_mem_5b_3_5d_.curr : (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x2u}) ? p_reg__file__inst_2e_mem_5b_2_5d_.curr : (eq_uu<1>(p_reg__file__inst_2e_addr__in, value<4>{0x1u}) ? p_reg__file__inst_2e_mem_5b_1_5d_.curr : (logic_not<1>(p_reg__file__inst_2e_addr__in) ? p_reg__file__inst_2e_mem_5b_0_5d_.curr : value<8>{0u})))))))))))))))) : value<8>{0u})) : p_reg__file__inst_2e_rd__data__out.curr));
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_rd__data__out.next = value<8>{0u};
	}
	// cells $procdff$1300 $procmux$827 $procmux$824
	if (posedge_p_ref__clk) {
		p_reg__file__inst_2e_rd__data__valid__out.next = (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_36_24_67__Y ? p_reg__file__inst_2e_rd__data__valid__out.curr : (i_flatten_5c_reg__file__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_40_24_73__Y ? value<1>{0x1u} : value<1>{0u}));
	}
	if (p_reg__file__inst_2e_reset__n == value<1> {0u}) {
		p_reg__file__inst_2e_rd__data__valid__out.next = value<1>{0u};
	}
	// cells $procmux$213 $procmux$214_CMP0 $procmux$215_CMP0 $procmux$216_CMP0 $procmux$217_CMP0
	p_tx__out = (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_mux__inst_2e_mux__sel__in, value<2>{0x3u}) ? p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_par__bit__out.curr : (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_mux__inst_2e_mux__sel__in, value<2>{0x2u}) ? p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_int__reg.curr.slice<0>().val() : (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_mux__inst_2e_mux__sel__in, value<2>{0x1u}) ? value<1>{0u} : (logic_not<1>(p_uart__top__inst_2e_uart__tx__inst_2e_mux__inst_2e_mux__sel__in) ? value<1>{0x1u} : value<1>{0u}))));
	return converged;
}

bool p_system__top::commit() {
	bool changed = false;
	if (p_bit__synchronizer__inst_2e_sync__data__out.commit()) changed = true;
	if (p_bit__synchronizer__inst_2e_i.commit()) changed = true;
	if (i_flatten_5c_bit__synchronizer__inst_2e__24_splitcmplxassign_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_bit__synchronizer_2e_v_3a_24_24_3.commit()) changed = true;
	if (p_bit__synchronizer__inst_2e_reg__file_5b_0_5d_.commit()) changed = true;
	if (p_reset__synchronizer__inst__1_2e_ff.commit()) changed = true;
	if (p_reset__synchronizer__inst__0_2e_ff.commit()) changed = true;
	if (p_data__synchronizer__inst__1_2e_enable__pulse__out.commit()) changed = true;
	if (p_data__synchronizer__inst__1_2e_sync__data__out.commit()) changed = true;
	if (p_data__synchronizer__inst__1_2e_ff.commit()) changed = true;
	if (p_data__synchronizer__inst__0_2e_enable__pulse__out.commit()) changed = true;
	if (p_data__synchronizer__inst__0_2e_sync__data__out.commit()) changed = true;
	if (p_data__synchronizer__inst__0_2e_ff.commit()) changed = true;
	if (p_clk__gate__inst_2e_latch__out.commit()) changed = true;
	prev_i_flatten_5c_clk__gate__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__gate_2e_v_3a_15_24_20__Y = i_flatten_5c_clk__gate__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__gate_2e_v_3a_15_24_20__Y;
	if (p_clk__divider__inst_2e_count.commit()) changed = true;
	prev_i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y = i_flatten_5c_clk__divider__inst_2e__24_ternary_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__divider_2e_v_3a_26_24_31__Y;
	if (p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_counter.commit()) changed = true;
	if (p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_int__reg.commit()) changed = true;
	if (p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_par__bit__out.commit()) changed = true;
	if (p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_busy__out.commit()) changed = true;
	if (p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.commit()) changed = true;
	if (p_uart__top__inst_2e_uart__rx__inst_2e_parity__check__inst_2e_register.commit()) changed = true;
	if (p_uart__top__inst_2e_uart__rx__inst_2e_deserializer__inst_2e_register.commit()) changed = true;
	if (p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_bit__cnt__out.commit()) changed = true;
	if (p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out.commit()) changed = true;
	if (p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.commit()) changed = true;
	if (p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.commit()) changed = true;
	if (p_alu__inst_2e_data__out.commit()) changed = true;
	if (p_alu__inst_2e_data__valid__out.commit()) changed = true;
	if (p_reg__file__inst_2e_rd__data__out.commit()) changed = true;
	if (p_reg__file__inst_2e_rd__data__valid__out.commit()) changed = true;
	if (p_reg__file__inst_2e_i.commit()) changed = true;
	if (p_reg__file__inst_2e_mem_5b_0_5d_.commit()) changed = true;
	if (p_reg__file__inst_2e_mem_5b_1_5d_.commit()) changed = true;
	if (p_reg__file__inst_2e_mem_5b_2_5d_.commit()) changed = true;
	if (p_reg__file__inst_2e_mem_5b_3_5d_.commit()) changed = true;
	if (p_reg__file__inst_2e_mem_5b_4_5d_.commit()) changed = true;
	if (p_reg__file__inst_2e_mem_5b_5_5d_.commit()) changed = true;
	if (p_reg__file__inst_2e_mem_5b_6_5d_.commit()) changed = true;
	if (p_reg__file__inst_2e_mem_5b_7_5d_.commit()) changed = true;
	if (p_reg__file__inst_2e_mem_5b_8_5d_.commit()) changed = true;
	if (p_reg__file__inst_2e_mem_5b_9_5d_.commit()) changed = true;
	if (p_reg__file__inst_2e_mem_5b_10_5d_.commit()) changed = true;
	if (p_reg__file__inst_2e_mem_5b_11_5d_.commit()) changed = true;
	if (p_reg__file__inst_2e_mem_5b_12_5d_.commit()) changed = true;
	if (p_reg__file__inst_2e_mem_5b_13_5d_.commit()) changed = true;
	if (p_reg__file__inst_2e_mem_5b_14_5d_.commit()) changed = true;
	if (p_reg__file__inst_2e_mem_5b_15_5d_.commit()) changed = true;
	if (i_flatten_5c_reg__file__inst_2e__24_mem2reg__wr_24__5c_mem_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_38_24_54__ADDR.commit()) changed = true;
	if (i_flatten_5c_reg__file__inst_2e__24_mem2reg__wr_24__5c_mem_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_38_24_54__DATA.commit()) changed = true;
	if (i_flatten_5c_reg__file__inst_2e__24_mem2reg__rd_24__5c_mem_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_42_24_55__ADDR.commit()) changed = true;
	if (i_flatten_5c_reg__file__inst_2e__24_mem2reg__rd_24__5c_mem_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_reg__file_2e_v_3a_42_24_55__DATA.commit()) changed = true;
	if (p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__reg.commit()) changed = true;
	if (p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.commit()) changed = true;
	if (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__data__out.commit()) changed = true;
	if (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rf__send__data__out.commit()) changed = true;
	if (p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.commit()) changed = true;
	prev_p_uart__clk = p_uart__clk;
	prev_p_ref__clk = p_ref__clk;
	return changed;
}

void p_system__top::debug_eval() {
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:43.12-54.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/serializer.v:37.24-37.36|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	value<1> i_flatten_5c_uart__top__inst_2e__5c_uart__tx__inst_2e__5c_serializer__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_serializer_2e_v_3a_37_24_101__Y;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:49.15-57.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:27.27-27.101|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_or_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_27_24_159__Y;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:48.7-48.54|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_48_24_167__Y;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:65.7-65.51|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_65_24_178__Y;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx.v:28.13-47.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:111.7-111.39|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:29.9-38.2
	value<1> i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_111_24_195__Y;
	// connection
	p_uart__top__inst_2e_prescale__in = p_reg__file__inst_2e_mem_5b_2_5d_.curr.slice<6,2>().val();
	// cells $procmux$492 $procmux$493_CMP0 $procmux$486 $procmux$487_CMP0 $procmux$484 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$gt$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:88$186 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$add$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:88$185 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$div$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:88$184
	p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_strt__chk__en__out = (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? (gt_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out.curr, add_uu<32>(div_uu<32>(p_uart__top__inst_2e_prescale__in, value<32>{0x2u}), value<32>{0x2u})) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $flatten\uart_top_inst.\uart_rx_inst.\data_sampling_inst.$or$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:27$159 $flatten\uart_top_inst.\uart_rx_inst.\data_sampling_inst.$and$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:27$158 $flatten\uart_top_inst.\uart_rx_inst.\data_sampling_inst.$and$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:27$157 $flatten\uart_top_inst.\uart_rx_inst.\data_sampling_inst.$or$/home/amustafa/qflow_training/multi_clock_digital_system/src/data_sampling.v:27$156
	i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_or_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_27_24_159__Y = or_uu<1>(and_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<2>().val(), or_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<1>().val(), p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<0>().val())), and_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<0>().val(), p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register.curr.slice<1>().val()));
	// connection
	p_uart__top__inst_2e_par__en__in = p_reg__file__inst_2e_mem_5b_2_5d_.curr.slice<0>().val();
	// cells $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:111$195 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$add$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:111$194 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$div$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:111$193
	i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_111_24_195__Y = eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out.curr, add_uu<32>(div_uu<32>(p_uart__top__inst_2e_prescale__in, value<32>{0x2u}), value<32>{0x3u}));
	// cells $procmux$301 $procmux$298 $procmux$296
	p_uart__top__inst_2e_uart__rx__inst_2e_strt__check__inst_2e_strt__err__out = (p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_strt__chk__en__out ? (p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_strt__chk__en__out ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_or_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_27_24_159__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1067 $procmux$1068_CMP0 $procmux$1069_CMP0 $procmux$1070_CMP0 $procmux$886 $procmux$887_CMP0 $procmux$884 $procmux$911 $procmux$912_CMP0 $procmux$909 $procmux$976 $procmux$977_CMP0 $procmux$974
	p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__en__out = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x8u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x8u}) ? (p_data__synchronizer__inst__0_2e_enable__pulse__out.curr ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x7u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x7u}) ? (p_data__synchronizer__inst__0_2e_enable__pulse__out.curr ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x3u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x3u}) ? (p_data__synchronizer__inst__0_2e_enable__pulse__out.curr ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u})));
	// cells $procmux$1052 $procmux$1053_CMP0 $procmux$1054_CMP0 $procmux$1055_CMP0 $procmux$1056_CMP0 $procmux$871 $procmux$872_CMP0 $procmux$894 $procmux$895_CMP0 $procmux$964 $procmux$965_CMP0
	p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__out = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x8u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x8u}) ? value<4>{0x1u} : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x7u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x7u}) ? value<4>{0u} : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x6u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__reg.curr.slice<3,0>().val() : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x3u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x3u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__reg.curr.slice<3,0>().val() : value<4>{0u}) : value<4>{0u}))));
	// cells $procmux$1062 $procmux$1063_CMP0
	p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__rd__en__out = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x6u}) ? value<1>{0x1u} : value<1>{0u});
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:43.12-54.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/serializer.v:37.24-37.36|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	// cell $flatten\uart_top_inst.\uart_tx_inst.\serializer_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/serializer.v:37$101
	i_flatten_5c_uart__top__inst_2e__5c_uart__tx__inst_2e__5c_serializer__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_serializer_2e_v_3a_37_24_101__Y = eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_counter.curr, value<3>{0x7u});
	// cells $procmux$1011 $procmux$1012_CMP0 $procmux$851 $procmux$852_CMP0 $procmux$849
	p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__out = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0xau}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0xau}) ? (p_alu__inst_2e_data__valid__out.curr ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1036 $procmux$1037_CMP0 $procmux$857 $procmux$858_CMP0
	p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x9u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x9u}) ? p_data__synchronizer__inst__0_2e_sync__data__out.curr.slice<3,0>().val() : value<4>{0u}) : value<4>{0u});
	// cells $procmux$1052 $procmux$1053_CMP0 $procmux$1054_CMP0 $procmux$1055_CMP0 $procmux$1056_CMP0 $procmux$871 $procmux$872_CMP0 $procmux$894 $procmux$895_CMP0 $procmux$964 $procmux$965_CMP0
	p_rf__addr.slice<3,0>() = p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__out;
	// connection
	p_rf__addr.slice<7,4>() = value<4>{0u};
	// cells $procmux$1018 $procmux$1019_CMP0 $procmux$931 $procmux$932_CMP0 $procmux$929
	p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rf__send__out = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x6u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x6u}) ? (p_reg__file__inst_2e_rd__data__valid__out.curr ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1040 $procmux$1041_CMP0 $procmux$864 $procmux$865_CMP0 $procmux$862
	p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__en__out = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x9u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x9u}) ? (p_data__synchronizer__inst__0_2e_enable__pulse__out.curr ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// connection
	p_reg__file__inst_2e_addr__in = p_rf__addr.slice<3,0>().val();
	// connection
	p_clk__divider__inst_2e_div__ratio__in = p_reg__file__inst_2e_mem_5b_3_5d_.curr.slice<4,0>().val();
	// cells $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:48$167 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:48$166 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_not$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:48$165 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:48$164
	i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_48_24_167__Y = logic_and<1>(logic_and<1>(eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_bit__cnt__out.curr, value<4>{0x1u}), logic_not<1>(p_uart__top__inst_2e_uart__rx__inst_2e_strt__check__inst_2e_strt__err__out)), p_uart__top__inst_2e_par__en__in);
	// cells $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:65$178 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:65$177 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:65$176 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$sub$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:65$175
	i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_65_24_178__Y = logic_and<1>(eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out.curr, sub_uu<32>(p_uart__top__inst_2e_prescale__in, value<32>{0x1u})), not_u<1>(p_rx__in));
	// connection
	p_uart__top__inst_2e_par__type__in = p_reg__file__inst_2e_mem_5b_2_5d_.curr.slice<1>().val();
	// connection
	p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_data__valid__out = (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x6u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x6u}) ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_111_24_195__Y ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x6u}) ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_111_24_195__Y ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$276 $procmux$277_CMP0 $procmux$278_CMP0 $procmux$279_CMP0
	p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_mux__sel__out = (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x3u}) ? value<2>{0x3u} : (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? value<2>{0x2u} : (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? value<2>{0x1u} : value<2>{0u})));
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/system_top.v:102.10-117.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx.v:19.13-30.2|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:69.21-69.42|/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_top.v:18.9-27.2
	// cell $flatten\uart_top_inst.\uart_tx_inst.\uart_tx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_tx_fsm.v:69$115
	p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_ser__en__out = eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x2u});
	// connection
	p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_next__state = (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x4u}) ? (p_data__synchronizer__inst__1_2e_enable__pulse__out.curr ? value<3>{0x1u} : value<3>{0u}) : value<3>{0u}) : (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x3u}) ? value<3>{0x4u} : (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? (i_flatten_5c_uart__top__inst_2e__5c_uart__tx__inst_2e__5c_serializer__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_serializer_2e_v_3a_37_24_101__Y ? (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? (i_flatten_5c_uart__top__inst_2e__5c_uart__tx__inst_2e__5c_serializer__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_serializer_2e_v_3a_37_24_101__Y ? (p_uart__top__inst_2e_par__en__in ? value<3>{0x3u} : value<3>{0x4u}) : value<3>{0u}) : value<3>{0u}) : value<3>{0x2u}) : value<3>{0u}) : (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? value<3>{0x2u} : (logic_not<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr) ? (logic_not<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state.curr) ? (p_data__synchronizer__inst__1_2e_enable__pulse__out.curr ? value<3>{0x1u} : value<3>{0u}) : value<3>{0u}) : value<3>{0u})))));
	// cells $procmux$495 $procmux$496_CMP0 $procmux$497_CMP0 $procmux$498_CMP0 $procmux$499_CMP0
	p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_counter__en__out = (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x6u}) ? value<1>{0x1u} : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x3u}) ? value<1>{0x1u} : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? value<1>{0x1u} : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? value<1>{0x1u} : value<1>{0u}))));
	// connection
	p_reset__synchronizer__inst__1_2e_sync__reset__n__out = p_reset__synchronizer__inst__1_2e_ff.curr.slice<0>().val();
	// connection
	p_clk__divider__inst_2e_div__clk__out = (logic_and<1>(reduce_bool<1>(p_clk__divider__inst_2e_count.curr), le_uu<1>(p_clk__divider__inst_2e_count.curr, div_uu<32>(p_clk__divider__inst_2e_div__ratio__in, value<32>{0x2u}))) ? value<32>{0x1u} : value<32>{0u}).slice<0>().val();
	// cells $procmux$508 $procmux$509_CMP0 $procmux$510_CMP0 $procmux$469 $procmux$470_CMP0 $procmux$467 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:104$192 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$sub$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:104$191 $procmux$477 $procmux$478_CMP0 $procmux$475 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:97$190 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$lt$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:97$189 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:97$188 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$sub$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:97$187
	p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_deser__en__out = (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x3u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x3u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out.curr, sub_uu<32>(p_uart__top__inst_2e_prescale__in, value<32>{0x1u})) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? (logic_and<1>(eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out.curr, sub_uu<32>(p_uart__top__inst_2e_prescale__in, value<32>{0x1u})), lt_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_bit__cnt__out.curr, value<32>{0x9u})) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}));
	// cells $procmux$501 $procmux$502_CMP0 $procmux$503_CMP0 $procmux$504_CMP0 $procmux$505_CMP0
	p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_data__sample__en__out = (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x6u}) ? value<1>{0x1u} : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x3u}) ? value<1>{0x1u} : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? value<1>{0x1u} : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? value<1>{0x1u} : value<1>{0u}))));
	// connection
	p_reset__synchronizer__inst__0_2e_sync__reset__n__out = p_reset__synchronizer__inst__0_2e_ff.curr.slice<0>().val();
	// connection
	p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_sampled__bit__out = i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_data__sampling__inst_2e__24_or_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_data__sampling_2e_v_3a_27_24_159__Y;
	// connection
	p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_ser__done__out = i_flatten_5c_uart__top__inst_2e__5c_uart__tx__inst_2e__5c_serializer__inst_2e__24_eq_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_serializer_2e_v_3a_37_24_101__Y;
	// cells $procmux$1045 $procmux$1046_CMP0 $procmux$1047_CMP0 $procmux$1048_CMP0 $procmux$878 $procmux$879_CMP0 $procmux$902 $procmux$903_CMP0 $procmux$953 $procmux$954_CMP0
	p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x8u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x8u}) ? p_data__synchronizer__inst__0_2e_sync__data__out.curr : value<8>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x7u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x7u}) ? p_data__synchronizer__inst__0_2e_sync__data__out.curr : value<8>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x3u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x3u}) ? p_data__synchronizer__inst__0_2e_sync__data__out.curr : value<8>{0u}) : value<8>{0u})));
	// cells $flatten\uart_top_inst.\uart_rx_inst.\deserializer_inst.$ternary$/home/amustafa/qflow_training/multi_clock_digital_system/src/deserializer.v:25$139 $flatten\uart_top_inst.\uart_rx_inst.\deserializer_inst.$extend$/home/amustafa/qflow_training/multi_clock_digital_system/src/deserializer.v:25$138
	p_uart__top__inst_2e_uart__rx__inst_2e_deserializer__inst_2e_data__out = (p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_data__valid__out ? pos_u<32>(p_uart__top__inst_2e_uart__rx__inst_2e_deserializer__inst_2e_register.curr) : value<32>{0u}).slice<7,0>().val();
	// cells $procmux$992 $procmux$993_CMP0 $procmux$845 $procmux$846_CMP0 $procmux$843
	p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__data__store = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0xau}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0xau}) ? (p_alu__inst_2e_data__valid__out.curr ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $procmux$1007 $procmux$1008_CMP0 $procmux$1009_CMP0 $procmux$942 $procmux$943_CMP0 $procmux$940 $procmux$989 $procmux$990_CMP0 $procmux$987
	p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__en = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x5u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x5u}) ? (p_data__synchronizer__inst__0_2e_enable__pulse__out.curr ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x2u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x2u}) ? (p_data__synchronizer__inst__0_2e_enable__pulse__out.curr ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}));
	// cells $procmux$999 $procmux$1000_CMP0 $procmux$921 $procmux$922_CMP0 $procmux$919
	p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__rd__store = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x6u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x6u}) ? (p_reg__file__inst_2e_rd__data__valid__out.curr ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// connection
	p_data__synchronizer__inst__1_2e_pulse__gen = and_uu<1>(p_data__synchronizer__inst__1_2e_ff.curr.slice<1>().val(), logic_not<1>(p_data__synchronizer__inst__1_2e_ff.curr.slice<0>().val()));
	// connection
	p_data__synchronizer__inst__0_2e_pulse__gen = and_uu<1>(p_data__synchronizer__inst__0_2e_ff.curr.slice<1>().val(), logic_not<1>(p_data__synchronizer__inst__0_2e_ff.curr.slice<0>().val()));
	// cells $procmux$1031 $procmux$1032_CMP0 $procmux$1033_CMP0
	p_sys__control__inst_2e_sys__control__rx__inst_2e_clk__gate__en__out = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0xau}) ? value<1>{0x1u} : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x9u}) ? value<1>{0x1u} : value<1>{0u}));
	// cells $procmux$1198 $procmux$1199_CMP0 $procmux$1200_CMP0 $procmux$1201_CMP0
	p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__tx__data__valid__out = (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x4u}) ? value<1>{0x1u} : (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x2u}) ? value<1>{0x1u} : (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x1u}) ? value<1>{0x1u} : value<1>{0u})));
	// cells $procmux$1193 $procmux$1194_CMP0 $procmux$1195_CMP0 $procmux$1196_CMP0
	p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__tx__data__out = (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x4u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__data__out.curr.slice<15,8>().val() : (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x2u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__data__out.curr.slice<7,0>().val() : (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x1u}) ? p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rf__send__data__out.curr : value<8>{0u})));
	// cells $procmux$213 $procmux$214_CMP0 $procmux$215_CMP0 $procmux$216_CMP0 $procmux$217_CMP0
	p_uart__top__inst_2e_uart__tx__inst_2e_mux__inst_2e_tx__out = (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_mux__sel__out, value<2>{0x3u}) ? p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_par__bit__out.curr : (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_mux__sel__out, value<2>{0x2u}) ? p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_int__reg.curr.slice<0>().val() : (eq_uu<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_mux__sel__out, value<2>{0x1u}) ? value<1>{0u} : (logic_not<1>(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_mux__sel__out) ? value<1>{0x1u} : value<1>{0u}))));
	// connection
	p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_ser__data = p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_int__reg.curr.slice<0>().val();
	// cells $procmux$1256 $procmux$1257_CMP0 $procmux$1258_CMP0 $procmux$1259_CMP0 $procmux$1260_CMP0 $procmux$1261_CMP0 $procmux$1206 $procmux$1207_CMP0 $procmux$1204 $procmux$1213 $procmux$1214_CMP0 $procmux$1211 $procmux$1221 $procmux$1222_CMP0 $procmux$1219 $procmux$1230 $procmux$1231_CMP0 $procmux$1228 $procmux$1253 $procmux$1254_CMP0 $procmux$1251 $procmux$1243 $procmux$1244_CMP0 $procmux$1241 $procmux$1238 $procmux$1011 $procmux$1012_CMP0 $procmux$851 $procmux$852_CMP0 $procmux$849
	p_sys__control__inst_2e_sys__control__tx__inst_2e_next__state = (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x4u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x4u}) ? (p_bit__synchronizer__inst_2e_sync__data__out.curr ? value<3>{0u} : p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr) : value<3>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x3u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x3u}) ? (p_bit__synchronizer__inst_2e_sync__data__out.curr ? p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr : value<3>{0x4u}) : value<3>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x2u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x2u}) ? (p_bit__synchronizer__inst_2e_sync__data__out.curr ? value<3>{0x3u} : p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr) : value<3>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x1u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr, value<3>{0x1u}) ? (p_bit__synchronizer__inst_2e_sync__data__out.curr ? value<3>{0u} : p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr) : value<3>{0u}) : (logic_not<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr) ? (logic_not<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rf__send__out ? value<3>{0x1u} : (logic_not<1>(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rf__send__out ? value<3>{0u} : (p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__out ? value<3>{0x2u} : p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state.curr)) : value<3>{0u})) : value<3>{0u}) : value<3>{0u})))));
	// cells $procmux$1182 $procmux$1183_CMP0 $procmux$1184_CMP0 $procmux$1185_CMP0 $procmux$1186_CMP0 $procmux$1187_CMP0 $procmux$1188_CMP0 $procmux$1189_CMP0 $procmux$1190_CMP0 $procmux$1191_CMP0 $procmux$1075 $procmux$1076_CMP0 $procmux$1073 $procmux$1082 $procmux$1083_CMP0 $procmux$1080 $procmux$1090 $procmux$1091_CMP0 $procmux$1088 $procmux$1099 $procmux$1100_CMP0 $procmux$1097 $procmux$1109 $procmux$1110_CMP0 $procmux$1107 $procmux$1120 $procmux$1121_CMP0 $procmux$1118 $procmux$1132 $procmux$1133_CMP0 $procmux$1130 $procmux$1145 $procmux$1146_CMP0 $procmux$1143 $procmux$1179 $procmux$1180_CMP0 $procmux$1177 $procmux$1165 $procmux$1166_CMP0 $procmux$1163 $procmux$1158 $procmux$1159_CMP0 $procmux$1160_CMP0 $procmux$1161_CMP0 $procmux$1162_CMP0
	p_sys__control__inst_2e_sys__control__rx__inst_2e_next__state = (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0xau}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0xau}) ? (p_alu__inst_2e_data__valid__out.curr ? value<4>{0u} : value<4>{0xau}) : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x9u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x9u}) ? (p_data__synchronizer__inst__0_2e_enable__pulse__out.curr ? value<4>{0xau} : value<4>{0x9u}) : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x8u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x8u}) ? (p_data__synchronizer__inst__0_2e_enable__pulse__out.curr ? value<4>{0x9u} : value<4>{0x8u}) : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x7u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x7u}) ? (p_data__synchronizer__inst__0_2e_enable__pulse__out.curr ? value<4>{0x8u} : value<4>{0x7u}) : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x6u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x6u}) ? (p_reg__file__inst_2e_rd__data__valid__out.curr ? value<4>{0u} : value<4>{0x6u}) : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x5u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x5u}) ? (p_data__synchronizer__inst__0_2e_enable__pulse__out.curr ? value<4>{0x6u} : value<4>{0x5u}) : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x3u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x3u}) ? (p_data__synchronizer__inst__0_2e_enable__pulse__out.curr ? value<4>{0u} : value<4>{0x3u}) : value<4>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x2u}) ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr, value<4>{0x2u}) ? (p_data__synchronizer__inst__0_2e_enable__pulse__out.curr ? value<4>{0x3u} : value<4>{0x2u}) : value<4>{0u}) : (logic_not<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr) ? (logic_not<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr) ? (p_data__synchronizer__inst__0_2e_enable__pulse__out.curr ? (logic_not<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state.curr) ? (p_data__synchronizer__inst__0_2e_enable__pulse__out.curr ? (eq_uu<1>(p_data__synchronizer__inst__0_2e_sync__data__out.curr, value<8>{0xddu}) ? value<4>{0x9u} : (eq_uu<1>(p_data__synchronizer__inst__0_2e_sync__data__out.curr, value<8>{0xccu}) ? value<4>{0x7u} : (eq_uu<1>(p_data__synchronizer__inst__0_2e_sync__data__out.curr, value<8>{0xbbu}) ? value<4>{0x5u} : (eq_uu<1>(p_data__synchronizer__inst__0_2e_sync__data__out.curr, value<8>{0xaau}) ? value<4>{0x2u} : value<4>{0u})))) : value<4>{0u}) : value<4>{0u}) : value<4>{0u}) : value<4>{0u}) : value<4>{0u})))))))));
	// cells $procmux$571 $procmux$568 $procmux$552 $procmux$553_CMP0 $procmux$554_CMP0 $procmux$555_CMP0 $procmux$556_CMP0 $procmux$557_CMP0 $procmux$558_CMP0 $procmux$559_CMP0 $procmux$560_CMP0 $procmux$561_CMP0 $procmux$562_CMP0 $procmux$563_CMP0 $procmux$564_CMP0 $procmux$565_CMP0 $procmux$566_CMP0 $procmux$567_CMP0 $procmux$523 $procmux$521 $procmux$522_CMP0 $procmux$519 $flatten\alu_inst.$lt$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:85$50 $procmux$535 $procmux$533 $procmux$534_CMP0 $procmux$531 $flatten\alu_inst.$gt$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:79$49 $procmux$548 $procmux$546 $procmux$547_CMP0 $procmux$544 $flatten\alu_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:73$48 $flatten\alu_inst.$not$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:70$47 $flatten\alu_inst.$xor$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:70$46 $flatten\alu_inst.$xor$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:67$45 $flatten\alu_inst.$not$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:64$44 $flatten\alu_inst.$or$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:64$43 $flatten\alu_inst.$not$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:61$42 $flatten\alu_inst.$and$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:61$41 $flatten\alu_inst.$or$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:58$40 $flatten\alu_inst.$and$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:55$39 $flatten\alu_inst.$div$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:52$38 $flatten\alu_inst.$mul$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:49$37 $flatten\alu_inst.$sub$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:46$36 $flatten\alu_inst.$add$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:43$35
	p_alu__inst_2e_alu__out__comp = (p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__en__out ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__en__out ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, value<4>{0xeu}) ? value<7>{0u}.concat(p_reg__file__inst_2e_mem_5b_0_5d_.curr).concat(value<1>{0u}).val() : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, value<4>{0xdu}) ? value<9>{0u}.concat(p_reg__file__inst_2e_mem_5b_0_5d_.curr.slice<7,1>()).val() : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, value<4>{0xcu}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__en__out ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, value<4>{0xcu}) ? (lt_uu<1>(p_reg__file__inst_2e_mem_5b_0_5d_.curr, p_reg__file__inst_2e_mem_5b_1_5d_.curr) ? value<16>{0x3u} : value<16>{0u}) : value<16>{0u}) : value<16>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, value<4>{0xbu}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__en__out ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, value<4>{0xbu}) ? (gt_uu<1>(p_reg__file__inst_2e_mem_5b_0_5d_.curr, p_reg__file__inst_2e_mem_5b_1_5d_.curr) ? value<16>{0x2u} : value<16>{0u}) : value<16>{0u}) : value<16>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, value<4>{0xau}) ? (p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__en__out ? (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, value<4>{0xau}) ? (eq_uu<1>(p_reg__file__inst_2e_mem_5b_0_5d_.curr, p_reg__file__inst_2e_mem_5b_1_5d_.curr) ? value<16>{0x1u} : value<16>{0u}) : value<16>{0u}) : value<16>{0u}) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, value<4>{0x9u}) ? not_u<16>(xor_uu<16>(p_reg__file__inst_2e_mem_5b_0_5d_.curr, p_reg__file__inst_2e_mem_5b_1_5d_.curr)) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, value<4>{0x8u}) ? xor_uu<16>(p_reg__file__inst_2e_mem_5b_0_5d_.curr, p_reg__file__inst_2e_mem_5b_1_5d_.curr) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, value<4>{0x7u}) ? not_u<16>(or_uu<16>(p_reg__file__inst_2e_mem_5b_0_5d_.curr, p_reg__file__inst_2e_mem_5b_1_5d_.curr)) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, value<4>{0x6u}) ? not_u<16>(and_uu<16>(p_reg__file__inst_2e_mem_5b_0_5d_.curr, p_reg__file__inst_2e_mem_5b_1_5d_.curr)) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, value<4>{0x5u}) ? or_uu<16>(p_reg__file__inst_2e_mem_5b_0_5d_.curr, p_reg__file__inst_2e_mem_5b_1_5d_.curr) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, value<4>{0x4u}) ? and_uu<16>(p_reg__file__inst_2e_mem_5b_0_5d_.curr, p_reg__file__inst_2e_mem_5b_1_5d_.curr) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, value<4>{0x3u}) ? div_uu<16>(p_reg__file__inst_2e_mem_5b_0_5d_.curr, p_reg__file__inst_2e_mem_5b_1_5d_.curr) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, value<4>{0x2u}) ? mul_uu<16>(p_reg__file__inst_2e_mem_5b_0_5d_.curr, p_reg__file__inst_2e_mem_5b_1_5d_.curr) : (eq_uu<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, value<4>{0x1u}) ? sub_uu<16>(p_reg__file__inst_2e_mem_5b_0_5d_.curr, p_reg__file__inst_2e_mem_5b_1_5d_.curr) : (logic_not<1>(p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out) ? add_uu<16>(p_reg__file__inst_2e_mem_5b_0_5d_.curr, p_reg__file__inst_2e_mem_5b_1_5d_.curr) : value<16>{0u}))))))))))))))) : value<16>{0u}) : value<16>{0u});
	// \full_case: 1
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:38.4-104.9
	// cell $procmux$574
	p_alu__inst_2e_alu__out__comp__valid = (p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__en__out ? value<1>{0x1u} : value<1>{0u});
	// cells $procmux$443 $procmux$444_CMP0 $procmux$445_CMP0 $procmux$446_CMP0 $procmux$447_CMP0 $procmux$448_CMP0 $procmux$394 $procmux$395_CMP0 $procmux$392 $procmux$388 $procmux$389_CMP0 $procmux$386 $procmux$383 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:67$182 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:67$180 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$sub$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:67$179 $procmux$401 $procmux$402_CMP0 $procmux$399 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:60$174 $procmux$409 $procmux$410_CMP0 $procmux$407 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:55$173 $procmux$430 $procmux$431_CMP0 $procmux$428 $procmux$421 $procmux$422_CMP0 $procmux$419 $procmux$416 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:50$172 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_not$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:50$171 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_and$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:50$170 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$logic_not$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:50$169 $flatten\uart_top_inst.\uart_rx_inst.\uart_rx_fsm_inst.$eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/uart_rx_fsm.v:50$168 $procmux$440 $procmux$441_CMP0 $procmux$438
	p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_next__state = (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x6u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x6u}) ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_65_24_178__Y ? value<3>{0x1u} : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x6u}) ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_65_24_178__Y ? value<3>{0u} : (logic_and<1>(eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out.curr, sub_uu<32>(p_uart__top__inst_2e_prescale__in, value<32>{0x1u})), p_rx__in) ? value<3>{0u} : p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr)) : value<3>{0u})) : value<3>{0u}) : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x3u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x3u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_bit__cnt__out.curr, value<4>{0x9u}) ? value<3>{0x6u} : p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr) : value<3>{0u}) : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x2u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_bit__cnt__out.curr, value<4>{0xau}) ? value<3>{0x6u} : p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr) : value<3>{0u}) : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_48_24_167__Y ? value<3>{0x2u} : (eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr, value<3>{0x1u}) ? (i_flatten_5c_uart__top__inst_2e__5c_uart__rx__inst_2e__5c_uart__rx__fsm__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_uart__rx__fsm_2e_v_3a_48_24_167__Y ? value<3>{0u} : (logic_and<1>(logic_and<1>(eq_uu<1>(p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_bit__cnt__out.curr, value<4>{0x1u}), logic_not<1>(p_uart__top__inst_2e_uart__rx__inst_2e_strt__check__inst_2e_strt__err__out)), logic_not<1>(p_uart__top__inst_2e_par__en__in)) ? value<3>{0x3u} : p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr)) : value<3>{0u})) : value<3>{0u}) : (logic_not<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr) ? (logic_not<1>(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr) ? (p_rx__in ? p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state.curr : value<3>{0x1u}) : value<3>{0u}) : value<3>{0u})))));
}

CXXRTL_EXTREMELY_COLD
void p_system__top::debug_info(debug_items &items, std::string path) {
	assert(path.empty() || path[path.size() - 1] == ' ');
	items.add(path + "bit_synchronizer_inst clk", debug_item(debug_alias(), p_ref__clk, 0));
	items.add(path + "bit_synchronizer_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__0_2e_sync__reset__n__out, 0));
	items.add(path + "bit_synchronizer_inst async_data_in", debug_item(debug_alias(), p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_busy__out, 0));
	items.add(path + "bit_synchronizer_inst sync_data_out", debug_item(p_bit__synchronizer__inst_2e_sync__data__out, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "bit_synchronizer_inst i", debug_item(p_bit__synchronizer__inst_2e_i, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "bit_synchronizer_inst reg_file[0]", debug_item(p_bit__synchronizer__inst_2e_reg__file_5b_0_5d_, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reset_synchronizer_inst_1 clk", debug_item(debug_alias(), p_uart__clk, 0));
	items.add(path + "reset_synchronizer_inst_1 reset_n", debug_item(debug_alias(), p_reset__n, 0));
	items.add(path + "reset_synchronizer_inst_1 sync_reset_n_out", debug_item(debug_eval_outline, p_reset__synchronizer__inst__1_2e_sync__reset__n__out, 0));
	items.add(path + "reset_synchronizer_inst_1 ff", debug_item(p_reset__synchronizer__inst__1_2e_ff, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reset_synchronizer_inst_0 clk", debug_item(debug_alias(), p_ref__clk, 0));
	items.add(path + "reset_synchronizer_inst_0 reset_n", debug_item(debug_alias(), p_reset__n, 0));
	items.add(path + "reset_synchronizer_inst_0 sync_reset_n_out", debug_item(debug_eval_outline, p_reset__synchronizer__inst__0_2e_sync__reset__n__out, 0));
	items.add(path + "reset_synchronizer_inst_0 ff", debug_item(p_reset__synchronizer__inst__0_2e_ff, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_synchronizer_inst_1 clk", debug_item(debug_eval_outline, p_clk__divider__inst_2e_div__clk__out, 0));
	items.add(path + "data_synchronizer_inst_1 reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__1_2e_sync__reset__n__out, 0));
	items.add(path + "data_synchronizer_inst_1 bus_enable_in", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__tx__data__valid__out, 0));
	items.add(path + "data_synchronizer_inst_1 unsync_data_in", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__tx__data__out, 0));
	items.add(path + "data_synchronizer_inst_1 enable_pulse_out", debug_item(p_data__synchronizer__inst__1_2e_enable__pulse__out, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_synchronizer_inst_1 sync_data_out", debug_item(p_data__synchronizer__inst__1_2e_sync__data__out, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_synchronizer_inst_1 ff", debug_item(p_data__synchronizer__inst__1_2e_ff, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_synchronizer_inst_1 pulse_gen", debug_item(debug_eval_outline, p_data__synchronizer__inst__1_2e_pulse__gen, 0));
	items.add(path + "data_synchronizer_inst_0 clk", debug_item(debug_alias(), p_ref__clk, 0));
	items.add(path + "data_synchronizer_inst_0 reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__0_2e_sync__reset__n__out, 0));
	items.add(path + "data_synchronizer_inst_0 bus_enable_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_data__valid__out, 0));
	items.add(path + "data_synchronizer_inst_0 unsync_data_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_deserializer__inst_2e_data__out, 0));
	items.add(path + "data_synchronizer_inst_0 enable_pulse_out", debug_item(p_data__synchronizer__inst__0_2e_enable__pulse__out, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_synchronizer_inst_0 sync_data_out", debug_item(p_data__synchronizer__inst__0_2e_sync__data__out, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_synchronizer_inst_0 ff", debug_item(p_data__synchronizer__inst__0_2e_ff, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_synchronizer_inst_0 pulse_gen", debug_item(debug_eval_outline, p_data__synchronizer__inst__0_2e_pulse__gen, 0));
	items.add(path + "clk_gate_inst clk_en_in", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_clk__gate__en__out, 0));
	items.add(path + "clk_gate_inst clk", debug_item(debug_alias(), p_ref__clk, 0));
	items.add(path + "clk_gate_inst gated_clk_out", debug_item(debug_alias(), i_flatten_5c_clk__gate__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__gate_2e_v_3a_15_24_20__Y, 0));
	items.add(path + "clk_gate_inst latch_out", debug_item(p_clk__gate__inst_2e_latch__out, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "clk_divider_inst clk", debug_item(debug_alias(), p_uart__clk, 0));
	items.add(path + "clk_divider_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__1_2e_sync__reset__n__out, 0));
	static const value<1> const_p_clk__divider__inst_2e_clk__en__in = value<1>{0x1u};
	items.add(path + "clk_divider_inst clk_en_in", debug_item(const_p_clk__divider__inst_2e_clk__en__in, 0));
	items.add(path + "clk_divider_inst div_ratio_in", debug_item(debug_eval_outline, p_clk__divider__inst_2e_div__ratio__in, 0));
	items.add(path + "clk_divider_inst div_clk_out", debug_item(debug_eval_outline, p_clk__divider__inst_2e_div__clk__out, 0));
	items.add(path + "clk_divider_inst count", debug_item(p_clk__divider__inst_2e_count, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "uart_top_inst data_tx_in", debug_item(debug_alias(), p_data__synchronizer__inst__1_2e_sync__data__out, 0));
	items.add(path + "uart_top_inst data_rx_in", debug_item(debug_alias(), p_rx__in, 0));
	items.add(path + "uart_top_inst data_tx_valid_in", debug_item(debug_alias(), p_data__synchronizer__inst__1_2e_enable__pulse__out, 0));
	items.add(path + "uart_top_inst clk_rx", debug_item(debug_alias(), p_uart__clk, 0));
	items.add(path + "uart_top_inst clk_tx", debug_item(debug_eval_outline, p_clk__divider__inst_2e_div__clk__out, 0));
	items.add(path + "uart_top_inst par_en_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_par__en__in, 0));
	items.add(path + "uart_top_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__1_2e_sync__reset__n__out, 0));
	items.add(path + "uart_top_inst par_type_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_par__type__in, 0));
	items.add(path + "uart_top_inst prescale_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_prescale__in, 0));
	items.add(path + "uart_top_inst data_tx_valid_out", debug_item(debug_alias(), p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_busy__out, 0));
	items.add(path + "uart_top_inst data_rx_valid_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_data__valid__out, 0));
	items.add(path + "uart_top_inst data_tx_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__tx__inst_2e_mux__inst_2e_tx__out, 0));
	items.add(path + "uart_top_inst data_rx_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_deserializer__inst_2e_data__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst mux_inst mux_sel_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_mux__sel__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst mux_inst data_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_ser__data, 0));
	items.add(path + "uart_top_inst uart_tx_inst mux_inst par_bit_in", debug_item(debug_alias(), p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_par__bit__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst mux_inst tx_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__tx__inst_2e_mux__inst_2e_tx__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst serializer_inst clk", debug_item(debug_eval_outline, p_clk__divider__inst_2e_div__clk__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst serializer_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__1_2e_sync__reset__n__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst serializer_inst data_in", debug_item(debug_alias(), p_data__synchronizer__inst__1_2e_sync__data__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst serializer_inst ser_en_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_ser__en__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst serializer_inst data_valid_in", debug_item(debug_alias(), p_data__synchronizer__inst__1_2e_enable__pulse__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst serializer_inst busy_in", debug_item(debug_alias(), p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_busy__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst serializer_inst ser_done_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_ser__done__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst serializer_inst ser_data", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_ser__data, 0));
	items.add(path + "uart_top_inst uart_tx_inst serializer_inst counter", debug_item(p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_counter, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "uart_top_inst uart_tx_inst serializer_inst int_reg", debug_item(p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_int__reg, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "uart_top_inst uart_tx_inst parity_calc_inst clk", debug_item(debug_eval_outline, p_clk__divider__inst_2e_div__clk__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst parity_calc_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__1_2e_sync__reset__n__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst parity_calc_inst data_in", debug_item(debug_alias(), p_data__synchronizer__inst__1_2e_sync__data__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst parity_calc_inst par_type_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_par__type__in, 0));
	items.add(path + "uart_top_inst uart_tx_inst parity_calc_inst data_valid_in", debug_item(debug_alias(), p_data__synchronizer__inst__1_2e_enable__pulse__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst parity_calc_inst par_bit_out", debug_item(p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_par__bit__out, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "uart_top_inst uart_tx_inst uart_tx_fsm_inst clk", debug_item(debug_eval_outline, p_clk__divider__inst_2e_div__clk__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst uart_tx_fsm_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__1_2e_sync__reset__n__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst uart_tx_fsm_inst data_valid_in", debug_item(debug_alias(), p_data__synchronizer__inst__1_2e_enable__pulse__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst uart_tx_fsm_inst par_en_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_par__en__in, 0));
	items.add(path + "uart_top_inst uart_tx_inst uart_tx_fsm_inst ser_done_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_ser__done__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst uart_tx_fsm_inst ser_en_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_ser__en__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst uart_tx_fsm_inst busy_out", debug_item(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_busy__out, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "uart_top_inst uart_tx_inst uart_tx_fsm_inst mux_sel_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_mux__sel__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst uart_tx_fsm_inst next_state", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_next__state, 0));
	items.add(path + "uart_top_inst uart_tx_inst uart_tx_fsm_inst current_state", debug_item(p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_current__state, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "uart_top_inst uart_tx_inst ser_data", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_ser__data, 0));
	items.add(path + "uart_top_inst uart_tx_inst mux_sel", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_mux__sel__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst parity_bit", debug_item(debug_alias(), p_uart__top__inst_2e_uart__tx__inst_2e_parity__calc__inst_2e_par__bit__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst ser_done", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__tx__inst_2e_serializer__inst_2e_ser__done__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst ser_en", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_ser__en__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst tx_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__tx__inst_2e_mux__inst_2e_tx__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst busy_out", debug_item(debug_alias(), p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_busy__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst par_type_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_par__type__in, 0));
	items.add(path + "uart_top_inst uart_tx_inst data_in", debug_item(debug_alias(), p_data__synchronizer__inst__1_2e_sync__data__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst par_en_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_par__en__in, 0));
	items.add(path + "uart_top_inst uart_tx_inst data_valid_in", debug_item(debug_alias(), p_data__synchronizer__inst__1_2e_enable__pulse__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__1_2e_sync__reset__n__out, 0));
	items.add(path + "uart_top_inst uart_tx_inst clk", debug_item(debug_eval_outline, p_clk__divider__inst_2e_div__clk__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst stop_check_inst sampled_bit_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_sampled__bit__out, 0));
	static const value<1> const_p_uart__top__inst_2e_uart__rx__inst_2e_stop__check__inst_2e_stp__chk__en__in = value<1>{0u};
	items.add(path + "uart_top_inst uart_rx_inst stop_check_inst stp_chk_en_in", debug_item(const_p_uart__top__inst_2e_uart__rx__inst_2e_stop__check__inst_2e_stp__chk__en__in, 0));
	static const value<1> const_p_uart__top__inst_2e_uart__rx__inst_2e_stop__check__inst_2e_stp__err__out = value<1>{0u};
	items.add(path + "uart_top_inst uart_rx_inst stop_check_inst stp_err_out", debug_item(const_p_uart__top__inst_2e_uart__rx__inst_2e_stop__check__inst_2e_stp__err__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst strt_check_inst sampled_bit_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_sampled__bit__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst strt_check_inst strt_chk_en_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_strt__chk__en__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst strt_check_inst strt_err_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_strt__check__inst_2e_strt__err__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst parity_check_inst sampled_bit_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_sampled__bit__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst parity_check_inst clk", debug_item(debug_alias(), p_uart__clk, 0));
	items.add(path + "uart_top_inst uart_rx_inst parity_check_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__1_2e_sync__reset__n__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst parity_check_inst par_type_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_par__type__in, 0));
	static const value<1> const_p_uart__top__inst_2e_uart__rx__inst_2e_parity__check__inst_2e_par__chk__en__in = value<1>{0u};
	items.add(path + "uart_top_inst uart_rx_inst parity_check_inst par_chk_en_in", debug_item(const_p_uart__top__inst_2e_uart__rx__inst_2e_parity__check__inst_2e_par__chk__en__in, 0));
	static const value<1> const_p_uart__top__inst_2e_uart__rx__inst_2e_parity__check__inst_2e_par__err__out = value<1>{0u};
	items.add(path + "uart_top_inst uart_rx_inst parity_check_inst par_err_out", debug_item(const_p_uart__top__inst_2e_uart__rx__inst_2e_parity__check__inst_2e_par__err__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst parity_check_inst register", debug_item(p_uart__top__inst_2e_uart__rx__inst_2e_parity__check__inst_2e_register, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "uart_top_inst uart_rx_inst deserializer_inst clk", debug_item(debug_alias(), p_uart__clk, 0));
	items.add(path + "uart_top_inst uart_rx_inst deserializer_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__1_2e_sync__reset__n__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst deserializer_inst des_en_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_deser__en__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst deserializer_inst data_valid_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_data__valid__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst deserializer_inst sampled_bit_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_sampled__bit__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst deserializer_inst data_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_deserializer__inst_2e_data__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst deserializer_inst register", debug_item(p_uart__top__inst_2e_uart__rx__inst_2e_deserializer__inst_2e_register, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "uart_top_inst uart_rx_inst edge_bit_counter_inst clk", debug_item(debug_alias(), p_uart__clk, 0));
	items.add(path + "uart_top_inst uart_rx_inst edge_bit_counter_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__1_2e_sync__reset__n__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst edge_bit_counter_inst prescale_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_prescale__in, 0));
	items.add(path + "uart_top_inst uart_rx_inst edge_bit_counter_inst data_valid_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_data__valid__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst edge_bit_counter_inst en_counter_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_counter__en__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst edge_bit_counter_inst bit_cnt_out", debug_item(p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_bit__cnt__out, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "uart_top_inst uart_rx_inst edge_bit_counter_inst edge_cnt_out", debug_item(p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "uart_top_inst uart_rx_inst data_sampling_inst clk", debug_item(debug_alias(), p_uart__clk, 0));
	items.add(path + "uart_top_inst uart_rx_inst data_sampling_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__1_2e_sync__reset__n__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst data_sampling_inst prescale_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_prescale__in, 0));
	items.add(path + "uart_top_inst uart_rx_inst data_sampling_inst edge_cnt_in", debug_item(debug_alias(), p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst data_sampling_inst data_sample_en_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_data__sample__en__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst data_sampling_inst data_in", debug_item(debug_alias(), p_rx__in, 0));
	items.add(path + "uart_top_inst uart_rx_inst data_sampling_inst sampled_bit_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_sampled__bit__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst data_sampling_inst register", debug_item(p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_register, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst clk", debug_item(debug_alias(), p_uart__clk, 0));
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__1_2e_sync__reset__n__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst edge_cnt_in", debug_item(debug_alias(), p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst bit_cnt_in", debug_item(debug_alias(), p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_bit__cnt__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst rx_in", debug_item(debug_alias(), p_rx__in, 0));
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst par_en_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_par__en__in, 0));
	static const value<1> const_p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_par__err__in = value<1>{0u};
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst par_err_in", debug_item(const_p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_par__err__in, 0));
	static const value<1> const_p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_stp__err__in = value<1>{0u};
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst stp_err_in", debug_item(const_p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_stp__err__in, 0));
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst strt_err_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_strt__check__inst_2e_strt__err__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst prescale_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_prescale__in, 0));
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst data_sample_en_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_data__sample__en__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst deser_en_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_deser__en__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst data_valid_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_data__valid__out, 0));
	static const value<1> const_p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_stp__chk__en__out = value<1>{0u};
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst stp_chk_en_out", debug_item(const_p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_stp__chk__en__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst strt_chk_en_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_strt__chk__en__out, 0));
	static const value<1> const_p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_par__chk__en__out = value<1>{0u};
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst par_chk_en_out", debug_item(const_p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_par__chk__en__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst counter_en_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_counter__en__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst current_state", debug_item(p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_current__state, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "uart_top_inst uart_rx_inst uart_rx_fsm_inst next_state", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_next__state, 0));
	items.add(path + "uart_top_inst uart_rx_inst sampled_bit", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_data__sampling__inst_2e_sampled__bit__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst counter_en", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_counter__en__out, 0));
	static const value<1> const_p_uart__top__inst_2e_uart__rx__inst_2e_par__chk__en = value<1>{0u};
	items.add(path + "uart_top_inst uart_rx_inst par_chk_en", debug_item(const_p_uart__top__inst_2e_uart__rx__inst_2e_par__chk__en, 0));
	items.add(path + "uart_top_inst uart_rx_inst strt_chk_en", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_strt__chk__en__out, 0));
	static const value<1> const_p_uart__top__inst_2e_uart__rx__inst_2e_stp__chk__en = value<1>{0u};
	items.add(path + "uart_top_inst uart_rx_inst stp_chk_en", debug_item(const_p_uart__top__inst_2e_uart__rx__inst_2e_stp__chk__en, 0));
	items.add(path + "uart_top_inst uart_rx_inst deser_en", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_deser__en__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst data_sample_en", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_data__sample__en__out, 0));
	static const value<1> const_p_uart__top__inst_2e_uart__rx__inst_2e_stp__err = value<1>{0u};
	items.add(path + "uart_top_inst uart_rx_inst stp_err", debug_item(const_p_uart__top__inst_2e_uart__rx__inst_2e_stp__err, 0));
	items.add(path + "uart_top_inst uart_rx_inst strt_err", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_strt__check__inst_2e_strt__err__out, 0));
	static const value<1> const_p_uart__top__inst_2e_uart__rx__inst_2e_par__err = value<1>{0u};
	items.add(path + "uart_top_inst uart_rx_inst par_err", debug_item(const_p_uart__top__inst_2e_uart__rx__inst_2e_par__err, 0));
	items.add(path + "uart_top_inst uart_rx_inst bit_count", debug_item(debug_alias(), p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_bit__cnt__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst edge_cnt", debug_item(debug_alias(), p_uart__top__inst_2e_uart__rx__inst_2e_edge__bit__counter__inst_2e_edge__cnt__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst data_valid_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_data__valid__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst data_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_deserializer__inst_2e_data__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__1_2e_sync__reset__n__out, 0));
	items.add(path + "uart_top_inst uart_rx_inst clk", debug_item(debug_alias(), p_uart__clk, 0));
	items.add(path + "uart_top_inst uart_rx_inst par_type_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_par__type__in, 0));
	items.add(path + "uart_top_inst uart_rx_inst par_en_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_par__en__in, 0));
	items.add(path + "uart_top_inst uart_rx_inst rx_in", debug_item(debug_alias(), p_rx__in, 0));
	items.add(path + "uart_top_inst uart_rx_inst prescale_in", debug_item(debug_eval_outline, p_uart__top__inst_2e_prescale__in, 0));
	items.add(path + "alu_inst data_a_in", debug_item(debug_alias(), p_reg__file__inst_2e_mem_5b_0_5d_, 0));
	items.add(path + "alu_inst data_b_in", debug_item(debug_alias(), p_reg__file__inst_2e_mem_5b_1_5d_, 0));
	items.add(path + "alu_inst en_in", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__en__out, 0));
	items.add(path + "alu_inst alu_func_in", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, 0));
	items.add(path + "alu_inst clk", debug_item(debug_alias(), i_flatten_5c_clk__gate__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__gate_2e_v_3a_15_24_20__Y, 0));
	items.add(path + "alu_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__0_2e_sync__reset__n__out, 0));
	items.add(path + "alu_inst data_out", debug_item(p_alu__inst_2e_data__out, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "alu_inst data_valid_out", debug_item(p_alu__inst_2e_data__valid__out, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "alu_inst alu_out_comp", debug_item(debug_eval_outline, p_alu__inst_2e_alu__out__comp, 0));
	items.add(path + "alu_inst alu_out_comp_valid", debug_item(debug_eval_outline, p_alu__inst_2e_alu__out__comp__valid, 0));
	items.add(path + "reg_file_inst clk", debug_item(debug_alias(), p_ref__clk, 0));
	items.add(path + "reg_file_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__0_2e_sync__reset__n__out, 0));
	items.add(path + "reg_file_inst wr_en_in", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__en__out, 0));
	items.add(path + "reg_file_inst rd_en_in", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__rd__en__out, 0));
	items.add(path + "reg_file_inst addr_in", debug_item(debug_eval_outline, p_reg__file__inst_2e_addr__in, 0));
	items.add(path + "reg_file_inst wr_data_in", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out, 0));
	items.add(path + "reg_file_inst rd_data_out", debug_item(p_reg__file__inst_2e_rd__data__out, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst rd_data_valid_out", debug_item(p_reg__file__inst_2e_rd__data__valid__out, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst reg_0_out", debug_item(debug_alias(), p_reg__file__inst_2e_mem_5b_0_5d_, 0));
	items.add(path + "reg_file_inst reg_1_out", debug_item(debug_alias(), p_reg__file__inst_2e_mem_5b_1_5d_, 0));
	items.add(path + "reg_file_inst reg_2_out", debug_item(debug_alias(), p_reg__file__inst_2e_mem_5b_2_5d_, 0));
	items.add(path + "reg_file_inst reg_3_out", debug_item(debug_alias(), p_reg__file__inst_2e_mem_5b_3_5d_, 0));
	items.add(path + "reg_file_inst i", debug_item(p_reg__file__inst_2e_i, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst mem[0]", debug_item(p_reg__file__inst_2e_mem_5b_0_5d_, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst mem[1]", debug_item(p_reg__file__inst_2e_mem_5b_1_5d_, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst mem[2]", debug_item(p_reg__file__inst_2e_mem_5b_2_5d_, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst mem[3]", debug_item(p_reg__file__inst_2e_mem_5b_3_5d_, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst mem[4]", debug_item(p_reg__file__inst_2e_mem_5b_4_5d_, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst mem[5]", debug_item(p_reg__file__inst_2e_mem_5b_5_5d_, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst mem[6]", debug_item(p_reg__file__inst_2e_mem_5b_6_5d_, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst mem[7]", debug_item(p_reg__file__inst_2e_mem_5b_7_5d_, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst mem[8]", debug_item(p_reg__file__inst_2e_mem_5b_8_5d_, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst mem[9]", debug_item(p_reg__file__inst_2e_mem_5b_9_5d_, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst mem[10]", debug_item(p_reg__file__inst_2e_mem_5b_10_5d_, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst mem[11]", debug_item(p_reg__file__inst_2e_mem_5b_11_5d_, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst mem[12]", debug_item(p_reg__file__inst_2e_mem_5b_12_5d_, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst mem[13]", debug_item(p_reg__file__inst_2e_mem_5b_13_5d_, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst mem[14]", debug_item(p_reg__file__inst_2e_mem_5b_14_5d_, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "reg_file_inst mem[15]", debug_item(p_reg__file__inst_2e_mem_5b_15_5d_, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "sys_control_inst clk", debug_item(debug_alias(), p_ref__clk, 0));
	items.add(path + "sys_control_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__0_2e_sync__reset__n__out, 0));
	items.add(path + "sys_control_inst rf_rd_data_in", debug_item(debug_alias(), p_reg__file__inst_2e_rd__data__out, 0));
	items.add(path + "sys_control_inst rf_rd_data_valid_in", debug_item(debug_alias(), p_reg__file__inst_2e_rd__data__valid__out, 0));
	items.add(path + "sys_control_inst alu_data_in", debug_item(debug_alias(), p_alu__inst_2e_data__out, 0));
	items.add(path + "sys_control_inst alu_data_valid_in", debug_item(debug_alias(), p_alu__inst_2e_data__valid__out, 0));
	items.add(path + "sys_control_inst uart_rx_data_in", debug_item(debug_alias(), p_data__synchronizer__inst__0_2e_sync__data__out, 0));
	items.add(path + "sys_control_inst uart_rx_data_valid_in", debug_item(debug_alias(), p_data__synchronizer__inst__0_2e_enable__pulse__out, 0));
	items.add(path + "sys_control_inst uart_tx_busy_in", debug_item(debug_alias(), p_bit__synchronizer__inst_2e_sync__data__out, 0));
	items.add(path + "sys_control_inst rf_wr_en_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__en__out, 0));
	items.add(path + "sys_control_inst rf_rd_en_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__rd__en__out, 0));
	items.add(path + "sys_control_inst rf_addr_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__out, 0));
	items.add(path + "sys_control_inst rf_wr_data_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out, 0));
	items.add(path + "sys_control_inst alu_en_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__en__out, 0));
	items.add(path + "sys_control_inst alu_fun_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, 0));
	items.add(path + "sys_control_inst clk_gate_en_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_clk__gate__en__out, 0));
	static const value<1> const_p_sys__control__inst_2e_clk__div__en__out = value<1>{0x1u};
	items.add(path + "sys_control_inst clk_div_en_out", debug_item(const_p_sys__control__inst_2e_clk__div__en__out, 0));
	items.add(path + "sys_control_inst uart_tx_data_valid_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__tx__data__valid__out, 0));
	items.add(path + "sys_control_inst uart_tx_data_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__tx__data__out, 0));
	items.add(path + "sys_control_inst uart_alu_send_data", debug_item(debug_alias(), p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__data__out, 0));
	items.add(path + "sys_control_inst uart_rf_send_data", debug_item(debug_alias(), p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rf__send__data__out, 0));
	items.add(path + "sys_control_inst uart_alu_send", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__out, 0));
	items.add(path + "sys_control_inst uart_rf_send", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rf__send__out, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst alu_data_store", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__data__store, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst rf_rd_store", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__rd__store, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst rf_addr_en", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__en, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst rf_addr_reg", debug_item(p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__reg, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "sys_control_inst sys_control_rx_inst next_state", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_next__state, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst current_state", debug_item(p_sys__control__inst_2e_sys__control__rx__inst_2e_current__state, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "sys_control_inst sys_control_rx_inst uart_alu_send_data_out", debug_item(p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__data__out, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "sys_control_inst sys_control_rx_inst uart_rf_send_data_out", debug_item(p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rf__send__data__out, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "sys_control_inst sys_control_rx_inst uart_alu_send_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__out, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst uart_rf_send_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rf__send__out, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst rf_wr_data_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst rf_addr_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__addr__out, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst rf_rd_en_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__rd__en__out, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst rf_wr_en_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__en__out, 0));
	static const value<1> const_p_sys__control__inst_2e_sys__control__rx__inst_2e_clk__div__en__out = value<1>{0x1u};
	items.add(path + "sys_control_inst sys_control_rx_inst clk_div_en_out", debug_item(const_p_sys__control__inst_2e_sys__control__rx__inst_2e_clk__div__en__out, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst clk_gate_en_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_clk__gate__en__out, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst alu_fun_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst alu_en_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__en__out, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst alu_data_valid_in", debug_item(debug_alias(), p_alu__inst_2e_data__valid__out, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst alu_data_in", debug_item(debug_alias(), p_alu__inst_2e_data__out, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst rf_rd_data_valid_in", debug_item(debug_alias(), p_reg__file__inst_2e_rd__data__valid__out, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst rf_rd_data_in", debug_item(debug_alias(), p_reg__file__inst_2e_rd__data__out, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst uart_rx_data_valid_in", debug_item(debug_alias(), p_data__synchronizer__inst__0_2e_enable__pulse__out, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst uart_rx_data_in", debug_item(debug_alias(), p_data__synchronizer__inst__0_2e_sync__data__out, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__0_2e_sync__reset__n__out, 0));
	items.add(path + "sys_control_inst sys_control_rx_inst clk", debug_item(debug_alias(), p_ref__clk, 0));
	items.add(path + "sys_control_inst sys_control_tx_inst next_state", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__tx__inst_2e_next__state, 0));
	items.add(path + "sys_control_inst sys_control_tx_inst current_state", debug_item(p_sys__control__inst_2e_sys__control__tx__inst_2e_current__state, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "sys_control_inst sys_control_tx_inst uart_tx_data_valid_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__tx__data__valid__out, 0));
	items.add(path + "sys_control_inst sys_control_tx_inst uart_tx_data_out", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__tx__data__out, 0));
	items.add(path + "sys_control_inst sys_control_tx_inst uart_tx_busy_in", debug_item(debug_alias(), p_bit__synchronizer__inst_2e_sync__data__out, 0));
	items.add(path + "sys_control_inst sys_control_tx_inst uart_alu_send_data_in", debug_item(debug_alias(), p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__data__out, 0));
	items.add(path + "sys_control_inst sys_control_tx_inst uart_alu_send_in", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__alu__send__out, 0));
	items.add(path + "sys_control_inst sys_control_tx_inst uart_rf_send_data_in", debug_item(debug_alias(), p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rf__send__data__out, 0));
	items.add(path + "sys_control_inst sys_control_tx_inst uart_rf_send_in", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_uart__rf__send__out, 0));
	items.add(path + "sys_control_inst sys_control_tx_inst reset_n", debug_item(debug_eval_outline, p_reset__synchronizer__inst__0_2e_sync__reset__n__out, 0));
	items.add(path + "sys_control_inst sys_control_tx_inst clk", debug_item(debug_alias(), p_ref__clk, 0));
	items.add(path + "sync_reset_n_uart_clk", debug_item(debug_eval_outline, p_reset__synchronizer__inst__1_2e_sync__reset__n__out, 0));
	items.add(path + "sync_reset_n_ref_clk", debug_item(debug_eval_outline, p_reset__synchronizer__inst__0_2e_sync__reset__n__out, 0));
	items.add(path + "uart_tx_clk", debug_item(debug_eval_outline, p_clk__divider__inst_2e_div__clk__out, 0));
	items.add(path + "alu_clk", debug_item(debug_alias(), i_flatten_5c_clk__gate__inst_2e__24_logic__and_24__2f_home_2f_amustafa_2f_qflow__training_2f_multi__clock__digital__system_2f_src_2f_clk__gate_2e_v_3a_15_24_20__Y, 0));
	items.add(path + "reg_3_div", debug_item(debug_alias(), p_reg__file__inst_2e_mem_5b_3_5d_, 0));
	items.add(path + "reg_2_uart_config", debug_item(debug_alias(), p_reg__file__inst_2e_mem_5b_2_5d_, 0));
	items.add(path + "reg_1_op_b", debug_item(debug_alias(), p_reg__file__inst_2e_mem_5b_1_5d_, 0));
	items.add(path + "reg_0_op_a", debug_item(debug_alias(), p_reg__file__inst_2e_mem_5b_0_5d_, 0));
	items.add(path + "sync_uart_tx_data", debug_item(debug_alias(), p_data__synchronizer__inst__1_2e_sync__data__out, 0));
	items.add(path + "sync_uart_tx_data_valid", debug_item(debug_alias(), p_data__synchronizer__inst__1_2e_enable__pulse__out, 0));
	items.add(path + "uart_tx_data", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__tx__data__out, 0));
	items.add(path + "uart_tx_data_valid", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__tx__inst_2e_uart__tx__data__valid__out, 0));
	static const value<1> const_p_clk__div__en = value<1>{0x1u};
	items.add(path + "clk_div_en", debug_item(const_p_clk__div__en, 0));
	items.add(path + "clk_gate_en", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_clk__gate__en__out, 0));
	items.add(path + "alu_fun", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__fun__out, 0));
	items.add(path + "alu_en", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_alu__en__out, 0));
	items.add(path + "rf_wr_data", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__data__out, 0));
	items.add(path + "rf_addr", debug_item(debug_eval_outline, p_rf__addr, 0));
	items.add(path + "rf_rd_en", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__rd__en__out, 0));
	items.add(path + "rf_wr_en", debug_item(debug_eval_outline, p_sys__control__inst_2e_sys__control__rx__inst_2e_rf__wr__en__out, 0));
	items.add(path + "sync_uart_tx_busy", debug_item(debug_alias(), p_bit__synchronizer__inst_2e_sync__data__out, 0));
	items.add(path + "uart_tx_busy", debug_item(debug_alias(), p_uart__top__inst_2e_uart__tx__inst_2e_uart__tx__fsm__inst_2e_busy__out, 0));
	items.add(path + "sync_uart_rx_data_valid", debug_item(debug_alias(), p_data__synchronizer__inst__0_2e_enable__pulse__out, 0));
	items.add(path + "sync_uart_rx_data", debug_item(debug_alias(), p_data__synchronizer__inst__0_2e_sync__data__out, 0));
	items.add(path + "uart_rx_data_valid", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_uart__rx__fsm__inst_2e_data__valid__out, 0));
	items.add(path + "uart_rx_data", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__rx__inst_2e_deserializer__inst_2e_data__out, 0));
	items.add(path + "alu_data_valid", debug_item(debug_alias(), p_alu__inst_2e_data__valid__out, 0));
	items.add(path + "alu_data", debug_item(debug_alias(), p_alu__inst_2e_data__out, 0));
	items.add(path + "rf_rd_data_valid", debug_item(debug_alias(), p_reg__file__inst_2e_rd__data__valid__out, 0));
	items.add(path + "rf_rd_data", debug_item(debug_alias(), p_reg__file__inst_2e_rd__data__out, 0));
	items.add(path + "tx_out", debug_item(debug_eval_outline, p_uart__top__inst_2e_uart__tx__inst_2e_mux__inst_2e_tx__out, 0));
	items.add(path + "rx_in", debug_item(p_rx__in, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "reset_n", debug_item(p_reset__n, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "uart_clk", debug_item(p_uart__clk, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "ref_clk", debug_item(p_ref__clk, 0, debug_item::INPUT|debug_item::UNDRIVEN));
}

} // namespace cxxrtl_design

extern "C"
cxxrtl_toplevel cxxrtl_design_create() {
	return new _cxxrtl_toplevel { std::unique_ptr<cxxrtl_design::p_system__top>(new cxxrtl_design::p_system__top) };
}
