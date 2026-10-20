// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425663 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_00425663_00425663() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        ; Exact mapped bytes DD 05 38 00 44 00: fld qword ptr [0x440038]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        ; Exact mapped bytes DD 05 30 00 44 00: fld qword ptr [0x440030]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes DD 5D F0: fstp qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf0
        ; Exact mapped bytes DD 45 F0: fld qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes DC 75 F8: fdiv qword ptr [ebp - 8]
        __asm _emit 0xdc
        __asm _emit 0x75
        __asm _emit 0xf8
        ; Exact mapped bytes DC 4D F8: fmul qword ptr [ebp - 8]
        __asm _emit 0xdc
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes DC 6D F0: fsubr qword ptr [ebp - 0x10]
        __asm _emit 0xdc
        __asm _emit 0x6d
        __asm _emit 0xf0
        ; Exact mapped bytes DD 5D E8: fstp qword ptr [ebp - 0x18]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xe8
        ; Exact mapped bytes DD 45 E8: fld qword ptr [ebp - 0x18]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes DC 1D A0 FB 43 00: fcomp qword ptr [0x43fba0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        sahf
        ; Exact mapped bytes 76 05: jbe 0x42569d
        __asm _emit 0x76
        __asm _emit 0x05
        push 1
        pop eax
        leave
        ret
        xor eax, eax
        leave
        ret
    }
}
