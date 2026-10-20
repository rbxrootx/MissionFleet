// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875E4F0 .. +0x1060 bytes.
extern "C" __declspec(naked) void FUN_5875e4f0_5875E4F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888fd81h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 294h
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
        ; Exact mapped bytes EB 0F: jmp 0x5875e53e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 198h]
        add eax, 1
        mov dword ptr [ebp - 198h], eax
        cmp dword ptr [ebp - 198h], 20h
        ; Exact mapped bytes 7D 6E: jge 0x5875e5b5
        __asm _emit 0x7d
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 198h]
        and ecx, 80000007h
        ; Exact mapped bytes 79 05: jns 0x5875e55a
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffff8h
        inc ecx
        mov edx, dword ptr [ebp - 19ch]
        mov dword ptr [edx + ecx*4 + 5f38h], 0
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov dword ptr [ecx + eax*4 + 17ch], 0
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov dword ptr [eax + edx*4 + 240h], 0
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov dword ptr [edx + ecx*4 + 2c0h], 0
        ; Exact mapped bytes E9 7A FF FF FF: jmp 0x5875e52f
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 10h
        ; Exact mapped bytes 66 89 85 60 FE FF FF: mov word ptr [ebp - 0x1a0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 1
        ; Exact mapped bytes 66 89 8D AC FD FF FF: mov word ptr [ebp - 0x254], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5875e5e8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 198h]
        add edx, 1
        mov dword ptr [ebp - 198h], edx
        cmp dword ptr [ebp - 198h], 2
        ; Exact mapped bytes 7D 38: jge 0x5875e629
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
        ; Exact mapped bytes EB B0: jmp 0x5875e5d9
        __asm _emit 0xeb
        __asm _emit 0xb0
        push 100h
        push 0
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, 63a4h
        push ecx
        ; Exact mapped bytes E8 CE E7 0E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe7
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 198h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5875e660
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 198h]
        add edx, 1
        mov dword ptr [ebp - 198h], edx
        cmp dword ptr [ebp - 198h], 20h
        ; Exact mapped bytes 0F 8D 81 0A 00 00: jge 0x5875f0ee
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 19ch]
        add eax, 34ch
        mov dword ptr [ebp - 28ch], eax
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [ecx + 1fch]
        mov eax, dword ptr [ebp - 19ch]
        add eax, dword ptr [ebp - 198h]
        movzx ecx, byte ptr [eax + 21ch]
        lea edx, [ecx + edx*2 + 1]
        push edx
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 DC 3B D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3b
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, 8
        mov esi, eax
        lea edi, [ebp - 38h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 19ch]
        add eax, 34ch
        mov dword ptr [ebp - 298h], eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 7D E9 D2 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 5
        ; Exact mapped bytes 0F 85 49 06 00 00: jne 0x5875ed38
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 19ch]
        add eax, 34ch
        mov dword ptr [ebp - 29ch], eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 2E E9 D2 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, 2dh
        mov esi, eax
        lea edi, [ebp - 0ech]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, 34ch
        ; Exact mapped bytes E8 BE 70 D3 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x70
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 90 98 00 00 00: mov dx, word ptr [eax + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 95 4C FE FF FF: mov word ptr [ebp - 0x1b4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 1b4h]
        ; Exact mapped bytes 0F BF 4D C0: movsx ecx, word ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xc0
        add eax, ecx
        mov dword ptr [ebp - 1b0h], eax
        imul edx, dword ptr [ebp - 1b0h], 64h
        mov dword ptr [ebp - 1c4h], edx
        mov eax, 2
        imul ecx, eax, 3
        movzx edx, word ptr [ebp + ecx - 30h]
        imul edx, dword ptr [ebp - 1b0h]
        mov dword ptr [ebp - 1ach], edx
        mov eax, dword ptr [ebp - 19ch]
        add eax, 34ch
        mov dword ptr [ebp - 1e0h], eax
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [ecx + 1fch]
        mov eax, dword ptr [ebp - 19ch]
        add eax, dword ptr [ebp - 198h]
        movzx ecx, byte ptr [eax + 21ch]
        lea edx, [ecx + edx*2 + 1]
        push edx
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 9F 43 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x43
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 1]
        xor eax, 55h
        and eax, 7fh
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 59 05 A8 5A 89 58: mulsd xmm0, qword ptr [0x58895aa8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 2D 0D 00: call 0x588315a0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x2d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 1e4h], eax
        mov ecx, dword ptr [ebp - 1c4h]
        imul ecx, dword ptr [ebp - 1e4h]
        mov dword ptr [ebp - 1e8h], ecx
        imul ecx, dword ptr [ebp - 1c4h], 3
        mov eax, dword ptr [ebp - 1e8h]
        cdq
        mov esi, 55h
        idiv esi
        add ecx, eax
        mov dword ptr [ebp - 1c0h], ecx
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        lea ecx, [eax + edx*8 + 63a4h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 1ach]
        mov dword ptr [ecx + eax], edx
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        lea edx, [ecx + eax*8 + 63a4h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 1c0h]
        mov dword ptr [edx + eax], ecx
        mov edx, dword ptr [ebp - 1ach]
        cmp edx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes 7E 0C: jle 0x5875e874
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 1c0h]
        mov dword ptr [ebp - 1ach], eax
        mov eax, dword ptr [ebp - 1c4h]
        add eax, dword ptr [ebp - 1ach]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 1b0h], eax
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 89 D7 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x89
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        cmp edx, 0dh
        ; Exact mapped bytes 74 17: je 0x5875e8bc
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 89 D7 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x89
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 10h
        ; Exact mapped bytes 75 33: jne 0x5875e8ef
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
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x5875e988
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
        ; Exact mapped bytes 74 1F: je 0x5875e92d
        __asm _emit 0x74
        __asm _emit 0x1f
        movzx ecx, word ptr [ebp - 1a4h]
        movzx edx, word ptr [ebp - 4eh]
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
        movzx edx, word ptr [ebp - 1a4h]
        movzx eax, word ptr [ebp - 4eh]
        cmp edx, eax
        ; Exact mapped bytes 7E 0B: jle 0x5875e988
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 8D 5C FE FF FF: mov cx, word ptr [ebp - 0x1a4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 4D B2: mov word ptr [ebp - 0x4e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb2
        mov edx, dword ptr [ebp - 19ch]
        add edx, 34ch
        mov dword ptr [ebp - 1ech], edx
        push 0
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 62 13 D5 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x13
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [ebp + edx - 294h], eax
        mov eax, dword ptr [ebp - 19ch]
        add eax, 34ch
        mov dword ptr [ebp - 1f0h], eax
        push 1
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 2E 13 D5 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x13
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov dword ptr [ebp + edx - 294h], eax
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
        ; Exact mapped bytes 7E 0F: jle 0x5875ea16
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
        movzx edx, byte ptr [ecx + 1fch]
        lea eax, [ebp + edx*4 - 18h]
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [ecx + 21ch]
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
        ; Exact mapped bytes 7E 3A: jle 0x5875ea91
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
        movzx edx, byte ptr [ecx + 1fch]
        lea ecx, [ebp + edx*4 - 18h]
        mov edx, dword ptr [ebp - 19ch]
        add edx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [edx + 21ch]
        ; Exact mapped bytes 66 89 04 51: mov word ptr [ecx + edx*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x51
        push 243ech
        ; Exact mapped bytes E8 69 25 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x25
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1cch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1cch], 0
        ; Exact mapped bytes 74 7F: je 0x5875eb33
        __asm _emit 0x74
        __asm _emit 0x7f
        mov eax, dword ptr [ebp - 19ch]
        ; Exact mapped bytes 0F BF B0 08 41 00 00: movsx esi, word ptr [eax + 0x4108]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xb0
        __asm _emit 0x08
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, 34ch
        ; Exact mapped bytes E8 3E 91 D2 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x91
        __asm _emit 0xd2
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
        ; Exact mapped bytes 66 89 B5 4A FE FF FF: mov word ptr [ebp - 0x1b6], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 0e8h]
        push eax
        ; Exact mapped bytes 8B 0D 70 75 94 58: mov ecx, dword ptr [0x58947570]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 5F D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x5f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        movzx ecx, word ptr [ebp - 1b6h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1f4h]
        push ecx
        mov edx, dword ptr [ebp - 19ch]
        push edx
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 95 5B E0 FF: call 0x585646c0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x5b
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875eb3d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d0h], 0
        mov eax, dword ptr [ebp - 1d0h]
        mov dword ptr [ebp - 1f8h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [ebp - 1f8h]
        mov dword ptr [edx + ecx*4 + 240h], eax
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 240h]
        mov dword ptr [ebp - 1fch], eax
        ; Exact mapped bytes 8B 0D 70 75 94 58: mov ecx, dword ptr [0x58947570]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 AC 5A E0 FF: call 0x58564640
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x5a
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 240h]
        mov dword ptr [ebp - 200h], ecx
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, 34ch
        ; Exact mapped bytes E8 42 D3 D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xd3
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 95 48 FE FF FF: mov word ptr [ebp - 0x1b8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 1b8h]
        push eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        lea edx, [ebp - 0ech]
        push edx
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 87 78 E0 FF: call 0x58566470
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x78
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + eax*4 + 240h]
        mov dword ptr [ebp - 204h], edx
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + eax*4 + 240h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 208h], ecx
        mov edx, dword ptr [ebp - 1b0h]
        push edx
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes FF 95 F8 FD FF FF: call dword ptr [ebp - 0x208]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + eax*4 + 240h]
        mov dword ptr [ebp - 20ch], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp + eax - 294h]
        push ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp + eax - 294h]
        push ecx
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 B9 84 E0 FF: call 0x58567130
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 240h]
        mov dword ptr [ebp - 220h], ecx
        mov edx, dword ptr [ebp - 19ch]
        add edx, 34ch
        mov dword ptr [ebp - 210h], edx
        push 1
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 5A E3 D2 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xe3
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov dword ptr [ebp - 218h], ecx
        mov edx, dword ptr [ebp - 19ch]
        add edx, 34ch
        mov dword ptr [ebp - 214h], edx
        push 0
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 28 E3 D2 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xe3
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov dword ptr [ebp - 21ch], ecx
        mov edx, dword ptr [ebp - 218h]
        push edx
        mov eax, dword ptr [ebp - 21ch]
        push eax
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 83 81 E0 FF: call 0x58566e90
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x81
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [ebp - 198h]
        mov esi, dword ptr [ebp - 19ch]
        mov eax, dword ptr [esi + eax*4 + 240h]
        mov dword ptr [edx + ecx*4 + 17ch], eax
        ; Exact mapped bytes E9 B1 03 00 00: jmp 0x5875f0e9
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, 34ch
        mov dword ptr [ebp - 224h], ecx
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 04 E3 D2 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe3
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 0F 85 81 03 00 00: jne 0x5875f0e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, 34ch
        mov dword ptr [ebp - 228h], ecx
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 B4 E2 D2 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe2
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, 2ah
        mov esi, eax
        lea edi, [ebp - 194h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 19ch]
        add eax, 34ch
        mov dword ptr [ebp - 22ch], eax
        push 0
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 50 0F D5 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 240h], eax
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 83 D7 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x83
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        cmp edx, 0dh
        ; Exact mapped bytes 74 17: je 0x5875edf4
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 83 D7 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x83
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 10h
        ; Exact mapped bytes 75 49: jne 0x5875ee3d
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
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x5875eefe
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
        ; Exact mapped bytes 66 89 85 58 FE FF FF: mov word ptr [ebp - 0x1a8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [ebp - 1fh]
        and edx, 1
        ; Exact mapped bytes 74 22: je 0x5875ee81
        __asm _emit 0x74
        __asm _emit 0x22
        movzx ecx, word ptr [ebp - 1a8h]
        movzx edx, word ptr [ebp - 0f4h]
        imul eax, edx, 5
        cdq
        mov esi, 64h
        idiv esi
        sub ecx, eax
        ; Exact mapped bytes 66 89 8D 58 FE FF FF: mov word ptr [ebp - 0x1a8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x58
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
        movzx edx, word ptr [ebp - 1a8h]
        movzx eax, word ptr [ebp - 0f4h]
        cmp edx, eax
        ; Exact mapped bytes 7E 0E: jle 0x5875eefe
        __asm _emit 0x7e
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 8D 58 FE FF FF: mov cx, word ptr [ebp - 0x1a8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x58
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
        ; Exact mapped bytes 7E 16: jle 0x5875ef31
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
        ; Exact mapped bytes E8 C9 20 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x20
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d4h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1d4h], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x5875efda
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 19ch]
        ; Exact mapped bytes 0F BF B0 08 41 00 00: movsx esi, word ptr [eax + 0x4108]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xb0
        __asm _emit 0x08
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, 34ch
        ; Exact mapped bytes E8 9A 8C D2 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x8c
        __asm _emit 0xd2
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
        ; Exact mapped bytes 66 89 B5 46 FE FF FF: mov word ptr [ebp - 0x1ba], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes E8 2D 5B D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x5b
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        movzx ecx, word ptr [ebp - 1bah]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 230h]
        push ecx
        mov edx, dword ptr [ebp - 19ch]
        push edx
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 2E 8E E0 FF: call 0x58567e00
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875efe4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d8h], 0
        mov eax, dword ptr [ebp - 1d8h]
        mov dword ptr [ebp - 234h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [ebp - 234h]
        mov dword ptr [edx + ecx*4 + 2c0h], eax
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 2c0h]
        mov dword ptr [ebp - 248h], eax
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, 34ch
        ; Exact mapped bytes E8 C6 CE D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xce
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 8D 44 FE FF FF: mov word ptr [ebp - 0x1bc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 19ch]
        add edx, 34ch
        mov dword ptr [ebp - 238h], edx
        push 0
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 A6 DF D2 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xdf
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov dword ptr [ebp - 23ch], ecx
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, 34ch
        ; Exact mapped bytes E8 59 59 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x59
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        movzx edx, word ptr [ebp - 1bch]
        push edx
        mov eax, dword ptr [ebp - 23ch]
        push eax
        mov ecx, dword ptr [ebp - 198h]
        push ecx
        mov edx, dword ptr [ebp - 240h]
        push edx
        lea eax, [ebp - 194h]
        push eax
        mov ecx, dword ptr [ebp - 244h]
        push ecx
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 FD B6 E0 FF: call 0x5856a7c0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xb6
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [ebp - 198h]
        mov esi, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [esi + ecx*4 + 2c0h]
        mov dword ptr [eax + edx*4 + 17ch], ecx
        ; Exact mapped bytes E9 63 F5 FF FF: jmp 0x5875e651
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5875f109
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 198h]
        add edx, 1
        mov dword ptr [ebp - 198h], edx
        cmp dword ptr [ebp - 198h], 20h
        ; Exact mapped bytes 0F 8D B4 03 00 00: jge 0x5875f4ca
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        cmp dword ptr [ecx + eax*4 + 17ch], 0
        ; Exact mapped bytes 0F 84 95 03 00 00: je 0x5875f4c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 17ch]
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov esi, dword ptr [ecx]
        mov ecx, dword ptr [eax + edx*4 + 17ch]
        mov edx, dword ptr [esi + 34h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        mov dword ptr [ebp - 24ch], edx
        mov eax, dword ptr [ebp - 19ch]
        push eax
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 08 53 E0 FF: call 0x58564490
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x53
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 250h], eax
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [ecx + 1fch]
        push edx
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 50 10 D4 FF: call 0x584a0210
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        mov dword ptr [ebp - 278h], edx
        movzx eax, word ptr [ebp - 1a0h]
        push eax
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 44 10 D4 FF: call 0x584a0230
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 260h], eax
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, 34ch
        ; Exact mapped bytes E8 CA 57 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x57
        __asm _emit 0xd2
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
        mov dword ptr [ebp - 258h], ecx
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, 34ch
        ; Exact mapped bytes E8 9A 57 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x57
        __asm _emit 0xd2
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
        mov dword ptr [ebp - 25ch], eax
        mov ecx, dword ptr [ebp - 258h]
        push ecx
        mov edx, dword ptr [ebp - 25ch]
        push edx
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 62 50 E0 FF: call 0x585642e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x50
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 19ch]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        mov dword ptr [ebp - 270h], edx
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, 34ch
        ; Exact mapped bytes E8 38 57 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x57
        __asm _emit 0xd2
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
        mov dword ptr [ebp - 264h], edx
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, 34ch
        ; Exact mapped bytes E8 13 57 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x57
        __asm _emit 0xd2
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
        mov dword ptr [ebp - 268h], ecx
        mov edx, 2
        imul esi, edx, 0
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, 34ch
        ; Exact mapped bytes E8 DB 56 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x56
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 198h]
        lea edx, [eax + ecx*4 + 1e8h]
        ; Exact mapped bytes 0F BF 04 32: movsx eax, word ptr [edx + esi]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x32
        mov dword ptr [ebp - 26ch], eax
        mov ecx, dword ptr [ebp - 264h]
        push ecx
        mov edx, dword ptr [ebp - 268h]
        push edx
        mov eax, dword ptr [ebp - 26ch]
        push eax
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 C4 50 E0 FF: call 0x58564400
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, 34ch
        ; Exact mapped bytes E8 93 56 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x56
        __asm _emit 0xd2
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
        mov dword ptr [ebp - 274h], eax
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 2a0h], eax
        mov ecx, dword ptr [ebp - 274h]
        push ecx
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 64 F9 D5 FF: call 0x584bed10
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf9
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + edx*4 + 17ch]
        ; Exact mapped bytes E8 0B 09 D5 FF: call 0x584afcd0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x09
        __asm _emit 0xd5
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 54: jne 0x5875f420
        __asm _emit 0x75
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 27ch], eax
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [ecx + 1fch]
        lea eax, [ebp + edx*4 - 18h]
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, dword ptr [ebp - 198h]
        movzx edx, byte ptr [ecx + 21ch]
        movzx eax, word ptr [eax + edx*2]
        push eax
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 41 52 E0 FF: call 0x58564660
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x52
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 19ch]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 284h], eax
        mov ecx, dword ptr [ebp - 19ch]
        add ecx, 34ch
        ; Exact mapped bytes E8 96 55 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x55
        __asm _emit 0xd2
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
        mov dword ptr [ebp - 280h], eax
        mov ecx, dword ptr [ebp - 280h]
        push ecx
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 ED 0D D4 FF: call 0x584a0260
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 19ch]
        add edx, dword ptr [ebp - 198h]
        movzx eax, byte ptr [edx + 21ch]
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x5875f4a9
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 19ch]
        movzx edx, byte ptr [ecx + 5f09h]
        or edx, 20h
        mov eax, dword ptr [ebp - 19ch]
        mov byte ptr [eax + 5f09h], dl
        ; Exact mapped bytes EB 1C: jmp 0x5875f4c5
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 19ch]
        movzx edx, byte ptr [ecx + 5f09h]
        or edx, 10h
        mov eax, dword ptr [ebp - 19ch]
        mov byte ptr [eax + 5f09h], dl
        ; Exact mapped bytes E9 30 FC FF FF: jmp 0x5875f0fa
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 74h
        ; Exact mapped bytes E8 33 1B 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x1b
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1dch], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1dch], 0
        ; Exact mapped bytes 74 1A: je 0x5875f504
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 19ch]
        push ecx
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 A4 28 E0 FF: call 0x58561da0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x28
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875f50e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c8h], 0
        mov edx, dword ptr [ebp - 1c8h]
        mov dword ptr [ebp - 288h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [ebp - 288h]
        mov dword ptr [eax + 23ch], ecx
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
        ; Exact mapped bytes E8 06 1B 0D 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x1b
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
