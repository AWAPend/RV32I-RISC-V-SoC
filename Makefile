
#ensure make works even with file called "clean" somewhere
.PHONY: sim sim_asm clean asm

#set ALU_tb default, can overwrite with make sim TOP="filename"
TOP ?= ALU_tb

#wildcard compiles all in subfolder
SRCS :=$(wildcard rtl/*.sv) $(wildcard testbench/*.sv)
#SRCS = rtl/ALU.sv testbench/ALU_tb.sv

RVPREFIX := riscv64-unknown-elf

ASM_SRC := software/Assembly_test.s
ELF_OUT := software/Assembly_test.elf
BIN_OUT := software/Assembly_test.bin
HEX_OUT := software/Assembly_test.hex

#toolchain .s .elf .bin .hex for full cpu datapath test
asm:
	$(RVPREFIX)-as -march=rv32i -mabi=ilp32 -o $(ASM_SRC:.s=.o) $(ASM_SRC)
	$(RVPREFIX)-ld -m elf32lriscv -Ttext 0x0 -o $(ELF_OUT) $(ASM_SRC:.s=.o)
	$(RVPREFIX)-objcopy -O binary $(ELF_OUT) $(BIN_OUT)
	python3 software/Binary_to_hex.py $(BIN_OUT) $(HEX_OUT)

#plain sim for individual module testbenches, no assembly needed, call make sim TOP=module_tb
sim:
	verilator --binary --timing -Wall $(SRCS) --top-module $(TOP)
	./obj_dir/V$(TOP)

#call make sim_asm TOP=CPU_datapath_tb, execute below terminal cmds, --trace for gtkwave vcd
sim_asm: asm
	verilator --binary --timing -Wall --trace $(SRCS) --top-module $(TOP) 
	./obj_dir/V$(TOP)


#remove any generated files with make clean
clean: 
	rm -rf obj_dir
	rm -f software/*.o software/*.elf software/*.bin software/*.hex


