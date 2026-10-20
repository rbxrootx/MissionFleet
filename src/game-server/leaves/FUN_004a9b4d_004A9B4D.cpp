// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A9B4D .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_004a9b4d_004A9B4D() {
    __asm {
        push edx
        wait
        ; Exact mapped bytes D9 3C 24: fnstcw word ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x3c
        __asm _emit 0x24
        ; Exact mapped bytes 74 50: je 0x4a9ba4
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 66 81 3C 24 7F 02: cmp word ptr [esp], 0x27f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 74 06: je 0x4a9b62
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes D9 2D 58 C7 58 00: fldcw word ptr [0x58c758]
        __asm _emit 0xd9
        __asm _emit 0x2d
        __asm _emit 0x58
        __asm _emit 0xc7
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D9 FF: fcos
        __asm _emit 0xd9
        __asm _emit 0xff
        wait
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        sahf
        ; Exact mapped bytes 7A 1D: jp 0x4a9b87
        __asm _emit 0x7a
        __asm _emit 0x1d
        ; Exact mapped bytes 83 3D EC EC 5D 00 00: cmp dword ptr [0x5decec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 87 A0 00 00: jne 0x4b3bfe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 12h
        ; Exact mapped bytes 8D 0D 90 12 5D 00: lea ecx, [0x5d1290]
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E9 84 A0 00 00: jmp 0x4b3c0b
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DB 2D 5A C7 58 00: fld xword ptr [0x58c75a]
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0x5a
        __asm _emit 0xc7
        __asm _emit 0x58
        __asm _emit 0x00
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
        ; Exact mapped bytes 7A F8: jp 0x4a9b8f
        __asm _emit 0x7a
        __asm _emit 0xf8
        ; Exact mapped bytes DD D9: fstp st(1)
        __asm _emit 0xdd
        __asm _emit 0xd9
        ; Exact mapped bytes D9 FF: fcos
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes EB CD: jmp 0x4a9b6a
        __asm _emit 0xeb
        __asm _emit 0xcd
        ; Exact mapped bytes E8 EA 9F 00 00: call 0x4b3b8c
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x4a9bbf
        __asm _emit 0xeb
        __asm _emit 0x1b
        test eax, 0fffffh
        ; Exact mapped bytes 75 F2: jne 0x4a9b9d
        __asm _emit 0x75
        __asm _emit 0xf2
        cmp dword ptr [esp + 8], 0
        ; Exact mapped bytes 75 EB: jne 0x4a9b9d
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes DB 2D A0 18 5D 00: fld xword ptr [0x5d18a0]
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0xa0
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes 83 3D EC EC 5D 00 00: cmp dword ptr [0x5decec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 32 A0 00 00: jne 0x4b3bfe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 12h
        ; Exact mapped bytes 8D 0D 90 12 5D 00: lea ecx, [0x5d1290]
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 3B 9F 00 00: call 0x4b3b17
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        pop edx
        ret
    }
}
