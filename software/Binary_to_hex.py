import sys

#use case: Python3 Binary_to_hex.py input_file.bin output_file.hex
input_file = sys.argv[1]
output_file = sys.argv[2]

#rb = binary read 
with open(input_file, "rb") as f:
    data = f.read()

with open(output_file, "w") as f:
    #step = 4 since 4 bytes = 32bits rv32i
    for i in range(0, len(data), 4):
        word = data[i:i+4]

        #pad word with zeroes if its not a multiple of 4(onyl for last slice) 
        word = word.ljust(4, b'\x00')

        #little endian, LSB first
        value = int.from_bytes(word, byteorder = "little")

        #format as hex(x), zero pad(0) to a min width of (8)
        f.write(f"{value:08x}\n")
