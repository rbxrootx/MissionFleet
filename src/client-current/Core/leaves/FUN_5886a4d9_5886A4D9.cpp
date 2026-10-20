// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A4D9 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_5886a4d9_5886A4D9() {
    __asm {
        sub esp, 8
        ; Exact mapped bytes DD 14 24: fst qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x14
        __asm _emit 0x24
        mov eax, dword ptr [esp + 4]
        add esp, 8
        and eax, 7ff00000h
        ; Exact mapped bytes 74 3D: je 0x5886a52a
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp eax, 7ff00000h
        ; Exact mapped bytes 74 5F: je 0x5886a553
        __asm _emit 0x74
        __asm _emit 0x5f
        ; Exact mapped bytes 66 8B 04 24: mov ax, word ptr [esp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes 66 3D 7F 02: cmp ax, 0x27f
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 74 2A: je 0x5886a528
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 66 83 E0 20: and ax, 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x20
        ; Exact mapped bytes 75 21: jne 0x5886a525
        __asm _emit 0x75
        __asm _emit 0x21
        wait
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes 66 83 E0 20: and ax, 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x20
        ; Exact mapped bytes 74 18: je 0x5886a525
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, 8
        cmp edx, 1dh
        ; Exact mapped bytes 74 07: je 0x5886a51e
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 FB DC 00 00: call 0x58878217
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        pop edx
        ret
        ; Exact mapped bytes E8 DD DC 00 00: call 0x58878200
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        pop edx
        ret
        ; Exact mapped bytes D9 2C 24: fldcw word ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x2c
        __asm _emit 0x24
        pop edx
        ret
        ; Exact mapped bytes DD 05 6C 53 8C 58: fld qword ptr [0x588c536c]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x6c
        __asm _emit 0x53
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes D9 FD: fscale
        __asm _emit 0xd9
        __asm _emit 0xfd
        ; Exact mapped bytes DD D9: fstp st(1)
        __asm _emit 0xdd
        __asm _emit 0xd9
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes D9 E1: fabs
        __asm _emit 0xd9
        __asm _emit 0xe1
        ; Exact mapped bytes DC 1D 5C 53 8C 58: fcomp qword ptr [0x588c535c]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x53
        __asm _emit 0x8c
        __asm _emit 0x58
        wait
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        sahf
        mov eax, 4
        ; Exact mapped bytes 73 C7: jae 0x5886a512
        __asm _emit 0x73
        __asm _emit 0xc7
        ; Exact mapped bytes DC 0D 7C 53 8C 58: fmul qword ptr [0x588c537c]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x53
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes EB BF: jmp 0x5886a512
        __asm _emit 0xeb
        __asm _emit 0xbf
        ; Exact mapped bytes DD 05 64 53 8C 58: fld qword ptr [0x588c5364]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x53
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes D9 FD: fscale
        __asm _emit 0xd9
        __asm _emit 0xfd
        ; Exact mapped bytes DD D9: fstp st(1)
        __asm _emit 0xdd
        __asm _emit 0xd9
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes D9 E1: fabs
        __asm _emit 0xd9
        __asm _emit 0xe1
        ; Exact mapped bytes DC 1D 54 53 8C 58: fcomp qword ptr [0x588c5354]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x53
        __asm _emit 0x8c
        __asm _emit 0x58
        wait
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        sahf
        mov eax, 3
        ; Exact mapped bytes 76 9E: jbe 0x5886a512
        __asm _emit 0x76
        __asm _emit 0x9e
        ; Exact mapped bytes DC 0D 74 53 8C 58: fmul qword ptr [0x588c5374]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x53
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes EB 96: jmp 0x5886a512
        __asm _emit 0xeb
        __asm _emit 0x96
    }
}
