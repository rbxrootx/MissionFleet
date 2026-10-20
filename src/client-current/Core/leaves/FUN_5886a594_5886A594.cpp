// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A594 .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_5886a594_5886A594() {
    __asm {
        push edx
        wait
        ; Exact mapped bytes D9 3C 24: fnstcw word ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x3c
        __asm _emit 0x24
        mov eax, dword ptr [esp + 0ch]
        ; Exact mapped bytes 74 51: je 0x5886a5f0
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 66 81 3C 24 7F 02: cmp word ptr [esp], 0x27f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 74 05: je 0x5886a5ac
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 59 FE FF FF: call 0x5886a405
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, 80000000h
        ; Exact mapped bytes 75 1F: jne 0x5886a5d2
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes D9 FA: fsqrt
        __asm _emit 0xd9
        __asm _emit 0xfa
        ; Exact mapped bytes 83 3D 74 9C 96 58 00: cmp dword ptr [0x58969c74], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 CC FE FF FF: jne 0x5886a48e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 5
        ; Exact mapped bytes 8D 0D 90 53 8C 58: lea ecx, [0x588c5390]
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x53
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes E9 C9 FE FF FF: jmp 0x5886a49b
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, 7ff00000h
        ; Exact mapped bytes 75 2C: jne 0x5886a605
        __asm _emit 0x75
        __asm _emit 0x2c
        test eax, 0fffffh
        ; Exact mapped bytes 75 25: jne 0x5886a605
        __asm _emit 0x75
        __asm _emit 0x25
        cmp dword ptr [esp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x5886a605
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes EB CC: jmp 0x5886a5b5
        __asm _emit 0xeb
        __asm _emit 0xcc
        ; Exact mapped bytes E8 2E FE FF FF: call 0x5886a41c
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 22: jmp 0x5886a612
        __asm _emit 0xeb
        __asm _emit 0x22
        test eax, 0fffffh
        ; Exact mapped bytes 75 F2: jne 0x5886a5e9
        __asm _emit 0x75
        __asm _emit 0xf2
        cmp dword ptr [esp + 8], 0
        ; Exact mapped bytes 75 EB: jne 0x5886a5e9
        __asm _emit 0x75
        __asm _emit 0xeb
        and eax, 80000000h
        ; Exact mapped bytes 74 B0: je 0x5886a5b5
        __asm _emit 0x74
        __asm _emit 0xb0
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
        ; Exact mapped bytes 0F 85 6F FE FF FF: jne 0x5886a48e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 5
        ; Exact mapped bytes 8D 0D 90 53 8C 58: lea ecx, [0x588c5390]
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x53
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 DB 00 00: call 0x58878217
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        pop edx
        ret
    }
}
