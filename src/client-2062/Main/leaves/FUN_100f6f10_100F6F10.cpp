// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F6F10 .. +0xF6B bytes.
extern "C" __declspec(naked) void FUN_100f6f10_100F6F10() {
    __asm {
        push -1
        push 10174425h
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
        sub esp, 0ch
        push ebx
        mov ebx, dword ptr [esp + 24h]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 2ch]
        mov esi, ecx
        lea eax, [edi + 0b4h]
        push 40h
        lea ecx, [ebx + 1eah]
        push eax
        push ecx
        push edi
        push ebx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 2ch], esi
        ; Exact mapped bytes E8 58 7A 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor ebp, ebp
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebp
        push 54h
        mov dword ptr [esp + 28h], ebp
        mov dword ptr [esi], 10176648h
        ; Exact mapped bytes E8 21 58 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        cmp edi, ebp
        mov byte ptr [esp + 24h], 1
        ; Exact mapped bytes 74 6F: je 0x100f7000
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 7
        ; Exact mapped bytes 7E 0F: jle 0x100f6fae
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 05: je 0x100f6fae
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 1ch]
        ; Exact mapped bytes EB 02: jmp 0x100f6fb0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 34h]
        push 1f4h
        push 0
        push 0
        push eax
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E9 79 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100f7002
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
        ; Exact mapped bytes EB 02: jmp 0x100f7002
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 6ch], edi
        ; Exact mapped bytes E8 4A 81 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 83 57 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 24h], 2
        ; Exact mapped bytes 74 6F: je 0x100f709e
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 6
        ; Exact mapped bytes 7E 0F: jle 0x100f704c
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100f704c
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 18h]
        ; Exact mapped bytes EB 02: jmp 0x100f704e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 34h]
        push 1feh
        push 0
        push 0
        push eax
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 4B 79 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100f70a0
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
        ; Exact mapped bytes EB 02: jmp 0x100f70a0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0c8h
        mov ecx, edi
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 70h], edi
        ; Exact mapped bytes E8 6C 80 00 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 E5 56 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x56
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 24h], 3
        ; Exact mapped bytes 74 6F: je 0x100f713c
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 8
        ; Exact mapped bytes 7E 0F: jle 0x100f70ea
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100f70ea
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 20h]
        ; Exact mapped bytes EB 02: jmp 0x100f70ec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 34h]
        push 208h
        push 0
        push 0
        push eax
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 AD 78 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100f713e
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
        ; Exact mapped bytes EB 02: jmp 0x100f713e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 74h], edi
        ; Exact mapped bytes E8 53 56 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x56
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 24h], 4
        ; Exact mapped bytes 74 6F: je 0x100f71ce
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 4
        ; Exact mapped bytes 7E 0F: jle 0x100f717c
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100f717c
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 10h]
        ; Exact mapped bytes EB 02: jmp 0x100f717e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 34h]
        push 203h
        push 0
        push 0
        push eax
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 1B 78 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100f71d0
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
        ; Exact mapped bytes EB 02: jmp 0x100f71d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 78h], edi
        ; Exact mapped bytes E8 C1 55 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x55
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 24h], 5
        ; Exact mapped bytes 74 6F: je 0x100f7260
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5
        ; Exact mapped bytes 7E 0F: jle 0x100f720e
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100f720e
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 14h]
        ; Exact mapped bytes EB 02: jmp 0x100f7210
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 34h]
        push 200h
        push 0
        push 0
        push eax
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 89 77 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100f7262
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
        ; Exact mapped bytes EB 02: jmp 0x100f7262
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 78h]
        mov ebp, dword ptr [esp + 34h]
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 7ch], edi
        ; Exact mapped bytes E8 E5 7E 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 D8 7E 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 0E 55 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x55
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 6
        ; Exact mapped bytes 74 4C: je 0x100f72ee
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x100f72c3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f72c3
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 100h
        ; Exact mapped bytes EB 02: jmp 0x100f72c5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 25h]
        push 3e8h
        push edx
        lea edx, [ebx + 1cbh]
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
        ; Exact mapped bytes E8 D4 FF F1 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100f72f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 9B 54 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 7
        mov edi, 0cbh
        ; Exact mapped bytes 74 3A: je 0x100f7354
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
        ; Exact mapped bytes 7E 12: jle 0x100f733a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f733a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100f733c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0a9h]
        push edx
        lea edx, [ebx + 4ch]
        push edx
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 3E 7F 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100f7356
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 2bch], eax
        ; Exact mapped bytes E8 35 54 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 8
        ; Exact mapped bytes 74 3A: je 0x100f73b5
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
        ; Exact mapped bytes 7E 12: jle 0x100f739b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f739b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100f739d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0a9h]
        push edx
        lea edx, [ebx + 6eh]
        push edx
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 DD 7E 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100f73b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 2bch]
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 2c0h], eax
        ; Exact mapped bytes E8 8E 7D 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2c0h]
        push 101h
        ; Exact mapped bytes E8 7E 7D 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 2bch]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f73fb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A5 7B 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f7408
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F8 7A 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 2c0h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f7421
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7F 7B 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f742e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D2 7A 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 68 53 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x53
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 9
        ; Exact mapped bytes 74 41: je 0x100f7489
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
        ; Exact mapped bytes 7E 12: jle 0x100f746c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f746c
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x100f746e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0a9h]
        push ecx
        lea ecx, [ebx + 0f0h]
        push ecx
        push 5
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 09 7E 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100f748b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 2c4h], eax
        ; Exact mapped bytes E8 00 53 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x53
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 0ah
        ; Exact mapped bytes 74 41: je 0x100f74f1
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
        ; Exact mapped bytes 7E 12: jle 0x100f74d4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f74d4
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100f74d6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0a9h]
        push edx
        lea edx, [ebx + 10eh]
        push edx
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A1 7D 00 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100f74f3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 2c4h]
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 2c8h], eax
        ; Exact mapped bytes E8 52 7C 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2c8h]
        push 101h
        ; Exact mapped bytes E8 42 7C 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 2c4h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f7537
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 69 7A 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f7544
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BC 79 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 2c8h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f755d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 43 7A 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f756a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 96 79 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        push 90h
        ; Exact mapped bytes E8 2C 52 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x52
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 0bh
        ; Exact mapped bytes 74 30: je 0x100f75b4
        __asm _emit 0x74
        __asm _emit 0x30
        push 0
        push 0
        lea ecx, [ebp + 9eh]
        push 0ffffffh
        lea edx, [ebx + 1e0h]
        push ecx
        add ebp, 44h
        push edx
        ; Exact mapped bytes 8B 15 98 56 1C 10: mov edx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebx + 12h]
        push ebp
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CE C5 00 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100f75b6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 118h], eax
        mov dword ptr [eax + 5ch], 0bh
        mov eax, dword ptr [esi + 118h]
        mov byte ptr [esp + 24h], 0
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [eax + 18h]
        lea ecx, [edx + ecx*8]
        mov dword ptr [eax + 20h], ecx
        mov edi, dword ptr [esi + 118h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f75f3
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 AD 79 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f7600
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 00 79 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 118h]
        lea ebp, [esi + 11ch]
        mov dword ptr [esp + 2ch], 4
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        push 90h
        ; Exact mapped bytes E8 7C 51 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x51
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        test eax, eax
        mov byte ptr [esp + 24h], 0ch
        ; Exact mapped bytes 74 31: je 0x100f7665
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [esp + 34h]
        push 0
        push 0
        push 0ffffffh
        lea edx, [ecx + 9ch]
        add ecx, 44h
        push edx
        lea edx, [ebx + 1e0h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1D C5 00 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100f7667
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        mov dword ptr [eax + 5ch], 0bh
        mov edx, dword ptr [esi + 118h]
        mov eax, dword ptr [ebp]
        mov byte ptr [esp + 24h], 0
        mov ecx, dword ptr [edx + 5ch]
        mov edx, dword ptr [eax + 18h]
        lea ecx, [edx + ecx*8]
        mov dword ptr [eax + 20h], ecx
        mov edi, dword ptr [ebp]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f76a1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 FF 78 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f76ae
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 52 78 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        add ebp, 4
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esp + 2ch]
        dec eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 0F 85 51 FF FF FF: jne 0x100f761a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 11ch]
        lea edx, [ebx + 0b8h]
        push edx
        ; Exact mapped bytes E8 75 76 00 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        lea eax, [ebx + 0e2h]
        push eax
        ; Exact mapped bytes E8 63 76 00 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebx + 115h]
        push ecx
        mov ecx, dword ptr [esi + 124h]
        ; Exact mapped bytes E8 51 76 00 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 128h]
        lea edx, [ebx + 186h]
        push edx
        ; Exact mapped bytes E8 3F 76 00 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 88 50 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 24h], 0dh
        ; Exact mapped bytes 74 56: je 0x100f7780
        __asm _emit 0x74
        __asm _emit 0x56
        mov eax, dword ptr [esp + 34h]
        push 0
        push 0
        push 0ffffffh
        lea ecx, [eax + 0b6h]
        lea edx, [ebx + 1e0h]
        push ecx
        add eax, 0a4h
        push edx
        push eax
        ; Exact mapped bytes A1 A4 56 1C 10: mov eax, dword ptr [0x101c56a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, 0afh
        push ebx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 20 E4 F1 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe4
        __asm _emit 0xf1
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 28h], 0eh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 2B 50 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100f7782
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 12ch], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f77a0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 00 78 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f77ad
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 53 77 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 34h]
        lea ebp, [esi + 1b0h]
        mov dword ptr [esp + 2ch], ebp
        mov dword ptr [esp + 10h], 20h
        lea ebx, [ecx + 44h]
        mov edi, dword ptr [esp + 30h]
        push 0a0h
        ; Exact mapped bytes E8 CC 4F 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x4f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        test eax, eax
        mov byte ptr [esp + 24h], 0fh
        ; Exact mapped bytes 74 4C: je 0x100f7830
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0adh
        ; Exact mapped bytes 7E 12: jle 0x100f7808
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f7808
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 2b40h]
        ; Exact mapped bytes EB 02: jmp 0x100f780a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 3e8h
        lea ecx, [edi + 106h]
        push ebx
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
        ; Exact mapped bytes E8 92 FA F1 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xfa
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100f7832
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, 0fff0h
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 80h]
        push 0a0h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 4C 4F 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x4f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        test eax, eax
        mov byte ptr [esp + 24h], 10h
        ; Exact mapped bytes 74 4C: je 0x100f78b0
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0aeh
        ; Exact mapped bytes 7E 12: jle 0x100f7888
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f7888
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 2b80h
        ; Exact mapped bytes EB 02: jmp 0x100f788a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 3e8h
        lea edx, [edi + 177h]
        push ebx
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
        ; Exact mapped bytes E8 12 FA F1 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfa
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100f78b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, 0fff0h
        mov dword ptr [ebp], eax
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp]
        push 0a0h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 CC 4E 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x4e
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        test eax, eax
        mov byte ptr [esp + 24h], 11h
        ; Exact mapped bytes 74 49: je 0x100f792d
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 15h
        ; Exact mapped bytes 7E 12: jle 0x100f7905
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f7905
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 540h
        ; Exact mapped bytes EB 02: jmp 0x100f7907
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
        push 3e8h
        add edi, 106h
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
        ; Exact mapped bytes E8 95 F9 F1 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100f792f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, 0fff0h
        mov dword ptr [ebp + 80h], eax
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 80h]
        push 70h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 4C 4E 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x4e
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        test edi, edi
        mov byte ptr [esp + 24h], 12h
        ; Exact mapped bytes 74 6C: je 0x100f79d2
        __asm _emit 0x74
        __asm _emit 0x6c
        lea eax, [ebx + 0bh]
        push 40h
        push eax
        mov eax, dword ptr [esp + 38h]
        ; Exact mapped bytes 8B 2D 98 56 1C 10: mov ebp, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [eax + 19h]
        add eax, 7
        push ecx
        push ebx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 29 70 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi + 50h], ebp
        mov dword ptr [edi + 60h], 0ffffh
        mov dword ptr [edi + 64h], eax
        mov dword ptr [edi + 68h], 10101h
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], eax
        push 80h
        mov byte ptr [esp + 28h], 13h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 DD 4D 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x4d
        __asm _emit 0x07
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 30h]
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100f79d4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp - 118h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100f79f2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 AE 75 00 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100f79ff
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 01 75 00 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        add ebp, 4
        add ebx, 0bh
        dec eax
        mov dword ptr [esp + 2ch], ebp
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 85 AE FD FF FF: jne 0x100f77c6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0a0h
        mov dword ptr [esi + 3e0h], 0
        ; Exact mapped bytes E8 74 4D 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x4d
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 14h
        ; Exact mapped bytes 74 57: je 0x100f7a93
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0ah
        ; Exact mapped bytes 7E 12: jle 0x100f7a5d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f7a5d
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 280h]
        ; Exact mapped bytes EB 02: jmp 0x100f7a5f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 34h]
        push 3e8h
        add ecx, 0a7h
        push ecx
        mov ecx, dword ptr [esp + 38h]
        add ecx, 19ah
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
        ; Exact mapped bytes E8 2F F8 F1 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf8
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100f7a95
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, 0fff0h
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        push 0a0h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes E8 ED 4C 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 15h
        ; Exact mapped bytes 74 57: je 0x100f7b1a
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0bh
        ; Exact mapped bytes 7E 12: jle 0x100f7ae4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f7ae4
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x100f7ae6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 34h]
        push 3e8h
        add edx, 0a7h
        push edx
        mov edx, dword ptr [esp + 38h]
        add edx, 1b8h
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
        ; Exact mapped bytes E8 A8 F7 F1 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf7
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100f7b1c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 90h]
        push 101h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes E8 25 76 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 101h
        ; Exact mapped bytes E8 15 76 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        ; Exact mapped bytes E8 BA CB 00 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 11ch]
        mov ebp, 4
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 A8 CB 00 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 20h
        mov ecx, dword ptr [edi]
        push 0ffffffh
        push 0
        push 1017f514h
        ; Exact mapped bytes E8 30 C1 00 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        dec ebx
        ; Exact mapped bytes 75 EA: jne 0x100f7b6d
        __asm _emit 0x75
        __asm _emit 0xea
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 D8: jne 0x100f7b61
        __asm _emit 0x75
        __asm _emit 0xd8
        xor edi, edi
        mov ecx, dword ptr [esi + 118h]
        push 0ffffffh
        push 0
        push 1017f514h
        ; Exact mapped bytes E8 0E C1 00 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        push edi
        push 0
        ; Exact mapped bytes E8 30 C2 00 00: call 0x10103de0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        inc edi
        cmp edi, 20h
        ; Exact mapped bytes 7C D5: jl 0x100f7b8b
        __asm _emit 0x7c
        __asm _emit 0xd5
        push 0a0h
        ; Exact mapped bytes E8 E0 4B 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x4b
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 16h
        ; Exact mapped bytes 74 54: je 0x100f7c24
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1eh
        ; Exact mapped bytes 7E 12: jle 0x100f7bf1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f7bf1
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 780h]
        ; Exact mapped bytes EB 02: jmp 0x100f7bf3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 34h]
        push 3e8h
        add ecx, 3ch
        push ecx
        mov ecx, dword ptr [esp + 38h]
        add ecx, 1d8h
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
        ; Exact mapped bytes E8 9E F6 F1 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf6
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100f7c26
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 2b0h], eax
        ; Exact mapped bytes E8 65 4B 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x4b
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 17h
        ; Exact mapped bytes 74 57: je 0x100f7ca2
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1fh
        ; Exact mapped bytes 7E 12: jle 0x100f7c6c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f7c6c
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 7c0h
        ; Exact mapped bytes EB 02: jmp 0x100f7c6e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 34h]
        push 3e8h
        add edx, 94h
        push edx
        mov edx, dword ptr [esp + 38h]
        add edx, 1d8h
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
        ; Exact mapped bytes E8 20 F6 F1 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf6
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100f7ca4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 2b0h]
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 2b4h], eax
        ; Exact mapped bytes E8 A1 74 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2b4h]
        push 101h
        ; Exact mapped bytes E8 91 74 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2b0h]
        mov ebp, 7fffh
        push 58h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2b4h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 B1 4A 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x4a
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 24h], 18h
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100f7d8a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 20h
        ; Exact mapped bytes 7E 12: jle 0x100f7d25
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100f7d25
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 800h]
        ; Exact mapped bytes EB 02: jmp 0x100f7d27
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 30h]
        push 3e8h
        push 0
        add eax, 48h
        push 0
        add ecx, 1d8h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 65 6C 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes 74 2D: je 0x100f7d8c
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebx + 18h]
        add ebx, 20h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebx]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebx + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebx + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebx + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100f7d8c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 2b8h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 2b8h]
        push 101h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes E8 B3 73 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2b8h]
        push 0a0h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 DF 49 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x49
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 24h], 19h
        ; Exact mapped bytes 74 57: je 0x100f7e28
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2dh
        ; Exact mapped bytes 7E 12: jle 0x100f7df2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f7df2
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b40h
        ; Exact mapped bytes EB 02: jmp 0x100f7df4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 34h]
        push 3e8h
        add edx, 0a4h
        push edx
        mov edx, dword ptr [esp + 38h]
        add edx, 140h
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
        ; Exact mapped bytes E8 9A F4 F1 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf4
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100f7e2a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 2cch], eax
        ; Exact mapped bytes E8 1F 73 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2cch]
        mov ecx, dword ptr [esp + 1ch]
        pop edi
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2cch]
        mov dword ptr [eax + 50h], 0
        mov eax, dword ptr [esi + 2cch]
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
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
        add esp, 18h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
