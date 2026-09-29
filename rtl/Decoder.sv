`timescale 1ns/1ps

//decoder gets input from the 

module Decoder(
    //to imm_generator, s-type, u-type etc
    input logic [31:0] instruction,

    //separate 32bit instruction into fields
    output logic [6:0] opcode,
    output logic [2:0] funct3,
    output logic [6:0] funct7,
    output logic [4:0] rs1_addr,
    output logic [4:0] rs2_addr, 
    output logic [4:0] write_addr,

    //signal to imm generator 
    output logic [2:0] instruction_type
);

    //separate instruction
    assign opcode = instruction[6:0];
    assign rs1_addr = instruction[19:15];
    assign rs2_addr = instruction[24:20];
    assign write_addr = instruction[11:7];
    assign funct3 = instruction[14:12];
    assign funct7 = instruction[31:25];

    always_comb begin
        case (opcode)
            //I-type 3 categories: reg + imm ops(0010011), loads(0000011), JALR(1100111)
            7'b0010011, 7'b0000011, 7'b1100111: instruction_type = 3'b000;
            //S-type
            7'b0100011: instruction_type = 3'b001;
            //B-type
            7'b1100011: instruction_type = 3'b010;
            //U-type 2 categories: LUI(0110111), AUIPC(0010111)
            7'b0110111, 7'b0010111: instruction_type = 3'b011;
            //J-type
            7'b1101111: instruction_type = 3'b100;
            //R-type, dont cares
            7'b0110011: instruction_type = 3'b101;
            default: instruction_type = 3'b101;
        endcase
    end

endmodule

