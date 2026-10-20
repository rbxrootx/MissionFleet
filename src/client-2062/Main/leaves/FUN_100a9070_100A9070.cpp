// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A9070 .. +0x7CC bytes.
extern "C" __declspec(naked) void FUN_100a9070_100A9070() {
    __asm {
        push -1
        push 10171631h
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
        mov ebx, dword ptr [esp + 20h]
        push ebp
        mov ebp, dword ptr [esp + 20h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push ebx
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 FB 58 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor eax, eax
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        push 54h
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esi], 101760a8h
        ; Exact mapped bytes E8 C4 36 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x36
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 73: je 0x100a9161
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 6
        ; Exact mapped bytes 7E 0F: jle 0x100a910b
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100a910b
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 18h]
        ; Exact mapped bytes EB 02: jmp 0x100a910d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 2710h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8C 58 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100a915b
        __asm _emit 0x74
        __asm _emit 0x2a
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
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x100a9163
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 60h], edi
        ; Exact mapped bytes E8 2E 36 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x36
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 73: je 0x100a91f7
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 7
        ; Exact mapped bytes 7E 0F: jle 0x100a91a1
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100a91a1
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 1ch]
        ; Exact mapped bytes EB 02: jmp 0x100a91a3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 2710h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F6 57 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100a91f1
        __asm _emit 0x74
        __asm _emit 0x2a
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
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x100a91f9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 64h], edi
        ; Exact mapped bytes E8 53 5F 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x5f
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 83 35 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 7D: je 0x100a92ac
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 23h
        ; Exact mapped bytes 7E 12: jle 0x100a924f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x100a924f
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x100a9251
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 2710h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 48 57 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x100a92a6
        __asm _emit 0x74
        __asm _emit 0x2a
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
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x100a92ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 68h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        push 101h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 97 5E 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 CD 34 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x34
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 4F: je 0x100a9332
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 25h
        ; Exact mapped bytes 7E 12: jle 0x100a9304
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100a9304
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 940h
        ; Exact mapped bytes EB 02: jmp 0x100a9306
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0f8h]
        push 2711h
        push edx
        lea edx, [ebp + 0d2h]
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
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 90 DF F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xdf
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a9334
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 18 5E 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 4E 34 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x34
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 4F: je 0x100a93b1
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 24h
        ; Exact mapped bytes 7E 12: jle 0x100a9383
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100a9383
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 900h
        ; Exact mapped bytes EB 02: jmp 0x100a9385
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0f8h]
        push 2711h
        push edx
        lea edx, [ebp + 104h]
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
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 11 DF F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xdf
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a93b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes E8 99 5D 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x5d
        __asm _emit 0x05
        __asm _emit 0x00
        push 0e8h
        ; Exact mapped bytes E8 CF 33 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x33
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 3B: je 0x100a941c
        __asm _emit 0x74
        __asm _emit 0x3b
        push 646464h
        push 0
        lea ecx, [ebx + 0dch]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 12ch]
        lea ecx, [ebx + 0c8h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D A4 56 1C 10: mov ecx, dword ptr [0x101c56a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 0dch]
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 36 F5 F6 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf5
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a941e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0fch], eax
        mov dword ptr [eax + 90h], 0eh
        mov edi, dword ptr [esi + 0fch]
        mov byte ptr [esp + 1ch], 0
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 1A 27: mov word ptr [edi + 0x26], 0x271a
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x1a
        __asm _emit 0x27
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100a944c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 54 5B 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x5b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100a9459
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A7 5A 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x5a
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 3D 33 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x33
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 36: je 0x100a94a9
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 98 57 1C 10: mov ecx, dword ptr [0x101c5798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100a948d
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov edx, dword ptr [ecx + 190h]
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x100a948f
        __asm _emit 0x75
        __asm _emit 0x02
        xor edx, edx
        add ebx, 23h
        add ebp, 0fah
        push ebx
        push ebp
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 EB 5D 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100a94ab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 74h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 11 27: mov word ptr [edi + 0x26], 0x2711
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x11
        __asm _emit 0x27
        ; Exact mapped bytes 74 06: je 0x100a94c6
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DA 5A 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x5a
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100a94d3
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2D 5A 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x5a
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        push 101h
        ; Exact mapped bytes E8 80 5C 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [esp + 2ch]
        lea eax, [esi + 0d0h]
        lea ebx, [esi + 7ch]
        mov dword ptr [esp + 38h], eax
        lea ebp, [edx + 4eh]
        mov dword ptr [esp + 30h], 0bh
        mov dword ptr [esp + 34h], ebp
        push 58h
        ; Exact mapped bytes E8 99 32 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x32
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x100a95a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x100a953d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x100a953d
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 180h
        ; Exact mapped bytes EB 02: jmp 0x100a953f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 28h]
        mov ecx, dword ptr [esp + 34h]
        push 2711h
        push 0
        push 0
        add edx, 14h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 53 54 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x100a959b
        __asm _emit 0x74
        __asm _emit 0x2a
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
        mov ebp, dword ptr [esp + 34h]
        ; Exact mapped bytes EB 02: jmp 0x100a95a3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, dword ptr [esp + 38h]
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edx], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E8 E2 31 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 32: je 0x100a9600
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 98 57 1C 10: mov ecx, dword ptr [0x101c5798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100a95e8
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x100a95ea
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 28h]
        push ebp
        add edx, 60h
        push edx
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 92 5C 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a9602
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ebx - 4], eax
        ; Exact mapped bytes E8 8C 31 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 32: je 0x100a9656
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 98 57 1C 10: mov ecx, dword ptr [0x101c5798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100a963e
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x100a9640
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 28h]
        push ebp
        add edx, 1eh
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 3C 5C 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a9658
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebx], eax
        mov edi, dword ptr [ebx - 4]
        mov byte ptr [esp + 1ch], 0
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 11 27: mov word ptr [edi + 0x26], 0x2711
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x11
        __asm _emit 0x27
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100a9675
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2B 59 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100a9682
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7E 58 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, dword ptr [ebx]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 11 27: mov word ptr [edi + 0x26], 0x2711
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x11
        __asm _emit 0x27
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100a9697
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 09 59 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100a96a4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 5C 58 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebx - 4]
        push 101h
        ; Exact mapped bytes E8 AF 5A 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x5a
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        push 101h
        ; Exact mapped bytes E8 A3 5A 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x5a
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 30h]
        add edi, 4
        add ebp, 0eh
        add ebx, 8
        dec eax
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esp + 34h], ebp
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes 0F 85 1F FE FF FF: jne 0x100a9500
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        lea ebx, [esi + 488h]
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], eax
        push 58h
        ; Exact mapped bytes E8 A8 30 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x30
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x100a979b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 18 58 1C 10: mov eax, dword ptr [0x101c5818]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 34h]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 19: jle 0x100a9738
        __asm _emit 0x7e
        __asm _emit 0x19
        mov ecx, dword ptr [esp + 38h]
        test ecx, ecx
        ; Exact mapped bytes 7C 11: jl 0x100a9738
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100a9738
        __asm _emit 0x74
        __asm _emit 0x07
        mov edx, ecx
        lea ebp, [eax + edx]
        ; Exact mapped bytes EB 02: jmp 0x100a973a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        add eax, 78h
        push 0
        add ecx, 0b5h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 55 52 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x52
        __asm _emit 0x05
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a979d
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
        ; Exact mapped bytes EB 02: jmp 0x100a979d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebx], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebx]
        mov byte ptr [esp + 1ch], 0
        or byte ptr [eax + 24h], 4
        mov edi, dword ptr [ebx]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 11 27: mov word ptr [edi + 0x26], 0x2711
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x11
        __asm _emit 0x27
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100a97c5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DB 57 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100a97d2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2E 57 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov ebp, dword ptr [esp + 34h]
        add eax, 40h
        inc ebp
        add ebx, 4
        cmp eax, 80h
        mov dword ptr [esp + 34h], ebp
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 8C FD FE FF FF: jl 0x100a96f1
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 488h]
        push 0fffffeffh
        ; Exact mapped bytes E8 5C 59 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 48ch]
        push 101h
        ; Exact mapped bytes E8 4C 59 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov eax, esi
        and ecx, 0e5f0h
        pop edi
        or ch, 5
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 10h]
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
