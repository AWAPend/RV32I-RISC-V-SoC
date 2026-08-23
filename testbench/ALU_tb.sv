`timescale 1ns/1ps
//timescale <time_unit>/<time_precision>
module ALU_tb;
    logic [31:0] a;
    logic [31:0] b;
    logic [3:0]  alu_select;

    logic [31:0] result;
    logic        zero;

    //instantiate
    ALU dut(
        .a(a),
        .b(b),
        .alu_select(alu_select),
        .result(result),
        .zero(zero)
    );

    int pass_count = 0;
    int fail_count = 0;


task automatic check(
        input [31:0] a_in, 
        input [31:0] b_in,
        input [3:0] sel,
        input [31:0] expected,
        input string name,
        input logic expected_zero = 1'bx
    );

        a = a_in;
        b = b_in;
        alu_select = sel;
        //delay 10ns
        #10;

        //
        if (result !== expected) begin
            $display("FAIL: %s | a=%0d b=%0d sel=%b | expected=%0d got=%0d",
                       name, a_in, b_in, sel, expected, result);
            fail_count++;
        end else if (zero !== 1'bx && zero !== expected_zero) begin
            $display("FAIL: %s | zero flag: expected=%0d got=%0d", name, expected_zero, zero);
            fail_count++;
        end else begin
            $display("PASS: %s", name);
            pass_count++;
        end
    endtask

    initial begin
        //logic zero = 1 if expected is zero otherwise always 0
        //ADD
        check(15, 9, 4'b0000, 24, "ADD base case", 1'b0);
        //32'h7FFFFFFF = max pos val or signed int, 32'h80000000 = max neg val
        check(32'h7FFFFFFF, 1, 4'b0000, 32'h80000000, "ADD overflow", 1'b0);

        //SUB
        check(15, 9, 4'b0001, 6, "SUB base case", 1'b0);
        check(5, 10, 4'b0001, -5, "SUB neg result", 1'b0);
        check(9, 9, 4'b0001, 0, "SUB zero flag case", 1'b1);

        //AND  bitwise complements test, checks every bit, 32'h00000000 = 32'b0
        check(32'hF0F0F0F0, 32'h0F0F0F0F, 4'b0010, 32'h00000000, "AND", 1'b1);
        //OR  32'hFFFFFFFF = 32'b1
        check(32'hF0F0F0F0, 32'h0F0F0F0F, 4'b0011, 32'hFFFFFFFF, "OR", 1'b0);
        //XOR  XOR on 32'hFFFFFFFF = all 1's means bitwise inversion, checks flip
        check(32'hFF00FF00, 32'hFFFFFFFF, 4'b0100, 32'h00FF00FF, "XOR", 1'b0);

        //shift left logical
        check(1, 4, 4'b0101, 16, "SLL by 4", 1'b0);           
        check(1, 0, 4'b0101, 1, "SLL by 0", 1'b0);

        //shift right logical, value should get halved
        check(32'h80000000, 1, 4'b0110, 32'h40000000, "SRL by 1", 1'b0);

        //shift right arithmetic
        //shift right with neg sign bit(1)
        check(32'hFFFFFFFF, 1, 4'b0111, 32'hFFFFFFFF, "SRA sign extend success", 1'b0);
        //shift right with pos sign bit(0)
        check(32'h7FFFFFFF, 1, 4'b0111, 32'h3FFFFFFF, "SRA positive", 1'b0);

        //SLT,SLTU 
        check(32'hFFFFFFFF, 1, 4'b1000, 1, "SLT: -1 < 1 (signed)", 1'b0);
        check(32'hFFFFFFFF, 1, 4'b1001, 0, "SLTU: big_unsigned < 1 is false", 1'b1);

        //default
        check(5, 5, 4'b1111, 0, "invalid select -> 0", 1'b1);

        $display("\n---- %0d passed, %0d failed ----", pass_count, fail_count);
        $finish;

    end
endmodule
