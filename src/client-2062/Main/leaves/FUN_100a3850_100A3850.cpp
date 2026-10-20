// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A3850 .. +0xF55 bytes.
extern "C" __declspec(naked) void FUN_100a3850_100A3850() {
    __asm {
        push -1
        push 1017141ch
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
        push ecx
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 20h]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        push eax
        mov ecx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 30h]
        push edx
        mov edx, dword ptr [esp + 30h]
        push eax
        push ecx
        push edx
        mov ecx, edi
        mov dword ptr [esp + 28h], edi
        ; Exact mapped bytes E8 BB 3C FA FF: call 0x10047550
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [edi], 10176070h
        ; Exact mapped bytes E8 F8 8E 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 74: je 0x100a392e
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 158h
        ; Exact mapped bytes 7E 12: jle 0x100a38dd
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a38dd
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 560h]
        ; Exact mapped bytes EB 02: jmp 0x100a38df
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push ebx
        push ebx
        push eax
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 BB B0 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a3930
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [esi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100a3930
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 0fffffeffh
        mov ecx, esi
        mov byte ptr [esp + 20h], bl
        mov dword ptr [edi + 88h], esi
        ; Exact mapped bytes E8 1A B8 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 88h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 47 8E 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 74: je 0x100a39df
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 157h
        ; Exact mapped bytes 7E 12: jle 0x100a398e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a398e
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 55ch]
        ; Exact mapped bytes EB 02: jmp 0x100a3990
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        push ebx
        push ebx
        push ecx
        push edx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 0A B0 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a39e1
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [esi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [esi + 14h]
        mov dword ptr [esi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x100a39e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov ebp, dword ptr [esp + 28h]
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [edi + 84h], esi
        ; Exact mapped bytes E8 AA 8D 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 28: je 0x100a3a30
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        add edx, 9ah
        push ebx
        lea eax, [ebp + 5ch]
        push edx
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 8D AF 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebx
        mov ecx, esi
        ; Exact mapped bytes EB 02: jmp 0x100a3a32
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [edi + 8ch], ecx
        ; Exact mapped bytes E8 1A B7 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8ch]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 47 8D 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 26: je 0x100a3a91
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        add ecx, 148h
        push ebx
        lea edx, [ebp + 6ah]
        push ecx
        push edx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 2A AF 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100a3a93
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [edi + 94h], esi
        ; Exact mapped bytes 66 81 66 24 FF 7F: and word ptr [esi + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [edi + 94h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes E8 AD B6 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 E6 8C 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 25: je 0x100a3af1
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push ebx
        add eax, 148h
        push ebx
        lea ecx, [ebp + 6ah]
        push eax
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 CA AE 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100a3af3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [edi + 94h]
        mov dword ptr [edi + 90h], esi
        push 101h
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [edi + 90h]
        ; Exact mapped bytes E8 47 B6 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 7D 8C 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 45: je 0x100a3b78
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100a3b57
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a3b57
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100a3b59
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov esi, dword ptr [esp + 2ch]
        lea edx, [esi + 15bh]
        push edx
        lea edx, [ebp + 271h]
        push edx
        push 8
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 1A B7 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x100a3b7e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov esi, dword ptr [esp + 2ch]
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [edi + 5bch], eax
        ; Exact mapped bytes E8 CC B5 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 5bch]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 F6 8B 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 41: je 0x100a3bfb
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100a3bde
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a3bde
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100a3be0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [esi + 16ah]
        push edx
        lea edx, [ebp + 271h]
        push edx
        push 8
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 97 B6 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a3bfd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [edi + 5b8h], eax
        ; Exact mapped bytes E8 4D B5 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 5b8h]
        push 0a0h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 77 8B 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 54: je 0x100a3c8d
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1ah
        ; Exact mapped bytes 7E 12: jle 0x100a3c5a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a3c5a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 680h
        ; Exact mapped bytes EB 02: jmp 0x100a3c5c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 57 26: mov dx, word ptr [edi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 66 81 C2 E8 03: add dx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        push edx
        lea edx, [esi + 1ech]
        push edx
        lea edx, [ebp + 200h]
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
        ; Exact mapped bytes E8 35 36 F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x36
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a3c8f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [edi + 98h], eax
        ; Exact mapped bytes E8 BB B4 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 98h]
        push 0a0h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 E5 8A 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 4C: je 0x100a3d17
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1bh
        ; Exact mapped bytes 7E 12: jle 0x100a3cec
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a3cec
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 6c0h
        ; Exact mapped bytes EB 02: jmp 0x100a3cee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        add esi, 1ech
        push 40h
        lea edx, [ebp + 261h]
        push esi
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
        ; Exact mapped bytes E8 AB 35 F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x35
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a3d19
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [edi + 9ch], eax
        ; Exact mapped bytes E8 31 B4 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 9ch]
        lea esi, [edi + 104h]
        mov dword ptr [esp + 34h], 0bh
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        add ebp, 0beh
        mov dword ptr [esp + 38h], ebp
        push 54h
        ; Exact mapped bytes E8 46 8A 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 30h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 2C: je 0x100a3d98
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 38h]
        push 40h
        push ebx
        add eax, 174h
        push ebx
        add ecx, -8
        push eax
        push ecx
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 26 AC 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp], 1017523ch
        mov dword ptr [ebp + 50h], ebx
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x100a3d9a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 2ch], ecx
        ; Exact mapped bytes E8 B5 B3 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2ch]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ebp, dword ptr [esi + 2ch]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 C7 45 26 E8 03: mov word ptr [ebp + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100a3dca
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 D6 B1 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100a3dd7
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 29 B1 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 BF 89 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 40: je 0x100a3e31
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1eh
        ; Exact mapped bytes 7E 12: jle 0x100a3e12
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a3e12
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 780h]
        ; Exact mapped bytes EB 02: jmp 0x100a3e14
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        add ecx, 174h
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        push ecx
        push 2
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 61 B4 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a3e33
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi], eax
        ; Exact mapped bytes E8 1B B3 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ebp, dword ptr [esi]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 C7 45 26 E8 03: mov word ptr [ebp + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100a3e62
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 3E B1 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100a3e6f
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 91 B0 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 2A 89 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 30h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 2D: je 0x100a3eb5
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 38h]
        push 40h
        push ebx
        add edx, 182h
        push ebx
        add eax, -8
        push edx
        push eax
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 09 AB 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xab
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp], 1017523ch
        mov dword ptr [ebp + 50h], ebx
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x100a3eb7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi - 2ch], ecx
        ; Exact mapped bytes E8 98 B2 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xb2
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi - 2ch]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ebp, dword ptr [esi - 2ch]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 C7 45 26 E8 03: mov word ptr [ebp + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100a3ee7
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 B9 B0 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100a3ef4
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 0C B0 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 A2 88 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 40: je 0x100a3f4e
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1eh
        ; Exact mapped bytes 7E 12: jle 0x100a3f2f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a3f2f
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 780h]
        ; Exact mapped bytes EB 02: jmp 0x100a3f31
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        add ecx, 182h
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        push ecx
        push 2
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 44 B3 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a3f50
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi - 58h], eax
        ; Exact mapped bytes E8 FD B1 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi - 58h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ebp, dword ptr [esi - 58h]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 C7 45 26 E8 03: mov word ptr [ebp + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100a3f82
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 1E B0 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100a3f8f
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 71 AF 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 34h]
        add esi, 4
        add ecx, 1fh
        dec eax
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 85 A7 FD FF FF: jne 0x100a3d53
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 57 24: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x24
        mov dword ptr [edi + 9c4h], ebx
        and edx, 0e5f0h
        mov dword ptr [esp + 34h], ebx
        or dh, 5
        lea esi, [edi + 254h]
        ; Exact mapped bytes 66 89 57 24: mov word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 CC 87 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 32: je 0x100a4018
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [edi + 8]
        mov ecx, dword ptr [edi + 4]
        mov edx, dword ptr [esp + 34h]
        push 40h
        add eax, 102h
        push ebx
        lea ecx, [ecx + edx + 7bh]
        push ebx
        push eax
        push ecx
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 A9 A9 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xa9
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp], 101751f8h
        mov dword ptr [ebp + 50h], ebx
        mov dword ptr [ebp + 54h], ebx
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x100a401a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi], ecx
        ; Exact mapped bytes E8 36 B1 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 67 87 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 24h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 1ch], 0fh
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x100a40d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esp + 30h], edx
        ; Exact mapped bytes 8B 15 C4 57 1C 10: mov edx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 164h], 9ch
        ; Exact mapped bytes 7E 16: jle 0x100a4083
        __asm _emit 0x7e
        __asm _emit 0x16
        mov edx, dword ptr [edx + 18ch]
        cmp edx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a4083
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [edx + 270h]
        mov dword ptr [esp + 38h], edx
        ; Exact mapped bytes EB 04: jmp 0x100a4087
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 38h], ebx
        push 40h
        push ebx
        push ebx
        push ecx
        mov ecx, dword ptr [esp + 40h]
        push ecx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 17 A9 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa9
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [ebp], 1017523ch
        cmp eax, ebx
        mov dword ptr [ebp + 50h], eax
        ; Exact mapped bytes 74 29: je 0x100a40d4
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ebp + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [ebp + 10h], ecx
        mov ecx, dword ptr [eax]
        lea edx, [ebp + 14h]
        mov dword ptr [ebp + 14h], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x100a40da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 26ch], ecx
        ; Exact mapped bytes E8 72 B0 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 26ch]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 9F 86 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 24h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 1ch], 10h
        ; Exact mapped bytes 74 7E: je 0x100a4191
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esp + 30h], edx
        ; Exact mapped bytes 8B 15 C4 57 1C 10: mov edx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 160h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x100a413b
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov edx, dword ptr [edx + 190h]
        cmp edx, ebx
        mov dword ptr [esp + 38h], edx
        ; Exact mapped bytes 75 04: jne 0x100a413f
        __asm _emit 0x75
        __asm _emit 0x04
        mov dword ptr [esp + 38h], ebx
        push 40h
        push ebx
        push ebx
        push ecx
        mov ecx, dword ptr [esp + 40h]
        push ecx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 5F A8 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [ebp], 101751f8h
        cmp eax, ebx
        mov dword ptr [ebp + 50h], ebx
        mov dword ptr [ebp + 54h], eax
        ; Exact mapped bytes 74 2D: je 0x100a4193
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ebp + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [ebp + 10h], ecx
        mov ecx, dword ptr [eax]
        lea edx, [ebp + 14h]
        mov dword ptr [ebp + 14h], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100a4193
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov dword ptr [esi + 2e8h], ebp
        ; Exact mapped bytes 66 81 65 24 FB FF: and word ptr [ebp + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x65
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        push 54h
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes E8 F6 85 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 1ch], 11h
        ; Exact mapped bytes 74 24: je 0x100a41e0
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [esi]
        push 40h
        push ebx
        push ebx
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        push ecx
        push edx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 DE A7 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa7
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp], 1017523ch
        mov dword ptr [ebp + 50h], ebx
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x100a41e2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0f8h], ecx
        ; Exact mapped bytes E8 6A AF 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f8h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 97 85 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 1ch], 12h
        ; Exact mapped bytes 74 22: je 0x100a423d
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [esi]
        push 40h
        push ebx
        push ebx
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        push ecx
        push edx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 7F A7 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa7
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp], 1017523ch
        mov dword ptr [ebp + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100a423f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 7ch], ebp
        ; Exact mapped bytes E8 53 85 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 1ch], 13h
        ; Exact mapped bytes 74 25: je 0x100a4284
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [esi]
        push 40h
        push ebx
        push ebx
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        push ecx
        push edx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 3B A7 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xa7
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp], 101751f8h
        mov dword ptr [ebp + 50h], ebx
        mov dword ptr [ebp + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100a4286
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi - 7ch], ebp
        ; Exact mapped bytes E8 0C 85 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 1ch], 14h
        ; Exact mapped bytes 74 24: je 0x100a42ca
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [esi]
        push 40h
        push ebx
        push ebx
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        push ecx
        push edx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 F4 A6 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp], 1017523ch
        mov dword ptr [ebp + 50h], ebx
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x100a42cc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 1f0h], ecx
        ; Exact mapped bytes E8 80 AE 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1f0h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 AD 84 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 1ch], 15h
        ; Exact mapped bytes 74 22: je 0x100a4327
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [esi]
        push 40h
        push ebx
        push ebx
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        push ecx
        push edx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 95 A6 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp], 1017523ch
        mov dword ptr [ebp + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100a4329
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 174h], ebp
        ; Exact mapped bytes E8 66 84 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 1ch], 16h
        ; Exact mapped bytes 74 28: je 0x100a4374
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [esi]
        push 40h
        push ebx
        push ebx
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        add ecx, -40h
        add eax, 1fh
        push ecx
        push eax
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 48 A6 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp], 1017523ch
        mov dword ptr [ebp + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100a4376
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 101h
        mov ecx, ebp
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi - 0f8h], ebp
        ; Exact mapped bytes E8 D4 AD 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xad
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esp + 34h]
        add esi, 4
        add eax, 60h
        cmp eax, 0b40h
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 8E 28 FC FF FF: jle 0x100a3fcd
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x28
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 940h
        lea ebp, [edi + 5c4h]
        sub eax, edi
        mov dword ptr [esp + 38h], ebx
        mov dword ptr [esp + 34h], ebp
        mov dword ptr [esp + 30h], eax
        mov eax, dword ptr [esp + 38h]
        push 54h
        cmp eax, 1eh
        ; Exact mapped bytes 0F 8D C5 00 00 00: jge 0x100a4492
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CE 83 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 24h], esi
        cmp esi, ebx
        mov byte ptr [esp + 1ch], 17h
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x100a4482
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 38h]
        lea eax, [ecx + 3c1h]
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 1D: jle 0x100a441d
        __asm _emit 0x7e
        __asm _emit 0x1d
        cmp eax, ebx
        ; Exact mapped bytes 7C 19: jl 0x100a441d
        __asm _emit 0x7c
        __asm _emit 0x19
        mov eax, dword ptr [ecx + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0F: je 0x100a441d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 34h]
        add eax, edx
        mov ebp, dword ptr [eax + ecx]
        ; Exact mapped bytes EB 02: jmp 0x100a441f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push ebx
        add edx, 148h
        push ebx
        add eax, 6bh
        push edx
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 72 A5 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa5
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebp
        ; Exact mapped bytes 74 39: je 0x100a4484
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [esi + 14h]
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [esp + 34h]
        mov ebp, eax
        mov dword ptr [eax], esi
        ; Exact mapped bytes EB 5A: jmp 0x100a44dc
        __asm _emit 0xeb
        __asm _emit 0x5a
        xor esi, esi
        mov eax, dword ptr [esp + 34h]
        mov byte ptr [esp + 1ch], bl
        mov ebp, eax
        mov dword ptr [eax], esi
        ; Exact mapped bytes EB 4A: jmp 0x100a44dc
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes E8 09 83 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 34h], esi
        cmp esi, ebx
        mov byte ptr [esp + 1ch], 18h
        ; Exact mapped bytes 74 2A: je 0x100a44d3
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        push ebx
        add ecx, 148h
        push ebx
        add edx, 6bh
        push ecx
        push edx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 E8 A4 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100a44d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [ebp], esi
        mov eax, dword ptr [ebp]
        push 101h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 6E AC 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        add ebp, 4
        mov dword ptr [esp + 34h], ebp
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [esp + 38h]
        inc eax
        cmp eax, 20h
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 8C AA FE FF FF: jl 0x100a43be
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 85 82 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebx
        mov byte ptr [esp + 1ch], 19h
        ; Exact mapped bytes 74 2C: je 0x100a4559
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push ebx
        add eax, 144h
        push ebx
        add ecx, 82h
        push eax
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 62 A4 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100a455b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 101h
        mov ecx, esi
        mov byte ptr [esp + 20h], bl
        mov dword ptr [edi + 5c0h], esi
        ; Exact mapped bytes E8 EF AB 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xab
        __asm _emit 0x05
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 25 82 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1ah
        ; Exact mapped bytes 74 4F: je 0x100a45da
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1ch
        ; Exact mapped bytes 7E 12: jle 0x100a45ac
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a45ac
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 700h
        ; Exact mapped bytes EB 02: jmp 0x100a45ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 57 26: mov dx, word ptr [edi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C2 0A: add dx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x0a
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 258h
        push 320h
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
        ; Exact mapped bytes E8 E8 2C F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a45dc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [edi + 0a0h], eax
        ; Exact mapped bytes E8 6E AB 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xab
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0a0h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 9B 81 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], esi
        cmp esi, ebx
        mov byte ptr [esp + 1ch], 1bh
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x100a469c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 155h
        ; Exact mapped bytes 7E 12: jle 0x100a463e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a463e
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 554h]
        ; Exact mapped bytes EB 02: jmp 0x100a4640
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 47 26: mov ax, word ptr [edi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 8ch]
        ; Exact mapped bytes 66 05 0A 00: add ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        push ebx
        push ebx
        push 258h
        push 320h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 4D A3 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a469e
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [esi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [esi + 14h]
        mov dword ptr [esi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x100a469e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 101h
        mov ecx, esi
        mov byte ptr [esp + 20h], bl
        mov dword ptr [edi + 0a4h], esi
        ; Exact mapped bytes E8 AC AA 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xaa
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0a4h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 D9 80 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], esi
        cmp esi, ebx
        mov byte ptr [esp + 1ch], 1ch
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x100a475e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3ffh
        ; Exact mapped bytes 7E 12: jle 0x100a4700
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a4700
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 0ffch]
        ; Exact mapped bytes EB 02: jmp 0x100a4702
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 47 26: mov ax, word ptr [edi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 8ch]
        ; Exact mapped bytes 66 05 0A 00: add ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        push ebx
        push ebx
        push 258h
        push 320h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 8B A2 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a4760
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [esi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100a4760
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 101h
        mov ecx, esi
        mov byte ptr [esp + 20h], bl
        mov dword ptr [edi + 0a8h], esi
        ; Exact mapped bytes E8 EA A9 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xa9
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0a8h]
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [edi + 0a8h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
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
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
