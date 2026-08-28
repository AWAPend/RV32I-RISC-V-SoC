ENTRY(_start)

MEMORY
{
    /*instruction mem has 64kb available */
    ROM (rx) : ORIGIN = 0x00000000, LENGTH = 64K
}

SECTIONS
{   
    /*.text start section containing instructions*/
    .text :
    {
        *(.text)
        *(.text.*)
    } > ROM
}

