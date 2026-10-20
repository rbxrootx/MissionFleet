// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A871 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_5886a871_5886A871() {
    __asm {
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes D9 FC: frndint
        __asm _emit 0xd9
        __asm _emit 0xfc
        ; Exact mapped bytes D8 D9: fcomp st(1)
        __asm _emit 0xd8
        __asm _emit 0xd9
        mov cl, 0
        wait
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        sahf
        ; Exact mapped bytes 75 17: jne 0x5886a896
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes DC 0D A4 53 8C 58: fmul qword ptr [0x588c53a4]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x53
        __asm _emit 0x8c
        __asm _emit 0x58
        inc cl
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes D9 FC: frndint
        __asm _emit 0xd9
        __asm _emit 0xfc
        ; Exact mapped bytes DE D9: fcompp
        __asm _emit 0xde
        __asm _emit 0xd9
        wait
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        sahf
        ; Exact mapped bytes 75 02: jne 0x5886a895
        __asm _emit 0x75
        __asm _emit 0x02
        inc cl
        ret
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ret
    }
}
