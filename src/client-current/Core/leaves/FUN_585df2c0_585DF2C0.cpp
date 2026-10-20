// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585DF2C0 .. +0x2BC bytes.
extern "C" __declspec(naked) void FUN_585df2c0_585DF2C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 76 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x76
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7C 3D: jl 0x585df31d
        __asm _emit 0x7c
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 76 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x76
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 1bdh
        ; Exact mapped bytes 7F 2B: jg 0x585df31d
        __asm _emit 0x7f
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 CD EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xcd
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 291h
        ; Exact mapped bytes 7C 19: jl 0x585df31d
        __asm _emit 0x7c
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 CD EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xcd
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 300h
        ; Exact mapped bytes 7F 07: jg 0x585df31d
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 56 FF FF: call 0x585d4a10
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x585df37d
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 76 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x76
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 1beh
        ; Exact mapped bytes 7C 3D: jl 0x585df37b
        __asm _emit 0x7c
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 76 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x76
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 31bh
        ; Exact mapped bytes 7F 2B: jg 0x585df37b
        __asm _emit 0x7f
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 CD EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xcd
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 266h
        ; Exact mapped bytes 7C 19: jl 0x585df37b
        __asm _emit 0x7c
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 CD EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xcd
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 300h
        ; Exact mapped bytes 7F 07: jg 0x585df37b
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 4F: jmp 0x585df3cc
        __asm _emit 0xeb
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 76 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x76
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 1beh
        ; Exact mapped bytes 7C 3D: jl 0x585df3cc
        __asm _emit 0x7c
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 76 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x76
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 31bh
        ; Exact mapped bytes 7F 2B: jg 0x585df3cc
        __asm _emit 0x7f
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 CD EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 271h
        ; Exact mapped bytes 7C 19: jl 0x585df3cc
        __asm _emit 0x7c
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 CC EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xcc
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 300h
        ; Exact mapped bytes 7F 07: jg 0x585df3cc
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 75 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 31ch
        ; Exact mapped bytes 7C 3D: jl 0x585df41b
        __asm _emit 0x7c
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 75 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x75
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 400h
        ; Exact mapped bytes 7F 2B: jg 0x585df41b
        __asm _emit 0x7f
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 CC EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xcc
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 252h
        ; Exact mapped bytes 7C 19: jl 0x585df41b
        __asm _emit 0x7c
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 CC EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 300h
        ; Exact mapped bytes 7F 07: jg 0x585df41b
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2D: je 0x585df44e
        __asm _emit 0x74
        __asm _emit 0x2d
        push 3edh
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F D4 14 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd4
        __asm _emit 0x14
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 62 00 00: call 0x585e5670
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 7C 00 00: call 0x585e7130
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 29 01 00 00: jmp 0x585df577
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 75 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x75
        __asm _emit 0xea
        __asm _emit 0xff
        imul esi, eax, 3e8h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 A3 65 EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x65
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 3C 55 EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x55
        __asm _emit 0xea
        __asm _emit 0xff
        add esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 75 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x75
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 28 75 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x75
        __asm _emit 0xea
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 CC EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xcc
        __asm _emit 0xea
        __asm _emit 0xff
        imul esi, eax, 3e8h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 54 65 EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x65
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 5D 62 EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x62
        __asm _emit 0xeb
        __asm _emit 0xff
        add esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 74 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x74
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C9 CB EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xcb
        __asm _emit 0xea
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 14h], esi
        mov eax, dword ptr [ebp - 10h]
        imul eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, dword ptr [ebp - 14h]
        add eax, ecx
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes F2 0F 2A 45 F4: cvtsi2sd xmm0, dword ptr [ebp - 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf4
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 0F 1B 27 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x1b
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 77 1D 25 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x1d
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2bch
        ; Exact mapped bytes 7E 2A: jle 0x585df54f
        __asm _emit 0x7e
        __asm _emit 0x2a
        push 3edh
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B D3 14 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xd3
        __asm _emit 0x14
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 61 00 00: call 0x585e5670
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 7B 00 00: call 0x585e7130
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 28: jmp 0x585df577
        __asm _emit 0xeb
        __asm _emit 0x28
        push 3ech
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 D3 14 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0x14
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 61 00 00: call 0x585e5670
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA 7B 00 00: call 0x585e7130
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
