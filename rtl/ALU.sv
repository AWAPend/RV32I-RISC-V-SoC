`timescale 1ns/1ps

module ALU(
    input logic [31:0] a,
    input logic [31:0] b,
    input logic [3:0] alu_select,
    output logic [31:0] result,
    output logic zero
);


always_comb begin
    case (alu_select)//sll srl sra slt sltu
        4'b0000: result = a + b;    //ADD
        4'b0001: result = a - b;    //SUB
        4'b0010: result = a & b;    //AND
        4'b0011: result = a | b;    //OR
        4'b0100: result = a ^ b;    //XOR
        //shift left logical, shift a left by b(0-31) bits, pad with 0s
        4'b0101: result = a << b[4:0];   //SLL 
        //shift right logical, shift a right by b(0-31) bits, pad with 0s
        4'b0110: result = a >> b[4:0];   //SRL
        //shift right arithmetic, shift a right by b(0-31) bits, pad with sign bit(0 or 1)
        4'b0111: result = $signed(a) >>> b[4:0];    //SRA
        //signed set less than, is a less than b?, yes = 1, no = 0
        4'b1000: result = ($signed(a) < $signed(b)) ? 32'b1 : 32'b0;    //SLT
        //unsigned set less than
        4'b1001: result = (a < b) ? 32'b1 : 32'b0;  //SLTU
        default: result = 32'b0;
    endcase
end

assign zero = (result == 32'b0);

endmodule

