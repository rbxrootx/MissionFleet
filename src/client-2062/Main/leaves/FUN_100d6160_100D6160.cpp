// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D6160 .. +0x6A5 bytes.
extern "C" __declspec(naked) void FUN_100d6160_100D6160() {
    __asm {
        push -1
        push 10173332h
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
        mov ebp, dword ptr [esp + 28h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 38h]
        mov edi, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push ebp
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 0B 88 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor eax, eax
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        mov ebx, dword ptr [esp + 28h]
        push 54h
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esi], 10176470h
        mov dword ptr [esi + 98h], ebx
        ; Exact mapped bytes E8 CA 65 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x65
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 79: je 0x100d6261
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 30 58 1C 10: mov eax, dword ptr [0x101c5830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 36h
        ; Exact mapped bytes 7E 12: jle 0x100d6208
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d6208
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 0d8h]
        ; Exact mapped bytes EB 02: jmp 0x100d620a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8E 87 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100d6259
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
        mov ebp, dword ptr [esp + 30h]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100d6263
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 60h], ecx
        ; Exact mapped bytes E8 EB 8E 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        push 0a0h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 18 65 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x65
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 49: je 0x100d62e1
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 30 58 1C 10: mov ecx, dword ptr [0x101c5830]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx + 5]
        cmp dword ptr [ecx + 160h], edx
        ; Exact mapped bytes 7E 15: jle 0x100d62be
        __asm _emit 0x7e
        __asm _emit 0x15
        test edx, edx
        ; Exact mapped bytes 7C 11: jl 0x100d62be
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x100d62be
        __asm _emit 0x74
        __asm _emit 0x07
        shl edx, 6
        add edx, ecx
        ; Exact mapped bytes EB 02: jmp 0x100d62c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [esp + 2ch]
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40h
        push ebp
        push edi
        push edx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 E1 0F F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x0f
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x100d62e7
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 2ch]
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 A7 64 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x64
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 3
        mov ebx, 2ch
        ; Exact mapped bytes 74 37: je 0x100d6345
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100d632e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d632e
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d6330
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 1bh]
        push edx
        lea edx, [edi + 37h]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 4D 8F 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d6347
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 05 8E 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 3B 64 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x64
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 38: je 0x100d63ad
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100d6395
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d6395
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d6397
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 1bh]
        push edx
        lea edx, [edi + 37h]
        push edx
        push 3
        push ecx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 E5 8E 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d63af
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 9D 8D 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 D3 63 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x63
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 37: je 0x100d6414
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100d63fd
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d63fd
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d63ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 2bh]
        push edx
        lea edx, [edi + 37h]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 7E 8E 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d6416
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes E8 36 8D 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 6C 63 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x63
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 38: je 0x100d647c
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100d6464
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d6464
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d6466
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 2bh]
        push edx
        lea edx, [edi + 37h]
        push edx
        push 3
        push ecx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 16 8E 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d647e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 70h]
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 CD 8C 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 03 63 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x63
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 37: je 0x100d64e4
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100d64cd
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d64cd
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d64cf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 3bh]
        push edx
        lea edx, [edi + 37h]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AE 8D 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d64e6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 66 8C 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 9C 62 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x62
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 38: je 0x100d654c
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100d6534
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d6534
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d6536
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 3bh]
        push edx
        lea edx, [edi + 37h]
        push edx
        push 3
        push ecx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 46 8D 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d654e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 78h]
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 FD 8B 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 33 62 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x62
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 37: je 0x100d65b4
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100d659d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d659d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d659f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 4bh]
        push edx
        lea edx, [edi + 37h]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 DE 8C 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d65b6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 93 8B 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 C9 61 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 38: je 0x100d661f
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100d6607
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d6607
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d6609
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 4bh]
        push edx
        lea edx, [edi + 37h]
        push edx
        push 3
        push ecx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 73 8C 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d6621
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 24 8B 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 5A 61 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 37: je 0x100d668d
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100d6676
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d6676
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d6678
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 5bh]
        push edx
        lea edx, [edi + 37h]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 05 8C 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d668f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 BA 8A 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 F0 60 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x60
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 38: je 0x100d66f8
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100d66e0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d66e0
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d66e2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 5bh]
        push edx
        lea edx, [edi + 37h]
        push edx
        push 3
        push ecx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 9A 8B 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d66fa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 88h]
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 4B 8A 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 81 60 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 37: je 0x100d6766
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100d674f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d674f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d6751
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 6bh]
        push edx
        lea edx, [edi + 37h]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2C 8B 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d6768
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 E1 89 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 17 60 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x60
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 38: je 0x100d67d1
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100d67b9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d67b9
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100d67bb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        add ebp, 6bh
        add edi, 37h
        push ebp
        push edi
        push 3
        push ecx
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 C1 8A 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d67d3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes E8 72 89 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x89
        __asm _emit 0x02
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
