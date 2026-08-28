`timescale 1ns/1ps


module PC (
    input logic clk,
    input logic rst_n,
    input logic branch_taken,
    input logic [31:0] branch_target,
    output logic [31:0] pc_addr
);

    //move on to next instructions after every clk cycle
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            pc_addr <= 32'b0;
        end else begin
            //if branch is true, jump to branch, else pc + 4
            pc_addr <= branch_taken ? branch_target : pc_addr + 32'd4;
        end
    end
    
endmodule
