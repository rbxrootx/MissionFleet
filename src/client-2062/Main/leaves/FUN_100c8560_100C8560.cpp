// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C8560 .. +0x55C bytes.
extern "C" __declspec(naked) void FUN_100c8560_100C8560() {
    __asm {
        push -1
        push 10172a2bh
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
        mov ebp, dword ptr [esp + 24h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push ebp
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 0B 64 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor eax, eax
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esi], 1017635ch
        mov dword ptr [esp + 34h], 49h
        mov dword ptr [esp + 38h], 124h
        push 54h
        ; Exact mapped bytes E8 C4 41 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x41
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x100c8673
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 58 1C 10: mov ecx, dword ptr [0x101c5830]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 34h]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 1B: jle 0x100c861f
        __asm _emit 0x7e
        __asm _emit 0x1b
        test eax, eax
        ; Exact mapped bytes 7C 17: jl 0x100c861f
        __asm _emit 0x7c
        __asm _emit 0x17
        mov eax, dword ptr [ecx + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100c861f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [ecx + eax]
        mov dword ptr [esp + 30h], edx
        ; Exact mapped bytes EB 08: jmp 0x100c8627
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 30h], 0
        push 40h
        push 0
        push 0
        push ebp
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 79 63 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov dword ptr [edi], 1017523ch
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 2D: je 0x100c8675
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
        ; Exact mapped bytes EB 02: jmp 0x100c8675
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esi + eax - 0c4h], edi
        add eax, 4
        mov dword ptr [esp + 38h], eax
        mov eax, dword ptr [esp + 34h]
        inc eax
        mov dword ptr [esp + 34h], eax
        add eax, -49h
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 34 FF FF FF: jl 0x100c85d5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 60h]
        push 0fffffeffh
        ; Exact mapped bytes E8 B2 6A 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 EB 40 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 6E: je 0x100c8735
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 8B 0D B8 56 1C 10: mov ecx, dword ptr [0x101c56b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 56h]
        mov dword ptr [esp + 38h], ecx
        push 40h
        lea eax, [ebx + 9fh]
        push edx
        lea ecx, [ebp + 45h]
        push eax
        lea edx, [ebx + 2fh]
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C2 62 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [edi + 60h], 0ffffffh
        mov dword ptr [edi + 50h], eax
        xor eax, eax
        mov dword ptr [edi + 64h], eax
        mov dword ptr [edi + 68h], eax
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], eax
        push 80h
        mov byte ptr [esp + 20h], 3
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 76 40 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100c8737
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], edi
        ; Exact mapped bytes E8 5A 40 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 71: je 0x100c87c9
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes 8B 0D B8 56 1C 10: mov ecx, dword ptr [0x101c56b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 3dh]
        mov dword ptr [esp + 38h], ecx
        push 40h
        lea eax, [ebx + 17eh]
        push edx
        lea ecx, [ebp + 2bh]
        push eax
        lea edx, [ebx + 0ebh]
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 2E 62 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [edi + 60h], 0ffffffh
        mov dword ptr [edi + 50h], eax
        xor eax, eax
        mov dword ptr [edi + 64h], eax
        mov dword ptr [edi + 68h], eax
        mov dword ptr [edi + 58h], 8
        mov dword ptr [edi + 5ch], 10h
        mov dword ptr [edi + 54h], eax
        push 80h
        mov byte ptr [esp + 20h], 5
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 E2 3F 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x3f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100c87cb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], edi
        ; Exact mapped bytes E8 C6 3F 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x3f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 4E: je 0x100c883a
        __asm _emit 0x74
        __asm _emit 0x4e
        push 0
        push 0
        lea ecx, [ebp + 55h]
        push 0ffffffh
        lea edx, [ebx + 17eh]
        push ecx
        lea eax, [ebp + 43h]
        push edx
        ; Exact mapped bytes 8B 15 B8 56 1C 10: mov edx, dword ptr [0x101c56b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebx + 0ebh]
        push eax
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 66 D3 F4 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xf4
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 7
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 71 3F 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x3f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100c883c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 70h], edi
        ; Exact mapped bytes E8 55 3F 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x3f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 4E: je 0x100c88ab
        __asm _emit 0x74
        __asm _emit 0x4e
        push 0
        push 0
        lea eax, [ebp + 6dh]
        push 0ffffffh
        lea ecx, [ebx + 17eh]
        push eax
        lea edx, [ebp + 5bh]
        push ecx
        ; Exact mapped bytes 8B 0D B8 56 1C 10: mov ecx, dword ptr [0x101c56b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [ebx + 0d5h]
        push edx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F5 D2 F4 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd2
        __asm _emit 0xf4
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 9
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 00 3F 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x3f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100c88ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 74h], edi
        ; Exact mapped bytes E8 E4 3E 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x3e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 4D: je 0x100c891b
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        push 0
        lea edx, [ebp + 2ah]
        push 10101h
        lea eax, [ebx + 2c6h]
        push edx
        lea ecx, [ebp + 18h]
        push eax
        ; Exact mapped bytes A1 B8 56 1C 10: mov eax, dword ptr [0x101c56b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx + 213h]
        push ecx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 85 D2 F4 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0xf4
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 0bh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 90 3E 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x3e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100c891d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 70h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 7ch], edi
        ; Exact mapped bytes E8 74 3E 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x3e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 4E: je 0x100c898c
        __asm _emit 0x74
        __asm _emit 0x4e
        push 0
        push 0
        lea ecx, [ebp + 29h]
        push 0ffffffh
        lea edx, [ebx + 2c5h]
        push ecx
        lea eax, [ebp + 17h]
        push edx
        ; Exact mapped bytes 8B 15 B8 56 1C 10: mov edx, dword ptr [0x101c56b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebx + 212h]
        push eax
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 14 D2 F4 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd2
        __asm _emit 0xf4
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 0dh
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 1F 3E 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x3e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x100c898e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 78h], edi
        ; Exact mapped bytes E8 00 3E 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x3e
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        xor edi, edi
        mov byte ptr [esp + 1ch], 0eh
        cmp eax, edi
        ; Exact mapped bytes 74 2E: je 0x100c89e0
        __asm _emit 0x74
        __asm _emit 0x2e
        push edi
        push edi
        lea ecx, [ebp + 68h]
        push 0ffffffh
        push ecx
        lea edx, [ebx + 224h]
        lea ecx, [ebp + 44h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D B8 56 1C 10: mov ecx, dword ptr [0x101c56b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx + 1a3h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A2 B1 03 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c89e2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 A9 3D 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x3d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, edi
        mov byte ptr [esp + 1ch], 0fh
        ; Exact mapped bytes 74 2E: je 0x100c8a35
        __asm _emit 0x74
        __asm _emit 0x2e
        push edi
        push edi
        lea edx, [ebp + 68h]
        push 0ffffffh
        lea ecx, [ebx + 2d0h]
        push edx
        ; Exact mapped bytes 8B 15 B8 56 1C 10: mov edx, dword ptr [0x101c56b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebp, 44h
        push ecx
        add ebx, 24fh
        push ebp
        push ebx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 4D B1 03 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100c8a37
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 7ch]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 11 67 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        mov eax, 12h
        mov dword ptr [ecx + 5ch], eax
        mov edx, dword ptr [esi + 84h]
        xor ecx, ecx
        mov dword ptr [edx + 5ch], eax
        xor eax, eax
        mov dword ptr [esi + 88h], edi
        mov dword ptr [esi + 8ch], edi
        mov dword ptr [esi + 90h], eax
        mov dword ptr [esi + 94h], eax
        mov dword ptr [esi + 98h], ecx
        mov dword ptr [esi + 9ch], ecx
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and edx, 0e5f0h
        or dh, 5
        mov dword ptr [esi + 0b0h], edi
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
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
