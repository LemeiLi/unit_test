.text
.globl _start
_start:
    bx lr

.data
.word _tdata
.word _pdata
.word _sdata

