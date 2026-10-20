// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C6590 .. +0x69D bytes.
extern "C" __declspec(naked) void FUN_100c6590_100C6590() {
    __asm {
        push -1
        push 1017287dh
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
        mov eax, dword ptr [esp + 24h]
        push ebx
        mov ebx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 18h]
        push ebp
        mov ebp, dword ptr [esp + 20h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 2ch]
        push 3a98h
        push eax
        push ecx
        push ebx
        push ebp
        push edx
        mov ecx, esi
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes E8 7C 0F F8 FF: call 0x10047550
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0b4h
        mov dword ptr [esp + 1ch], 0
        mov dword ptr [esi], 10176324h
        ; Exact mapped bytes E8 B4 61 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x61
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 18h], 1
        ; Exact mapped bytes 74 15: je 0x100c6611
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push 0
        lea ecx, [ebx + 2]
        push 0
        push ecx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 51 1F 00 00: call 0x100c8560
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c6613
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 7A 61 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x61
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 70: je 0x100c66a8
        __asm _emit 0x74
        __asm _emit 0x70
        ; Exact mapped bytes A1 30 58 1C 10: mov eax, dword ptr [0x101c5830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100c6655
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100c6655
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x100c6657
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push ebx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 45 83 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100c66a2
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
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
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x100c66aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 88h], edi
        ; Exact mapped bytes E8 9F 8A 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 CC 60 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 70: je 0x100c6756
        __asm _emit 0x74
        __asm _emit 0x70
        ; Exact mapped bytes A1 30 58 1C 10: mov eax, dword ptr [0x101c5830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 164h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0E: jle 0x100c6703
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c6703
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x100c6705
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push ebx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 97 82 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100c6750
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
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
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x100c6758
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 84h], edi
        ; Exact mapped bytes E8 33 60 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 4
        mov edi, 32h
        ; Exact mapped bytes 74 3A: je 0x100c67bc
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100c67a2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c67a2
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c80h
        ; Exact mapped bytes EB 02: jmp 0x100c67a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 10h]
        push edx
        lea edx, [ebp + 142h]
        push edx
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D6 8A 03 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c67be
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 8B 89 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 C1 5F 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x5f
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 3A: je 0x100c6829
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100c680f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c680f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c80h
        ; Exact mapped bytes EB 02: jmp 0x100c6811
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 10h]
        push edx
        lea edx, [ebp + 182h]
        push edx
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 69 8A 03 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c682b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 1E 89 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 54 5F 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 3B: je 0x100c6897
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100c687c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c687c
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c80h
        ; Exact mapped bytes EB 02: jmp 0x100c687e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 10h]
        push edx
        lea edx, [ebp + 0dch]
        push edx
        push 3
        push ecx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 FB 89 03 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c6899
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes E8 B0 88 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 E6 5E 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x5e
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 3B: je 0x100c6905
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100c68ea
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c68ea
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c80h
        ; Exact mapped bytes EB 02: jmp 0x100c68ec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 10h]
        push edx
        lea edx, [ebp + 104h]
        push edx
        push 2
        push ecx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 8D 89 03 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c6907
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes E8 42 88 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 78 5E 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x5e
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        mov edi, 23h
        ; Exact mapped bytes 74 3A: je 0x100c6977
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100c695d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c695d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x100c695f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 10h]
        push edx
        lea edx, [ebp + 1cch]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1B 89 03 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c6979
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 D0 87 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 06 5E 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x5e
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 3B: je 0x100c69e5
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100c69ca
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100c69ca
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x100c69cc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 10h]
        push edx
        lea edx, [ebp + 1d6h]
        push edx
        push 4
        push ecx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 AD 88 03 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c69e7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 62 87 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 9B 5D 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x5d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 28: je 0x100c6a3f
        __asm _emit 0x74
        __asm _emit 0x28
        push 40h
        push 0
        lea eax, [ebx + 18h]
        push 0
        lea ecx, [ebp + 0b4h]
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 80 7F 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x100c6a41
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a4h], edi
        ; Exact mapped bytes E8 4D 5D 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x5d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 28: je 0x100c6a8d
        __asm _emit 0x74
        __asm _emit 0x28
        push 40h
        push 0
        lea edx, [ebx + 18h]
        push 0
        lea eax, [ebp + 0b4h]
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 32 7F 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x100c6a8f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a8h], edi
        ; Exact mapped bytes E8 FF 5C 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x5c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x100c6b3a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 30 58 1C 10: mov eax, dword ptr [0x101c5830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x100c6ad7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100c6ad7
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 100h]
        ; Exact mapped bytes EB 02: jmp 0x100c6ad9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 28h]
        push 40h
        push 0
        lea ecx, [ebx + 18h]
        push 0
        add edx, 0e0h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 BA 7E 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x100c6b34
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
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x100c6b3c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0ach], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        push 60h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 4C 5C 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x5c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0dh
        pop edi
        ; Exact mapped bytes 74 1F: je 0x100c6b84
        __asm _emit 0x74
        __asm _emit 0x1f
        lea edx, [ebx + 2ah]
        push 40h
        lea ecx, [ebp + 24fh]
        push edx
        push ecx
        lea edx, [ebx + 28h]
        lea ecx, [ebp + 28h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5E 2D 04 00: call 0x101098e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c6b86
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0b0h], eax
        push 9ch
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax + 50h], 0ffffffh
        ; Exact mapped bytes E8 FE 5B 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov byte ptr [esp + 18h], 0eh
        ; Exact mapped bytes 74 1B: je 0x100c6bcd
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        lea edx, [ebx + 10h]
        push 0
        lea ecx, [ebp + 24ch]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E5 F3 FF FF: call 0x100c5fb0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c6bcf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 98h
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes E8 BC 5B 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x5b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov byte ptr [esp + 18h], 0fh
        ; Exact mapped bytes 74 1B: je 0x100c6c0f
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        add ebx, -58h
        push 0
        add ebp, 2f6h
        push ebx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 53 17 FB FF: call 0x10078360
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100c6c11
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [esi + 0b8h], eax
        mov eax, esi
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
