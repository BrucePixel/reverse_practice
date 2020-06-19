G3103   DB  '%d', 0aH, 00H

_main   PROC
    push    0
    call    DWORD PTR __imp___time64
    push    edx
    push    eax
    push    OFFSET $SG3103 ; '%d'
    call    DWORD PTR __imp__printf
    add esp, 16
    xor eax, eax
    ret 0
_main   ENDP
