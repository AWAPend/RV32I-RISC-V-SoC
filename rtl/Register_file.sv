`timescale 1ns/1ps


module Register_file(
    input logic clk,
    input logic rst_n,
    //rs1
    input logic[4:0] rs1_addr,
    output logic [31:0] rs1_data,
    //rs2
    input logic [4:0] rs2_addr,
    output logic [31:0] rs2_data,
    //rd
    input logic [4:0] rd_addr,
    input logic [31:0] write_data,
    
    input logic write_enable
);

logic [31:0] register [0:31];

always_ff @(posedge clk) begin
    //on active low reset, turn all registers 0
    if(!rst_n) begin
        for (int i = 0; i < 32; i++) begin
            register[i] <= 32'b0;
        end 
    end else if (write_enable && rd_addr != 5'd0) begin
        register[rd_addr] <= write_data;
    end
end

//x0 = 0 at all times, if any read = x0 addr, make it 0 otherwise write register
assign rs1_data = (rs1_addr == 5'd0) ? 32'b0 : register[rs1_addr];
assign rs2_data = (rs2_addr == 5'd0) ? 32'b0 : register[rs2_addr];


