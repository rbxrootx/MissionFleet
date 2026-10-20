// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1001CE50 .. +0x570 bytes.
extern "C" __declspec(naked) void FUN_1001ce50_1001CE50() {
    __asm {
        push -1
        push 1016d870h
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
        mov edx, dword ptr [esp + 18h]
        push ebp
        mov ebp, dword ptr [esp + 24h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 30h]
        mov edi, dword ptr [esp + 28h]
        push 40h
        push eax
        push ecx
        push ebp
        push edi
        push edx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 1E 1B 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x1b
        __asm _emit 0x0e
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor ebx, ebx
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        push 54h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 10175598h
        ; Exact mapped bytes E8 E7 F8 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf8
        __asm _emit 0x14
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 75: je 0x1001cf40
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 44 57 1C 10: mov eax, dword ptr [0x101c5744]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 8
        ; Exact mapped bytes 7E 0F: jle 0x1001cee8
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x1001cee8
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 20h]
        ; Exact mapped bytes EB 02: jmp 0x1001ceea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 61a8h
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 AD 1A 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x1a
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x1001cf3a
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
        mov ebp, dword ptr [esp + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x1001cf42
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 7ch], edi
        ; Exact mapped bytes E8 50 F8 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf8
        __asm _emit 0x14
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x1001cfe7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 44 57 1C 10: mov eax, dword ptr [0x101c5744]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 25h
        ; Exact mapped bytes 7E 12: jle 0x1001cf86
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x1001cf86
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 94h]
        ; Exact mapped bytes EB 02: jmp 0x1001cf88
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 61a9h
        push ebx
        add ecx, 6
        push ebx
        add edx, 81h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 06 1A 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x1a
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x1001cfe1
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
        mov ebp, dword ptr [esp + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x1001cfe9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 80h], edi
        ; Exact mapped bytes E8 61 21 0E 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x21
        __asm _emit 0x0e
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 9A F7 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf7
        __asm _emit 0x14
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 75: je 0x1001d08d
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 44 57 1C 10: mov eax, dword ptr [0x101c5744]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 9
        ; Exact mapped bytes 7E 0F: jle 0x1001d035
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x1001d035
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 24h]
        ; Exact mapped bytes EB 02: jmp 0x1001d037
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 61a8h
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 60 19 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x19
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x1001d087
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
        mov ebp, dword ptr [esp + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x1001d08f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 84h], edi
        ; Exact mapped bytes E8 BB 20 0E 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 E8 F6 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x14
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 22: je 0x1001d0ec
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [esp + 28h]
        push 61b2h
        push ebx
        push ebx
        push ebp
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D1 18 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x1001d0ee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 78h], ecx
        ; Exact mapped bytes E8 61 20 0E 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 78h]
        push 184h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov dword ptr [esi + 6ch], ebx
        ; Exact mapped bytes E8 8B F6 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf6
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 39: je 0x1001d15e
        __asm _emit 0x74
        __asm _emit 0x39
        push 505050h
        push ebx
        lea ecx, [ebp + 0c8h]
        push 0dcdcdch
        push ecx
        mov ecx, dword ptr [esp + 38h]
        lea edx, [ecx + 15eh]
        add ecx, 32h
        push edx
        lea edx, [ebp + 3ah]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A6 B4 FF FF: call 0x10018600
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x1001d160
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 64h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 66 C7 47 26 BC 61: mov word ptr [edi + 0x26], 0x61bc
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xbc
        __asm _emit 0x61
        ; Exact mapped bytes 74 06: je 0x1001d17a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 26 1E 0E 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x1e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1001d187
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 79 1D 0E 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x1d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        push 184h
        mov dword ptr [eax + 5ch], 14h
        mov eax, dword ptr [esi + 64h]
        mov dword ptr [eax + 68h], 1
        ; Exact mapped bytes E8 FB F5 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf5
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 39: je 0x1001d1ee
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [esp + 28h]
        push 505050h
        push ebx
        lea edx, [ebp + 0c8h]
        push 0dcdcdch
        push edx
        lea edx, [ecx + 15eh]
        add ecx, 32h
        push edx
        lea edx, [ebp + 4eh]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 16 B4 FF FF: call 0x10018600
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x1001d1f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 68h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 66 C7 47 26 BC 61: mov word ptr [edi + 0x26], 0x61bc
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xbc
        __asm _emit 0x61
        ; Exact mapped bytes 74 06: je 0x1001d20a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 96 1D 0E 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x1d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1001d217
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E9 1C 0E 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        mov dword ptr [eax + 5ch], 14h
        mov eax, dword ptr [esi + 68h]
        mov dword ptr [eax + 68h], 1
        ; Exact mapped bytes A1 E8 57 1C 10: mov eax, dword ptr [0x101c57e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x1001d246
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x1001d246
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x1001d248
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 64h]
        push eax
        ; Exact mapped bytes E8 9F B6 FF FF: call 0x100188f0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 E8 57 1C 10: mov eax, dword ptr [0x101c57e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x1001d26c
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x1001d26c
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x1001d26e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 68h]
        push eax
        ; Exact mapped bytes E8 79 B6 FF FF: call 0x100188f0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        push 0a0h
        and edx, 0e5f8h
        or dh, 5
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes E8 0E F5 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf5
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov edi, dword ptr [esp + 38h]
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 26: je 0x1001d2cc
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [esp + 28h]
        lea ecx, [ebp + 6ch]
        push edi
        add edx, 64h
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 F6 9F FF FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1001d2ce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 BE F4 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xf4
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 29: je 0x1001d31b
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebp, 6ch
        push edi
        add ecx, 0c8h
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 A7 9F FF FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1001d31d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 88h]
        mov dword ptr [esi + 8ch], eax
        mov ebp, 620ch
        mov byte ptr [esp + 1ch], bl
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1001d343
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 5D 1C 0E 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x1c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1001d350
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B0 1B 0E 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x1b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 8ch]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1001d367
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 39 1C 0E 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x1c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1001d374
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8C 1B 0E 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x1b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push 101h
        ; Exact mapped bytes E8 DC 1D 0E 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push 101h
        ; Exact mapped bytes E8 CC 1D 0E 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x1d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 60h], ebx
        mov dword ptr [esi + 70h], ebx
        mov dword ptr [esi + 74h], ebx
        mov dword ptr [esi + 90h], ebx
        mov dword ptr [esi + 94h], ebx
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
