`timescale 1ns/1ps


module PC_tb;
    logic clk;
    logic rst_n;
    logic branch_taken;
    logic [31:0] pc_addr;
    logic [31:0] branch_target;

    PC dut(
        .clk(clk),
        .rst_n(rst_n),
        .branch_taken(branch_taken),
        .pc_addr(pc_addr),
        .branch_target(branch_target)
    );

    int pass_count = 0;
    int fail_count = 0;

    always #5 clk <= ~clk;

    task automatic check(input [31:0] expected, input string name);
        #1; //let pc_addr settle after the edge
        if (pc_addr !== expected) begin
            $display("FAIL: %s | expected=0x%0h got=0x%0h", name, expected, pc_addr);
            fail_count++;
        end else begin
            $display("PASS: %s | pc_addr=0x%0h", name, pc_addr);
            pass_count++;
        end
    endtask

    initial begin
        clk = 0;
        rst_n = 0;
        branch_taken = 0;
        branch_target = 32'b0;

        //check reset holds pc at 0
        @(posedge clk);
        check(32'd0, "reset holds PC at 0");

        //check pc increments by 4 
        rst_n = 1;
        @(posedge clk);
        check(32'd4, "PC increments to 4 after reset released");
        @(posedge clk);
        check(32'd8, "PC increments to 8");
        @(posedge clk);
        check(32'd12, "PC increments to 12");

        //test branch jumps
        branch_taken = 1;
        branch_target = 32'h00001000;
        @(posedge clk);
        check(32'h00001000, "Branch redirects PC to target");

        //check pc increments by 4 after branch jump
        branch_taken = 0;
        @(posedge clk);
        check(32'h00001004, "PC resumes +4 increment after branch");

        //branch multiple times in a row
        branch_taken = 1;
        branch_target = 32'h00002000;
        @(posedge clk);
        check(32'h00002000, "back-to-back branch");
        branch_target = 32'h00003000; 
        @(posedge clk);
        check(32'h00003000, "back-to-back branch, new target");

        //reset interruption works 
        branch_taken = 0;
        rst_n = 0;
        @(posedge clk);
        check(32'd0, "reset clears PC back to 0");

        rst_n = 1;
        @(posedge clk);
        check(32'd4, "PC resumes increment after reset");

        $display("\n---- %0d passed, %0d failed ----", pass_count, fail_count);
        $finish;
    end

endmodule
