// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C9FD0 .. +0x257B bytes.
extern "C" __declspec(naked) void FUN_100c9fd0_100C9FD0() {
    __asm {
        push -1
        push 10172e33h
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
        sub esp, 4ch
        mov eax, dword ptr [esp + 70h]
        mov edx, dword ptr [esp + 68h]
        push ebx
        mov ebx, dword ptr [esp + 64h]
        push ebp
        mov ebp, dword ptr [esp + 6ch]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 78h]
        push edi
        push eax
        mov eax, dword ptr [esp + 70h]
        push ecx
        push edx
        push ebp
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 2ch], esi
        ; Exact mapped bytes E8 99 49 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [esi], 1017566ch
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebp
        xor edi, edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], edi
        mov dword ptr [esi], 10176394h
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and ecx, 0e5f0h
        push 198h
        or ch, 5
        mov dword ptr [esp + 68h], edi
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes E8 48 27 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x27
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        cmp eax, edi
        mov byte ptr [esp + 64h], 1
        ; Exact mapped bytes 74 0F: je 0x100ca07a
        __asm _emit 0x74
        __asm _emit 0x0f
        push edi
        push 101ac258h
        mov ecx, eax
        ; Exact mapped bytes E8 48 5A 03 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x5a
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ca07c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 12 27 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x27
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        cmp eax, edi
        mov byte ptr [esp + 64h], 2
        ; Exact mapped bytes 74 0F: je 0x100ca0b0
        __asm _emit 0x74
        __asm _emit 0x0f
        push edi
        push 101ac244h
        mov ecx, eax
        ; Exact mapped bytes E8 12 5A 03 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x5a
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ca0b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 DF 26 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x26
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 3
        ; Exact mapped bytes 74 6D: je 0x100ca143
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 0dh
        ; Exact mapped bytes 7E 0F: jle 0x100ca0f1
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100ca0f1
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, dword ptr [eax + 34h]
        ; Exact mapped bytes EB 02: jmp 0x100ca0f3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 70h]
        push 40h
        push 0
        push 0
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A9 48 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x100ca13d
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebx]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ebx, dword ptr [esp + 70h]
        ; Exact mapped bytes EB 02: jmp 0x100ca145
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 74h], edi
        ; Exact mapped bytes E8 07 50 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 40 26 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x26
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 4
        ; Exact mapped bytes 74 6D: je 0x100ca1e2
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [eax + 164h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0E: jle 0x100ca190
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100ca190
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebx, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x100ca192
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 70h]
        push 40h
        push 0
        push 0
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 0A 48 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x100ca1dc
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebx]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ebx, dword ptr [esp + 70h]
        ; Exact mapped bytes EB 02: jmp 0x100ca1e4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 78h], edi
        ; Exact mapped bytes E8 AD 25 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x25
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 5
        ; Exact mapped bytes 74 6D: je 0x100ca275
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100ca223
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100ca223
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x100ca225
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 70h]
        push 40h
        push 0
        push 0
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 77 47 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x100ca26f
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebx]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ebx, dword ptr [esp + 70h]
        ; Exact mapped bytes EB 02: jmp 0x100ca277
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 80h], edi
        ; Exact mapped bytes E8 D2 4E 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x4e
        __asm _emit 0x03
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 0B 25 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x25
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 6
        ; Exact mapped bytes 74 6D: je 0x100ca317
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 2
        ; Exact mapped bytes 7E 0F: jle 0x100ca2c5
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100ca2c5
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x100ca2c7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 70h]
        push 40h
        push 0
        push 0
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D5 46 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x100ca311
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebx]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ebx, dword ptr [esp + 70h]
        ; Exact mapped bytes EB 02: jmp 0x100ca319
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 7ch], edi
        ; Exact mapped bytes E8 33 4E 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x4e
        __asm _emit 0x03
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 69 24 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 7
        ; Exact mapped bytes 74 49: je 0x100ca393
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 12: jle 0x100ca368
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100ca368
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 80h
        ; Exact mapped bytes EB 02: jmp 0x100ca36a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 1b3h]
        push 40h
        push edx
        lea edx, [ebx + 1d1h]
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
        ; Exact mapped bytes E8 2F CF F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xcf
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100ca395
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E8 F6 23 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 8
        ; Exact mapped bytes 74 49: je 0x100ca406
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x100ca3db
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100ca3db
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x100ca3dd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 1b3h]
        push 40h
        push edx
        lea edx, [ebx + 226h]
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
        ; Exact mapped bytes E8 BC CE F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xce
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100ca408
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0ach], eax
        mov ecx, dword ptr [esi + 0a8h]
        push 101h
        mov byte ptr [esp + 68h], 0
        ; Exact mapped bytes E8 3D 4D 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        push 101h
        ; Exact mapped bytes E8 2D 4D 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 63 23 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 9
        ; Exact mapped bytes 74 3F: je 0x100ca48f
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 60h]
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100ca467
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x100ca469
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 72h]
        push 40h
        push edx
        lea edx, [ebx + 14dh]
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
        ; Exact mapped bytes E8 33 CE F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xce
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100ca491
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes E8 FA 22 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 0ah
        ; Exact mapped bytes 74 43: je 0x100ca4fc
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100ca4d4
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100ca4d4
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x100ca4d6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 7ah]
        push 40h
        push edx
        lea edx, [ebx + 14dh]
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
        ; Exact mapped bytes E8 C6 CD F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xcd
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100ca4fe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 8D 22 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 0bh
        ; Exact mapped bytes 74 42: je 0x100ca568
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [esi + 60h]
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100ca53d
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x100ca53f
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 92h]
        push 40h
        push edx
        lea edx, [ebx + 14dh]
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
        ; Exact mapped bytes E8 5A CD F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xcd
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100ca56a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 21 22 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 0ch
        ; Exact mapped bytes 74 46: je 0x100ca5d8
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100ca5ad
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100ca5ad
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x100ca5af
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 9ah]
        push 40h
        push edx
        lea edx, [ebx + 14dh]
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
        ; Exact mapped bytes E8 EA CC F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xcc
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100ca5da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0a4h], eax
        mov ecx, dword ptr [esi + 98h]
        push 101h
        mov byte ptr [esp + 68h], 0
        ; Exact mapped bytes E8 6B 4B 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x4b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push 101h
        ; Exact mapped bytes E8 5B 4B 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x4b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        push 101h
        ; Exact mapped bytes E8 4B 4B 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x4b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        push 101h
        ; Exact mapped bytes E8 3B 4B 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x4b
        __asm _emit 0x03
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 71 21 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x21
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 0dh
        mov edi, 2ch
        ; Exact mapped bytes 74 3A: je 0x100ca681
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
        ; Exact mapped bytes 7E 12: jle 0x100ca667
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100ca667
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100ca669
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 74h]
        push edx
        lea edx, [ebx + 0feh]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 11 4C 03 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ca683
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 08 21 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x21
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 0eh
        ; Exact mapped bytes 74 3D: je 0x100ca6e8
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100ca6cb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100ca6cb
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100ca6cd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 95h]
        push edx
        lea edx, [ebx + 0feh]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AA 4B 03 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x4b
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ca6ea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0b4h], eax
        mov ecx, dword ptr [esi + 0b0h]
        push 101h
        mov byte ptr [esp + 68h], 0
        ; Exact mapped bytes E8 5B 4A 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push 101h
        ; Exact mapped bytes E8 4B 4A 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        push 0e8h
        ; Exact mapped bytes E8 81 20 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 0fh
        ; Exact mapped bytes 74 35: je 0x100ca767
        __asm _emit 0x74
        __asm _emit 0x35
        push 1e1e1eh
        push 0
        lea ecx, [ebp + 62h]
        push 0c8c8c8h
        push ecx
        lea edx, [ebx + 15dh]
        lea ecx, [ebp + 57h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx + 0bbh]
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 EB E1 F4 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe1
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100ca769
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0ech], eax
        push 0fch
        mov byte ptr [esp + 68h], 0
        mov dword ptr [eax + 90h], edi
        ; Exact mapped bytes E8 1C 20 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 10h
        ; Exact mapped bytes 74 3A: je 0x100ca7d1
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
        ; Exact mapped bytes 7E 12: jle 0x100ca7b7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100ca7b7
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100ca7b9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 2dh]
        push edx
        lea edx, [ebx + 218h]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C1 4A 03 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ca7d3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 0b8h], eax
        ; Exact mapped bytes E8 B8 1F 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 11h
        ; Exact mapped bytes 74 3A: je 0x100ca835
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
        ; Exact mapped bytes 7E 12: jle 0x100ca81b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100ca81b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100ca81d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 2dh]
        push edx
        lea edx, [ebx + 263h]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5D 4A 03 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ca837
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 57 1F 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 12h
        ; Exact mapped bytes 74 21: je 0x100ca87f
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 40 41 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x100ca881
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 84h], edi
        ; Exact mapped bytes E8 0D 1F 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x1f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 13h
        ; Exact mapped bytes 74 21: je 0x100ca8c9
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F6 40 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x100ca8cb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 88h], edi
        mov eax, dword ptr [esi + 84h]
        mov ecx, 0fffeh
        push 101h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 88h]
        mov byte ptr [esp + 68h], 0
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes E8 61 48 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push 101h
        ; Exact mapped bytes E8 51 48 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 87 1E 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x1e
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 14h
        ; Exact mapped bytes 74 3B: je 0x100ca967
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100ca94d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100ca94d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100ca94f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 57h]
        push edx
        lea edx, [ebx + 21ch]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2B 49 03 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ca969
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea edi, [esi + 0c0h]
        push 0fch
        mov byte ptr [esp + 68h], 0
        mov dword ptr [edi], eax
        ; Exact mapped bytes E8 20 1E 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x1e
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 15h
        ; Exact mapped bytes 74 3B: je 0x100ca9ce
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 12: jle 0x100ca9b4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100ca9b4
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100ca9b6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 6eh]
        add ebx, 21ch
        push edx
        push ebx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C4 48 03 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ca9d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 64h], 0
        mov dword ptr [esi + 0c4h], eax
        mov ebx, 2
        mov ecx, dword ptr [edi]
        push 101h
        ; Exact mapped bytes E8 74 47 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EE: jne 0x100ca9e0
        __asm _emit 0x75
        __asm _emit 0xee
        push 0a0h
        ; Exact mapped bytes E8 A4 1D 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x1d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 16h
        ; Exact mapped bytes 74 43: je 0x100caa52
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [esi + 60h]
        mov ecx, dword ptr [edx + 160h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0A: jle 0x100caa26
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x100caa28
        __asm _emit 0x75
        __asm _emit 0x02
        xor edx, edx
        mov ebx, dword ptr [esp + 70h]
        lea ecx, [ebp + 55h]
        push 40h
        push ecx
        lea ecx, [ebx + 247h]
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
        ; Exact mapped bytes E8 70 C8 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc8
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x100caa58
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 70h]
        xor eax, eax
        lea edi, [esi + 0c8h]
        push 0a0h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [edi], eax
        ; Exact mapped bytes E8 31 1D 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x1d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 17h
        ; Exact mapped bytes 74 43: je 0x100caac5
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100caa9d
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100caa9d
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x100caa9f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 5dh]
        push 40h
        push edx
        lea edx, [ebx + 247h]
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
        ; Exact mapped bytes E8 FD C7 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc7
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100caac7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E8 C4 1C 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x1c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 18h
        ; Exact mapped bytes 74 3F: je 0x100cab2e
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 60h]
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100cab06
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x100cab08
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 6eh]
        push 40h
        push edx
        lea edx, [ebx + 247h]
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
        ; Exact mapped bytes E8 94 C7 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xc7
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100cab30
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes E8 5B 1C 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x1c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 19h
        ; Exact mapped bytes 74 43: je 0x100cab9b
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100cab73
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100cab73
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x100cab75
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 76h]
        push 40h
        add ebx, 247h
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
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
        ; Exact mapped bytes E8 27 C7 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc7
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100cab9d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 64h], 0
        mov dword ptr [esi + 0d4h], eax
        mov ebx, 4
        mov ecx, dword ptr [edi]
        push 101h
        ; Exact mapped bytes E8 A7 45 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EE: jne 0x100cabad
        __asm _emit 0x75
        __asm _emit 0xee
        push 54h
        ; Exact mapped bytes E8 DA 1B 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x1b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 1ah
        ; Exact mapped bytes 74 75: je 0x100cac50
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 21h
        ; Exact mapped bytes 7E 12: jle 0x100cabf9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100cabf9
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 84h]
        ; Exact mapped bytes EB 02: jmp 0x100cabfb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esp + 70h]
        push 40h
        push 0
        lea eax, [ebp + 54h]
        push 0
        add ecx, 0b5h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 98 3D 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x100cac52
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebx + 10h]
        add ebx, 18h
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
        ; Exact mapped bytes EB 02: jmp 0x100cac52
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 0d8h], edi
        ; Exact mapped bytes E8 3C 1B 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x1b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 1bh
        ; Exact mapped bytes 74 75: je 0x100cacee
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 20h
        ; Exact mapped bytes 7E 12: jle 0x100cac97
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100cac97
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 80h]
        ; Exact mapped bytes EB 02: jmp 0x100cac99
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 70h]
        push 40h
        push 0
        lea ecx, [ebp + 71h]
        push 0
        add edx, 0b5h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 FA 3C 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x100cacf0
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebx]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x100cacf0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 0dch], edi
        ; Exact mapped bytes E8 9E 1A 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x1a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 1ch
        ; Exact mapped bytes 74 78: je 0x100cad8f
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 20h
        ; Exact mapped bytes 7E 12: jle 0x100cad35
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100cad35
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 80h]
        ; Exact mapped bytes EB 02: jmp 0x100cad37
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 70h]
        push 40h
        push 0
        add ebp, 91h
        push 0
        add edx, 0b5h
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 59 3C 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x100cad91
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebx]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x100cad91
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 0e0h], edi
        ; Exact mapped bytes E8 FD 19 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 1dh
        mov ebp, 22h
        ; Exact mapped bytes 74 77: je 0x100cae34
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 12: jle 0x100cadda
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100cadda
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 88h]
        ; Exact mapped bytes EB 02: jmp 0x100caddc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 74h]
        mov eax, dword ptr [esp + 70h]
        push 40h
        push 0
        add edx, 53h
        push 0
        add eax, 201h
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B4 3B 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x100cae36
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebx]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebx + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebx + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x100cae36
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 0e4h], edi
        ; Exact mapped bytes E8 58 19 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 1eh
        ; Exact mapped bytes 74 78: je 0x100caed5
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 12: jle 0x100cae7a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100cae7a
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 88h]
        ; Exact mapped bytes EB 02: jmp 0x100cae7c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 74h]
        mov ecx, dword ptr [esp + 70h]
        push 40h
        push 0
        add eax, 6bh
        push 0
        add ecx, 201h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 13 3B 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x100caed7
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebx + 10h]
        add ebx, 18h
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
        ; Exact mapped bytes EB 02: jmp 0x100caed7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0e8h], edi
        mov byte ptr [esp + 64h], 0
        lea ecx, [esi + 0d8h]
        mov edx, 5
        mov edi, 0fffeh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100caef2
        __asm _emit 0x75
        __asm _emit 0xf4
        push 0a0h
        ; Exact mapped bytes E8 98 18 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 1fh
        ; Exact mapped bytes 74 51: je 0x100caf6c
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0eh
        ; Exact mapped bytes 7E 12: jle 0x100caf39
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100caf39
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 380h]
        ; Exact mapped bytes EB 02: jmp 0x100caf3b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 74h]
        push 40h
        add ecx, 86h
        push ecx
        mov ecx, dword ptr [esp + 78h]
        add ecx, 1d2h
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
        ; Exact mapped bytes E8 56 C3 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xc3
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100caf6e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 0f0h], eax
        ; Exact mapped bytes E8 DB 41 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f0h]
        mov ebx, 67h
        mov dword ptr [esp + 80h], ebx
        mov ebp, 19ch
        mov dword ptr [eax + 50h], 0
        lea eax, [esi + 0f4h]
        mov dword ptr [esp + 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x100cafb6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ebx, dword ptr [esp + 80h]
        push 54h
        ; Exact mapped bytes E8 E3 17 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x17
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 78h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 20h
        ; Exact mapped bytes 74 79: je 0x100cb048
        __asm _emit 0x74
        __asm _emit 0x79
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 13: jle 0x100cafed
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebx, ebx
        ; Exact mapped bytes 7C 0F: jl 0x100cafed
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100cafed
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, dword ptr [eax + ebp]
        ; Exact mapped bytes EB 02: jmp 0x100cafef
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 74h]
        mov eax, dword ptr [esp + 70h]
        push 40h
        push 0
        add edx, 0bdh
        push 0
        add eax, 2ch
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A0 39 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x100cb04a
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebx]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebx + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebx + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x100cb04a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 7ch]
        mov ecx, dword ptr [esp + 80h]
        sub ebp, 4
        mov byte ptr [esp + 64h], 0
        mov dword ptr [eax], edi
        add eax, 4
        dec ecx
        cmp ebp, 194h
        mov dword ptr [esp + 7ch], eax
        mov dword ptr [esp + 80h], ecx
        ; Exact mapped bytes 0F 8F 35 FF FF FF: jg 0x100cafaf
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0a0h
        ; Exact mapped bytes E8 1C 17 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x17
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 21h
        ; Exact mapped bytes 74 51: je 0x100cb0e8
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 7E 12: jle 0x100cb0b5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100cb0b5
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 240h]
        ; Exact mapped bytes EB 02: jmp 0x100cb0b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebp, dword ptr [esp + 74h]
        mov ebx, dword ptr [esp + 70h]
        push 40h
        lea ecx, [ebp + 0c4h]
        push ecx
        lea ecx, [ebx + 0b1h]
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
        ; Exact mapped bytes E8 DA C1 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc1
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x100cb0f2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebx, dword ptr [esp + 70h]
        mov ebp, dword ptr [esp + 74h]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 100h], eax
        ; Exact mapped bytes E8 99 16 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x16
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 22h
        ; Exact mapped bytes 74 49: je 0x100cb163
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0ah
        ; Exact mapped bytes 7E 12: jle 0x100cb138
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100cb138
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 280h
        ; Exact mapped bytes EB 02: jmp 0x100cb13a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0c4h]
        push 40h
        push edx
        lea edx, [ebx + 0f7h]
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
        ; Exact mapped bytes E8 5F C1 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xc1
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100cb165
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 0fch], eax
        ; Exact mapped bytes E8 26 16 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x16
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 23h
        ; Exact mapped bytes 74 49: je 0x100cb1d6
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0dh
        ; Exact mapped bytes 7E 12: jle 0x100cb1ab
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100cb1ab
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 340h
        ; Exact mapped bytes EB 02: jmp 0x100cb1ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0c4h]
        push 40h
        push edx
        lea edx, [ebx + 13dh]
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
        ; Exact mapped bytes E8 EC C0 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc0
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100cb1d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 104h], eax
        ; Exact mapped bytes E8 B3 15 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x15
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 24h
        ; Exact mapped bytes 74 49: je 0x100cb249
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0ch
        ; Exact mapped bytes 7E 12: jle 0x100cb21e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100cb21e
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 300h
        ; Exact mapped bytes EB 02: jmp 0x100cb220
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0c4h]
        push 40h
        push edx
        lea edx, [ebx + 183h]
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
        ; Exact mapped bytes E8 79 C0 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xc0
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100cb24b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 108h], eax
        ; Exact mapped bytes E8 40 15 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x15
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 25h
        ; Exact mapped bytes 74 45: je 0x100cb2b8
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 38 58 1C 10: mov ecx, dword ptr [0x101c5838]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100cb28d
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x100cb28f
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0c4h]
        push 40h
        push edx
        lea edx, [ebx + 183h]
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
        ; Exact mapped bytes E8 0A C0 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc0
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100cb2ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 234h], eax
        ; Exact mapped bytes E8 8F 3E 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 108h]
        add eax, 1c9h
        push eax
        ; Exact mapped bytes E8 6B 3A 03 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x3a
        __asm _emit 0x03
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 B4 14 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 26h
        ; Exact mapped bytes 74 7C: je 0x100cb37d
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 6bh
        ; Exact mapped bytes 7E 12: jle 0x100cb31f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100cb31f
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 1ach]
        ; Exact mapped bytes EB 02: jmp 0x100cb321
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 70h]
        push 40h
        push 0
        lea ecx, [ebp + 0c4h]
        push 0
        add edx, 0b1h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6F 36 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x100cb377
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebx]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ebx, dword ptr [esp + 70h]
        ; Exact mapped bytes EB 02: jmp 0x100cb37f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 10ch], edi
        ; Exact mapped bytes E8 0F 14 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 27h
        ; Exact mapped bytes 74 7B: je 0x100cb421
        __asm _emit 0x74
        __asm _emit 0x7b
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 70h
        ; Exact mapped bytes 7E 12: jle 0x100cb3c4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100cb3c4
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 1c0h]
        ; Exact mapped bytes EB 02: jmp 0x100cb3c6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 70h]
        push 40h
        push 0
        lea edx, [ebp + 0c4h]
        push 0
        add eax, 0f7h
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 CB 35 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x100cb41b
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebx]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebx + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov ebx, dword ptr [esp + 70h]
        ; Exact mapped bytes EB 02: jmp 0x100cb423
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 110h], edi
        ; Exact mapped bytes E8 6B 13 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 28h
        ; Exact mapped bytes 74 7C: je 0x100cb4c6
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 7fh
        ; Exact mapped bytes 7E 12: jle 0x100cb468
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100cb468
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 1fch]
        ; Exact mapped bytes EB 02: jmp 0x100cb46a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esp + 70h]
        push 40h
        push 0
        lea eax, [ebp + 0c4h]
        push 0
        add ecx, 13dh
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 26 35 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x100cb4c0
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebx + 10h]
        add ebx, 18h
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
        mov ebx, dword ptr [esp + 70h]
        ; Exact mapped bytes EB 02: jmp 0x100cb4c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 114h], edi
        ; Exact mapped bytes E8 C6 12 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 29h
        ; Exact mapped bytes 74 7C: je 0x100cb56b
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 7ah
        ; Exact mapped bytes 7E 12: jle 0x100cb50d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100cb50d
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [eax + 1e8h]
        ; Exact mapped bytes EB 02: jmp 0x100cb50f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 70h]
        push 40h
        push 0
        lea ecx, [ebp + 0c4h]
        push 0
        add edx, 183h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 81 34 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x100cb565
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebx]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ebx, dword ptr [esp + 70h]
        ; Exact mapped bytes EB 02: jmp 0x100cb56d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 118h], edi
        ; Exact mapped bytes E8 21 12 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 2ah
        ; Exact mapped bytes 74 7A: je 0x100cb60e
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes A1 38 58 1C 10: mov eax, dword ptr [0x101c5838]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0bh
        ; Exact mapped bytes 7E 0F: jle 0x100cb5b1
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100cb5b1
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, dword ptr [eax + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x100cb5b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 70h]
        push 40h
        push 0
        lea edx, [ebp + 0c4h]
        push 0
        add eax, 183h
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 DE 33 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x100cb608
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebx]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebx + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov ebx, dword ptr [esp + 70h]
        ; Exact mapped bytes EB 02: jmp 0x100cb610
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 238h], edi
        ; Exact mapped bytes E8 39 3B 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 118h]
        add eax, 1c9h
        push eax
        ; Exact mapped bytes E8 15 37 03 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 5E 11 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x11
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 2bh
        ; Exact mapped bytes 74 1F: je 0x100cb676
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push ebp
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 49 33 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x100cb678
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 11ch], edi
        ; Exact mapped bytes E8 16 11 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x11
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 2ch
        ; Exact mapped bytes 74 1F: je 0x100cb6be
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push ebp
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 01 33 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x100cb6c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 120h], edi
        ; Exact mapped bytes E8 CE 10 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 2dh
        ; Exact mapped bytes 74 1F: je 0x100cb706
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push ebp
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B9 32 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x100cb708
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 124h], edi
        ; Exact mapped bytes E8 86 10 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 2eh
        ; Exact mapped bytes 74 22: je 0x100cb751
        __asm _emit 0x74
        __asm _emit 0x22
        push 40h
        push 0
        push 0
        lea ecx, [ebx + 46h]
        push ebp
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6E 32 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x100cb753
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 128h], edi
        ; Exact mapped bytes E8 3B 10 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 2fh
        ; Exact mapped bytes 74 25: je 0x100cb79f
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        push 0
        push 0
        lea edx, [ebx + 8ch]
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 20 32 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x100cb7a1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 23ch], edi
        ; Exact mapped bytes E8 A8 39 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f4h]
        push 0fffffeffh
        ; Exact mapped bytes E8 98 39 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f8h]
        push 101h
        ; Exact mapped bytes E8 88 39 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 100h]
        push 101h
        ; Exact mapped bytes E8 78 39 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0fch]
        push 101h
        ; Exact mapped bytes E8 68 39 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 104h]
        push 101h
        ; Exact mapped bytes E8 58 39 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108h]
        push 101h
        ; Exact mapped bytes E8 48 39 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10ch]
        push 101h
        ; Exact mapped bytes E8 38 39 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 110h]
        push 101h
        ; Exact mapped bytes E8 28 39 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 114h]
        push 101h
        ; Exact mapped bytes E8 18 39 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        push 101h
        ; Exact mapped bytes E8 08 39 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 11ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 F8 38 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 124h]
        push 0fffffeffh
        ; Exact mapped bytes E8 E8 38 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        push 0fffffeffh
        ; Exact mapped bytes E8 D8 38 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 128h]
        push 0fffffeffh
        ; Exact mapped bytes E8 C8 38 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        push 90h
        ; Exact mapped bytes E8 FE 0E 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 30h
        ; Exact mapped bytes 74 21: je 0x100cb8d6
        __asm _emit 0x74
        __asm _emit 0x21
        push 2
        push 0
        push 0
        push 40h
        push 0
        add ebp, 0bdh
        push 0
        add ebx, 2ch
        push ebp
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BC C6 F7 FF: call 0x10047f90
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xc6
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100cb8d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 130h], eax
        lea eax, [esi + 134h]
        mov byte ptr [esp + 64h], 0
        mov ebp, 23h
        mov dword ptr [esp + 80h], 8ch
        mov dword ptr [esp + 7ch], eax
        push 54h
        ; Exact mapped bytes E8 9C 0E 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 78h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 31h
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x100cb9a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 1A: jle 0x100cb93f
        __asm _emit 0x7e
        __asm _emit 0x1a
        test ebp, ebp
        ; Exact mapped bytes 7C 16: jl 0x100cb93f
        __asm _emit 0x7c
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100cb93f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [esp + 80h]
        mov ebx, dword ptr [eax + ecx]
        ; Exact mapped bytes EB 02: jmp 0x100cb941
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 74h]
        mov ecx, dword ptr [esp + 70h]
        mov eax, dword ptr [esi + 130h]
        push 40h
        push 0
        add edx, 0bdh
        push 0
        add ecx, 2ch
        push edx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 48 30 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x100cb9a2
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebx + 10h]
        add ebx, 18h
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
        ; Exact mapped bytes EB 02: jmp 0x100cb9a2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 7ch]
        mov byte ptr [esp + 64h], 0
        mov dword ptr [eax], edi
        or byte ptr [edi + 24h], 1
        mov edi, dword ptr [esp + 80h]
        add eax, 4
        add edi, 4
        inc ebp
        mov dword ptr [esp + 80h], edi
        mov dword ptr [esp + 7ch], eax
        lea ecx, [ebp - 23h]
        cmp ecx, 2
        ; Exact mapped bytes 0F 8C 27 FF FF FF: jl 0x100cb8fd
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 134h]
        push 0fffffeffh
        ; Exact mapped bytes E8 7A 37 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 138h]
        push 101h
        ; Exact mapped bytes E8 6A 37 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        lea eax, [esi + 240h]
        xor ebp, ebp
        mov dword ptr [esp + 80h], eax
        push 54h
        ; Exact mapped bytes E8 94 0D 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 7ch], edi
        test edi, edi
        mov byte ptr [esp + 64h], 32h
        ; Exact mapped bytes 74 7B: je 0x100cba99
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 38 58 1C 10: mov eax, dword ptr [0x101c5838]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 13: jle 0x100cba3e
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebp, ebp
        ; Exact mapped bytes 7C 0F: jl 0x100cba3e
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100cba3e
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, dword ptr [eax + ebp*4]
        ; Exact mapped bytes EB 02: jmp 0x100cba40
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 74h]
        mov eax, dword ptr [esp + 70h]
        push 40h
        push 0
        add edx, 0bdh
        push 0
        add eax, 2ch
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 4F 2F 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x100cba9b
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebx]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebx + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebx + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x100cba9b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 80h]
        mov byte ptr [esp + 64h], 0
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        inc ebp
        add eax, 4
        cmp ebp, 2
        mov dword ptr [esp + 80h], eax
        ; Exact mapped bytes 0F 85 42 FF FF FF: jne 0x100cba05
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 240h]
        push 0fffffeffh
        ; Exact mapped bytes E8 8D 36 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 244h]
        push 101h
        ; Exact mapped bytes E8 7D 36 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        xor ebp, ebp
        mov dword ptr [esi + 248h], ebp
        mov edx, 23h
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 12: jle 0x100cbb0d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100cbb0d
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 8ch]
        ; Exact mapped bytes EB 02: jmp 0x100cbb0f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 130h]
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ecx + 74h], eax
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 12: jle 0x100cbb38
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100cbb38
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 8ch]
        ; Exact mapped bytes EB 02: jmp 0x100cbb3a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ebx, dword ptr [esp + 70h]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [esi + 130h]
        mov edi, dword ptr [esp + 74h]
        lea edx, [ebx + 2ch]
        lea ecx, [ecx + ebx + 2ch]
        mov dword ptr [eax + 64h], edx
        lea edx, [edi + 0dbh]
        mov dword ptr [eax + 68h], edx
        lea edx, [edi + 1adh]
        mov dword ptr [eax + 6ch], ecx
        mov dword ptr [eax + 70h], edx
        mov eax, dword ptr [esi + 130h]
        push 0a0h
        mov dword ptr [eax + 84h], 1eh
        ; Exact mapped bytes E8 1C 0C 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x0c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        cmp eax, ebp
        mov byte ptr [esp + 64h], 33h
        ; Exact mapped bytes 74 4C: je 0x100cbbe3
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 1fh
        ; Exact mapped bytes 7E 12: jle 0x100cbbb8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100cbbb8
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 7c0h
        ; Exact mapped bytes EB 02: jmp 0x100cbbba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0d3h]
        push 40h
        push edx
        lea edx, [ebx + 263h]
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
        ; Exact mapped bytes E8 DF B6 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xb6
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100cbbe5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 13ch], eax
        ; Exact mapped bytes E8 A6 0B 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x0b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        cmp eax, ebp
        mov byte ptr [esp + 64h], 34h
        ; Exact mapped bytes 74 4C: je 0x100cbc59
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 20h
        ; Exact mapped bytes 7E 12: jle 0x100cbc2e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100cbc2e
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 800h
        ; Exact mapped bytes EB 02: jmp 0x100cbc30
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
        add edi, 19fh
        push 40h
        add ebx, 263h
        push edi
        push ebx
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
        ; Exact mapped bytes E8 69 B6 F4 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xb6
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100cbc5b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push ebp
        mov ecx, esi
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 140h], eax
        ; Exact mapped bytes E8 02 33 00 00: call 0x100cef70
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 2B 0B 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        cmp eax, ebp
        mov byte ptr [esp + 64h], 35h
        ; Exact mapped bytes 74 10: je 0x100cbc98
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebp
        push ebp
        push ebp
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 DA 90 F4 FF: call 0x10014d70
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100cbc9a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 12ch], eax
        ; Exact mapped bytes E8 F1 0A 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x0a
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        cmp eax, ebp
        mov byte ptr [esp + 64h], 36h
        ; Exact mapped bytes 74 0F: je 0x100cbcd1
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebp
        push 101ac230h
        mov ecx, eax
        ; Exact mapped bytes E8 F1 3D 03 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100cbcd3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 12ch]
        push esi
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 89 91 F4 FF: call 0x10014e70
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xf4
        __asm _emit 0xff
        lea eax, [esi + 144h]
        mov dword ptr [esp + 80h], eax
        push 54h
        ; Exact mapped bytes E8 A5 0A 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x0a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 7ch], edi
        test edi, edi
        mov byte ptr [esp + 64h], 37h
        ; Exact mapped bytes 74 7E: je 0x100cbd8b
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [esi + 68h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 13: jle 0x100cbd2b
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebp, ebp
        ; Exact mapped bytes 7C 0F: jl 0x100cbd2b
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100cbd2b
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, dword ptr [eax + ebp*4]
        ; Exact mapped bytes EB 02: jmp 0x100cbd2d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 74h]
        mov edx, dword ptr [esp + 70h]
        mov ecx, dword ptr [esi + 12ch]
        push 40h
        push 0
        add eax, 0bdh
        push 0
        push eax
        lea eax, [edx + 2ch]
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 5D 2C 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x100cbd8d
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebx]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x100cbd8d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 80h]
        inc ebp
        mov byte ptr [esp + 64h], 0
        mov dword ptr [eax], edi
        add eax, 4
        cmp ebp, 2
        mov dword ptr [esp + 80h], eax
        ; Exact mapped bytes 0F 8C 45 FF FF FF: jl 0x100cbcf4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 90h
        ; Exact mapped bytes E8 E7 09 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 38h
        ; Exact mapped bytes 74 3E: je 0x100cbe0a
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ebp, dword ptr [esp + 74h]
        mov edi, dword ptr [esp + 70h]
        push 0
        push 0
        lea edx, [ebp + 1a5h]
        push 0ffffffh
        lea ecx, [edi + 5ch]
        push edx
        push ecx
        lea edx, [ebp + 105h]
        lea ecx, [edi + 42h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 12ch]
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 78 7D 03 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x100cbe14
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebp, dword ptr [esp + 74h]
        mov edi, dword ptr [esp + 70h]
        xor eax, eax
        lea ebx, [esi + 14ch]
        push 90h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [ebx], eax
        ; Exact mapped bytes E8 75 09 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 39h
        ; Exact mapped bytes 74 39: je 0x100cbe77
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        push 0
        lea edx, [ebp + 1a5h]
        push 0ffffffh
        lea ecx, [edi + 0e7h]
        push edx
        push ecx
        lea edx, [ebp + 105h]
        lea ecx, [edi + 60h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi + 12ch]
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 0B 7D 03 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100cbe79
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 150h], eax
        ; Exact mapped bytes E8 12 09 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 80h], eax
        test eax, eax
        mov byte ptr [esp + 64h], 3ah
        ; Exact mapped bytes 74 3F: je 0x100cbee0
        __asm _emit 0x74
        __asm _emit 0x3f
        push 0
        push 0
        lea edx, [ebp + 1a5h]
        push 0ffffffh
        push edx
        lea edx, [edi + 2ch]
        lea ecx, [edx + 10ch]
        add edx, 0f3h
        push ecx
        lea ecx, [ebp + 105h]
        push ecx
        mov ecx, dword ptr [esi + 12ch]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 A2 7C 03 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100cbee2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 154h], eax
        mov byte ptr [esp + 64h], 0
        mov eax, ebx
        mov edx, 3
        mov edi, 14h
        mov ecx, dword ptr [eax]
        add eax, 4
        dec edx
        mov dword ptr [ecx + 5ch], edi
        ; Exact mapped bytes 75 F5: jne 0x100cbef9
        __asm _emit 0x75
        __asm _emit 0xf5
        mov ecx, dword ptr [esi + 144h]
        push 0fffffeffh
        ; Exact mapped bytes E8 4C 32 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        lea eax, [ebp + 0bdh]
        lea ebx, [esi + 158h]
        add eax, 4ah
        mov dword ptr [esp + 6ch], ebx
        mov dword ptr [esp + 78h], eax
        mov dword ptr [esp + 10h], 8
        mov ebp, 1
        mov dword ptr [esp + 80h], 40h
        mov dword ptr [esp + 7ch], ebp
        ; Exact mapped bytes EB 04: jmp 0x100cbf4d
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 7ch]
        push 58h
        ; Exact mapped bytes E8 4C 08 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 3bh
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x100cbff8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 1A: jle 0x100cbf8f
        __asm _emit 0x7e
        __asm _emit 0x1a
        test ebp, ebp
        ; Exact mapped bytes 7C 16: jl 0x100cbf8f
        __asm _emit 0x7c
        __asm _emit 0x16
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100cbf8f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [esp + 80h]
        lea ebp, [edx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100cbf91
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 78h]
        mov edx, dword ptr [esp + 70h]
        mov eax, dword ptr [esi + 12ch]
        push 40h
        push 0
        push 0
        push ecx
        lea ecx, [edx + 2ch]
        add ecx, 0beh
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 F8 29 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100cbffa
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x100cbffa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, dword ptr [esp + 7ch]
        mov dword ptr [ebx], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebx]
        add ebx, 4
        mov byte ptr [esp + 64h], 0
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esp + 80h]
        sub eax, 40h
        dec edx
        cmp eax, -40h
        mov dword ptr [esp + 80h], eax
        mov dword ptr [esp + 7ch], edx
        ; Exact mapped bytes 0F 8F 14 FF FF FF: jg 0x100cbf49
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 6ch]
        push 0fffffeffh
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 1B 31 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x31
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 78h]
        mov eax, dword ptr [esp + 10h]
        add ecx, 14h
        dec eax
        mov dword ptr [esp + 6ch], ebx
        mov dword ptr [esp + 78h], ecx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 85 D0 FE FF FF: jne 0x100cbf33
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 1D 88 51 17 10: mov ebx, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 F0 58 1C 10: mov edx, dword ptr [0x101c58f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ebp, ebp
        mov ecx, dword ptr [edx + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x100cc07c
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x100cc084
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [edx + 0ch]
        sub eax, ecx
        sar eax, 2
        cmp ebp, eax
        ; Exact mapped bytes 0F 8D 91 00 00 00: jge 0x100cc11d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx + 8]
        mov edi, dword ptr [eax + ebp*4]
        test edi, edi
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x100cc11d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0f0h]
        test eax, eax
        ; Exact mapped bytes 74 73: je 0x100cc117
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [edi + 30h]
        lea ecx, [esp + 1ch]
        push eax
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 14ch]
        add esp, 0ch
        lea edx, [esp + 1ch]
        push 969696h
        push edi
        push edx
        ; Exact mapped bytes E8 E3 7B 03 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 150h]
        push 969696h
        lea eax, [edi + 8]
        push 0
        push eax
        ; Exact mapped bytes E8 CD 7B 03 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 38h]
        lea edx, [esp + 1ch]
        imul ecx, dword ptr [edi + 34h]
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 154h]
        add esp, 0ch
        lea eax, [esp + 1ch]
        push 969696h
        push 0
        push eax
        ; Exact mapped bytes E8 9F 7B 03 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F0 58 1C 10: mov edx, dword ptr [0x101c58f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        inc ebp
        ; Exact mapped bytes E9 54 FF FF FF: jmp 0x100cc071
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 74h]
        lea ebp, [esi + 198h]
        mov dword ptr [esp + 80h], 2
        push 54h
        ; Exact mapped bytes E8 67 06 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 7ch], edi
        test edi, edi
        mov byte ptr [esp + 64h], 3ch
        ; Exact mapped bytes 74 32: je 0x100cc17d
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [esp + 70h]
        mov ecx, dword ptr [esi + 12ch]
        push 40h
        push 0
        lea eax, [ebx + 0bdh]
        push 0
        push eax
        lea eax, [edx + 2ch]
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 42 28 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x100cc17f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 80h]
        mov dword ptr [ebp], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add ebp, 4
        dec eax
        mov byte ptr [esp + 64h], 0
        mov dword ptr [esp + 80h], eax
        ; Exact mapped bytes 75 91: jne 0x100cc132
        __asm _emit 0x75
        __asm _emit 0x91
        mov ecx, dword ptr [esi + 198h]
        push 0fffffeffh
        ; Exact mapped bytes E8 AF 2F 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        mov ebx, 96h
        mov dword ptr [esp + 80h], 258h
        push 54h
        ; Exact mapped bytes E8 D8 05 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 7ch], edi
        test edi, edi
        mov byte ptr [esp + 64h], 3dh
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x100cc268
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 1A: jle 0x100cc203
        __asm _emit 0x7e
        __asm _emit 0x1a
        test ebx, ebx
        ; Exact mapped bytes 7C 16: jl 0x100cc203
        __asm _emit 0x7c
        __asm _emit 0x16
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100cc203
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [esp + 80h]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100cc205
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 74h]
        mov ecx, dword ptr [esi + 12ch]
        push 40h
        push 0
        lea eax, [edx + 0bdh]
        push 0
        push eax
        mov eax, dword ptr [esp + 80h]
        add eax, 2ch
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 81 27 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x27
        __asm _emit 0x03
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100cc26a
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
        ; Exact mapped bytes EB 02: jmp 0x100cc26a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 80h]
        mov byte ptr [esp + 64h], 0
        mov dword ptr [esi + eax - 0b8h], edi
        ; Exact mapped bytes 66 81 67 24 FE FF: and word ptr [edi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 4
        inc ebx
        mov dword ptr [esp + 80h], eax
        lea eax, [ebx - 96h]
        cmp eax, 2
        ; Exact mapped bytes 0F 8C 24 FF FF FF: jl 0x100cc1c1
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1a0h]
        push 0fffffeffh
        ; Exact mapped bytes E8 B3 2E 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1a4h]
        push 101h
        ; Exact mapped bytes E8 A3 2E 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 DC 04 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 80h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 3eh
        ; Exact mapped bytes 74 7E: je 0x100cc357
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [esi + 64h]
        mov ecx, dword ptr [eax + 160h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0E: jle 0x100cc2f4
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100cc2f4
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x100cc2f6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ebx, dword ptr [esp + 74h]
        mov ecx, dword ptr [esp + 70h]
        push 40h
        push 0
        lea eax, [ebx + 0bdh]
        push 0
        add ecx, 2bh
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 99 26 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x26
        __asm _emit 0x03
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 32: je 0x100cc35d
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
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
        ; Exact mapped bytes EB 06: jmp 0x100cc35d
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 74h]
        xor edi, edi
        mov dword ptr [esi + 8ch], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8ch]
        push 101h
        mov byte ptr [esp + 68h], 0
        ; Exact mapped bytes E8 E2 2D 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 1B 04 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 74h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 3fh
        ; Exact mapped bytes 74 2E: je 0x100cc3c5
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [esp + 70h]
        push 40h
        push 0
        lea eax, [ebx + 0bdh]
        push 0
        add ecx, 2bh
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 FC 25 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100cc3c7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 94h], ecx
        ; Exact mapped bytes E8 84 2D 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov ebp, 7fffh
        push 54h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 AE 03 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 74h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 40h
        ; Exact mapped bytes 74 2E: je 0x100cc432
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [esp + 70h]
        push 40h
        push 0
        lea eax, [ebx + 0bdh]
        push 0
        add edx, 2bh
        push eax
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8F 25 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100cc434
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 90h], ecx
        ; Exact mapped bytes E8 17 2D 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        push 54h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 46 03 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 74h], edi
        test edi, edi
        mov byte ptr [esp + 64h], 41h
        ; Exact mapped bytes 74 6A: je 0x100cc4d6
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 0ch
        ; Exact mapped bytes 7E 0F: jle 0x100cc487
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100cc487
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 30h]
        ; Exact mapped bytes EB 02: jmp 0x100cc489
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 70h]
        push 40h
        push 0
        push 0
        push ebx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 13 25 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100cc4d8
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
        ; Exact mapped bytes EB 02: jmp 0x100cc4d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 8ch]
        mov ecx, edi
        push eax
        mov byte ptr [esp + 68h], 0
        mov dword ptr [esi + 70h], edi
        ; Exact mapped bytes E8 B2 2A 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push ecx
        mov ecx, dword ptr [esi + 70h]
        ; Exact mapped bytes E8 A3 2A 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [esi + 94h]
        mov ecx, dword ptr [esi + 70h]
        push edx
        ; Exact mapped bytes E8 94 2A 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 5ch]
        xor eax, eax
        mov dword ptr [esi + 224h], eax
        mov dword ptr [esi + 22ch], eax
        mov dword ptr [esi + 230h], eax
        mov dword ptr [esi + 21ch], 2
        mov dword ptr [esi + 220h], 3
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
        add esp, 58h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
