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

// \dynports: 1
// \top: 1
// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:1.1-106.10
struct p_alu : public module {
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:12.31-12.45
	/*output*/ wire<1> p_data__valid__out;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:11.36-11.44
	/*output*/ wire<16> p_data__out;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:10.31-10.38
	/*input*/ value<1> p_reset__n;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:9.31-9.34
	/*input*/ value<1> p_clk;
	value<1> prev_p_clk;
	bool posedge_p_clk() const {
		return !prev_p_clk.slice<0>().val() && p_clk.slice<0>().val();
	}
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:8.31-8.42
	/*input*/ value<4> p_alu__func__in;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:7.31-7.36
	/*input*/ value<1> p_en__in;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:6.34-6.43
	/*input*/ value<8> p_data__b__in;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:5.34-5.43
	/*input*/ value<8> p_data__a__in;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:17.21-17.39
	/*outline*/ value<1> p_alu__out__comp__valid;
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:16.26-16.38
	/*outline*/ value<16> p_alu__out__comp;
	p_alu(interior) {}
	p_alu() {
		reset();
	};

	void reset() override;
	bool eval() override;
	bool commit() override;

	void debug_eval();
	debug_outline debug_eval_outline { std::bind(&p_alu::debug_eval, this) };

	void debug_info(debug_items &items, std::string path = "") override;
}; // struct p_alu

void p_alu::reset() {
}

bool p_alu::eval() {
	bool converged = true;
	bool posedge_p_clk = this->posedge_p_clk();
	// cells $procdff$262 $procmux$259
	if (posedge_p_clk) {
		p_data__valid__out.next = (p_en__in ? value<1>{0x1u} : value<1>{0u});
	}
	if (p_reset__n == value<1> {0u}) {
		p_data__valid__out.next = value<1>{0u};
	}
	// cells $procdff$261 $procmux$256 $procmux$253 $procmux$237 $procmux$238_CMP0 $procmux$239_CMP0 $procmux$240_CMP0 $procmux$241_CMP0 $procmux$242_CMP0 $procmux$243_CMP0 $procmux$244_CMP0 $procmux$245_CMP0 $procmux$246_CMP0 $procmux$247_CMP0 $procmux$248_CMP0 $procmux$249_CMP0 $procmux$250_CMP0 $procmux$251_CMP0 $procmux$252_CMP0 $procmux$208 $procmux$206 $procmux$207_CMP0 $procmux$204 $lt$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:85$50 $procmux$220 $procmux$218 $procmux$219_CMP0 $procmux$216 $gt$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:79$49 $procmux$233 $procmux$231 $procmux$232_CMP0 $procmux$229 $eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:73$48 $not$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:70$47 $xor$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:70$46 $xor$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:67$45 $not$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:64$44 $or$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:64$43 $not$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:61$42 $and$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:61$41 $or$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:58$40 $and$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:55$39 $div$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:52$38 $mul$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:49$37 $sub$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:46$36 $add$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:43$35
	if (posedge_p_clk) {
		p_data__out.next = (p_en__in ? (p_en__in ? (eq_uu<1>(p_alu__func__in, value<4>{0xeu}) ? value<7>{0u}.concat(p_data__a__in).concat(value<1>{0u}).val() : (eq_uu<1>(p_alu__func__in, value<4>{0xdu}) ? value<9>{0u}.concat(p_data__a__in.slice<7,1>()).val() : (eq_uu<1>(p_alu__func__in, value<4>{0xcu}) ? (p_en__in ? (eq_uu<1>(p_alu__func__in, value<4>{0xcu}) ? (lt_uu<1>(p_data__a__in, p_data__b__in) ? value<16>{0x3u} : value<16>{0u}) : value<16>{0u}) : value<16>{0u}) : (eq_uu<1>(p_alu__func__in, value<4>{0xbu}) ? (p_en__in ? (eq_uu<1>(p_alu__func__in, value<4>{0xbu}) ? (gt_uu<1>(p_data__a__in, p_data__b__in) ? value<16>{0x2u} : value<16>{0u}) : value<16>{0u}) : value<16>{0u}) : (eq_uu<1>(p_alu__func__in, value<4>{0xau}) ? (p_en__in ? (eq_uu<1>(p_alu__func__in, value<4>{0xau}) ? (eq_uu<1>(p_data__a__in, p_data__b__in) ? value<16>{0x1u} : value<16>{0u}) : value<16>{0u}) : value<16>{0u}) : (eq_uu<1>(p_alu__func__in, value<4>{0x9u}) ? not_u<16>(xor_uu<16>(p_data__a__in, p_data__b__in)) : (eq_uu<1>(p_alu__func__in, value<4>{0x8u}) ? xor_uu<16>(p_data__a__in, p_data__b__in) : (eq_uu<1>(p_alu__func__in, value<4>{0x7u}) ? not_u<16>(or_uu<16>(p_data__a__in, p_data__b__in)) : (eq_uu<1>(p_alu__func__in, value<4>{0x6u}) ? not_u<16>(and_uu<16>(p_data__a__in, p_data__b__in)) : (eq_uu<1>(p_alu__func__in, value<4>{0x5u}) ? or_uu<16>(p_data__a__in, p_data__b__in) : (eq_uu<1>(p_alu__func__in, value<4>{0x4u}) ? and_uu<16>(p_data__a__in, p_data__b__in) : (eq_uu<1>(p_alu__func__in, value<4>{0x3u}) ? div_uu<16>(p_data__a__in, p_data__b__in) : (eq_uu<1>(p_alu__func__in, value<4>{0x2u}) ? mul_uu<16>(p_data__a__in, p_data__b__in) : (eq_uu<1>(p_alu__func__in, value<4>{0x1u}) ? sub_uu<16>(p_data__a__in, p_data__b__in) : (logic_not<1>(p_alu__func__in) ? add_uu<16>(p_data__a__in, p_data__b__in) : value<16>{0u}))))))))))))))) : value<16>{0u}) : value<16>{0u});
	}
	if (p_reset__n == value<1> {0u}) {
		p_data__out.next = value<16>{0u};
	}
	return converged;
}

bool p_alu::commit() {
	bool changed = false;
	if (p_data__valid__out.commit()) changed = true;
	if (p_data__out.commit()) changed = true;
	prev_p_clk = p_clk;
	return changed;
}

void p_alu::debug_eval() {
	// cells $procmux$256 $procmux$253 $procmux$237 $procmux$238_CMP0 $procmux$239_CMP0 $procmux$240_CMP0 $procmux$241_CMP0 $procmux$242_CMP0 $procmux$243_CMP0 $procmux$244_CMP0 $procmux$245_CMP0 $procmux$246_CMP0 $procmux$247_CMP0 $procmux$248_CMP0 $procmux$249_CMP0 $procmux$250_CMP0 $procmux$251_CMP0 $procmux$252_CMP0 $procmux$208 $procmux$206 $procmux$207_CMP0 $procmux$204 $lt$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:85$50 $procmux$220 $procmux$218 $procmux$219_CMP0 $procmux$216 $gt$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:79$49 $procmux$233 $procmux$231 $procmux$232_CMP0 $procmux$229 $eq$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:73$48 $not$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:70$47 $xor$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:70$46 $xor$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:67$45 $not$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:64$44 $or$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:64$43 $not$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:61$42 $and$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:61$41 $or$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:58$40 $and$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:55$39 $div$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:52$38 $mul$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:49$37 $sub$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:46$36 $add$/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:43$35
	p_alu__out__comp = (p_en__in ? (p_en__in ? (eq_uu<1>(p_alu__func__in, value<4>{0xeu}) ? value<7>{0u}.concat(p_data__a__in).concat(value<1>{0u}).val() : (eq_uu<1>(p_alu__func__in, value<4>{0xdu}) ? value<9>{0u}.concat(p_data__a__in.slice<7,1>()).val() : (eq_uu<1>(p_alu__func__in, value<4>{0xcu}) ? (p_en__in ? (eq_uu<1>(p_alu__func__in, value<4>{0xcu}) ? (lt_uu<1>(p_data__a__in, p_data__b__in) ? value<16>{0x3u} : value<16>{0u}) : value<16>{0u}) : value<16>{0u}) : (eq_uu<1>(p_alu__func__in, value<4>{0xbu}) ? (p_en__in ? (eq_uu<1>(p_alu__func__in, value<4>{0xbu}) ? (gt_uu<1>(p_data__a__in, p_data__b__in) ? value<16>{0x2u} : value<16>{0u}) : value<16>{0u}) : value<16>{0u}) : (eq_uu<1>(p_alu__func__in, value<4>{0xau}) ? (p_en__in ? (eq_uu<1>(p_alu__func__in, value<4>{0xau}) ? (eq_uu<1>(p_data__a__in, p_data__b__in) ? value<16>{0x1u} : value<16>{0u}) : value<16>{0u}) : value<16>{0u}) : (eq_uu<1>(p_alu__func__in, value<4>{0x9u}) ? not_u<16>(xor_uu<16>(p_data__a__in, p_data__b__in)) : (eq_uu<1>(p_alu__func__in, value<4>{0x8u}) ? xor_uu<16>(p_data__a__in, p_data__b__in) : (eq_uu<1>(p_alu__func__in, value<4>{0x7u}) ? not_u<16>(or_uu<16>(p_data__a__in, p_data__b__in)) : (eq_uu<1>(p_alu__func__in, value<4>{0x6u}) ? not_u<16>(and_uu<16>(p_data__a__in, p_data__b__in)) : (eq_uu<1>(p_alu__func__in, value<4>{0x5u}) ? or_uu<16>(p_data__a__in, p_data__b__in) : (eq_uu<1>(p_alu__func__in, value<4>{0x4u}) ? and_uu<16>(p_data__a__in, p_data__b__in) : (eq_uu<1>(p_alu__func__in, value<4>{0x3u}) ? div_uu<16>(p_data__a__in, p_data__b__in) : (eq_uu<1>(p_alu__func__in, value<4>{0x2u}) ? mul_uu<16>(p_data__a__in, p_data__b__in) : (eq_uu<1>(p_alu__func__in, value<4>{0x1u}) ? sub_uu<16>(p_data__a__in, p_data__b__in) : (logic_not<1>(p_alu__func__in) ? add_uu<16>(p_data__a__in, p_data__b__in) : value<16>{0u}))))))))))))))) : value<16>{0u}) : value<16>{0u});
	// \full_case: 1
	// \src: /home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:38.7-38.12|/home/amustafa/qflow_training/multi_clock_digital_system/src/alu.v:38.4-104.9
	// cell $procmux$259
	p_alu__out__comp__valid = (p_en__in ? value<1>{0x1u} : value<1>{0u});
}

CXXRTL_EXTREMELY_COLD
void p_alu::debug_info(debug_items &items, std::string path) {
	assert(path.empty() || path[path.size() - 1] == ' ');
	items.add(path + "alu_out_comp_valid", debug_item(debug_eval_outline, p_alu__out__comp__valid, 0));
	items.add(path + "alu_out_comp", debug_item(debug_eval_outline, p_alu__out__comp, 0));
	items.add(path + "data_valid_out", debug_item(p_data__valid__out, 0, debug_item::OUTPUT|debug_item::DRIVEN_SYNC));
	items.add(path + "data_out", debug_item(p_data__out, 0, debug_item::OUTPUT|debug_item::DRIVEN_SYNC));
	items.add(path + "reset_n", debug_item(p_reset__n, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "clk", debug_item(p_clk, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "alu_func_in", debug_item(p_alu__func__in, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "en_in", debug_item(p_en__in, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "data_b_in", debug_item(p_data__b__in, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "data_a_in", debug_item(p_data__a__in, 0, debug_item::INPUT|debug_item::UNDRIVEN));
}

} // namespace cxxrtl_design

extern "C"
cxxrtl_toplevel cxxrtl_design_create() {
	return new _cxxrtl_toplevel { std::unique_ptr<cxxrtl_design::p_alu>(new cxxrtl_design::p_alu) };
}
