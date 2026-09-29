`timescale 1ns/1ps


module Data_memory(
    input logic clk,
    input logic [31:0] address,
    input logic [31:0] write_data,
    input logic read_mem,           //I type load
    input logic write_mem,          //S type store
    input logic [2:0] funct3,       //funct3 for load/store
    output logic [31:0] read_data
);
    //array of 32bit words
    logic [31:0] register [0:1023];
    //4 bit selector for 0-7 8-15 16-23 24-31 
    
    
    //SW, SB, SH
    always_ff @(posedge clk) begin   
        //write_mem = 1 means S type store wanted
        if (write_mem) begin
            case (funct3) 
                //funct3 = 000 = store byte 8
                3'b000: begin
                    case (address[1:0])
                        2'b00: register[address >> 2][7:0] <= write_data[7:0];
                        2'b01: register[address >> 2][15:8] <= write_data[7:0];
                        2'b10: register[address >> 2][23:16] <= write_data[7:0];
                        2'b11: register[address >> 2][31:24] <= write_data[7:0];
                    endcase
                end
                //funct3 = 001 = store halfword 16
                3'b001: begin
                    case (address[1]) 
                        1'b0: register[address >> 2][15:0] <= write_data[15:0];
                        1'b1: register[address >> 2][31:16] <= write_data[15:0];
                    endcase
                end
                //funct3 = 010 = store word 32
                3'b010: begin
                    register[address >> 2] <= write_data;
                end
                //no write if none of the above funct3 values are selected
                default: ;
            endcase
        end
    end

    //LB, LH, LW, LBU, LHU
    always_comb begin
        //read_data should be 0 if read_mem is not selected
        read_data = 32'b0;
        if(read_mem) begin
            case (funct3)
                //funct3 = 000 = load byte 8 sign extended
                3'b000: begin
                    case (address[1:0])
                        2'b00: read_data = {{24{register[address >> 2][7]}}, register[address >> 2][7:0]};
                        2'b01: read_data = {{24{register[address >> 2][15]}}, register[address >> 2][15:8]};
                        2'b10: read_data = {{24{register[address >> 2][23]}}, register[address >> 2][23:16]};
                        2'b11: read_data = {{24{register[address >> 2][31]}}, register[address >> 2][31:24]};
                    endcase
                end
                //funct3 = 001 = load halfword 16 sign extended
                3'b001: begin
                    case (address[1])
                        1'b0: read_data = {{16{register[address >> 2][15]}}, register[address >> 2][15:0]};
                        1'b1: read_data = {{16{register[address >> 2][31]}}, register[address >> 2][31:16]};
                    endcase
                end
                //funct3 = 010 = load word 32
                3'b010: begin
                    read_data = register[address >> 2];
                end
                //funct3 = 100 = load byte 8 unsigned zero extended
                3'b100: begin 
                    case (address[1:0])
                        2'b00: read_data = {24'b0, register[address >> 2][7:0]};
                        2'b01: read_data = {24'b0, register[address >> 2][15:8]};
                        2'b10: read_data = {24'b0, register[address >> 2][23:16]};
                        2'b11: read_data = {24'b0, register[address >> 2][31:24]};
                    endcase
                end
                //funct3 = 101 = load halfword 16 unsigned zero extended
                3'b101: begin
                    case (address[1])
                        1'b0: read_data = {16'b0, register[address >> 2][15:0]};
                        1'b1: read_data = {16'b0, register[address >> 2][31:16]};
                    endcase
                end
                default: read_data = 32'b0;
            endcase    
        end
    end
endmodule

