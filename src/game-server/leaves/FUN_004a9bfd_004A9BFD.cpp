// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A9BFD .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_004a9bfd_004A9BFD() {
    __asm {
        push edx
        wait
        ; Exact mapped bytes D9 3C 24: fnstcw word ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x3c
        __asm _emit 0x24
        ; Exact mapped bytes 74 43: je 0x4a9c47
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [esp + 0ch]
        ; Exact mapped bytes 66 81 3C 24 7F 02: cmp word ptr [esp], 0x27f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 74 06: je 0x4a9c16
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes D9 2D 58 C7 58 00: fldcw word ptr [0x58c758]
        __asm _emit 0xd9
        __asm _emit 0x2d
        __asm _emit 0x58
        __asm _emit 0xc7
        __asm _emit 0x58
        __asm _emit 0x00
        test eax, 7ff00000h
        ; Exact mapped bytes 74 55: je 0x4a9c72
        __asm _emit 0x74
        __asm _emit 0x55
        test eax, 80000000h
        ; Exact mapped bytes 75 38: jne 0x4a9c5c
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes D9 ED: fldln2
        __asm _emit 0xd9
        __asm _emit 0xed
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes D9 F1: fyl2x
        __asm _emit 0xd9
        __asm _emit 0xf1
        ; Exact mapped bytes 83 3D EC EC 5D 00 00: cmp dword ptr [0x5decec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 C7 9F 00 00: jne 0x4b3bfe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 0D A0 12 5D 00: lea ecx, [0x5d12a0]
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, 1ah
        ; Exact mapped bytes E9 C4 9F 00 00: jmp 0x4b3c0b
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 0fffffh
        ; Exact mapped bytes 75 1D: jne 0x4a9c6b
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [esp + 8], 0
        ; Exact mapped bytes 75 16: jne 0x4a9c6b
        __asm _emit 0x75
        __asm _emit 0x16
        and eax, 80000000h
        ; Exact mapped bytes 74 CE: je 0x4a9c2a
        __asm _emit 0x74
        __asm _emit 0xce
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
        ; Exact mapped bytes EB 22: jmp 0x4a9c8d
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 1C 9F 00 00: call 0x4b3b8c
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x4a9c8d
        __asm _emit 0xeb
        __asm _emit 0x1b
        test eax, 0fffffh
        ; Exact mapped bytes 75 AB: jne 0x4a9c24
        __asm _emit 0x75
        __asm _emit 0xab
        cmp dword ptr [esp + 8], 0
        ; Exact mapped bytes 75 A4: jne 0x4a9c24
        __asm _emit 0x75
        __asm _emit 0xa4
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes DB 2D EA 18 5D 00: fld xword ptr [0x5d18ea]
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0xea
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, 2
        ; Exact mapped bytes 83 3D EC EC 5D 00 00: cmp dword ptr [0x5decec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 64 9F 00 00: jne 0x4b3bfe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 0D A0 12 5D 00: lea ecx, [0x5d12a0]
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, 1ah
        ; Exact mapped bytes E8 6D 9E 00 00: call 0x4b3b17
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        pop edx
        ret
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        push ebp
        mov ebp, esp
        sub esp, 0d8h
    }
}
