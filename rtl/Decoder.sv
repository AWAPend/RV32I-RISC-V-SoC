`timescale 1ns/1ps

//decoder gets input from the 

module Decoder(
    //to imm_generator, s-type, u-type etc
    input logic [31:0] instruction,
    output logic [2:0] instruction_type, 

    //to ALU 
    output logic [3:0] alu_select, 

    //to register file
    output logic [4:0] rs1_addr, 
    output logic [4:0] rs2_addr,
    output logic [4:0] write_addr,

    //to mux, select reg-reg(0) or reg-imm(1) operation
    output logic alu_src,

    //to reg file
    output logic write_enable,      //1 = write result back to register file
    output logic read_mem,          //1 = read from mem for loads
    output logic write_mem,         //1 = write to mem for stores
    output logic writeback_to_reg,  //0 = alu result writeback, 1 = writeback from mem

    //control signals for specific instructions
    output logic branch,            //1 = branch instruction is true
    output logic jump               //1 = jump instruction is true
                      
);

    //separate instruction
    logic [6:0] opcode;
    logic [2:0] funct3;
    /* verilator lint_off UNUSED */
    logic [6:0] funct7;
    /* verilator lint_off UNUSED */
    assign opcode = instruction[6:0];
    assign rs1_addr = instruction[19:15];
    assign rs2_addr = instruction[24:20];
    assign write_addr = instruction[11:7];
    assign funct3 = instruction[14:12];
    assign funct7 = instruction[31:25];


    always_comb begin
        instruction_type = 3'b000;
        alu_select = 4'b0000;
        //
        alu_src = 1'b0;
        write_enable = 1'b0;
        read_mem = 1'b0;
        write_mem = 1'b0;
        writeback_to_reg = 1'b0;
        branch = 1'b0;
        jump = 1'b0;

        case (opcode) 
            //R-type to ALU(ADD, SUB, SLT, SRL etc), rs1 operand rs2
            7'b0110011: begin
                //alu_select to match ALU module 
                write_enable = 1'b1;
                alu_src = 1'b0;
                //instruction type = 3'b101(R-type defined in imm generator) or default case, both are 32'b0
                case (funct3)
                    //ADD = funct7 0000000 = 4'b0000(ALU), SUB = funct7 0100000 = 4'b0001(ALU)
                    3'b000: alu_select = funct7[5] ? 4'b0001 : 4'b0000;
                    //SLL
                    3'b001: alu_select = 4'b0101;
                    //SLT
                    3'b010: alu_select = 4'b1000;
                    //SLTU
                    3'b011: alu_select = 4'b1001;
                    //XOR
                    3'b100: alu_select = 4'b0100;
                    //SRL = funct7 0000000 = 4'b0110, SRA = funct7 0100000 = 4'b0111 
                    3'b101: alu_select = funct7[5] ? 4'b0111 : 4'b0110;
                    //OR 
                    3'b110: alu_select = 4'b0011;
                    //AND    
                    3'b111: alu_select = 4'b0010; 
                    default: alu_select = 4'b0000;
                endcase
            end
            //I-type to ALU(ADDI, ANDI, ORI, SLLI etc), rs1 operand imm
            7'b0010011: begin
                write_enable = 1'b1;
                alu_src = 1'b1;
                //3'b000 = I-type in imm generator
                instruction_type = 3'b000;
                case (funct3)
                    //ADDI 
                    3'b000: alu_select = 4'b000;
                    //SLLI
                    3'b001: alu_select = 4'b0101;
                    //SLTI
                    3'b010: alu_select = 4'b1000;
                    //SLTIU
                    3'b011: alu_select = 4'b1001;
                    //XORI
                    3'b100: alu_select = 4'b0100;
                    //SRLI = funct7 0000000 = 0110, SRAI = funct7 0100000 = 0111
                    3'b101: alu_select = funct7[5] ? 4'b0110 : 4'b0111;
                    //ORI
                    3'b110: alu_select = 4'b0011;
                    //ANDI
                    3'b111: alu_select = 4'b0010;
                endcase
            end
            /*
            //I-type load(LB, LW, LBU, LHU etc), rs1 + imm for address
            7'b0000011: begin
                write_enable = 1'b1;
                alu_src = 1'b1;
            end
            //S-type store(SW, SB etc), rs1 + imm for address
            7'b0100011: begin
                write_enable = 1'b0;
                alu_src = 1'b1;
            end
            //B-type branchs(BLT, BEQ, BNE, BGE etc), rs1 and rs2 comparison
            7'b1100011: begin
                write_enable = 1'b0;
                alu_src = 1'b1;
            end
            //J-type jump and link(JAL), PC + imm
            7'b1101111: begin
                write_enable = 1'b1;
                alu_src = 1'b1;
            end
            //I type jump and link reg(JALR), rs1 + imm
            7'b1100111: begin
                write_enable = 1'b1;
                alu_src = 1'b1;
            end
            //U-type load upper imm(LUI), 0 + imm
            7'b0110111: begin
                write_enable = 1'b1;
                alu_src = 1'b1;
            end
            //U-type add upper imm to PC(AUIPC), PC + imm
            7'b0010111: begin
                write_enable = 1'b1;
                alu_src = 1'b1;
            end
        */
            default: begin
                //defaults inside the individual cases, this default is to prevent compiler warning
            end
        endcase      

    end

endmodule

