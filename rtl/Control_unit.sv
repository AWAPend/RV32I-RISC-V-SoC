`timescale 1ns/1ps

module Control_unit(
    input logic [6:0] opcode,

    //control signals
    output logic alu_src,
    output logic write_enable,
    output logic read_mem,
    output logic write_mem,
    output logic writeback_to_reg,
    output logic branch,
    output logic jump
);

    always_comb begin
        //set all vars to 0
        alu_src = 1'b0;             //alusrc: 0 = rs1 + rs2, 1 = rs1 + imm
        write_enable = 1'b0;        //1 = allow reg to be written to
        read_mem = 1'b0;            //1 = allow read ops for loads
        write_mem = 1'b0;           //1 = allow write ops for stores
        writeback_to_reg = 1'b0;    //1 = put data that was read from mem into reg, 0 = put alu result into reg
        branch = 1'b0;              
        jump = 1'b0;

        case (opcode)
            //R-type: rd = rs1 + rs2 
            7'b0110011: begin
                write_enable = 1'b1;
                alu_src = 1'b0;
            end
            //I-type: rd = rs1 + imm 
            7'b0010011: begin
                write_enable = 1'b1;
                alu_src = 1'b1;
            end
            //I-type loads: rd = imm(rs1)   imm is the offset
            7'b0000011: begin
                write_enable = 1'b1;
                alu_src = 1'b1;
                read_mem = 1'b1;
                writeback_to_reg = 1'b1;
            end
            //S-type stores: rs2 = imm(rs1)
            7'b0100011: begin
                write_enable = 1'b1;
                alu_src = 1'b1;
            end
            //B-type branchs: rs1 vs rs2 comparison(=, !=, <, > etc)
            7'b1100011: begin
                alu_src = 1'b0;
                branch = 1'b1;
            end
            //J-type JAL: PC = jump target addr, rd = PC + 4
            7'b1101111: begin
                write_enable = 1'b1;
                jump = 1'b1;
            end
            //I-type JALR: PC = rs1 + signed extended(imm), rd = PC + 4
            7'b1100111: begin
                write_enable = 1'b1;
                alu_src = 1'b1;
                jump = 1'b1;
            end
            //U-type LUI: rd = {upimm, 12'b0}
            7'b0110111: begin
                write_enable = 1'b1;
                alu_src = 1'b1;
            end
            //U-type AUIPC: rd = {upimm, 12'b0} + PC
            7'b0010111: begin
                write_enable = 1'b1;
                alu_src = 1'b1;
            end
            //default: NULL
            default: ;
        endcase

    end

endmodule
