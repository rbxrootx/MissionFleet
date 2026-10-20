// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100AE0C0 .. +0xA38 bytes.
extern "C" __declspec(naked) void FUN_100ae0c0_100AE0C0() {
    __asm {
        push -1
        push 101719b0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 18h
        ; Exact mapped bytes 0F BF 44 24 34: movsx eax, word ptr [esp + 0x34]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 38h]
        push esi
        mov esi, dword ptr [esp + 38h]
        push edi
        xor ebx, ebx
        push 40h
        mov edi, ecx
        push ebx
        mov ecx, dword ptr [esp + 40h]
        push eax
        push ebp
        push esi
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 38h], edi
        ; Exact mapped bytes E8 AD 08 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        or byte ptr [edi + 24h], 20h
        mov dword ptr [edi + 50h], esi
        mov dword ptr [edi + 54h], ebp
        mov dword ptr [edi + 58h], 100h
        mov dword ptr [edi + 5ch], ebx
        push 54h
        mov dword ptr [esp + 34h], ebx
        mov dword ptr [edi], 101760fch
        ; Exact mapped bytes E8 78 E6 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe6
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 30h], 1
        ; Exact mapped bytes 74 22: je 0x100ae15c
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [esp + 44h]
        mov eax, dword ptr [esp + 3ch]
        push edx
        push ebx
        push ebx
        push ebp
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 61 08 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebx
        mov ecx, esi
        ; Exact mapped bytes EB 02: jmp 0x100ae15e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 34h], bl
        mov dword ptr [edi + 68h], ecx
        ; Exact mapped bytes E8 F1 0F 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x0f
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 68h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 21 E6 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe6
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 1ch], esi
        cmp esi, ebx
        mov byte ptr [esp + 30h], 2
        ; Exact mapped bytes 74 7C: je 0x100ae20d
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 98h
        ; Exact mapped bytes 7E 16: jle 0x100ae1b8
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x100ae1b8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [eax + 260h]
        mov dword ptr [esp + 38h], ecx
        ; Exact mapped bytes EB 04: jmp 0x100ae1bc
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 38h], ebx
        mov edx, dword ptr [esp + 44h]
        mov eax, dword ptr [esp + 3ch]
        push edx
        push ebx
        push ebx
        push ebp
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 DF 07 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [esi], 1017523ch
        cmp eax, ebx
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x100ae20f
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100ae20f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 54h
        mov byte ptr [esp + 34h], bl
        mov dword ptr [edi + 64h], esi
        ; Exact mapped bytes E8 83 E5 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xe5
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 30h], 3
        ; Exact mapped bytes 74 25: je 0x100ae254
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [esp + 44h]
        mov edx, dword ptr [esp + 3ch]
        add ecx, 0ah
        push ecx
        push ebx
        push ebx
        push ebp
        push edx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 69 07 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebx
        mov ecx, esi
        ; Exact mapped bytes EB 02: jmp 0x100ae256
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 34h], bl
        mov dword ptr [edi + 6ch], ecx
        ; Exact mapped bytes E8 F9 0E 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 6ch]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 29 E5 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe5
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 30h], 4
        ; Exact mapped bytes 74 25: je 0x100ae2ae
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [esp + 44h]
        mov ecx, dword ptr [esp + 3ch]
        add eax, 8
        push eax
        push ebx
        push ebx
        push ebp
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 0F 07 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebx
        mov ecx, esi
        ; Exact mapped bytes EB 02: jmp 0x100ae2b0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 34h], bl
        mov dword ptr [edi + 70h], ecx
        ; Exact mapped bytes E8 9F 0E 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 70h]
        push 0a0h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 CC E4 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe4
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 30h], 5
        ; Exact mapped bytes 74 56: je 0x100ae33a
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 21h
        ; Exact mapped bytes 7E 12: jle 0x100ae305
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100ae305
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 840h
        ; Exact mapped bytes EB 02: jmp 0x100ae307
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 44h]
        add edx, 64h
        push edx
        lea edx, [ebp + 0f8h]
        push edx
        mov edx, dword ptr [esp + 44h]
        add edx, 104h
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 88 8F F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x8f
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100ae33c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 34h], bl
        mov dword ptr [edi + 60h], eax
        ; Exact mapped bytes E8 11 0E 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 47 E4 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe4
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 30h], 6
        ; Exact mapped bytes 74 44: je 0x100ae3ad
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ah
        ; Exact mapped bytes 7E 12: jle 0x100ae38a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100ae38a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0a80h
        ; Exact mapped bytes EB 02: jmp 0x100ae38c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 8ah]
        push edx
        mov edx, dword ptr [esp + 40h]
        add edx, 0f3h
        push edx
        push 3
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 E7 0E 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x100ae3af
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [edi + 80h], esi
        mov ecx, dword ptr [esi + 40h]
        add eax, 0bb8h
        cmp ecx, ebx
        mov byte ptr [esp + 30h], bl
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100ae3d3
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 CD 0B 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x0b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100ae3e0
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 20 0B 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x0b
        __asm _emit 0x05
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 B9 E3 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe3
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 30h], 7
        ; Exact mapped bytes 74 2E: je 0x100ae427
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [esp + 44h]
        mov eax, dword ptr [esp + 3ch]
        add ecx, 64h
        lea edx, [ebp + 78h]
        push ecx
        push ebx
        push ebx
        add eax, 0b4h
        push edx
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 97 05 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100ae429
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 54h
        mov byte ptr [esp + 34h], bl
        mov dword ptr [edi + 74h], esi
        ; Exact mapped bytes E8 69 E3 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe3
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 30h], 8
        ; Exact mapped bytes 74 2E: je 0x100ae477
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [esp + 44h]
        mov eax, dword ptr [esp + 3ch]
        add ecx, 64h
        lea edx, [ebp + 0aah]
        push ecx
        push ebx
        push ebx
        add eax, 0b4h
        push edx
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 44 05 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100ae479
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov ecx, dword ptr [edi + 74h]
        push 101h
        mov byte ptr [esp + 34h], bl
        mov dword ptr [edi + 78h], esi
        ; Exact mapped bytes E8 D3 0C 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 74h]
        mov esi, 7fffh
        push 101h
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 78h]
        ; Exact mapped bytes E8 BA 0C 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 78h]
        mov ecx, 0fffbh
        push 101h
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [edi + 74h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 78h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 78h]
        ; Exact mapped bytes E8 93 0C 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 CC E2 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe2
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 30h], 9
        ; Exact mapped bytes 74 54: je 0x100ae53a
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [esp + 3ch]
        push ebx
        push ebx
        lea ecx, [ebp + 0e0h]
        push 0ffffffh
        push ecx
        lea edx, [eax + 1a4h]
        lea ecx, [ebp + 0c6h]
        push edx
        ; Exact mapped bytes 8B 15 98 56 1C 10: mov edx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 0dch
        push ecx
        push eax
        push edx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 65 76 F6 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x76
        __asm _emit 0xf6
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 34h], 0ah
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes E8 70 E2 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xe2
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 02: jmp 0x100ae53c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [edi + 7ch], esi
        mov ecx, dword ptr [esi + 40h]
        add eax, 64h
        cmp ecx, ebx
        mov byte ptr [esp + 30h], bl
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100ae55b
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 45 0A 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x0a
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100ae568
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 98 09 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 31 E2 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe2
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 1ch], esi
        cmp esi, ebx
        mov byte ptr [esp + 30h], 0bh
        ; Exact mapped bytes 74 7E: je 0x100ae5ff
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 20h
        ; Exact mapped bytes 7E 15: jle 0x100ae5a4
        __asm _emit 0x7e
        __asm _emit 0x15
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0B: je 0x100ae5a4
        __asm _emit 0x74
        __asm _emit 0x0b
        add eax, 800h
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes EB 04: jmp 0x100ae5a8
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 38h], ebx
        mov ecx, dword ptr [esp + 44h]
        mov edx, dword ptr [esp + 3ch]
        add ecx, 14h
        push ecx
        push ebx
        push ebx
        push ebp
        push edx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 F0 03 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [esi], 101751f8h
        cmp eax, ebx
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 2D: je 0x100ae601
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100ae601
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [edi + 84h], esi
        ; Exact mapped bytes 66 81 66 24 FB FF: and word ptr [esi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 84h]
        push 101h
        mov byte ptr [esp + 34h], bl
        ; Exact mapped bytes E8 3F 0B 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x0b
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [edi + 0e0h]
        lea edx, [edi + 8ch]
        add ebp, 49h
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esp + 18h], 0bh
        push 0fch
        ; Exact mapped bytes E8 52 E1 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xe1
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 30h], 0ch
        ; Exact mapped bytes 74 42: je 0x100ae6a0
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100ae682
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100ae682
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x100ae684
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 38h]
        push ecx
        mov ecx, dword ptr [esp + 40h]
        add ecx, 64h
        push ecx
        push 4
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 F4 0B 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x100ae6a2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov ebp, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 44h]
        mov byte ptr [esp + 30h], bl
        mov dword ptr [ebp - 4], esi
        mov ecx, dword ptr [esi + 40h]
        lea eax, [edx + 32h]
        cmp ecx, ebx
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100ae6c9
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 D7 08 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100ae6d6
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 2A 08 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push 101h
        ; Exact mapped bytes E8 7D 0A 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 B3 E0 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe0
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        cmp eax, ebx
        mov byte ptr [esp + 30h], 0dh
        ; Exact mapped bytes 74 42: je 0x100ae73f
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100ae721
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100ae721
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100ae723
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 38h]
        push edx
        mov edx, dword ptr [esp + 40h]
        add edx, 28h
        push edx
        push 3
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 55 0B 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x100ae741
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        ; Exact mapped bytes 66 8B 44 24 1C: mov ax, word ptr [esp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        mov dword ptr [ebp], esi
        mov ecx, dword ptr [esi + 40h]
        mov byte ptr [esp + 30h], bl
        cmp ecx, ebx
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100ae75e
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 42 08 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100ae76b
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 95 07 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push 101h
        ; Exact mapped bytes E8 E8 09 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 21 E0 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 24h], esi
        cmp esi, ebx
        mov byte ptr [esp + 30h], 0eh
        ; Exact mapped bytes 74 7E: je 0x100ae80f
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 23h
        ; Exact mapped bytes 7E 12: jle 0x100ae7b1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100ae7b1
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 8c0h]
        ; Exact mapped bytes EB 02: jmp 0x100ae7b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 44h]
        mov edx, dword ptr [esp + 38h]
        dec edx
        lea eax, [ecx + 32h]
        mov ecx, esi
        push eax
        mov eax, dword ptr [esp + 40h]
        push ebx
        push ebx
        add eax, 20h
        push edx
        push eax
        push edi
        ; Exact mapped bytes E8 DD 01 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100ae811
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [esi + 14h]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x100ae811
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [esp + 10h]
        mov byte ptr [esp + 30h], bl
        mov dword ptr [eax], esi
        ; Exact mapped bytes 66 81 66 24 FB FF: and word ptr [esi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 44h]
        add eax, 32h
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100ae83b
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 65 07 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100ae848
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 B8 06 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 51 DF 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xdf
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        cmp eax, ebx
        mov byte ptr [esp + 30h], 0fh
        ; Exact mapped bytes 74 52: je 0x100ae8b1
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 0b7h
        ; Exact mapped bytes 7E 12: jle 0x100ae883
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100ae883
        __asm _emit 0x74
        __asm _emit 0x08
        mov esi, dword ptr [ecx + 2dch]
        ; Exact mapped bytes EB 02: jmp 0x100ae885
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov ecx, dword ptr [esp + 44h]
        lea edx, [ecx + 32h]
        mov ecx, dword ptr [esp + 3ch]
        push edx
        mov edx, dword ptr [esp + 3ch]
        add edx, 3
        add ecx, 7eh
        push edx
        push ecx
        push esi
        push edi
        push ebx
        push 9c4h
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 B3 B6 F7 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb6
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x100ae8b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 44h]
        add eax, 32h
        mov byte ptr [esp + 30h], bl
        mov dword ptr [edx + 2ch], esi
        mov ecx, dword ptr [esi + 40h]
        cmp ecx, ebx
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100ae8d6
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 CA 06 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100ae8e3
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 1D 06 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 18h]
        add esi, 4
        add edx, 8
        add ecx, 10h
        dec eax
        mov dword ptr [esp + 10h], esi
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 0F 85 31 FD FF FF: jne 0x100ae644
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 70h
        ; Exact mapped bytes E8 86 DE 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xde
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 30h], 10h
        ; Exact mapped bytes 74 6E: je 0x100ae99a
        __asm _emit 0x74
        __asm _emit 0x6e
        mov eax, dword ptr [esp + 40h]
        push 40h
        ; Exact mapped bytes 8B 2D 98 56 1C 10: mov ebp, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [eax + 82h]
        add eax, 6ah
        push ecx
        mov ecx, dword ptr [esp + 44h]
        lea edx, [ecx + 0d4h]
        add ecx, 1ch
        push edx
        push eax
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 56 00 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 60h], 0ffffffh
        mov dword ptr [esi + 64h], ebx
        mov dword ptr [esi + 68h], ebx
        mov dword ptr [esi + 58h], 8
        mov dword ptr [esi + 5ch], 10h
        mov dword ptr [esi + 54h], ebx
        push 80h
        mov byte ptr [esp + 34h], 11h
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes E8 10 DE 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xde
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 02: jmp 0x100ae99c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov ebp, dword ptr [esp + 44h]
        mov dword ptr [edi + 138h], esi
        mov ecx, dword ptr [esi + 40h]
        mov byte ptr [esp + 30h], bl
        lea eax, [ebp + 32h]
        cmp ecx, ebx
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100ae9be
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 E2 05 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100ae9cb
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 35 05 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 40h]
        add ebp, 96h
        lea eax, [edi + 13ch]
        add ecx, 9bh
        mov dword ptr [esp + 1ch], ebp
        mov dword ptr [esp + 44h], eax
        mov dword ptr [esp + 40h], ecx
        mov dword ptr [esp + 38h], 8
        push 70h
        ; Exact mapped bytes E8 A4 DD 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xdd
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 24h], esi
        cmp esi, ebx
        mov byte ptr [esp + 30h], 12h
        ; Exact mapped bytes 74 68: je 0x100aea76
        __asm _emit 0x74
        __asm _emit 0x68
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 3ch]
        ; Exact mapped bytes 8B 2D 98 56 1C 10: mov ebp, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40h
        lea edx, [eax + 10h]
        push edx
        lea edx, [ecx + 0e4h]
        push edx
        add ecx, 1ch
        push eax
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 7A FF 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 60h], 0ffffffh
        mov dword ptr [esi + 64h], ebx
        mov dword ptr [esi + 68h], ebx
        mov dword ptr [esi + 58h], 8
        mov dword ptr [esi + 5ch], 10h
        mov dword ptr [esi + 54h], ebx
        push 80h
        mov byte ptr [esp + 34h], 13h
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes E8 34 DD 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xdd
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 02: jmp 0x100aea78
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [esp + 44h]
        ; Exact mapped bytes 66 8B 4C 24 1C: mov cx, word ptr [esp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        mov byte ptr [esp + 30h], bl
        mov dword ptr [eax], esi
        ; Exact mapped bytes 66 89 4E 26: mov word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 40h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100aea98
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 08 05 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100aeaa5
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 5B 04 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [esp + 44h]
        mov ecx, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 38h]
        add edx, 4
        add ecx, 0bh
        dec eax
        mov dword ptr [esp + 44h], edx
        mov dword ptr [esp + 40h], ecx
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 85 2B FF FF FF: jne 0x100ae9f5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 57 24: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 28h]
        and edx, 0e5f8h
        mov dword ptr [edi + 28h], ebx
        or dh, 5
        mov dword ptr [edi + 58h], ebx
        ; Exact mapped bytes 66 89 57 24: mov word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x24
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
