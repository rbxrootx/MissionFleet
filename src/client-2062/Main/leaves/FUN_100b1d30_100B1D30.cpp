// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B1D30 .. +0xDE7 bytes.
extern "C" __declspec(naked) void FUN_100b1d30_100B1D30() {
    __asm {
        push -1
        push 10171c42h
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
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 30h]
        push edx
        mov edx, dword ptr [esp + 30h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 3B CC 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esi], 1017566ch
        or byte ptr [esi + 24h], 20h
        xor ebx, ebx
        lea eax, [esi + 50h]
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [esi], 10176150h
        mov dword ptr [esp + 38h], eax
        push 54h
        ; Exact mapped bytes E8 07 AA 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xaa
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 73: je 0x100b1e1e
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes A1 10 58 1C 10: mov eax, dword ptr [0x101c5810]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 13: jle 0x100b1dcb
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebx, ebx
        ; Exact mapped bytes 7C 0F: jl 0x100b1dcb
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100b1dcb
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + ebx*4]
        ; Exact mapped bytes EB 02: jmp 0x100b1dcd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 CB CB 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xcb
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b1e20
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
        ; Exact mapped bytes EB 02: jmp 0x100b1e20
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        inc ebx
        add eax, 4
        cmp ebx, 3
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 8C 50 FF FF FF: jl 0x100b1d92
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 5ch]
        mov ebx, 3
        mov dword ptr [esp + 38h], 0ch
        mov dword ptr [esp + 34h], eax
        push 54h
        ; Exact mapped bytes E8 43 A9 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa9
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 77: je 0x100b1ee6
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 10 58 1C 10: mov eax, dword ptr [0x101c5810]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100b1e93
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100b1e93
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100b1e93
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 38h]
        mov ebp, dword ptr [eax + ecx]
        ; Exact mapped bytes EB 02: jmp 0x100b1e95
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 03 CB 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xcb
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b1ee8
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
        ; Exact mapped bytes EB 02: jmp 0x100b1ee8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 38h]
        add ebp, 4
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 4
        inc ebx
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], ebp
        lea eax, [ebx - 3]
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 3E FF FF FF: jl 0x100b1e56
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 64h]
        mov ebx, 5
        mov dword ptr [esp + 38h], 14h
        mov dword ptr [esp + 34h], eax
        push 54h
        ; Exact mapped bytes E8 6D A8 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa8
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 77: je 0x100b1fbc
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 10 58 1C 10: mov eax, dword ptr [0x101c5810]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100b1f69
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100b1f69
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100b1f69
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 38h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100b1f6b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 2D CA 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b1fbe
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
        ; Exact mapped bytes EB 02: jmp 0x100b1fbe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 38h]
        add ebp, 4
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 4
        inc ebx
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], ebp
        lea eax, [ebx - 5]
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 3E FF FF FF: jl 0x100b1f2c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 6ch]
        mov ebx, 7
        mov dword ptr [esp + 38h], 1ch
        mov dword ptr [esp + 34h], eax
        push 54h
        ; Exact mapped bytes E8 97 A7 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xa7
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 77: je 0x100b2092
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 10 58 1C 10: mov eax, dword ptr [0x101c5810]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100b203f
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100b203f
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100b203f
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 38h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100b2041
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 57 C9 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b2094
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
        ; Exact mapped bytes EB 02: jmp 0x100b2094
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 38h]
        add ebp, 4
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 4
        inc ebx
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], ebp
        lea eax, [ebx - 7]
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 3E FF FF FF: jl 0x100b2002
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 74h]
        mov ebx, 9
        mov dword ptr [esp + 38h], 24h
        mov dword ptr [esp + 34h], eax
        push 54h
        ; Exact mapped bytes E8 C1 A6 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xa6
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 77: je 0x100b2168
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 10 58 1C 10: mov eax, dword ptr [0x101c5810]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100b2115
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100b2115
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100b2115
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 38h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100b2117
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 81 C8 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b216a
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
        ; Exact mapped bytes EB 02: jmp 0x100b216a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 38h]
        add ebp, 4
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 4
        inc ebx
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], ebp
        lea eax, [ebx - 9]
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 3E FF FF FF: jl 0x100b20d8
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 7ch]
        mov ebx, 0bh
        mov dword ptr [esp + 38h], 2ch
        mov dword ptr [esp + 34h], eax
        push 54h
        ; Exact mapped bytes E8 EB A5 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa5
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 77: je 0x100b223e
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 10 58 1C 10: mov eax, dword ptr [0x101c5810]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100b21eb
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100b21eb
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100b21eb
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 38h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100b21ed
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 AB C7 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b2240
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
        ; Exact mapped bytes EB 02: jmp 0x100b2240
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 38h]
        add ebp, 4
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 4
        inc ebx
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], ebp
        lea eax, [ebx - 0bh]
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 3E FF FF FF: jl 0x100b21ae
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 84h]
        mov ebx, 0dh
        mov dword ptr [esp + 38h], 34h
        mov dword ptr [esp + 34h], eax
        push 54h
        ; Exact mapped bytes E8 12 A5 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa5
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 77: je 0x100b2317
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 10 58 1C 10: mov eax, dword ptr [0x101c5810]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100b22c4
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100b22c4
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100b22c4
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 38h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100b22c6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D2 C6 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b2319
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
        ; Exact mapped bytes EB 02: jmp 0x100b2319
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 38h]
        add ebp, 4
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 4
        inc ebx
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], ebp
        lea eax, [ebx - 0dh]
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 3E FF FF FF: jl 0x100b2287
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 8ch]
        mov ebx, 0fh
        mov dword ptr [esp + 38h], 3ch
        mov dword ptr [esp + 34h], eax
        push 54h
        ; Exact mapped bytes E8 39 A4 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa4
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 77: je 0x100b23f0
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 10 58 1C 10: mov eax, dword ptr [0x101c5810]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100b239d
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100b239d
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100b239d
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 38h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100b239f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F9 C5 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b23f2
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
        ; Exact mapped bytes EB 02: jmp 0x100b23f2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 38h]
        add ebp, 4
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 4
        inc ebx
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], ebp
        lea eax, [ebx - 0fh]
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 3E FF FF FF: jl 0x100b2360
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 94h]
        mov ebx, 11h
        mov dword ptr [esp + 38h], 44h
        mov dword ptr [esp + 34h], eax
        push 54h
        ; Exact mapped bytes E8 60 A3 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xa3
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 77: je 0x100b24c9
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 10 58 1C 10: mov eax, dword ptr [0x101c5810]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100b2476
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100b2476
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100b2476
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 38h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100b2478
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 20 C5 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b24cb
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
        ; Exact mapped bytes EB 02: jmp 0x100b24cb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 38h]
        add ebp, 4
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 4
        inc ebx
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], ebp
        lea eax, [ebx - 11h]
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 3E FF FF FF: jl 0x100b2439
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 9ch]
        mov ebx, 13h
        mov dword ptr [esp + 38h], 4ch
        mov dword ptr [esp + 34h], eax
        push 54h
        ; Exact mapped bytes E8 87 A2 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa2
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 77: je 0x100b25a2
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 10 58 1C 10: mov eax, dword ptr [0x101c5810]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100b254f
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100b254f
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100b254f
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 38h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100b2551
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 47 C4 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b25a4
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
        ; Exact mapped bytes EB 02: jmp 0x100b25a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 38h]
        add ebp, 4
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 4
        inc ebx
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], ebp
        lea eax, [ebx - 13h]
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 3E FF FF FF: jl 0x100b2512
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 0a4h]
        mov ebx, 15h
        mov dword ptr [esp + 38h], 54h
        mov dword ptr [esp + 34h], eax
        push 54h
        ; Exact mapped bytes E8 AE A1 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa1
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 77: je 0x100b267b
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 10 58 1C 10: mov eax, dword ptr [0x101c5810]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100b2628
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100b2628
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100b2628
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 38h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100b262a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6E C3 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b267d
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
        ; Exact mapped bytes EB 02: jmp 0x100b267d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 38h]
        add ebp, 4
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 4
        inc ebx
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], ebp
        lea eax, [ebx - 15h]
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 3E FF FF FF: jl 0x100b25eb
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 0ach]
        mov ebx, 17h
        mov dword ptr [esp + 2ch], 5ch
        mov dword ptr [esp + 28h], eax
        push 54h
        ; Exact mapped bytes E8 D5 A0 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xa0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 74: je 0x100b2751
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes A1 10 58 1C 10: mov eax, dword ptr [0x101c5810]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100b2701
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100b2701
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100b2701
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 2ch]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100b2703
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push 0
        push 0
        push 264h
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 98 C2 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b2753
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
        ; Exact mapped bytes EB 02: jmp 0x100b2753
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 28h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, dword ptr [esp + 2ch]
        add eax, 4
        add edi, 4
        inc ebx
        mov dword ptr [esp + 2ch], edi
        mov dword ptr [esp + 28h], eax
        lea ecx, [ebx - 17h]
        cmp ecx, 2
        ; Exact mapped bytes 0F 8C 41 FF FF FF: jl 0x100b26c4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 0b4h]
        mov ebx, 19h
        mov dword ptr [esp + 2ch], 64h
        mov dword ptr [esp + 28h], eax
        push 54h
        ; Exact mapped bytes E8 FF 9F 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x9f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 74: je 0x100b2827
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes A1 10 58 1C 10: mov eax, dword ptr [0x101c5810]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100b27d7
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100b27d7
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100b27d7
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esp + 2ch]
        mov ebp, dword ptr [edx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100b27d9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push 0
        push 0
        push 264h
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C2 C1 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b2829
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x100b2829
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 28h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, dword ptr [esp + 2ch]
        add eax, 4
        add edi, 4
        inc ebx
        mov dword ptr [esp + 2ch], edi
        mov dword ptr [esp + 28h], eax
        lea edx, [ebx - 19h]
        cmp edx, 2
        ; Exact mapped bytes 0F 8C 41 FF FF FF: jl 0x100b279a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 0bch]
        mov ebx, 1fh
        mov dword ptr [esp + 2ch], 7ch
        mov dword ptr [esp + 28h], eax
        push 54h
        ; Exact mapped bytes E8 29 9F 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x9f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 74: je 0x100b28fd
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes A1 10 58 1C 10: mov eax, dword ptr [0x101c5810]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x100b28ad
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x100b28ad
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100b28ad
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 2ch]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100b28af
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push 0
        push 0
        push 264h
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 EC C0 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b28ff
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
        ; Exact mapped bytes EB 02: jmp 0x100b28ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 28h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, dword ptr [esp + 2ch]
        add eax, 4
        add edi, 4
        inc ebx
        mov dword ptr [esp + 2ch], edi
        mov dword ptr [esp + 28h], eax
        lea ecx, [ebx - 1fh]
        cmp ecx, 2
        ; Exact mapped bytes 0F 8C 41 FF FF FF: jl 0x100b2870
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 50h]
        push 0fffffeffh
        ; Exact mapped bytes E8 24 C8 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 17 C8 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        push 0fffffeffh
        ; Exact mapped bytes E8 0A C8 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 FD C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        push 0fffffeffh
        ; Exact mapped bytes E8 F0 C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 E3 C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push 0fffffeffh
        ; Exact mapped bytes E8 D3 C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 C3 C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 0fffffeffh
        ; Exact mapped bytes E8 B3 C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 A3 C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        push 0fffffeffh
        ; Exact mapped bytes E8 93 C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        push 0fffffeffh
        ; Exact mapped bytes E8 83 C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push 0fffffeffh
        ; Exact mapped bytes E8 73 C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 0fffffeffh
        ; Exact mapped bytes E8 63 C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        push 101h
        ; Exact mapped bytes E8 56 C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58h]
        push 101h
        ; Exact mapped bytes E8 49 C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        push 101h
        ; Exact mapped bytes E8 3C C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        push 101h
        ; Exact mapped bytes E8 2F C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push 101h
        ; Exact mapped bytes E8 22 C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push 101h
        ; Exact mapped bytes E8 15 C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        push 101h
        ; Exact mapped bytes E8 05 C7 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push 101h
        ; Exact mapped bytes E8 F5 C6 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push 101h
        ; Exact mapped bytes E8 E5 C6 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push 101h
        ; Exact mapped bytes E8 D5 C6 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push 101h
        ; Exact mapped bytes E8 C5 C6 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push 101h
        ; Exact mapped bytes E8 B5 C6 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push 101h
        ; Exact mapped bytes E8 A5 C6 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 101h
        ; Exact mapped bytes E8 95 C6 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 101h
        ; Exact mapped bytes E8 85 C6 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        xor eax, eax
        ; Exact mapped bytes 66 89 86 CC 00 00 00: mov word ptr [esi + 0xcc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 CE 00 00 00: mov word ptr [esi + 0xce], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0c4h], eax
        mov dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes 66 C7 86 D0 00 00 00 01 00: mov word ptr [esi + 0xd0], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
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
