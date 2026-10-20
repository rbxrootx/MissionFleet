// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B68A0 .. +0x942 bytes.
extern "C" __declspec(naked) void FUN_100b68a0_100B68A0() {
    __asm {
        push -1
        push 10171fb9h
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
        mov ebx, dword ptr [esp + 20h]
        push ebp
        mov ebp, dword ptr [esp + 20h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push ebx
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 CB 80 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor edi, edi
        push 198h
        mov dword ptr [esp + 20h], edi
        mov dword ptr [esi], 101761d8h
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], edi
        ; Exact mapped bytes E8 91 5E 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x5e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        cmp eax, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 0F: je 0x100b692e
        __asm _emit 0x74
        __asm _emit 0x0f
        push edi
        push 101abdbch
        mov ecx, eax
        ; Exact mapped bytes E8 94 91 04 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100b6930
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 61 5E 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x5e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 71: je 0x100b69c2
        __asm _emit 0x74
        __asm _emit 0x71
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [eax + 164h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0E: jle 0x100b696c
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100b696c
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x100b696e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 1f4h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 2B 80 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100b69bc
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
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x100b69c4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 64h], edi
        add edi, 14h
        lea ecx, [esi + 14h]
        push 74h
        mov edx, dword ptr [edi]
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ecx], edx
        mov eax, dword ptr [edi + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [edi + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [edi + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes E8 B1 5D 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x5d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 32: je 0x100b6a31
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100b6a1a
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100b6a1a
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 02: jmp 0x100b6a1c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 320h
        lea edx, [ebp + 5]
        push ebx
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B1 12 F9 FF: call 0x10047ce0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b6a33
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 74h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 5E 5D 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x5d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 35: je 0x100b6a87
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100b6a6d
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100b6a6d
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 02: jmp 0x100b6a6f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 320h
        lea edx, [ebp + 287h]
        push ebx
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5B 12 F9 FF: call 0x10047ce0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b6a89
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 6ch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 08 5D 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x5d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 38: je 0x100b6ae0
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x100b6ac6
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b6ac6
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x100b6ac8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 1f9h
        lea edx, [ebp + 122h]
        push ebx
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 82 B8 F7 FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xb8
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b6ae2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 6ch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 AF 5C 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov edx, 6
        test eax, eax
        mov byte ptr [esp + 1ch], dl
        ; Exact mapped bytes 74 37: je 0x100b6b3c
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], edx
        ; Exact mapped bytes 7E 12: jle 0x100b6b22
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b6b22
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x100b6b24
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 1f8h
        lea edx, [ebp + 122h]
        push ebx
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 26 B8 F7 FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xb8
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b6b3e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 53 5C 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100b6beb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        mov eax, dword ptr [esi + 74h]
        mov ebp, dword ptr [ecx + 160h]
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        cmp ebp, 4
        ; Exact mapped bytes 7E 12: jle 0x100b6b8c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b6b8c
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [ecx + 100h]
        ; Exact mapped bytes EB 02: jmp 0x100b6b8e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 1feh
        push 0
        add edx, 15h
        push 0
        add eax, 15h
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 09 7E 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x100b6be5
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
        ; Exact mapped bytes EB 02: jmp 0x100b6bed
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 70h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0a0h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 9B 5B 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x5b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 42: je 0x100b6c57
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [esi + 60h]
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100b6c2c
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x100b6c2e
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 3]
        push 2bch
        push edx
        lea edx, [ebp + 28ch]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 6B 06 F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x06
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b6c59
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 32 5B 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x5b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 46: je 0x100b6cc4
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100b6c99
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100b6c99
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x100b6c9b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 2]
        push 2bch
        push edx
        lea edx, [ebp + 2bbh]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 FE 05 F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x05
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b6cc6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 C5 5A 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x5a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 49: je 0x100b6d34
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 12: jle 0x100b6d09
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b6d09
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 80h
        ; Exact mapped bytes EB 02: jmp 0x100b6d0b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 2]
        push 2bch
        add ebp, 2ech
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 8E 05 F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b6d36
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + 88h], eax
        lea edi, [esi + 8ch]
        mov ebp, 5
        push 0a0h
        ; Exact mapped bytes E8 4A 5A 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x5a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 25: je 0x100b6d8b
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 2bch
        push ebx
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 37 05 F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b6d8d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi], eax
        add edi, 4
        dec ebp
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 75 B2: jne 0x100b6d4c
        __asm _emit 0x75
        __asm _emit 0xb2
        push 0fch
        ; Exact mapped bytes E8 FC 59 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x59
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 48: je 0x100b6dfc
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 3D 98 57 1C 10: mov edi, dword ptr [0x101c5798]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 74h]
        mov ecx, dword ptr [edi + 160h]
        mov ebp, dword ptr [edx + 8]
        mov edx, dword ptr [edx + 4]
        cmp ecx, 0bh
        ; Exact mapped bytes 7E 12: jle 0x100b6de0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edi, dword ptr [edi + 190h]
        test edi, edi
        ; Exact mapped bytes 74 08: je 0x100b6de0
        __asm _emit 0x74
        __asm _emit 0x08
        add edi, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x100b6de2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        add ebp, 35h
        add edx, 82h
        push ebp
        push edx
        push 2
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 98 84 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100b6dfe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0a0h], edi
        mov ecx, dword ptr [edi + 40h]
        mov ebx, 258h
        mov byte ptr [esp + 1ch], 0
        test ecx, ecx
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100b6e1f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 81 81 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b6e2c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D4 80 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 6A 59 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x59
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 45: je 0x100b6e8b
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 3D 98 57 1C 10: mov edi, dword ptr [0x101c5798]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 74h]
        mov ecx, dword ptr [edi + 160h]
        mov ebp, dword ptr [edx + 8]
        mov edx, dword ptr [edx + 4]
        cmp ecx, 0bh
        ; Exact mapped bytes 7E 12: jle 0x100b6e72
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edi, dword ptr [edi + 190h]
        test edi, edi
        ; Exact mapped bytes 74 08: je 0x100b6e72
        __asm _emit 0x74
        __asm _emit 0x08
        add edi, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x100b6e74
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        add ebp, 35h
        add edx, 4bh
        push ebp
        push edx
        push 2
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 09 84 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100b6e8d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0a4h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100b6ea9
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F7 80 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b6eb6
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4A 80 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 E3 58 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x58
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 76: je 0x100b6f45
        __asm _emit 0x74
        __asm _emit 0x76
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 4ch
        ; Exact mapped bytes 7E 12: jle 0x100b6eed
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100b6eed
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 130h]
        ; Exact mapped bytes EB 02: jmp 0x100b6eef
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov ebx, dword ptr [esp + 28h]
        push 44ch
        push 0
        push 0
        push edx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A6 7A 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100b6f41
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
        ; Exact mapped bytes EB 06: jmp 0x100b6f4b
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 28h]
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0d0h], ecx
        ; Exact mapped bytes E8 00 82 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 39 58 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0fh
        ; Exact mapped bytes 74 70: je 0x100b6fe9
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 4dh
        ; Exact mapped bytes 7E 12: jle 0x100b6f97
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100b6f97
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 134h]
        ; Exact mapped bytes EB 02: jmp 0x100b6f99
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        push 44ch
        push 0
        push 0
        push edx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 00 7A 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b6feb
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
        ; Exact mapped bytes EB 02: jmp 0x100b6feb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0d4h], edi
        ; Exact mapped bytes E8 A0 57 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov edx, 10h
        test eax, eax
        mov byte ptr [esp + 1ch], dl
        ; Exact mapped bytes 74 49: je 0x100b705d
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], edx
        ; Exact mapped bytes 7E 12: jle 0x100b7031
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b7031
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 400h
        ; Exact mapped bytes EB 02: jmp 0x100b7033
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebp, dword ptr [esp + 2ch]
        push 456h
        lea edx, [ebx + 0a4h]
        push ebp
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
        ; Exact mapped bytes E8 65 02 F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x100b7063
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 2ch]
        xor eax, eax
        push 230h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E8 28 57 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x57
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 11h
        ; Exact mapped bytes 74 1B: je 0x100b70a3
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        lea ecx, [ebx + 3]
        push 0fffffee4h
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D1 13 00 00: call 0x100b8470
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100b70a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 7ch], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 F4 01: mov word ptr [edi + 0x26], 0x1f4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xf4
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x100b70c0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E0 7E 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b70cd
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 33 7E 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        push 0b8h
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 7ch]
        ; Exact mapped bytes 66 81 60 24 FF DF: and word ptr [eax + 0x24], 0xdfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xdf
        xor eax, eax
        mov dword ptr [esi + 0ach], 1
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes 66 C7 86 C0 00 00 00 0B 00: mov word ptr [esi + 0xc0], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 C2 00 00 00: mov word ptr [esi + 0xc2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes E8 8F 56 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x56
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 12h
        ; Exact mapped bytes 74 32: je 0x100b7153
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 38h]
        push edx
        mov edx, dword ptr [esp + 38h]
        dec ecx
        add edx, 0ffffff38h
        push ecx
        mov ecx, dword ptr [esp + 38h]
        push edx
        push ecx
        lea edx, [ebp - 0c8h]
        lea ecx, [ebx + 24eh]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6F E6 FF FF: call 0x100b57c0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b7155
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 1
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0c4h], eax
        ; Exact mapped bytes E8 F7 F3 FF FF: call 0x100b6560
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push 0b8h
        ; Exact mapped bytes E8 2D 56 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x56
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 13h
        ; Exact mapped bytes 74 32: je 0x100b71b5
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 38h]
        push edx
        mov edx, dword ptr [esp + 38h]
        dec ecx
        add edx, 0ffffff38h
        push ecx
        mov ecx, dword ptr [esp + 38h]
        push edx
        add ebp, 0ffffff38h
        push ecx
        add ebx, 24eh
        push ebp
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 0D E6 FF FF: call 0x100b57c0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b71b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 2
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes E8 95 F3 FF FF: call 0x100b6560
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
