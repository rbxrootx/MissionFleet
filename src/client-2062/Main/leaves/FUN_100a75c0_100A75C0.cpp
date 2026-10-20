// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A75C0 .. +0xEA9 bytes.
extern "C" __declspec(naked) void FUN_100a75c0_100A75C0() {
    __asm {
        push -1
        push 10171597h
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
        ; Exact mapped bytes E8 AB 73 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 1017566ch
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], edi
        xor ebx, ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        push 54h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 1017608ch
        ; Exact mapped bytes E8 6E 51 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x51
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 74: je 0x100a76b8
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 401h
        ; Exact mapped bytes 7E 12: jle 0x100a7667
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a7667
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1004h]
        ; Exact mapped bytes EB 02: jmp 0x100a7669
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 31 73 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a76ba
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
        ; Exact mapped bytes EB 02: jmp 0x100a76ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 64h], edi
        ; Exact mapped bytes E8 93 7A 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        mov ebp, 7fffh
        push 54h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 C0 50 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 79: je 0x100a776b
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 400h
        ; Exact mapped bytes 7E 12: jle 0x100a7715
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a7715
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1000h]
        ; Exact mapped bytes EB 02: jmp 0x100a7717
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 83 72 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100a7764
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
        mov ebp, 7fffh
        ; Exact mapped bytes EB 02: jmp 0x100a776d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 60h], edi
        ; Exact mapped bytes E8 25 50 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x50
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 2B: je 0x100a77b8
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push ebx
        add eax, 9ah
        push ebx
        add ecx, 5ch
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 05 72 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100a77ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 68h], ecx
        ; Exact mapped bytes E8 95 79 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        push 58h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 C7 4F 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x4f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 2B: je 0x100a7816
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        add eax, 56h
        push ebx
        add ecx, 0aah
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A8 71 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100a7818
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 440h], edi
        ; Exact mapped bytes E8 32 79 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 440h]
        push 54h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 61 4F 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x4f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 72: je 0x100a78c3
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 9ch
        ; Exact mapped bytes 7E 12: jle 0x100a7874
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a7874
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 270h]
        ; Exact mapped bytes EB 02: jmp 0x100a7876
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 26 71 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a78c5
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
        ; Exact mapped bytes EB 02: jmp 0x100a78c5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 454h], edi
        ; Exact mapped bytes E8 85 78 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 454h]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 B2 4E 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x4e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 72: je 0x100a7972
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 0A: jle 0x100a7917
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ebp, dword ptr [eax + 190h]
        cmp ebp, ebx
        ; Exact mapped bytes 75 02: jne 0x100a7919
        __asm _emit 0x75
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        add eax, 5bh
        push ebx
        add ecx, 0afh
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 7A 70 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a7974
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
        ; Exact mapped bytes EB 02: jmp 0x100a7974
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebp, dword ptr [esp + 2ch]
        mov dword ptr [esi + 458h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        push 54h
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes E8 11 4E 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x4e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 2A: je 0x100a79cb
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        add eax, 56h
        push ebx
        add ecx, 0aah
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F2 6F 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100a79cd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 448h], ecx
        ; Exact mapped bytes E8 7F 77 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 448h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 AC 4D 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x4d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 28: je 0x100a7a2e
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        add eax, 56h
        push ebx
        add ecx, 0aah
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8D 6F 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100a7a30
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 444h], edi
        ; Exact mapped bytes E8 5F 4D 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x4d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 2B: je 0x100a7a7e
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        add eax, 56h
        push ebx
        add ecx, 0aah
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 40 6F 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100a7a80
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 43ch], edi
        ; Exact mapped bytes E8 0F 4D 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x4d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 2A: je 0x100a7acd
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        add eax, 56h
        push ebx
        add ecx, 0aah
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F0 6E 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100a7acf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 450h], ecx
        ; Exact mapped bytes E8 7D 76 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 450h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 AA 4C 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x4c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 28: je 0x100a7b30
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        add eax, 56h
        push ebx
        add ecx, 0aah
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8B 6E 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100a7b32
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fch
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 44ch], edi
        ; Exact mapped bytes E8 5A 4C 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x4c
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 45: je 0x100a7b9b
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100a7b7a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a7b7a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100a7b7c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 28h]
        lea edx, [ebp + 89h]
        push edx
        lea edx, [edi + 11ah]
        push edx
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F7 76 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x100a7ba1
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 28h]
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 A9 75 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 D3 4B 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x4b
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 41: je 0x100a7c1e
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
        ; Exact mapped bytes 7E 12: jle 0x100a7c01
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a7c01
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100a7c03
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 89h]
        push edx
        lea edx, [edi + 140h]
        push edx
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 74 76 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a7c20
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 2A 75 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 54 4B 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x4b
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 3E: je 0x100a7c9a
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100a7c7d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a7c7d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100a7c7f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0a3h]
        push edx
        lea edx, [edi + 0d7h]
        push edx
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F8 75 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a7c9c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 AE 74 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 D8 4A 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x4a
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0fh
        ; Exact mapped bytes 74 3E: je 0x100a7d16
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100a7cf9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a7cf9
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100a7cfb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0a5h]
        push edx
        lea edx, [edi + 118h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 7C 75 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a7d18
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 32 74 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ch]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 5C 4A 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x4a
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 10h
        ; Exact mapped bytes 74 3E: je 0x100a7d92
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100a7d75
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a7d75
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100a7d77
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0a5h]
        push edx
        lea edx, [edi + 146h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 00 75 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a7d94
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E8 B6 73 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a8h]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 E0 49 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x49
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 11h
        ; Exact mapped bytes 74 3E: je 0x100a7e0e
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100a7df1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a7df1
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100a7df3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0cbh]
        push edx
        lea edx, [edi + 0d7h]
        push edx
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 84 74 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a7e10
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 3A 73 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8ch]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 64 49 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x49
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 12h
        ; Exact mapped bytes 74 3E: je 0x100a7e8a
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100a7e6d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a7e6d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100a7e6f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0cdh]
        push edx
        lea edx, [edi + 118h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 08 74 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a7e8c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes E8 BE 72 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 E8 48 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 13h
        ; Exact mapped bytes 74 3E: je 0x100a7f06
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100a7ee9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a7ee9
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100a7eeb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0cdh]
        push edx
        lea edx, [edi + 146h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8C 73 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a7f08
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes E8 42 72 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a4h]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 6C 48 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x48
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 14h
        ; Exact mapped bytes 74 3E: je 0x100a7f82
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100a7f65
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a7f65
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100a7f67
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0e7h]
        push edx
        lea edx, [edi + 0d7h]
        push edx
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 10 73 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a7f84
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 C6 71 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 F0 47 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x47
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 15h
        ; Exact mapped bytes 74 3E: je 0x100a7ffe
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100a7fe1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a7fe1
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100a7fe3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0e9h]
        push edx
        lea edx, [edi + 118h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 94 72 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a8000
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes E8 4A 71 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 74 47 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x47
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 16h
        ; Exact mapped bytes 74 3E: je 0x100a807a
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100a805d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a805d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100a805f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0e9h]
        push edx
        lea edx, [edi + 146h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 18 72 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a807c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 CE 70 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a0h]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 F8 46 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x46
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 17h
        ; Exact mapped bytes 74 3E: je 0x100a80f6
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100a80dc
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a80dc
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100a80de
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 107h]
        push edx
        lea edx, [edi + 5ah]
        push edx
        push 8
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 9C 71 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a80f8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes E8 52 70 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ach]
        push 0f423fh
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [esi + 0ach]
        ; Exact mapped bytes E8 F6 75 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 6C 46 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x46
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 18h
        ; Exact mapped bytes 74 41: je 0x100a8185
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
        ; Exact mapped bytes 7E 12: jle 0x100a8168
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a8168
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x100a816a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 107h]
        push edx
        lea edx, [edi + 126h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 0D 71 05 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a8187
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 C3 6F 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        push 1eh
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 6A 75 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 E0 45 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x45
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 19h
        ; Exact mapped bytes 74 4C: je 0x100a821c
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 25h
        ; Exact mapped bytes 7E 12: jle 0x100a81f1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a81f1
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 940h
        ; Exact mapped bytes EB 02: jmp 0x100a81f3
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
        add ebp, 122h
        push 40h
        add edi, 146h
        push ebp
        push edi
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
        ; Exact mapped bytes E8 A6 F0 F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a821e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 2F 6F 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 5F 45 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x45
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1ah
        ; Exact mapped bytes 74 7F: je 0x100a82d2
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 408h
        ; Exact mapped bytes 7E 12: jle 0x100a8276
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a8276
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1020h]
        ; Exact mapped bytes EB 02: jmp 0x100a8278
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push ebx
        add eax, 9bh
        push ebx
        add ecx, 0d1h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 17 67 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a82d4
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
        ; Exact mapped bytes EB 02: jmp 0x100a82d4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 4a4h], edi
        ; Exact mapped bytes E8 76 6E 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4a4h]
        mov ebp, 0fff0h
        push 54h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 A0 44 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1bh
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100a839b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 408h
        ; Exact mapped bytes 7E 12: jle 0x100a8339
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a8339
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1020h]
        ; Exact mapped bytes EB 02: jmp 0x100a833b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        push ebx
        add ecx, 0deh
        push ebx
        add edx, 0d1h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 53 66 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100a8394
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
        mov ebp, 0fff0h
        ; Exact mapped bytes EB 02: jmp 0x100a839d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 4a8h], edi
        ; Exact mapped bytes E8 AD 6D 05 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x6d
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4a8h]
        push 80h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 D9 43 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x43
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1ch
        ; Exact mapped bytes 74 1D: je 0x100a83f4
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        add edx, 8ah
        add ecx, 25h
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CE AE 01 00: call 0x100c32c0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a83f6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        push 8ch
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes E8 95 43 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x43
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1dh
        ; Exact mapped bytes 74 1D: je 0x100a8438
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        add edx, 0cch
        add ecx, 25h
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2A 11 02 00: call 0x100c9560
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100a843a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and edx, 0e5f0h
        mov eax, esi
        or dh, 5
        pop edi
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
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
