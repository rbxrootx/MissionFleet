// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886BB1F .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_5886bb1f_5886BB1F() {
    __asm {
        lea edx, [esp + 4]
        ; Exact mapped bytes E8 0D E9 FF FF: call 0x5886a435
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        push edx
        wait
        ; Exact mapped bytes D9 3C 24: fnstcw word ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x3c
        __asm _emit 0x24
        ; Exact mapped bytes 74 49: je 0x5886bb78
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 66 81 3C 24 7F 02: cmp word ptr [esp], 0x27f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 74 06: je 0x5886bb3d
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes D9 2D 48 53 8C 58: fldcw word ptr [0x588c5348]
        __asm _emit 0xd9
        __asm _emit 0x2d
        __asm _emit 0x48
        __asm _emit 0x53
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes D9 FF: fcos
        __asm _emit 0xd9
        __asm _emit 0xff
        wait
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        sahf
        ; Exact mapped bytes 7A 1D: jp 0x5886bb62
        __asm _emit 0x7a
        __asm _emit 0x1d
        ; Exact mapped bytes 83 3D 74 9C 96 58 00: cmp dword ptr [0x58969c74], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 3C E9 FF FF: jne 0x5886a48e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 12h
        ; Exact mapped bytes 8D 0D 50 56 8C 58: lea ecx, [0x588c5650]
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes E9 39 E9 FF FF: jmp 0x5886a49b
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DB 2D 4A 53 8C 58: fld xword ptr [0x588c534a]
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0x4a
        __asm _emit 0x53
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes D9 F5: fprem1
        __asm _emit 0xd9
        __asm _emit 0xf5
        wait
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        sahf
        ; Exact mapped bytes 7A F8: jp 0x5886bb6a
        __asm _emit 0x7a
        __asm _emit 0xf8
        ; Exact mapped bytes DD D9: fstp st(1)
        __asm _emit 0xdd
        __asm _emit 0xd9
        ; Exact mapped bytes D9 FF: fcos
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes EB CD: jmp 0x5886bb45
        __asm _emit 0xeb
        __asm _emit 0xcd
        test eax, 0fffffh
        ; Exact mapped bytes 75 31: jne 0x5886bbb0
        __asm _emit 0x75
        __asm _emit 0x31
        cmp dword ptr [esp + 8], 0
        ; Exact mapped bytes 75 2A: jne 0x5886bbb0
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes DB 2D E0 AB 8C 58: fld xword ptr [0x588cabe0]
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0xe0
        __asm _emit 0xab
        __asm _emit 0x8c
        __asm _emit 0x58
        mov eax, 1
        ; Exact mapped bytes 83 3D 74 9C 96 58 00: cmp dword ptr [0x58969c74], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 EE E8 FF FF: jne 0x5886a48e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 12h
        ; Exact mapped bytes 8D 0D 50 56 8C 58: lea ecx, [0x588c5650]
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 C6 00 00: call 0x58878217
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        pop edx
        ret
    }
}
