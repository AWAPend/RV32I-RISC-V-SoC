`timescale 1ns/1ps




module Decoder_tb;
    logic [31:0] instruction;
    logic [2:0] instruction_type;
    logic [3:0] alu_select;
    logic [4:0] rs1_addr;
    logic [4:0] rs2_addr;
    logic [4:0] write_addr;
    logic alu_src;
    logic write_enable;      //1 = write result back to register file
    /* verilator lint_off UNUSED */
    logic read_mem;          //1 = read from mem for loads
    logic write_mem;         //1 = write to mem for stores
    logic writeback_to_reg;  //0 = alu result writeback, 1 = writeback from mem
    logic branch;            //1 = branch instruction is true
    /* verilator lint_off UNUSED */
    logic jump;   
    logic [31:0] a;
    logic [31:0] b;
    logic [31:0] result;
    /* verilator lint_off UNUSED */
    logic zero;
    /* verilator lint_off UNUSED */
    logic [31:0] imm_out;
    logic clk;
    logic rst_n;
    logic [31:0] write_data;
    logic [31:0] rs1_data;
    logic [31:0] rs2_data;

    //clock for register file
    always #5 clk <= ~clk;

    //instantiate
    Decoder decoder_dut(
        .instruction(instruction),
        .instruction_type(instruction_type),
        .alu_select(alu_select),
        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        .write_addr(write_addr),
        .alu_src(alu_src),
        .write_enable(write_enable),
        .read_mem(read_mem),
        .write_mem(write_mem),
        .writeback_to_reg(writeback_to_reg),
        .branch(branch),
        .jump(jump)
    );

    ALU alu_dut(
        .a(a),
        .b(b),
        .alu_select(alu_select),
        .result(result),
        .zero(zero)
    );

    Imm_generator imm_gen_dut(
        .instruction(instruction),
        .instruction_type(instruction_type),
        .imm_out(imm_out)
    );

    Register_file reg_file_dut(
        .clk(clk),
        .rst_n(rst_n),
        .rs1_data(rs1_data),
        .rs1_addr(rs1_addr),
        .rs2_data(rs2_data),
        .rs2_addr(rs2_addr),
        .write_data(write_data),
        .write_addr(write_addr),
        .write_enable(write_enable)
    );

    int pass_count = 0;
    int fail_count = 0;

    //input a of ALU is always register [31:0] rs1_data
    assign a = rs1_data;
    //alu_src = 1 = use sign extended [31:0] imm otherwise use [[31:0] rs2
    assign b = alu_src ? imm_out : rs2_data;

    //writeback destination = ALU result for R-type and I-type
    assign write_data = result;

    task automatic check(input [31:0] actual_instr, input [4:0] expected_reg, input [31:0] expected_result, input string name);
        #1;
        //input is instruction in format ADD x2 x4 x5 or whatever, expected result is the register x2 with string name indicating which one
        //hardcoded tests for now until PC is built
        //test each instruction and whether it links up all the modules
        instruction = actual_instr;
        #1;                     //pause for decoder, imm, alu combinational settle
        @(posedge clk);         //register file posedge is when write enable occurs
        #1;

        if (reg_file_dut.register[expected_reg] !== expected_result) begin
            $display("FAIL: %s | expected: x%0d = %0d got %0d", name, expected_reg, expected_result, reg_file_dut.register[expected_reg]);
            fail_count++;
        end else begin
            $display("PASS: %s | expected: x%0d = %0d got %0d", name, expected_reg, expected_result, reg_file_dut.register[expected_reg]);
            pass_count++;
        end
    endtask

    //hardcoded instructions
    //R-type: funct7[7] | rs2[5] | rs1[5] | funct3[3] | rd[5] | opcode[7]
    //ADD, rd = rs1 + rs2
    localparam ADD_x3_x1_x2 = {7'b0000000, 5'b00010, 5'b00001, 3'b000, 5'd3, 7'b0110011};
    //SUB, rd = rs1 - rs2
    localparam SUB_x4_x2_x1 = {7'b0100000, 5'b00001, 5'b00010, 3'b000, 5'd4, 7'b0110011};
    //AND
    localparam AND_x5_x1_x2 = {7'b0, 5'b00010, 5'b00001, 3'b111, 5'd5, 7'b0110011};
    //OR
    localparam OR_x6_x1_x2 = {7'b0, 5'b00010, 5'b00001, 3'b110, 5'd6, 7'b0110011};
    //XOR
    localparam XOR_x7_x1_x2 = {7'b0, 5'b00010, 5'b00001, 3'b100, 5'd7, 7'b0110011};
    //SLL
    localparam SLL_x8_x1_x2 = {7'b0, 5'b00010, 5'b00001, 3'b001, 5'd8, 7'b0110011};
    //SRL
    localparam SRL_x9_x1_x2 = {7'b0000000, 5'b00010, 5'b00001, 3'b101, 5'd9, 7'b0110011};
    //SRA
    localparam SRA_x10_x1_x2 = {7'b0100000, 5'b00010, 5'b00001, 3'b101, 5'd10, 7'b0110011};
    //SLT
    localparam SLT_x11_x31_x2 = {7'b0, 5'b00010, 5'b11111, 3'b010, 5'd11, 7'b0110011};
    //SLTU
    localparam SLTU_x12_x31_x2 = {7'b0, 5'b00010, 5'b11111, 3'b011, 5'd12, 7'b0110011};
    //x0 always = 0 check
    localparam ADD_x0_x1_x2 = {7'b0, 5'b00010, 5'b00001, 3'b000, 5'd0, 7'b0110011};

    //I-type: imm[12] | rs1[5] | funct3[3] | rd[5] | opcode[7]
    //ADDI, rd = x1 + 58
    localparam ADDI_x13_x1_58 = {12'd58, 5'b00001, 3'b000, 5'd13, 7'b0010011};
    //SLLI
    localparam SLLI_x14_x1_4 = {7'b0000000, 5'd4, 5'b00001, 3'b001, 5'd14, 7'b0010011};
    //SLTI
    localparam SLTI_x15_x1_21 = {12'd21, 5'b00001, 3'b010, 5'd15, 7'b0010011};
    //SLTIU
    localparam SLTIU_x16_x1_7 = {12'd7, 5'b00001, 3'b011, 5'd16, 7'b0010011};
    //XORI
    localparam XORI_x17_x1_34 = {12'd34, 5'b00001, 3'b100, 5'd17, 7'b0010011};
    //SRLI 
    localparam SRLI_x18_x2_3 = {12'd3, 5'b00010, 3'b101, 5'd18, 7'b0010011};
    //SRAI
    localparam SRAI_x19_x2_2 = {7'b0100000, 5'd2, 5'b00010, 3'b101, 5'd19, 7'b0010011};
    //ORI
    localparam ORI_x20_x1_14 = {12'd14, 5'b00001, 3'b110, 5'd20, 7'b0010011};
    //ANDI
    localparam ANDI_x21_x1_100 = {12'd100, 5'b00001, 3'b111, 5'd21, 7'b0010011};

    initial begin
        clk = 0;
        rst_n = 0;
        @(posedge clk);
        rst_n = 1;

        //populate registers
        reg_file_dut.register[1] = 32'd11;
        reg_file_dut.register[2] = 32'd21;
        reg_file_dut.register[31] = 32'hFFFFFFFF; //-1 signed, 4,294,967,295 unsigned
        
        //check: input, reg destination, answer, name
        //R-type
        check(ADD_x3_x1_x2, 5'd3, (reg_file_dut.register[1] + reg_file_dut.register[2]), "ADD_x3_x1_x2");
        check(SUB_x4_x2_x1, 5'd4, (reg_file_dut.register[2] - reg_file_dut.register[1]), "SUB_x4_x2_x1");
        check(AND_x5_x1_x2, 5'd5, (reg_file_dut.register[1] & reg_file_dut.register[2]), "AND_x5_x1_x2");
        check(OR_x6_x1_x2,  5'd6, (reg_file_dut.register[1] | reg_file_dut.register[2]), "OR_x6_x1_x2");
        check(XOR_x7_x1_x2, 5'd7, (reg_file_dut.register[1] ^ reg_file_dut.register[2]), "XOR_x7_x1_x2");
        check(SLL_x8_x1_x2, 5'd8, (reg_file_dut.register[1] << reg_file_dut.register[2][4:0]), "SLL_x8_x1_x2");
        check(SRL_x9_x1_x2, 5'd9, (reg_file_dut.register[1] >> reg_file_dut.register[2][4:0]), "SRL_x9_x1_x2");
        check(SRA_x10_x1_x2, 5'd10, ($signed(reg_file_dut.register[1]) >>> reg_file_dut.register[2][4:0]), "SRA_x10_x1_x2");
        check(SLT_x11_x31_x2, 5'd11, (($signed(reg_file_dut.register[31]) < $signed(reg_file_dut.register[2])) ? 32'd1 : 32'd0), "SLT_x11_x31_x2, x31(-1) < x2(21) is true");
        check(SLTU_x12_x31_x2, 5'd12, ((reg_file_dut.register[31] < reg_file_dut.register[2]) ? 32'd1 : 32'd0), "SLTU_x12_x31_x2, x31(4billion) < x2(21) is false");
        check(ADD_x0_x1_x2, 5'd0, 32'd0, "ADD writing to x0 stays 0");

        //I-type
        check(ADDI_x13_x1_58, 5'd13, 32'd69, "ADDI_x13_x1_58");
        check(SLLI_x14_x1_4, 5'd14, (32'd11 << 32'd4), "SLLI_x14_x1_4");
        check(SLTI_x15_x1_21, 5'd15, 32'd1, "SLTI_x15_x1_21, 11(x1) < 21(imm)");
        check(SLTIU_x16_x1_7, 5'd16, 32'b0, "SLTIU_x16_x1_7, 11(x1) !< 7(imm)");
        check(XORI_x17_x1_34, 5'd17, (32'd11 ^ 32'd34), "XORI_x17_x1_34");
        check(SRLI_x18_x2_3, 5'd18, (32'd21 >> 32'd3), "SRLI_x18_x2_30");
        check(SRAI_x19_x2_2, 5'd19, $signed(32'd21) >>> 32'd2, "SRAI_x19_x2_31");
        check(ORI_x20_x1_14, 5'd20, (32'd11 | 32'd14), "ORI_x20_x1_14");
        check(ANDI_x21_x1_100, 5'd21, (32'd11 & 32'd100), "ANDI_x21_x1_100");


        $display("\n---- %0d passed, %0d failed ----", pass_count, fail_count);
        $finish;
    end

endmodule


