// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586A3BF0 .. +0x32FB bytes.
extern "C" __declspec(naked) void FUN_586a3bf0_586A3BF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4c8h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 74h], 0
        mov dword ptr [ebp - 9ch], 0
        mov dword ptr [ebp - 74h], 13h
        mov dword ptr [ebp - 9ch], 7
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586a3c31
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 49: jge 0x586a3c80
        __asm _emit 0x7d
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0b4h]
        mov dword ptr [ebp - 0a0h], eax
        push 588b0646h
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 46 24 DE FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x24
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0d8h]
        mov dword ptr [ebp - 0a4h], eax
        push 588b0647h
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 23 24 DE FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x24
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A8: jmp 0x586a3c28
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1a4h]
        mov dword ptr [ebp - 0a8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 44 22 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x22
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586a3caf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 23: jge 0x586a3cd8
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 224h]
        mov dword ptr [ebp - 0ach], eax
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 BB 22 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x22
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x586a3ca6
        __asm _emit 0xeb
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d4h]
        mov dword ptr [ebp - 0b0h], edx
        push 588b06e2h
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 A9 23 DE FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x23
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 0F 84 DC 31 00 00: je 0x586a6ee4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 84h]
        ; Exact mapped bytes E8 5A F6 E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf6
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, 2
        imul eax, edx, 0bh
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + eax + 14h]
        xor edx, 55h
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x586a3de9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [ecx + eax + 8]
        xor eax, 55h
        mov edx, 4
        shl edx, 0
        imul eax, dword ptr [edx + 589475a0h]
        mov ecx, 2
        shl ecx, 1
        mov edx, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [edx + ecx + 8]
        xor ecx, 55h
        mov edx, 4
        shl edx, 1
        imul ecx, dword ptr [edx + 589475a0h]
        add eax, ecx
        mov ecx, 2
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + edx + 8]
        xor edx, 55h
        mov ecx, 2
        shl ecx, 0
        mov esi, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [esi + ecx + 8]
        xor ecx, 55h
        add edx, ecx
        mov ecx, 2
        shl ecx, 1
        mov esi, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [esi + ecx + 8]
        xor ecx, 55h
        add edx, ecx
        imul eax, edx
        mov edx, 2
        imul ecx, edx, 0bh
        mov edx, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [edx + ecx + 14h]
        xor ecx, 55h
        cdq
        idiv ecx
        imul eax, eax, 0ah
        mov edx, 2
        imul ecx, edx, 0bh
        mov edx, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [edx + ecx + 14h]
        xor ecx, 55h
        cdq
        idiv ecx
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a3df0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 1
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 8ch
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes E8 D3 63 E0 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x63
        __asm _emit 0xe0
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        imul edx, ecx, 6900h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 54h]
        shr ecx, 1
        and ecx, 7fffffffh
        imul eax, ecx, 0e0h
        cmp dword ptr [edx + eax + 5890c098h], 4bh
        ; Exact mapped bytes 7D 6B: jge 0x586a3eb2
        __asm _emit 0x7d
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 0b8h], edx
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 54h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        mov edx, dword ptr [eax + ecx + 5890c098h]
        add edx, 20fh
        push edx
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 0C DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 81 20 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 66: jmp 0x586a3f18
        __asm _emit 0xeb
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 0c0h], edx
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 54h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        mov edx, dword ptr [eax + ecx + 5890c098h]
        sub edx, 4bh
        push edx
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 0C DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x0c
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 19 20 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x20
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D 0A DE FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x0a
        __asm _emit 0xde
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x586a4040
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A 0A DE FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x0a
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A3 0A DE FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x0a
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 9
        ; Exact mapped bytes 0F 85 EF 00 00 00: jne 0x586a4040
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 11 F4 E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf4
        __asm _emit 0xe1
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], -1
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x586a4040
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 198h]
        mov dword ptr [ebp - 0c8h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 B1 88 E5 FF: call 0x584fc840
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x88
        __asm _emit 0xe5
        __asm _emit 0xff
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 0c4h], eax
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 E1 71 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x71
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 198h]
        mov dword ptr [ebp - 0d0h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 6B 88 E5 FF: call 0x584fc840
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x88
        __asm _emit 0xe5
        __asm _emit 0xff
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 0cch], eax
        mov edx, dword ptr [ebp - 0cch]
        push edx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 9B 71 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x71
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 198h]
        mov dword ptr [ebp - 0d8h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 26 88 E5 FF: call 0x584fc840
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x88
        __asm _emit 0xe5
        __asm _emit 0xff
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 0d4h], eax
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 56 71 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x71
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x586a4112
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 198h]
        mov dword ptr [ebp - 0e0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 84h]
        ; Exact mapped bytes E8 7A 87 E5 FF: call 0x584fc7e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x87
        __asm _emit 0xe5
        __asm _emit 0xff
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 0dch], eax
        mov edx, dword ptr [ebp - 0dch]
        push edx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 0A 71 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x71
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 198h]
        mov dword ptr [ebp - 0e8h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 34 87 E5 FF: call 0x584fc7e0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x87
        __asm _emit 0xe5
        __asm _emit 0xff
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 0e4h], eax
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 C4 70 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x70
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 198h]
        mov dword ptr [ebp - 0f0h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 EF 86 E5 FF: call 0x584fc7e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x86
        __asm _emit 0xe5
        __asm _emit 0xff
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 0ech], eax
        mov edx, dword ptr [ebp - 0ech]
        push edx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 7F 70 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x70
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 30h], 0bh
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 10000000h
        ; Exact mapped bytes 0F 84 FB 0C 00 00: je 0x586a4e26
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [edx + 10h]
        mov dword ptr [ebp - 4c4h], eax
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 12h]
        mov dword ptr [ebp - 4c8h], edx
        mov dword ptr [ebp - 30h], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 0f8h], ecx
        push 146h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 09 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x09
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        mov edx, dword ptr [ebp - 0f4h]
        push edx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 AD 1D DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x1d
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 100h], ecx
        push 147h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E 09 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x09
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        mov edx, dword ptr [ebp - 0fch]
        push edx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 76 1D DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x1d
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 68h], -1
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x586a428d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1a4h]
        mov dword ptr [ebp - 104h], edx
        push 1
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 FC 1C DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x1c
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], 0
        mov eax, 1fe0h
        ; Exact mapped bytes 66 89 85 68 FF FF FF: mov word ptr [ebp - 0x98], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x586a420c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 1
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 20h
        ; Exact mapped bytes 7D 5E: jge 0x586a4270
        __asm _emit 0x7d
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx*2 + 0c0h]
        test ecx, ecx
        ; Exact mapped bytes 74 3F: je 0x586a4263
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 0ch]
        movzx esi, word ptr [eax + edx*2 + 0c0h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 68h]
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC D0 0D 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd0
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 95 07 DE FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0xde
        __asm _emit 0xff
        movzx eax, word ptr [eax + 35eh]
        cmp esi, eax
        ; Exact mapped bytes 75 0B: jne 0x586a4261
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 84h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x586a4270
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes EB 0B: jmp 0x586a426e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 84h], edx
        ; Exact mapped bytes EB 02: jmp 0x586a4270
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 93: jmp 0x586a4203
        __asm _emit 0xeb
        __asm _emit 0x93
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a4h]
        mov dword ptr [ebp - 108h], ecx
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 54 1C DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586a429f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 0F 8D 15 01 00 00: jge 0x586a43c0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 16ch]
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        imul eax, dword ptr [ebp - 8], 0eh
        lea ecx, [edx + eax + 66h]
        push ecx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 58 14 11 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x14
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 110h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        imul ecx, dword ptr [ebp - 8], 0eh
        lea edx, [eax + ecx + 63h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 74h]
        lea eax, [ecx + edx + 54h]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 02 13 11 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x13
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 114h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 114h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        imul edx, dword ptr [ebp - 8], 0eh
        lea eax, [ecx + edx + 63h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 15h
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 C0 12 11 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x12
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1b8h]
        mov dword ptr [ebp - 118h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        imul edx, dword ptr [ebp - 8], 0eh
        lea eax, [ecx + edx + 68h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 A3 13 11 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x13
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1e4h]
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        imul eax, dword ptr [ebp - 8], 0eh
        lea ecx, [edx + eax + 68h]
        push ecx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 76 13 11 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x13
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D6 FE FF FF: jmp 0x586a4296
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 12h]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 3B E5 FF: call 0x584f7fc0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x3b
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 0F 84 85 02 00 00: je 0x586a4665
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 84h]
        ; Exact mapped bytes E8 82 EF E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xef
        __asm _emit 0xe1
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 1
        ; Exact mapped bytes 74 17: je 0x586a440e
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 6B EF E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xef
        __asm _emit 0xe1
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 75 63: jne 0x586a4471
        __asm _emit 0x75
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 120h], ecx
        push 588b06e3h
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 73 1C DE FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x1c
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586a4440
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 26: jge 0x586a446c
        __asm _emit 0x7d
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0b4h]
        mov dword ptr [ebp - 124h], edx
        push 588b070dh
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 37 1C DE FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x1c
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CB: jmp 0x586a4437
        __asm _emit 0xeb
        __asm _emit 0xcb
        ; Exact mapped bytes E9 F4 01 00 00: jmp 0x586a4665
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 12ch], ecx
        mov edx, dword ptr [ebp - 4ch]
        movzx eax, word ptr [edx + 35eh]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        movzx edx, byte ptr [ecx + 35ch]
        push edx
        ; Exact mapped bytes E8 65 FF E3 FF: call 0x584e4400
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xe3
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 128h], eax
        mov eax, dword ptr [ebp - 128h]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 EA 1B DE FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x1b
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0d4h]
        ; Exact mapped bytes E8 1C 5D E0 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x5d
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov edx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        movzx edx, ax
        mov dword ptr [ebp - 134h], edx
        push 0ah
        push 80h
        mov eax, dword ptr [ebp - 130h]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        push ecx
        ; Exact mapped bytes E8 27 22 1B 00: call 0x58856727
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x22
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 10h
        mov edx, dword ptr [ebp - 4ch]
        add edx, 360h
        mov dword ptr [ebp - 64h], edx
        mov dword ptr [ebp - 6ch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586a4528
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 0F 8D 33 01 00 00: jge 0x586a4665
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 64h]
        movzx eax, word ptr [edx + ecx*4 + 2]
        test eax, eax
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x586a4660
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 64h]
        movzx eax, word ptr [edx + ecx*4 + 2]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 3A E5 FF: call 0x584f7fc0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x3a
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 0F 84 F7 00 00 00: je 0x586a4660
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        mov eax, 0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        movzx ecx, dx
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
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
        movzx edx, ax
        xor edx, 55h
        cmp ecx, edx
        ; Exact mapped bytes 0F 8F C4 00 00 00: jg 0x586a4660
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 68h]
        movzx ecx, byte ptr [eax + 35ch]
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx edx, ax
        cmp ecx, edx
        ; Exact mapped bytes 0F 85 A4 00 00 00: jne 0x586a4660
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0b4h]
        mov dword ptr [ebp - 13ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 64h]
        movzx edx, word ptr [ecx + eax*4 + 2]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 64h]
        movzx edx, byte ptr [ecx + eax*4]
        push edx
        ; Exact mapped bytes E8 15 FE E3 FF: call 0x584e4400
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xfe
        __asm _emit 0xe3
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 138h], eax
        mov eax, dword ptr [ebp - 138h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 9A 1A DE FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x1a
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 0d8h]
        ; Exact mapped bytes E8 C8 5B E0 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x5b
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        mov eax, dword ptr [ebp - 68h]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        mov edx, 0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        movzx eax, cx
        mov dword ptr [ebp - 144h], eax
        push 0ah
        push 80h
        mov ecx, dword ptr [ebp - 140h]
        push ecx
        mov edx, dword ptr [ebp - 144h]
        push edx
        ; Exact mapped bytes E8 D3 20 1B 00: call 0x58856727
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x20
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 10h
        mov eax, dword ptr [ebp - 6ch]
        add eax, 1
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes E9 BA FE FF FF: jmp 0x586a451f
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 148h], edx
        push 0
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 5F 18 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x18
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 14ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 43 18 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x18
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 2e4h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 150h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 128h]
        push edx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 B2 6A 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x6a
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 2e4h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 158h], edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 100h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F0 EF FF FF: call 0x586a3710
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        mov ecx, dword ptr [ebp - 154h]
        push ecx
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 58 6A 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x6a
        __asm _emit 0x11
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 14h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 19 29 00 00: call 0x586a7060
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 2e4h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 15ch], edx
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 128h]
        push edx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 09 6A 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x6a
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 2e4h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 164h], ecx
        lea edx, [ebp - 14h]
        push edx
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 100h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 EF FF FF: call 0x586a3710
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        mov eax, dword ptr [ebp - 160h]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 B0 69 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x69
        __asm _emit 0x11
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 28 00 00: call 0x586a7060
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 2e4h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 168h], ecx
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 128h]
        push edx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 61 69 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x69
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 8
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 2e4h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 170h], ecx
        lea edx, [ebp - 14h]
        push edx
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 100h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A0 EE FF FF: call 0x586a3710
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        mov ecx, dword ptr [ebp - 16ch]
        push ecx
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 08 69 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x69
        __asm _emit 0x11
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 14h]
        push edx
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 27 00 00: call 0x586a7060
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 2e4h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 174h], eax
        mov ecx, 4
        shl ecx, 2
        mov edx, 4
        imul eax, edx, 5
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx + 128h]
        mov edx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [edx + eax + 128h]
        push ecx
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 A6 68 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 2e4h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 17ch], edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, 4
        shl ecx, 2
        mov edx, 4
        imul eax, edx, 5
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx + 100h]
        mov edx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [edx + eax + 100h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D2 ED FF FF: call 0x586a3710
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        mov eax, dword ptr [ebp - 178h]
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 3A 68 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB 26 00 00: call 0x586a7060
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 8
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 2e4h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 180h], ecx
        mov edx, 4
        imul eax, edx, 6
        mov ecx, 4
        imul edx, ecx, 7
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + eax + 128h]
        mov ecx, dword ptr [ebp - 0ch]
        add eax, dword ptr [ecx + edx + 128h]
        push eax
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 D8 67 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x67
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, 8
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 2e4h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 188h], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, 4
        imul eax, edx, 6
        mov ecx, 4
        imul edx, ecx, 7
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + eax + 100h]
        mov ecx, dword ptr [ebp - 0ch]
        add eax, dword ptr [ecx + edx + 100h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 ED FF FF: call 0x586a3710
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        mov edx, dword ptr [ebp - 184h]
        push edx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 6C 67 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x67
        __asm _emit 0x11
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 14h]
        push eax
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D 26 00 00: call 0x586a7060
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 2e4h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 18ch], ecx
        mov edx, 4
        shl edx, 3
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 128h]
        push ecx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 1C 67 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 2e4h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 194h], ecx
        lea edx, [ebp - 14h]
        push edx
        mov eax, 4
        shl eax, 3
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 100h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A EC FF FF: call 0x586a3710
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        mov eax, dword ptr [ebp - 190h]
        push eax
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 C2 66 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x66
        __asm _emit 0x11
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 25 00 00: call 0x586a7060
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 2e4h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 198h], edx
        mov eax, 4
        imul ecx, eax, 9
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 128h]
        push eax
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 72 66 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x66
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 6
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 2e4h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 1a0h], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, 4
        imul eax, edx, 9
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 100h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B0 EB FF FF: call 0x586a3710
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        mov eax, dword ptr [ebp - 19ch]
        push eax
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 18 66 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x66
        __asm _emit 0x11
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        push 6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D9 24 00 00: call 0x586a7060
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], 0
        mov dword ptr [ebp - 50h], 0
        mov dword ptr [ebp - 88h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586a4bb1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 9
        ; Exact mapped bytes 7D 28: jge 0x586a4bdf
        __asm _emit 0x7d
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 48h]
        add edx, dword ptr [ecx + eax*4 + 12ch]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 50h]
        add edx, dword ptr [ecx + eax*4 + 104h]
        mov dword ptr [ebp - 50h], edx
        ; Exact mapped bytes EB C9: jmp 0x586a4ba8
        __asm _emit 0xeb
        __asm _emit 0xc9
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 0E: je 0x586a4bf3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 50h]
        xor edx, edx
        div dword ptr [ebp - 48h]
        mov dword ptr [ebp - 88h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 320h]
        mov dword ptr [ebp - 1a4h], ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 7F 65 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 31ch]
        mov dword ptr [ebp - 1ach], ecx
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 EA FF FF: call 0x586a3710
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        mov ecx, dword ptr [ebp - 1a8h]
        push ecx
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 48 65 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x65
        __asm _emit 0x11
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 14h]
        push edx
        push 7
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 24 00 00: call 0x586a7060
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2e0h]
        mov dword ptr [ebp - 1b0h], ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 1B 65 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x65
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2dch]
        mov dword ptr [ebp - 1b8h], ecx
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C EA FF FF: call 0x586a3710
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        mov ecx, dword ptr [ebp - 1b4h]
        push ecx
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 E4 64 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x64
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        mov dword ptr [ebp - 70h], edx
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 15: je 0x586a4cd5
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 70h], 1
        ; Exact mapped bytes 74 75: je 0x586a4d3b
        __asm _emit 0x74
        __asm _emit 0x75
        cmp dword ptr [ebp - 70h], 2
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x586a4d9e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2A 01 00 00: jmp 0x586a4dff
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 2b0h]
        mov dword ptr [ebp - 1bch], eax
        push 0
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 46 AB DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xab
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 2b0h]
        ; Exact mapped bytes E8 AF 1C DE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x1c
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2dch]
        mov dword ptr [ebp - 1c0h], edx
        mov eax, dword ptr [ebp - 44h]
        sub eax, 41h
        push eax
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 7B 09 11 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x09
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x586a4dff
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 2b0h]
        mov dword ptr [ebp - 1c4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 E0 AA DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xaa
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 2b0h]
        ; Exact mapped bytes E8 49 1C DE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x1c
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2dch]
        mov dword ptr [ebp - 1c8h], eax
        mov ecx, dword ptr [ebp - 44h]
        sub ecx, 49h
        push ecx
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 15 09 11 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x09
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 61: jmp 0x586a4dff
        __asm _emit 0xeb
        __asm _emit 0x61
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 2b0h]
        mov dword ptr [ebp - 1cch], edx
        push 2
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 7D AA DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xaa
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 2b0h]
        ; Exact mapped bytes E8 E6 1B DE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x1b
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2dch]
        mov dword ptr [ebp - 1d0h], ecx
        mov edx, dword ptr [ebp - 44h]
        sub edx, 49h
        push edx
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 B2 08 11 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2d8h]
        mov dword ptr [ebp - 1d4h], ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 70 63 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x63
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 4D 07 00 00: jmp 0x586a5573
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 88h]
        cmp edx, dword ptr [ecx + 2a4h]
        ; Exact mapped bytes 75 09: jne 0x586a4e43
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BE E9 FF FF: call 0x586a3800
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a4h]
        mov dword ptr [ebp - 1d8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 81 10 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 1dch], eax
        push 588b070eh
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 22 12 DE FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x12
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d4h]
        mov dword ptr [ebp - 1e0h], edx
        push 588b070fh
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 03 12 DE FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x12
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 1e8h], ecx
        push 149h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 FC DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1e4h], eax
        mov edx, dword ptr [ebp - 1e4h]
        push edx
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 5C 10 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 1f0h], ecx
        push 148h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D FC DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        mov edx, dword ptr [ebp - 1ech]
        push edx
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 25 10 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x10
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586a4f1e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 0F 8D 15 01 00 00: jge 0x586a503f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 16ch]
        mov dword ptr [ebp - 1f4h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        imul ecx, dword ptr [ebp - 8], 0eh
        lea edx, [eax + ecx + 46h]
        push edx
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 D9 07 11 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x07
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 114h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 1f8h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        imul edx, dword ptr [ebp - 8], 0eh
        lea eax, [ecx + edx + 46h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 74h]
        lea ecx, [edx + eax + 54h]
        push ecx
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 83 06 11 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x06
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 1fch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        imul eax, dword ptr [ebp - 8], 0eh
        lea ecx, [edx + eax + 46h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 15h
        push eax
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 41 06 11 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x06
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1b8h]
        mov dword ptr [ebp - 200h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        imul eax, dword ptr [ebp - 8], 0eh
        lea ecx, [edx + eax + 4ah]
        push ecx
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 24 07 11 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1e4h]
        mov dword ptr [ebp - 204h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        imul ecx, dword ptr [ebp - 8], 0eh
        lea edx, [eax + ecx + 4ah]
        push edx
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 F7 06 11 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x06
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D6 FE FF FF: jmp 0x586a4f15
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 10000h
        ; Exact mapped bytes 74 74: je 0x586a50c1
        __asm _emit 0x74
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 20ch], eax
        push 1a1h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 FA DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfa
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 208h], eax
        mov ecx, dword ptr [ebp - 208h]
        push ecx
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 AC 0E DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x0e
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 214h], eax
        push 1a2h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D FA DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xfa
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        mov ecx, dword ptr [ebp - 210h]
        push ecx
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 75 0E DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x0e
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 79 04 00 00: jmp 0x586a553a
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 64h]
        and eax, 2000000h
        ; Exact mapped bytes 74 74: je 0x586a5142
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 21ch], edx
        push 1a3h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 FA DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        mov eax, dword ptr [ebp - 218h]
        push eax
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 2B 0E DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0e
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 224h], edx
        push 1a4h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC F9 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf9
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        mov eax, dword ptr [ebp - 220h]
        push eax
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 F4 0D DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0d
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F8 03 00 00: jmp 0x586a553a
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 64h]
        and edx, 80000h
        ; Exact mapped bytes 74 74: je 0x586a51c4
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 22ch], ecx
        push 1a5h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 F9 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf9
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 228h], eax
        mov edx, dword ptr [ebp - 228h]
        push edx
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 A9 0D DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x0d
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 234h], ecx
        push 1a6h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A F9 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf9
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        mov edx, dword ptr [ebp - 230h]
        push edx
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 72 0D DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x0d
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 76 03 00 00: jmp 0x586a553a
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 1000000h
        ; Exact mapped bytes 74 74: je 0x586a5246
        __asm _emit 0x74
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 23ch], eax
        push 1a9h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F F9 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf9
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        mov ecx, dword ptr [ebp - 238h]
        push ecx
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 27 0D DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0d
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 244h], eax
        push 1aah
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 F8 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf8
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 240h], eax
        mov ecx, dword ptr [ebp - 240h]
        push ecx
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 F0 0C DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x0c
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F4 02 00 00: jmp 0x586a553a
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 64h]
        and eax, 40000h
        ; Exact mapped bytes 74 74: je 0x586a52c7
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 24ch], edx
        push 1abh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE F8 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf8
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 248h], eax
        mov eax, dword ptr [ebp - 248h]
        push eax
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 A6 0C DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x0c
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 254h], edx
        push 1ach
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 F8 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        mov eax, dword ptr [ebp - 250h]
        push eax
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 6F 0C DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0c
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 73 02 00 00: jmp 0x586a553a
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 64h]
        and edx, 20000h
        ; Exact mapped bytes 74 74: je 0x586a5349
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 25ch], ecx
        push 1b1h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C F8 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf8
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 258h], eax
        mov edx, dword ptr [ebp - 258h]
        push edx
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 24 0C DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 264h], ecx
        push 1b2h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 F7 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        mov edx, dword ptr [ebp - 260h]
        push edx
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 ED 0B DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x0b
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F1 01 00 00: jmp 0x586a553a
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 40000000h
        ; Exact mapped bytes 74 74: je 0x586a53cb
        __asm _emit 0x74
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 26ch], eax
        push 1c2h
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA F7 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        mov ecx, dword ptr [ebp - 268h]
        push ecx
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 A2 0B DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x0b
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 274h], eax
        push 1c3h
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 F7 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 270h], eax
        mov ecx, dword ptr [ebp - 270h]
        push ecx
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 6B 0B DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0b
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 6F 01 00 00: jmp 0x586a553a
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 64h]
        and eax, 4000h
        ; Exact mapped bytes 74 74: je 0x586a544c
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 27ch], edx
        push 1c4h
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 F7 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        mov eax, dword ptr [ebp - 278h]
        push eax
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 21 0B DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x0b
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 284h], edx
        push 1c5h
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 F6 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 280h], eax
        mov eax, dword ptr [ebp - 280h]
        push eax
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 EA 0A DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0a
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EE 00 00 00: jmp 0x586a553a
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 64h]
        and edx, 8000h
        ; Exact mapped bytes 74 71: je 0x586a54cb
        __asm _emit 0x74
        __asm _emit 0x71
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 28ch], ecx
        push 1c6h
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 F6 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 288h], eax
        mov edx, dword ptr [ebp - 288h]
        push edx
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 9F 0A DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x0a
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 294h], ecx
        push 1c7h
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 F6 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        mov edx, dword ptr [ebp - 290h]
        push edx
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 68 0A DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x0a
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6F: jmp 0x586a553a
        __asm _emit 0xeb
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 29ch], ecx
        push 1afh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 F6 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 298h], eax
        mov edx, dword ptr [ebp - 298h]
        push edx
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 2E 0A DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 2a4h], ecx
        push 1b0h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF F5 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        mov edx, dword ptr [ebp - 2a0h]
        push edx
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 F7 09 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x09
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 2a8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 8A 09 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x09
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 2ach], eax
        push 1
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 6E 09 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x09
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 2b0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 48 09 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x09
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 2b4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 23 09 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 2b8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 FF 08 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x08
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0f8h]
        mov dword ptr [ebp - 2bch], edx
        push 1
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 DA 08 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x08
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0f8h]
        mov dword ptr [ebp - 2c0h], edx
        mov eax, 2
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + ecx + 14h]
        xor eax, 55h
        push eax
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 53 5B 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x5b
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 108h]
        mov dword ptr [ebp - 2c4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 7E 08 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 108h]
        mov dword ptr [ebp - 2c8h], edx
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
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
        xor edx, 55h
        push edx
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 F5 5A 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x5a
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 108h]
        mov dword ptr [ebp - 2cch], edx
        push 1
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 20 08 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x08
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 108h]
        mov dword ptr [ebp - 2d0h], edx
        push 1
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 FC 07 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 108h]
        mov dword ptr [ebp - 2d4h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 5ch]
        xor ecx, 55555555h
        push ecx
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 7D 5A 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x5a
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 61 02 00 00: jne 0x586a597f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0f8h]
        mov dword ptr [ebp - 2d8h], edx
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + ecx + 8]
        xor eax, 55h
        push eax
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 3B 5A 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x5a
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f8h]
        mov dword ptr [ebp - 2dch], eax
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + ecx + 8]
        xor eax, 55h
        push eax
        mov ecx, dword ptr [ebp - 2dch]
        ; Exact mapped bytes E8 04 5A 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x5a
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f8h]
        mov dword ptr [ebp - 2e0h], eax
        mov ecx, 2
        shl ecx, 1
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + ecx + 8]
        xor eax, 55h
        push eax
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 CF 59 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x59
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 2e4h], ecx
        mov edx, 2
        imul eax, edx, 0bh
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + eax + 14h]
        xor edx, 55h
        push edx
        mov ecx, dword ptr [ebp - 2e4h]
        ; Exact mapped bytes E8 98 59 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x59
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 108h]
        mov dword ptr [ebp - 2e8h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 58h]
        xor ecx, 55555555h
        push ecx
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 68 59 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x59
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1a8h]
        mov dword ptr [ebp - 2ech], edx
        mov eax, 2
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + ecx + 14h]
        xor eax, 55h
        push eax
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx + 8]
        xor ecx, 55h
        push ecx
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 9D E7 E5 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xe7
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 1a8h]
        mov dword ptr [ebp - 2f0h], ecx
        mov edx, 2
        imul eax, edx, 0bh
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + eax + 14h]
        xor edx, 55h
        push edx
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + ecx + 8]
        xor eax, 55h
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [edx + ecx + 8]
        xor ecx, 55h
        add eax, ecx
        push eax
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 3D E7 E5 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe7
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 1a8h]
        mov dword ptr [ebp - 2f4h], ecx
        mov edx, 2
        imul eax, edx, 0bh
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + eax + 14h]
        xor edx, 55h
        push edx
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + ecx + 8]
        xor eax, 55h
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [edx + ecx + 8]
        xor ecx, 55h
        add eax, ecx
        mov edx, 2
        shl edx, 1
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + edx + 8]
        xor edx, 55h
        add eax, edx
        push eax
        mov ecx, dword ptr [ebp - 2f4h]
        ; Exact mapped bytes E8 CA E6 E5 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe6
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1b4h]
        mov dword ptr [ebp - 2f8h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 5ch]
        xor eax, 55555555h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 58h]
        xor edx, 55555555h
        push edx
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 97 E6 E5 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe6
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 14 02 00 00: jmp 0x586a5b93
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f8h]
        mov dword ptr [ebp - 2fch], eax
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx + 8]
        xor ecx, 55h
        push ecx
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 0A 7F E0 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x7f
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 300h], ecx
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx + 8]
        xor ecx, 55h
        push ecx
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 D3 7E E0 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x7e
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 304h], ecx
        mov edx, 2
        shl edx, 1
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx + 8]
        xor ecx, 55h
        push ecx
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 9E 7E E0 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x7e
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0f8h]
        mov dword ptr [ebp - 308h], edx
        mov eax, 2
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + ecx + 14h]
        xor eax, 55h
        push eax
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 67 7E E0 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x7e
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 108h]
        mov dword ptr [ebp - 30ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 58h]
        xor edx, 55555555h
        push edx
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 37 7E E0 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x7e
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1a8h]
        mov dword ptr [ebp - 310h], eax
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx + 8]
        xor ecx, 55h
        push ecx
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 A0 E6 E5 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xe6
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 1a8h]
        mov dword ptr [ebp - 314h], ecx
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + eax + 8]
        xor edx, 55h
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [ecx + eax + 8]
        xor eax, 55h
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 54 E6 E5 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe6
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1a8h]
        mov dword ptr [ebp - 318h], eax
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx + 8]
        xor ecx, 55h
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 0ch]
        movzx edx, word ptr [eax + edx + 8]
        xor edx, 55h
        add ecx, edx
        mov eax, 2
        shl eax, 1
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + eax + 8]
        xor eax, 55h
        add ecx, eax
        push ecx
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 F5 E5 E5 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe5
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1b4h]
        mov dword ptr [ebp - 31ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 58h]
        xor ecx, 55555555h
        push ecx
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes E8 CE E5 E5 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe5
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 64h]
        and eax, 20000000h
        ; Exact mapped bytes 0F 84 39 06 00 00: je 0x586a61dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586a5bb6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 0F 8D 16 06 00 00: jge 0x586a61d8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x16
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 16ch]
        mov dword ptr [ebp - 320h], edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 48 2C: movsx ecx, byte ptr [eax + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x2c
        xor ecx, 55h
        ; Exact mapped bytes 0F BE D1: movsx edx, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xd1
        test edx, edx
        ; Exact mapped bytes 7D 0C: jge 0x586a5bf5
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 8ch], 1
        ; Exact mapped bytes EB 0A: jmp 0x586a5bff
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov eax, dword ptr [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 320h]
        ; Exact mapped bytes E8 2F 9C DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9c
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 16ch]
        mov dword ptr [ebp - 324h], eax
        push 1
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 AF 02 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1b8h]
        mov dword ptr [ebp - 328h], eax
        push 0
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 8F 02 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1e4h]
        mov dword ptr [ebp - 32ch], eax
        push 0
        mov ecx, dword ptr [ebp - 32ch]
        ; Exact mapped bytes E8 6F 02 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 114h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 330h], eax
        push 1
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 44 02 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 114h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 334h], edx
        push 1
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 19 02 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 44 02 00 00: jne 0x586a5f16
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, byte ptr [eax + 174h]
        and ecx, 1
        ; Exact mapped bytes 0F 84 29 01 00 00: je 0x586a5e0e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx*2 + 14h]
        xor ecx, 55h
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 42 2C: movsx eax, byte ptr [edx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x2c
        xor eax, 55h
        ; Exact mapped bytes 0F BE C8: movsx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc8
        mov dword ptr [ebp - 54h], ecx
        imul edx, dword ptr [ebp - 38h], 0bh
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 38h]
        xor edx, edx
        mov ecx, 9
        div ecx
        mov dword ptr [ebp - 38h], eax
        imul edx, dword ptr [ebp - 54h], 0bh
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 54h]
        cdq
        mov ecx, 9
        idiv ecx
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 338h], ecx
        imul eax, dword ptr [ebp - 38h], 7
        xor edx, edx
        mov ecx, 64h
        div ecx
        push eax
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 25 54 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 340h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        ; Exact mapped bytes E8 7E B5 DE FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb5
        __asm _emit 0xde
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 33ch], eax
        mov edx, dword ptr [ebp - 33ch]
        push edx
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 E3 53 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x53
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1b8h]
        mov dword ptr [ebp - 344h], edx
        push 9f6h
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 344h]
        ; Exact mapped bytes E8 3C E2 E5 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe2
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1e4h]
        mov dword ptr [ebp - 348h], eax
        push 9f6h
        mov eax, dword ptr [ebp - 38h]
        imul eax, dword ptr [ebp - 2ch]
        xor edx, edx
        mov ecx, 64h
        div ecx
        push eax
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 08 E2 E5 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xe2
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 03 01 00 00: jmp 0x586a5f11
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 34ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx*2 + 14h]
        xor ecx, 55h
        imul eax, ecx, 7
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 3F 53 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x53
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 354h], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 51 2C: movsx edx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x2c
        xor edx, 55h
        ; Exact mapped bytes 0F BE C2: movsx eax, dl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc2
        push eax
        ; Exact mapped bytes E8 88 B1 1A 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb1
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 350h], eax
        mov ecx, dword ptr [ebp - 350h]
        push ecx
        mov ecx, dword ptr [ebp - 354h]
        ; Exact mapped bytes E8 F0 52 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x52
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1b8h]
        mov dword ptr [ebp - 358h], ecx
        push 9f6h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx*2 + 14h]
        xor ecx, 55h
        push ecx
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 3E E1 E5 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe1
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1e4h]
        mov dword ptr [ebp - 35ch], ecx
        push 9f6h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        movzx eax, word ptr [eax + edx*2 + 14h]
        xor eax, 55h
        imul eax, dword ptr [ebp - 2ch]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 00 E1 E5 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe1
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BD 02 00 00: jmp 0x586a61d3
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [edx + 174h]
        and eax, 1
        ; Exact mapped bytes 0F 84 62 01 00 00: je 0x586a608b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + ecx*2 + 14h]
        xor eax, 55h
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 51 2C: movsx edx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x2c
        xor edx, 55h
        ; Exact mapped bytes 0F BE C2: movsx eax, dl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc2
        mov dword ptr [ebp - 58h], eax
        imul ecx, dword ptr [ebp - 28h], 0bh
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        xor edx, edx
        mov ecx, 9
        div ecx
        mov dword ptr [ebp - 28h], eax
        imul edx, dword ptr [ebp - 58h], 0bh
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 58h]
        cdq
        mov ecx, 9
        idiv ecx
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 360h], ecx
        imul eax, dword ptr [ebp - 28h], 7
        xor edx, edx
        mov ecx, 64h
        div ecx
        push eax
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 11 79 E0 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x79
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 368h], eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        ; Exact mapped bytes E8 3A B3 DE FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb3
        __asm _emit 0xde
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 364h], eax
        mov edx, dword ptr [ebp - 364h]
        push edx
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 CF 78 E0 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x78
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 16ch]
        mov dword ptr [ebp - 36ch], edx
        ; Exact mapped bytes 0F BF 45 D8: movsx eax, word ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xd8
        test eax, eax
        ; Exact mapped bytes 7D 0C: jge 0x586a6018
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 90h], 1
        ; Exact mapped bytes EB 0A: jmp 0x586a6022
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        mov ecx, dword ptr [ebp - 36ch]
        ; Exact mapped bytes E8 0C 98 DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x98
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1b8h]
        mov dword ptr [ebp - 370h], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 0A E1 E5 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xe1
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1e4h]
        mov dword ptr [ebp - 374h], edx
        mov eax, dword ptr [ebp - 28h]
        imul eax, dword ptr [ebp - 2ch]
        xor edx, edx
        mov ecx, 64h
        div ecx
        push eax
        mov ecx, dword ptr [ebp - 374h]
        ; Exact mapped bytes E8 DB E0 E5 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xe0
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 48 01 00 00: jmp 0x586a61d3
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 378h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx*2 + 14h]
        xor ecx, 55h
        imul eax, ecx, 7
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 F2 77 E0 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x77
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 380h], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 51 2C: movsx edx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x2c
        xor edx, 55h
        ; Exact mapped bytes 0F BF C2: movsx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc2
        push eax
        ; Exact mapped bytes E8 0B AF 1A 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xaf
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 37ch], eax
        mov ecx, dword ptr [ebp - 37ch]
        push ecx
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 A3 77 E0 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x77
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 16ch]
        mov dword ptr [ebp - 384h], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 42 2C: movsx eax, byte ptr [edx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x2c
        xor eax, 55h
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 7D 0C: jge 0x586a6150
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 94h], 1
        ; Exact mapped bytes EB 0A: jmp 0x586a615a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov edx, dword ptr [ebp - 94h]
        push edx
        mov ecx, dword ptr [ebp - 384h]
        ; Exact mapped bytes E8 D4 96 DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x96
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1b8h]
        mov dword ptr [ebp - 388h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + eax*2 + 14h]
        xor edx, 55h
        push edx
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 C7 DF E5 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xdf
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1e4h]
        mov dword ptr [ebp - 38ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [ecx + eax*2 + 14h]
        xor eax, 55h
        imul eax, dword ptr [ebp - 2ch]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 38ch]
        ; Exact mapped bytes E8 8E DF E5 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xdf
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D5 F9 FF FF: jmp 0x586a5bad
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6F 05 00 00: jmp 0x586a674c
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586a61ef
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 0F 8D 51 05 00 00: jge 0x586a674c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x51
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 16ch]
        mov dword ptr [ebp - 390h], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 51 2C: movsx edx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x2c
        xor edx, 55h
        ; Exact mapped bytes 0F BE C2: movsx eax, dl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc2
        test eax, eax
        ; Exact mapped bytes 7D 09: jge 0x586a622b
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 7ch], 1
        ; Exact mapped bytes EB 07: jmp 0x586a6232
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 7ch]
        push ecx
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 FF 95 DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 16ch]
        mov dword ptr [ebp - 394h], ecx
        push 1
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 7F FC DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1b8h]
        mov dword ptr [ebp - 398h], ecx
        push 1
        mov ecx, dword ptr [ebp - 398h]
        ; Exact mapped bytes E8 5F FC DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfc
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1e4h]
        mov dword ptr [ebp - 39ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 39ch]
        ; Exact mapped bytes E8 3F FC DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfc
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 3a0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 3a0h]
        ; Exact mapped bytes E8 14 FC DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 3a4h], eax
        push 1
        mov ecx, dword ptr [ebp - 3a4h]
        ; Exact mapped bytes E8 E9 FB DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 2F 02 00 00: jne 0x586a6531
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, byte ptr [ecx + 174h]
        and edx, 1
        ; Exact mapped bytes 0F 84 1F 01 00 00: je 0x586a6434
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + eax*2 + 14h]
        xor edx, 55h
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 48 2C: movsx ecx, byte ptr [eax + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x2c
        xor ecx, 55h
        ; Exact mapped bytes 0F BE D1: movsx edx, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xd1
        mov dword ptr [ebp - 5ch], edx
        imul eax, dword ptr [ebp - 3ch], 0bh
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        xor edx, edx
        mov ecx, 9
        div ecx
        mov dword ptr [ebp - 3ch], eax
        imul edx, dword ptr [ebp - 5ch], 0bh
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 5ch]
        cdq
        mov ecx, 9
        idiv ecx
        mov dword ptr [ebp - 5ch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 3a8h], ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 FF 4D 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x4d
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 114h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 3b0h], ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        ; Exact mapped bytes E8 58 AF DE FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xaf
        __asm _emit 0xde
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3ach], eax
        mov eax, dword ptr [ebp - 3ach]
        push eax
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 BD 4D 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x4d
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1b8h]
        mov dword ptr [ebp - 3b4h], eax
        push 9f6h
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 16 DC E5 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xdc
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1e4h]
        mov dword ptr [ebp - 3b8h], ecx
        push 9f6h
        mov eax, dword ptr [ebp - 3ch]
        imul eax, dword ptr [ebp - 2ch]
        xor edx, edx
        mov ecx, 64h
        div ecx
        push eax
        mov ecx, dword ptr [ebp - 3b8h]
        ; Exact mapped bytes E8 E2 DB E5 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xdb
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F8 00 00 00: jmp 0x586a652c
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 3bch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx*2 + 14h]
        xor ecx, 55h
        push ecx
        mov ecx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes E8 24 4D 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x4d
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 3c4h], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 51 2C: movsx edx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x2c
        xor edx, 55h
        ; Exact mapped bytes 0F BE C2: movsx eax, dl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc2
        push eax
        ; Exact mapped bytes E8 6D AB 1A 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xab
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3c0h], eax
        mov ecx, dword ptr [ebp - 3c0h]
        push ecx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 D5 4C 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x4c
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1b8h]
        mov dword ptr [ebp - 3c8h], ecx
        push 9f6h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx*2 + 14h]
        xor ecx, 55h
        push ecx
        mov ecx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes E8 23 DB E5 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xdb
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1e4h]
        mov dword ptr [ebp - 3cch], ecx
        push 9f6h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        movzx eax, word ptr [eax + edx*2 + 14h]
        xor eax, 55h
        imul eax, dword ptr [ebp - 2ch]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 3cch]
        ; Exact mapped bytes E8 E5 DA E5 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xda
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 16 02 00 00: jmp 0x586a6747
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [edx + 174h]
        and eax, 1
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x586a6659
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + ecx*2 + 14h]
        xor eax, 55h
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 51 2C: movsx edx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x2c
        xor edx, 55h
        ; Exact mapped bytes 0F BE C2: movsx eax, dl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc2
        mov dword ptr [ebp - 60h], eax
        imul ecx, dword ptr [ebp - 40h], 0bh
        mov dword ptr [ebp - 40h], ecx
        mov eax, dword ptr [ebp - 40h]
        xor edx, edx
        mov ecx, 9
        div ecx
        mov dword ptr [ebp - 40h], eax
        imul edx, dword ptr [ebp - 60h], 0bh
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 60h]
        cdq
        mov ecx, 9
        idiv ecx
        mov dword ptr [ebp - 60h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 3d0h], ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 00 73 E0 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x73
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 114h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 3d8h], ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        ; Exact mapped bytes E8 29 AD DE FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xad
        __asm _emit 0xde
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3d4h], eax
        mov eax, dword ptr [ebp - 3d4h]
        push eax
        mov ecx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes E8 BE 72 E0 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x72
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1b8h]
        mov dword ptr [ebp - 3dch], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes E8 3C DB E5 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xdb
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1e4h]
        mov dword ptr [ebp - 3e0h], ecx
        mov eax, dword ptr [ebp - 40h]
        imul eax, dword ptr [ebp - 2ch]
        xor edx, edx
        mov ecx, 64h
        div ecx
        push eax
        mov ecx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes E8 0D DB E5 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xdb
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EE 00 00 00: jmp 0x586a6747
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 3e4h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx*2 + 14h]
        xor ecx, 55h
        push ecx
        mov ecx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes E8 2F 72 E0 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x72
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 3ech], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 51 2C: movsx edx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x2c
        xor edx, 55h
        ; Exact mapped bytes 0F BE C2: movsx eax, dl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc2
        push eax
        ; Exact mapped bytes E8 48 A9 1A 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xa9
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3e8h], eax
        mov ecx, dword ptr [ebp - 3e8h]
        push ecx
        mov ecx, dword ptr [ebp - 3ech]
        ; Exact mapped bytes E8 E0 71 E0 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x71
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1b8h]
        mov dword ptr [ebp - 3f0h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx*2 + 14h]
        xor ecx, 55h
        push ecx
        mov ecx, dword ptr [ebp - 3f0h]
        ; Exact mapped bytes E8 53 DA E5 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xda
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1e4h]
        mov dword ptr [ebp - 3f4h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        movzx eax, word ptr [eax + edx*2 + 14h]
        xor eax, 55h
        imul eax, dword ptr [ebp - 2ch]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 3f4h]
        ; Exact mapped bytes E8 1A DA E5 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xda
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9A FA FF FF: jmp 0x586a61e6
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586a675e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 0F 8D BC 00 00 00: jge 0x586a6826
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 16ch]
        mov dword ptr [ebp - 3f8h], eax
        push 1
        mov ecx, dword ptr [ebp - 3f8h]
        ; Exact mapped bytes E8 56 F7 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 114h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 3fch], eax
        push 1
        mov ecx, dword ptr [ebp - 3fch]
        ; Exact mapped bytes E8 2B F7 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 114h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 400h], edx
        push 1
        mov ecx, dword ptr [ebp - 400h]
        ; Exact mapped bytes E8 00 F7 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1b8h]
        mov dword ptr [ebp - 404h], edx
        push 1
        mov ecx, dword ptr [ebp - 404h]
        ; Exact mapped bytes E8 E0 F6 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1e4h]
        mov dword ptr [ebp - 408h], edx
        push 1
        mov ecx, dword ptr [ebp - 408h]
        ; Exact mapped bytes E8 C0 F6 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2F FF FF FF: jmp 0x586a6755
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x586a6837
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0bh
        ; Exact mapped bytes 0F 8D BC 00 00 00: jge 0x586a68fd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 16ch]
        mov dword ptr [ebp - 40ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 7F F6 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 410h], ecx
        push 0
        mov ecx, dword ptr [ebp - 410h]
        ; Exact mapped bytes E8 54 F6 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 414h], eax
        push 0
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 29 F6 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1b8h]
        mov dword ptr [ebp - 418h], eax
        push 0
        mov ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes E8 09 F6 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1e4h]
        mov dword ptr [ebp - 41ch], eax
        push 0
        mov ecx, dword ptr [ebp - 41ch]
        ; Exact mapped bytes E8 E9 F5 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 31 FF FF FF: jmp 0x586a682e
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 78h], edx
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x586a6918
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 20h
        ; Exact mapped bytes 7D 33: jge 0x586a6951
        __asm _emit 0x7d
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 78h]
        and ecx, 1
        ; Exact mapped bytes 74 21: je 0x586a6947
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 224h]
        mov dword ptr [ebp - 420h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 4A F6 DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 78h]
        shr edx, 1
        mov dword ptr [ebp - 78h], edx
        ; Exact mapped bytes EB BE: jmp 0x586a690f
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 328h]
        mov dword ptr [ebp - 424h], ecx
        push 0
        mov ecx, dword ptr [ebp - 424h]
        ; Exact mapped bytes E8 73 F5 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 32ch]
        mov dword ptr [ebp - 428h], eax
        push 0
        mov ecx, dword ptr [ebp - 428h]
        ; Exact mapped bytes E8 57 F5 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 330h]
        mov dword ptr [ebp - 42ch], edx
        push 0
        mov ecx, dword ptr [ebp - 42ch]
        ; Exact mapped bytes E8 3B F5 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 334h]
        mov dword ptr [ebp - 430h], ecx
        push 0
        mov ecx, dword ptr [ebp - 430h]
        ; Exact mapped bytes E8 1F F5 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov byte ptr [ebp - 0dh], 0
        mov byte ptr [ebp - 19h], 0
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x586a69db
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 7
        ; Exact mapped bytes 0F 8D 7B 04 00 00: jge 0x586a6e60
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 7D C9 E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xc9
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + ecx*4 + 154h]
        shr edx, 10h
        ; Exact mapped bytes 66 89 55 E0: mov word ptr [ebp - 0x20], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 5E C9 E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc9
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + ecx*4 + 154h]
        and edx, 0ffffh
        movzx eax, dx
        mov dword ptr [ebp - 18h], eax
        movzx ecx, word ptr [ebp - 20h]
        cmp ecx, 3
        ; Exact mapped bytes 0F 85 16 03 00 00: jne 0x586a6d4b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0ah
        ; Exact mapped bytes 0F 84 0C 03 00 00: je 0x586a6d4b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 1ah
        ; Exact mapped bytes 74 30: je 0x586a6a75
        __asm _emit 0x74
        __asm _emit 0x30
        cmp dword ptr [ebp - 18h], 1bh
        ; Exact mapped bytes 74 2A: je 0x586a6a75
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp dword ptr [ebp - 18h], 1ch
        ; Exact mapped bytes 74 24: je 0x586a6a75
        __asm _emit 0x74
        __asm _emit 0x24
        cmp dword ptr [ebp - 18h], 1dh
        ; Exact mapped bytes 74 1E: je 0x586a6a75
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp - 18h], 1eh
        ; Exact mapped bytes 74 18: je 0x586a6a75
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [ebp - 18h], 1fh
        ; Exact mapped bytes 74 12: je 0x586a6a75
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 18h], 20h
        ; Exact mapped bytes 74 0C: je 0x586a6a75
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp - 18h], 21h
        ; Exact mapped bytes 74 06: je 0x586a6a75
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 18h], 22h
        ; Exact mapped bytes 75 77: jne 0x586a6aec
        __asm _emit 0x75
        __asm _emit 0x77
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 328h]
        mov dword ptr [ebp - 438h], eax
        push 119h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C E0 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 434h], eax
        mov ecx, dword ptr [ebp - 434h]
        push ecx
        mov ecx, dword ptr [ebp - 438h]
        ; Exact mapped bytes E8 84 F4 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 32ch]
        mov dword ptr [ebp - 440h], eax
        push 11ah
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 E0 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xe0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 43ch], eax
        mov ecx, dword ptr [ebp - 43ch]
        push ecx
        mov ecx, dword ptr [ebp - 440h]
        ; Exact mapped bytes E8 4D F4 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf4
        __asm _emit 0xdd
        __asm _emit 0xff
        mov byte ptr [ebp - 0dh], 1
        ; Exact mapped bytes E9 5A 02 00 00: jmp 0x586a6d46
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 26h
        ; Exact mapped bytes 74 06: je 0x586a6af8
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 18h], 27h
        ; Exact mapped bytes 75 77: jne 0x586a6b6f
        __asm _emit 0x75
        __asm _emit 0x77
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 328h]
        mov dword ptr [ebp - 448h], eax
        push 11bh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 E0 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 444h], eax
        mov ecx, dword ptr [ebp - 444h]
        push ecx
        mov ecx, dword ptr [ebp - 448h]
        ; Exact mapped bytes E8 01 F4 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf4
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 32ch]
        mov dword ptr [ebp - 450h], eax
        push 11ch
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 DF DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xdf
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 44ch], eax
        mov ecx, dword ptr [ebp - 44ch]
        push ecx
        mov ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes E8 CA F3 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf3
        __asm _emit 0xdd
        __asm _emit 0xff
        mov byte ptr [ebp - 0dh], 1
        ; Exact mapped bytes E9 D7 01 00 00: jmp 0x586a6d46
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 28h
        ; Exact mapped bytes 75 71: jne 0x586a6be6
        __asm _emit 0x75
        __asm _emit 0x71
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 328h]
        mov dword ptr [ebp - 458h], eax
        push 3dh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F DF DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xdf
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 454h], eax
        mov ecx, dword ptr [ebp - 454h]
        push ecx
        mov ecx, dword ptr [ebp - 458h]
        ; Exact mapped bytes E8 87 F3 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf3
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 32ch]
        mov dword ptr [ebp - 460h], eax
        push 3ch
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B DF DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xdf
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 45ch], eax
        mov ecx, dword ptr [ebp - 45ch]
        push ecx
        mov ecx, dword ptr [ebp - 460h]
        ; Exact mapped bytes E8 53 F3 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf3
        __asm _emit 0xdd
        __asm _emit 0xff
        mov byte ptr [ebp - 0dh], 1
        ; Exact mapped bytes E9 60 01 00 00: jmp 0x586a6d46
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 2ch
        ; Exact mapped bytes 72 7A: jb 0x586a6c66
        __asm _emit 0x72
        __asm _emit 0x7a
        movzx edx, word ptr [ebp - 20h]
        cmp edx, 33h
        ; Exact mapped bytes 7F 71: jg 0x586a6c66
        __asm _emit 0x7f
        __asm _emit 0x71
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 328h]
        mov dword ptr [ebp - 468h], ecx
        push 38h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F DF DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 464h], eax
        mov edx, dword ptr [ebp - 464h]
        push edx
        mov ecx, dword ptr [ebp - 468h]
        ; Exact mapped bytes E8 07 F3 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf3
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 32ch]
        mov dword ptr [ebp - 470h], ecx
        push 37h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB DE DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xde
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 46ch], eax
        mov edx, dword ptr [ebp - 46ch]
        push edx
        mov ecx, dword ptr [ebp - 470h]
        ; Exact mapped bytes E8 D3 F2 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf2
        __asm _emit 0xdd
        __asm _emit 0xff
        mov byte ptr [ebp - 0dh], 1
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x586a6d46
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 2bh
        ; Exact mapped bytes 75 6E: jne 0x586a6cda
        __asm _emit 0x75
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 328h]
        mov dword ptr [ebp - 478h], ecx
        push 36h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 DE DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xde
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 474h], eax
        mov edx, dword ptr [ebp - 474h]
        push edx
        mov ecx, dword ptr [ebp - 478h]
        ; Exact mapped bytes E8 90 F2 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf2
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 32ch]
        mov dword ptr [ebp - 480h], ecx
        push 35h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 DE DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xde
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 47ch], eax
        mov edx, dword ptr [ebp - 47ch]
        push edx
        mov ecx, dword ptr [ebp - 480h]
        ; Exact mapped bytes E8 5C F2 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf2
        __asm _emit 0xdd
        __asm _emit 0xff
        mov byte ptr [ebp - 0dh], 1
        ; Exact mapped bytes EB 6C: jmp 0x586a6d46
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 328h]
        mov dword ptr [ebp - 488h], ecx
        push 3dh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A DE DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xde
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 484h], eax
        mov edx, dword ptr [ebp - 484h]
        push edx
        mov ecx, dword ptr [ebp - 488h]
        ; Exact mapped bytes E8 22 F2 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf2
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 32ch]
        mov dword ptr [ebp - 490h], ecx
        push 3ch
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 DD DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 48ch], eax
        mov edx, dword ptr [ebp - 48ch]
        push edx
        mov ecx, dword ptr [ebp - 490h]
        ; Exact mapped bytes E8 EE F1 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov byte ptr [ebp - 0dh], 1
        ; Exact mapped bytes E9 10 01 00 00: jmp 0x586a6e5b
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 20h]
        cmp eax, 4
        ; Exact mapped bytes 75 0F: jne 0x586a6d63
        __asm _emit 0x75
        __asm _emit 0x0f
        cmp dword ptr [ebp - 18h], 5
        ; Exact mapped bytes 75 09: jne 0x586a6d63
        __asm _emit 0x75
        __asm _emit 0x09
        mov byte ptr [ebp - 19h], 1
        ; Exact mapped bytes E9 F8 00 00 00: jmp 0x586a6e5b
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 20h]
        cmp ecx, 4
        ; Exact mapped bytes 75 74: jne 0x586a6de0
        __asm _emit 0x75
        __asm _emit 0x74
        cmp dword ptr [ebp - 18h], 18h
        ; Exact mapped bytes 75 6E: jne 0x586a6de0
        __asm _emit 0x75
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 328h]
        mov dword ptr [ebp - 498h], eax
        push 3dh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 DD DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xdd
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 494h], eax
        mov ecx, dword ptr [ebp - 494h]
        push ecx
        mov ecx, dword ptr [ebp - 498h]
        ; Exact mapped bytes E8 8A F1 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 32ch]
        mov dword ptr [ebp - 4a0h], eax
        push 3ch
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E DD DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xdd
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 49ch], eax
        mov ecx, dword ptr [ebp - 49ch]
        push ecx
        mov ecx, dword ptr [ebp - 4a0h]
        ; Exact mapped bytes E8 56 F1 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov byte ptr [ebp - 0dh], 1
        ; Exact mapped bytes EB 7B: jmp 0x586a6e5b
        __asm _emit 0xeb
        __asm _emit 0x7b
        movzx edx, word ptr [ebp - 20h]
        cmp edx, 4
        ; Exact mapped bytes 75 72: jne 0x586a6e5b
        __asm _emit 0x75
        __asm _emit 0x72
        cmp dword ptr [ebp - 18h], 29h
        ; Exact mapped bytes 75 6C: jne 0x586a6e5b
        __asm _emit 0x75
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 328h]
        mov dword ptr [ebp - 4a8h], ecx
        push 3dh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 DD DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xdd
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 4a4h], eax
        mov edx, dword ptr [ebp - 4a4h]
        push edx
        mov ecx, dword ptr [ebp - 4a8h]
        ; Exact mapped bytes E8 0D F1 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 32ch]
        mov dword ptr [ebp - 4b0h], ecx
        push 3ch
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 DC DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xdc
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 4ach], eax
        mov edx, dword ptr [ebp - 4ach]
        push edx
        mov ecx, dword ptr [ebp - 4b0h]
        ; Exact mapped bytes E8 D9 F0 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov byte ptr [ebp - 0dh], 1
        ; Exact mapped bytes E9 72 FB FF FF: jmp 0x586a69d2
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [ebp - 0dh]
        cmp eax, 1
        ; Exact mapped bytes 75 39: jne 0x586a6ea2
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 328h]
        mov dword ptr [ebp - 4b4h], edx
        push 1
        mov ecx, dword ptr [ebp - 4b4h]
        ; Exact mapped bytes E8 5B F0 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 32ch]
        mov dword ptr [ebp - 4b8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 4b8h]
        ; Exact mapped bytes E8 3F F0 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        movzx edx, byte ptr [ebp - 19h]
        cmp edx, 1
        ; Exact mapped bytes 75 39: jne 0x586a6ee4
        __asm _emit 0x75
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 330h]
        mov dword ptr [ebp - 4bch], ecx
        push 1
        mov ecx, dword ptr [ebp - 4bch]
        ; Exact mapped bytes E8 19 F0 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 334h]
        mov dword ptr [ebp - 4c0h], eax
        push 1
        mov ecx, dword ptr [ebp - 4c0h]
        ; Exact mapped bytes E8 FD EF DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xef
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
