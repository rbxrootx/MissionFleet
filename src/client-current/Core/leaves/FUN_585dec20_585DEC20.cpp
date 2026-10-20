// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585DEC20 .. +0x4B2 bytes.
extern "C" __declspec(naked) void FUN_585dec20_585DEC20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push esi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB 6A EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x6a
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 12ch
        ; Exact mapped bytes 74 41: je 0x585dec7d
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 6A EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 3f1h
        ; Exact mapped bytes 74 2F: je 0x585dec7d
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 6A EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x6a
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 1F: je 0x585dec7d
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 6A EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x6a
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 74 0F: je 0x585dec7d
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 6A EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x6a
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x585dec82
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 4B 04 00 00: jmp 0x585df0cd
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 7D EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x7d
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7C 3D: jl 0x585decd5
        __asm _emit 0x7c
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 7D EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x7d
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 1bdh
        ; Exact mapped bytes 7F 2B: jg 0x585decd5
        __asm _emit 0x7f
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB D3 EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd3
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 291h
        ; Exact mapped bytes 7C 19: jl 0x585decd5
        __asm _emit 0x7c
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 D3 EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 300h
        ; Exact mapped bytes 7F 07: jg 0x585decd5
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
        ; Exact mapped bytes E8 30 5D FF FF: call 0x585d4a10
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x585ded35
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 7C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x7c
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 1beh
        ; Exact mapped bytes 7C 3D: jl 0x585ded33
        __asm _emit 0x7c
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 7C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x7c
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 31bh
        ; Exact mapped bytes 7F 2B: jg 0x585ded33
        __asm _emit 0x7f
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D D3 EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xd3
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 266h
        ; Exact mapped bytes 7C 19: jl 0x585ded33
        __asm _emit 0x7c
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B D3 EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd3
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 300h
        ; Exact mapped bytes 7F 07: jg 0x585ded33
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 4F: jmp 0x585ded84
        __asm _emit 0xeb
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 7C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 1beh
        ; Exact mapped bytes 7C 3D: jl 0x585ded84
        __asm _emit 0x7c
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 7C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x7c
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 31bh
        ; Exact mapped bytes 7F 2B: jg 0x585ded84
        __asm _emit 0x7f
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C D3 EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd3
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 271h
        ; Exact mapped bytes 7C 19: jl 0x585ded84
        __asm _emit 0x7c
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A D3 EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xd3
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 300h
        ; Exact mapped bytes 7F 07: jg 0x585ded84
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
        ; Exact mapped bytes E8 31 7C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x7c
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 31ch
        ; Exact mapped bytes 7C 3D: jl 0x585dedd3
        __asm _emit 0x7c
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 7C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x7c
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 400h
        ; Exact mapped bytes 7F 2B: jg 0x585dedd3
        __asm _emit 0x7f
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD D2 EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd2
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 252h
        ; Exact mapped bytes 7C 19: jl 0x585dedd3
        __asm _emit 0x7c
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB D2 EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd2
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 300h
        ; Exact mapped bytes 7F 07: jg 0x585dedd3
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 44: je 0x585dee1d
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 220cch]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E8 70 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 220cch]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C9 70 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x70
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B0 02 00 00: jmp 0x585df0cd
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 7B EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x7b
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 61 44 FF FF: call 0x585d3290
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585dee44
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 7B EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x7b
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EA D5 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xd5
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 83 5B EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x5b
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 0A: shr dx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 0F 84 59 02 00 00: je 0x585df0cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 7B EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x7b
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 22 39 FF FF: call 0x585d27b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        cmp edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 85 2E 02 00 00: jne 0x585df0c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 7B EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x7b
        __asm _emit 0xea
        __asm _emit 0xff
        imul esi, eax, 3e8h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 57 6B EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x6b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 F0 5A EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x5a
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
        ; Exact mapped bytes E8 E3 7A EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x7a
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DC 7A EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x7a
        __asm _emit 0xea
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 1ch], esi
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC D1 EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd1
        __asm _emit 0xea
        __asm _emit 0xff
        imul esi, eax, 3e8h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 08 6B EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 11 68 EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x68
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
        ; Exact mapped bytes E8 94 7A EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x7a
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7D D1 EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd1
        __asm _emit 0xea
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 20h], esi
        mov eax, dword ptr [ebp - 1ch]
        imul eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 20h]
        imul ecx, dword ptr [ebp - 20h]
        add eax, ecx
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes F2 0F 2A 45 F0: cvtsi2sd xmm0, dword ptr [ebp - 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 C3 20 27 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x20
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 2B 23 25 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x23
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        imul edx, dword ptr [ebp - 24h], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + edx + 22064h]
        ; Exact mapped bytes 0F 86 A6 00 00 00: jbe 0x585df025
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 67 EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x67
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 3e9h
        ; Exact mapped bytes 74 14: je 0x585defaa
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 14h], 3ech
        ; Exact mapped bytes 74 1E: je 0x585defbd
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp - 14h], 3efh
        ; Exact mapped bytes 74 28: je 0x585defd0
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes EB 37: jmp 0x585defe1
        __asm _emit 0xeb
        __asm _emit 0x37
        push 3eah
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 D9 14 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd9
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 24: jmp 0x585defe1
        __asm _emit 0xeb
        __asm _emit 0x24
        push 3edh
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 D9 14 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd9
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 11: jmp 0x585defe1
        __asm _emit 0xeb
        __asm _emit 0x11
        push 3f0h
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 D8 14 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xd8
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 220cch]
        mov dword ptr [ebp - 34h], edx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E0 6E EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x6e
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 220cch]
        mov dword ptr [ebp - 38h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C1 6E EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x6e
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x585df0c6
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 67 EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x67
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 3eah
        ; Exact mapped bytes 74 14: je 0x585df050
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 18h], 3edh
        ; Exact mapped bytes 74 1E: je 0x585df063
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp - 18h], 3f0h
        ; Exact mapped bytes 74 28: je 0x585df076
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes EB 37: jmp 0x585df087
        __asm _emit 0xeb
        __asm _emit 0x37
        push 3e9h
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 D8 14 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xd8
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 24: jmp 0x585df087
        __asm _emit 0xeb
        __asm _emit 0x24
        push 3ech
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D D8 14 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd8
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 11: jmp 0x585df087
        __asm _emit 0xeb
        __asm _emit 0x11
        push 3efh
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A D8 14 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd8
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 220cch]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 3A 6E EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x6e
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 220cch]
        mov dword ptr [ebp - 40h], eax
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 1B 6E EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x6e
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x585df0cd
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 6E FD FF FF: jmp 0x585dee3b
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
