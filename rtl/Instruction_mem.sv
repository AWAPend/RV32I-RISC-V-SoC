`timescale 1ns/1ps

module Instruction_mem(
    input clk,
    input rst_n,
    input logic [31:0] pc_addr,
    output logic [31:0] instruction_data
);

    always #5 clk = ~clk;

    logic [31:0] register [0:1023];

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (int i = 0; i < 1024; i++) begin
                register[i] <= 32'b0;
            end
        end else begin
            
        end
    end


endmodule
