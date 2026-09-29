`timescale 1ns/1ps


module Data_memory_tb;
    logic clk;
    logic [31:0] address;
    logic [31:0] write_data;
    logic read_mem;         
    logic write_mem;        
    logic [2:0] funct3;       
    logic [31:0] read_data;  


    int pass_count;
    int fail_count;

    Data_memory dut(
        .clk(clk),
        .address(address),
        .write_data(write_data),
        .read_mem(read_mem),
        .write_mem(write_mem),
        .funct3(funct3),
        .read_data(read_data)
    );

    //make a clock
    always #5 clk <= ~clk;
/*
    initial begin
        //dump setup for gtkwave
        $dumpfile("waveform.vcd");
        //0 = dump all levels/signals into file
        $dumpvars(0, Data_memory_tb);
        
        clk = 0;
        address = 32'b0;
        write_data = 32'b0;
        read_mem = 1'b0;
        write_mem = 1'b0;
        funct3 = 3'b000;

        @(posedge clk);
        //test writing and reading a word
        write_mem = 1'b1;
        funct3 = 3'b010; //store word
        address = 32'd4;
        write_data = 32'd12345678;
        @(posedge clk);
        write_mem = 1'b0;
        read_mem = 1'b1;
        @(posedge clk);
        if (read_data == 32'd12345678) begin
            $display("PASS: Word read/write test passed");
            pass_count++;
        end else begin         
            $display("FAIL: Word read/write test failed");
            fail_count++;
        end

        $display("Test complete. Passed: %0d, Failed: %0d", pass_count, fail_count);
        $finish;
    end
*/
    localparam F3_LB  = 3'b000;
    localparam F3_LH  = 3'b001;
    localparam F3_LW  = 3'b010;
    localparam F3_LBU = 3'b100;
    localparam F3_LHU = 3'b101;
    localparam F3_SB  = 3'b000;
    localparam F3_SH  = 3'b001;
    localparam F3_SW  = 3'b010;

    task automatic do_write(input [31:0] addr, input [31:0] data, input [2:0] f3);
        address    = addr;
        write_data = data;
        funct3     = f3;
        write_mem  = 1;
        read_mem   = 0;
        @(posedge clk);
        #1;
        write_mem = 0;
    endtask

    task automatic check_read(input [31:0] addr, input [2:0] f3, input [31:0] expected, input string name);
        address  = addr;
        funct3   = f3;
        read_mem = 1;
        #1;
        if (read_data !== expected) begin
            $display("FAIL: %s | addr=0x%0h f3=%b expected=0x%0h got=0x%0h", name, addr, f3, expected, read_data);
            fail_count++;
        end else begin
            $display("PASS: %s | addr=0x%0h data=0x%0h", name, addr, read_data);
            pass_count++;
        end
        read_mem = 0;
    endtask

    initial begin
        clk = 0;
        address = 0; write_data = 0; read_mem = 0; write_mem = 0; funct3 = 0;

        //Word store/load round trip
        do_write(32'd0, 32'hDEADBEEF, F3_SW);
        check_read(32'd0, F3_LW, 32'hDEADBEEF, "SW/LW round trip");

        //Halfword store/load, both halves of a word
        do_write(32'd4, 32'h0000ABCD, F3_SH);           // lower half of word at addr 4
        check_read(32'd4, F3_LHU, 32'h0000ABCD, "SH/LHU lower half");

        do_write(32'd6, 32'h00001234, F3_SH);           // upper half of same word
        check_read(32'd6, F3_LHU, 32'h00001234, "SH/LHU upper half");
        //confirm the lower half from before wasn't corrupted by the second store
        check_read(32'd4, F3_LHU, 32'h0000ABCD, "lower half untouched after storing upper half");

        //Byte store/load, all 4 byte positions in one word
        do_write(32'd8,  32'h000000AA, F3_SB); // byte 0
        do_write(32'd9,  32'h000000BB, F3_SB); // byte 1
        do_write(32'd10, 32'h000000CC, F3_SB); // byte 2
        do_write(32'd11, 32'h000000DD, F3_SB); // byte 3

        check_read(32'd8,  F3_LBU, 32'h000000AA, "SB/LBU byte 0");
        check_read(32'd9,  F3_LBU, 32'h000000BB, "SB/LBU byte 1");
        check_read(32'd10, F3_LBU, 32'h000000CC, "SB/LBU byte 2");
        check_read(32'd11, F3_LBU, 32'h000000DD, "SB/LBU byte 3");
        //confirm the full word assembled correctly from 4 independent byte writes
        check_read(32'd8, F3_LW, 32'hDDCCBBAA, "full word correctly assembled from 4 byte stores");

        //Sign extension: LB / LH with high bit set
        do_write(32'd12, 32'hFFFFFF80, F3_SW);  // word with byte0 = 0x80 (negative as signed byte)
        check_read(32'd12, F3_LB,  32'hFFFFFF80, "LB sign-extends negative byte (0x80 -> -128)");
        check_read(32'd12, F3_LBU, 32'h00000080, "LBU zero-extends same byte (0x80 -> 128)");

        do_write(32'd16, 32'hFFFF8000, F3_SW);  // word with halfword0 = 0x8000 (negative as signed half)
        check_read(32'd16, F3_LH,  32'hFFFF8000, "LH sign-extends negative halfword");
        check_read(32'd16, F3_LHU, 32'h00008000, "LHU zero-extends same halfword");

        //Neighbor-byte corruption check: byte store shouldn't touch adjacent bytes
        do_write(32'd20, 32'hAAAAAAAA, F3_SW);   // fill whole word with a known pattern
        do_write(32'd21, 32'h00000000, F3_SB);   // overwrite only byte 1 with 0x00
        check_read(32'd20, F3_LW, 32'hAAAA00AA, "byte store only overwrites its own byte, leaves rest intact");

        //read_mem = 0 should not produce a value (should be 0, not driving stale data)
        address  = 32'd0;
        read_mem = 0;
        #1;
        if (read_data !== 32'b0) begin
            $display("FAIL: read_data should be 0 when read_mem=0 | got=0x%0h", read_data);
            fail_count++;
        end else begin
            $display("PASS: read_data is 0 when read_mem=0");
            pass_count++;
        end

        $display("\n---- %0d passed, %0d failed ----", pass_count, fail_count);
        $finish;
    end
endmodule

