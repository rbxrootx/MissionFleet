// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000AC60 .. +0x8CC bytes.
extern "C" __declspec(naked) void FUN_1000ac60_1000AC60() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 1016cffbh
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 24h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        push edi
        mov eax, dword ptr [esi + 4c8h]
        cmp eax, ebp
        ; Exact mapped bytes 74 0A: je 0x1000ac94
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 5ce0h]
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + 310h]
        cmp eax, ebp
        ; Exact mapped bytes 0F 85 0D 02 00 00: jne 0x1000aeaf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4c8h]
        ; Exact mapped bytes E8 23 39 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x39
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 CD 01 00 00: je 0x1000ae82
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4c8h]
        mov edx, dword ptr [esi + 4a0h]
        mov ebx, dword ptr [esi + 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esp + 1ch], ecx
        sub ecx, ebx
        mov edi, dword ptr [eax + 8]
        mov eax, 57619f1h
        imul edx
        sar edx, 6
        mov eax, edx
        mov dword ptr [esp + 20h], edi
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        mov ebp, edx
        sub edi, ebp
        lea edx, [edi + edi*4]
        lea edx, [edx + edx*4]
        shl edx, 3
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, edx
        imul eax, edx
        mov edx, ecx
        imul edx, ecx
        add eax, edx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DD 5C 24 14: fstp qword ptr [esp + 0x14]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 14h]
        push eax
        push ecx
        ; Exact mapped bytes E8 82 1A 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x1a
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 74 1A 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x1a
        __asm _emit 0x16
        __asm _emit 0x00
        mov cl, byte ptr [esi + 1fch]
        lea eax, [eax + eax*4]
        and ecx, 3fh
        lea edx, [esp + 1ch]
        lea eax, [eax + eax*4]
        push edx
        shl eax, 3
        lea ecx, [ecx + ecx*4]
        cdq
        shl ecx, 1
        idiv ecx
        mov edx, dword ptr [esi + 4d0h]
        mov ecx, dword ptr [esi + 4c8h]
        add eax, edx
        push eax
        ; Exact mapped bytes E8 2B 5B 0E 00: call 0x100f0890
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x5b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [esp + 20h]
        mov eax, dword ptr [esp + 1ch]
        push edx
        push eax
        push ebp
        push ebx
        ; Exact mapped bytes E8 CA 71 01 00: call 0x10021f40
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi + 78h]
        lea ecx, [eax + eax*4]
        mov eax, dword ptr [esp + 30h]
        add esp, 10h
        shl ecx, 1
        push ecx
        mov ecx, dword ptr [esp + 20h]
        push edx
        push eax
        push ecx
        lea edx, [esp + 34h]
        push 1
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 25 11 00 00: call 0x1000bec0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 490h], ecx
        mov edx, dword ptr [eax + 4]
        mov ecx, dword ptr [esi + 334h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 D2 02 00 00: mov ax, word ptr [esi + 0x2d2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 494h], edx
        mov dword ptr [esi + 224h], eax
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        cmp edx, 32h
        ; Exact mapped bytes 7D 2F: jge 0x1000ae06
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov eax, dword ptr [esi + 33ch]
        xor ecx, ecx
        cmp eax, ecx
        ; Exact mapped bytes 75 25: jne 0x1000ae08
        __asm _emit 0x75
        __asm _emit 0x25
        mov dword ptr [esi + 310h], 1
        mov dword ptr [esi + 4d4h], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 24h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        ret
        xor ecx, ecx
        mov eax, dword ptr [esi + 33ch]
        cmp edx, 32h
        ; Exact mapped bytes 7E 40: jle 0x1000ae53
        __asm _emit 0x7e
        __asm _emit 0x40
        cmp eax, 0fffffed4h
        ; Exact mapped bytes 7E 1C: jle 0x1000ae36
        __asm _emit 0x7e
        __asm _emit 0x1c
        add eax, -0fh
        pop edi
        mov dword ptr [esi + 33ch], eax
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 24h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        ret
        mov dword ptr [esi + 33ch], 0fffffed4h
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 24h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        ret
        cmp eax, ecx
        ; Exact mapped bytes 7D 12: jge 0x1000ae69
        __asm _emit 0x7d
        __asm _emit 0x12
        add eax, 0fh
        cmp edx, 0fh
        mov dword ptr [esi + 33ch], eax
        ; Exact mapped bytes 0F 8F B0 06 00 00: jg 0x1000b519
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 33ch], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 24h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        ret
        mov dword ptr [esi + 310h], 2
        mov dword ptr [esi + 4c8h], ebp
        mov dword ptr [esi + 4cch], 0ffffffffh
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 24h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        ret
        cmp eax, 1
        ; Exact mapped bytes 0F 85 9B 05 00 00: jne 0x1000b453
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 474h], ebp
        ; Exact mapped bytes 0F 85 1E 01 00 00: jne 0x1000afe2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4c8h]
        mov eax, 57619f1h
        mov ebx, dword ptr [esi + 4]
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [esp + 1ch], ecx
        sub ecx, ebx
        mov edi, dword ptr [edx + 8]
        mov edx, dword ptr [esi + 4a0h]
        imul edx
        sar edx, 6
        mov eax, edx
        mov dword ptr [esp + 20h], edi
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        mov ebp, edx
        sub edi, ebp
        lea edx, [edi + edi*4]
        lea edx, [edx + edx*4]
        shl edx, 3
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, edx
        imul eax, edx
        mov edx, ecx
        imul edx, ecx
        add eax, edx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DD 5C 24 14: fstp qword ptr [esp + 0x14]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 14h]
        push eax
        push ecx
        ; Exact mapped bytes E8 73 18 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 65 18 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        mov al, byte ptr [esi + 1fch]
        and eax, 3fh
        lea edx, [esp + 1ch]
        push edx
        lea ecx, [eax + eax*4]
        lea eax, [edi + edi*4]
        shl ecx, 1
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ecx
        mov edx, dword ptr [esi + 4d0h]
        mov ecx, dword ptr [esi + 4c8h]
        add eax, edx
        push eax
        ; Exact mapped bytes E8 1A 59 0E 00: call 0x100f0890
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x59
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [esp + 20h]
        mov eax, dword ptr [esp + 1ch]
        push edx
        push eax
        push ebp
        push ebx
        ; Exact mapped bytes E8 B9 6F 01 00: call 0x10021f40
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi + 78h]
        lea ecx, [eax + eax*4]
        mov eax, dword ptr [esp + 30h]
        add esp, 10h
        shl ecx, 1
        push ecx
        mov ecx, dword ptr [esp + 20h]
        push edx
        push eax
        push ecx
        lea edx, [esp + 34h]
        push 1
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 14 0F 00 00: call 0x1000bec0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 490h], ecx
        mov edx, dword ptr [eax + 4]
        cmp edi, 0c8h
        mov dword ptr [esi + 494h], edx
        ; Exact mapped bytes 7D 24: jge 0x1000afe9
        __asm _emit 0x7d
        __asm _emit 0x24
        mov eax, dword ptr [esi + 330h]
        mov dword ptr [esi + 310h], 2
        mov dword ptr [esi + 318h], eax
        xor ebp, ebp
        ; Exact mapped bytes E9 FF 03 00 00: jmp 0x1000b3e1
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 1f4h
        ; Exact mapped bytes EB 02: jmp 0x1000afeb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        cmp dword ptr [esi + 460h], ebp
        ; Exact mapped bytes 0F 84 EA 03 00 00: je 0x1000b3e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 4d4h], ebp
        ; Exact mapped bytes 75 47: jne 0x1000b046
        __asm _emit 0x75
        __asm _emit 0x47
        mov ecx, dword ptr [esi + 7ch]
        mov eax, dword ptr [esi + 74h]
        shl ecx, 4
        mov edx, 5f5e100h
        mov eax, dword ptr [ecx + eax + 0f7ch]
        mov ecx, eax
        cmp ecx, ebp
        ; Exact mapped bytes 74 18: je 0x1000b032
        __asm _emit 0x74
        __asm _emit 0x18
        mov ebx, dword ptr [ecx + 0ch]
        cmp edx, dword ptr [ebx + 31ch]
        ; Exact mapped bytes 7E 06: jle 0x1000b02b
        __asm _emit 0x7e
        __asm _emit 0x06
        mov edx, dword ptr [ebx + 31ch]
        mov ecx, dword ptr [ecx + 8]
        cmp ecx, ebp
        ; Exact mapped bytes 75 E8: jne 0x1000b01a
        __asm _emit 0x75
        __asm _emit 0xe8
        cmp eax, ebp
        ; Exact mapped bytes 74 10: je 0x1000b046
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 4d4h], edx
        mov eax, dword ptr [eax + 8]
        cmp eax, ebp
        ; Exact mapped bytes 75 F0: jne 0x1000b036
        __asm _emit 0x75
        __asm _emit 0xf0
        shl edi, 3
        mov eax, 66666667h
        imul edi
        mov eax, dword ptr [esi + 4d4h]
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        cmp eax, edx
        ; Exact mapped bytes 7D 0C: jge 0x1000b070
        __asm _emit 0x7d
        __asm _emit 0x0c
        cmp dword ptr [esi + 474h], ebp
        ; Exact mapped bytes 0F 84 71 03 00 00: je 0x1000b3e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 2D 9C 7D 1A 10: cmp dword ptr [0x101a7d9c], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x1000b13e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 1D DC 56 1C 10: mov ebx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 104e0h]
        mov eax, dword ptr [ebx + 1ch]
        mov edx, dword ptr [ebx + 14h]
        sub eax, edx
        mov edi, dword ptr [ecx + 110h]
        sar eax, 1
        mov ebp, dword ptr [ecx + 50h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv edi
        mov edi, dword ptr [esi + 4]
        mov edx, dword ptr [ebx + 18h]
        sub edi, eax
        mov eax, dword ptr [ebx + 20h]
        sub eax, edx
        sub edi, ebp
        sar eax, 1
        mov ebp, dword ptr [ecx + 54h]
        mov ecx, dword ptr [ecx + 110h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ecx
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 518h]
        sub eax, edx
        add eax, ebp
        push eax
        push edi
        ; Exact mapped bytes E8 A3 D8 03 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 21a34h]
        test ecx, ecx
        ; Exact mapped bytes 75 40: jne 0x1000b13c
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [esi + 468h]
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x1000b13c
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [esi + 74h]
        cmp ecx, eax
        ; Exact mapped bytes 75 26: jne 0x1000b13c
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes A1 F4 58 1C 10: mov eax, dword ptr [0x101c58f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 1fh
        ; Exact mapped bytes 7E 0F: jle 0x1000b133
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1000b133
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 7ch]
        ; Exact mapped bytes EB 02: jmp 0x1000b135
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        xor ebp, ebp
        ; Exact mapped bytes 66 FF 8E CA 02 00 00: dec word ptr [esi + 0x2ca]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x8e
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 CA 02 00 00: mov ax, word ptr [esi + 0x2ca]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4fch]
        and eax, 0ffffh
        push eax
        mov dword ptr [esi + 460h], ebp
        ; Exact mapped bytes E8 BD 45 0F 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x45
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, 0cccccccdh
        push 424h
        mul dword ptr [esi + 4c4h]
        mov ecx, edx
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ecx, 3
        mov eax, dword ptr [edx + 1047ch]
        mov ebx, dword ptr [edx + 10474h]
        add eax, ebx
        xor edx, edx
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ecx
        mov eax, dword ptr [esi + 340h]
        mov ecx, 0e10h
        mov dword ptr [esp + 30h], ebp
        add eax, edx
        cdq
        idiv ecx
        ; Exact mapped bytes 66 8B 86 FC 01 00 00: mov ax, word ptr [esi + 0x1fc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr eax, 6
        and eax, 3fh
        mov edi, edx
        mov edx, dword ptr [edi*4 + 101b09a0h]
        lea ecx, [eax + eax*4]
        shl ecx, 1
        imul edx, ecx
        mov eax, 10624dd3h
        mov dword ptr [esp + 34h], ecx
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov dword ptr [esp + 28h], edx
        mov edx, dword ptr [edi*4 + 101ad160h]
        imul edx, ecx
        imul edx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [esp + 2ch], edx
        ; Exact mapped bytes E8 91 15 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x15
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, eax
        add esp, 4
        mov dword ptr [esp + 14h], ecx
        cmp ecx, ebp
        mov dword ptr [esp + 3ch], ebp
        ; Exact mapped bytes 74 6A: je 0x1000b28a
        __asm _emit 0x74
        __asm _emit 0x6a
        mov edx, dword ptr [esi + 4a0h]
        mov eax, 57619f1h
        imul edx
        ; Exact mapped bytes 8B 1D F4 56 1C 10: mov ebx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40h
        sar edx, 6
        mov ebp, dword ptr [ebx + 104e0h]
        mov eax, edx
        shr eax, 1fh
        push 0
        push 0
        add edx, eax
        push 0
        push edx
        mov edx, dword ptr [esi + 4]
        xor eax, eax
        push edx
        ; Exact mapped bytes 66 8B 86 0C 02 00 00: mov ax, word ptr [esi + 0x20c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        push edi
        mov edi, dword ptr [ebx + 10474h]
        lea edx, [esp + 44h]
        push eax
        mov eax, dword ptr [esi + 74h]
        push edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 90 2C 03 00 00: mov dx, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 1047ch]
        push edx
        add eax, edi
        push 1
        push eax
        ; Exact mapped bytes E8 7C 02 0F 00: call 0x100fb500
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        xor ebp, ebp
        ; Exact mapped bytes EB 02: jmp 0x1000b28c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 4a0h]
        mov eax, 57619f1h
        imul ecx
        sar edx, 6
        mov ecx, edx
        or ebx, 0ffffffffh
        shr ecx, 1fh
        add edx, ecx
        mov ecx, edi
        push edx
        mov edx, dword ptr [esi + 4]
        push edx
        mov dword ptr [esp + 44h], ebx
        ; Exact mapped bytes E8 6A 14 0F 00: call 0x100fc720
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x14
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        lea ecx, [esi + 164h]
        push 64h
        push ecx
        push ebp
        mov ecx, edi
        mov dword ptr [edi + 3fch], eax
        ; Exact mapped bytes E8 70 06 0F 00: call 0x100fb940
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x0f
        __asm _emit 0x00
        xor edx, edx
        push 96h
        ; Exact mapped bytes 66 8B 96 0E 02 00 00: mov dx, word ptr [esi + 0x20e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        push 3e80h
        ; Exact mapped bytes E8 F7 6A 01 00: call 0x10021de0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        mov dword ptr [edi + 184h], eax
        imul ecx, eax
        mov dword ptr [edi + 41ch], ecx
        mov eax, dword ptr [esi + 474h]
        mov edx, dword ptr [esi + 330h]
        add esp, 0ch
        cmp eax, ebp
        mov dword ptr [esi + 310h], 2
        mov dword ptr [esi + 318h], edx
        ; Exact mapped bytes 75 20: jne 0x1000b33d
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [esi + 4c8h]
        mov eax, dword ptr [eax + 5ce0h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [esi + 4c8h], ebp
        mov dword ptr [esi + 4cch], ebx
        ; Exact mapped bytes EB 06: jmp 0x1000b343
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 474h], ebp
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, 7d000h
        cdq
        mov edi, dword ptr [ecx + 104e0h]
        mov ebx, dword ptr [edi + 110h]
        mov ecx, dword ptr [edi + 50h]
        idiv ebx
        add ecx, eax
        mov eax, dword ptr [esi + 4]
        sub ecx, eax
        mov eax, 5dc00h
        cdq
        idiv ebx
        mov edx, dword ptr [esi + 8]
        mov ebx, dword ptr [edi + 54h]
        sub eax, edx
        add eax, ebx
        mov edx, eax
        imul edx, eax
        mov eax, ecx
        imul eax, ecx
        add edx, eax
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DD 5C 24 14: fstp qword ptr [esp + 0x14]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 14h]
        push ecx
        push edx
        ; Exact mapped bytes E8 0C 14 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x14
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 FE 13 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x13
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D DC 56 1C 10: mov ecx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 1ch]
        mov ebx, dword ptr [ecx + 14h]
        sub edx, ebx
        sar edx, 1
        cmp eax, edx
        ; Exact mapped bytes 7D 25: jge 0x1000b3e1
        __asm _emit 0x7d
        __asm _emit 0x25
        ; Exact mapped bytes A1 E0 57 1C 10: mov eax, dword ptr [0x101c57e0]
        __asm _emit 0xa1
        __asm _emit 0xe0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 3
        ; Exact mapped bytes 7E 0F: jle 0x1000b3d9
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebp
        ; Exact mapped bytes 74 05: je 0x1000b3d9
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x1000b3db
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ecx]
        push ebp
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp dword ptr [esi + 310h], 2
        ; Exact mapped bytes 0F 85 2B 01 00 00: jne 0x1000b519
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 340h]
        mov dword ptr [esp + 14h], 190h
        mov dword ptr [esp + 18h], ebp
        lea ecx, [eax - 384h]
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x1000b40f
        __asm _emit 0x7d
        __asm _emit 0x05
        add eax, 0e10h
        push eax
        lea edx, [esp + 28h]
        lea eax, [esp + 18h]
        push edx
        push eax
        ; Exact mapped bytes E8 B1 6A 01 00: call 0x10021ed0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 34h]
        add ecx, edx
        mov edx, dword ptr [esi + 8]
        add esp, 0ch
        sub edx, eax
        mov dword ptr [esi + 490h], ecx
        mov dword ptr [esi + 494h], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 24h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        ret
        cmp eax, 2
        ; Exact mapped bytes 0F 85 BD 00 00 00: jne 0x1000b519
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 334h]
        mov ecx, dword ptr [esi + 318h]
        cmp eax, ecx
        mov eax, dword ptr [esi + 33ch]
        ; Exact mapped bytes 7D 40: jge 0x1000b4b2
        __asm _emit 0x7d
        __asm _emit 0x40
        cmp eax, 1c2h
        ; Exact mapped bytes 7D 1C: jge 0x1000b495
        __asm _emit 0x7d
        __asm _emit 0x1c
        add eax, 0ah
        pop edi
        mov dword ptr [esi + 33ch], eax
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 24h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        ret
        mov dword ptr [esi + 33ch], 1c2h
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 24h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        ret
        cmp eax, ebp
        ; Exact mapped bytes 7E 1C: jle 0x1000b4d2
        __asm _emit 0x7e
        __asm _emit 0x1c
        add eax, -14h
        pop edi
        mov dword ptr [esi + 33ch], eax
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 24h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        ret
        ; Exact mapped bytes 66 39 AE CA 02 00 00: cmp word ptr [esi + 0x2ca], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 33ch], ebp
        mov dword ptr [esi + 310h], ebp
        mov dword ptr [esi + 4b8h], ebp
        ; Exact mapped bytes 74 19: je 0x1000b506
        __asm _emit 0x74
        __asm _emit 0x19
        mov dword ptr [esi + 4b8h], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 24h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        ret
        lea ecx, [esp + 13h]
        mov byte ptr [esp + 13h], 61h
        push ecx
        push 5
        mov ecx, esi
        ; Exact mapped bytes E8 37 D9 FF FF: call 0x10008e50
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 34h]
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
        add esp, 30h
        ret
    }
}
