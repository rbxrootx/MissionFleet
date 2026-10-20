// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003D9F0 .. +0x487 bytes.
extern "C" __declspec(naked) void FUN_1003d9f0_1003D9F0() {
    __asm {
        push -1
        push 1016e5f0h
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
        push ebx
        mov ebx, dword ptr [esp + 1ch]
        mov eax, dword ptr [esp + 18h]
        push ebp
        mov ebp, dword ptr [esp + 24h]
        push esi
        push edi
        xor edi, edi
        push 40h
        push edi
        push edi
        push ebp
        mov esi, ecx
        push ebx
        push eax
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 86 0F 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x0f
        __asm _emit 0x0c
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], edi
        push 54h
        mov dword ptr [esp + 20h], edi
        mov dword ptr [esi], 101758f8h
        ; Exact mapped bytes E8 51 ED 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xed
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 75: je 0x1003dad6
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 44 57 1C 10: mov eax, dword ptr [0x101c5744]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 8
        ; Exact mapped bytes 7E 13: jle 0x1003da82
        __asm _emit 0x7e
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1003da82
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [eax + 20h]
        mov dword ptr [esp + 2ch], ecx
        ; Exact mapped bytes EB 08: jmp 0x1003da8a
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 2ch], 0
        push 40h
        push 0
        push 0
        push ebp
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 16 0F 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x0f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x1003dad8
        __asm _emit 0x74
        __asm _emit 0x2d
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
        ; Exact mapped bytes EB 02: jmp 0x1003dad8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 60h], edi
        ; Exact mapped bytes E8 B9 EC 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xec
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        xor ecx, ecx
        mov byte ptr [esp + 1ch], 2
        cmp edi, ecx
        ; Exact mapped bytes 74 6F: je 0x1003db6a
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes A1 44 57 1C 10: mov eax, dword ptr [0x101c5744]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 9
        ; Exact mapped bytes 7E 13: jle 0x1003db1c
        __asm _emit 0x7e
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 09: je 0x1003db1c
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [eax + 24h]
        mov dword ptr [esp + 2ch], edx
        ; Exact mapped bytes EB 04: jmp 0x1003db20
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 2ch], ecx
        push 40h
        push ecx
        push ecx
        push ebp
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 82 0E 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x0e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 29: je 0x1003db68
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
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], ecx
        ; Exact mapped bytes E8 E4 15 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 14 EC 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xec
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        xor ecx, ecx
        mov byte ptr [esp + 1ch], 3
        cmp edi, ecx
        ; Exact mapped bytes 74 7B: je 0x1003dc1b
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 44 57 1C 10: mov eax, dword ptr [0x101c5744]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 25h
        ; Exact mapped bytes 7E 16: jle 0x1003dbc4
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 0C: je 0x1003dbc4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [eax + 94h]
        mov dword ptr [esp + 2ch], edx
        ; Exact mapped bytes EB 04: jmp 0x1003dbc8
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 2ch], ecx
        push 40h
        push ecx
        push ecx
        lea eax, [ebp + 6]
        lea ecx, [ebx + 81h]
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D1 0D 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 29: je 0x1003dc19
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
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 64h], ecx
        ; Exact mapped bytes E8 33 15 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 6C EB 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xeb
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 1F: je 0x1003dc65
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push ebp
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 5A 0D 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x1003dc67
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], edi
        ; Exact mapped bytes E8 E5 14 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x14
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        push 184h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 12 EB 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xeb
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 35: je 0x1003dcd3
        __asm _emit 0x74
        __asm _emit 0x35
        push 505050h
        push 0
        lea ecx, [ebp + 0c8h]
        push 0dcdcdch
        push ecx
        lea edx, [ebx + 15eh]
        lea ecx, [ebp + 3ah]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx + 3ch]
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2F A9 FD FF: call 0x10018600
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1003dcd5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 70h], eax
        mov dword ptr [eax + 5ch], 14h
        mov eax, dword ptr [esi + 70h]
        mov edi, 1
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax + 68h], edi
        ; Exact mapped bytes A1 E8 57 1C 10: mov eax, dword ptr [0x101c57e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 170h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0E: jle 0x1003dd0c
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x1003dd0c
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x1003dd0e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 70h]
        push eax
        ; Exact mapped bytes E8 D9 AB FD FF: call 0x100188f0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        push 184h
        ; Exact mapped bytes E8 7F EA 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xea
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 35: je 0x1003dd66
        __asm _emit 0x74
        __asm _emit 0x35
        push 505050h
        push 0
        lea edx, [ebp + 0c8h]
        push 0dcdcdch
        push edx
        lea ecx, [ebx + 15eh]
        lea edx, [ebp + 4eh]
        push ecx
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebx + 3ch]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 9C A8 FD FF: call 0x10018600
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1003dd68
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 74h], eax
        mov dword ptr [eax + 5ch], 14h
        mov eax, dword ptr [esi + 74h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax + 68h], edi
        ; Exact mapped bytes A1 E8 57 1C 10: mov eax, dword ptr [0x101c57e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 170h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0E: jle 0x1003dd9a
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x1003dd9a
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x1003dd9c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 74h]
        push eax
        ; Exact mapped bytes E8 4B AB FD FF: call 0x100188f0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0a0h
        ; Exact mapped bytes E8 F1 E9 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 24: je 0x1003dde3
        __asm _emit 0x74
        __asm _emit 0x24
        lea ecx, [ebp + 6ch]
        push 40h
        lea edx, [ebx + 78h]
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
        push 0
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 DF 94 FD FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1003dde5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 67 13 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x13
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 9D E9 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 27: je 0x1003de3a
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebp, 6ch
        push 40h
        add ebx, 0c8h
        push ebp
        push ebx
        push 0
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 88 94 FD FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1003de3c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 10 13 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x13
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and eax, 0e5f8h
        pop edi
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
