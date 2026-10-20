// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000EB20 .. +0x80F bytes.
extern "C" __declspec(naked) void FUN_1000eb20_1000EB20() {
    __asm {
        push -1
        push 1016d194h
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
        mov eax, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 24h]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 34h]
        push edi
        push eax
        mov eax, dword ptr [esp + 34h]
        push ecx
        mov ecx, dword ptr [esp + 34h]
        push edx
        mov edx, dword ptr [esp + 30h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 EB 89 03 00: call 0x10047550
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        mov ecx, dword ptr [esi + 28h]
        xor ebx, ebx
        push 54h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 10175350h
        mov dword ptr [esi + 150h], eax
        mov dword ptr [esi + 9ch], ebx
        mov dword ptr [esi + 0a8h], ecx
        ; Exact mapped bytes 66 C7 86 88 00 00 00 B0 04: mov word ptr [esi + 0x88], 0x4b0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xb0
        __asm _emit 0x04
        ; Exact mapped bytes 66 C7 86 8A 00 00 00 14 05: mov word ptr [esi + 0x8a], 0x514
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x05
        mov dword ptr [esi + 0ach], 8
        mov dword ptr [esi + 94h], ebx
        mov dword ptr [esi + 90h], ebx
        mov dword ptr [esi + 98h], ebx
        mov dword ptr [esi + 8ch], ebx
        ; Exact mapped bytes E8 DB DB 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 72: je 0x1000ec49
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5f3h
        ; Exact mapped bytes 7E 12: jle 0x1000ebfa
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x1000ebfa
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 17cch]
        ; Exact mapped bytes EB 02: jmp 0x1000ebfc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push -1
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A0 FD 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1000ec4b
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1000ec4b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0b8h], edi
        ; Exact mapped bytes E8 FF 04 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b8h]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 2C DB 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 7A: je 0x1000ed00
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0c7h
        ; Exact mapped bytes 7E 12: jle 0x1000eca9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x1000eca9
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 31c0h]
        ; Exact mapped bytes EB 02: jmp 0x1000ecab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push eax
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 EC FC 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x1000ed02
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x1000ed02
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0c4h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0c4h]
        push 0bch
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes E8 FE 03 0F 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 77 DA 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xda
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 77: je 0x1000edb2
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5f4h
        ; Exact mapped bytes 7E 12: jle 0x1000ed5e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x1000ed5e
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 17d0h]
        ; Exact mapped bytes EB 02: jmp 0x1000ed60
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov edx, dword ptr [esp + 30h]
        push eax
        mov eax, dword ptr [esp + 30h]
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 37 FC 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1000edb4
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x1000edb4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0c0h], edi
        ; Exact mapped bytes E8 96 03 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c0h]
        push 70h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E8 B7 D9 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd9
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 7A: je 0x1000ee75
        __asm _emit 0x74
        __asm _emit 0x7a
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 8]
        push 40h
        lea ebp, [ecx + 28h]
        lea edx, [eax - 5]
        add ecx, -28h
        add eax, -24h
        mov dword ptr [esp + 40h], ecx
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        mov edx, dword ptr [esp + 44h]
        push ebp
        push eax
        mov dword ptr [esp + 48h], ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 83 FB 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [edi + 60h], 0ffffffh
        mov dword ptr [edi + 50h], eax
        mov dword ptr [edi + 64h], ebx
        mov dword ptr [edi + 68h], 1
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], ebx
        push 80h
        mov byte ptr [esp + 20h], 5
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 35 D9 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd9
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 02: jmp 0x1000ee77
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0c8h], edi
        ; Exact mapped bytes E8 18 D9 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd9
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 75: je 0x1000ef0f
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 164h
        ; Exact mapped bytes 7E 12: jle 0x1000eebd
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x1000eebd
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 590h]
        ; Exact mapped bytes EB 02: jmp 0x1000eebf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push eax
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 DA FA 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfa
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1000ef11
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x1000ef11
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0dch], edi
        ; Exact mapped bytes E8 39 02 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 6F D8 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xd8
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 7
        mov edi, 2eh
        ; Exact mapped bytes 74 3D: je 0x1000ef83
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x1000ef66
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1000ef66
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x1000ef68
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 8]
        sub edx, 17h
        push edx
        mov edx, dword ptr [esi + 4]
        sub edx, 0ah
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 0F 03 0F 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1000ef85
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E8 07 D8 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xd8
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 3D: je 0x1000efe6
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x1000efc9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1000efc9
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x1000efcb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 8]
        sub edx, 17h
        push edx
        mov edx, dword ptr [esi + 4]
        add edx, 0ch
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AC 02 0F 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1000efe8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes E8 A4 D7 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd7
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 3D: je 0x1000f049
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x1000f02c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1000f02c
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x1000f02e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 8]
        sub edx, 17h
        push edx
        mov edx, dword ptr [esi + 4]
        add edx, 1eh
        push edx
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 49 02 0F 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1000f04b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0cch]
        push 101h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes E8 FB 00 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d0h]
        push 101h
        ; Exact mapped bytes E8 EB 00 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d4h]
        push 101h
        ; Exact mapped bytes E8 DB 00 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 11 D7 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xd7
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 3D: je 0x1000f0dc
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x1000f0bf
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1000f0bf
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x1000f0c1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 8]
        sub edx, 17h
        push edx
        mov edx, dword ptr [esi + 4]
        sub edx, 20h
        push edx
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B6 01 0F 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1000f0de
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes E8 6C 00 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ebp, 78h
        mov dword ptr [esp + 3ch], 1e0h
        mov dword ptr [esp + 38h], ebp
        ; Exact mapped bytes EB 04: jmp 0x1000f10b
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 38h]
        push 54h
        ; Exact mapped bytes E8 8E D6 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd6
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 79: je 0x1000f19d
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 A8 57 1C 10: mov eax, dword ptr [0x101c57a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 17: jle 0x1000f148
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ebp, ebx
        ; Exact mapped bytes 7C 13: jl 0x1000f148
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x1000f148
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 3ch]
        mov ebp, dword ptr [eax + ecx]
        ; Exact mapped bytes EB 02: jmp 0x1000f14a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        sub eax, 30h
        push ebx
        add ecx, 18h
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 4C F8 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf8
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1000f19f
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1000f19f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 3ch]
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esi + eax - 8ch], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 4
        mov dword ptr [esp + 3ch], eax
        mov eax, dword ptr [esp + 38h]
        inc eax
        mov dword ptr [esp + 38h], eax
        add eax, -78h
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 37 FF FF FF: jl 0x1000f107
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 154h]
        push 0fffffeffh
        ; Exact mapped bytes E8 80 FF 0E 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0x0e
        __asm _emit 0x00
        push 64h
        ; Exact mapped bytes E8 B9 D5 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd5
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 19: je 0x1000f210
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        add ecx, -2bh
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A4 17 00 00: call 0x100109b0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x1000f212
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov dword ptr [esi + 148h], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 1ch], bl
        cmp ecx, ebx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1000f231
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6F FD 0E 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xfd
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1000f23e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C2 FC 0E 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        add eax, -26h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 148h]
        ; Exact mapped bytes E8 4A 26 00 00: call 0x100118a0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 148h]
        mov dword ptr [eax + 60h], ebx
        mov eax, dword ptr [esi + 148h]
        cmp dword ptr [eax + 60h], ebx
        ; Exact mapped bytes 74 0B: je 0x1000f275
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 5ch]
        push ebx
        ; Exact mapped bytes E8 AD 04 0F 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x1000f27e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [eax + 5ch]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        push 11ch
        ; Exact mapped bytes E8 18 D5 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd5
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 15: je 0x1000f2ad
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push ebx
        push ebx
        push 28h
        push 320h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 35 43 0A 00: call 0x100b35e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x43
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1000f2af
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0e0h], eax
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes E8 DB FC 0E 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0e0h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 A0 0F: mov word ptr [edi + 0x26], 0xfa0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xa0
        __asm _emit 0x0f
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1000f2de
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C2 FC 0E 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1000f2eb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 15 FC 0E 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        push ebx
        ; Exact mapped bytes E8 F9 83 03 00: call 0x100476f0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        push 28h
        push 1
        ; Exact mapped bytes E8 AA 83 03 00: call 0x100476b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 14ch], ebx
        mov dword ptr [esi + 144h], ebx
        mov dword ptr [esi + 0b4h], ebx
        mov eax, esi
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
