`timescale 1ns/1ps

module ALU(
    input logic [31:0] a,
    input logic [31:0] b,
    input logic [3:0] alu_select,
    output logic [31:0] result,
    output logic beq_zero
);


always_comb begin
    case (alu_select)
        4'b0000: result = a + b;
        4'b0001: result = a - b;
        4'b0010: result = a & b;
        4'b0011: result = a | b;
        default: result = 32'b0;
    endcase
end

assign beq_zero = (result == 32'b0);

endmodule

