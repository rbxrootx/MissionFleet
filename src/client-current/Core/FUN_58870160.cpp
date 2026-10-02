// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58870160 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_58870160() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        sub esp, 0ch
        test cl, 1
        ; Exact mapped bytes 74 0A: je 0x5887017a
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes DB 2D 60 60 8C 58: fld xword ptr [0x588c6060]
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes DB 5D FC: fistp dword ptr [ebp - 4]
        __asm _emit 0xdb
        __asm _emit 0x5d
        __asm _emit 0xfc
        wait
        test cl, 8
        ; Exact mapped bytes 74 10: je 0x5887018f
        __asm _emit 0x74
        __asm _emit 0x10
        wait
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes DB 2D 60 60 8C 58: fld xword ptr [0x588c6060]
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes DD 5D F4: fstp qword ptr [ebp - 0xc]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf4
        wait
        wait
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test cl, 10h
        ; Exact mapped bytes 74 0A: je 0x5887019e
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes DB 2D 6C 60 8C 58: fld xword ptr [0x588c606c]
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0x6c
        __asm _emit 0x60
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes DD 5D F4: fstp qword ptr [ebp - 0xc]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf4
        wait
        test cl, 4
        ; Exact mapped bytes 74 09: je 0x588701ac
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes D9 EE: fldz
        __asm _emit 0xd9
        __asm _emit 0xee
        ; Exact mapped bytes D9 E8: fld1
        __asm _emit 0xd9
        __asm _emit 0xe8
        ; Exact mapped bytes DE F1: fdivrp st(1)
        __asm _emit 0xde
        __asm _emit 0xf1
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        wait
        test cl, 20h
        ; Exact mapped bytes 74 06: je 0x588701b7
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes D9 EB: fldpi
        __asm _emit 0xd9
        __asm _emit 0xeb
        ; Exact mapped bytes DD 5D F4: fstp qword ptr [ebp - 0xc]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf4
        wait
        mov esp, ebp
        pop ebp
        ret
    }
}
