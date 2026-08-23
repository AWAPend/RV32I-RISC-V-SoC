`timescale 1ns/1ps

module Register_file_tb;
    logic clk;
    logic rst_n;
    logic [31:0] rs1_data;
    logic [4:0] rs1_addr;
    logic [31:0] rs2_data;
    logic [4:0] rs2_addr;
    logic [31:0] write_data;
    logic [4:0] write_addr;
    logic write_enable;


    Register_file dut(
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

    always #50 clk <= ~clk;

//x0 always = 0, write works, reset clears all to 0, write enable works, real two registers at once, read old data until clk latches new value

    //check input with actual, expected, and name
    task automatic check(input [31:0] actual, input [31:0] expected, input string name);
        if(actual != expected) begin
            $display("FAIL: %s | expected = %0d got %0d", name, expected, actual); 
            fail_count++;
        end else begin
            $display("PASS: %s| expected = %0d got %0d", name, expected, actual);
            pass_count++; 
        end
    endtask

    //helper to perform synchronous write 
    task automatic synchronous_write(input [4:0] addr, input [31:0] data);
        write_addr = addr;
        write_data = data;
        //write enable = true
        write_enable = 1;
        //wait clk edge to write
        @(posedge clk);
        #1;
        //ensure no future accidental writes
        write_enable = 0;
    endtask

    initial begin
        clk = 0;
        rst_n = 0;
        rs1_addr = 0;
        rs2_addr = 0;
        write_addr = 0;
        write_data = 0;
        write_enable = 0;
    

        //test reset clears all registers to 0
        rst_n = 0;
        @(posedge clk);
        rst_n = 1;

        //loop through all 32 registers
        for (int i = 0; i < 32; i++) begin
            rs1_addr = 5'(i);
            #1;
            check(rs1_data, 0, $sformatf("Rst_n test, register %0d is 0", i));
        end

        //write then read test
        synchronous_write(5, 32'hADCDEF12);
        #1;
        rs1_addr = 5;
        #1;
        check(rs1_data, 32'hADCDEF12, $sformatf("Write then read test, register 5 is: %0d", rs1_data));

        //test x0 = 0
        synchronous_write(0, 32'hFFFFFFFF);
        #1;
        rs1_addr = 0;
        #1;
        check(rs1_data, 0, "x0 stays 0 after write attempt");

        //test write enable 
        write_enable = 0;
        write_addr = 10;
        write_data = 32'h12345678;
        @(posedge clk);
        #1;
        rs1_addr = 10;
        #1;
        check(rs1_data, 0, "no write when write_enable=0");

        //read two registers at the same time
        synchronous_write(3, 32'hAAAA0000);
        synchronous_write(4, 32'h0000BBBB);
        #1;
        rs1_addr = 3;
        rs2_addr = 4;
        #1;
        check(rs1_data, 32'hAAAA0000, "dual read: rs1");
        check(rs2_data, 32'h0000BBBB, "dual read: rs2");

        //overwrite
        synchronous_write(3, 32'h11111111);
        #1;
        rs2_addr = 3;
        #1;
        check(rs2_data, 32'h11111111, "overwrite reg3");

        $display("\n---- %0d passed, %0d failed ----", pass_count, fail_count);
        $finish;
    end
endmodule

