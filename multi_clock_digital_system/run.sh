#!/bin/bash
set -ex
echo "Doing verilog simulation with Icarus Verilog"
verilator --lint-only -Wall -I./src/ .src/system_top.v --report-unoptflat &
# iverilog -o sim/system_top_tb sim/system_top_tb.v src/*.v -I src/


# yosys synth/synth.ys
# yosys -o synth/system_top_netlist.v synth/system_top_netlist.blif
# /home/amustafa/vsdflow/work/tools/qflow-1.3.17/src/blif2Verilog -c -p -v vdd -g gnd synth/system_top.blif > synth/system_top_netlist.v

# iverilog -o ./sim/system_top_tb -D POST_SYNTHESIS ./sim/system_top_tb.v ./synth/system_top_netlist.v `yosys-config /usr/local/share/qflow/tech/osu035/osu035_stdcells.v` -I ./src/
# iverilog -o sim/system_top_tb ./sim/system_top_tb.v synth/system_top_netlist.v /usr/local/share/qflow/tech/osu035/osu035_stdcells.v -I ./src/
# ./sim/system_top_tb; gtkwave ./sim/system_top_tb.vcd

sta sta/sta.tcl