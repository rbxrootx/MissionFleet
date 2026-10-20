// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D3F50 .. +0x466 bytes.
extern "C" __declspec(naked) void FUN_100d3f50_100D3F50() {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 A8 0E F5 FF: call 0x10024e10
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x0e
        __asm _emit 0xf5
        __asm _emit 0xff
        mov esi, eax
        xor ebx, ebx
        cmp esi, ebx
        ; Exact mapped bytes 0F 84 39 04 00 00: je 0x100d43ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 20h]
        push ecx
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 4B AD 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        or byte ptr [edi + 24h], 0fh
        ; Exact mapped bytes 66 8B 46 0C: mov ax, word ptr [esi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x0c
        mov ecx, dword ptr [edi + 74h]
        shr eax, 4
        and eax, 0ffh
        push eax
        ; Exact mapped bytes E8 82 B7 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4ch]
        push ecx
        mov ecx, dword ptr [edi + 78h]
        ; Exact mapped bytes E8 76 B7 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esi + 5ch]
        mov ecx, dword ptr [edi + 7ch]
        push edx
        ; Exact mapped bytes E8 6A B7 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        mov ecx, dword ptr [edi + 80h]
        push eax
        ; Exact mapped bytes E8 5B B7 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 254h]
        mov edx, dword ptr [esi + 258h]
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 66 8B 4E 0A: mov cx, word ptr [esi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x0a
        and ecx, 7c00h
        xor eax, eax
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 0ch], ebx
        mov dword ptr [esp + 14h], ebx
        ; Exact mapped bytes 0F 86 18 01 00 00: jbe 0x100d4112
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        lea ebx, [edi + 84h]
        lea edx, [esi + 0c6h]
        lea ebp, [edi + 0a4h]
        test dword ptr [esp + 14h], 80000000h
        ; Exact mapped bytes 74 65: je 0x100d407c
        __asm _emit 0x74
        __asm _emit 0x65
        cmp dword ptr [esp + 10h], 8
        ; Exact mapped bytes 0F 8D B4 00 00 00: jge 0x100d40d6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 1bh
        and eax, 10h
        or al, 0cbh
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x100d4051
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x100d4051
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x100d4051
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x100d4053
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp]
        mov dword ptr [ecx + 0f8h], eax
        mov eax, dword ptr [ebp]
        or byte ptr [eax + 24h], 0fh
        mov ecx, dword ptr [ebp]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        mov dword ptr [ecx + 64h], eax
        mov ecx, dword ptr [esp + 10h]
        inc ecx
        add ebp, 4
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes EB 5A: jmp 0x100d40d6
        __asm _emit 0xeb
        __asm _emit 0x5a
        cmp eax, 8
        ; Exact mapped bytes 7D 55: jge 0x100d40d6
        __asm _emit 0x7d
        __asm _emit 0x55
        mov eax, dword ptr [esp + 24h]
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 1bh
        and eax, 10h
        or al, 0cbh
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x100d40b0
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x100d40b0
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x100d40b0
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x100d40b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx]
        mov dword ptr [ecx + 0f8h], eax
        mov eax, dword ptr [ebx]
        or byte ptr [eax + 24h], 0fh
        mov ecx, dword ptr [ebx]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        mov dword ptr [ecx + 64h], eax
        mov ecx, dword ptr [esp + 20h]
        inc ecx
        add ebx, 4
        mov dword ptr [esp + 20h], ecx
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 24h]
        shl ecx, 1
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 66 8B 4E 0A: mov cx, word ptr [esi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x0a
        shl eax, 1
        mov dword ptr [esp + 24h], eax
        mov eax, dword ptr [esp + 18h]
        shr ecx, 0ah
        inc eax
        and ecx, 1fh
        add edx, 2
        mov dword ptr [esp + 18h], eax
        cmp eax, ecx
        mov eax, dword ptr [esp + 20h]
        ; Exact mapped bytes 0F 8C 01 FF FF FF: jl 0x100d400d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 8
        pop ebp
        ; Exact mapped bytes 7D 1C: jge 0x100d412e
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov edx, 8
        lea ecx, [edi + eax*4 + 84h]
        sub edx, eax
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x100d4120
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, dword ptr [esp + 0ch]
        cmp eax, 8
        ; Exact mapped bytes 7D 1C: jge 0x100d4153
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov edx, 8
        lea ecx, [edi + eax*4 + 0a4h]
        sub edx, eax
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x100d4145
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 18: mov ax, word ptr [esi + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x18
        mov ecx, dword ptr [edx + 90h]
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x100d4182
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x100d4182
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x100d4182
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x100d4184
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 0c4h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100d41b9
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esp + 28h]
        or byte ptr [edi + 24h], 7
        test eax, eax
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 164h]
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x100d42b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 8ah
        ; Exact mapped bytes 7E 12: jle 0x100d41ee
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d41ee
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 228h]
        ; Exact mapped bytes EB 02: jmp 0x100d41f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 64h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100d4222
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 8ch
        ; Exact mapped bytes 7E 12: jle 0x100d4245
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d4245
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 230h]
        ; Exact mapped bytes EB 02: jmp 0x100d4247
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 6ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100d4279
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 8eh
        ; Exact mapped bytes 7E 12: jle 0x100d429c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d429c
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 238h]
        ; Exact mapped bytes EB 02: jmp 0x100d429e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [edi + 70h]
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x100d43ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x100d4385
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 8bh
        ; Exact mapped bytes 7E 12: jle 0x100d42cb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d42cb
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 22ch]
        ; Exact mapped bytes EB 02: jmp 0x100d42cd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 64h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100d42ff
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 8dh
        ; Exact mapped bytes 7E 12: jle 0x100d4322
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d4322
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 234h]
        ; Exact mapped bytes EB 02: jmp 0x100d4324
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 6ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100d4356
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 8fh
        ; Exact mapped bytes 7E 12: jle 0x100d4379
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d4379
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 23ch]
        ; Exact mapped bytes EB 02: jmp 0x100d437b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [edi + 70h]
        test eax, eax
        mov dword ptr [edi + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100d43ad
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        add edi, 14h
        mov dword ptr [edi], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 4], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 8], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 0ch], edx
        pop edi
        pop esi
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
