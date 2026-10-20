// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585521D0 .. +0x13DE bytes.
extern "C" __declspec(naked) void FUN_585521d0_585521D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588831efh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 310h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 19ch], ecx
        mov eax, dword ptr [ebp - 19ch]
        mov byte ptr [eax + 93h], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes 66 89 4A 04: mov word ptr [edx + 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 19ch]
        mov dword ptr [eax + 8ch], 0
        mov dword ptr [ebp - 1a8h], 10h
        mov ecx, 1
        ; Exact mapped bytes 66 89 8D 4C FD FF FF: mov word ptr [ebp - 0x2b4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 47 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x47
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 21 13 00 00: je 0x58553576
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 198h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58552270
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 198h]
        add edx, 1
        mov dword ptr [ebp - 198h], edx
        cmp dword ptr [ebp - 198h], 20h
        ; Exact mapped bytes 7D 16: jge 0x5855228f
        __asm _emit 0x7d
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov dword ptr [ecx + eax*4 + 8], 0
        ; Exact mapped bytes EB D2: jmp 0x58552261
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov dword ptr [ebp - 198h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585522aa
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 198h]
        add edx, 1
        mov dword ptr [ebp - 198h], edx
        cmp dword ptr [ebp - 198h], 2
        ; Exact mapped bytes 7D 38: jge 0x585522eb
        __asm _emit 0x7d
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 198h]
        lea ecx, [ebp + eax*4 - 18h]
        mov edx, 2
        imul eax, edx, 0
        mov edx, 384h
        ; Exact mapped bytes 66 89 14 01: mov word ptr [ecx + eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 198h]
        lea ecx, [ebp + eax*4 - 18h]
        mov edx, 2
        shl edx, 0
        mov eax, 384h
        ; Exact mapped bytes 66 89 04 11: mov word ptr [ecx + edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x11
        ; Exact mapped bytes EB B0: jmp 0x5855229b
        __asm _emit 0xeb
        __asm _emit 0xb0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 46 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x46
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 43 A1 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa1
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EC 34 F4 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x34
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 9eh]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x5855231b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 1bch], 1
        ; Exact mapped bytes EB 0A: jmp 0x58552325
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bch], 0
        mov edx, dword ptr [ebp - 1bch]
        mov dword ptr [ebp - 254h], edx
        mov dword ptr [ebp - 198h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5855234c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 198h]
        add eax, 1
        mov dword ptr [ebp - 198h], eax
        cmp dword ptr [ebp - 198h], 20h
        ; Exact mapped bytes 0F 8D 6E 0C 00 00: jge 0x58552fc7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 46 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x46
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D5 A0 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xa0
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 310h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 46 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x46
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        movzx esi, byte ptr [eax + ecx + 1fch]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 46 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x46
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 198h]
        movzx eax, byte ptr [eax + edx + 21ch]
        lea ecx, [eax + esi*2 + 1]
        mov dword ptr [ebp - 30ch], ecx
        mov edx, dword ptr [ebp - 30ch]
        push edx
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 D1 FE F6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, 8
        mov esi, eax
        lea edi, [ebp - 38h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 45 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x45
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 63 A0 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xa0
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 314h], eax
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 6B AC F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xac
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 0F 85 D9 06 00 00: jne 0x58552ada
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 45 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2D A0 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xa0
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 1cch], eax
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 15 AC F3 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, 2dh
        mov esi, eax
        lea edi, [ebp - 0ech]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 45 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x45
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F4 9F F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x9f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9D 33 F4 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x33
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, word ptr [eax + 98h]
        ; Exact mapped bytes 0F BF 4D C0: movsx ecx, word ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xc0
        add eax, ecx
        mov dword ptr [ebp - 1ach], eax
        imul edx, dword ptr [ebp - 1ach], 64h
        mov dword ptr [ebp - 1d0h], edx
        mov eax, 2
        imul ecx, eax, 3
        movzx edx, word ptr [ebp + ecx - 30h]
        imul edx, dword ptr [ebp - 1ach]
        mov dword ptr [ebp - 1d4h], edx
        mov eax, dword ptr [ebp - 1d0h]
        add eax, dword ptr [ebp - 1d4h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 4C F8 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x4c
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        cmp edx, 0dh
        ; Exact mapped bytes 74 17: je 0x585524d5
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 4C F8 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x4c
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 10h
        ; Exact mapped bytes 75 33: jne 0x58552508
        __asm _emit 0x75
        __asm _emit 0x33
        movzx ecx, word ptr [ebp - 4eh]
        mov edx, 2
        shl edx, 2
        movzx esi, word ptr [ebp + edx - 30h]
        add esi, 64h
        mov eax, 2710h
        cdq
        idiv esi
        imul eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        add eax, 1
        ; Exact mapped bytes 66 89 45 B2: mov word ptr [ebp - 0x4e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb2
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x585525a1
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 4eh]
        imul eax, edx, 5
        cdq
        mov ecx, 0ah
        idiv ecx
        ; Exact mapped bytes 66 89 85 60 FE FF FF: mov word ptr [ebp - 0x1a0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [ebp - 1fh]
        and edx, 1
        ; Exact mapped bytes 74 1F: je 0x58552546
        __asm _emit 0x74
        __asm _emit 0x1f
        movzx ecx, word ptr [ebp - 1a0h]
        movzx edx, word ptr [ebp - 4eh]
        imul eax, edx, 5
        cdq
        mov esi, 64h
        idiv esi
        sub ecx, eax
        ; Exact mapped bytes 66 89 8D 60 FE FF FF: mov word ptr [ebp - 0x1a0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 4eh]
        mov edx, 2
        shl edx, 2
        movzx esi, word ptr [ebp + edx - 30h]
        add esi, 64h
        mov eax, 2710h
        cdq
        idiv esi
        imul eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        add eax, 1
        ; Exact mapped bytes 66 89 45 B2: mov word ptr [ebp - 0x4e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb2
        movzx edx, word ptr [ebp - 4eh]
        imul eax, edx, 0dh
        cdq
        mov ecx, 0ah
        idiv ecx
        ; Exact mapped bytes 66 89 45 B2: mov word ptr [ebp - 0x4e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb2
        movzx edx, word ptr [ebp - 1a0h]
        movzx eax, word ptr [ebp - 4eh]
        cmp edx, eax
        ; Exact mapped bytes 7E 0B: jle 0x585525a1
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 8D 60 FE FF FF: mov cx, word ptr [ebp - 0x1a0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 4D B2: mov word ptr [ebp - 0x4e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb2
        ; Exact mapped bytes 66 8B 55 B0: mov dx, word ptr [ebp - 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xb0
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        cmp dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes 7E 11: jle 0x585525c5
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 66 8B 4D B0: mov cx, word ptr [ebp - 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx edx, cx
        mov dword ptr [ebp - 1a8h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 43 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x43
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [eax + ecx + 1fch]
        lea eax, [ebp + edx*4 - 18h]
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 43 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x43
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [eax + ecx + 21ch]
        shl edx, 1
        mov dword ptr [ebp - 1dch], edx
        mov eax, dword ptr [ebp - 1d8h]
        add eax, dword ptr [ebp - 1dch]
        movzx ecx, word ptr [eax]
        ; Exact mapped bytes 66 8B 55 AE: mov dx, word ptr [ebp - 0x52]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xae
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        cmp ecx, eax
        ; Exact mapped bytes 7E 5F: jle 0x5855268a
        __asm _emit 0x7e
        __asm _emit 0x5f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 43 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x43
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [eax + ecx + 1fch]
        lea eax, [ebp + edx*4 - 18h]
        mov dword ptr [ebp - 1e0h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 43 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x43
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [eax + ecx + 21ch]
        shl edx, 1
        mov dword ptr [ebp - 1e4h], edx
        ; Exact mapped bytes 66 8B 45 AE: mov ax, word ptr [ebp - 0x52]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xae
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 1e0h]
        add ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 43 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x43
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 F3 A9 F3 FF: call 0x5848d0a0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xa9
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x585526e8
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 43 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 CC A9 F3 FF: call 0x5848d0a0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xa9
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        push 0
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 F9 37 F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x37
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        push 24508h
        ; Exact mapped bytes E8 12 E9 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c0h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1c0h], 0
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x585527df
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 42 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x42
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF B0 08 41 00 00: movsx esi, word ptr [eax + 0x4108]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xb0
        __asm _emit 0x08
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 42 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x42
        __asm _emit 0xf3
        __asm _emit 0xff
        add eax, 34ch
        mov ecx, eax
        ; Exact mapped bytes E8 D8 54 F3 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x54
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes 0F BF 94 48 8E 00 00 00: movsx edx, word ptr [eax + ecx*2 + 0x8e]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x48
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, edx
        ; Exact mapped bytes 66 89 B5 52 FE FF FF: mov word ptr [ebp - 0x1ae], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 42 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x42
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebp - 1f4h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 42 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x42
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1f8h], ecx
        movzx edx, word ptr [ebp - 0e8h]
        push edx
        ; Exact mapped bytes 8B 0D 70 75 94 58: mov ecx, dword ptr [0x58947570]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 23 F3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x23
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 42 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x42
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 200h], eax
        movzx eax, word ptr [ebp - 1aeh]
        push eax
        mov ecx, dword ptr [ebp - 1f4h]
        push ecx
        mov edx, dword ptr [ebp - 1f8h]
        push edx
        mov eax, dword ptr [ebp - 1fch]
        push eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov edx, dword ptr [ebp - 200h]
        push edx
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 39 4E 01 00: call 0x58567610
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585527e9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c4h], 0
        mov eax, dword ptr [ebp - 1c4h]
        mov dword ptr [ebp - 204h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [ebp - 204h]
        mov dword ptr [edx + ecx*4 + 8], eax
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 8]
        mov dword ptr [ebp - 20ch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 41 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 208h], eax
        mov ecx, dword ptr [ebp - 208h]
        push ecx
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 45 1C 01 00: call 0x58564490
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 8]
        mov dword ptr [ebp - 210h], ecx
        ; Exact mapped bytes 8B 15 70 75 94 58: mov edx, dword ptr [0x58947570]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 CD 1D 01 00: call 0x58564640
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 218h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 41 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x41
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [eax + ecx*4 + 1af8h]
        mov dword ptr [ebp - 214h], edx
        mov eax, dword ptr [ebp - 214h]
        push eax
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 47 F6 FF FF: call 0x58551f00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 8]
        mov dword ptr [ebp - 22ch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 40 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x40
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5F 9B F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x9b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        push 1
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 15 D4 F5 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 40 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x40
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2D 9B F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x9b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        push 0
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 E3 D3 F5 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xd3
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 228h], eax
        mov eax, dword ptr [ebp - 224h]
        push eax
        mov ecx, dword ptr [ebp - 228h]
        push ecx
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 E4 47 01 00: call 0x58567130
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 8]
        mov dword ptr [ebp - 240h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 40 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x40
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CC 9A F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x9a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        push 1
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 82 A6 F3 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xa6
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        mov dword ptr [ebp - 238h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 40 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x40
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 94 9A F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x9a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        push 0
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 4A A6 F3 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa6
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        mov dword ptr [ebp - 23ch], edx
        mov eax, dword ptr [ebp - 238h]
        push eax
        mov ecx, dword ptr [ebp - 23ch]
        push ecx
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 A5 44 01 00: call 0x58566e90
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 8]
        mov dword ptr [ebp - 244h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 3F F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x3f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2D 9A F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x9a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E6 94 F3 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x94
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 95 50 FE FF FF: mov word ptr [ebp - 0x1b0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 1b0h]
        push eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        lea edx, [ebp - 0ech]
        push edx
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 2B 3A 01 00: call 0x58566470
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 248h], edx
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 24ch], ecx
        mov edx, dword ptr [ebp - 1ach]
        push edx
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes FF 95 B4 FD FF FF: call dword ptr [ebp - 0x24c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 250h], edx
        push 0
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 04 45 01 00: call 0x58566fb0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 254h], 0
        ; Exact mapped bytes 74 1F: je 0x58552ad5
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 83 3D F0 35 90 58 01: cmp dword ptr [0x589035f0], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 75 16: jne 0x58552ad5
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 FC F4 FF FF: call 0x58551fd0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E8 04 00 00: jmp 0x58552fc2
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 3E F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x3e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 54 99 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x99
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 258h], eax
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 5C A5 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa5
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 0F 85 B2 04 00 00: jne 0x58552fc2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 3E F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x3e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1E 99 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x99
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 25ch], eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 06 A5 F3 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa5
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, 2ah
        mov esi, eax
        lea edi, [ebp - 194h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 46 F8 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x46
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        cmp edx, 0dh
        ; Exact mapped bytes 74 17: je 0x58552b77
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 46 F8 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x46
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 10h
        ; Exact mapped bytes 75 49: jne 0x58552bc0
        __asm _emit 0x75
        __asm _emit 0x49
        movzx ecx, word ptr [ebp - 0f4h]
        imul eax, ecx, 96h
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov edx, 2
        imul eax, edx, 5
        movzx esi, word ptr [ebp + eax - 30h]
        add esi, 64h
        mov eax, 2710h
        cdq
        idiv esi
        imul eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        add eax, 1
        ; Exact mapped bytes 66 89 85 0C FF FF FF: mov word ptr [ebp - 0xf4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x58552c81
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 0f4h]
        imul eax, edx, 5
        cdq
        mov ecx, 0ah
        idiv ecx
        ; Exact mapped bytes 66 89 85 5C FE FF FF: mov word ptr [ebp - 0x1a4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [ebp - 1fh]
        and edx, 1
        ; Exact mapped bytes 74 22: je 0x58552c04
        __asm _emit 0x74
        __asm _emit 0x22
        movzx ecx, word ptr [ebp - 1a4h]
        movzx edx, word ptr [ebp - 0f4h]
        imul eax, edx, 5
        cdq
        mov esi, 64h
        idiv esi
        sub ecx, eax
        ; Exact mapped bytes 66 89 8D 5C FE FF FF: mov word ptr [ebp - 0x1a4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 0f4h]
        imul eax, eax, 96h
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov edx, 2
        imul eax, edx, 5
        movzx esi, word ptr [ebp + eax - 30h]
        add esi, 64h
        mov eax, 2710h
        cdq
        idiv esi
        imul eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        add eax, 1
        ; Exact mapped bytes 66 89 85 0C FF FF FF: mov word ptr [ebp - 0xf4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 0f4h]
        imul eax, edx, 0dh
        cdq
        mov ecx, 0ah
        idiv ecx
        ; Exact mapped bytes 66 89 85 0C FF FF FF: mov word ptr [ebp - 0xf4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 1a4h]
        movzx eax, word ptr [ebp - 0f4h]
        cmp edx, eax
        ; Exact mapped bytes 7E 0E: jle 0x58552c81
        __asm _emit 0x7e
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 8D 5C FE FF FF: mov cx, word ptr [ebp - 0x1a4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 8D 0C FF FF FF: mov word ptr [ebp - 0xf4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 95 04 FF FF FF: mov dx, word ptr [ebp - 0xfc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        cmp dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes 7E 18: jle 0x58552cb3
        __asm _emit 0x7e
        __asm _emit 0x18
        ; Exact mapped bytes 66 8B 8D 04 FF FF FF: mov cx, word ptr [ebp - 0xfc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx edx, cx
        mov dword ptr [ebp - 1a8h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 3D F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x3d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 EA A3 F3 FF: call 0x5848d0c0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xa3
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x58552d11
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 3C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x3c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 264h], eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 C3 A3 F3 FF: call 0x5848d0c0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xa3
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        push 0
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 D0 31 F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x31
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        push 3a5ch
        ; Exact mapped bytes E8 E9 E2 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c8h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1c8h], 0
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x58552e04
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D 3C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x3c
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF B0 08 41 00 00: movsx esi, word ptr [eax + 0x4108]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xb0
        __asm _emit 0x08
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 3C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x3c
        __asm _emit 0xf3
        __asm _emit 0xff
        add eax, 34ch
        mov ecx, eax
        ; Exact mapped bytes E8 AF 4E F3 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x4e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 198h]
        ; Exact mapped bytes 0F BF 84 50 8E 00 00 00: movsx eax, word ptr [eax + edx*2 + 0x8e]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, eax
        ; Exact mapped bytes 66 89 B5 4E FE FF FF: mov word ptr [ebp - 0x1b2], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D 3C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 26ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 3C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x3c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 270h], edx
        movzx eax, word ptr [ebp - 190h]
        add eax, 2
        push eax
        ; Exact mapped bytes 8B 0D 34 07 96 58: mov ecx, dword ptr [0x58960734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 1D F3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x1d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 3B F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x3b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        movzx ecx, word ptr [ebp - 1b2h]
        push ecx
        mov edx, dword ptr [ebp - 26ch]
        push edx
        mov eax, dword ptr [ebp - 270h]
        push eax
        mov ecx, dword ptr [ebp - 274h]
        push ecx
        mov edx, dword ptr [ebp - 278h]
        push edx
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 14 7F 01 00: call 0x5856ad10
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58552e0e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b8h], 0
        mov eax, dword ptr [ebp - 1b8h]
        mov dword ptr [ebp - 27ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [ebp - 27ch]
        mov dword ptr [edx + ecx*4 + 8], eax
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 8]
        mov dword ptr [ebp - 284h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 3B F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x3b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 280h], eax
        mov ecx, dword ptr [ebp - 280h]
        push ecx
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 20 16 01 00: call 0x58564490
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 8]
        mov dword ptr [ebp - 28ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 3B F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x3b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [eax + edx*4 + 1af8h]
        mov dword ptr [ebp - 288h], eax
        mov ecx, dword ptr [ebp - 288h]
        push ecx
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 6A F0 FF FF: call 0x58551f20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 8]
        mov dword ptr [ebp - 2a4h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 3A F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 62 95 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x95
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1B 90 F3 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 95 4C FE FF FF: mov word ptr [ebp - 0x1b4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 3A F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x3a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3F 95 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x95
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        push 0
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 F5 A0 F3 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa0
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov dword ptr [ebp - 298h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 3A F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x3a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 07 95 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x95
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], eax
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 EF A0 F3 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xa0
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 3A F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x3a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D7 94 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x94
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 70 1A F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x1a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        movzx eax, word ptr [ebp - 1b4h]
        push eax
        mov ecx, dword ptr [ebp - 298h]
        push ecx
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov eax, dword ptr [ebp - 29ch]
        push eax
        lea ecx, [ebp - 194h]
        push ecx
        mov edx, dword ptr [ebp - 2a0h]
        push edx
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 14 78 01 00: call 0x5856a7c0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 6F 7F 01 00: call 0x5856af30
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 76 F3 FF FF: jmp 0x5855233d
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58552fe2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 198h]
        add edx, 1
        mov dword ptr [ebp - 198h], edx
        cmp dword ptr [ebp - 198h], 20h
        ; Exact mapped bytes 0F 8D 87 05 00 00: jge 0x58553576
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        cmp dword ptr [ecx + eax*4 + 8], 0
        ; Exact mapped bytes 0F 84 6B 05 00 00: je 0x58553571
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 8]
        mov dword ptr [ebp - 2a8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 37 DF FF FF: call 0x58550f60
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 8]
        mov dword ptr [ebp - 2b0h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 39 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 198h]
        movzx eax, byte ptr [eax + edx + 1fch]
        mov dword ptr [ebp - 2ach], eax
        mov ecx, dword ptr [ebp - 2ach]
        push ecx
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 A0 D1 F4 FF: call 0x584a0210
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd1
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 8]
        mov dword ptr [ebp - 2e8h], ecx
        mov edx, dword ptr [ebp - 1a8h]
        push edx
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 98 D1 F4 FF: call 0x584a0230
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xd1
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 2c0h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 39 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 80 93 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x93
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 19 19 F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x19
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        lea edx, [eax + ecx*4 + 168h]
        mov eax, 2
        shl eax, 0
        ; Exact mapped bytes 0F BF 0C 02: movsx ecx, word ptr [edx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x02
        mov dword ptr [ebp - 2b8h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF 38 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x38
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 48 93 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E1 18 F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x18
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 198h]
        lea eax, [eax + edx*4 + 168h]
        mov ecx, 2
        imul edx, ecx, 0
        ; Exact mapped bytes 0F BF 04 10: movsx eax, word ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x10
        mov dword ptr [ebp - 2bch], eax
        mov ecx, dword ptr [ebp - 2b8h]
        push ecx
        mov edx, dword ptr [ebp - 2bch]
        push edx
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 A9 11 01 00: call 0x585642e0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 2d0h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 38 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E1 92 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x92
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7A 18 F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x18
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes 0F BF 94 48 28 01 00 00: movsx edx, word ptr [eax + ecx*2 + 0x128]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x48
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2c4h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 38 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x38
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B4 92 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x92
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4D 18 F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x18
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        lea edx, [eax + ecx*4 + 1e8h]
        mov eax, 2
        shl eax, 0
        ; Exact mapped bytes 0F BF 0C 02: movsx ecx, word ptr [edx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x02
        mov dword ptr [ebp - 2c8h], ecx
        mov edx, 2
        imul esi, edx, 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB 37 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x37
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 74 92 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x92
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0D 18 F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        lea edx, [eax + ecx*4 + 1e8h]
        ; Exact mapped bytes 0F BF 04 32: movsx eax, word ptr [edx + esi]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x32
        mov dword ptr [ebp - 2cch], eax
        mov ecx, dword ptr [ebp - 2c4h]
        push ecx
        mov edx, dword ptr [ebp - 2c8h]
        push edx
        mov eax, dword ptr [ebp - 2cch]
        push eax
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 F6 11 01 00: call 0x58564400
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 8]
        mov dword ptr [ebp - 2d8h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 37 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x37
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EE 8C F3 FF: call 0x5848bf20
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x8c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 2d4h], eax
        mov ecx, dword ptr [ebp - 2d4h]
        push ecx
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 B6 93 F9 FF: call 0x584ec600
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x93
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 37 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x37
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E4 91 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x91
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7D 17 F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x17
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        mov eax, dword ptr [ebp - 198h]
        cdq
        and edx, 0fh
        add eax, edx
        sar eax, 4
        mov edx, dword ptr [ebp - 198h]
        shl edx, 1
        mov esi, 1eh
        sub esi, edx
        mov eax, dword ptr [ecx + eax*4 + 274h]
        mov ecx, esi
        shr eax, cl
        and eax, 3
        mov dword ptr [ebp - 2dch], eax
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 8]
        mov dword ptr [ebp - 2e0h], eax
        mov ecx, dword ptr [ebp - 2dch]
        push ecx
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 51 BA F6 FF: call 0x584bed10
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xba
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 8]
        ; Exact mapped bytes E8 FB C9 F5 FF: call 0x584afcd0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc9
        __asm _emit 0xf5
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x58553362
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 8]
        mov dword ptr [ebp - 2f0h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 36 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x36
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [eax + ecx + 1fch]
        lea eax, [ebp + edx*4 - 18h]
        mov dword ptr [ebp - 2e4h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 36 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x36
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [eax + ecx + 21ch]
        shl edx, 1
        mov dword ptr [ebp - 318h], edx
        mov eax, dword ptr [ebp - 2e4h]
        add eax, dword ptr [ebp - 318h]
        movzx ecx, word ptr [eax]
        mov dword ptr [ebp - 2ech], ecx
        mov edx, dword ptr [ebp - 2ech]
        push edx
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 FF 12 01 00: call 0x58564660
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 31ch], 0
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 2f8h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 36 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x36
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AC 90 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 45 16 F3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x16
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes 0F BF 94 48 28 01 00 00: movsx edx, word ptr [eax + ecx*2 + 0x128]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x48
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, edx, 0ah
        mov dword ptr [ebp - 2f4h], eax
        mov ecx, dword ptr [ebp - 2f4h]
        push ecx
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 9C CE F4 FF: call 0x584a0260
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xce
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 35 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x35
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 198h]
        movzx eax, byte ptr [eax + edx + 21ch]
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x58553400
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 19ch]
        movzx edx, byte ptr [ecx + 93h]
        or edx, 20h
        mov eax, dword ptr [ebp - 19ch]
        mov byte ptr [eax + 93h], dl
        ; Exact mapped bytes EB 1C: jmp 0x5855341c
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 19ch]
        movzx edx, byte ptr [ecx + 93h]
        or edx, 10h
        mov eax, dword ptr [ebp - 19ch]
        mov byte ptr [eax + 93h], dl
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 35 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x35
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        movzx esi, byte ptr [eax + ecx + 1fch]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 35 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x35
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp esi, dword ptr [eax + 340h]
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x585534e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 35 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x35
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E2 8F F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x8f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 2fch], eax
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 EA 9B F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x9b
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 5
        ; Exact mapped bytes 75 16: jne 0x58553494
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [edx + ecx*4 + 8]
        ; Exact mapped bytes E8 1D EC FF FF: call 0x585520b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 35 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x35
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9A 8F F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x8f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 300h], eax
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 A2 9B F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x9b
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 75 16: jne 0x585534dc
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 8]
        ; Exact mapped bytes E8 25 EC FF FF: call 0x58552100
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x58553571
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 34 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x34
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4D 8F F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x8f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 304h], eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 55 9B F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x9b
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 5
        ; Exact mapped bytes 75 16: jne 0x58553529
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 C8 EA FF FF: call 0x58551ff0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 34 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x34
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 05 8F F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x8f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 308h], eax
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 0D 9B F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x9b
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 75 16: jne 0x58553571
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [edx + ecx*4 + 8]
        ; Exact mapped bytes E8 F0 EA FF FF: call 0x58552060
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5D FA FF FF: jmp 0x58552fd3
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 19ch]
        ; Exact mapped bytes 66 0F B6 88 93 00 00 00: movzx cx, byte ptr [eax + 0x93]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x88
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes 66 89 8A 90 00 00 00: mov word ptr [edx + 0x90], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 A8 DA 2D 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xda
        __asm _emit 0x2d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
