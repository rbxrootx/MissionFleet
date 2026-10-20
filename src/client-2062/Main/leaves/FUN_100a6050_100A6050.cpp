// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A6050 .. +0x1441 bytes.
extern "C" __declspec(naked) void FUN_100a6050_100A6050() {
    __asm {
        sub esp, 10h
        push ebp
        mov ebp, ecx
        push esi
        test byte ptr [ebp + 24h], 2
        ; Exact mapped bytes 0F 84 25 14 00 00: je 0x100a7486
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        push ebx
        push edi
        mov eax, dword ptr [ecx + 4]
        cmp eax, 201h
        ; Exact mapped bytes 0F 87 AE 13 00 00: ja 0x100a7423
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xae
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B8 12 00 00: je 0x100a7333
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 100h
        ; Exact mapped bytes 0F 84 96 12 00 00: je 0x100a731c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 200h
        ; Exact mapped bytes 0F 85 C5 13 00 00: jne 0x100a7456
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 9c4h]
        mov dword ptr [esp + 14h], 1
        cmp eax, 1
        ; Exact mapped bytes 0F 8C B9 0A 00 00: jl 0x100a6b61
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edi, [ebp + 1dch]
        mov esi, dword ptr [ecx + 4]
        mov dword ptr [esp + 10h], esi
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx + 4]
        mov ebx, dword ptr [ecx + 14h]
        add ebx, edx
        cmp esi, ebx
        ; Exact mapped bytes 7C 2B: jl 0x100a60f4
        __asm _emit 0x7c
        __asm _emit 0x2b
        mov ebx, dword ptr [ecx + 1ch]
        add ebx, edx
        cmp esi, ebx
        ; Exact mapped bytes 7D 22: jge 0x100a60f4
        __asm _emit 0x7d
        __asm _emit 0x22
        ; Exact mapped bytes 8B 35 D4 92 1C 10: mov esi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 8]
        mov ebx, dword ptr [ecx + 18h]
        mov esi, dword ptr [esi + 8]
        add ebx, edx
        cmp esi, ebx
        ; Exact mapped bytes 7C 09: jl 0x100a60f0
        __asm _emit 0x7c
        __asm _emit 0x09
        mov ecx, dword ptr [ecx + 20h]
        add ecx, edx
        cmp esi, ecx
        ; Exact mapped bytes 7C 1A: jl 0x100a610a
        __asm _emit 0x7c
        __asm _emit 0x1a
        mov esi, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 14h]
        add edi, 4
        inc ecx
        cmp ecx, eax
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 0F 8F 59 0A 00 00: jg 0x100a6b61
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x59
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B1: jmp 0x100a60bb
        __asm _emit 0xeb
        __asm _emit 0xb1
        mov edi, dword ptr [esp + 14h]
        lea edx, [edi + edi*2]
        mov ecx, dword ptr [ebp + edi*4 + 1d8h]
        shl edx, 4
        add edx, edi
        lea esi, [ebp + edx*4]
        lea eax, [esi + 904h]
        push eax
        push 32h
        push 0c8h
        push ecx
        ; Exact mapped bytes 8B 0D EC 58 1C 10: mov ecx, dword ptr [0x101c58ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 45 6B F7 FF: call 0x1001cc80
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x6b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp + edi*4 + 1d8h]
        cmp dword ptr [eax + 28h], 100h
        ; Exact mapped bytes 75 16: jne 0x100a6161
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [eax + 8]
        sub eax, 6
        push eax
        push ecx
        mov ecx, dword ptr [ebp + 0a0h]
        ; Exact mapped bytes E8 6F 8B 05 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x8b
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [esi + 948h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 44 09 00 00: mov ax, word ptr [esi + 0x944]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 10h], edx
        mov ecx, eax
        and ecx, 3fh
        shr eax, 6
        lea edx, [ecx + ecx*4]
        lea edx, [ecx + edx*8]
        lea ecx, [ecx + edx*2]
        add ecx, eax
        lea eax, [ecx + ecx*4]
        lea eax, [ecx + eax*2]
        lea ecx, [eax + eax*4]
        mov eax, dword ptr [ecx*4 + 1018174ch]
        cmp eax, 4bh
        ; Exact mapped bytes 7D 37: jge 0x100a61d3
        __asm _emit 0x7d
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 20fh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x100a61c2
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100a61c2
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100a61c2
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100a61c4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 5c0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 5D: je 0x100a622e
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes EB 33: jmp 0x100a6206
        __asm _emit 0xeb
        __asm _emit 0x33
        ; Exact mapped bytes 8B 0D C8 57 1C 10: mov ecx, dword ptr [0x101c57c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, -4bh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x100a61f7
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100a61f7
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100a61f7
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100a61f9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 5c0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a622e
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
        mov ecx, dword ptr [esi + 958h]
        push ecx
        mov ecx, dword ptr [ebp + 5b8h]
        ; Exact mapped bytes E8 E0 94 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [esi + 950h]
        mov ecx, dword ptr [ebp + 5bch]
        push edx
        ; Exact mapped bytes E8 CE 94 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        xor edi, edi
        xor ebx, ebx
        lea ecx, [eax + eax*2]
        shl ecx, 4
        add ecx, eax
        mov eax, dword ptr [esp + 10h]
        and eax, 10000h
        lea edx, [ecx + ecx + 4c0h]
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 18h], edx
        mov eax, dword ptr [esp + 18h]
        add eax, ebx
        lea esi, [ebp + eax*2]
        ; Exact mapped bytes 66 8B 44 45 00: mov ax, word ptr [ebp + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 8D 92 00 00 00: jge 0x100a6324
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 28h
        ; Exact mapped bytes 7E 11: jle 0x100a62b1
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, edi
        ; Exact mapped bytes 74 07: je 0x100a62b1
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0a00h
        ; Exact mapped bytes EB 02: jmp 0x100a62b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + ebx*4 + 104h]
        mov dword ptr [ecx + 0f8h], eax
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 172h
        ; Exact mapped bytes 7E 12: jle 0x100a62e3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100a62e3
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 5c8h]
        ; Exact mapped bytes EB 02: jmp 0x100a62e5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + ebx*4 + 130h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x100a63bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x100a63bf
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 5C: jle 0x100a6382
        __asm _emit 0x7e
        __asm _emit 0x5c
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 27h
        ; Exact mapped bytes 7E 11: jle 0x100a6345
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, edi
        ; Exact mapped bytes 74 07: je 0x100a6345
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 9c0h
        ; Exact mapped bytes EB 02: jmp 0x100a6347
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + ebx*4 + 104h]
        mov dword ptr [ecx + 0f8h], eax
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 171h
        ; Exact mapped bytes 0F 8E 7A FF FF FF: jle 0x100a62e3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 6C FF FF FF: je 0x100a62e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 5c4h]
        ; Exact mapped bytes E9 63 FF FF FF: jmp 0x100a62e5
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 38: jne 0x100a63bf
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 29h
        ; Exact mapped bytes 7E 11: jle 0x100a63a6
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, edi
        ; Exact mapped bytes 74 07: je 0x100a63a6
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0a40h
        ; Exact mapped bytes EB 02: jmp 0x100a63a8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + ebx*4 + 104h]
        mov dword ptr [ecx + 0f8h], eax
        mov eax, dword ptr [ebp + ebx*4 + 130h]
        mov dword ptr [eax + 50h], edi
        ; Exact mapped bytes 0F BF 06: movsx eax, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + ebx*4 + 104h]
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 4C 93 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 84 2B 74 06 00 00: movsx eax, byte ptr [ebx + ebp + 0x674]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 16: movsx edx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x16
        xor eax, 0ffffffaah
        add eax, edx
        ; Exact mapped bytes 0F 89 95 00 00 00: jns 0x100a647f
        __asm _emit 0x0f
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 28h
        ; Exact mapped bytes 7E 12: jle 0x100a640b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x100a640b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0a00h
        ; Exact mapped bytes EB 02: jmp 0x100a640d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ebp + ebx*4 + 0ach]
        mov dword ptr [edx + 0f8h], ecx
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 172h
        ; Exact mapped bytes 7E 12: jle 0x100a643e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x100a643e
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 5c8h]
        ; Exact mapped bytes EB 02: jmp 0x100a6440
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ebp + ebx*4 + 0d8h]
        cmp ecx, edi
        mov dword ptr [edx + 50h], ecx
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x100a651e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 10h]
        add ecx, 18h
        mov dword ptr [edx + 0ch], esi
        mov esi, dword ptr [ecx - 4]
        mov dword ptr [edx + 10h], esi
        mov esi, dword ptr [ecx]
        add edx, 14h
        mov dword ptr [edx], esi
        mov esi, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], esi
        mov esi, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], esi
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x100a651e
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 7E 5F: jle 0x100a64e2
        __asm _emit 0x7e
        __asm _emit 0x5f
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 27h
        ; Exact mapped bytes 7E 12: jle 0x100a64a4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x100a64a4
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 9c0h
        ; Exact mapped bytes EB 02: jmp 0x100a64a6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ebp + ebx*4 + 0ach]
        mov dword ptr [edx + 0f8h], ecx
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 171h
        ; Exact mapped bytes 0F 8E 75 FF FF FF: jle 0x100a643e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 0F 84 67 FF FF FF: je 0x100a643e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ecx + 5c4h]
        ; Exact mapped bytes E9 5E FF FF FF: jmp 0x100a6440
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 3A: jne 0x100a651e
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 29h
        ; Exact mapped bytes 7E 12: jle 0x100a6505
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x100a6505
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0a40h
        ; Exact mapped bytes EB 02: jmp 0x100a6507
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ebp + ebx*4 + 0ach]
        mov dword ptr [edx + 0f8h], ecx
        mov ecx, dword ptr [ebp + ebx*4 + 0d8h]
        mov dword ptr [ecx + 50h], edi
        mov ecx, dword ptr [ebp + ebx*4 + 0ach]
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 F0 91 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x91
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [esp + 1ch], edi
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100a65c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3aeh
        ; Exact mapped bytes 7E 12: jle 0x100a655d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100a655d
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0eb8h]
        ; Exact mapped bytes EB 02: jmp 0x100a655f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a6594
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3afh
        ; Exact mapped bytes 0F 8E AA 04 00 00: jle 0x100a6a53
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 9C 04 00 00: je 0x100a6a53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ebch]
        ; Exact mapped bytes E9 93 04 00 00: jmp 0x100a6a55
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        test eax, 2000000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100a6659
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b0h
        ; Exact mapped bytes 7E 12: jle 0x100a65f4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100a65f4
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0ec0h]
        ; Exact mapped bytes EB 02: jmp 0x100a65f6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a662b
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b1h
        ; Exact mapped bytes 0F 8E 13 04 00 00: jle 0x100a6a53
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 05 04 00 00: je 0x100a6a53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ec4h]
        ; Exact mapped bytes E9 FC 03 00 00: jmp 0x100a6a55
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 80000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100a66ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b2h
        ; Exact mapped bytes 7E 12: jle 0x100a6687
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100a6687
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0ec8h]
        ; Exact mapped bytes EB 02: jmp 0x100a6689
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a66be
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b3h
        ; Exact mapped bytes 0F 8E 80 03 00 00: jle 0x100a6a53
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 72 03 00 00: je 0x100a6a53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ecch]
        ; Exact mapped bytes E9 69 03 00 00: jmp 0x100a6a55
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 200000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100a677f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b5h
        ; Exact mapped bytes 7E 12: jle 0x100a671a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100a671a
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0ed4h]
        ; Exact mapped bytes EB 02: jmp 0x100a671c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a6751
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b6h
        ; Exact mapped bytes 0F 8E ED 02 00 00: jle 0x100a6a53
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 DF 02 00 00: je 0x100a6a53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ed8h]
        ; Exact mapped bytes E9 D6 02 00 00: jmp 0x100a6a55
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 1000000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100a6812
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b7h
        ; Exact mapped bytes 7E 12: jle 0x100a67ad
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100a67ad
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0edch]
        ; Exact mapped bytes EB 02: jmp 0x100a67af
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a67e4
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b8h
        ; Exact mapped bytes 0F 8E 5A 02 00 00: jle 0x100a6a53
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 4C 02 00 00: je 0x100a6a53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ee0h]
        ; Exact mapped bytes E9 43 02 00 00: jmp 0x100a6a55
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 40000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100a68a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b9h
        ; Exact mapped bytes 7E 12: jle 0x100a6840
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100a6840
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0ee4h]
        ; Exact mapped bytes EB 02: jmp 0x100a6842
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a6877
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3bah
        ; Exact mapped bytes 0F 8E C7 01 00 00: jle 0x100a6a53
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 B9 01 00 00: je 0x100a6a53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ee8h]
        ; Exact mapped bytes E9 B0 01 00 00: jmp 0x100a6a55
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 20000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100a6938
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3bfh
        ; Exact mapped bytes 7E 12: jle 0x100a68d3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100a68d3
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0efch]
        ; Exact mapped bytes EB 02: jmp 0x100a68d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a690a
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3c0h
        ; Exact mapped bytes 0F 8E 34 01 00 00: jle 0x100a6a53
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 26 01 00 00: je 0x100a6a53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0f00h]
        ; Exact mapped bytes E9 1D 01 00 00: jmp 0x100a6a55
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 10000000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100a69cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3bbh
        ; Exact mapped bytes 7E 12: jle 0x100a6966
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100a6966
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0eech]
        ; Exact mapped bytes EB 02: jmp 0x100a6968
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a699d
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3bch
        ; Exact mapped bytes 0F 8E A1 00 00 00: jle 0x100a6a53
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x100a6a53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ef0h]
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x100a6a55
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 40000000h
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x100a6a6b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 57 1C 10: mov eax, dword ptr [0x101c57c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1f4h
        ; Exact mapped bytes 7E 12: jle 0x100a69f9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100a69f9
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 7d0h]
        ; Exact mapped bytes EB 02: jmp 0x100a69fb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a6a30
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
        ; Exact mapped bytes A1 C8 57 1C 10: mov eax, dword ptr [0x101c57c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1f5h
        ; Exact mapped bytes 7E 12: jle 0x100a6a53
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100a6a53
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 7d4h]
        ; Exact mapped bytes EB 02: jmp 0x100a6a55
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 94h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x100a6b1f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x100a6af7
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3bdh
        ; Exact mapped bytes 7E 12: jle 0x100a6a8e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100a6a8e
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0ef4h]
        ; Exact mapped bytes EB 02: jmp 0x100a6a90
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a6ac5
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3beh
        ; Exact mapped bytes 7E 12: jle 0x100a6ae8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100a6ae8
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0ef8h]
        ; Exact mapped bytes EB 02: jmp 0x100a6aea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 94h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a6b1f
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
        inc ebx
        cmp ebx, 0bh
        ; Exact mapped bytes 0F 8C 51 F7 FF FF: jl 0x100a627a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp + 5c4h]
        mov edx, 20h
        mov edi, 1
        mov esi, 0fffeh
        test byte ptr [esp + 10h], 1
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 74 06: je 0x100a6b4d
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 09 79 24: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        ; Exact mapped bytes EB 04: jmp 0x100a6b51
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 10h]
        add eax, 4
        shr ecx, 1
        dec edx
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 75 DD: jne 0x100a6b3e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 9c4h]
        mov eax, dword ptr [esp + 14h]
        inc ecx
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 E2 08 00 00: jne 0x100a7456
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 658h]
        and eax, 0fh
        lea edx, [eax + eax*4]
        lea ecx, [eax + edx*8]
        mov edx, dword ptr [ebp + 69ch]
        shr edx, 1
        lea eax, [eax + ecx*2]
        add eax, edx
        lea ecx, [eax + eax*4]
        lea eax, [eax + ecx*2]
        lea edx, [eax + eax*4]
        mov eax, dword ptr [edx*4 + 1018174ch]
        cmp eax, 4bh
        ; Exact mapped bytes 7D 37: jge 0x100a6bdc
        __asm _emit 0x7d
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 20fh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x100a6bcb
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100a6bcb
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100a6bcb
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100a6bcd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 5c0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 5D: je 0x100a6c37
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes EB 33: jmp 0x100a6c0f
        __asm _emit 0xeb
        __asm _emit 0x33
        ; Exact mapped bytes 8B 0D C8 57 1C 10: mov ecx, dword ptr [0x101c57c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, -4bh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x100a6c00
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100a6c00
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100a6c00
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100a6c02
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 5c0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a6c37
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
        mov ecx, dword ptr [ebp + 5b8h]
        push 0
        ; Exact mapped bytes E8 DC 8A 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x8a
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 5bch]
        push 0
        ; Exact mapped bytes E8 CF 8A 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x8a
        __asm _emit 0x05
        __asm _emit 0x00
        mov ebx, 0fffff98ch
        lea edi, [ebp + 674h]
        lea esi, [ebp + 0ach]
        sub ebx, ebp
        mov cl, byte ptr [edi]
        mov eax, 0
        xor cl, 0aah
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        setl al
        mov edx, dword ptr [ecx + 164h]
        add eax, 171h
        cmp edx, eax
        ; Exact mapped bytes 7E 13: jle 0x100a6c99
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100a6c99
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100a6c99
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100a6c9b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 2ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a6ccd
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 29h
        ; Exact mapped bytes 7E 11: jle 0x100a6cec
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100a6cec
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0a40h
        ; Exact mapped bytes EB 02: jmp 0x100a6cee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0f8h], eax
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 0F BE 07: movsx eax, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x07
        xor eax, 0ffffffaah
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 17 8A 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x8a
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        xor ecx, ecx
        add esi, 4
        inc edi
        mov dword ptr [eax + 50h], ecx
        mov edx, dword ptr [esi + 54h]
        lea eax, [ebx + edi]
        cmp eax, 0bh
        mov dword ptr [edx + 0f8h], ecx
        ; Exact mapped bytes 0F 8C 37 FF FF FF: jl 0x100a6c64
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp + 6dch]
        test ebx, 10000h
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x100a6dfc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3aeh
        ; Exact mapped bytes 7E 12: jle 0x100a6d62
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100a6d62
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0eb8h]
        ; Exact mapped bytes EB 02: jmp 0x100a6d64
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a6d99
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3afh
        ; Exact mapped bytes 7E 12: jle 0x100a6dbc
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100a6dbc
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0ebch]
        ; Exact mapped bytes EB 02: jmp 0x100a6dbe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 94h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 1A 05 00 00: je 0x100a72e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes E9 ED 04 00 00: jmp 0x100a72e9
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, 2000000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100a6e90
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b0h
        ; Exact mapped bytes 7E 12: jle 0x100a6e2b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100a6e2b
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0ec0h]
        ; Exact mapped bytes EB 02: jmp 0x100a6e2d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a6e62
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b1h
        ; Exact mapped bytes 0F 8E 45 FF FF FF: jle 0x100a6dbc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 37 FF FF FF: je 0x100a6dbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0ec4h]
        ; Exact mapped bytes E9 2E FF FF FF: jmp 0x100a6dbe
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, 80000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100a6f24
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b3h
        ; Exact mapped bytes 7E 12: jle 0x100a6ebf
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100a6ebf
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0ecch]
        ; Exact mapped bytes EB 02: jmp 0x100a6ec1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a6ef6
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b4h
        ; Exact mapped bytes 0F 8E B1 FE FF FF: jle 0x100a6dbc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 A3 FE FF FF: je 0x100a6dbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0ed0h]
        ; Exact mapped bytes E9 9A FE FF FF: jmp 0x100a6dbe
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, 200000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100a6fb8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b5h
        ; Exact mapped bytes 7E 12: jle 0x100a6f53
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100a6f53
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0ed4h]
        ; Exact mapped bytes EB 02: jmp 0x100a6f55
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a6f8a
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b6h
        ; Exact mapped bytes 0F 8E 1D FE FF FF: jle 0x100a6dbc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 0F FE FF FF: je 0x100a6dbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0ed8h]
        ; Exact mapped bytes E9 06 FE FF FF: jmp 0x100a6dbe
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, 1000000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100a704c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b7h
        ; Exact mapped bytes 7E 12: jle 0x100a6fe7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100a6fe7
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0edch]
        ; Exact mapped bytes EB 02: jmp 0x100a6fe9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a701e
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b8h
        ; Exact mapped bytes 0F 8E 89 FD FF FF: jle 0x100a6dbc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x89
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 7B FD FF FF: je 0x100a6dbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0ee0h]
        ; Exact mapped bytes E9 72 FD FF FF: jmp 0x100a6dbe
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, 40000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100a70e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3b9h
        ; Exact mapped bytes 7E 12: jle 0x100a707b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100a707b
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0ee4h]
        ; Exact mapped bytes EB 02: jmp 0x100a707d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a70b2
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3bah
        ; Exact mapped bytes 0F 8E F5 FC FF FF: jle 0x100a6dbc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf5
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 E7 FC FF FF: je 0x100a6dbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0ee8h]
        ; Exact mapped bytes E9 DE FC FF FF: jmp 0x100a6dbe
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, 20000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100a7174
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3bfh
        ; Exact mapped bytes 7E 12: jle 0x100a710f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100a710f
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0efch]
        ; Exact mapped bytes EB 02: jmp 0x100a7111
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a7146
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3c0h
        ; Exact mapped bytes 0F 8E 61 FC FF FF: jle 0x100a6dbc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x61
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 53 FC FF FF: je 0x100a6dbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0f00h]
        ; Exact mapped bytes E9 4A FC FF FF: jmp 0x100a6dbe
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, 10000000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100a7208
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3bbh
        ; Exact mapped bytes 7E 12: jle 0x100a71a3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100a71a3
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0eech]
        ; Exact mapped bytes EB 02: jmp 0x100a71a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a71da
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3bch
        ; Exact mapped bytes 0F 8E CD FB FF FF: jle 0x100a6dbc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xcd
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 BF FB FF FF: je 0x100a6dbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0ef0h]
        ; Exact mapped bytes E9 B6 FB FF FF: jmp 0x100a6dbe
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, 40000000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100a729c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 57 1C 10: mov eax, dword ptr [0x101c57c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1f4h
        ; Exact mapped bytes 7E 12: jle 0x100a7237
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100a7237
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 7d0h]
        ; Exact mapped bytes EB 02: jmp 0x100a7239
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a726e
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
        ; Exact mapped bytes A1 C8 57 1C 10: mov eax, dword ptr [0x101c57c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1f5h
        ; Exact mapped bytes 0F 8E 39 FB FF FF: jle 0x100a6dbc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 2B FB FF FF: je 0x100a6dbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 7d4h]
        ; Exact mapped bytes E9 22 FB FF FF: jmp 0x100a6dbe
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3bdh
        ; Exact mapped bytes 7E 12: jle 0x100a72bf
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100a72bf
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0ef4h]
        ; Exact mapped bytes EB 02: jmp 0x100a72c1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 90h]
        push eax
        ; Exact mapped bytes E8 33 E8 F6 FF: call 0x10015b00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 3beh
        ; Exact mapped bytes E8 13 E9 F6 FF: call 0x10015bf0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 94h]
        push eax
        ; Exact mapped bytes E8 17 E8 F6 FF: call 0x10015b00
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xff
        lea eax, [ebp + 5c4h]
        mov edx, 20h
        mov edi, 1
        mov esi, 0fffeh
        mov ecx, dword ptr [eax]
        test bl, 1
        ; Exact mapped bytes 74 06: je 0x100a730b
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 09 79 24: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        ; Exact mapped bytes EB 04: jmp 0x100a730f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        shr ebx, 1
        add eax, 4
        dec edx
        ; Exact mapped bytes 75 E7: jne 0x100a72fe
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes E9 3A 01 00 00: jmp 0x100a7456
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 8], 1bh
        ; Exact mapped bytes 0F 85 30 01 00 00: jne 0x100a7456
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x100a7456
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 9c4h]
        mov esi, 1
        cmp eax, esi
        ; Exact mapped bytes 0F 8C 10 01 00 00: jl 0x100a7456
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [ebp + 1dch]
        mov ebx, 100h
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edi]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 3F 01 00 00: call 0x100a74a0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100a736c
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, dword ptr [edi]
        cmp dword ptr [ecx + 28h], ebx
        ; Exact mapped bytes 74 13: je 0x100a737f
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 9c4h]
        inc esi
        add edi, 4
        cmp esi, eax
        ; Exact mapped bytes 7E D7: jle 0x100a7351
        __asm _emit 0x7e
        __asm _emit 0xd7
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x100a7456
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi + esi*2]
        ; Exact mapped bytes 8B 0D 04 D1 1A 10: mov ecx, dword ptr [0x101ad104]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        shl edx, 4
        add edx, esi
        xor ecx, 0aaaaaaaah
        lea eax, [ebp + edx*4]
        mov edx, dword ptr [ebp + edx*4 + 958h]
        cmp edx, ecx
        ; Exact mapped bytes 7F 69: jg 0x100a740b
        __asm _emit 0x7f
        __asm _emit 0x69
        ; Exact mapped bytes 66 8B 90 44 09 00 00: mov dx, word ptr [eax + 0x944]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        and edx, 0ffc0h
        cmp edx, 1300h
        ; Exact mapped bytes 75 16: jne 0x100a73cd
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 1cbh
        ; Exact mapped bytes E8 E3 66 F7 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp + esi*4 + 1d8h]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [eax + 8]
        sub eax, 6
        push eax
        push ecx
        mov ecx, dword ptr [ebp + 0a8h]
        ; Exact mapped bytes E8 E6 78 05 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0a8h]
        mov ecx, 1
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 98h]
        dec esi
        mov dword ptr [ebp + 20c0h], esi
        mov dword ptr [edx + 50h], ecx
        ; Exact mapped bytes EB 4B: jmp 0x100a7456
        __asm _emit 0xeb
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 130h
        ; Exact mapped bytes E8 8F 66 F7 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 33: jmp 0x100a7456
        __asm _emit 0xeb
        __asm _emit 0x33
        cmp eax, 203h
        ; Exact mapped bytes 75 2C: jne 0x100a7456
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [ebp + 20c0h]
        cmp eax, -1
        ; Exact mapped bytes 74 21: je 0x100a7456
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp + eax*4 + 1dch]
        ; Exact mapped bytes E8 55 00 00 00: call 0x100a74a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100a7456
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, ebp
        ; Exact mapped bytes E8 9A 00 00 00: call 0x100a74f0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 3ch]
        pop edi
        test eax, eax
        pop ebx
        ; Exact mapped bytes 74 27: je 0x100a7486
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [eax + 34h]
        mov esi, dword ptr [esp + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x100a747c
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push esi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0C: je 0x100a7486
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes EB EA: jmp 0x100a7466
        __asm _emit 0xeb
        __asm _emit 0xea
        pop esi
        xor eax, eax
        pop ebp
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 34h]
        pop esi
        pop ebp
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
