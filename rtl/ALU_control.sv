`timescale 1ns/1ps

module ALU_control(
    input logic [6:0] opcode,
    input logic [2:0] funct3,
    /*verilator lint_off UNUSEDSIGNAL*/
    input logic [6:0] funct7,
    /*verilator lint_off UNUSEDSIGNAL*/
    output logic [3:0] alu_select
);

    always_comb begin
        alu_select = 4'b000;
        case (opcode)
            //R-type
            7'b0110011: begin
                case (funct3) 
                    //SUB(0001) = funct7 0100000, ADD(0000) = funct7 0000000
                    3'b000: alu_select = funct7[5] ? 4'b0001 : 4'b0000; 
                    //SLL
                    3'b001: alu_select = 4'b0101; 
                    //SLT
                    3'b010: alu_select = 4'b1000; 
                    //SLTU
                    3'b011: alu_select = 4'b1001; 
                    //XOR
                    3'b100: alu_select = 4'b0100;
                    //SRA(0111) = funct7 0100000, SRL(0110) = funct7 0000000
                    3'b101: alu_select = funct7[5] ? 4'b0111 : 4'b0110; 
                    //OR
                    3'b110: alu_select = 4'b0011; 
                    //AND
                    3'b111: alu_select = 4'b0010; 
                    default: alu_select = 4'b0000;
                endcase
            end
            //I-type reg + imm operations
            7'b0010011: begin
                case (funct3) 
                    //ADDI
                    3'b000: alu_select = 4'b0000;
                    //SLLI
                    3'b001: alu_select = 4'b0101;
                    //SLTI
                    3'b010: alu_select = 4'b1000;
                    //SLTIU
                    3'b011: alu_select = 4'b1001;
                    //XORI
                    3'b100: alu_select = 4'b0100;
                    //SRAI(0111) = funct7 0100000, SRLI = funct7 0000000
                    3'b101: alu_select = funct7[5] ? 4'b0111 : 4'b0110;
                    //ORI
                    3'b110: alu_select = 4'b0011;
                    //ANDI
                    3'b111: alu_select = 4'b0010;
                    default: alu_select = 4'b0000;
                endcase
            end
            //I-type load operations

            //S-type store operations

            //B-type branchs

            //J-type JAL

            //I-type JALR

            //U-type LUI

            //U-type AUIPC

            default: alu_select = 4'b0000;
        endcase
    end

endmodule

