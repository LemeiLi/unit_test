MEMORY
{
    rom : ORIGIN = 0x08000000, LENGTH = 0x1000
    ram : ORIGIN = 0x20000000, LENGTH = 0x1000
}

SECTIONS
{
    .text : { *(.text*) } > rom
    .data :
    {
        _tdata = .;
        *(.data*)
        _pdata = .;
        . = ALIGN(8);
        _sdata = .;
    } > ram
}
