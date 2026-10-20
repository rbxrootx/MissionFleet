// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D43D0 .. +0x58E bytes.
extern "C" __declspec(naked) void FUN_100d43d0_100D43D0() {
    __asm {
        push -1
        push 101731c0h
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
        mov edx, dword ptr [esp + 1ch]
        push ebx
        mov ebx, dword ptr [esp + 2ch]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 30h]
        push ebx
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 30h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 3B 31 F7 FF: call 0x10047550
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x31
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        xor ebp, ebp
        and edx, 0e5f0h
        push 54h
        or dh, 5
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [esi], 10176438h
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes E8 67 83 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 73: je 0x100d44be
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 77h
        ; Exact mapped bytes 7E 10: jle 0x100d4469
        __asm _emit 0x7e
        __asm _emit 0x10
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 06: je 0x100d4469
        __asm _emit 0x74
        __asm _emit 0x06
        mov ebp, dword ptr [eax + 1dch]
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        lea eax, [ebx + 5]
        push eax
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 2D A5 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100d44ba
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
        ; Exact mapped bytes EB 02: jmp 0x100d44c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0c8h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 84h], ecx
        ; Exact mapped bytes E8 4B AC 02 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        ; Exact mapped bytes E8 B8 82 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 75: je 0x100d456f
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 79h
        ; Exact mapped bytes 7E 12: jle 0x100d451a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d451a
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1e4h]
        ; Exact mapped bytes EB 02: jmp 0x100d451c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        lea edx, [ebx + 0ah]
        push edx
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 7A A4 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100d4571
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
        ; Exact mapped bytes EB 02: jmp 0x100d4571
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 8ch], edi
        ; Exact mapped bytes E8 1D 82 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 74: je 0x100d4609
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 78h
        ; Exact mapped bytes 7E 12: jle 0x100d45b5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d45b5
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1e0h]
        ; Exact mapped bytes EB 02: jmp 0x100d45b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push ebx
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E2 A3 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100d4605
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
        ; Exact mapped bytes EB 02: jmp 0x100d460b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 88h], ecx
        ; Exact mapped bytes E8 40 AB 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        push 0a0h
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        ; Exact mapped bytes E8 6A 81 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 37: je 0x100d467d
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        mov edi, dword ptr [esp + 2ch]
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes 66 81 C2 E8 03: add dx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        push edx
        lea ecx, [edi + 41h]
        lea edx, [ebp + 0edh]
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
        ; Exact mapped bytes E8 45 2C F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x2c
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x100d4687
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebp, dword ptr [esp + 28h]
        mov edi, dword ptr [esp + 2ch]
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 C2 AA 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a0h]
        mov ebx, 7fffh
        push 0a0h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E8 E9 80 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 51: je 0x100d4718
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 19h
        ; Exact mapped bytes 7E 12: jle 0x100d46e8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d46e8
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 640h
        ; Exact mapped bytes EB 02: jmp 0x100d46ea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 66 81 C2 E8 03: add dx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        push edx
        lea edx, [edi + 41h]
        push edx
        lea edx, [ebp + 89h]
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
        ; Exact mapped bytes E8 AA 2B F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x2b
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d471a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes E8 71 80 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 51: je 0x100d4790
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1ah
        ; Exact mapped bytes 7E 12: jle 0x100d4760
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d4760
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 680h
        ; Exact mapped bytes EB 02: jmp 0x100d4762
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        add edi, 41h
        ; Exact mapped bytes 66 81 C2 E8 03: add dx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        add ebp, 0b9h
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
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
        ; Exact mapped bytes E8 32 2B F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x2b
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d4792
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 98h]
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 B3 A9 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        push 101h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes E8 99 A9 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ch]
        push 54h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E8 C8 7F 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x7f
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 7C: je 0x100d4866
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 7ah
        ; Exact mapped bytes 7E 12: jle 0x100d480a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d480a
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1e8h]
        ; Exact mapped bytes EB 02: jmp 0x100d480c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes 66 05 E9 03: add ax, 0x3e9
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0xe9
        __asm _emit 0x03
        push eax
        mov eax, dword ptr [esp + 30h]
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 85 A1 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100d4862
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
        ; Exact mapped bytes EB 02: jmp 0x100d4868
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 90h], ecx
        ; Exact mapped bytes E8 E3 A8 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        push 54h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E8 12 7F 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x7f
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 7C: je 0x100d491c
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 7bh
        ; Exact mapped bytes 7E 12: jle 0x100d48c0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d48c0
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1ech]
        ; Exact mapped bytes EB 02: jmp 0x100d48c2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        ; Exact mapped bytes 66 05 E8 03: add ax, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x03
        push eax
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 CF A0 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100d4918
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
        ; Exact mapped bytes EB 02: jmp 0x100d491e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 94h], ecx
        ; Exact mapped bytes E8 2D A8 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov ecx, dword ptr [esp + 14h]
        pop edi
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov dword ptr [esi + 0a4h], 0
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
