`timescale 1ns/1ps

module Register_file_tb;
    logic clk;
    logic rst_n;
    logic [31:0] rs1_data;
    logic [4:0] rs1_addr;
    logic [31:0] rs2_data;
    logic [4:0] rs2_addr;
    logic [31:0] write_data;
    logic [4:0] rd_addr;
    logic write_enable;


    Register_file dut(
        .clk(clk),
        .rst_n(rst_n),
        .rs1_data(rs1_data),
        .rs1_addr(rs1_addr),
        .rs2_data(rs2_data),
        .rs2_addr(rs2_addr),
        .write_data(write_data),
        .rd_addr(rd_addr),
        .write_enable(write_enable)
    );

//x0 always = 0, write works, reset clears all to 0, write enable works, real two registers at once, read old data until clk latches new value

//10ns period clk
always #5 clk = ~clk;

task automatic check(input [31:0] actual, expected, input string name);
    if(actual != expected) begin
        $display("FAIL: %s | expected = %0d got %0d", name, expected, actual); 
        fail_count++;
    end else begin
        $display("PASS: %s", name);
        pass_count++; 
    end
endtask

task automatic 

