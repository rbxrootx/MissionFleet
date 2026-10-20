// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DCDF0 .. +0x4CD bytes.
extern "C" __declspec(naked) void FUN_100dcdf0_100DCDF0() {
    __asm {
        push -1
        push 10173760h
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
        mov ebx, dword ptr [esp + 24h]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 38h]
        mov edi, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push ebx
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 7B 1B 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor ebp, ebp
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebp
        mov ecx, dword ptr [esp + 24h]
        push 54h
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [esi], 101764c4h
        mov dword ptr [esi + 60h], ecx
        ; Exact mapped bytes E8 3D F9 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 6C: je 0x100dcee1
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 31h
        ; Exact mapped bytes 7E 10: jle 0x100dce91
        __asm _emit 0x7e
        __asm _emit 0x10
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 06: je 0x100dce91
        __asm _emit 0x74
        __asm _emit 0x06
        mov ebp, dword ptr [eax + 0c4h]
        mov edx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 2ch]
        push edx
        push 0
        push 0
        push ebx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 08 1B 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100dcee3
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
        ; Exact mapped bytes EB 02: jmp 0x100dcee3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 70h], edi
        ; Exact mapped bytes E8 AE F8 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 70: je 0x100dcf74
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 30h
        ; Exact mapped bytes 7E 12: jle 0x100dcf22
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100dcf22
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 0c0h]
        ; Exact mapped bytes EB 02: jmp 0x100dcf24
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 2ch]
        push eax
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 75 1A 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100dcf76
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
        ; Exact mapped bytes EB 02: jmp 0x100dcf76
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], edi
        ; Exact mapped bytes E8 1B F8 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 70: je 0x100dd007
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 2fh
        ; Exact mapped bytes 7E 12: jle 0x100dcfb5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100dcfb5
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 0bch]
        ; Exact mapped bytes EB 02: jmp 0x100dcfb7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 2ch]
        push ecx
        push 0
        push 0
        push ebx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E2 19 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100dd009
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
        ; Exact mapped bytes EB 02: jmp 0x100dd009
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], edi
        ; Exact mapped bytes E8 88 F7 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 70: je 0x100dd09a
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 2eh
        ; Exact mapped bytes 7E 12: jle 0x100dd048
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100dd048
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 0b8h]
        ; Exact mapped bytes EB 02: jmp 0x100dd04a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 2ch]
        push edx
        push 0
        push 0
        push ebx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 4F 19 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100dd09c
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
        ; Exact mapped bytes EB 02: jmp 0x100dd09c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 70h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 64h], edi
        ; Exact mapped bytes E8 AF 20 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        push 0fffffeffh
        ; Exact mapped bytes E8 A2 20 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        push 101h
        ; Exact mapped bytes E8 95 20 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 CB F6 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf6
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 3F: je 0x100dd124
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100dd106
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100dd106
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100dd108
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 2ch]
        lea edx, [ebx + 0ch]
        push edx
        lea edx, [edi + 13dh]
        push edx
        push 8
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6E 21 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x100dd12a
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 2ch]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 61 F6 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf6
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 49: je 0x100dd198
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0ah
        ; Exact mapped bytes 7E 12: jle 0x100dd16d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100dd16d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 280h
        ; Exact mapped bytes EB 02: jmp 0x100dd16f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 9fh]
        push 40h
        push edx
        lea edx, [edi + 111h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
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
        ; Exact mapped bytes E8 2A A1 F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xa1
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100dd19a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 F1 F5 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf5
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 49: je 0x100dd208
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0bh
        ; Exact mapped bytes 7E 12: jle 0x100dd1dd
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100dd1dd
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x100dd1df
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, 9fh
        push 40h
        add edi, 141h
        push ebx
        push edi
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
        ; Exact mapped bytes E8 BA A0 F3 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa0
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100dd20a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 300h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 81 F5 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf5
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 19: je 0x100dd248
        __asm _emit 0x74
        __asm _emit 0x19
        push 40h
        push 0
        push 0
        push 1eh
        push 258h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5C D2 FC FF: call 0x100aa4a0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100dd24a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 13a0h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 4C 04: mov word ptr [edi + 0x26], 0x44c
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x4c
        __asm _emit 0x04
        ; Exact mapped bytes 74 06: je 0x100dd268
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 38 1D 02 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100dd275
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8B 1C 02 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 13a0h]
        pop edi
        ; Exact mapped bytes 66 C7 80 FC 02 00 00 02 00: mov word ptr [eax + 0x2fc], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and ecx, 0e5f0h
        mov byte ptr [esi + 98h], 0
        or ch, 5
        mov dword ptr [esi + 94h], 0
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 10h]
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
