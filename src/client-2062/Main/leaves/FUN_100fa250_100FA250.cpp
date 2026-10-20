// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FA250 .. +0x52F bytes.
extern "C" __declspec(naked) void FUN_100fa250_100FA250() {
    __asm {
        push -1
        push 101744b8h
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
        ; Exact mapped bytes 0F BF 44 24 28: movsx eax, word ptr [esp + 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        mov edx, dword ptr [esp + 20h]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 34h]
        xor ebx, ebx
        push 40h
        push ebx
        push eax
        mov eax, dword ptr [esp + 38h]
        push ecx
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 1F 47 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 28h]
        mov dword ptr [esi], 10176668h
        mov dword ptr [esi + 5ch], edx
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 1ch], ebx
        mov ecx, dword ptr [eax + 21714h]
        mov eax, dword ptr [eax + 21a34h]
        or eax, ecx
        ; Exact mapped bytes 0F 84 68 01 00 00: je 0x100fa423
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov al, byte ptr [edx + 330h]
        cmp eax, ebx
        ; Exact mapped bytes 75 1A: jne 0x100fa2e1
        __asm _emit 0x75
        __asm _emit 0x1a
        push 58h
        ; Exact mapped bytes E8 D2 24 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes E9 65 01 00 00: jmp 0x100fa446
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x100fa388
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 AF 24 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 1ch], 2
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 D9 01 00 00: je 0x100fa4e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0d1h
        ; Exact mapped bytes 7E 12: jle 0x100fa32a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100fa32a
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 3440h]
        ; Exact mapped bytes EB 02: jmp 0x100fa32c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 30h]
        push eax
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6B 46 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        cmp ebp, ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 0F 84 89 01 00 00: je 0x100fa4e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes E9 5A 01 00 00: jmp 0x100fa4e2
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 58 01 00 00: jne 0x100fa4e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 08 24 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 0F 84 32 01 00 00: je 0x100fa4e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A8 57 1C 10: mov eax, dword ptr [0x101c57a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 0A: jle 0x100fa3c5
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ebp, dword ptr [eax + 190h]
        cmp ebp, ebx
        ; Exact mapped bytes 75 02: jne 0x100fa3c7
        __asm _emit 0x75
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 30h]
        push edx
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D0 45 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x100fa4e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
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
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x100fa4e2
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx + 0e9ch]
        push 58h
        cmp eax, ebx
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x100fa4c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 68 23 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 1ch], 4
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x100fa4e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0d0h
        ; Exact mapped bytes 7E 12: jle 0x100fa471
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100fa471
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 3400h]
        ; Exact mapped bytes EB 02: jmp 0x100fa473
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        push ecx
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 24 45 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        cmp ebp, ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 46: je 0x100fa4e2
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp + 18h]
        add ebp, 20h
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
        ; Exact mapped bytes EB 1A: jmp 0x100fa4e2
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes E8 D3 22 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes E9 1F FE FF FF: jmp 0x100fa2ff
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esi + 50h], edi
        mov eax, dword ptr [esi + 50h]
        push 101h
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 50h]
        ; Exact mapped bytes E8 61 4C 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 9A 22 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 7E: je 0x100fa596
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0d4h
        ; Exact mapped bytes 7E 12: jle 0x100fa53b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100fa53b
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 3500h]
        ; Exact mapped bytes EB 02: jmp 0x100fa53d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 30h]
        dec edx
        push edx
        push ebx
        add eax, 2
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 56 44 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100fa598
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
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
        ; Exact mapped bytes EB 02: jmp 0x100fa598
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 54h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes E8 AE 4B 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        cmp eax, ebx
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes 75 7E: jne 0x100fa63b
        __asm _emit 0x75
        __asm _emit 0x7e
        push 70h
        ; Exact mapped bytes E8 DC 21 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 5A: je 0x100fa630
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [esp + 34h]
        push 1
        push ebx
        push 0ffffffh
        lea ecx, [eax + 10h]
        add eax, -6
        push ecx
        mov ecx, dword ptr [esp + 40h]
        lea edx, [ecx + 0c8h]
        add ecx, 0ah
        push edx
        push eax
        ; Exact mapped bytes A1 98 56 1C 10: mov eax, dword ptr [0x101c5698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 79 B5 F1 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb5
        __asm _emit 0xf1
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 8
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 84 21 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        mov byte ptr [eax], bl
        add esp, 4
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esi + 58h], edi
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x100fa6b2
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esi + 58h], edi
        ; Exact mapped bytes EB 77: jmp 0x100fa6b2
        __asm _emit 0xeb
        __asm _emit 0x77
        cmp eax, 1
        ; Exact mapped bytes 75 6F: jne 0x100fa6af
        __asm _emit 0x75
        __asm _emit 0x6f
        push 80h
        ; Exact mapped bytes E8 56 21 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 43: je 0x100fa69d
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [esp + 34h]
        push 1
        push ebx
        push 0ffffffh
        lea edx, [ecx + 10h]
        add ecx, -6
        push edx
        mov edx, dword ptr [esp + 40h]
        lea edi, [edx + 0c8h]
        add edx, 0ah
        push edi
        push ecx
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D3 0C 00 00: call 0x100fb360
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 58h], eax
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [eax + 7ch], 1
        ; Exact mapped bytes EB 15: jmp 0x100fa6b2
        __asm _emit 0xeb
        __asm _emit 0x15
        xor eax, eax
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esi + 58h], eax
        mov dword ptr [eax + 7ch], 1
        ; Exact mapped bytes EB 03: jmp 0x100fa6b2
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 58h], ebx
        mov eax, dword ptr [esi + 5ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x100fa6fb
        __asm _emit 0x74
        __asm _emit 0x42
        lea ecx, [eax + 37ch]
        mov eax, dword ptr [esi + 58h]
        mov eax, dword ptr [eax + 6ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x100fa6d5
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100fa6d5
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, dword ptr [esi + 58h]
        ; Exact mapped bytes 66 8B 54 24 38: mov dx, word ptr [esp + 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100fa6ee
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B2 48 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100fa6fb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 05 48 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 66 24 FF 7F: and word ptr [esi + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, esi
        mov dword ptr [esi + 60h], ebx
        ; Exact mapped bytes E8 15 01 00 00: call 0x100fa820
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        cmp eax, 3f4h
        ; Exact mapped bytes 75 19: jne 0x100fa72e
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [esi + 58h]
        push 381h
        ; Exact mapped bytes E8 2E 46 00 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        mov dword ptr [eax + 54h], 2
        ; Exact mapped bytes EB 15: jmp 0x100fa743
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp eax, 0ch
        ; Exact mapped bytes 75 10: jne 0x100fa743
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 58h]
        push 16h
        ; Exact mapped bytes E8 13 46 00 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58h]
        mov dword ptr [ecx + 54h], ebx
        mov eax, dword ptr [esi + 8]
        cmp eax, 25ch
        ; Exact mapped bytes 75 07: jne 0x100fa754
        __asm _emit 0x75
        __asm _emit 0x07
        push 24dh
        ; Exact mapped bytes EB 0C: jmp 0x100fa760
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 0a4h
        ; Exact mapped bytes 75 0D: jne 0x100fa768
        __asm _emit 0x75
        __asm _emit 0x0d
        push 0b3h
        mov ecx, dword ptr [esi + 58h]
        ; Exact mapped bytes E8 58 46 00 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
