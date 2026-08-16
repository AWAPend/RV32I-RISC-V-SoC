
#ensure make works even with file called "clean" somewhere
.PHONY: sim clean

#set ALU_tb default, can overwrite with make sim TOP="filename"
TOP ?= ALU_tb

#wildcard compiles all in subfolder
SRCS :=$(wildcard rtl/*.sv) $(wildcard testbench/*.sv)
#SRCS = rtl/ALU.sv testbench/ALU_tb.sv


#call make sim, execute below terminal cmds
sim: 
	verilator --binary --timing -Wall $(SRCS) --top-module $(TOP)
	./obj_dir/V$(TOP)

#remove any generated files with make clean
clean: 
	rm -rf obj_dir


