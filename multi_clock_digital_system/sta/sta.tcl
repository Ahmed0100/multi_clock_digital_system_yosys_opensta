# read_celllib  /usr/local/share/qflow/tech/osu050/osu05_stdcells.lib
# read_verilog ../synth/system_top.rtlnopwr.v
# read_sdc ../src/constr.sdc
# # report_wns
# report_timing
read_liberty /usr/local/share/qflow/tech/osu035/osu035_stdcells.lib
read_verilog ./synth/system_top_netlist.v
link_design system_top
read_sdc ./src/constr.sdc
report_checks