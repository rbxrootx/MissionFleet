// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588717FF .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_588717ff_588717FF() {
    __asm {
        lea edx, [esp + 4]
        ; Exact mapped bytes E8 2D 8C FF FF: call 0x5886a435
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        push edx
        wait
        ; Exact mapped bytes D9 3C 24: fnstcw word ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x3c
        __asm _emit 0x24
        ; Exact mapped bytes 74 4C: je 0x5887185b
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [esp + 0ch]
        ; Exact mapped bytes 66 81 3C 24 7F 02: cmp word ptr [esp], 0x27f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 74 06: je 0x58871821
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes D9 2D 48 53 8C 58: fldcw word ptr [0x588c5348]
        __asm _emit 0xd9
        __asm _emit 0x2d
        __asm _emit 0x48
        __asm _emit 0x53
        __asm _emit 0x8c
        __asm _emit 0x58
        test eax, 7ff00000h
        ; Exact mapped bytes 74 5E: je 0x58871886
        __asm _emit 0x74
        __asm _emit 0x5e
        test eax, 80000000h
        ; Exact mapped bytes 75 41: jne 0x58871870
        __asm _emit 0x75
        __asm _emit 0x41
        ; Exact mapped bytes D9 EC: fldlg2
        __asm _emit 0xd9
        __asm _emit 0xec
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes D9 F1: fyl2x
        __asm _emit 0xd9
        __asm _emit 0xf1
        ; Exact mapped bytes 83 3D 74 9C 96 58 00: cmp dword ptr [0x58969c74], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 4C 8C FF FF: jne 0x5886a48e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 0D 20 62 8C 58: lea ecx, [0x588c6220]
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x58
        mov edx, 1bh
        ; Exact mapped bytes E9 49 8C FF FF: jmp 0x5886a49b
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, 80000000h
        ; Exact mapped bytes 75 17: jne 0x58871870
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes EB D4: jmp 0x5887182f
        __asm _emit 0xeb
        __asm _emit 0xd4
        test eax, 0fffffh
        ; Exact mapped bytes 75 1D: jne 0x5887187f
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [esp + 8], 0
        ; Exact mapped bytes 75 16: jne 0x5887187f
        __asm _emit 0x75
        __asm _emit 0x16
        and eax, 80000000h
        ; Exact mapped bytes 74 C5: je 0x58871835
        __asm _emit 0x74
        __asm _emit 0xc5
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
        ; Exact mapped bytes EB 22: jmp 0x588718a1
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 98 8B FF FF: call 0x5886a41c
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1B: jmp 0x588718a1
        __asm _emit 0xeb
        __asm _emit 0x1b
        test eax, 0fffffh
        ; Exact mapped bytes 75 C5: jne 0x58871852
        __asm _emit 0x75
        __asm _emit 0xc5
        cmp dword ptr [esp + 8], 0
        ; Exact mapped bytes 75 BE: jne 0x58871852
        __asm _emit 0x75
        __asm _emit 0xbe
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes DB 2D 2A AC 8C 58: fld xword ptr [0x588cac2a]
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0x2a
        __asm _emit 0xac
        __asm _emit 0x8c
        __asm _emit 0x58
        mov eax, 2
        ; Exact mapped bytes 83 3D 74 9C 96 58 00: cmp dword ptr [0x58969c74], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 E0 8B FF FF: jne 0x5886a48e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 0D 20 62 8C 58: lea ecx, [0x588c6220]
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x58
        mov edx, 1bh
        ; Exact mapped bytes E8 59 69 00 00: call 0x58878217
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        pop edx
        ret
    }
}
