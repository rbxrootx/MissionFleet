// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A998D .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_004a998d_004A998D() {
    __asm {
        push edx
        wait
        ; Exact mapped bytes D9 3C 24: fnstcw word ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x3c
        __asm _emit 0x24
        mov eax, dword ptr [esp + 0ch]
        ; Exact mapped bytes 74 51: je 0x4a99e9
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 66 81 3C 24 7F 02: cmp word ptr [esp], 0x27f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 74 05: je 0x4a99a5
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 D0 A1 00 00: call 0x4b3b75
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 80000000h
        ; Exact mapped bytes 75 1F: jne 0x4a99cb
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes D9 FA: fsqrt
        __asm _emit 0xd9
        __asm _emit 0xfa
        ; Exact mapped bytes 83 3D EC EC 5D 00 00: cmp dword ptr [0x5decec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 43 A2 00 00: jne 0x4b3bfe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 5
        ; Exact mapped bytes 8D 0D 80 12 5D 00: lea ecx, [0x5d1280]
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E9 40 A2 00 00: jmp 0x4b3c0b
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 7ff00000h
        ; Exact mapped bytes 75 2C: jne 0x4a99fe
        __asm _emit 0x75
        __asm _emit 0x2c
        test eax, 0fffffh
        ; Exact mapped bytes 75 25: jne 0x4a99fe
        __asm _emit 0x75
        __asm _emit 0x25
        cmp dword ptr [esp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x4a99fe
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes EB CC: jmp 0x4a99ae
        __asm _emit 0xeb
        __asm _emit 0xcc
        ; Exact mapped bytes E8 A5 A1 00 00: call 0x4b3b8c
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x4a9a0b
        __asm _emit 0xeb
        __asm _emit 0x22
        test eax, 0fffffh
        ; Exact mapped bytes 75 F2: jne 0x4a99e2
        __asm _emit 0x75
        __asm _emit 0xf2
        cmp dword ptr [esp + 8], 0
        ; Exact mapped bytes 75 EB: jne 0x4a99e2
        __asm _emit 0x75
        __asm _emit 0xeb
        and eax, 80000000h
        ; Exact mapped bytes 74 B0: je 0x4a99ae
        __asm _emit 0x74
        __asm _emit 0xb0
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
        ; Exact mapped bytes 0F 85 E6 A1 00 00: jne 0x4b3bfe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 5
        ; Exact mapped bytes 8D 0D 80 12 5D 00: lea ecx, [0x5d1280]
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 EF A0 00 00: call 0x4b3b17
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        pop edx
        ret
    }
}
