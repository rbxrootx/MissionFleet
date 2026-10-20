// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B8470 .. +0x711 bytes.
extern "C" __declspec(naked) void FUN_100b8470_100B8470() {
    __asm {
        push -1
        push 10172086h
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
        mov ebx, dword ptr [esp + 20h]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 34h]
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        push edx
        push eax
        push ebx
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 28h], edi
        ; Exact mapped bytes E8 9B F0 F8 FF: call 0x10047550
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf0
        __asm _emit 0xf8
        __asm _emit 0xff
        xor ebp, ebp
        push 54h
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [edi], 101761f4h
        ; Exact mapped bytes E8 D8 42 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x42
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        cmp esi, ebp
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 74: je 0x100b854e
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 20fh
        ; Exact mapped bytes 7E 10: jle 0x100b84fb
        __asm _emit 0x7e
        __asm _emit 0x10
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 06: je 0x100b84fb
        __asm _emit 0x74
        __asm _emit 0x06
        mov ebp, dword ptr [eax + 83ch]
        mov edx, dword ptr [esp + 2ch]
        push 64h
        push 0
        add edx, 16h
        push 0
        lea eax, [ebx + 2]
        push edx
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 9B 64 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b8550
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [esi + 14h]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x100b8550
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 0b4h
        mov ecx, esi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edi + 84h], esi
        ; Exact mapped bytes E8 B9 6B 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x6b
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 84h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        ; Exact mapped bytes E8 26 42 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x42
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        test esi, esi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x100b8614
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 20eh
        ; Exact mapped bytes 7E 12: jle 0x100b85b3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100b85b3
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 838h]
        ; Exact mapped bytes EB 02: jmp 0x100b85b5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov eax, dword ptr [edi + 84h]
        push 82h
        push 0
        add ecx, 11ch
        push 0
        lea edx, [ebx + 2]
        push ecx
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D5 63 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b8616
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [esi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [esi + 14h]
        mov dword ptr [esi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x100b8616
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edi + 8ch], esi
        ; Exact mapped bytes E8 78 41 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x41
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        test esi, esi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 7B: je 0x100b86b5
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 210h
        ; Exact mapped bytes 7E 12: jle 0x100b865d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100b865d
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 840h]
        ; Exact mapped bytes EB 02: jmp 0x100b865f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [edi + 84h]
        push 63h
        push 0
        add edx, 0ah
        push 0
        push edx
        push ebx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 34 63 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b86b7
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [esi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [esi + 14h]
        mov dword ptr [esi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x100b86b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 0fffffeffh
        mov ecx, esi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edi + 90h], esi
        ; Exact mapped bytes E8 92 6A 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x6a
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 90h]
        push 70h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 BF 40 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        test esi, esi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 56: je 0x100b8749
        __asm _emit 0x74
        __asm _emit 0x56
        mov edx, dword ptr [edi + 84h]
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [edx + 8]
        lea edx, [ebx + 78h]
        lea ecx, [eax + 11ch]
        add eax, 10ch
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push eax
        lea eax, [ebx + 0fh]
        push eax
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 57 D4 F5 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xd4
        __asm _emit 0xf5
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 5
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes E8 62 40 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x40
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100b874b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [edi + 94h], esi
        mov ecx, dword ptr [esi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 46 26 8C 00: mov word ptr [esi + 0x26], 0x8c
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0x8c
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x100b8769
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 37 68 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b8776
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 8A 67 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 23 40 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x40
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        test esi, esi
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 5D: je 0x100b87ec
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [edi + 84h]
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [eax + 8]
        lea edx, [ecx + 11ch]
        add ecx, 10ch
        push edx
        lea edx, [ebx + 0d2h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        lea ecx, [ebx + 84h]
        push ecx
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B4 D3 F5 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd3
        __asm _emit 0xf5
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 7
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes E8 BF 3F 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x3f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100b87ee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edi + 11ch], esi
        ; Exact mapped bytes E8 A0 3F 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        test esi, esi
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 5D: je 0x100b886f
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [edi + 84h]
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [eax + 8]
        lea edx, [ecx + 11ch]
        add ecx, 10ch
        push edx
        lea edx, [ebx + 0d2h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, 0aah
        push ebx
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 31 D3 F5 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xd3
        __asm _emit 0xf5
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 9
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes E8 3C 3F 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x3f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100b8871
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [edi + 120h], esi
        mov esi, dword ptr [edi + 11ch]
        mov ebx, 2710h
        mov byte ptr [esp + 1ch], 0
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 89 5E 26: mov word ptr [esi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b8898
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 08 67 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b88a5
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 5B 66 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, dword ptr [edi + 120h]
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 89 5E 26: mov word ptr [esi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b88bc
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 E4 66 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b88c9
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 37 66 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        xor ebx, ebx
        lea ebp, [edi + 124h]
        push 70h
        ; Exact mapped bytes E8 C8 3E 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x3e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        test esi, esi
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 5E: je 0x100b8948
        __asm _emit 0x74
        __asm _emit 0x5e
        mov eax, dword ptr [edi + 84h]
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [eax + 8]
        lea edx, [ebx + ecx + 14h]
        lea ecx, [ebx + ecx + 4]
        push edx
        mov edx, dword ptr [esp + 38h]
        add edx, 8ch
        push edx
        mov edx, dword ptr [esp + 3ch]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add edx, 8
        push edx
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 58 D2 F5 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd2
        __asm _emit 0xf5
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 0bh
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes E8 63 3E 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x3e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100b894a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [ebp - 88h], esi
        mov ecx, dword ptr [esi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 46 26 10 27: mov word ptr [esi + 0x26], 0x2710
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x27
        ; Exact mapped bytes 74 06: je 0x100b8968
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 38 66 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b8975
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 8B 65 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes E8 15 3E 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x3e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 4B: je 0x100b89e6
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 15 A4 57 1C 10: mov edx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 84h]
        cmp dword ptr [edx + 160h], 23h
        mov esi, dword ptr [ecx + 8]
        ; Exact mapped bytes 7E 12: jle 0x100b89c5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x100b89c5
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x100b89c7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea esi, [ebx + esi + 6]
        push esi
        mov esi, dword ptr [esp + 2ch]
        add esi, 8ch
        push esi
        push 4
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 AE 68 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x100b89e8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [ebp], esi
        mov ecx, dword ptr [esi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 46 26 10 27: mov word ptr [esi + 0x26], 0x2710
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x27
        ; Exact mapped bytes 74 06: je 0x100b8a03
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 9D 65 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b8a10
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 F0 64 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push 101h
        ; Exact mapped bytes E8 43 67 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes E8 70 3D 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x3d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 4B: je 0x100b8a8b
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 15 A4 57 1C 10: mov edx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 84h]
        cmp dword ptr [edx + 160h], 23h
        mov esi, dword ptr [ecx + 8]
        ; Exact mapped bytes 7E 12: jle 0x100b8a6a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x100b8a6a
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x100b8a6c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea esi, [ebx + esi + 6]
        push esi
        mov esi, dword ptr [esp + 2ch]
        add esi, 0aah
        push esi
        push 4
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 09 68 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x100b8a8d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [ebp + 80h], esi
        mov ecx, dword ptr [esi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 46 26 10 27: mov word ptr [esi + 0x26], 0x2710
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x27
        ; Exact mapped bytes 74 06: je 0x100b8aab
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 F5 64 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b8ab8
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 48 64 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 80h]
        push 101h
        ; Exact mapped bytes E8 98 66 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 80h]
        add ebx, 10h
        add ebp, 4
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp ebx, 200h
        ; Exact mapped bytes 0F 8C EB FD FF FF: jl 0x100b88d1
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0a0h
        ; Exact mapped bytes E8 B0 3C 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x3c
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        xor esi, esi
        mov byte ptr [esp + 1ch], 0eh
        cmp eax, esi
        ; Exact mapped bytes 74 54: je 0x100b8b56
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x100b8b23
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ecx + 190h]
        cmp edx, esi
        ; Exact mapped bytes 74 08: je 0x100b8b23
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 100h
        ; Exact mapped bytes EB 02: jmp 0x100b8b25
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        push 7d0h
        add ecx, 132h
        push ecx
        mov ecx, dword ptr [esp + 30h]
        add ecx, 64h
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 6C E7 F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe7
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b8b58
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [edi + 224h], eax
        mov dword ptr [edi + 228h], esi
        mov dword ptr [edi + 22ch], esi
        mov eax, edi
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
