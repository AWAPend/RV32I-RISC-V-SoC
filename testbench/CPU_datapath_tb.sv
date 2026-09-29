`timescale 1ns/1ps


module CPU_datapath_tb;
    logic clk;
    logic rst_n;

    CPU_datapath #(.HEX_FILE("software/Assembly_test.hex")) dut(
        .clk(clk),
        .rst_n(rst_n)
    );
    
    //make a clock
    always #5 clk <= ~clk;

    initial begin
        //dump setup for gtkwave
        $dumpfile("waveform.vcd");
        //0 = dump all levels/signals into file
        $dumpvars(0, CPU_datapath_tb);
        
        clk = 0;
        rst_n = 0;
        @(posedge clk);
        rst_n = 1;

        //50 clock cycles, run through entire program
        repeat (50) @(posedge clk);

        //print final register states
        for (int i = 0; i < 32; i++) begin
            $display("x%0d = %0d", i,  dut.reg_file_dut.register[i]);
        end

        $finish;
    end


endmodule
