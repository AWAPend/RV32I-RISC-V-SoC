.section .text
.global _start


_start:
    # ---- set up source values ----
    addi x1, x0, 11        # x1 = 11
    addi x2, x0, -21       # x2 = -21  (tests negative immediates too)
    addi x3, x0, 2047      # x3 = 2047 (max positive 12-bit immediate)
    addi x4, x0, -2048     # x4 = -2048 (min negative 12-bit immediate)
    
    # large unsigned-looking value, built via two instructions
    # since a single ADDI can't load a big value directly (12-bit imm limit)
    addi x5, x0, -1        # x5 = -1 = 0xFFFFFFFF (all bits set)

    # ---- R-type tests ----
    add  x6,  x1, x2        # x6 = 11 + (-21) = -10
    sub  x7,  x1, x2        # x7 = 11 - (-21) = 32
    and  x8,  x1, x5        # x8 = 11 & 0xFFFFFFFF = 11
    or   x9,  x2, x5        # x9 = -21 | 0xFFFFFFFF = 0xFFFFFFFF (-1)
    xor  x10, x1, x5        # x10 = 11 ^ 0xFFFFFFFF = ~11 = 0xFFFFFFF4 (-12)
    sll  x11, x1, x1        # x11 = 11 << (11 & 0x1F) = 11 << 11 = 22528
    srl  x12, x5, x1        # x12 = 0xFFFFFFFF >> 11 (logical) = 0x001FFFFF
    sra  x13, x5, x1        # x13 = 0xFFFFFFFF >>> 11 (arithmetic) = 0xFFFFFFFF (-1)
    slt  x14, x2, x1        # x14 = (-21 < 11) signed = 1
    sltu x15, x2, x1        # x15 = (huge_unsigned < 11) unsigned = 0

    # ---- I-type ALU tests ----
    addi x16, x1, 100       # x16 = 11 + 100 = 111
    andi x17, x5, 15        # x17 = 0xFFFFFFFF & 15 = 15
    ori  x18, x0, 255       # x18 = 0 | 255 = 255
    xori x19, x5, 15        # x19 = 0xFFFFFFFF ^ 15 = 0xFFFFFFF0 (-16)
    slli x20, x1, 4         # x20 = 11 << 4 = 176
    srli x21, x5, 4         # x21 = 0xFFFFFFFF >> 4 (logical) = 0x0FFFFFFF
    srai x22, x5, 4         # x22 = 0xFFFFFFFF >>> 4 (arithmetic) = 0xFFFFFFFF (-1)
    slti x23, x2, 0         # x23 = (-21 < 0) signed = 1
    sltiu x24, x2, 0        # x24 = (huge_unsigned < 0) unsigned = 0

    # ---- x0 write-suppression test ----
    addi x0, x1, 999        # attempt to write x0 — should stay 0

    # ---- safe landing pad ----
loop:
    addi x25, x25, 0        # harmless no-op-ish instruction, safe to re-execute repeatedly


