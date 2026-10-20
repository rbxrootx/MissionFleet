// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10091C40 .. +0x800 bytes.
extern "C" __declspec(naked) void FUN_10091c40_10091C40() {
    __asm {
        push -1
        push 10170972h
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
        mov ebp, dword ptr [esp + 20h]
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
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 2B CD 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xcd
        __asm _emit 0x06
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor eax, eax
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esp + 1ch], eax
        lea eax, [esi + 60h]
        mov dword ptr [esi], 10175ed4h
        mov dword ptr [esp + 34h], 17h
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esp + 38h], 5ch
        push 54h
        ; Exact mapped bytes E8 DD AA 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xaa
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 28h], ebx
        test ebx, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x10091d5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 3C 58 1C 10: mov ecx, dword ptr [0x101c583c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 34h]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 1B: jle 0x10091d06
        __asm _emit 0x7e
        __asm _emit 0x1b
        test eax, eax
        ; Exact mapped bytes 7C 17: jl 0x10091d06
        __asm _emit 0x7c
        __asm _emit 0x17
        mov eax, dword ptr [ecx + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x10091d06
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [esp + 30h], edx
        ; Exact mapped bytes EB 08: jmp 0x10091d0e
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 30h], 0
        push 40h
        push 0
        push 0
        push edi
        push ebp
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 92 CC 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov dword ptr [ebx], 1017523ch
        test eax, eax
        mov dword ptr [ebx + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x10091d5c
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ebx + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ebx + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [ebx + 14h]
        mov dword ptr [ebx + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x10091d5c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 34h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], ebx
        add eax, 4
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [esp + 38h]
        sub eax, 4
        dec edx
        cmp eax, 54h
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 34h], edx
        ; Exact mapped bytes 0F 8F 31 FF FF FF: jg 0x10091cbc
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 68h]
        mov dword ptr [esp + 34h], 15h
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esp + 38h], 54h
        push 54h
        ; Exact mapped bytes E8 F7 A9 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa9
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 28h], ebx
        test ebx, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x10091e40
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 3C 58 1C 10: mov ecx, dword ptr [0x101c583c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 34h]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 1B: jle 0x10091dec
        __asm _emit 0x7e
        __asm _emit 0x1b
        test eax, eax
        ; Exact mapped bytes 7C 17: jl 0x10091dec
        __asm _emit 0x7c
        __asm _emit 0x17
        mov eax, dword ptr [ecx + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x10091dec
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [esp + 30h], edx
        ; Exact mapped bytes EB 08: jmp 0x10091df4
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 30h], 0
        push 40h
        push 0
        push 0
        push edi
        push ebp
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 AC CB 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xcb
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov dword ptr [ebx], 1017523ch
        test eax, eax
        mov dword ptr [ebx + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x10091e42
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ebx + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ebx + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [ebx + 14h]
        mov dword ptr [ebx + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x10091e42
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 34h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], ebx
        add eax, 4
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [esp + 38h]
        sub eax, 4
        dec edx
        cmp eax, 4ch
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 34h], edx
        ; Exact mapped bytes 0F 8F 31 FF FF FF: jg 0x10091da2
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 60h]
        push 0fffffeffh
        ; Exact mapped bytes E8 E2 D2 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xd2
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        push 0fffffeffh
        ; Exact mapped bytes E8 D5 D2 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xd2
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        push 101h
        ; Exact mapped bytes E8 C8 D2 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xd2
        __asm _emit 0x06
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 01 A9 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xa9
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebx
        test ebx, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 4B: je 0x10091efc
        __asm _emit 0x74
        __asm _emit 0x4b
        push 0
        push 0
        lea ecx, [edi + 48h]
        push 0ffffffh
        lea edx, [ebp + 10ch]
        push ecx
        lea eax, [edi + 39h]
        push edx
        ; Exact mapped bytes 8B 15 98 56 1C 10: mov edx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 55h]
        push eax
        push ecx
        push edx
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 A4 3C F8 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x3c
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 4
        mov dword ptr [ebx], 10175338h
        ; Exact mapped bytes E8 AF A8 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xa8
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebx + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10091efe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 70h], ebx
        ; Exact mapped bytes E8 93 A8 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa8
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebx
        test ebx, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 4B: je 0x10091f6a
        __asm _emit 0x74
        __asm _emit 0x4b
        push 0
        push 0
        lea eax, [edi + 58h]
        push 0ffffffh
        lea ecx, [ebp + 10ch]
        push eax
        lea edx, [edi + 49h]
        push ecx
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [ebp + 55h]
        push edx
        push eax
        push ecx
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 36 3C F8 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x3c
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 6
        mov dword ptr [ebx], 10175338h
        ; Exact mapped bytes E8 41 A8 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xa8
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebx + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10091f6c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 74h], ebx
        ; Exact mapped bytes E8 25 A8 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa8
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebx
        test ebx, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 4A: je 0x10091fd7
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        lea edx, [edi + 68h]
        push 0ffffffh
        lea eax, [ebp + 10ch]
        push edx
        lea ecx, [edi + 59h]
        push eax
        ; Exact mapped bytes A1 98 56 1C 10: mov eax, dword ptr [0x101c5698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 55h]
        push ecx
        push edx
        push eax
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 C9 3B F8 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x3b
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 8
        mov dword ptr [ebx], 10175338h
        ; Exact mapped bytes E8 D4 A7 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xa7
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebx + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10091fd9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 78h], ebx
        ; Exact mapped bytes E8 B8 A7 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xa7
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebx
        test ebx, ebx
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 4B: je 0x10092045
        __asm _emit 0x74
        __asm _emit 0x4b
        push 0
        push 0
        lea ecx, [edi + 7bh]
        push 0ffffffh
        lea edx, [ebp + 10ch]
        push ecx
        lea eax, [edi + 6ch]
        push edx
        ; Exact mapped bytes 8B 15 98 56 1C 10: mov edx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 55h]
        push eax
        push ecx
        push edx
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 5B 3B F8 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x3b
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 0ah
        mov dword ptr [ebx], 10175338h
        ; Exact mapped bytes E8 66 A7 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xa7
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebx + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10092047
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 7ch], ebx
        ; Exact mapped bytes E8 4A A7 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa7
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebx
        test ebx, ebx
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 4E: je 0x100920b6
        __asm _emit 0x74
        __asm _emit 0x4e
        push 0
        push 0
        lea eax, [edi + 8bh]
        push 0ffffffh
        lea ecx, [ebp + 10ch]
        push eax
        lea edx, [edi + 7ch]
        push ecx
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [ebp + 55h]
        push edx
        push eax
        push ecx
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 EA 3A F8 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x3a
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 0ch
        mov dword ptr [ebx], 10175338h
        ; Exact mapped bytes E8 F5 A6 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa6
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebx + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100920b8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 58h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 80h], ebx
        ; Exact mapped bytes E8 D6 A6 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xa6
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 34h], ebx
        test ebx, ebx
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x10092161
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 58 1C 10: mov eax, dword ptr [0x101c5840]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 160h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0E: jle 0x100920fd
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 75 08: jne 0x10092105
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [esp + 38h], 0
        push 40h
        push 0
        lea edx, [edi + 8ch]
        push 0
        lea eax, [ebp + 55h]
        push edx
        push eax
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 92 C8 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [ebx], 101751f8h
        test eax, eax
        mov dword ptr [ebx + 50h], 0
        mov dword ptr [ebx + 54h], eax
        ; Exact mapped bytes 74 2D: je 0x10092163
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ebx + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ebx + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [ebx + 14h]
        mov dword ptr [ebx + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x10092163
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 84h], ebx
        ; Exact mapped bytes E8 2B A6 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xa6
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebx
        test ebx, ebx
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 51: je 0x100921d8
        __asm _emit 0x74
        __asm _emit 0x51
        push 0
        push 0
        lea ecx, [edi + 9bh]
        push 0ffffffh
        lea edx, [ebp + 10ch]
        push ecx
        lea eax, [edi + 8ch]
        push edx
        ; Exact mapped bytes 8B 15 98 56 1C 10: mov edx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 6fh]
        push eax
        push ecx
        push edx
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 C8 39 F8 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x39
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 0fh
        mov dword ptr [ebx], 10175338h
        ; Exact mapped bytes E8 D3 A5 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xa5
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebx + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100921da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 88h], ebx
        ; Exact mapped bytes E8 B4 A5 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xa5
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebx
        test ebx, ebx
        mov byte ptr [esp + 1ch], 10h
        ; Exact mapped bytes 74 28: je 0x10092226
        __asm _emit 0x74
        __asm _emit 0x28
        push 40h
        push 0
        lea eax, [edi + 9dh]
        push 0
        lea ecx, [ebp + 55h]
        push eax
        push ecx
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 99 C7 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebx], 1017523ch
        mov dword ptr [ebx + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x10092228
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 8ch], ebx
        ; Exact mapped bytes E8 66 A5 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xa5
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebx
        test ebx, ebx
        mov byte ptr [esp + 1ch], 11h
        ; Exact mapped bytes 74 28: je 0x10092274
        __asm _emit 0x74
        __asm _emit 0x28
        push 40h
        push 0
        lea edx, [edi + 9dh]
        push 0
        lea eax, [ebp + 55h]
        push edx
        push eax
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 4B C7 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebx], 1017523ch
        mov dword ptr [ebx + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x10092276
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 90h], ebx
        ; Exact mapped bytes E8 18 A5 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xa5
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebx
        test ebx, ebx
        mov byte ptr [esp + 1ch], 12h
        ; Exact mapped bytes 74 51: je 0x100922eb
        __asm _emit 0x74
        __asm _emit 0x51
        push 0
        push 0
        lea ecx, [edi + 0aeh]
        push 0ffffffh
        lea edx, [ebp + 10ch]
        push ecx
        lea eax, [edi + 9fh]
        push edx
        ; Exact mapped bytes 8B 15 98 56 1C 10: mov edx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 6fh]
        push eax
        push ecx
        push edx
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 B5 38 F8 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x38
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 13h
        mov dword ptr [ebx], 10175338h
        ; Exact mapped bytes E8 C0 A4 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebx + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100922ed
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 94h], ebx
        ; Exact mapped bytes E8 A1 A4 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 38h], ebx
        test ebx, ebx
        mov byte ptr [esp + 1ch], 14h
        ; Exact mapped bytes 74 51: je 0x10092362
        __asm _emit 0x74
        __asm _emit 0x51
        push 0
        push 0
        lea eax, [edi + 0bdh]
        push 0ffffffh
        lea ecx, [ebp + 10ch]
        push eax
        lea edx, [edi + 0aeh]
        push ecx
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [ebp + 55h]
        push edx
        push eax
        push ecx
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 3E 38 F8 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x38
        __asm _emit 0xf8
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 15h
        mov dword ptr [ebx], 10175338h
        ; Exact mapped bytes E8 49 A4 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebx + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10092364
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 98h], ebx
        ; Exact mapped bytes E8 27 A4 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xa4
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 16h
        ; Exact mapped bytes 74 45: je 0x100923ce
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 3C 58 1C 10: mov ecx, dword ptr [0x101c583c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100923a3
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov edx, dword ptr [ecx + 190h]
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x100923a5
        __asm _emit 0x75
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add edi, 0cah
        push 40h
        add ebp, 0f0h
        push edi
        push ebp
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
        ; Exact mapped bytes E8 F4 4E F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x4e
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100923d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 8ch]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 75 CD 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xcd
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        mov edx, 0bfffh
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 3ch]
        mov ecx, eax
        cmp eax, dword ptr [esi + 64h]
        ; Exact mapped bytes 74 04: je 0x1009240a
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [eax + 38h]
        cmp eax, ecx
        ; Exact mapped bytes 75 F0: jne 0x10092401
        __asm _emit 0x75
        __asm _emit 0xf0
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and edx, 0e5f0h
        mov byte ptr [esi + 0a0h], 1
        or dh, 5
        mov eax, esi
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
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
