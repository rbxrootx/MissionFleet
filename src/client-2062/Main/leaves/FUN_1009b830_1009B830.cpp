// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009B830 .. +0x11A9 bytes.
extern "C" __declspec(naked) void FUN_1009b830_1009B830() {
    __asm {
        push -1
        push 10170f42h
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
        mov ebx, dword ptr [esp + 1ch]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 34h]
        mov edi, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push edi
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 3B 31 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [esi], 1017566ch
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], edi
        xor ebp, ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebp
        mov dword ptr [esi], 10175f78h
        ; Exact mapped bytes 66 C7 46 60 78 05: mov word ptr [esi + 0x60], 0x578
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x78
        __asm _emit 0x05
        ; Exact mapped bytes 66 C7 46 62 B0 04: mov word ptr [esi + 0x62], 0x4b0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x62
        __asm _emit 0xb0
        __asm _emit 0x04
        push 20h
        mov dword ptr [esp + 20h], ebp
        ; Exact mapped bytes 66 C7 46 64 AA 05: mov word ptr [esi + 0x64], 0x5aa
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x64
        __asm _emit 0xaa
        __asm _emit 0x05
        mov dword ptr [esi + 2c4h], ebx
        mov dword ptr [esi + 2c8h], edi
        ; Exact mapped bytes E8 E0 0E 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0e
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebp
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 32: je 0x1009b902
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D E8 57 1C 10: mov ecx, dword ptr [0x101c57e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 7
        ; Exact mapped bytes 7E 17: jle 0x1009b8f6
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0D: je 0x1009b8f6
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 1ch]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 BC 7C 06 00: call 0x101035b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x1009b904
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 B0 7C 06 00: call 0x101035b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1009b904
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 8D 0E 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x0e
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 75: je 0x1009b99a
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 129h
        ; Exact mapped bytes 7E 12: jle 0x1009b948
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x1009b948
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 4a4h]
        ; Exact mapped bytes EB 02: jmp 0x1009b94a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 46 60: mov ax, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        mov ecx, dword ptr [esp + 2ch]
        push eax
        push 0
        push 0
        push ecx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 4F 30 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1009b99c
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
        ; Exact mapped bytes EB 02: jmp 0x1009b99c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], edi
        ; Exact mapped bytes E8 F5 0D 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x0d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 7B: je 0x1009ba38
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 12ah
        ; Exact mapped bytes 7E 12: jle 0x1009b9e0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1009b9e0
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 4a8h]
        ; Exact mapped bytes EB 02: jmp 0x1009b9e2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 46 60: mov ax, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        mov ecx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 66 05 33 00: add ax, 0x33
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x33
        __asm _emit 0x00
        push eax
        push 0
        push 0
        push ecx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B3 2F 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x1009ba34
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x1009ba3a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 70h], ecx
        ; Exact mapped bytes E8 14 37 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        push 0c4h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        ; Exact mapped bytes E8 38 0D 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 16: je 0x1009ba8e
        __asm _emit 0x74
        __asm _emit 0x16
        push 40h
        push 0
        push 0
        push -3ch
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D6 25 02 00: call 0x100be060
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x1009ba90
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 46 60: mov ax, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        mov dword ptr [esi + 0ach], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 1ch], 0
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1009bab0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F0 34 06 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009babd
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 43 34 06 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ach]
        lea ebx, [esi + 0f0h]
        mov dword ptr [esp + 38h], 20h
        ; Exact mapped bytes 66 81 60 24 FF DF: and word ptr [eax + 0x24], 0xdfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xdf
        push 58h
        ; Exact mapped bytes E8 C2 0C 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 7D: je 0x1009bb6d
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x1009bb10
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x1009bb10
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x1009bb12
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        push 0fa0h
        push 0
        add ecx, 3dh
        push 0
        push ecx
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 83 2E 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x2e
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x1009bb6f
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
        ; Exact mapped bytes EB 02: jmp 0x1009bb6f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [ebx], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        add ebx, 4
        dec eax
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 85 49 FF FF FF: jne 0x1009bad7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esi + 0b0h]
        mov dword ptr [esp + 34h], 0
        mov ebx, 3dh
        lea ebp, [esi + 80h]
        mov dword ptr [esp + 38h], ecx
        push 0a0h
        ; Exact mapped bytes E8 EB 0B 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x0b
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 50: je 0x1009bc15
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 7E 12: jle 0x1009bbe6
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ecx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x1009bbe6
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 240h
        ; Exact mapped bytes EB 02: jmp 0x1009bbe8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 66 8B 4E 60: mov cx, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 66 83 C1 0A: add cx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x0a
        push ecx
        mov ecx, dword ptr [esi + 8]
        add ecx, 6ah
        push ecx
        lea ecx, [ebx + 3bh]
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 AD B6 F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb6
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009bc17
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esp + 38h]
        push 0b8h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edx], eax
        ; Exact mapped bytes E8 74 0B 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x0b
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 19: je 0x1009bc55
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push 0
        add ecx, 68h
        push 0
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1D 4D 00 00: call 0x100a0970
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1009bc57
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0bch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 37 0B 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0b
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 1C: je 0x1009bc95
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push 0
        add edx, 9ah
        push 0
        push edx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 ED 74 00 00: call 0x100a3180
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1009bc97
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        mov edi, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 46 60: mov ax, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        mov byte ptr [esp + 1ch], 0
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1009bcbb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E5 32 06 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x32
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009bcc8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 38 32 06 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x32
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, dword ptr [ebp]
        ; Exact mapped bytes 66 8B 46 60: mov ax, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009bce4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BC 32 06 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x32
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009bcf1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0F 32 06 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x32
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, dword ptr [esp + 34h]
        mov ecx, dword ptr [ebp - 4]
        push 0
        push 0
        push 0
        push edi
        ; Exact mapped bytes E8 8C 2E 00 00: call 0x1009eb90
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push 0
        push 0
        push 0
        push edi
        ; Exact mapped bytes E8 7D 2E 00 00: call 0x1009eb90
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        inc edi
        add ebx, 4ch
        mov dword ptr [esp + 34h], edi
        mov edi, dword ptr [esp + 38h]
        add edi, 4
        add ebp, 8
        cmp ebx, 16dh
        mov dword ptr [esp + 38h], edi
        ; Exact mapped bytes 0F 8C 76 FE FF FF: jl 0x1009bbab
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 64 0A 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0a
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x1009bdd5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x1009bd72
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x1009bd72
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 100h
        ; Exact mapped bytes EB 02: jmp 0x1009bd74
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ebx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 0bb8h
        push 0
        lea eax, [ebx + 3bh]
        push 0
        add ecx, 0ch
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 1B 2C 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 32: je 0x1009bddb
        __asm _emit 0x74
        __asm _emit 0x32
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
        ; Exact mapped bytes EB 06: jmp 0x1009bddb
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 2ch]
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 170h], edi
        ; Exact mapped bytes E8 B3 09 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x09
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 7F: je 0x1009be7e
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x1009be1f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x1009be1f
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x1009be21
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 28h]
        push 0bb8h
        push 0
        lea ecx, [ebx + 6dh]
        push 0
        add edx, 2
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 72 2B 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x2b
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x1009be80
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
        ; Exact mapped bytes EB 02: jmp 0x1009be80
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 174h], edi
        ; Exact mapped bytes E8 0E 09 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x09
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x1009bf29
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x1009bec8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x1009bec8
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 180h
        ; Exact mapped bytes EB 02: jmp 0x1009beca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 28h]
        push 0bb8h
        push 0
        lea edx, [ebx + 3bh]
        push 0
        add eax, 17ah
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C7 2A 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x2a
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x1009bf2b
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x1009bf2b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 178h], edi
        ; Exact mapped bytes E8 63 08 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x1009bfd4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x1009bf73
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x1009bf73
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 140h
        ; Exact mapped bytes EB 02: jmp 0x1009bf75
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 28h]
        push 0bb8h
        push 0
        add ebx, 6ch
        push 0
        add eax, 179h
        push ebx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 1C 2A 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x2a
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x1009bfd6
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x1009bfd6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 170h]
        mov ecx, 0fffbh
        mov dword ptr [esi + 17ch], edi
        push 0fch
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 174h]
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 178h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 17ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 88 07 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0dh
        mov ebx, 0eh
        ; Exact mapped bytes 74 3F: je 0x1009c06c
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x1009c04d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009c04d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 380h
        ; Exact mapped bytes EB 02: jmp 0x1009c04f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebp, dword ptr [esp + 2ch]
        mov edi, dword ptr [esp + 28h]
        lea edx, [ebp + 5ch]
        push edx
        lea edx, [edi + 14h]
        push edx
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 26 32 06 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x32
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x1009c076
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edi, dword ptr [esp + 28h]
        mov ebp, dword ptr [esp + 2ch]
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 180h], eax
        ; Exact mapped bytes E8 15 07 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x07
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 74 3A: je 0x1009c0d4
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x1009c0ba
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009c0ba
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 380h
        ; Exact mapped bytes EB 02: jmp 0x1009c0bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 8dh]
        push edx
        lea edx, [edi + 0ch]
        push edx
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BE 31 06 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1009c0d6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 184h], eax
        ; Exact mapped bytes E8 B5 06 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x06
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov ebx, 0fh
        test eax, eax
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 74 3A: je 0x1009c139
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x1009c11f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009c11f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x1009c121
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 5ch]
        push edx
        lea edx, [edi + 17ch]
        push edx
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 59 31 06 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1009c13b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 188h], eax
        ; Exact mapped bytes E8 50 06 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 10h
        ; Exact mapped bytes 74 3D: je 0x1009c19d
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x1009c180
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009c180
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x1009c182
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 8dh]
        add edi, 17ch
        push edx
        push edi
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F5 30 06 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1009c19f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 180h]
        mov dword ptr [esi + 18ch], eax
        mov ebx, 1194h
        mov byte ptr [esp + 1ch], 0
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009c1c6
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DA 2D 06 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009c1d3
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2D 2D 06 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, dword ptr [esi + 184h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009c1ea
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B6 2D 06 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009c1f7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 09 2D 06 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, dword ptr [esi + 188h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009c20e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 92 2D 06 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009c21b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E5 2C 06 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, dword ptr [esi + 18ch]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009c232
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6E 2D 06 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009c23f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C1 2C 06 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 5A 05 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x05
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 11h
        ; Exact mapped bytes 74 14: je 0x1009c26a
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 08 8B F7 FF: call 0x10014d70
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x8b
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009c26c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push esi
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 2d0h], eax
        ; Exact mapped bytes E8 F1 8B F7 FF: call 0x10014e70
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x8b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 2d0h]
        add ebp, 190h
        push ebp
        ; Exact mapped bytes E8 2F 2B 06 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x2b
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, dword ptr [esi + 2d0h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009c2a8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F8 2C 06 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009c2b5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4B 2C 06 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 E4 04 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 12h
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x1009c358
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 2eeh
        ; Exact mapped bytes 7E 12: jle 0x1009c2f5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1009c2f5
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 0bb8h]
        ; Exact mapped bytes EB 02: jmp 0x1009c2f7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 46 60: mov ax, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        mov ebx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        mov ecx, dword ptr [esi + 2d0h]
        ; Exact mapped bytes 66 05 64 00: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x00
        push eax
        push 0
        lea eax, [ebx + 56h]
        push 0
        push eax
        push edx
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 91 26 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 32: je 0x1009c35e
        __asm _emit 0x74
        __asm _emit 0x32
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
        ; Exact mapped bytes EB 06: jmp 0x1009c35e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 2ch]
        xor edi, edi
        mov ebp, dword ptr [esp + 28h]
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 290h], edi
        ; Exact mapped bytes E8 E7 2D 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 20 04 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 13h
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x1009c41c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 2efh
        ; Exact mapped bytes 7E 12: jle 0x1009c3b9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1009c3b9
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 0bbch]
        ; Exact mapped bytes EB 02: jmp 0x1009c3bb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 46 60: mov ax, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        mov ecx, dword ptr [esi + 2d0h]
        ; Exact mapped bytes 66 05 64 00: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x00
        lea edx, [ebx + 56h]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push 0
        push 0
        push edx
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 D1 25 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x1009c416
        __asm _emit 0x74
        __asm _emit 0x2a
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
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x1009c41e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 6ch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 294h], edi
        ; Exact mapped bytes E8 70 03 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 14h
        ; Exact mapped bytes 74 42: je 0x1009c482
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ah
        ; Exact mapped bytes 7E 12: jle 0x1009c461
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009c461
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0a80h
        ; Exact mapped bytes EB 02: jmp 0x1009c463
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 60: mov dx, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x60
        ; Exact mapped bytes 66 83 C2 64: add dx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        push edx
        lea edx, [ebx + 56h]
        push edx
        push ebp
        push ecx
        mov ecx, dword ptr [esi + 2d0h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 E0 5E F9 FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x5e
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009c484
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + 298h], eax
        ; Exact mapped bytes E8 3A 61 F9 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x61
        __asm _emit 0xf9
        __asm _emit 0xff
        push 6ch
        ; Exact mapped bytes E8 03 03 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 15h
        ; Exact mapped bytes 74 42: je 0x1009c4ef
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 29h
        ; Exact mapped bytes 7E 12: jle 0x1009c4ce
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009c4ce
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0a40h
        ; Exact mapped bytes EB 02: jmp 0x1009c4d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 60: mov dx, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x60
        ; Exact mapped bytes 66 83 C2 64: add dx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        push edx
        lea edx, [ebx + 56h]
        push edx
        push ebp
        push ecx
        mov ecx, dword ptr [esi + 2d0h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 73 5E F9 FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x5e
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009c4f1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + 29ch], eax
        ; Exact mapped bytes E8 CD 60 F9 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x60
        __asm _emit 0xf9
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 96 02 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 16h
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x1009c5aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 2
        ; Exact mapped bytes 7E 12: jle 0x1009c540
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x1009c540
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 80h
        ; Exact mapped bytes EB 02: jmp 0x1009c542
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 46 60: mov ax, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        mov ecx, dword ptr [esi + 2d0h]
        ; Exact mapped bytes 66 05 64 00: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x00
        lea edx, [ebx + 56h]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push 0
        push 0
        push edx
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 4A 24 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x1009c5a4
        __asm _emit 0x74
        __asm _emit 0x2a
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
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x1009c5ac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 2a0h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0cch
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 D9 01 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 17h
        ; Exact mapped bytes 74 26: je 0x1009c5fd
        __asm _emit 0x74
        __asm _emit 0x26
        push 40h
        push 0
        lea ecx, [ebx + 0e0h]
        push 0
        push ecx
        mov ecx, dword ptr [esi + 2d0h]
        lea edx, [ebp + 36ah]
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 17 28 FB FF: call 0x1004ee10
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x28
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x1009c5ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 2a4h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 C6 11: mov word ptr [edi + 0x26], 0x11c6
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xc6
        __asm _emit 0x11
        ; Exact mapped bytes 74 06: je 0x1009c61d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 83 29 06 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x29
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009c62a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D6 28 06 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 A4 57 1C 10: mov edx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 2a4h]
        push 4
        push 0
        push 3
        push 14h
        push edx
        ; Exact mapped bytes E8 2C 2C FB FF: call 0x1004f270
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x2c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 2a4h]
        push 2
        ; Exact mapped bytes E8 1F 2E FB FF: call 0x1004f470
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x2e
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0a0h
        ; Exact mapped bytes E8 45 01 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 18h
        ; Exact mapped bytes 74 4D: je 0x1009c6b8
        __asm _emit 0x74
        __asm _emit 0x4d
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x1009c68c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009c68c
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x1009c68e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 60: mov dx, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x60
        ; Exact mapped bytes 66 83 C2 64: add dx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebp
        push ecx
        mov ecx, dword ptr [esi + 2d0h]
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 0A AC F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xac
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009c6ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 2d4h], eax
        ; Exact mapped bytes E8 D4 00 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 19h
        ; Exact mapped bytes 74 7B: je 0x1009c759
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 2d0h
        ; Exact mapped bytes 7E 12: jle 0x1009c701
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1009c701
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 0b40h]
        ; Exact mapped bytes EB 02: jmp 0x1009c703
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 28h]
        push 1176h
        push 0
        push 0
        push ebx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 96 22 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x22
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x1009c751
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x1009c75b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 74h], ecx
        ; Exact mapped bytes E8 F3 29 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x29
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E8 23 00 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1ah
        ; Exact mapped bytes 74 79: je 0x1009c808
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 2d1h
        ; Exact mapped bytes 7E 12: jle 0x1009c7b2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1009c7b2
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 0b44h]
        ; Exact mapped bytes EB 02: jmp 0x1009c7b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 28h]
        push 1176h
        push 0
        push 0
        push ebx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E5 21 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x1009c802
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
        ; Exact mapped bytes EB 02: jmp 0x1009c80a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 78h], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        push 59ch
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 7E FF 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1bh
        ; Exact mapped bytes 74 1D: je 0x1009c84f
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        push 0
        lea edx, [ebx + 0ch]
        push 0
        lea ecx, [ebp + 323h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 45 24 02 00: call 0x100bec90
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x1009c851
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 46 62: mov ax, word ptr [esi + 0x62]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x62
        mov dword ptr [esi + 2a8h], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 1ch], 0
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1009c871
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2F 27 06 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x27
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009c87e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 82 26 06 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        push 0a04h
        ; Exact mapped bytes E8 18 FF 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1ch
        ; Exact mapped bytes 74 18: je 0x1009c8b0
        __asm _emit 0x74
        __asm _emit 0x18
        push 40h
        push 0
        push 0
        lea edx, [ebp + 1c6h]
        push ebx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 32 23 00 00: call 0x1009ebe0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1009c8b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        xor ebx, ebx
        push 0dh
        push ebx
        push ebx
        push ebx
        mov ecx, eax
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 C5 22 00 00: call 0x1009eb90
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 9ch]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 AD 11: mov word ptr [edi + 0x26], 0x11ad
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xad
        __asm _emit 0x11
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1009c8e4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BC 26 06 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1009c8f1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0F 26 06 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        push 124h
        ; Exact mapped bytes E8 A5 FE 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1dh
        ; Exact mapped bytes 74 2C: je 0x1009c937
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 66 8B 4E 60: mov cx, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        lea edx, [ebp + 341h]
        ; Exact mapped bytes 66 81 C1 E8 03: add cx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x03
        add ebp, 1aeh
        push ecx
        push 2feh
        push edx
        push 25eh
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AB 46 00 00: call 0x100a0fe0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1009c939
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 52 FE 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1eh
        ; Exact mapped bytes 74 50: je 0x1009c9ae
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D B0 57 1C 10: mov ecx, dword ptr [0x101c57b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 12: jle 0x1009c97f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1009c97f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 80h
        ; Exact mapped bytes EB 02: jmp 0x1009c981
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 60: mov dx, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x60
        ; Exact mapped bytes 66 81 C2 D0 07: add dx, 0x7d0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xd0
        __asm _emit 0x07
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 2d0h
        push 0dbh
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 14 A9 F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa9
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009c9b0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 0a4h], eax
        mov dword ptr [esi + 0a8h], ebx
        mov dword ptr [esi + 2cch], ebx
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
