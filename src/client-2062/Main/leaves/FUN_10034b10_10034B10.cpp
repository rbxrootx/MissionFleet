// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10034B10 .. +0x175A bytes.
extern "C" __declspec(naked) void FUN_10034b10_10034B10() {
    __asm {
        push -1
        push 1016e526h
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
        sub esp, 8
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
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push ebp
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 D9 35 00 00: call 0x10038130
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], ebp
        xor ebx, ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        mov dword ptr [esi], 10175850h
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and ecx, 0e5ffh
        push 54h
        or ch, 5
        mov dword ptr [esp + 24h], ebx
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes E8 15 7C 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes 74 20: je 0x10034bbd
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [esp + 2ch]
        push 1f4h
        push ebx
        push ebx
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 FE 9D 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x9d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10034bbf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 78h], edi
        ; Exact mapped bytes E8 8E A5 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa5
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 78h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 BE 7B 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x7b
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 2
        ; Exact mapped bytes 74 7B: je 0x10034c6f
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0c4h
        ; Exact mapped bytes 7E 12: jle 0x10034c17
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10034c17
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 310h]
        ; Exact mapped bytes EB 02: jmp 0x10034c19
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        push 1feh
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 7E 9D 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x9d
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x10034c69
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
        mov ebp, dword ptr [esp + 30h]
        ; Exact mapped bytes EB 02: jmp 0x10034c71
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0e6h
        mov ecx, edi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 74h], edi
        ; Exact mapped bytes E8 9C A4 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 03 7B 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x7b
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 3
        ; Exact mapped bytes 74 22: je 0x10034cd1
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [esp + 2ch]
        push 208h
        push ebx
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 EC 9C 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10034cd3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 6ch], ecx
        ; Exact mapped bytes E8 7C A4 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 AC 7A 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x7a
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 4
        ; Exact mapped bytes 74 77: je 0x10034d7d
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0c5h
        ; Exact mapped bytes 7E 12: jle 0x10034d29
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10034d29
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 314h]
        ; Exact mapped bytes EB 02: jmp 0x10034d2b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push 208h
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6C 9C 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x10034d7f
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
        ; Exact mapped bytes EB 02: jmp 0x10034d7f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 84h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 70h], edi
        ; Exact mapped bytes E8 10 7A 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x7a
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 5
        ; Exact mapped bytes 74 1C: je 0x10034dbc
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push 212h
        push ecx
        push edx
        push ebx
        push esi
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 D6 E4 FE FF: call 0x10023290
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10034dbe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0b8h], eax
        ; Exact mapped bytes E8 8C A3 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x00
        push 84h
        ; Exact mapped bytes E8 C2 79 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x79
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 6
        ; Exact mapped bytes 74 1C: je 0x10034e0a
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push 211h
        push ecx
        push edx
        push ebx
        push esi
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 88 E4 FE FF: call 0x10023290
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10034e0c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 3E A3 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0bch]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        ; Exact mapped bytes E8 5F 79 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x79
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 7
        ; Exact mapped bytes 74 7E: je 0x10034ed1
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 11bh
        ; Exact mapped bytes 7E 12: jle 0x10034e76
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10034e76
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 46ch]
        ; Exact mapped bytes EB 02: jmp 0x10034e78
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        add eax, 0ddh
        push ebx
        add ecx, 26h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 1A 9B 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x9b
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x10034ecd
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
        ; Exact mapped bytes EB 02: jmp 0x10034ed3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0c8h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 1f8h], ecx
        ; Exact mapped bytes E8 39 A2 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1f8h]
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov eax, dword ptr [esi + 1f8h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 1f8h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edi, dword ptr [esi + 1f8h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 26 02: mov word ptr [edi + 0x26], 0x226
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x26
        __asm _emit 0x02
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10034f24
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7C A0 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10034f31
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 CF 9F 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 68 78 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 8
        ; Exact mapped bytes 74 7F: je 0x10034fc9
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 11ah
        ; Exact mapped bytes 7E 12: jle 0x10034f6d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10034f6d
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 468h]
        ; Exact mapped bytes EB 02: jmp 0x10034f6f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        add ecx, 0ddh
        push ebx
        add edx, 26h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 22 9A 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x10034fc5
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10034fcb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebp, dword ptr [esp + 30h]
        push 101h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 1fch], ecx
        ; Exact mapped bytes E8 7D A1 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1fch]
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov eax, dword ptr [esi + 1fch]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 1fch]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edi, dword ptr [esi + 1fch]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 0F 06: mov word ptr [edi + 0x26], 0x60f
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x0f
        __asm _emit 0x06
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10035020
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 80 9F 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1003502d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D3 9E 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 69 77 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x77
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 9
        ; Exact mapped bytes 74 4D: je 0x10035094
        __asm _emit 0x74
        __asm _emit 0x4d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x10035068
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10035068
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 100h
        ; Exact mapped bytes EB 02: jmp 0x1003506a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 2ch]
        push 3e8h
        push ebp
        lea edx, [edi + 226h]
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
        ; Exact mapped bytes E8 2E 22 FE FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x1003509a
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 2ch]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes E8 F2 76 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x76
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 0ah
        ; Exact mapped bytes 74 4F: je 0x1003510d
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 26h
        ; Exact mapped bytes 7E 12: jle 0x100350df
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100350df
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 980h
        ; Exact mapped bytes EB 02: jmp 0x100350e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 159h]
        push 3e8h
        push edx
        lea edx, [edi + 186h]
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
        ; Exact mapped bytes E8 B5 21 FE FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1003510f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0c0h], eax
        ; Exact mapped bytes E8 7D 76 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x76
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 0bh
        ; Exact mapped bytes 74 4F: je 0x10035182
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 25h
        ; Exact mapped bytes 7E 12: jle 0x10035154
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10035154
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 940h
        ; Exact mapped bytes EB 02: jmp 0x10035156
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 159h]
        push 3e8h
        push edx
        lea edx, [edi + 1e0h]
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
        ; Exact mapped bytes E8 40 21 FE FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10035184
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0c4h], eax
        mov ecx, dword ptr [esi + 0c0h]
        push 101h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 C2 9F 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 101h
        ; Exact mapped bytes E8 B2 9F 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 E8 75 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 0ch
        ; Exact mapped bytes 74 4C: je 0x10035214
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1eh
        ; Exact mapped bytes 7E 12: jle 0x100351e9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100351e9
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 780h
        ; Exact mapped bytes EB 02: jmp 0x100351eb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0ddh]
        push 3e8h
        push edx
        lea edx, [edi + 14h]
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
        ; Exact mapped bytes E8 AE 20 FE FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10035216
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E8 76 75 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x75
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 0dh
        ; Exact mapped bytes 74 4C: je 0x10035286
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1fh
        ; Exact mapped bytes 7E 12: jle 0x1003525b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1003525b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 7c0h
        ; Exact mapped bytes EB 02: jmp 0x1003525d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 13bh]
        push 3e8h
        push edx
        lea edx, [edi + 14h]
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
        ; Exact mapped bytes E8 3C 20 FE FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10035288
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0d0h], eax
        mov ecx, dword ptr [esi + 0cch]
        push 101h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 BE 9E 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d0h]
        push 101h
        ; Exact mapped bytes E8 AE 9E 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0cch]
        mov ecx, 7fffh
        push 0a0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 CB 74 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x74
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 0eh
        ; Exact mapped bytes 74 4C: je 0x10035331
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 20h
        ; Exact mapped bytes 7E 12: jle 0x10035306
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10035306
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 800h
        ; Exact mapped bytes EB 02: jmp 0x10035308
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
        add ebp, 0e9h
        push 3e8h
        add edi, 15h
        push ebp
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
        ; Exact mapped bytes E8 91 1F FE FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10035333
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 7ch]
        push 101h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 13 9E 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        mov dword ptr [esp + 3ch], ebx
        mov dword ptr [esp + 34h], 64h
        lea ebp, [esi + 80h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, 110h
        sub eax, esi
        mov dword ptr [esi + 0d8h], ebx
        mov dword ptr [esi + 0d4h], ebx
        mov dword ptr [esp + 28h], eax
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 30h]
        add eax, 1d1h
        push 54h
        mov dword ptr [esi + 0a0h], eax
        lea eax, [ecx + 0c0h]
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes E8 FB 73 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x73
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 0fh
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x1003544a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B4 57 1C 10: mov ecx, dword ptr [0x101c57b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 34h]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 1D: jle 0x100353ea
        __asm _emit 0x7e
        __asm _emit 0x1d
        cmp eax, ebx
        ; Exact mapped bytes 7C 19: jl 0x100353ea
        __asm _emit 0x7c
        __asm _emit 0x19
        mov eax, dword ptr [ecx + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0F: je 0x100353ea
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [esp + 28h]
        add edx, ebp
        mov eax, dword ptr [edx + eax]
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes EB 04: jmp 0x100353ee
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 38h], ebx
        mov eax, dword ptr [esi + 0a0h]
        mov edx, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esi + 0a4h]
        push 40h
        push ebx
        add eax, edx
        push ebx
        push ecx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A2 95 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [edi], 1017523ch
        cmp eax, ebx
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x1003544c
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1003544c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp], edi
        ; Exact mapped bytes E8 46 73 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x73
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 10h
        ; Exact mapped bytes 74 2E: je 0x1003549a
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [esi + 0a4h]
        mov ecx, dword ptr [esi + 0a0h]
        mov edx, dword ptr [esp + 3ch]
        push 40h
        dec eax
        push ebx
        lea ecx, [ecx + edx - 1]
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 21 95 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x1003549c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 10h], edi
        ; Exact mapped bytes E8 F6 72 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x72
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 11h
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x10035549
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 6ch
        ; Exact mapped bytes 7E 16: jle 0x100354e4
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x100354e4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 1b0h]
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes EB 04: jmp 0x100354e8
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 38h], ebx
        mov eax, dword ptr [esi + 0a4h]
        mov ecx, dword ptr [esi + 0a0h]
        mov edx, dword ptr [esp + 3ch]
        push 40h
        sub eax, 5
        push ebx
        lea ecx, [ecx + edx - 5]
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A3 94 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [edi], 1017523ch
        cmp eax, ebx
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x1003554b
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1003554b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp + 28h], edi
        mov edi, dword ptr [ebp]
        mov byte ptr [esp + 20h], bl
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 2E 02: mov word ptr [edi + 0x26], 0x22e
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x2e
        __asm _emit 0x02
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10035568
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 38 9A 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10035575
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8B 99 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x99
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 2C 02: mov word ptr [edi + 0x26], 0x22c
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x2c
        __asm _emit 0x02
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1003558b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 15 9A 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10035598
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 68 99 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 28h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 21 03: mov word ptr [edi + 0x26], 0x321
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x21
        __asm _emit 0x03
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100355ae
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F2 99 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x99
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100355bb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 45 99 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x99
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push 1eh
        ; Exact mapped bytes E8 9B 9B 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x9b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push 0ffh
        ; Exact mapped bytes E8 4E 9B 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x9b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 28h]
        mov edx, dword ptr [esp + 3ch]
        add ebp, 4
        add edx, 17h
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esp + 34h]
        inc eax
        mov dword ptr [esp + 3ch], edx
        mov dword ptr [esp + 34h], eax
        add eax, -64h
        cmp eax, 4
        ; Exact mapped bytes 0F 8C 81 FD FF FF: jl 0x1003537f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 30h]
        ; Exact mapped bytes 66 C7 86 EE 02 00 00 FF 00: mov word ptr [esi + 0x2ee], 0xff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0x00
        mov eax, 0ffffh
        mov dword ptr [esi + 30ch], 1
        ; Exact mapped bytes 66 89 86 E8 02 00 00: mov word ptr [esi + 0x2e8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 E6 02 00 00: mov word ptr [esi + 0x2e6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 E4 02 00 00: mov word ptr [esi + 0x2e4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 1e0h]
        ; Exact mapped bytes 66 89 86 E2 02 00 00: mov word ptr [esi + 0x2e2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 DC 02 00 00: mov word ptr [esi + 0x2dc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 DA 02 00 00: mov word ptr [esi + 0x2da], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 D8 02 00 00: mov word ptr [esi + 0x2d8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 D6 02 00 00: mov word ptr [esi + 0x2d6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 D4 02 00 00: mov word ptr [esi + 0x2d4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E E0 02 00 00: mov word ptr [esi + 0x2e0], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E DE 02 00 00: mov word ptr [esi + 0x2de], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 EC 02 00 00: mov word ptr [esi + 0x2ec], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 EA 02 00 00: mov word ptr [esi + 0x2ea], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 2a8h], ebx
        mov dword ptr [esi + 300h], ebx
        mov dword ptr [esi + 304h], ebx
        mov dword ptr [esi + 2fch], ebx
        mov dword ptr [esp + 3ch], ecx
        lea ebp, [edx + 9dh]
        mov dword ptr [esp + 38h], 3
        push 70h
        ; Exact mapped bytes E8 F4 70 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x70
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 12h
        ; Exact mapped bytes 74 4F: je 0x1003570d
        __asm _emit 0x74
        __asm _emit 0x4f
        push 3c3c3ch
        push ebx
        lea eax, [ebp + 0ch]
        push 0c8c8c8h
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        mov eax, dword ptr [esp + 3ch]
        lea ecx, [eax + 258h]
        add eax, 15eh
        push ecx
        push ebp
        push eax
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 92 04 FE FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 24h], 13h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 9D 70 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x70
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 02: jmp 0x1003570f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 3ch]
        mov byte ptr [esp + 20h], bl
        mov dword ptr [eax], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x1003572c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 74 98 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10035739
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C7 97 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x97
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 38h]
        add edx, 4
        add ebp, 0ch
        dec eax
        mov dword ptr [esp + 3ch], edx
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 85 4F FF FF FF: jne 0x100356a5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 90h
        ; Exact mapped bytes E8 40 70 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x70
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 14h
        ; Exact mapped bytes 74 39: je 0x100357a9
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [esp + 30h]
        push ebx
        push ebx
        push 0ffffffh
        lea edx, [ecx + 148h]
        add ecx, 0e1h
        push edx
        mov edx, dword ptr [esp + 3ch]
        lea edi, [edx + 0ddh]
        add edx, 28h
        push edi
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D9 E3 0C 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe3
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100357ab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0e8h], eax
        mov dword ptr [eax + 5ch], 0dh
        mov eax, dword ptr [esi + 0e8h]
        mov byte ptr [esp + 20h], bl
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [eax + 18h]
        lea ecx, [edx + ecx*8]
        mov dword ptr [eax + 20h], ecx
        mov edi, dword ptr [esi + 0e8h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100357e7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B9 97 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x97
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100357f4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0C 97 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x97
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e8h]
        lea ebp, [esi + 0ech]
        mov dword ptr [esp + 3ch], 7
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        push 90h
        ; Exact mapped bytes E8 88 6F 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x6f
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 15h
        ; Exact mapped bytes 74 3C: je 0x10035864
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [esp + 30h]
        push ebx
        push ebx
        push 0ffffffh
        lea edx, [ecx + 148h]
        add ecx, 0e1h
        push edx
        mov edx, dword ptr [esp + 3ch]
        lea edi, [edx + 25dh]
        add edx, 0e2h
        push edi
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1E E3 0C 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe3
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10035866
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        mov dword ptr [eax + 5ch], 0dh
        mov eax, dword ptr [ebp]
        mov byte ptr [esp + 20h], bl
        mov ecx, dword ptr [eax + 5ch]
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
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10035899
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 07 97 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x97
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100358a6
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 5A 96 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x96
        __asm _emit 0x0c
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
        mov eax, dword ptr [esp + 3ch]
        dec eax
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 0F 85 4D FF FF FF: jne 0x1003580e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 70h
        ; Exact mapped bytes E8 D8 6E 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x6e
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 16h
        ; Exact mapped bytes 74 77: je 0x10035951
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [esp + 30h]
        ; Exact mapped bytes 8B 15 AC 56 1C 10: mov edx, dword ptr [0x101c56ac]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebp, dword ptr [esp + 2ch]
        mov dword ptr [esp + 3ch], edx
        lea ecx, [eax + 6eh]
        push 40h
        lea edx, [ebp + 1f4h]
        push ecx
        add eax, 50h
        push edx
        push eax
        lea eax, [ebp + 14h]
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A7 90 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x90
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 3ch]
        mov dword ptr [edi + 60h], 0ffffffh
        mov dword ptr [edi + 50h], ecx
        mov dword ptr [edi + 64h], ebx
        mov dword ptr [edi + 68h], 1
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], ebx
        push 80h
        mov byte ptr [esp + 24h], 17h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 59 6E 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x6e
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 06: jmp 0x10035957
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 2ch]
        xor edi, edi
        mov dword ptr [esi + 10ch], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x10035974
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2C 96 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10035981
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7F 95 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        lea edx, [esi + 110h]
        add eax, 2ah
        mov dword ptr [esp + 3ch], edx
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 34h], 30h
        push 184h
        ; Exact mapped bytes E8 F8 6D 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x6d
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 18h
        ; Exact mapped bytes 74 32: je 0x100359ea
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [esp + 38h]
        push ebx
        push ebx
        push 0ffffffh
        lea edx, [ecx + 10h]
        push edx
        lea edx, [ebp + 258h]
        push edx
        ; Exact mapped bytes 8B 15 98 56 1C 10: mov edx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        lea ecx, [ebp + 1bdh]
        push ecx
        push edx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1A 2C FE FF: call 0x10018600
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100359ec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 3ch]
        mov byte ptr [esp + 20h], bl
        mov dword ptr [eax], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x10035a09
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 97 95 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10035a16
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EA 94 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x94
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 3ch]
        mov eax, dword ptr [ecx]
        add ecx, 4
        mov dword ptr [esp + 3ch], ecx
        mov ecx, dword ptr [esp + 38h]
        mov dword ptr [eax + 5ch], 10h
        mov eax, dword ptr [esp + 34h]
        add ecx, 9
        dec eax
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 85 5A FF FF FF: jne 0x1003599e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esp + 30h]
        lea eax, [ebp + 52h]
        lea ecx, [edi + 6ah]
        push ecx
        mov ecx, dword ptr [esi + 1c0h]
        push eax
        ; Exact mapped bytes E8 75 92 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x92
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1c4h]
        lea edx, [edi + 77h]
        lea eax, [ebp + 52h]
        push edx
        push eax
        ; Exact mapped bytes E8 62 92 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x92
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1c8h]
        lea eax, [edi + 8eh]
        push eax
        lea eax, [ebp + 52h]
        push eax
        ; Exact mapped bytes E8 4C 92 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x92
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [edi + 9ch]
        lea eax, [ebp + 52h]
        push ecx
        mov ecx, dword ptr [esi + 1cch]
        push eax
        ; Exact mapped bytes E8 36 92 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x92
        __asm _emit 0x0c
        __asm _emit 0x00
        push 184h
        ; Exact mapped bytes E8 FC 6C 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x6c
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 19h
        ; Exact mapped bytes 74 31: je 0x10035ae5
        __asm _emit 0x74
        __asm _emit 0x31
        push ebx
        push ebx
        lea edx, [edi + 8fh]
        push 0dcdcdch
        lea ecx, [ebp + 0edh]
        push edx
        add edi, 67h
        push ecx
        ; Exact mapped bytes 8B 0D B0 56 1C 10: mov ecx, dword ptr [0x101c56b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 3ch]
        push edi
        push edx
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1F 2B FE FF: call 0x10018600
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10035ae7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 1d0h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x10035b04
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9C 94 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x94
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10035b11
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EF 93 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x93
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1d0h]
        push 70h
        mov dword ptr [eax + 5ch], 1eh
        ; Exact mapped bytes E8 7B 6C 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x6c
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 1ah
        ; Exact mapped bytes 74 78: je 0x10035baf
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [esp + 30h]
        ; Exact mapped bytes 8B 15 A4 56 1C 10: mov edx, dword ptr [0x101c56a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 3ch], edx
        push 40h
        lea ecx, [eax + 172h]
        lea edx, [ebp + 1b8h]
        push ecx
        add eax, 165h
        push edx
        push eax
        lea eax, [ebp + 0ah]
        mov ecx, edi
        push eax
        push esi
        ; Exact mapped bytes E8 49 8E 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 3ch]
        mov dword ptr [edi + 60h], 0dcdcdch
        mov dword ptr [edi + 50h], ecx
        mov dword ptr [edi + 64h], ebx
        mov dword ptr [edi + 68h], 1
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], ebx
        push 80h
        mov byte ptr [esp + 24h], 1bh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 FB 6B 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x6b
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 02: jmp 0x10035bb1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 1dch], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x10035bce
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D2 93 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x93
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10035bdb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 25 93 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x93
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1dch]
        push 90h
        mov dword ptr [eax + 5ch], 14h
        ; Exact mapped bytes E8 AE 6B 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x6b
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 1ch
        ; Exact mapped bytes 74 34: je 0x10035c36
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [esp + 30h]
        push ebx
        push 0ffffffh
        lea edx, [ecx + 82h]
        add ecx, 61h
        push edx
        lea edx, [ebp + 226h]
        push edx
        ; Exact mapped bytes 8B 15 A4 56 1C 10: mov edx, dword ptr [0x101c56a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        lea ecx, [ebp + 1c6h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AC 00 0D 00: call 0x10105ce0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10035c38
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 1d4h], eax
        ; Exact mapped bytes 8B 3D A4 57 1C 10: mov edi, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov byte ptr [esp + 20h], bl
        mov ecx, dword ptr [edi + 160h]
        cmp ecx, 0c9h
        ; Exact mapped bytes 7E 12: jle 0x10035c68
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [edi + 190h]
        cmp edx, ebx
        ; Exact mapped bytes 74 08: je 0x10035c68
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 3240h
        ; Exact mapped bytes EB 02: jmp 0x10035c6a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        cmp ecx, 0c8h
        ; Exact mapped bytes 7E 12: jle 0x10035c84
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [edi + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10035c84
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3200h
        ; Exact mapped bytes EB 02: jmp 0x10035c86
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 B1 05 0D 00: call 0x10106240
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1d4h]
        push ebx
        ; Exact mapped bytes E8 45 05 0D 00: call 0x101061e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x05
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1d4h]
        mov dword ptr [eax + 74h], 0ffh
        mov eax, dword ptr [esi + 1d4h]
        mov dword ptr [eax + 70h], ebx
        mov edi, dword ptr [esi + 1d4h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 20 03: mov word ptr [edi + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10035cca
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D6 92 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x92
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10035cd7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 29 92 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x92
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1d4h]
        push 20h
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes E8 B6 6A 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x6a
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 1dh
        ; Exact mapped bytes 74 32: je 0x10035d2c
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 0ch
        ; Exact mapped bytes 7E 17: jle 0x10035d20
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0D: je 0x10035d20
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 30h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 92 D8 0C 00: call 0x101035b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x10035d2e
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 86 D8 0C 00: call 0x101035b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10035d2e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 64 6A 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x6a
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 1eh
        ; Exact mapped bytes 74 7E: je 0x10035dcc
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0ffh
        ; Exact mapped bytes 7E 16: jle 0x10035d75
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x10035d75
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 3fch]
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes EB 04: jmp 0x10035d79
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 3ch], ebx
        mov ecx, dword ptr [esp + 30h]
        push 320h
        push ebx
        push ebx
        push ecx
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 22 8C 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 3ch]
        mov dword ptr [edi], 1017523ch
        cmp eax, ebx
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 29: je 0x10035dc8
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], ecx
        mov ecx, dword ptr [eax]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10035dce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 1ech], ecx
        ; Exact mapped bytes E8 7E 93 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x93
        __asm _emit 0x0c
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 B7 69 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x69
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 1fh
        ; Exact mapped bytes 74 7E: je 0x10035e79
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0feh
        ; Exact mapped bytes 7E 16: jle 0x10035e22
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x10035e22
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [eax + 3f8h]
        mov dword ptr [esp + 3ch], ecx
        ; Exact mapped bytes EB 04: jmp 0x10035e26
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 3ch], ebx
        mov edx, dword ptr [esp + 30h]
        push 320h
        push ebx
        push ebx
        push edx
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 75 8B 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 3ch]
        mov dword ptr [edi], 1017523ch
        cmp eax, ebx
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 29: je 0x10035e75
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10035e7b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 1f0h], ecx
        ; Exact mapped bytes E8 D1 92 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x92
        __asm _emit 0x0c
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 0A 69 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x69
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 20h
        ; Exact mapped bytes 74 7C: je 0x10035f24
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 128h
        ; Exact mapped bytes 7E 16: jle 0x10035ecf
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x10035ecf
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [eax + 4a0h]
        mov dword ptr [esp + 3ch], ecx
        ; Exact mapped bytes EB 04: jmp 0x10035ed3
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 3ch], ebx
        mov edx, dword ptr [esp + 30h]
        push 320h
        push ebx
        push ebx
        push edx
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C8 8A 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 3ch]
        mov dword ptr [edi], 1017523ch
        cmp eax, ebx
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x10035f26
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x10035f26
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 1ech]
        mov ecx, 0fffeh
        mov dword ptr [esi + 1f4h], edi
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1f0h]
        lea ebp, [esi + 204h]
        mov dword ptr [esp + 3ch], 20h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1f4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 38 68 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x68
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 20h], 21h
        ; Exact mapped bytes 74 2F: je 0x10035fa9
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push 320h
        push ebx
        add ecx, 0aah
        push ebx
        add edx, 64h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 14 8A 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10035fab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp], ecx
        ; Exact mapped bytes E8 A4 91 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x91
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        add ebp, 4
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [esp + 3ch]
        dec eax
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 75 85: jne 0x10035f61
        __asm _emit 0x75
        __asm _emit 0x85
        push 54h
        ; Exact mapped bytes E8 BD 67 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x67
        __asm _emit 0x13
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 3ch], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 20h], 22h
        ; Exact mapped bytes 74 7F: je 0x10036074
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 9ch
        ; Exact mapped bytes 7E 12: jle 0x10036018
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10036018
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [eax + 270h]
        ; Exact mapped bytes EB 02: jmp 0x1003601a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        push 320h
        push ebx
        add eax, 0aah
        push ebx
        push eax
        lea eax, [ecx + 52h]
        push eax
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 75 89 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edi, ebx
        mov dword ptr [ebp], 1017523ch
        mov dword ptr [ebp + 50h], edi
        ; Exact mapped bytes 74 2D: je 0x10036076
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [edi + 10h]
        add edi, 18h
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [edi - 4]
        mov dword ptr [ebp + 10h], eax
        mov edx, dword ptr [edi]
        lea ecx, [ebp + 14h]
        mov dword ptr [ebp + 14h], edx
        mov eax, dword ptr [edi + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [edi + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [edi + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x10036076
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 0fffffeffh
        mov ecx, ebp
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0dch], ebp
        ; Exact mapped bytes E8 D4 90 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x90
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0dch]
        push 58h
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes E8 01 67 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x67
        __asm _emit 0x13
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 3ch], ebp
        cmp ebp, ebx
        mov byte ptr [esp + 20h], 23h
        ; Exact mapped bytes 74 77: je 0x10036128
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 0A: jle 0x100360c8
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov edi, dword ptr [eax + 190h]
        cmp edi, ebx
        ; Exact mapped bytes 75 02: jne 0x100360ca
        __asm _emit 0x75
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push 320h
        push ebx
        add ecx, 0aah
        push ebx
        lea eax, [edx + 52h]
        push ecx
        push eax
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 C4 88 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edi, ebx
        mov dword ptr [ebp], 101751f8h
        mov dword ptr [ebp + 50h], ebx
        mov dword ptr [ebp + 54h], edi
        ; Exact mapped bytes 74 2D: je 0x1003612a
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [edi + 18h]
        add edi, 20h
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [edi - 4]
        mov dword ptr [ebp + 10h], ecx
        mov eax, dword ptr [edi]
        lea edx, [ebp + 14h]
        mov dword ptr [ebp + 14h], eax
        mov ecx, dword ptr [edi + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [edi + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [edi + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x1003612a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edi, 0fff0h
        mov dword ptr [esi + 0e0h], ebp
        ; Exact mapped bytes 66 21 7D 24: and word ptr [ebp + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7d
        __asm _emit 0x24
        push 0fch
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 59 66 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x66
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 24h
        ; Exact mapped bytes 74 46: je 0x1003619d
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x1003617b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1003617b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x1003617d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 30h]
        add edx, 0b8h
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 55h
        push edx
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F5 90 0C 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x90
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1003619f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 108h], eax
        ; Exact mapped bytes E8 AB 8F 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x8f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 108h]
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 C7 45 26 20 03: mov word ptr [ebp + 0x26], 0x320
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x03
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100361ce
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 D2 8D 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100361db
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 25 8D 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x00
        push 2084h
        ; Exact mapped bytes 66 89 9E B0 02 00 00: mov word ptr [esi + 0x2b0], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B4 65 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x65
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 25h
        ; Exact mapped bytes 74 1B: je 0x10036217
        __asm _emit 0x74
        __asm _emit 0x1b
        push ebx
        push 40h
        push ebx
        push ebx
        push 0f0h
        push 366h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6D 90 09 00: call 0x100cf280
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x90
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x10036219
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov dword ptr [esi + 200h], ebp
        mov ecx, dword ptr [ebp + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes 66 C7 45 26 C0 3E: mov word ptr [ebp + 0x26], 0x3ec0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x26
        __asm _emit 0xc0
        __asm _emit 0x3e
        ; Exact mapped bytes 74 06: je 0x10036236
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 6A 8D 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10036243
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 BD 8C 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 200h]
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov dword ptr [esi + 298h], ebx
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
        add esp, 14h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
