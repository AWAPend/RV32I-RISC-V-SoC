`timescale 1ns/1ps

module Imm_generator(
    /*verilator lint_off UNUSEDSIGNAL*/
    input logic [31:0] instruction,
    /*verilator lint_on UNUSEDSIGNAL*/
    input logic [2:0] instruction_type,
    output logic [31:0] imm_out
);

    //sign extend the imm bits into proper 32bit output
    //could be xxx12 bits or xxx20bits sign extended
    
    //R type = N/A
    //choose instruction type, combine, sign extend into 32 bit immediate output
    always_comb begin   
        case (instruction_type)
            //I-type, imm = [31:20]
            3'b000: imm_out = {{20{instruction[31]}}, instruction[31:20]};
            //S-type, imm = [31:25] + [11:7] 
            3'b001: imm_out = {{20{instruction[31]}}, instruction[31:25], instruction[11:7]};
            //B-type, imm = [31] + [7] + [30:25] + [11:8] + 0
            3'b010: imm_out = {{19{instruction[31]}}, instruction[31], instruction[7], instruction[30:25], instruction[11:8], 1'b0};
            //U-type, upper imm = [31] + [30:20] + [19:12] + 0s
            3'b011: imm_out = {instruction[31:12], 12'b0};
            //J-type, imm = [31] + [19:12] + [20] + [30:25] + [24:21] + 0
            3'b100: imm_out = {{11{instruction[31]}}, instruction[31], instruction[19:12], instruction[20], instruction[30:21], 1'b0};
            //R-type
            3'b101: imm_out = 32'b0;
            default: imm_out = 32'b0;
        endcase
    end

endmodule

