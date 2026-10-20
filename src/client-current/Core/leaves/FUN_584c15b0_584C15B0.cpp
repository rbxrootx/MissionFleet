// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C15B0 .. +0xCD4 bytes.
extern "C" __declspec(naked) void FUN_584c15b0_584C15B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887eadfh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 280h
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
        mov dword ptr [ebp - 198h], 0
        ; Exact mapped bytes EB 0F: jmp 0x584c15fe
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 198h]
        add eax, 1
        mov dword ptr [ebp - 198h], eax
        cmp dword ptr [ebp - 198h], 20h
        ; Exact mapped bytes 7D 44: jge 0x584c164b
        __asm _emit 0x7d
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov dword ptr [edx + ecx*4 + 0ch], 0
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov dword ptr [ecx + eax*4 + 8ch], 0
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov dword ptr [eax + edx*4 + 10ch], 0
        ; Exact mapped bytes EB A4: jmp 0x584c15ef
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov ecx, 10h
        ; Exact mapped bytes 66 89 8D 60 FE FF FF: mov word ptr [ebp - 0x1a0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 1
        ; Exact mapped bytes 66 89 95 B8 FD FF FF: mov word ptr [ebp - 0x248], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], 0
        ; Exact mapped bytes EB 0F: jmp 0x584c167e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 198h]
        add eax, 1
        mov dword ptr [ebp - 198h], eax
        cmp dword ptr [ebp - 198h], 2
        ; Exact mapped bytes 7D 38: jge 0x584c16bf
        __asm _emit 0x7d
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 198h]
        lea edx, [ebp + ecx*4 - 18h]
        mov eax, 2
        imul ecx, eax, 0
        mov eax, 384h
        ; Exact mapped bytes 66 89 04 0A: mov word ptr [edx + ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 198h]
        lea edx, [ebp + ecx*4 - 18h]
        mov eax, 2
        shl eax, 0
        mov ecx, 384h
        ; Exact mapped bytes 66 89 0C 02: mov word ptr [edx + eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x02
        ; Exact mapped bytes EB B0: jmp 0x584c166f
        __asm _emit 0xeb
        __asm _emit 0xb0
        push 100h
        push 0
        mov edx, dword ptr [ebp - 19ch]
        add edx, 1d4h
        push edx
        ; Exact mapped bytes E8 38 B7 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb7
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 198h], 0
        ; Exact mapped bytes EB 0F: jmp 0x584c16f6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 198h]
        add eax, 1
        mov dword ptr [ebp - 198h], eax
        cmp dword ptr [ebp - 198h], 20h
        ; Exact mapped bytes 0F 8D 63 08 00 00: jge 0x584c1f66
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 278h], edx
        mov eax, dword ptr [ebp - 19ch]
        add eax, dword ptr [ebp - 198h]
        movzx ecx, byte ptr [eax + 18ch]
        mov edx, dword ptr [ebp - 19ch]
        add edx, dword ptr [ebp - 198h]
        movzx eax, byte ptr [edx + 1ach]
        lea ecx, [eax + ecx*2 + 1]
        push ecx
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 48 0B 00 00: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        mov esi, eax
        lea edi, [ebp - 38h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 284h], eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 EB B8 FC FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 5
        ; Exact mapped bytes 0F 85 92 05 00 00: jne 0x584c1d13
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 288h], ecx
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 9E B8 FC FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 2dh
        mov esi, eax
        lea edi, [ebp - 0ech]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 31 40 FD FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 98h]
        ; Exact mapped bytes 0F BF 55 C0: movsx edx, word ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xc0
        add ecx, edx
        mov dword ptr [ebp - 1a8h], ecx
        imul eax, dword ptr [ebp - 1a8h], 64h
        mov dword ptr [ebp - 1b4h], eax
        mov ecx, 2
        imul edx, ecx, 3
        movzx eax, word ptr [ebp + edx - 30h]
        imul eax, dword ptr [ebp - 1a8h]
        mov dword ptr [ebp - 1a4h], eax
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 1cch], edx
        mov eax, dword ptr [ebp - 19ch]
        add eax, dword ptr [ebp - 198h]
        movzx ecx, byte ptr [eax + 18ch]
        mov edx, dword ptr [ebp - 19ch]
        add edx, dword ptr [ebp - 198h]
        movzx eax, byte ptr [edx + 1ach]
        lea ecx, [eax + ecx*2 + 1]
        push ecx
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 22 13 FE FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x13
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 1]
        xor edx, 55h
        and edx, 7fh
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        ; Exact mapped bytes F2 0F 59 05 A8 5A 89 58: mulsd xmm0, qword ptr [0x58895aa8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 FD 36 00: call 0x588315a0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0x36
        __asm _emit 0x00
        mov dword ptr [ebp - 1d0h], eax
        mov eax, dword ptr [ebp - 1b4h]
        imul eax, dword ptr [ebp - 1d0h]
        mov dword ptr [ebp - 1d4h], eax
        imul ecx, dword ptr [ebp - 1b4h], 3
        mov eax, dword ptr [ebp - 1d4h]
        cdq
        mov esi, 55h
        idiv esi
        add ecx, eax
        mov dword ptr [ebp - 1b0h], ecx
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        lea ecx, [eax + edx*8 + 1d4h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 1a4h]
        mov dword ptr [ecx + eax], edx
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        lea edx, [ecx + eax*8 + 1d4h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 1b0h]
        mov dword ptr [edx + eax], ecx
        mov edx, dword ptr [ebp - 1a4h]
        cmp edx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes 7E 0C: jle 0x584c18f1
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 1b0h]
        mov dword ptr [ebp - 1a4h], eax
        mov eax, dword ptr [ebp - 1b4h]
        add eax, dword ptr [ebp - 1a4h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 1a8h], eax
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
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 1d8h], eax
        push 0
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 B4 E3 FE FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, 4
        imul ecx, edx, 0
        mov dword ptr [ebp + ecx - 280h], eax
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 1dch], eax
        push 1
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 82 E3 FE FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov dword ptr [ebp + edx - 280h], eax
        movzx eax, word ptr [ebp - 1a0h]
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
        cmp eax, edx
        ; Exact mapped bytes 7E 0F: jle 0x584c19c2
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 66 8B 45 B0: mov ax, word ptr [ebp - 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        ; Exact mapped bytes 66 89 85 60 FE FF FF: mov word ptr [ebp - 0x1a0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [ecx + 18ch]
        lea eax, [ebp + edx*4 - 18h]
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [ecx + 1ach]
        movzx eax, word ptr [eax + edx*2]
        ; Exact mapped bytes 66 8B 4D AE: mov cx, word ptr [ebp - 0x52]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xae
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
        cmp eax, edx
        ; Exact mapped bytes 7E 3A: jle 0x584c1a3d
        __asm _emit 0x7e
        __asm _emit 0x3a
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
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [ecx + 18ch]
        lea ecx, [ebp + edx*4 - 18h]
        mov edx, dword ptr [ebp - 19ch]
        add edx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [edx + 1ach]
        ; Exact mapped bytes 66 89 04 51: mov word ptr [ecx + edx*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        cmp dword ptr [ecx + eax*4 + 8ch], 0
        ; Exact mapped bytes 74 69: je 0x584c1abc
        __asm _emit 0x74
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 8ch]
        mov dword ptr [ebp - 1b8h], ecx
        cmp dword ptr [ebp - 1b8h], 0
        ; Exact mapped bytes 74 26: je 0x584c1a9b
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 1b8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1e0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes FF 95 20 FE FF FF: call dword ptr [ebp - 0x1e0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584c1aa5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e4h], 0
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov dword ptr [eax + edx*4 + 8ch], 0
        push 243ech
        ; Exact mapped bytes E8 3E F5 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf5
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c0h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1c0h], 0
        ; Exact mapped bytes 74 3B: je 0x584c1b1a
        __asm _emit 0x74
        __asm _emit 0x3b
        movzx ecx, word ptr [ebp - 0e8h]
        push ecx
        ; Exact mapped bytes 8B 0D 70 75 94 58: mov ecx, dword ptr [0x58947570]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE 2F FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp - 1e8h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 AE 2B 0A 00: call 0x585646c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x2b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584c1b24
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c4h], 0
        mov eax, dword ptr [ebp - 1c4h]
        mov dword ptr [ebp - 1ech], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [ebp - 1ech]
        mov dword ptr [edx + ecx*4 + 8ch], eax
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 8ch]
        mov dword ptr [ebp - 1f0h], eax
        ; Exact mapped bytes 8B 0D 70 75 94 58: mov ecx, dword ptr [0x58947570]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 C5 2A 0A 00: call 0x58564640
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x2a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 8ch]
        mov dword ptr [ebp - 1f4h], ecx
        mov edx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 5E A3 FC FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 56 FE FF FF: mov word ptr [ebp - 0x1aa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 1aah]
        push ecx
        mov edx, dword ptr [ebp - 198h]
        push edx
        lea eax, [ebp - 0ech]
        push eax
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 A3 48 0A 00: call 0x58566470
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x48
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 8ch]
        mov dword ptr [ebp - 1f8h], eax
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 8ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 1fch], edx
        mov eax, dword ptr [ebp - 1a8h]
        push eax
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes FF 95 04 FE FF FF: call dword ptr [ebp - 0x1fc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 8ch]
        mov dword ptr [ebp - 200h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp + ecx - 280h]
        push edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp + ecx - 280h]
        push edx
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 D5 54 0A 00: call 0x58567130
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x54
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + eax*4 + 8ch]
        mov dword ptr [ebp - 214h], edx
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 204h], ecx
        push 1
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 79 B3 FC FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb3
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        mov dword ptr [ebp - 20ch], eax
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 208h], edx
        push 0
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 4A B3 FC FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xb3
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov dword ptr [ebp - 210h], ecx
        mov edx, dword ptr [ebp - 20ch]
        push edx
        mov eax, dword ptr [ebp - 210h]
        push eax
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 A5 51 0A 00: call 0x58566e90
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x51
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [ebp - 198h]
        mov esi, dword ptr [ebp - 19ch]
        mov eax, dword ptr [esi + eax*4 + 8ch]
        mov dword ptr [edx + ecx*4 + 0ch], eax
        ; Exact mapped bytes E9 4E 02 00 00: jmp 0x584c1f61
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 218h], edx
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 2C B3 FC FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb3
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 0F 85 21 02 00 00: jne 0x584c1f61
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 21ch], eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 DF B2 FC FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xb2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 2ah
        mov esi, eax
        lea edi, [ebp - 194h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 220h], eax
        push 0
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 7D DF FE FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        movzx ecx, word ptr [ebp - 0f4h]
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
        ; Exact mapped bytes 66 89 85 0C FF FF FF: mov word ptr [ebp - 0xf4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 1a0h]
        ; Exact mapped bytes 66 8B 85 04 FF FF FF: mov ax, word ptr [ebp - 0xfc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
        movzx ecx, ax
        cmp edx, ecx
        ; Exact mapped bytes 7E 16: jle 0x584c1dfd
        __asm _emit 0x7e
        __asm _emit 0x16
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
        ; Exact mapped bytes 66 89 95 60 FE FF FF: mov word ptr [ebp - 0x1a0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 3910h
        ; Exact mapped bytes E8 FD F1 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf1
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c8h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1c8h], 0
        ; Exact mapped bytes 74 3E: je 0x584c1e5e
        __asm _emit 0x74
        __asm _emit 0x3e
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
        ; Exact mapped bytes E8 9A 2C FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 AA 5F 0A 00: call 0x58567e00
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x5f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 1bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x584c1e68
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bch], 0
        mov edx, dword ptr [ebp - 1bch]
        mov dword ptr [ebp - 228h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ebp - 228h]
        mov dword ptr [ecx + eax*4 + 10ch], edx
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + eax*4 + 10ch]
        mov dword ptr [ebp - 23ch], edx
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 45 A0 FC FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 8D 54 FE FF FF: mov word ptr [ebp - 0x1ac], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 22ch], eax
        push 0
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 28 B1 FC FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xb1
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        mov dword ptr [ebp - 230h], edx
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 DE 2A FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        movzx ecx, word ptr [ebp - 1ach]
        push ecx
        mov edx, dword ptr [ebp - 230h]
        push edx
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 234h]
        push ecx
        lea edx, [ebp - 194h]
        push edx
        mov eax, dword ptr [ebp - 238h]
        push eax
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 82 88 0A 00: call 0x5856a7c0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [ebp - 198h]
        mov esi, dword ptr [ebp - 19ch]
        mov eax, dword ptr [esi + eax*4 + 10ch]
        mov dword ptr [edx + ecx*4 + 0ch], eax
        ; Exact mapped bytes E9 81 F7 FF FF: jmp 0x584c16e7
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], 0
        ; Exact mapped bytes EB 0F: jmp 0x584c1f81
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 198h]
        add ecx, 1
        mov dword ptr [ebp - 198h], ecx
        cmp dword ptr [ebp - 198h], 20h
        ; Exact mapped bytes 0F 8D DB 02 00 00: jge 0x584c2269
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        cmp dword ptr [eax + edx*4 + 0ch], 0
        ; Exact mapped bytes 0F 84 BF 02 00 00: je 0x584c2264
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 0ch]
        mov dword ptr [ebp - 240h], eax
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [ecx + 18ch]
        push edx
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 36 E2 FD FF: call 0x584a0210
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + eax*4 + 0ch]
        mov dword ptr [ebp - 244h], edx
        movzx eax, word ptr [ebp - 1a0h]
        push eax
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 2D E2 FD FF: call 0x584a0230
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 0ch]
        mov dword ptr [ebp - 250h], eax
        mov ecx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 B9 29 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 198h]
        lea eax, [eax + edx*4 + 168h]
        mov ecx, 2
        shl ecx, 0
        ; Exact mapped bytes 0F BF 14 08: movsx edx, word ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x08
        mov dword ptr [ebp - 268h], edx
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 8C 29 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        lea edx, [eax + ecx*4 + 168h]
        mov eax, 2
        imul ecx, eax, 0
        ; Exact mapped bytes 0F BF 14 0A: movsx edx, word ptr [edx + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x0a
        mov dword ptr [ebp - 24ch], edx
        mov eax, dword ptr [ebp - 268h]
        push eax
        mov ecx, dword ptr [ebp - 24ch]
        push ecx
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 54 22 0A 00: call 0x585642e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 0ch]
        mov dword ptr [ebp - 260h], ecx
        mov edx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 30 29 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x29
        __asm _emit 0xfc
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
        mov dword ptr [ebp - 254h], edx
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 0E 29 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x29
        __asm _emit 0xfc
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
        mov dword ptr [ebp - 258h], ecx
        mov edx, 2
        imul esi, edx, 0
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 D9 28 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x28
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        lea edx, [eax + ecx*4 + 1e8h]
        ; Exact mapped bytes 0F BF 04 32: movsx eax, word ptr [edx + esi]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x32
        mov dword ptr [ebp - 25ch], eax
        mov ecx, dword ptr [ebp - 254h]
        push ecx
        mov edx, dword ptr [ebp - 258h]
        push edx
        mov eax, dword ptr [ebp - 25ch]
        push eax
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 C2 22 0A 00: call 0x58564400
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 94 28 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x28
        __asm _emit 0xfc
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
        mov dword ptr [ebp - 264h], eax
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 0ch]
        mov dword ptr [ebp - 28ch], eax
        mov ecx, dword ptr [ebp - 264h]
        push ecx
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 68 CB FF FF: call 0x584bed10
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 0ch]
        ; Exact mapped bytes E8 12 DB FE FF: call 0x584afcd0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 51: jne 0x584c2216
        __asm _emit 0x75
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 0ch]
        mov dword ptr [ebp - 26ch], eax
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [ecx + 18ch]
        lea eax, [ebp + edx*4 - 18h]
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [ecx + 1ach]
        movzx eax, word ptr [eax + edx*2]
        push eax
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 4B 24 0A 00: call 0x58564660
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 0ch]
        mov dword ptr [ebp - 274h], eax
        mov ecx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 A6 27 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 198h]
        ; Exact mapped bytes 0F BF 84 50 28 01 00 00: movsx eax, word ptr [eax + edx*2 + 0x128]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, eax, 0ah
        mov dword ptr [ebp - 270h], ecx
        mov edx, dword ptr [ebp - 270h]
        push edx
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 FD DF FD FF: call 0x584a0260
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 09 FD FF FF: jmp 0x584c1f72
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes E8 D0 ED 36 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xed
        __asm _emit 0x36
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
