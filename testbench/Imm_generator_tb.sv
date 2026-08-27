`timescale 1ns/1ps

module Imm_generator_tb;
    logic [31:0] instruction;
    logic [2:0] instruction_type;
    logic [31:0] imm_out;


    Imm_generator dut(
        .instruction(instruction),
        .instruction_type(instruction_type),
        .imm_out(imm_out)
    );

    int pass_count = 0;
    int fail_count = 0;

    //check task
    task automatic check(input [31:0] actual, input [31:0] expected, input string name);
        #1;
        if (actual != expected) begin
            $display("FAIL: %s expected = %0d actual = %0d", name, expected, actual);
            fail_count++;
        end else begin
            $display("PASS: %s expected = %0d actual = %0d", name, expected, actual);
            pass_count++;
        end
    endtask

    initial begin
        //test I-type
        #1;
        instruction_type = 3'b000;
        //test positive val
        instruction = 32'h12300000;
        #1;
        check(imm_out, 32'h00000123, "I-type positive val ");
        //test negative val and sign extension
        instruction = 32'h9AB00000;
        #1;
        check(imm_out, 32'hFFFFF9AB, "I-type negative val -1621");

        //test S-type
        #1;
        instruction_type = 3'b001;
        //test positive val and [11:7]
        instruction = 32'h00000700; //[11:7] = 01110
        #1;
        check(imm_out, 32'h0000000E, "S-type positive val 14");
        //test [31:25] + [11:7]
        instruction = 32'hFE000F80; //[31:25] and [11:7] = 1111111 + 11111, rest are 0
        #1;
        check(imm_out, 32'hFFFFFFFF, "S-type both fields");

        //test B-type
        #1;
        instruction_type = 3'b010;
        //test positive val
        instruction = 32'h00000400; //[11:8] = 4'b0100
        #1;
        check(imm_out, 32'd8, "B-type positive val +8");
        //test largest negative val
        instruction = 32'h80000000; //[31] sign extend only
        #1;
        check(imm_out, 32'hFFFFF000, "B-type sign extend -4096");

        //U-type
        #1;
        instruction_type = 3'b011;
        //test lower bits are padded with 0s
        instruction = 32'hFFFFF000; //[31:12] = 20'hFFFFF
        #1;
        check(imm_out, 32'hFFFFF000, "U-type"); 

        //J-type
        #1;
        instruction_type = 3'b100;
        //large positive val
        instruction = 32'h00001000; //[19:12] = 8'b00000001
        #1;
        check(imm_out, 32'd4096, "J-type positive val 4096");
        //large negative val
        instruction = 32'h80000000; //[31] = 1, rest 0
        #1;
        check(imm_out, 32'hFFF00000, "J-type negative val -1048576");

    end

endmodule


