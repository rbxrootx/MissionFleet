// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002D050 .. +0x38E bytes.
extern "C" __declspec(naked) void FUN_1002d050_1002D050() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, 2
        push edi
        test byte ptr [esi + 24h], bl
        ; Exact mapped bytes 0F 84 70 03 00 00: je 0x1002d3d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 14h]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 1B: je 0x1002d08c
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [eax + 34h]
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 36 01 00 00: je 0x1002d1b2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 75 E8: jne 0x1002d074
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [edi + 4]
        sub eax, 100h
        ; Exact mapped bytes 0F 84 21 01 00 00: je 0x1002d1bb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 102h
        ; Exact mapped bytes 74 09: je 0x1002d0aa
        __asm _emit 0x74
        __asm _emit 0x09
        sub eax, 3
        ; Exact mapped bytes 0F 85 2A 03 00 00: jne 0x1002d3d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a00ch]
        cmp eax, 8
        ; Exact mapped bytes 73 10: jae 0x1002d0c5
        __asm _emit 0x73
        __asm _emit 0x10
        mov eax, dword ptr [esi + 34h]
        mov dword ptr [esi + 0a028h], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 11h
        ; Exact mapped bytes 76 1D: jbe 0x1002d0e7
        __asm _emit 0x76
        __asm _emit 0x1d
        ; Exact mapped bytes 39 2D 98 7C 1A 10: cmp dword ptr [0x101a7c98], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x98
        __asm _emit 0x7c
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 0F 85 FE 02 00 00: jne 0x1002d3d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 E7 02 00 00: jne 0x1002d3d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ffch]
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 4]
        mov ebp, dword ptr [ecx + 14h]
        mov edi, dword ptr [edx + 4]
        add ebp, eax
        cmp edi, ebp
        ; Exact mapped bytes 7C 4A: jl 0x1002d152
        __asm _emit 0x7c
        __asm _emit 0x4a
        mov ebp, dword ptr [ecx + 1ch]
        add ebp, eax
        cmp edi, ebp
        ; Exact mapped bytes 7D 41: jge 0x1002d152
        __asm _emit 0x7d
        __asm _emit 0x41
        mov eax, dword ptr [ecx + 8]
        mov ebp, dword ptr [ecx + 18h]
        mov edi, dword ptr [edx + 8]
        add ebp, eax
        cmp edi, ebp
        ; Exact mapped bytes 7C 32: jl 0x1002d152
        __asm _emit 0x7c
        __asm _emit 0x32
        mov ebp, dword ptr [ecx + 20h]
        add ebp, eax
        cmp edi, ebp
        ; Exact mapped bytes 7D 29: jge 0x1002d152
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [esi + 0a000h]
        mov dl, byte ptr [eax + 24h]
        shr dl, 1
        test dl, 1
        ; Exact mapped bytes 74 10: je 0x1002d149
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 09 59 24: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        mov esi, dword ptr [esi + 0a000h]
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a000h]
        mov ebx, dword ptr [edx + 4]
        mov edi, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 14h]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 0F 8C 69 02 00 00: jl 0x1002d3d4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [eax + 1ch]
        add ebp, edi
        cmp ebx, ebp
        ; Exact mapped bytes 0F 8D 5C 02 00 00: jge 0x1002d3d4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [eax + 8]
        mov ebx, dword ptr [eax + 18h]
        mov edx, dword ptr [edx + 8]
        add ebx, edi
        cmp edx, ebx
        ; Exact mapped bytes 0F 8C 49 02 00 00: jl 0x1002d3d4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [eax + 20h]
        add ebx, edi
        cmp edx, ebx
        ; Exact mapped bytes 0F 8D 3C 02 00 00: jge 0x1002d3d4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [ecx + 24h]
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 74 10: je 0x1002d1b2
        __asm _emit 0x74
        __asm _emit 0x10
        or byte ptr [eax + 24h], 2
        mov esi, dword ptr [esi + 9ffch]
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a00ch]
        cmp eax, 11h
        ; Exact mapped bytes 0F 82 0A 02 00 00: jb 0x1002d3d4
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 8]
        add ecx, -9
        cmp ecx, 1fh
        ; Exact mapped bytes 0F 87 EF 01 00 00: ja 0x1002d3c8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [ecx + 1002d3f4h]
        ; Exact mapped bytes FF 24 95 E0 D3 02 10: jmp dword ptr [edx*4 + 0x1002d3e0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x10
        cmp eax, 11h
        ; Exact mapped bytes 0F 85 E3 01 00 00: jne 0x1002d3d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ffch]
        mov cl, byte ptr [eax + 24h]
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 74 20: je 0x1002d221
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [esi + 0a000h]
        pop edi
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 9ffch]
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0a000h]
        mov cl, byte ptr [edx + 24h]
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 0F 84 9F 01 00 00: je 0x1002d3d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a000h]
        pop edi
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 11h
        ; Exact mapped bytes 0F 85 7C 01 00 00: jne 0x1002d3d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0a010h], 13h
        ; Exact mapped bytes 0F 85 6F 01 00 00: jne 0x1002d3d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 54 58 1C 10: mov ecx, dword ptr [0x101c5854]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, esi
        ; Exact mapped bytes E8 08 44 00 00: call 0x10031680
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a024h]
        push ebp
        push 7
        mov ecx, esi
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0eefdh
        mov dword ptr [esi + 58h], ebp
        or eax, 0e05h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E8 23 40 00 00: call 0x100312d0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 B8 EE 13 00: call 0x1016c170
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xee
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9fech]
        cmp ecx, ebp
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x1002d37c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 35h
        ; Exact mapped bytes 7E 11: jle 0x1002d2e5
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 07: je 0x1002d2e5
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0d40h
        ; Exact mapped bytes EB 02: jmp 0x1002d2e7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1002d316
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
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1cah
        ; Exact mapped bytes 7E 12: jle 0x1002d339
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x1002d339
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 728h]
        ; Exact mapped bytes EB 02: jmp 0x1002d33b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 9ff0h]
        push eax
        ; Exact mapped bytes E8 B9 87 FE FF: call 0x10015b00
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 9ff4h]
        mov dword ptr [eax + 28h], 100h
        mov dword ptr [eax + 84h], ebp
        mov dword ptr [eax + 8ch], 40000000h
        mov ecx, dword ptr [esi + 9ff4h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push ebp
        ; Exact mapped bytes E8 F4 F4 01 00: call 0x1004c870
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ff4h]
        cmp eax, ebp
        ; Exact mapped bytes 74 1F: je 0x1002d3a5
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [eax + 28h]
        mov dword ptr [eax + 84h], ecx
        mov ecx, dword ptr [esi + 9ff4h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [esi + 34h]
        mov dword ptr [esi + 58h], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a024h]
        push edi
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 54 58 1C 10: mov ecx, dword ptr [0x101c5854]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
