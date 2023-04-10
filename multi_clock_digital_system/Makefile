YOSYS = yosys
YOSYS_INCLUDE = $(shell yosys-config --datdir)/include
all: tb
	./tb

tb: main.cpp alu.cpp
	clang++ -g -O3 -std=c++11 -I $(YOSYS_INCLUDE) $< -o $@

alu.cpp: src/alu.v
	$(YOSYS) -p "read_verilog $<; write_cxxrtl $@"
clean:
	\rm -rf alu.cpp tb