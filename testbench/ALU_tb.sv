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
        .beq_zero(zero)
    );


    initial begin
        //test 1 ADD
        a = 15;
        b = 9;
        alu_select = 4'b0;

        #10;

        if(result != 24)
            $display("Add failed, exepcted 21, got %d ", result);
        else
            $display("Add passed, zero flag = %b", zero);
    
        $display("Words here for fun");
        
        $finish;

    end
endmodule
