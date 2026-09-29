`timescale 1ns/1ps


module CPU_datapath #(
    parameter string HEX_FILE = "software/Assembly_test.hex"
)(
    input logic clk,
    input logic rst_n
);

    logic [31:0] pc_addr;
    logic [31:0] instruction;
    logic [31:0] imm_out;
    logic [31:0] rs1_data, rs2_data, write_data, result;
    logic [4:0] rs1_addr, rs2_addr, write_addr;
    logic [3:0] alu_select;
    logic [2:0] instruction_type;
    logic alu_src, write_enable;
    logic [6:0] opcode;
    logic [2:0] funct3;
    logic [6:0] funct7; 
    /* verilator lint_off UNUSED */
    logic zero;
    logic read_mem, write_mem, writeback_to_reg, branch, jump;
    logic branch_taken;
    logic [31:0] branch_target;
    /* verilator lint_off UNUSED */

    PC pc_dut(
        .clk(clk),
        .rst_n(rst_n),
        .branch_taken(1'b0),
        .branch_target(32'b0),
        .pc_addr(pc_addr)
    );

    Instruction_mem #(.HEX_FILE(HEX_FILE)) instruction_mem_dut(
        .pc_addr(pc_addr),
        .instruction_data(instruction)
    );

    Decoder decoder_dut(
        .instruction(instruction),
        .opcode(opcode),
        .funct3(funct3),
        .funct7(funct7),
        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        .write_addr(write_addr),
        .instruction_type(instruction_type)
    );

    Control_unit control_unit_dut(
        .opcode(opcode),
        .alu_src(alu_src),
        .write_enable(write_enable),
        .read_mem(read_mem),
        .write_mem(write_mem),
        .writeback_to_reg(writeback_to_reg),
        .branch(branch),
        .jump(jump)
    );

    ALU_control alu_control_dut(
        .opcode(opcode),
        .funct3(funct3),
        .funct7(funct7),
        .alu_select(alu_select)
    );

    Imm_generator imm_gen_dut(
        .instruction(instruction),
        .instruction_type(instruction_type),
        .imm_out(imm_out)
    );

    Register_file reg_file_dut(
        .clk(clk),
        .rst_n(rst_n),
        .rs1_addr(rs1_addr),
        .rs1_data(rs1_data),
        .rs2_addr(rs2_addr),
        .rs2_data(rs2_data),
        .write_addr(write_addr),
        .write_data(write_data),
        .write_enable(write_enable)
    );

    ALU alu_dut(
        .a(rs1_data),
        //alu_src = 0 = rs2, alu_src = 1 = immediate wanted
        .b(alu_src ? imm_out : rs2_data),
        .alu_select(alu_select),
        .result(result),
        .zero(zero)
    );

    assign write_data = result;

endmodule
