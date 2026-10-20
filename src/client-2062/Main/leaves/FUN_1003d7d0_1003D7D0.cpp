// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003D7D0 .. +0x212 bytes.
extern "C" __declspec(naked) void FUN_1003d7d0_1003D7D0() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff8h
        sub esp, 8
        ; Exact mapped bytes DB 45 0C: fild dword ptr [ebp + 0xc]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes DD 5C 24 00: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DB 45 08: fild dword ptr [ebp + 8]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes DD 5C 24 00: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 74 24 00: fdiv qword ptr [esp]
        __asm _emit 0xdc
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DD 5C 24 00: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D F0 58 17 10: fcomp qword ptr [0x101758f0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 07: je 0x1003d80b
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A1 01 00 00: jmp 0x1003d9ac
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D E8 58 17 10: fcomp qword ptr [0x101758e8]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 0A: je 0x1003d826
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 32h
        ; Exact mapped bytes E9 86 01 00 00: jmp 0x1003d9ac
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D E0 58 17 10: fcomp qword ptr [0x101758e0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 0A: je 0x1003d841
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 64h
        ; Exact mapped bytes E9 6B 01 00 00: jmp 0x1003d9ac
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D D8 58 17 10: fcomp qword ptr [0x101758d8]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xd8
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 0A: je 0x1003d85c
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 96h
        ; Exact mapped bytes E9 50 01 00 00: jmp 0x1003d9ac
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D D0 58 17 10: fcomp qword ptr [0x101758d0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xd0
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 0A: je 0x1003d877
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 0c8h
        ; Exact mapped bytes E9 35 01 00 00: jmp 0x1003d9ac
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D C8 58 17 10: fcomp qword ptr [0x101758c8]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 0A: je 0x1003d892
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 0fah
        ; Exact mapped bytes E9 1A 01 00 00: jmp 0x1003d9ac
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D C0 58 17 10: fcomp qword ptr [0x101758c0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 0A: je 0x1003d8ad
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 12ch
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x1003d9ac
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D B8 58 17 10: fcomp qword ptr [0x101758b8]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xb8
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 0A: je 0x1003d8c8
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 15eh
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x1003d9ac
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D B0 58 17 10: fcomp qword ptr [0x101758b0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xb0
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 0A: je 0x1003d8e3
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 190h
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x1003d9ac
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D A8 58 17 10: fcomp qword ptr [0x101758a8]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 0A: je 0x1003d8fe
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1c2h
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x1003d9ac
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D A0 58 17 10: fcomp qword ptr [0x101758a0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 0A: je 0x1003d919
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1f4h
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x1003d9ac
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D 98 58 17 10: fcomp qword ptr [0x10175898]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x98
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 07: je 0x1003d931
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 226h
        ; Exact mapped bytes EB 7B: jmp 0x1003d9ac
        __asm _emit 0xeb
        __asm _emit 0x7b
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D 90 58 17 10: fcomp qword ptr [0x10175890]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 07: je 0x1003d949
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 258h
        ; Exact mapped bytes EB 63: jmp 0x1003d9ac
        __asm _emit 0xeb
        __asm _emit 0x63
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D 88 58 17 10: fcomp qword ptr [0x10175888]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 07: je 0x1003d961
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 28ah
        ; Exact mapped bytes EB 4B: jmp 0x1003d9ac
        __asm _emit 0xeb
        __asm _emit 0x4b
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D 80 58 17 10: fcomp qword ptr [0x10175880]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x80
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 07: je 0x1003d979
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 2bch
        ; Exact mapped bytes EB 33: jmp 0x1003d9ac
        __asm _emit 0xeb
        __asm _emit 0x33
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D 78 58 17 10: fcomp qword ptr [0x10175878]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x78
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 07: je 0x1003d991
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 2eeh
        ; Exact mapped bytes EB 1B: jmp 0x1003d9ac
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes DD 44 24 00: fld qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D 70 58 17 10: fcomp qword ptr [0x10175870]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x70
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        mov eax, 320h
        ; Exact mapped bytes 75 05: jne 0x1003d9ac
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 352h
        cmp eax, 384h
        mov edx, eax
        ; Exact mapped bytes 7D 20: jge 0x1003d9d5
        __asm _emit 0x7d
        __asm _emit 0x20
        lea ecx, [eax*8 + 101a8770h]
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        ; Exact mapped bytes DC 5C 24 00: fcomp qword ptr [esp]
        __asm _emit 0xdc
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 74 13: je 0x1003d9dc
        __asm _emit 0x74
        __asm _emit 0x13
        add ecx, 8
        inc edx
        cmp ecx, 101aa390h
        ; Exact mapped bytes 7C E7: jl 0x1003d9bc
        __asm _emit 0x7c
        __asm _emit 0xe7
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
        mov eax, edx
        mov esp, ebp
        pop ebp
        ret
    }
}
