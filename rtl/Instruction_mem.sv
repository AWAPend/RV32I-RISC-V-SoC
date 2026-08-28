`timescale 1ns/1ps

module Instruction_mem(
    input clk,
    input logic [31:0] pc_addr,
    output logic [31:0] instruction_data
);

    logic [31:0] register [0:1023];
    
    initial begin
        $readmemh("RV32I-RISCV-SoC/software/Assembly_test.hex", register);
    end

    //combinational read
    //right shift by 2 = divide by 4, 4byte(32bits)/4 = 1(first word)
    assign instruction_data <= register[pc_addr >> 2];

endmodule
